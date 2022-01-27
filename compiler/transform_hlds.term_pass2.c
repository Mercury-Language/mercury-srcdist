/*
** Automatically generated from `term_pass2.m'
** by the Mercury compiler,
** version 14.01.1, configured for x86_64-apple-darwin13.3.0.
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
#include "int.mih"
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
#include "transform_hlds.term_traversal.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 34 "term_pass2.m"
struct transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0_s {
#line 88 "term_pass2.m"
  MR_bool transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__succeeded;
#line 93 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__Errors_17;
#line 104 "term_pass2.m"
  jmp_buf transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__commit_0;
#line 104 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__Error_19;
#line 104 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__V_30_30;
#line 104 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__conv0_Error_19;
#line 34 "term_pass2.m"
};


#line 151 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 154 "transform_hlds.term_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 157 "transform_hlds.term_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "transform_hlds.term_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_termination_error_context_0;

#line 163 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0;

#line 166 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0;

#line 169 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0;

#line 172 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0;

#line 175 "transform_hlds.term_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_call_weight_info_0_0[2];

#line 178 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_call_weight_info_0_0;

#line 181 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_call_weight_info_0_0[1];

#line 184 "transform_hlds.term_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_call_weight_info_0[1];

#line 187 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_call_weight_info_0[1];

#line 190 "transform_hlds.term_pass2.c"
static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_call_weight_info_0[1];

#line 193 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_0;

#line 196 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_1;

#line 199 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__enum_value_ordered_fixpoint_dir_0[2];

#line 202 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__enum_name_ordered_fixpoint_dir_0[2];

#line 205 "transform_hlds.term_pass2.c"
static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_fixpoint_dir_0[2];

#line 208 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__list__ti_list_1bool__type_ctor_info_bool_0;

#line 211 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0;

#line 214 "transform_hlds.term_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_0[2];

#line 217 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_0;

#line 220 "transform_hlds.term_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_1[1];

#line 223 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_1;

#line 226 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_0[1];

#line 229 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_1[1];

#line 232 "transform_hlds.term_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_term_pass2_result_0[2];

#line 235 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_term_pass2_result_0[2];

#line 238 "transform_hlds.term_pass2.c"
static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_term_pass2_result_0[2];

#line 241 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0_10001(
#line 244 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 246 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2);

#line 249 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0_10001(
#line 252 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 254 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 256 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3);

#line 259 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_graph_0_0_10001(
#line 262 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 264 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2);

#line 267 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_graph_0_0_10001(
#line 270 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 272 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 274 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3);

#line 277 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_info_0_0_10001(
#line 280 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 282 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2);

#line 285 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_info_0_0_10001(
#line 288 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 290 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 292 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3);

#line 295 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____fixpoint_dir_0_0_10001(
#line 298 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 300 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2);

#line 303 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____fixpoint_dir_0_0_10001(
#line 306 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 308 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 310 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3);

#line 313 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____term_pass2_result_0_0_10001(
#line 316 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 318 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2);

#line 321 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____term_pass2_result_0_0_10001(
#line 324 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 326 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 328 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3);

#line 286 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_115_105_110_103_108_101_95_97_114_103_95_111_116_104_101_114_115_95_95_50_56_54_95_95_49_95_95_91_49_93_95_48_2_p_0(
#line 286 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_23);

#line 255 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_97_100_100_95_115_105_110_103_108_101_95_97_114_103_95_95_50_53_53_95_95_49_95_95_91_49_93_95_48_2_p_0(
#line 255 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_20);

#line 397 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__397__1_2_p_0(
#line 397 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CanLoop_48,
#line 397 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_75);

#line 415 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__415__1_2_p_0(
#line 415 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_70,
#line 415 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CanLoop_78);

#line 286 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_single_arg_others__286__1_2_p_0(
#line 286 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_22,
#line 286 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_23);

#line 255 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_add_single_arg__255__1_2_p_0(
#line 255 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_19,
#line 255 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_20);

#line 142 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__142__1_3_p_0(
#line 142 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__InArgs_15,
#line 142 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_21,
#line 142 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__3_22);

#line 76 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____term_pass2_result_0_0(
#line 76 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 76 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 76 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3);

#line 76 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____term_pass2_result_0_0(
#line 76 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 76 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2);

#line 63 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____fixpoint_dir_0_0(
#line 63 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 63 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 63 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3);

#line 63 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____fixpoint_dir_0_0(
#line 63 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_1,
#line 63 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2);

#line 67 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_info_0_0(
#line 67 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 67 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 67 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3);

#line 67 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_info_0_0(
#line 67 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 67 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2);

#line 73 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_graph_0_0(
#line 73 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 73 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 73 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3);

#line 73 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_graph_0_0(
#line 73 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 73 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2);

#line 74 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0(
#line 74 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 74 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 74 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3);

#line 74 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0(
#line 74 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 74 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2);

#line 579 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_p_0(
#line 579 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 579 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__LookforPPId_11,
#line 579 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ProcContext_12,
#line 579 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__WeightSoFar0_13,
#line 579 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__VisitedCalls_14,
#line 579 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CallWeights_15,
#line 579 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__Cycles_16);

#line 564 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(
#line 564 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 564 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__LookforPPId_2,
#line 564 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__Context_3,
#line 564 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__WeightSoFar_4,
#line 564 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__VisitedCalls_5,
#line 564 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CallWeights_6,
#line 564 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__7_7);

#line 540 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(
#line 540 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 540 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CallWeights_2,
#line 540 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__Module_3,
#line 540 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__4_4);

#line 473 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__add_call_arcs_4_p_0(
#line 473 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 473 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 473 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3,
#line 473 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_4);

#line 422 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__update_rec_input_suppliers_7_p_0(
#line 422 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 422 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ActiveVars_2,
#line 422 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__FixDir_3,
#line 422 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__4_4,
#line 422 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__5_5,
#line 422 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecBag_0_6,
#line 422 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_RecBag_7);

#line 397 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_11_p_0_2(
#line 397 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg);

#line 415 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_11_p_0_1(
#line 415 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg);

#line 369 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_11_p_0(
#line 369 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 369 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__FixDir_2,
#line 369 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__PassInfo_3,
#line 369 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__RecSupplierMap_4,
#line 369 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__5_5,
#line 369 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__6_6,
#line 369 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__7_7,
#line 369 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_8,
#line 369 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_9);

#line 337 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_p_0(
#line 337 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__SCC_10,
#line 337 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__FixDir_11,
#line 337 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__PassInfo_12,
#line 337 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__RecSupplierMap0_13,
#line 337 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__Result_14,
#line 337 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_24,
#line 337 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_25);

#line 286 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0_1(
#line 286 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg,
#line 286 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 286 "term_pass2.m"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_2);

#line 278 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0(
#line 278 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 278 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__Module_2,
#line 278 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0_3,
#line 278 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_4);

#line 255 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0_1(
#line 255 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg,
#line 255 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 255 "term_pass2.m"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_2);

#line 246 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0(
#line 246 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 246 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__ArgNum_7,
#line 246 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_8,
#line 246 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__BoolList_9);

#line 207 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_p_0(
#line 207 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__TrialPPId_10,
#line 207 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__RestSCC_11,
#line 207 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__ArgNum0_12,
#line 207 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__PassInfo_13,
#line 207 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__Terminates_14,
#line 207 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_21,
#line 207 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_22);

#line 187 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__find_min_arity_proc_6_p_0(
#line 187 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 187 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__BestSofarPPId_2,
#line 187 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__BestSofarArity_3,
#line 187 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_4,
#line 187 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__5_5,
#line 187 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__6_6);

#line 166 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_single_arg_7_p_0(
#line 166 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__SCC_8,
#line 166 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__PassInfo_9,
#line 166 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__Terminates_10,
#line 166 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_18,
#line 166 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_19);

#line 139 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0_1(
#line 139 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg,
#line 139 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 139 "term_pass2.m"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_2);

#line 128 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0(
#line 128 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 128 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_2,
#line 128 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__3_3);

#line 104 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_1(
#line 104 "term_pass2.m"
  void * transform_hlds__term_pass2__env_ptr_arg);

#line 104 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_3(
#line 104 "term_pass2.m"
  void * transform_hlds__term_pass2__env_ptr_arg);

#line 104 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_2(
#line 104 "term_pass2.m"
  void * transform_hlds__term_pass2__env_ptr_arg);

#line 104 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_4(
#line 104 "term_pass2.m"
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
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0))
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
    ((MR_Box) (&transform_hlds__term_pass2__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_termination_error_context_0)),
    ((MR_Box) (&transform_hlds__term_pass2__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_termination_error_context_0))
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



#line 881 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 889 "transform_hlds.term_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_pass2__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 897 "transform_hlds.term_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 905 "transform_hlds.term_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_termination_error_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0
  }
};

#line 913 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 922 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_pass2__pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0
  }
};

#line 931 "transform_hlds.term_pass2.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_call_weight_dst_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0_10001)),
  (MR_String) "transform_hlds.term_pass2",
  (MR_String) "call_weight_dst_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 952 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0
  }
};

#line 961 "transform_hlds.term_pass2.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_call_weight_graph_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_pass2____Unify____call_weight_graph_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass2____Compare____call_weight_graph_0_0_10001)),
  (MR_String) "transform_hlds.term_pass2",
  (MR_String) "call_weight_graph",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 982 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0
  }
};

#line 990 "transform_hlds.term_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_call_weight_info_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass2__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0
};

#line 996 "transform_hlds.term_pass2.c"
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

#line 1011 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_call_weight_info_0_0[1] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_call_weight_info_0_0
};

#line 1016 "transform_hlds.term_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_call_weight_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_call_weight_info_0_0
  }
};

#line 1025 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_call_weight_info_0[1] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_call_weight_info_0_0
};

#line 1030 "transform_hlds.term_pass2.c"
static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_call_weight_info_0[1] = {
  (MR_Integer) 0
};

#line 1035 "transform_hlds.term_pass2.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_call_weight_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_pass2____Unify____call_weight_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass2____Compare____call_weight_info_0_0_10001)),
  (MR_String) "transform_hlds.term_pass2",
  (MR_String) "call_weight_info",
  {
    transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_call_weight_info_0
  },
  {
    transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_call_weight_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_call_weight_info_0
};

#line 1056 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_0 = {
  (MR_String) "up",
  (MR_Integer) 0
};

#line 1062 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_1 = {
  (MR_String) "down",
  (MR_Integer) 1
};

#line 1068 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__enum_value_ordered_fixpoint_dir_0[2] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_0,
  &transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_1
};

#line 1074 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__enum_name_ordered_fixpoint_dir_0[2] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_1,
  &transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_0
};

#line 1080 "transform_hlds.term_pass2.c"
static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_fixpoint_dir_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1086 "transform_hlds.term_pass2.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_fixpoint_dir_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__term_pass2____Unify____fixpoint_dir_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass2____Compare____fixpoint_dir_0_0_10001)),
  (MR_String) "transform_hlds.term_pass2",
  (MR_String) "fixpoint_dir",
  {
    transform_hlds__term_pass2__transform_hlds__term_pass2__enum_name_ordered_fixpoint_dir_0
  },
  {
    transform_hlds__term_pass2__transform_hlds__term_pass2__enum_value_ordered_fixpoint_dir_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_fixpoint_dir_0
};

#line 1107 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 1115 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_pass2__list__ti_list_1bool__type_ctor_info_bool_0
  }
};

#line 1124 "transform_hlds.term_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_call_weight_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0
};

#line 1130 "transform_hlds.term_pass2.c"
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

#line 1145 "transform_hlds.term_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass2__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0
};

#line 1150 "transform_hlds.term_pass2.c"
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

#line 1165 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_0[1] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_0
};

#line 1170 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_1[1] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_1
};

#line 1175 "transform_hlds.term_pass2.c"
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

#line 1189 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_term_pass2_result_0[2] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_1,
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_0
};

#line 1195 "transform_hlds.term_pass2.c"
static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_term_pass2_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1201 "transform_hlds.term_pass2.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_term_pass2_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_pass2____Unify____term_pass2_result_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass2____Compare____term_pass2_result_0_0_10001)),
  (MR_String) "transform_hlds.term_pass2",
  (MR_String) "term_pass2_result",
  {
    transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_term_pass2_result_0
  },
  {
    transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_term_pass2_result_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_term_pass2_result_0
};

#line 1222 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0_10001(
#line 1225 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 1227 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2)
#line 1229 "transform_hlds.term_pass2.c"
{
#line 1231 "transform_hlds.term_pass2.c"
  {
#line 1233 "transform_hlds.term_pass2.c"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 1236 "transform_hlds.term_pass2.c"
    {
#line 1238 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2));
    }
#line 1241 "transform_hlds.term_pass2.c"
    return transform_hlds__term_pass2__succeeded;
#line 1243 "transform_hlds.term_pass2.c"
  }
#line 1245 "transform_hlds.term_pass2.c"
}

#line 1248 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0_10001(
#line 1251 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 1253 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 1255 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3)
#line 1257 "transform_hlds.term_pass2.c"
{
#line 1259 "transform_hlds.term_pass2.c"
  {
#line 1261 "transform_hlds.term_pass2.c"
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__1_1;

#line 1264 "transform_hlds.term_pass2.c"
    {
#line 1266 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0(&transform_hlds__term_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_3));
    }
#line 1269 "transform_hlds.term_pass2.c"
    *transform_hlds__term_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__1_1));
#line 1271 "transform_hlds.term_pass2.c"
  }
#line 1273 "transform_hlds.term_pass2.c"
}

#line 1276 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_graph_0_0_10001(
#line 1279 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 1281 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2)
#line 1283 "transform_hlds.term_pass2.c"
{
#line 1285 "transform_hlds.term_pass2.c"
  {
#line 1287 "transform_hlds.term_pass2.c"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 1290 "transform_hlds.term_pass2.c"
    {
#line 1292 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____call_weight_graph_0_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2));
    }
#line 1295 "transform_hlds.term_pass2.c"
    return transform_hlds__term_pass2__succeeded;
#line 1297 "transform_hlds.term_pass2.c"
  }
#line 1299 "transform_hlds.term_pass2.c"
}

#line 1302 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_graph_0_0_10001(
#line 1305 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 1307 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 1309 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3)
#line 1311 "transform_hlds.term_pass2.c"
{
#line 1313 "transform_hlds.term_pass2.c"
  {
#line 1315 "transform_hlds.term_pass2.c"
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__1_1;

#line 1318 "transform_hlds.term_pass2.c"
    {
#line 1320 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2____Compare____call_weight_graph_0_0(&transform_hlds__term_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_3));
    }
#line 1323 "transform_hlds.term_pass2.c"
    *transform_hlds__term_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__1_1));
#line 1325 "transform_hlds.term_pass2.c"
  }
#line 1327 "transform_hlds.term_pass2.c"
}

#line 1330 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_info_0_0_10001(
#line 1333 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 1335 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2)
#line 1337 "transform_hlds.term_pass2.c"
{
#line 1339 "transform_hlds.term_pass2.c"
  {
#line 1341 "transform_hlds.term_pass2.c"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 1344 "transform_hlds.term_pass2.c"
    {
#line 1346 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____call_weight_info_0_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2));
    }
#line 1349 "transform_hlds.term_pass2.c"
    return transform_hlds__term_pass2__succeeded;
#line 1351 "transform_hlds.term_pass2.c"
  }
#line 1353 "transform_hlds.term_pass2.c"
}

#line 1356 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_info_0_0_10001(
#line 1359 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 1361 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 1363 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3)
#line 1365 "transform_hlds.term_pass2.c"
{
#line 1367 "transform_hlds.term_pass2.c"
  {
#line 1369 "transform_hlds.term_pass2.c"
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__1_1;

#line 1372 "transform_hlds.term_pass2.c"
    {
#line 1374 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2____Compare____call_weight_info_0_0(&transform_hlds__term_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_3));
    }
#line 1377 "transform_hlds.term_pass2.c"
    *transform_hlds__term_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__1_1));
#line 1379 "transform_hlds.term_pass2.c"
  }
#line 1381 "transform_hlds.term_pass2.c"
}

#line 1384 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____fixpoint_dir_0_0_10001(
#line 1387 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 1389 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2)
#line 1391 "transform_hlds.term_pass2.c"
{
#line 1393 "transform_hlds.term_pass2.c"
  {
#line 1395 "transform_hlds.term_pass2.c"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 1398 "transform_hlds.term_pass2.c"
    {
#line 1400 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____fixpoint_dir_0_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2));
    }
#line 1403 "transform_hlds.term_pass2.c"
    return transform_hlds__term_pass2__succeeded;
#line 1405 "transform_hlds.term_pass2.c"
  }
#line 1407 "transform_hlds.term_pass2.c"
}

#line 1410 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____fixpoint_dir_0_0_10001(
#line 1413 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 1415 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 1417 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3)
#line 1419 "transform_hlds.term_pass2.c"
{
#line 1421 "transform_hlds.term_pass2.c"
  {
#line 1423 "transform_hlds.term_pass2.c"
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__1_1;

#line 1426 "transform_hlds.term_pass2.c"
    {
#line 1428 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2____Compare____fixpoint_dir_0_0(&transform_hlds__term_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_3));
    }
#line 1431 "transform_hlds.term_pass2.c"
    *transform_hlds__term_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__1_1));
#line 1433 "transform_hlds.term_pass2.c"
  }
#line 1435 "transform_hlds.term_pass2.c"
}

#line 1438 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____term_pass2_result_0_0_10001(
#line 1441 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 1443 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2)
#line 1445 "transform_hlds.term_pass2.c"
{
#line 1447 "transform_hlds.term_pass2.c"
  {
#line 1449 "transform_hlds.term_pass2.c"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 1452 "transform_hlds.term_pass2.c"
    {
#line 1454 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____term_pass2_result_0_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2));
    }
#line 1457 "transform_hlds.term_pass2.c"
    return transform_hlds__term_pass2__succeeded;
#line 1459 "transform_hlds.term_pass2.c"
  }
#line 1461 "transform_hlds.term_pass2.c"
}

#line 1464 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____term_pass2_result_0_0_10001(
#line 1467 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 1469 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 1471 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3)
#line 1473 "transform_hlds.term_pass2.c"
{
#line 1475 "transform_hlds.term_pass2.c"
  {
#line 1477 "transform_hlds.term_pass2.c"
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__1_1;

#line 1480 "transform_hlds.term_pass2.c"
    {
#line 1482 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2____Compare____term_pass2_result_0_0(&transform_hlds__term_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_3));
    }
#line 1485 "transform_hlds.term_pass2.c"
    *transform_hlds__term_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__1_1));
#line 1487 "transform_hlds.term_pass2.c"
  }
#line 1489 "transform_hlds.term_pass2.c"
}

#line 286 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_115_105_110_103_108_101_95_97_114_103_95_111_116_104_101_114_115_95_95_50_56_54_95_95_49_95_95_91_49_93_95_48_2_p_0(
#line 286 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_23)
#line 286 "term_pass2.m"
{
#line 623 "term_pass2.m"
  {
#line 623 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 623 "term_pass2.m"
    *transform_hlds__term_pass2__HeadVar__2_23 = (MR_Integer) 0;
#line 623 "term_pass2.m"
  }
#line 286 "term_pass2.m"
}

#line 255 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_97_100_100_95_115_105_110_103_108_101_95_97_114_103_95_95_50_53_53_95_95_49_95_95_91_49_93_95_48_2_p_0(
#line 255 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_20)
#line 255 "term_pass2.m"
{
#line 623 "term_pass2.m"
  {
#line 623 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 623 "term_pass2.m"
    *transform_hlds__term_pass2__HeadVar__2_20 = (MR_Integer) 0;
#line 623 "term_pass2.m"
  }
#line 255 "term_pass2.m"
}

#line 397 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__397__1_2_p_0(
#line 397 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CanLoop_48,
#line 397 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_75)
#line 397 "term_pass2.m"
{
#line 397 "term_pass2.m"
  {
#line 397 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 397 "term_pass2.m"
    {
#line 397 "term_pass2.m"
      return transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[2], ((MR_Box) (transform_hlds__term_pass2__CanLoop_48)), ((MR_Box) (transform_hlds__term_pass2__HeadVar__2_75)));
    }
#line 397 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 397 "term_pass2.m"
  }
#line 397 "term_pass2.m"
}

#line 415 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__415__1_2_p_0(
#line 415 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_70,
#line 415 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CanLoop_78)
#line 415 "term_pass2.m"
{
#line 415 "term_pass2.m"
  {
#line 415 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 415 "term_pass2.m"
    {
#line 415 "term_pass2.m"
      return transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[2], ((MR_Box) (transform_hlds__term_pass2__CanLoop_78)), ((MR_Box) (transform_hlds__term_pass2__HeadVar__1_70)));
    }
#line 415 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 415 "term_pass2.m"
  }
#line 415 "term_pass2.m"
}

#line 286 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_single_arg_others__286__1_2_p_0(
#line 286 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_22,
#line 286 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_23)
#line 286 "term_pass2.m"
{
#line 623 "term_pass2.m"
  {
#line 623 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 623 "term_pass2.m"
    {
#line 623 "term_pass2.m"
      transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_115_105_110_103_108_101_95_97_114_103_95_111_116_104_101_114_115_95_95_50_56_54_95_95_49_95_95_91_49_93_95_48_2_p_0(transform_hlds__term_pass2__HeadVar__2_23);
#line 623 "term_pass2.m"
      return;
    }
#line 623 "term_pass2.m"
  }
#line 286 "term_pass2.m"
}

#line 255 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_add_single_arg__255__1_2_p_0(
#line 255 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_19,
#line 255 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_20)
#line 255 "term_pass2.m"
{
#line 623 "term_pass2.m"
  {
#line 623 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 623 "term_pass2.m"
    {
#line 623 "term_pass2.m"
      transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_97_100_100_95_115_105_110_103_108_101_95_97_114_103_95_95_50_53_53_95_95_49_95_95_91_49_93_95_48_2_p_0(transform_hlds__term_pass2__HeadVar__2_20);
#line 623 "term_pass2.m"
      return;
    }
#line 623 "term_pass2.m"
  }
#line 255 "term_pass2.m"
}

#line 142 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__142__1_3_p_0(
#line 142 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__InArgs_15,
#line 142 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_21,
#line 142 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__3_22)
#line 142 "term_pass2.m"
{
#line 142 "term_pass2.m"
  {
#line 142 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 140 "term_pass2.m"
    {
#line 140 "term_pass2.m"
      transform_hlds__term_pass2__succeeded = mercury__bag__contains_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__InArgs_15, ((MR_Box) (transform_hlds__term_pass2__HeadVar__2_21)));
    }
#line 142 "term_pass2.m"
    if (transform_hlds__term_pass2__succeeded)
#line 141 "term_pass2.m"
      *transform_hlds__term_pass2__HeadVar__3_22 = (MR_Integer) 1;
#line 142 "term_pass2.m"
    else
#line 143 "term_pass2.m"
      *transform_hlds__term_pass2__HeadVar__3_22 = (MR_Integer) 0;
#line 142 "term_pass2.m"
  }
#line 142 "term_pass2.m"
}

#line 76 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____term_pass2_result_0_0(
#line 76 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 76 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 76 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3)
#line 76 "term_pass2.m"
{
#line 76 "term_pass2.m"
  {
#line 76 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 76 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastX_17 = (MR_Integer) transform_hlds__term_pass2__HeadVar__2_2;
#line 76 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastY_18 = (MR_Integer) transform_hlds__term_pass2__HeadVar__3_3;

#line 76 "term_pass2.m"
    transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__CastX_17 == transform_hlds__term_pass2__CastY_18);
#line 76 "term_pass2.m"
    if (transform_hlds__term_pass2__succeeded)
#line 1692 "transform_hlds.term_pass2.c"
      *transform_hlds__term_pass2__HeadVar__1_1 = (MR_Integer) 0;
#line 76 "term_pass2.m"
    else
#line 76 "term_pass2.m"
      if (((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 76 "term_pass2.m"
        {
#line 76 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));

#line 76 "term_pass2.m"
          if (((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 76 "term_pass2.m"
            {
#line 76 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 0)));

#line 76 "term_pass2.m"
              {
#line 76 "term_pass2.m"
                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[2], transform_hlds__term_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass2__V_22_22)), ((MR_Box) (transform_hlds__term_pass2__V_16_16)));
#line 76 "term_pass2.m"
                return;
              }
#line 76 "term_pass2.m"
            }
#line 76 "term_pass2.m"
          else
#line 1721 "transform_hlds.term_pass2.c"
            *transform_hlds__term_pass2__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "term_pass2.m"
        }
#line 76 "term_pass2.m"
      else
#line 76 "term_pass2.m"
        {
#line 76 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 76 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));

#line 76 "term_pass2.m"
          if (((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1736 "transform_hlds.term_pass2.c"
            *transform_hlds__term_pass2__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "term_pass2.m"
          else
#line 76 "term_pass2.m"
            {
#line 76 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 0)));
#line 76 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 1)));
#line 76 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__V_8_8;

#line 76 "term_pass2.m"
              {
#line 76 "term_pass2.m"
                transform_hlds__term_pass2____Compare____call_weight_info_0_0(&transform_hlds__term_pass2__V_8_8, transform_hlds__term_pass2__V_24_24, transform_hlds__term_pass2__V_6_6);
              }
#line 1754 "transform_hlds.term_pass2.c"
              transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__V_8_8 == (MR_Integer) 0);
#line 76 "term_pass2.m"
              transform_hlds__term_pass2__succeeded = !(transform_hlds__term_pass2__succeeded);
#line 76 "term_pass2.m"
              if (transform_hlds__term_pass2__succeeded)
#line 76 "term_pass2.m"
                *transform_hlds__term_pass2__HeadVar__1_1 = transform_hlds__term_pass2__V_8_8;
#line 76 "term_pass2.m"
              else
#line 76 "term_pass2.m"
                {
#line 76 "term_pass2.m"
                  {
#line 76 "term_pass2.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[4], transform_hlds__term_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass2__V_23_23)), ((MR_Box) (transform_hlds__term_pass2__V_7_7)));
#line 76 "term_pass2.m"
                    return;
                  }
#line 76 "term_pass2.m"
                }
#line 76 "term_pass2.m"
            }
#line 76 "term_pass2.m"
        }
#line 76 "term_pass2.m"
  }
#line 76 "term_pass2.m"
}

#line 76 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____term_pass2_result_0_0(
#line 76 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 76 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2)
#line 76 "term_pass2.m"
{
#line 76 "term_pass2.m"
  {
#line 76 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 76 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastX_9 = (MR_Integer) transform_hlds__term_pass2__HeadVar__1_1;
#line 76 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastY_10 = (MR_Integer) transform_hlds__term_pass2__HeadVar__2_2;

#line 76 "term_pass2.m"
    transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__CastX_9 == transform_hlds__term_pass2__CastY_10);
#line 76 "term_pass2.m"
    if (transform_hlds__term_pass2__succeeded)
#line 76 "term_pass2.m"
      transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 76 "term_pass2.m"
    else
#line 76 "term_pass2.m"
      if (((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 76 "term_pass2.m"
        {
#line 76 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__TypeInfo_11_11;
#line 76 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 76 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__V_8_8;

#line 76 "term_pass2.m"
          transform_hlds__term_pass2__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 76 "term_pass2.m"
          if (transform_hlds__term_pass2__succeeded)
#line 76 "term_pass2.m"
            {
#line 76 "term_pass2.m"
              transform_hlds__term_pass2__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 1829 "transform_hlds.term_pass2.c"
              transform_hlds__term_pass2__TypeInfo_11_11 = (MR_Word) &transform_hlds__term_pass2_scalar_common_1[2];
#line 1831 "transform_hlds.term_pass2.c"
              {
#line 1833 "transform_hlds.term_pass2.c"
                return transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass2__TypeInfo_11_11, ((MR_Box) (transform_hlds__term_pass2__V_7_7)), ((MR_Box) (transform_hlds__term_pass2__V_8_8)));
              }
#line 76 "term_pass2.m"
            }
#line 76 "term_pass2.m"
        }
#line 76 "term_pass2.m"
      else
#line 76 "term_pass2.m"
        {
#line 76 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__TypeInfo_12_12;
#line 76 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 76 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 76 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__V_5_5;
#line 76 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__V_6_6;

#line 76 "term_pass2.m"
          transform_hlds__term_pass2__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 76 "term_pass2.m"
          if (transform_hlds__term_pass2__succeeded)
#line 76 "term_pass2.m"
            {
#line 76 "term_pass2.m"
              transform_hlds__term_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 76 "term_pass2.m"
              transform_hlds__term_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 1865 "transform_hlds.term_pass2.c"
              {
#line 1867 "transform_hlds.term_pass2.c"
                transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____call_weight_info_0_0(transform_hlds__term_pass2__V_3_3, transform_hlds__term_pass2__V_5_5);
              }
#line 76 "term_pass2.m"
              if (transform_hlds__term_pass2__succeeded)
#line 76 "term_pass2.m"
                {
#line 1874 "transform_hlds.term_pass2.c"
                  transform_hlds__term_pass2__TypeInfo_12_12 = (MR_Word) &transform_hlds__term_pass2_scalar_common_2[4];
#line 1876 "transform_hlds.term_pass2.c"
                  {
#line 1878 "transform_hlds.term_pass2.c"
                    return transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass2__TypeInfo_12_12, ((MR_Box) (transform_hlds__term_pass2__V_4_4)), ((MR_Box) (transform_hlds__term_pass2__V_6_6)));
                  }
#line 76 "term_pass2.m"
                }
#line 76 "term_pass2.m"
            }
#line 76 "term_pass2.m"
        }
#line 76 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 76 "term_pass2.m"
  }
#line 76 "term_pass2.m"
}

#line 63 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____fixpoint_dir_0_0(
#line 63 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 63 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 63 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3)
#line 63 "term_pass2.m"
{
#line 63 "term_pass2.m"
  {
#line 63 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 63 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__term_pass2__HeadVar__2_2;
#line 63 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__term_pass2__HeadVar__3_3;

#line 63 "term_pass2.m"
    {
#line 63 "term_pass2.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_pass2__HeadVar__1_1, transform_hlds__term_pass2__Cast_HeadVar1_4, transform_hlds__term_pass2__Cast_HeadVar2_5);
#line 63 "term_pass2.m"
      return;
    }
#line 63 "term_pass2.m"
  }
#line 63 "term_pass2.m"
}

#line 63 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____fixpoint_dir_0_0(
#line 63 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_1,
#line 63 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2)
#line 63 "term_pass2.m"
{
#line 1935 "transform_hlds.term_pass2.c"
  {
#line 1937 "transform_hlds.term_pass2.c"
    MR_bool transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__HeadVar__2_1 == transform_hlds__term_pass2__HeadVar__2_2);

#line 1940 "transform_hlds.term_pass2.c"
    return transform_hlds__term_pass2__succeeded;
#line 1942 "transform_hlds.term_pass2.c"
  }
#line 63 "term_pass2.m"
}

#line 67 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_info_0_0(
#line 67 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 67 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 67 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3)
#line 67 "term_pass2.m"
{
#line 67 "term_pass2.m"
  {
#line 67 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 67 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastX_9 = (MR_Integer) transform_hlds__term_pass2__HeadVar__2_2;
#line 67 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastY_10 = (MR_Integer) transform_hlds__term_pass2__HeadVar__3_3;

#line 67 "term_pass2.m"
    transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__CastX_9 == transform_hlds__term_pass2__CastY_10);
#line 67 "term_pass2.m"
    if (transform_hlds__term_pass2__succeeded)
#line 1971 "transform_hlds.term_pass2.c"
      *transform_hlds__term_pass2__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "term_pass2.m"
    else
#line 67 "term_pass2.m"
      {
#line 67 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 67 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 67 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 0)));
#line 67 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 1)));
#line 67 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_8_8;

#line 67 "term_pass2.m"
        {
#line 67 "term_pass2.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[2], &transform_hlds__term_pass2__V_8_8, ((MR_Box) (transform_hlds__term_pass2__V_4_4)), ((MR_Box) (transform_hlds__term_pass2__V_6_6)));
        }
#line 1993 "transform_hlds.term_pass2.c"
        transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__V_8_8 == (MR_Integer) 0);
#line 67 "term_pass2.m"
        transform_hlds__term_pass2__succeeded = !(transform_hlds__term_pass2__succeeded);
#line 67 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 67 "term_pass2.m"
          *transform_hlds__term_pass2__HeadVar__1_1 = transform_hlds__term_pass2__V_8_8;
#line 67 "term_pass2.m"
        else
#line 67 "term_pass2.m"
          {
#line 67 "term_pass2.m"
            {
#line 67 "term_pass2.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[3], transform_hlds__term_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass2__V_5_5)), ((MR_Box) (transform_hlds__term_pass2__V_7_7)));
#line 67 "term_pass2.m"
              return;
            }
#line 67 "term_pass2.m"
          }
#line 67 "term_pass2.m"
      }
#line 67 "term_pass2.m"
  }
#line 67 "term_pass2.m"
}

#line 67 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_info_0_0(
#line 67 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 67 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2)
#line 67 "term_pass2.m"
{
#line 67 "term_pass2.m"
  {
#line 67 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 67 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastX_7 = (MR_Integer) transform_hlds__term_pass2__HeadVar__1_1;
#line 67 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastY_8 = (MR_Integer) transform_hlds__term_pass2__HeadVar__2_2;

#line 67 "term_pass2.m"
    transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__CastX_7 == transform_hlds__term_pass2__CastY_8);
#line 67 "term_pass2.m"
    if (transform_hlds__term_pass2__succeeded)
#line 67 "term_pass2.m"
      transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 67 "term_pass2.m"
    else
#line 67 "term_pass2.m"
      {
#line 67 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TypeInfo_10_10;
#line 67 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 67 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 67 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 67 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));

#line 2060 "transform_hlds.term_pass2.c"
        {
#line 2062 "transform_hlds.term_pass2.c"
          transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[2], ((MR_Box) (transform_hlds__term_pass2__V_3_3)), ((MR_Box) (transform_hlds__term_pass2__V_5_5)));
        }
#line 67 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 67 "term_pass2.m"
          {
#line 2069 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__TypeInfo_10_10 = (MR_Word) &transform_hlds__term_pass2_scalar_common_2[3];
#line 2071 "transform_hlds.term_pass2.c"
            {
#line 2073 "transform_hlds.term_pass2.c"
              return transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass2__TypeInfo_10_10, ((MR_Box) (transform_hlds__term_pass2__V_4_4)), ((MR_Box) (transform_hlds__term_pass2__V_6_6)));
            }
#line 67 "term_pass2.m"
          }
#line 67 "term_pass2.m"
      }
#line 67 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 67 "term_pass2.m"
  }
#line 67 "term_pass2.m"
}

#line 73 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_graph_0_0(
#line 73 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 73 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 73 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3)
#line 73 "term_pass2.m"
{
#line 73 "term_pass2.m"
  {
#line 73 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 73 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Cast_HeadVar1_4 = transform_hlds__term_pass2__HeadVar__2_2;
#line 73 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Cast_HeadVar2_5 = transform_hlds__term_pass2__HeadVar__3_3;

#line 73 "term_pass2.m"
    {
#line 73 "term_pass2.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[3], transform_hlds__term_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar2_5)));
#line 73 "term_pass2.m"
      return;
    }
#line 73 "term_pass2.m"
  }
#line 73 "term_pass2.m"
}

#line 73 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_graph_0_0(
#line 73 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 73 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2)
#line 73 "term_pass2.m"
{
#line 73 "term_pass2.m"
  {
#line 73 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 73 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Cast_HeadVar1_3 = transform_hlds__term_pass2__HeadVar__1_1;
#line 73 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Cast_HeadVar2_4 = transform_hlds__term_pass2__HeadVar__2_2;

#line 73 "term_pass2.m"
    {
#line 73 "term_pass2.m"
      return transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[3], ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar2_4)));
    }
#line 73 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 73 "term_pass2.m"
  }
#line 73 "term_pass2.m"
}

#line 74 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0(
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
    MR_Word transform_hlds__term_pass2__Cast_HeadVar1_4 = transform_hlds__term_pass2__HeadVar__2_2;
#line 74 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Cast_HeadVar2_5 = transform_hlds__term_pass2__HeadVar__3_3;

#line 74 "term_pass2.m"
    {
#line 74 "term_pass2.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar2_5)));
#line 74 "term_pass2.m"
      return;
    }
#line 74 "term_pass2.m"
  }
#line 74 "term_pass2.m"
}

#line 74 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0(
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
    MR_Word transform_hlds__term_pass2__Cast_HeadVar1_3 = transform_hlds__term_pass2__HeadVar__1_1;
#line 74 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Cast_HeadVar2_4 = transform_hlds__term_pass2__HeadVar__2_2;

#line 74 "term_pass2.m"
    {
#line 74 "term_pass2.m"
      return transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar2_4)));
    }
#line 74 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 74 "term_pass2.m"
  }
#line 74 "term_pass2.m"
}

#line 579 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_p_0(
#line 579 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 579 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__LookforPPId_11,
#line 579 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ProcContext_12,
#line 579 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__WeightSoFar0_13,
#line 579 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__VisitedCalls_14,
#line 579 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CallWeights_15,
#line 579 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__Cycles_16)
#line 579 "term_pass2.m"
{
#line 586 "term_pass2.m"
  {
#line 586 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 586 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__CurPPId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 586 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Context_9;
#line 586 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__EdgeWeight_10;
#line 586 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__WeightSoFar1_17;
#line 586 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));

#line 584 "term_pass2.m"
    transform_hlds__term_pass2__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_26_26, (MR_Integer) 0)));
#line 584 "term_pass2.m"
    transform_hlds__term_pass2__EdgeWeight_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_26_26, (MR_Integer) 1)));
#line 587 "term_pass2.m"
    transform_hlds__term_pass2__WeightSoFar1_17 = (transform_hlds__term_pass2__WeightSoFar0_13 + transform_hlds__term_pass2__EdgeWeight_10);
#line 589 "term_pass2.m"
    {
#line 589 "term_pass2.m"
      transform_hlds__term_pass2__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_pass2__CurPPId_8, transform_hlds__term_pass2__LookforPPId_11);
    }
#line 602 "term_pass2.m"
    if (transform_hlds__term_pass2__succeeded)
#line 599 "term_pass2.m"
      {
#line 592 "term_pass2.m"
        transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__WeightSoFar1_17 >= (MR_Integer) 0);
#line 599 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 593 "term_pass2.m"
          {
#line 593 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__FinalVisitedCalls_18;
#line 593 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RevFinalVisitedCalls_19;
#line 593 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__CycleError_20;
#line 593 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__CycleErrorContext_21;
#line 593 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_28_28;

#line 593 "term_pass2.m"
            {
#line 593 "term_pass2.m"
              transform_hlds__term_pass2__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 593 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_28_28, 0) = ((MR_Box) (transform_hlds__term_pass2__CurPPId_8));
#line 593 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_28_28, 1) = ((MR_Box) (transform_hlds__term_pass2__Context_9));
#line 593 "term_pass2.m"
            }
#line 593 "term_pass2.m"
            {
#line 593 "term_pass2.m"
              transform_hlds__term_pass2__FinalVisitedCalls_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 593 "term_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__FinalVisitedCalls_18, 0) = ((MR_Box) (transform_hlds__term_pass2__V_28_28));
#line 593 "term_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__FinalVisitedCalls_18, 1) = ((MR_Box) (transform_hlds__term_pass2__VisitedCalls_14));
#line 593 "term_pass2.m"
            }
#line 594 "term_pass2.m"
            {
#line 594 "term_pass2.m"
              mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[2], transform_hlds__term_pass2__FinalVisitedCalls_18, &transform_hlds__term_pass2__RevFinalVisitedCalls_19);
            }
#line 595 "term_pass2.m"
            {
#line 595 "term_pass2.m"
              transform_hlds__term_pass2__CycleError_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 595 "term_pass2.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__CycleError_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 595 "term_pass2.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__CycleError_20, 1) = ((MR_Box) (transform_hlds__term_pass2__LookforPPId_11));
#line 595 "term_pass2.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__CycleError_20, 2) = ((MR_Box) (transform_hlds__term_pass2__RevFinalVisitedCalls_19));
#line 595 "term_pass2.m"
            }
#line 596 "term_pass2.m"
            {
#line 596 "term_pass2.m"
              transform_hlds__term_pass2__CycleErrorContext_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 596 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CycleErrorContext_21, 0) = ((MR_Box) (transform_hlds__term_pass2__CycleError_20));
#line 596 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CycleErrorContext_21, 1) = ((MR_Box) (transform_hlds__term_pass2__ProcContext_12));
#line 596 "term_pass2.m"
            }
#line 598 "term_pass2.m"
            {
#line 598 "term_pass2.m"
              MR_Word base;
#line 598 "term_pass2.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 598 "term_pass2.m"
              *transform_hlds__term_pass2__Cycles_16 = base;
#line 598 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__CycleErrorContext_21));
#line 598 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 598 "term_pass2.m"
            }
#line 593 "term_pass2.m"
          }
#line 599 "term_pass2.m"
        else
#line 600 "term_pass2.m"
          *transform_hlds__term_pass2__Cycles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 599 "term_pass2.m"
      }
#line 602 "term_pass2.m"
    else
#line 609 "term_pass2.m"
      {
#line 603 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 603 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__VisitedPPIds_22;

#line 603 "term_pass2.m"
        {
#line 603 "term_pass2.m"
          mercury__assoc_list__keys_2_p_0(transform_hlds__term_pass2__TypeCtorInfo_32_32, (MR_Word) &mercury__term__term__type_ctor_info_context_0, transform_hlds__term_pass2__VisitedCalls_14, &transform_hlds__term_pass2__VisitedPPIds_22);
        }
#line 604 "term_pass2.m"
        {
#line 604 "term_pass2.m"
          transform_hlds__term_pass2__succeeded = mercury__list__member_2_p_0(transform_hlds__term_pass2__TypeCtorInfo_32_32, ((MR_Box) (transform_hlds__term_pass2__CurPPId_8)), transform_hlds__term_pass2__VisitedPPIds_22);
        }
#line 609 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 608 "term_pass2.m"
          *transform_hlds__term_pass2__Cycles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 609 "term_pass2.m"
        else
#line 611 "term_pass2.m"
          {
#line 611 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__TypeCtorInfo_34_34;
#line 611 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__NewVisitedCalls_23;
#line 611 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__NeighboursMap_24;
#line 611 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__NeighboursList_25;
#line 611 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_30_30;
#line 612 "term_pass2.m"
            MR_Box transform_hlds__term_pass2__conv0_NeighboursMap_24;

#line 611 "term_pass2.m"
            {
#line 611 "term_pass2.m"
              transform_hlds__term_pass2__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 611 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_30_30, 0) = ((MR_Box) (transform_hlds__term_pass2__CurPPId_8));
#line 611 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_30_30, 1) = ((MR_Box) (transform_hlds__term_pass2__Context_9));
#line 611 "term_pass2.m"
            }
#line 611 "term_pass2.m"
            {
#line 611 "term_pass2.m"
              transform_hlds__term_pass2__NewVisitedCalls_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "term_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__NewVisitedCalls_23, 0) = ((MR_Box) (transform_hlds__term_pass2__V_30_30));
#line 611 "term_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__NewVisitedCalls_23, 1) = ((MR_Box) (transform_hlds__term_pass2__VisitedCalls_14));
#line 611 "term_pass2.m"
            }
#line 2406 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 612 "term_pass2.m"
            {
#line 612 "term_pass2.m"
              mercury__map__lookup_3_p_0(transform_hlds__term_pass2__TypeCtorInfo_34_34, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__CallWeights_15, ((MR_Box) (transform_hlds__term_pass2__CurPPId_8)), &transform_hlds__term_pass2__conv0_NeighboursMap_24);
            }
#line 612 "term_pass2.m"
            transform_hlds__term_pass2__NeighboursMap_24 = ((MR_Word) transform_hlds__term_pass2__conv0_NeighboursMap_24);
#line 613 "term_pass2.m"
            {
#line 613 "term_pass2.m"
              mercury__map__to_assoc_list_2_p_0(transform_hlds__term_pass2__TypeCtorInfo_34_34, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], transform_hlds__term_pass2__NeighboursMap_24, &transform_hlds__term_pass2__NeighboursList_25);
            }
#line 614 "term_pass2.m"
            {
#line 614 "term_pass2.m"
              transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(transform_hlds__term_pass2__NeighboursList_25, transform_hlds__term_pass2__LookforPPId_11, transform_hlds__term_pass2__ProcContext_12, transform_hlds__term_pass2__WeightSoFar1_17, transform_hlds__term_pass2__NewVisitedCalls_23, transform_hlds__term_pass2__CallWeights_15, transform_hlds__term_pass2__Cycles_16);
#line 614 "term_pass2.m"
              return;
            }
#line 611 "term_pass2.m"
          }
#line 609 "term_pass2.m"
      }
#line 586 "term_pass2.m"
  }
#line 579 "term_pass2.m"
}

#line 564 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(
#line 564 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 564 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__LookforPPId_2,
#line 564 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__Context_3,
#line 564 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__WeightSoFar_4,
#line 564 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__VisitedCalls_5,
#line 564 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CallWeights_6,
#line 564 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__7_7)
#line 564 "term_pass2.m"
{
#line 569 "term_pass2.m"
  {
#line 569 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 569 "term_pass2.m"
    if ((transform_hlds__term_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 569 "term_pass2.m"
      *transform_hlds__term_pass2__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 569 "term_pass2.m"
    else
#line 572 "term_pass2.m"
      {
#line 572 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Neighbour_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 572 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Neighbours_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 572 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Cycles1_21;
#line 572 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Cycles2_22;

#line 573 "term_pass2.m"
        {
#line 573 "term_pass2.m"
          transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_p_0(transform_hlds__term_pass2__Neighbour_13, transform_hlds__term_pass2__LookforPPId_2, transform_hlds__term_pass2__Context_3, transform_hlds__term_pass2__WeightSoFar_4, transform_hlds__term_pass2__VisitedCalls_5, transform_hlds__term_pass2__CallWeights_6, &transform_hlds__term_pass2__Cycles1_21);
        }
#line 575 "term_pass2.m"
        {
#line 575 "term_pass2.m"
          transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(transform_hlds__term_pass2__Neighbours_14, transform_hlds__term_pass2__LookforPPId_2, transform_hlds__term_pass2__Context_3, transform_hlds__term_pass2__WeightSoFar_4, transform_hlds__term_pass2__VisitedCalls_5, transform_hlds__term_pass2__CallWeights_6, &transform_hlds__term_pass2__Cycles2_22);
        }
#line 577 "term_pass2.m"
        {
#line 577 "term_pass2.m"
          mercury__list__append_3_p_1((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0, transform_hlds__term_pass2__Cycles1_21, transform_hlds__term_pass2__Cycles2_22, transform_hlds__term_pass2__HeadVar__7_7);
#line 577 "term_pass2.m"
          return;
        }
#line 572 "term_pass2.m"
      }
#line 569 "term_pass2.m"
  }
#line 564 "term_pass2.m"
}

#line 540 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(
#line 540 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 540 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CallWeights_2,
#line 540 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__Module_3,
#line 540 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__4_4)
#line 540 "term_pass2.m"
{
#line 544 "term_pass2.m"
  {
#line 544 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 544 "term_pass2.m"
    if ((transform_hlds__term_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 544 "term_pass2.m"
      *transform_hlds__term_pass2__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 544 "term_pass2.m"
    else
#line 546 "term_pass2.m"
      {
#line 546 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TypeCtorInfo_17_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 546 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__PPId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 546 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__PPIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 546 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Cycles1_12;
#line 546 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Cycles2_13;
#line 546 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__NeighboursMap_19;
#line 546 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__NeighboursList_20;
#line 546 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__PredId_21;
#line 546 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__PredInfo_23;
#line 546 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Context_24;
#line 556 "term_pass2.m"
        MR_Box transform_hlds__term_pass2__conv0_NeighboursMap_19;
#line 558 "term_pass2.m"
        MR_Integer transform_hlds__term_pass2___ProcId_22;

#line 556 "term_pass2.m"
        {
#line 556 "term_pass2.m"
          mercury__map__lookup_3_p_0(transform_hlds__term_pass2__TypeCtorInfo_17_27, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__CallWeights_2, ((MR_Box) (transform_hlds__term_pass2__PPId_7)), &transform_hlds__term_pass2__conv0_NeighboursMap_19);
        }
#line 556 "term_pass2.m"
        transform_hlds__term_pass2__NeighboursMap_19 = ((MR_Word) transform_hlds__term_pass2__conv0_NeighboursMap_19);
#line 557 "term_pass2.m"
        {
#line 557 "term_pass2.m"
          mercury__map__to_assoc_list_2_p_0(transform_hlds__term_pass2__TypeCtorInfo_17_27, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], transform_hlds__term_pass2__NeighboursMap_19, &transform_hlds__term_pass2__NeighboursList_20);
        }
#line 558 "term_pass2.m"
        transform_hlds__term_pass2__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PPId_7, (MR_Integer) 0)));
#line 558 "term_pass2.m"
        transform_hlds__term_pass2___ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PPId_7, (MR_Integer) 1)));
#line 559 "term_pass2.m"
        {
#line 559 "term_pass2.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__term_pass2__Module_3, transform_hlds__term_pass2__PredId_21, &transform_hlds__term_pass2__PredInfo_23);
        }
#line 560 "term_pass2.m"
        {
#line 560 "term_pass2.m"
          hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_pass2__PredInfo_23, &transform_hlds__term_pass2__Context_24);
        }
#line 561 "term_pass2.m"
        {
#line 561 "term_pass2.m"
          transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(transform_hlds__term_pass2__NeighboursList_20, transform_hlds__term_pass2__PPId_7, transform_hlds__term_pass2__Context_24, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_pass2__CallWeights_2, &transform_hlds__term_pass2__Cycles1_12);
        }
#line 548 "term_pass2.m"
        {
#line 548 "term_pass2.m"
          transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(transform_hlds__term_pass2__PPIds_8, transform_hlds__term_pass2__CallWeights_2, transform_hlds__term_pass2__Module_3, &transform_hlds__term_pass2__Cycles2_13);
        }
#line 549 "term_pass2.m"
        {
#line 549 "term_pass2.m"
          mercury__list__append_3_p_1((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0, transform_hlds__term_pass2__Cycles1_12, transform_hlds__term_pass2__Cycles2_13, transform_hlds__term_pass2__HeadVar__4_4);
#line 549 "term_pass2.m"
          return;
        }
#line 546 "term_pass2.m"
      }
#line 544 "term_pass2.m"
  }
#line 540 "term_pass2.m"
}

#line 473 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__add_call_arcs_4_p_0(
#line 473 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 473 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 473 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3,
#line 473 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_4)
#line 473 "term_pass2.m"
{
#line 476 "term_pass2.m"
  while (MR_TRUE)
#line 476 "term_pass2.m"
    {
#line 476 "term_pass2.m"
      /* tailcall optimized into a loop */
#line 476 "term_pass2.m"
      {
#line 476 "term_pass2.m"
        MR_bool transform_hlds__term_pass2__succeeded;

#line 476 "term_pass2.m"
        if ((transform_hlds__term_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 476 "term_pass2.m"
          *transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_4 = transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3;
#line 476 "term_pass2.m"
        else
#line 477 "term_pass2.m"
          {
#line 477 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Path_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 477 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Paths_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 477 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__PPId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Path_9, (MR_Integer) 0)));
#line 477 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__CallSite_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Path_9, (MR_Integer) 1)));
#line 477 "term_pass2.m"
            MR_Integer transform_hlds__term_pass2__GammaConst_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Path_9, (MR_Integer) 2)));
#line 477 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__GammaVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Path_9, (MR_Integer) 3)));
#line 477 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__ActiveVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Path_9, (MR_Integer) 4)));
#line 477 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__CallPPId_20;
#line 477 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Context_21;
#line 477 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__InfCalls0_24;
#line 477 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__CallWeights0_25;
#line 477 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46;

#line 483 "term_pass2.m"
            if ((transform_hlds__term_pass2__CallSite_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "term_pass2.m"
              {
#line 485 "term_pass2.m"
                {
#line 485 "term_pass2.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.add_call_arcs\'/4", (MR_String) "no call site in path in stage 2");
#line 485 "term_pass2.m"
                  return;
                }
#line 484 "term_pass2.m"
              }
#line 483 "term_pass2.m"
            else
#line 480 "term_pass2.m"
              {
#line 480 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__CallSite_14, (MR_Integer) 0)));

#line 480 "term_pass2.m"
                transform_hlds__term_pass2__CallPPId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_40_40, (MR_Integer) 0)));
#line 480 "term_pass2.m"
                transform_hlds__term_pass2__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_40_40, (MR_Integer) 1)));
#line 480 "term_pass2.m"
              }
#line 489 "term_pass2.m"
            if ((transform_hlds__term_pass2__GammaVars_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 488 "term_pass2.m"
              {
#line 488 "term_pass2.m"
              }
#line 489 "term_pass2.m"
            else
#line 490 "term_pass2.m"
              {
#line 491 "term_pass2.m"
                {
#line 491 "term_pass2.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.add_call_arcs\'/4", (MR_String) "gamma variables in path in stage 2");
#line 491 "term_pass2.m"
                  return;
                }
#line 490 "term_pass2.m"
              }
#line 493 "term_pass2.m"
            transform_hlds__term_pass2__InfCalls0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3, (MR_Integer) 0)));
#line 493 "term_pass2.m"
            transform_hlds__term_pass2__CallWeights0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3, (MR_Integer) 1)));
#line 494 "term_pass2.m"
            {
#line 494 "term_pass2.m"
              transform_hlds__term_pass2__succeeded = mercury__bag__is_subbag_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__ActiveVars_17, transform_hlds__term_pass2__HeadVar__2_2);
            }
#line 514 "term_pass2.m"
            if (transform_hlds__term_pass2__succeeded)
#line 512 "term_pass2.m"
              {
#line 512 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__CallWeights1_32;
#line 509 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__NeighbourMap0_26;
#line 495 "term_pass2.m"
                MR_Box transform_hlds__term_pass2__conv0_NeighbourMap0_26;

#line 495 "term_pass2.m"
                {
#line 495 "term_pass2.m"
                  transform_hlds__term_pass2__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__CallWeights0_25, ((MR_Box) (transform_hlds__term_pass2__PPId_13)), &transform_hlds__term_pass2__conv0_NeighbourMap0_26);
                }
#line 495 "term_pass2.m"
                if (transform_hlds__term_pass2__succeeded)
#line 495 "term_pass2.m"
                  {
#line 495 "term_pass2.m"
                    transform_hlds__term_pass2__NeighbourMap0_26 = ((MR_Word) transform_hlds__term_pass2__conv0_NeighbourMap0_26);
#line 495 "term_pass2.m"
                    transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 495 "term_pass2.m"
                  }
#line 509 "term_pass2.m"
                if (transform_hlds__term_pass2__succeeded)
#line 507 "term_pass2.m"
                  {
#line 507 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__NeighbourMap_31;
#line 504 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__OldEdgeInfo_27;
#line 496 "term_pass2.m"
                    MR_Box transform_hlds__term_pass2__conv1_OldEdgeInfo_27;

#line 496 "term_pass2.m"
                    {
#line 496 "term_pass2.m"
                      transform_hlds__term_pass2__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], transform_hlds__term_pass2__NeighbourMap0_26, ((MR_Box) (transform_hlds__term_pass2__CallPPId_20)), &transform_hlds__term_pass2__conv1_OldEdgeInfo_27);
                    }
#line 496 "term_pass2.m"
                    if (transform_hlds__term_pass2__succeeded)
#line 496 "term_pass2.m"
                      {
#line 496 "term_pass2.m"
                        transform_hlds__term_pass2__OldEdgeInfo_27 = ((MR_Word) transform_hlds__term_pass2__conv1_OldEdgeInfo_27);
#line 496 "term_pass2.m"
                        transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 496 "term_pass2.m"
                      }
#line 504 "term_pass2.m"
                    if (transform_hlds__term_pass2__succeeded)
#line 497 "term_pass2.m"
                      {
#line 497 "term_pass2.m"
                        MR_Integer transform_hlds__term_pass2__OldWeight_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__OldEdgeInfo_27, (MR_Integer) 1)));
#line 497 "term_pass2.m"
                        MR_Word transform_hlds__term_pass2__EdgeInfo_30;
#line 497 "term_pass2.m"
                        MR_Word transform_hlds__term_pass2___OldContext_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__OldEdgeInfo_27, (MR_Integer) 0)));

#line 498 "term_pass2.m"
                        transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__OldWeight_29 >= transform_hlds__term_pass2__GammaConst_15);
#line 500 "term_pass2.m"
                        if (transform_hlds__term_pass2__succeeded)
#line 499 "term_pass2.m"
                          transform_hlds__term_pass2__EdgeInfo_30 = transform_hlds__term_pass2__OldEdgeInfo_27;
#line 500 "term_pass2.m"
                        else
#line 501 "term_pass2.m"
                          {
#line 501 "term_pass2.m"
                            transform_hlds__term_pass2__EdgeInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 501 "term_pass2.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__EdgeInfo_30, 0) = ((MR_Box) (transform_hlds__term_pass2__Context_21));
#line 501 "term_pass2.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__EdgeInfo_30, 1) = ((MR_Box) (transform_hlds__term_pass2__GammaConst_15));
#line 501 "term_pass2.m"
                          }
#line 503 "term_pass2.m"
                        {
#line 503 "term_pass2.m"
                          mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], ((MR_Box) (transform_hlds__term_pass2__CallPPId_20)), ((MR_Box) (transform_hlds__term_pass2__EdgeInfo_30)), transform_hlds__term_pass2__NeighbourMap0_26, &transform_hlds__term_pass2__NeighbourMap_31);
                        }
#line 497 "term_pass2.m"
                      }
#line 504 "term_pass2.m"
                    else
#line 505 "term_pass2.m"
                      {
#line 505 "term_pass2.m"
                        MR_Word transform_hlds__term_pass2__V_44_44;

#line 505 "term_pass2.m"
                        {
#line 505 "term_pass2.m"
                          transform_hlds__term_pass2__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 505 "term_pass2.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_44_44, 0) = ((MR_Box) (transform_hlds__term_pass2__Context_21));
#line 505 "term_pass2.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_44_44, 1) = ((MR_Box) (transform_hlds__term_pass2__GammaConst_15));
#line 505 "term_pass2.m"
                        }
#line 505 "term_pass2.m"
                        {
#line 505 "term_pass2.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], ((MR_Box) (transform_hlds__term_pass2__CallPPId_20)), ((MR_Box) (transform_hlds__term_pass2__V_44_44)), transform_hlds__term_pass2__NeighbourMap0_26, &transform_hlds__term_pass2__NeighbourMap_31);
                        }
#line 505 "term_pass2.m"
                      }
#line 508 "term_pass2.m"
                    {
#line 508 "term_pass2.m"
                      mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], ((MR_Box) (transform_hlds__term_pass2__PPId_13)), ((MR_Box) (transform_hlds__term_pass2__NeighbourMap_31)), transform_hlds__term_pass2__CallWeights0_25, &transform_hlds__term_pass2__CallWeights1_32);
                    }
#line 507 "term_pass2.m"
                  }
#line 509 "term_pass2.m"
                else
#line 510 "term_pass2.m"
                  {
#line 510 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 510 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__V_45_45;
#line 510 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__NeighbourMap_50;

#line 510 "term_pass2.m"
                    {
#line 510 "term_pass2.m"
                      transform_hlds__term_pass2__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 510 "term_pass2.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_45_45, 0) = ((MR_Box) (transform_hlds__term_pass2__Context_21));
#line 510 "term_pass2.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_45_45, 1) = ((MR_Box) (transform_hlds__term_pass2__GammaConst_15));
#line 510 "term_pass2.m"
                    }
#line 510 "term_pass2.m"
                    {
#line 510 "term_pass2.m"
                      transform_hlds__term_pass2__NeighbourMap_50 = mercury__map__singleton_2_f_0(transform_hlds__term_pass2__TypeCtorInfo_62_62, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], ((MR_Box) (transform_hlds__term_pass2__CallPPId_20)), ((MR_Box) (transform_hlds__term_pass2__V_45_45)));
                    }
#line 511 "term_pass2.m"
                    {
#line 511 "term_pass2.m"
                      mercury__map__det_insert_4_p_0(transform_hlds__term_pass2__TypeCtorInfo_62_62, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], ((MR_Box) (transform_hlds__term_pass2__PPId_13)), ((MR_Box) (transform_hlds__term_pass2__NeighbourMap_50)), transform_hlds__term_pass2__CallWeights0_25, &transform_hlds__term_pass2__CallWeights1_32);
                    }
#line 510 "term_pass2.m"
                  }
#line 513 "term_pass2.m"
                {
#line 513 "term_pass2.m"
                  transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 513 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46, 0) = ((MR_Box) (transform_hlds__term_pass2__InfCalls0_24));
#line 513 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46, 1) = ((MR_Box) (transform_hlds__term_pass2__CallWeights1_32));
#line 513 "term_pass2.m"
                }
#line 512 "term_pass2.m"
              }
#line 514 "term_pass2.m"
            else
#line 515 "term_pass2.m"
              {
#line 515 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__InfCall_33;
#line 515 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__InfCalls1_34;
#line 515 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__V_47_47;

#line 515 "term_pass2.m"
                {
#line 515 "term_pass2.m"
                  transform_hlds__term_pass2__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 515 "term_pass2.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 515 "term_pass2.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__V_47_47, 1) = ((MR_Box) (transform_hlds__term_pass2__PPId_13));
#line 515 "term_pass2.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__V_47_47, 2) = ((MR_Box) (transform_hlds__term_pass2__CallPPId_20));
#line 515 "term_pass2.m"
                }
#line 515 "term_pass2.m"
                {
#line 515 "term_pass2.m"
                  transform_hlds__term_pass2__InfCall_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 515 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__InfCall_33, 0) = ((MR_Box) (transform_hlds__term_pass2__V_47_47));
#line 515 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__InfCall_33, 1) = ((MR_Box) (transform_hlds__term_pass2__Context_21));
#line 515 "term_pass2.m"
                }
#line 516 "term_pass2.m"
                {
#line 516 "term_pass2.m"
                  transform_hlds__term_pass2__InfCalls1_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "term_pass2.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__InfCalls1_34, 0) = ((MR_Box) (transform_hlds__term_pass2__InfCall_33));
#line 516 "term_pass2.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__InfCalls1_34, 1) = ((MR_Box) (transform_hlds__term_pass2__InfCalls0_24));
#line 516 "term_pass2.m"
                }
#line 517 "term_pass2.m"
                {
#line 517 "term_pass2.m"
                  transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 517 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46, 0) = ((MR_Box) (transform_hlds__term_pass2__InfCalls1_34));
#line 517 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46, 1) = ((MR_Box) (transform_hlds__term_pass2__CallWeights0_25));
#line 517 "term_pass2.m"
                }
#line 515 "term_pass2.m"
              }
#line 519 "term_pass2.m"
            /* direct tailcall eliminated */
#line 519 "term_pass2.m"
            {
#line 519 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__HeadVar__1__tmp_copy_1 = transform_hlds__term_pass2__Paths_10;
#line 519 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0__tmp_copy_3 = transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46;

#line 519 "term_pass2.m"
              transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3 = transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0__tmp_copy_3;
#line 519 "term_pass2.m"
              transform_hlds__term_pass2__HeadVar__1_1 = transform_hlds__term_pass2__HeadVar__1__tmp_copy_1;
#line 519 "term_pass2.m"
            }
#line 519 "term_pass2.m"
            continue;
#line 477 "term_pass2.m"
          }
#line 476 "term_pass2.m"
      }
#line 476 "term_pass2.m"
      break;
#line 476 "term_pass2.m"
    }
#line 473 "term_pass2.m"
}

#line 422 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__update_rec_input_suppliers_7_p_0(
#line 422 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 422 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ActiveVars_2,
#line 422 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__FixDir_3,
#line 422 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__4_4,
#line 422 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__5_5,
#line 422 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecBag_0_6,
#line 422 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_RecBag_7)
#line 422 "term_pass2.m"
{
#line 426 "term_pass2.m"
  {
#line 426 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 426 "term_pass2.m"
    if ((transform_hlds__term_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 426 "term_pass2.m"
      if ((transform_hlds__term_pass2__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 426 "term_pass2.m"
        {
#line 426 "term_pass2.m"
          *transform_hlds__term_pass2__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 426 "term_pass2.m"
          *transform_hlds__term_pass2__STATE_VARIABLE_RecBag_7 = transform_hlds__term_pass2__STATE_VARIABLE_RecBag_0_6;
#line 426 "term_pass2.m"
        }
#line 426 "term_pass2.m"
      else
#line 429 "term_pass2.m"
        {
#line 429 "term_pass2.m"
          *transform_hlds__term_pass2__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 430 "term_pass2.m"
          {
#line 430 "term_pass2.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.update_rec_input_suppliers\'/7", (MR_String) "unmatched variables");
#line 430 "term_pass2.m"
            return;
          }
#line 429 "term_pass2.m"
        }
#line 426 "term_pass2.m"
    else
#line 426 "term_pass2.m"
      {
#line 426 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 426 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));

#line 426 "term_pass2.m"
        if ((transform_hlds__term_pass2__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 427 "term_pass2.m"
          {
#line 427 "term_pass2.m"
            *transform_hlds__term_pass2__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 428 "term_pass2.m"
            {
#line 428 "term_pass2.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.update_rec_input_suppliers\'/7", (MR_String) "unmatched variables");
#line 428 "term_pass2.m"
              return;
            }
#line 427 "term_pass2.m"
          }
#line 426 "term_pass2.m"
        else
#line 433 "term_pass2.m"
          {
#line 433 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RecInputSupplier0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__4_4, (MR_Integer) 0)));
#line 433 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RecInputSuppliers0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__4_4, (MR_Integer) 1)));
#line 433 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RecInputSupplier_37;
#line 433 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RecInputSuppliers_38;
#line 433 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecBag_42_42;

#line 437 "term_pass2.m"
            if ((transform_hlds__term_pass2__RecInputSupplier0_35 == (MR_Integer) 0))
#line 438 "term_pass2.m"
              transform_hlds__term_pass2__STATE_VARIABLE_RecBag_42_42 = transform_hlds__term_pass2__STATE_VARIABLE_RecBag_0_6;
#line 437 "term_pass2.m"
            else
#line 435 "term_pass2.m"
              {
#line 436 "term_pass2.m"
                {
#line 436 "term_pass2.m"
                  mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], ((MR_Box) (transform_hlds__term_pass2__V_48_48)), transform_hlds__term_pass2__STATE_VARIABLE_RecBag_0_6, &transform_hlds__term_pass2__STATE_VARIABLE_RecBag_42_42);
                }
#line 435 "term_pass2.m"
              }
#line 449 "term_pass2.m"
            if ((transform_hlds__term_pass2__FixDir_3 == (MR_Integer) 1))
#line 441 "term_pass2.m"
              {
#line 444 "term_pass2.m"
                {
#line 444 "term_pass2.m"
                  transform_hlds__term_pass2__succeeded = mercury__bag__contains_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__ActiveVars_2, ((MR_Box) (transform_hlds__term_pass2__V_48_48)));
                }
#line 441 "term_pass2.m"
                if (transform_hlds__term_pass2__succeeded)
#line 445 "term_pass2.m"
                  transform_hlds__term_pass2__RecInputSupplier_37 = transform_hlds__term_pass2__RecInputSupplier0_35;
#line 441 "term_pass2.m"
                else
#line 447 "term_pass2.m"
                  transform_hlds__term_pass2__RecInputSupplier_37 = (MR_Integer) 0;
#line 441 "term_pass2.m"
              }
#line 449 "term_pass2.m"
            else
#line 450 "term_pass2.m"
              {
#line 453 "term_pass2.m"
                {
#line 453 "term_pass2.m"
                  transform_hlds__term_pass2__succeeded = mercury__bag__contains_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__ActiveVars_2, ((MR_Box) (transform_hlds__term_pass2__V_48_48)));
                }
#line 450 "term_pass2.m"
                if (transform_hlds__term_pass2__succeeded)
#line 454 "term_pass2.m"
                  transform_hlds__term_pass2__RecInputSupplier_37 = (MR_Integer) 1;
#line 450 "term_pass2.m"
                else
#line 456 "term_pass2.m"
                  transform_hlds__term_pass2__RecInputSupplier_37 = transform_hlds__term_pass2__RecInputSupplier0_35;
#line 450 "term_pass2.m"
              }
#line 459 "term_pass2.m"
            {
#line 459 "term_pass2.m"
              transform_hlds__term_pass2__update_rec_input_suppliers_7_p_0(transform_hlds__term_pass2__V_47_47, transform_hlds__term_pass2__ActiveVars_2, transform_hlds__term_pass2__FixDir_3, transform_hlds__term_pass2__RecInputSuppliers0_36, &transform_hlds__term_pass2__RecInputSuppliers_38, transform_hlds__term_pass2__STATE_VARIABLE_RecBag_42_42, transform_hlds__term_pass2__STATE_VARIABLE_RecBag_7);
            }
#line 433 "term_pass2.m"
            {
#line 433 "term_pass2.m"
              MR_Word base;
#line 433 "term_pass2.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "term_pass2.m"
              *transform_hlds__term_pass2__HeadVar__5_5 = base;
#line 433 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__RecInputSupplier_37));
#line 433 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass2__RecInputSuppliers_38));
#line 433 "term_pass2.m"
            }
#line 433 "term_pass2.m"
          }
#line 426 "term_pass2.m"
      }
#line 426 "term_pass2.m"
  }
#line 422 "term_pass2.m"
}

#line 397 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_11_p_0_2(
#line 397 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg)
#line 397 "term_pass2.m"
{
#line 397 "term_pass2.m"
  {
#line 397 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 397 "term_pass2.m"
    MR_Box transform_hlds__term_pass2__closure = transform_hlds__term_pass2__closure_arg;

#line 397 "term_pass2.m"
    {
#line 397 "term_pass2.m"
      return transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__397__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__closure, (MR_Integer) 4))));
    }
#line 397 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 397 "term_pass2.m"
  }
#line 397 "term_pass2.m"
}

#line 415 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_11_p_0_1(
#line 415 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg)
#line 415 "term_pass2.m"
{
#line 415 "term_pass2.m"
  {
#line 415 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 415 "term_pass2.m"
    MR_Box transform_hlds__term_pass2__closure = transform_hlds__term_pass2__closure_arg;

#line 415 "term_pass2.m"
    {
#line 415 "term_pass2.m"
      return transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__415__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__closure, (MR_Integer) 4))));
    }
#line 415 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 415 "term_pass2.m"
  }
#line 415 "term_pass2.m"
}

#line 369 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_11_p_0(
#line 369 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 369 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__FixDir_2,
#line 369 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__PassInfo_3,
#line 369 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__RecSupplierMap_4,
#line 369 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__5_5,
#line 369 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__6_6,
#line 369 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__7_7,
#line 369 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_8,
#line 369 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_9)
#line 369 "term_pass2.m"
{
#line 374 "term_pass2.m"
  while (MR_TRUE)
#line 374 "term_pass2.m"
    {
#line 374 "term_pass2.m"
      /* tailcall optimized into a loop */
#line 374 "term_pass2.m"
      {
#line 374 "term_pass2.m"
        MR_bool transform_hlds__term_pass2__succeeded;

#line 374 "term_pass2.m"
        if ((transform_hlds__term_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 374 "term_pass2.m"
          {
#line 374 "term_pass2.m"
            {
#line 374 "term_pass2.m"
              MR_Word base;
#line 374 "term_pass2.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 374 "term_pass2.m"
              *transform_hlds__term_pass2__HeadVar__7_7 = base;
#line 374 "term_pass2.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass2__HeadVar__6_6));
#line 374 "term_pass2.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass2__HeadVar__5_5));
#line 374 "term_pass2.m"
            }
#line 374 "term_pass2.m"
            *transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_9 = transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_8;
#line 374 "term_pass2.m"
          }
#line 374 "term_pass2.m"
        else
#line 378 "term_pass2.m"
          {
#line 378 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__TypeCtorInfo_79_79;
#line 378 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__TypeInfo_80_80;
#line 378 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__TypeCtorInfo_81_81;
#line 378 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__PPId_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 378 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__PPIds_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 378 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__PredInfo_33;
#line 378 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__ProcInfo_34;
#line 378 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Context_35;
#line 378 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Goal0_36;
#line 378 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Goal_37;
#line 378 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__VarTypes_38;
#line 378 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__EmptyMap_39;
#line 378 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__FunctorInfo_40;
#line 378 "term_pass2.m"
            MR_Integer transform_hlds__term_pass2__MaxErrors_41;
#line 378 "term_pass2.m"
            MR_Integer transform_hlds__term_pass2__MaxPaths_42;
#line 378 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Params_43;
#line 378 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__PathSet0_44;
#line 378 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Info0_45;
#line 378 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Info_46;
#line 378 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_64_64;

#line 379 "term_pass2.m"
            {
#line 379 "term_pass2.m"
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__term_pass2__PPId_23, &transform_hlds__term_pass2__PredInfo_33, &transform_hlds__term_pass2__ProcInfo_34);
            }
#line 380 "term_pass2.m"
            {
#line 380 "term_pass2.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_pass2__PredInfo_33, &transform_hlds__term_pass2__Context_35);
            }
#line 381 "term_pass2.m"
            {
#line 381 "term_pass2.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__term_pass2__ProcInfo_34, &transform_hlds__term_pass2__Goal0_36);
            }
#line 386 "term_pass2.m"
            {
#line 386 "term_pass2.m"
              transform_hlds__term_pass2__Goal_37 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(transform_hlds__term_pass2__Goal0_36);
            }
#line 387 "term_pass2.m"
            {
#line 387 "term_pass2.m"
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__term_pass2__ProcInfo_34, &transform_hlds__term_pass2__VarTypes_38);
            }
#line 3309 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__TypeCtorInfo_79_79 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 3311 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__TypeInfo_80_80 = (MR_Word) &transform_hlds__term_pass2_scalar_common_1[0];
#line 388 "term_pass2.m"
            {
#line 388 "term_pass2.m"
              mercury__map__init_1_p_0(transform_hlds__term_pass2__TypeCtorInfo_79_79, transform_hlds__term_pass2__TypeInfo_80_80, &transform_hlds__term_pass2__EmptyMap_39);
            }
#line 389 "term_pass2.m"
            transform_hlds__term_pass2__FunctorInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_3, (MR_Integer) 0)));
#line 389 "term_pass2.m"
            transform_hlds__term_pass2__MaxErrors_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_3, (MR_Integer) 1)));
#line 389 "term_pass2.m"
            transform_hlds__term_pass2__MaxPaths_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_3, (MR_Integer) 2)));
#line 390 "term_pass2.m"
            {
#line 390 "term_pass2.m"
              transform_hlds__term_traversal__init_term_traversal_params_9_p_0(transform_hlds__term_pass2__FunctorInfo_40, transform_hlds__term_pass2__PPId_23, transform_hlds__term_pass2__Context_35, transform_hlds__term_pass2__VarTypes_38, transform_hlds__term_pass2__EmptyMap_39, transform_hlds__term_pass2__RecSupplierMap_4, transform_hlds__term_pass2__MaxErrors_41, transform_hlds__term_pass2__MaxPaths_42, &transform_hlds__term_pass2__Params_43);
            }
#line 3329 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__TypeCtorInfo_81_81 = (MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0;
#line 392 "term_pass2.m"
            {
#line 392 "term_pass2.m"
              mercury__set__init_1_p_0(transform_hlds__term_pass2__TypeCtorInfo_81_81, &transform_hlds__term_pass2__PathSet0_44);
            }
#line 393 "term_pass2.m"
            {
#line 393 "term_pass2.m"
              transform_hlds__term_pass2__Info0_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Info0_45, 0) = ((MR_Box) (transform_hlds__term_pass2__PathSet0_44));
#line 393 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Info0_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 393 "term_pass2.m"
            }
#line 394 "term_pass2.m"
            {
#line 394 "term_pass2.m"
              transform_hlds__term_traversal__term_traverse_goal_8_p_0(transform_hlds__term_pass2__Goal_37, transform_hlds__term_pass2__Params_43, transform_hlds__term_pass2__Info0_45, &transform_hlds__term_pass2__Info_46, transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_64_64);
            }
#line 413 "term_pass2.m"
            if (((MR_tag((MR_Word) transform_hlds__term_pass2__Info_46)) == (MR_mktag((MR_Integer) 1))))
#line 414 "term_pass2.m"
              {
#line 414 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__Errors_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Info_46, (MR_Integer) 0)));
#line 414 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__V_66_66;
#line 414 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__CanLoop_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Info_46, (MR_Integer) 1)));

#line 415 "term_pass2.m"
                {
#line 415 "term_pass2.m"
                  transform_hlds__term_pass2__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 415 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_66_66, 0) = ((MR_Box) (&transform_hlds__term_pass2_scalar_common_5[2]));
#line 415 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_66_66, 1) = ((MR_Box) (transform_hlds__term_pass2__prove_termination_in_scc_pass_11_p_0_1));
#line 415 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 415 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_66_66, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_66_66, 4) = ((MR_Box) (transform_hlds__term_pass2__CanLoop_78));
#line 415 "term_pass2.m"
                }
#line 415 "term_pass2.m"
                {
#line 415 "term_pass2.m"
                  mercury__require__expect_4_p_0(transform_hlds__term_pass2__V_66_66, (MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.prove_termination_in_scc_pass\'/11", (MR_String) "can_loop detected in pass2 but not pass1");
                }
#line 417 "term_pass2.m"
                {
#line 417 "term_pass2.m"
                  MR_Word base;
#line 417 "term_pass2.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 417 "term_pass2.m"
                  *transform_hlds__term_pass2__HeadVar__7_7 = base;
#line 417 "term_pass2.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__Errors_58));
#line 417 "term_pass2.m"
                }
#line 417 "term_pass2.m"
                *transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_9 = transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_64_64;
#line 414 "term_pass2.m"
              }
#line 413 "term_pass2.m"
            else
#line 396 "term_pass2.m"
              {
#line 396 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__Paths_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Info_46, (MR_Integer) 0)));
#line 396 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__CanLoop_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Info_46, (MR_Integer) 1)));
#line 396 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__PathList_49;
#line 396 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__ActiveVars_50;
#line 396 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__RecSuppliers0_51;
#line 396 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__Args_52;
#line 396 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__EmptyBag_53;
#line 396 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__RecSuppliers_54;
#line 396 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__RecSuppliers0Bag_55;
#line 396 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__NewRecSupplierMap1_56;
#line 396 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__CallInfo1_57;
#line 396 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__V_71_71;
#line 401 "term_pass2.m"
                MR_Box transform_hlds__term_pass2__conv0_RecSuppliers0_51;

#line 397 "term_pass2.m"
                {
#line 397 "term_pass2.m"
                  transform_hlds__term_pass2__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 397 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_71_71, 0) = ((MR_Box) (&transform_hlds__term_pass2_scalar_common_5[2]));
#line 397 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_71_71, 1) = ((MR_Box) (transform_hlds__term_pass2__prove_termination_in_scc_pass_11_p_0_2));
#line 397 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 397 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_71_71, 3) = ((MR_Box) (transform_hlds__term_pass2__CanLoop_48));
#line 397 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_71_71, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 397 "term_pass2.m"
                }
#line 397 "term_pass2.m"
                {
#line 397 "term_pass2.m"
                  mercury__require__expect_4_p_0(transform_hlds__term_pass2__V_71_71, (MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.prove_termination_in_scc_pass\'/11", (MR_String) "can_loop detected in pass2 but not pass1");
                }
#line 399 "term_pass2.m"
                {
#line 399 "term_pass2.m"
                  mercury__set__to_sorted_list_2_p_0(transform_hlds__term_pass2__TypeCtorInfo_81_81, transform_hlds__term_pass2__Paths_47, &transform_hlds__term_pass2__PathList_49);
                }
#line 400 "term_pass2.m"
                {
#line 400 "term_pass2.m"
                  transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(transform_hlds__term_pass2__PathList_49, &transform_hlds__term_pass2__ActiveVars_50);
                }
#line 401 "term_pass2.m"
                {
#line 401 "term_pass2.m"
                  mercury__map__lookup_3_p_0(transform_hlds__term_pass2__TypeCtorInfo_79_79, transform_hlds__term_pass2__TypeInfo_80_80, transform_hlds__term_pass2__RecSupplierMap_4, ((MR_Box) (transform_hlds__term_pass2__PPId_23)), &transform_hlds__term_pass2__conv0_RecSuppliers0_51);
                }
#line 401 "term_pass2.m"
                transform_hlds__term_pass2__RecSuppliers0_51 = ((MR_Word) transform_hlds__term_pass2__conv0_RecSuppliers0_51);
#line 402 "term_pass2.m"
                {
#line 402 "term_pass2.m"
                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass2__ProcInfo_34, &transform_hlds__term_pass2__Args_52);
                }
#line 403 "term_pass2.m"
                {
#line 403 "term_pass2.m"
                  mercury__bag__init_1_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], &transform_hlds__term_pass2__EmptyBag_53);
                }
#line 404 "term_pass2.m"
                {
#line 404 "term_pass2.m"
                  transform_hlds__term_pass2__update_rec_input_suppliers_7_p_0(transform_hlds__term_pass2__Args_52, transform_hlds__term_pass2__ActiveVars_50, transform_hlds__term_pass2__FixDir_2, transform_hlds__term_pass2__RecSuppliers0_51, &transform_hlds__term_pass2__RecSuppliers_54, transform_hlds__term_pass2__EmptyBag_53, &transform_hlds__term_pass2__RecSuppliers0Bag_55);
                }
#line 407 "term_pass2.m"
                {
#line 407 "term_pass2.m"
                  mercury__map__det_insert_4_p_0(transform_hlds__term_pass2__TypeCtorInfo_79_79, transform_hlds__term_pass2__TypeInfo_80_80, ((MR_Box) (transform_hlds__term_pass2__PPId_23)), ((MR_Box) (transform_hlds__term_pass2__RecSuppliers_54)), transform_hlds__term_pass2__HeadVar__5_5, &transform_hlds__term_pass2__NewRecSupplierMap1_56);
                }
#line 409 "term_pass2.m"
                {
#line 409 "term_pass2.m"
                  transform_hlds__term_pass2__add_call_arcs_4_p_0(transform_hlds__term_pass2__PathList_49, transform_hlds__term_pass2__RecSuppliers0Bag_55, transform_hlds__term_pass2__HeadVar__6_6, &transform_hlds__term_pass2__CallInfo1_57);
                }
#line 410 "term_pass2.m"
                /* direct tailcall eliminated */
#line 410 "term_pass2.m"
                {
#line 410 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__HeadVar__1__tmp_copy_1 = transform_hlds__term_pass2__PPIds_24;
#line 410 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__HeadVar__5__tmp_copy_5 = transform_hlds__term_pass2__NewRecSupplierMap1_56;
#line 410 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__HeadVar__6__tmp_copy_6 = transform_hlds__term_pass2__CallInfo1_57;
#line 410 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8 = transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_64_64;

#line 410 "term_pass2.m"
                  transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_8 = transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8;
#line 410 "term_pass2.m"
                  transform_hlds__term_pass2__HeadVar__6_6 = transform_hlds__term_pass2__HeadVar__6__tmp_copy_6;
#line 410 "term_pass2.m"
                  transform_hlds__term_pass2__HeadVar__5_5 = transform_hlds__term_pass2__HeadVar__5__tmp_copy_5;
#line 410 "term_pass2.m"
                  transform_hlds__term_pass2__HeadVar__1_1 = transform_hlds__term_pass2__HeadVar__1__tmp_copy_1;
#line 410 "term_pass2.m"
                }
#line 410 "term_pass2.m"
                continue;
#line 396 "term_pass2.m"
              }
#line 378 "term_pass2.m"
          }
#line 374 "term_pass2.m"
      }
#line 374 "term_pass2.m"
      break;
#line 374 "term_pass2.m"
    }
#line 369 "term_pass2.m"
}

#line 337 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_p_0(
#line 337 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__SCC_10,
#line 337 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__FixDir_11,
#line 337 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__PassInfo_12,
#line 337 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__RecSupplierMap0_13,
#line 337 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__Result_14,
#line 337 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_24,
#line 337 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_25)
#line 337 "term_pass2.m"
{
#line 342 "term_pass2.m"
  while (MR_TRUE)
#line 342 "term_pass2.m"
    {
#line 342 "term_pass2.m"
      /* tailcall optimized into a loop */
#line 342 "term_pass2.m"
      {
#line 342 "term_pass2.m"
        MR_bool transform_hlds__term_pass2__succeeded;
#line 342 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TypeCtorInfo_33_33 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 342 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__NewRecSupplierMap0_17;
#line 342 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__CallWeightGraph0_18;
#line 342 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__CallInfo0_19;
#line 342 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Result1_20;
#line 342 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_29_29;

#line 343 "term_pass2.m"
        {
#line 343 "term_pass2.m"
          mercury__map__init_1_p_0(transform_hlds__term_pass2__TypeCtorInfo_33_33, (MR_Word) &transform_hlds__term_pass2_scalar_common_1[0], &transform_hlds__term_pass2__NewRecSupplierMap0_17);
        }
#line 344 "term_pass2.m"
        {
#line 344 "term_pass2.m"
          mercury__map__init_1_p_0(transform_hlds__term_pass2__TypeCtorInfo_33_33, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], &transform_hlds__term_pass2__CallWeightGraph0_18);
        }
#line 345 "term_pass2.m"
        {
#line 345 "term_pass2.m"
          transform_hlds__term_pass2__CallInfo0_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 345 "term_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo0_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 345 "term_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo0_19, 1) = ((MR_Box) (transform_hlds__term_pass2__CallWeightGraph0_18));
#line 345 "term_pass2.m"
        }
#line 346 "term_pass2.m"
        {
#line 346 "term_pass2.m"
          transform_hlds__term_pass2__prove_termination_in_scc_pass_11_p_0(transform_hlds__term_pass2__SCC_10, transform_hlds__term_pass2__FixDir_11, transform_hlds__term_pass2__PassInfo_12, transform_hlds__term_pass2__RecSupplierMap0_13, transform_hlds__term_pass2__NewRecSupplierMap0_17, transform_hlds__term_pass2__CallInfo0_19, &transform_hlds__term_pass2__Result1_20, transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_24, &transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_29_29);
        }
#line 359 "term_pass2.m"
        if (((MR_tag((MR_Word) transform_hlds__term_pass2__Result1_20)) == (MR_mktag((MR_Integer) 1))))
#line 360 "term_pass2.m"
          {
#line 361 "term_pass2.m"
            *transform_hlds__term_pass2__Result_14 = transform_hlds__term_pass2__Result1_20;
#line 361 "term_pass2.m"
            *transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_25 = transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_29_29;
#line 360 "term_pass2.m"
          }
#line 359 "term_pass2.m"
        else
#line 350 "term_pass2.m"
          {
#line 350 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RecSupplierMap1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result1_20, (MR_Integer) 1)));
#line 350 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result1_20, (MR_Integer) 0)));

#line 351 "term_pass2.m"
            {
#line 351 "term_pass2.m"
              transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[4], ((MR_Box) (transform_hlds__term_pass2__RecSupplierMap1_22)), ((MR_Box) (transform_hlds__term_pass2__RecSupplierMap0_13)));
            }
#line 355 "term_pass2.m"
            if (transform_hlds__term_pass2__succeeded)
#line 354 "term_pass2.m"
              {
#line 354 "term_pass2.m"
                *transform_hlds__term_pass2__Result_14 = transform_hlds__term_pass2__Result1_20;
#line 354 "term_pass2.m"
                *transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_25 = transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_29_29;
#line 354 "term_pass2.m"
              }
#line 355 "term_pass2.m"
            else
#line 356 "term_pass2.m"
              {
#line 356 "term_pass2.m"
                /* direct tailcall eliminated */
#line 356 "term_pass2.m"
                {
#line 356 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__RecSupplierMap0__tmp_copy_13 = transform_hlds__term_pass2__RecSupplierMap1_22;
#line 356 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0__tmp_copy_24 = transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_29_29;

#line 356 "term_pass2.m"
                  transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_24 = transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0__tmp_copy_24;
#line 356 "term_pass2.m"
                  transform_hlds__term_pass2__RecSupplierMap0_13 = transform_hlds__term_pass2__RecSupplierMap0__tmp_copy_13;
#line 356 "term_pass2.m"
                }
#line 356 "term_pass2.m"
                continue;
#line 356 "term_pass2.m"
              }
#line 350 "term_pass2.m"
          }
#line 342 "term_pass2.m"
      }
#line 342 "term_pass2.m"
      break;
#line 342 "term_pass2.m"
    }
#line 337 "term_pass2.m"
}

#line 286 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0_1(
#line 286 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg,
#line 286 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 286 "term_pass2.m"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_2)
#line 286 "term_pass2.m"
{
#line 286 "term_pass2.m"
  {
#line 286 "term_pass2.m"
    MR_Box transform_hlds__term_pass2__closure = transform_hlds__term_pass2__closure_arg;
#line 286 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__2_23;

#line 286 "term_pass2.m"
    {
#line 286 "term_pass2.m"
      transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_single_arg_others__286__1_2_p_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), &transform_hlds__term_pass2__conv0_HeadVar__2_23);
    }
#line 286 "term_pass2.m"
    *transform_hlds__term_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__2_23));
#line 286 "term_pass2.m"
  }
#line 286 "term_pass2.m"
}

#line 278 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0(
#line 278 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 278 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__Module_2,
#line 278 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0_3,
#line 278 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_4)
#line 278 "term_pass2.m"
{
#line 281 "term_pass2.m"
  while (MR_TRUE)
#line 281 "term_pass2.m"
    {
#line 281 "term_pass2.m"
      /* tailcall optimized into a loop */
#line 281 "term_pass2.m"
      {
#line 281 "term_pass2.m"
        MR_bool transform_hlds__term_pass2__succeeded;

#line 281 "term_pass2.m"
        if ((transform_hlds__term_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 281 "term_pass2.m"
          *transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_4 = transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0_3;
#line 281 "term_pass2.m"
        else
#line 283 "term_pass2.m"
          {
#line 283 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 283 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 283 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__ProcInfo_14;
#line 283 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__HeadVars_15;
#line 283 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__BoolList_16;
#line 283 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_20_20;
#line 284 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_13_13;

#line 284 "term_pass2.m"
            {
#line 284 "term_pass2.m"
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass2__Module_2, transform_hlds__term_pass2__PPId_9, &transform_hlds__term_pass2__V_13_13, &transform_hlds__term_pass2__ProcInfo_14);
            }
#line 285 "term_pass2.m"
            {
#line 285 "term_pass2.m"
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass2__ProcInfo_14, &transform_hlds__term_pass2__HeadVars_15);
            }
#line 286 "term_pass2.m"
            {
#line 286 "term_pass2.m"
              mercury__list__map_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[6], transform_hlds__term_pass2__HeadVars_15, &transform_hlds__term_pass2__BoolList_16);
            }
#line 287 "term_pass2.m"
            {
#line 287 "term_pass2.m"
              mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_1[0], ((MR_Box) (transform_hlds__term_pass2__PPId_9)), ((MR_Box) (transform_hlds__term_pass2__BoolList_16)), transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0_3, &transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_20_20);
            }
#line 288 "term_pass2.m"
            /* direct tailcall eliminated */
#line 288 "term_pass2.m"
            {
#line 288 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__HeadVar__1__tmp_copy_1 = transform_hlds__term_pass2__PPIds_10;
#line 288 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0__tmp_copy_3 = transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_20_20;

#line 288 "term_pass2.m"
              transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0_3 = transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0__tmp_copy_3;
#line 288 "term_pass2.m"
              transform_hlds__term_pass2__HeadVar__1_1 = transform_hlds__term_pass2__HeadVar__1__tmp_copy_1;
#line 288 "term_pass2.m"
            }
#line 288 "term_pass2.m"
            continue;
#line 283 "term_pass2.m"
          }
#line 281 "term_pass2.m"
      }
#line 281 "term_pass2.m"
      break;
#line 281 "term_pass2.m"
    }
#line 278 "term_pass2.m"
}

#line 255 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0_1(
#line 255 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg,
#line 255 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 255 "term_pass2.m"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_2)
#line 255 "term_pass2.m"
{
#line 255 "term_pass2.m"
  {
#line 255 "term_pass2.m"
    MR_Box transform_hlds__term_pass2__closure = transform_hlds__term_pass2__closure_arg;
#line 255 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__2_20;

#line 255 "term_pass2.m"
    {
#line 255 "term_pass2.m"
      transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_add_single_arg__255__1_2_p_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), &transform_hlds__term_pass2__conv0_HeadVar__2_20);
    }
#line 255 "term_pass2.m"
    *transform_hlds__term_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__2_20));
#line 255 "term_pass2.m"
  }
#line 255 "term_pass2.m"
}

#line 246 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0(
#line 246 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 246 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__ArgNum_7,
#line 246 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_8,
#line 246 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__BoolList_9)
#line 246 "term_pass2.m"
{
#line 250 "term_pass2.m"
  {
#line 250 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 250 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Mode_5;
#line 250 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Modes_6;

#line 250 "term_pass2.m"
    if (transform_hlds__term_pass2__succeeded)
#line 250 "term_pass2.m"
      {
#line 250 "term_pass2.m"
        transform_hlds__term_pass2__Mode_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 250 "term_pass2.m"
        transform_hlds__term_pass2__Modes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 252 "term_pass2.m"
        {
#line 252 "term_pass2.m"
          transform_hlds__term_pass2__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__term_pass2__ModuleInfo_8, transform_hlds__term_pass2__Mode_5);
        }
#line 252 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 253 "term_pass2.m"
          transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__ArgNum_7 == (MR_Integer) 1);
#line 257 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 255 "term_pass2.m"
          {
#line 255 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__BoolList1_10;

#line 255 "term_pass2.m"
            {
#line 255 "term_pass2.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[5], transform_hlds__term_pass2__Modes_6, &transform_hlds__term_pass2__BoolList1_10);
            }
#line 256 "term_pass2.m"
            {
#line 256 "term_pass2.m"
              MR_Word base;
#line 256 "term_pass2.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "term_pass2.m"
              *transform_hlds__term_pass2__BoolList_9 = base;
#line 256 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 256 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass2__BoolList1_10));
#line 256 "term_pass2.m"
            }
#line 255 "term_pass2.m"
            transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 255 "term_pass2.m"
          }
#line 257 "term_pass2.m"
        else
#line 274 "term_pass2.m"
          {
#line 274 "term_pass2.m"
            MR_Integer transform_hlds__term_pass2__NextArgNum_11;
#line 274 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_16_16;
#line 274 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__BoolList1_17;

#line 259 "term_pass2.m"
            {
#line 259 "term_pass2.m"
              transform_hlds__term_pass2__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(transform_hlds__term_pass2__ModuleInfo_8, transform_hlds__term_pass2__Mode_5);
            }
#line 262 "term_pass2.m"
            if (transform_hlds__term_pass2__succeeded)
#line 261 "term_pass2.m"
              {
#line 261 "term_pass2.m"
                transform_hlds__term_pass2__NextArgNum_11 = transform_hlds__term_pass2__ArgNum_7;
#line 261 "term_pass2.m"
                transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 261 "term_pass2.m"
              }
#line 262 "term_pass2.m"
            else
#line 267 "term_pass2.m"
              {
#line 267 "term_pass2.m"
                MR_Integer transform_hlds__term_pass2__V_14_14;
#line 267 "term_pass2.m"
                MR_Integer transform_hlds__term_pass2__V_15_15;

#line 263 "term_pass2.m"
                {
#line 263 "term_pass2.m"
                  transform_hlds__term_pass2__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__term_pass2__ModuleInfo_8, transform_hlds__term_pass2__Mode_5);
                }
#line 267 "term_pass2.m"
                if (transform_hlds__term_pass2__succeeded)
#line 267 "term_pass2.m"
                  {
#line 264 "term_pass2.m"
                    transform_hlds__term_pass2__V_14_14 = (MR_Integer) 1;
#line 264 "term_pass2.m"
                    transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__ArgNum_7 > transform_hlds__term_pass2__V_14_14);
#line 267 "term_pass2.m"
                    if (transform_hlds__term_pass2__succeeded)
#line 267 "term_pass2.m"
                      {
#line 266 "term_pass2.m"
                        transform_hlds__term_pass2__V_15_15 = (MR_Integer) 1;
#line 266 "term_pass2.m"
                        transform_hlds__term_pass2__NextArgNum_11 = (transform_hlds__term_pass2__ArgNum_7 - transform_hlds__term_pass2__V_15_15);
#line 266 "term_pass2.m"
                        transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 267 "term_pass2.m"
                      }
#line 267 "term_pass2.m"
                  }
#line 267 "term_pass2.m"
              }
#line 274 "term_pass2.m"
            if (transform_hlds__term_pass2__succeeded)
#line 274 "term_pass2.m"
              {
#line 271 "term_pass2.m"
                {
#line 271 "term_pass2.m"
                  transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0(transform_hlds__term_pass2__Modes_6, transform_hlds__term_pass2__NextArgNum_11, transform_hlds__term_pass2__ModuleInfo_8, &transform_hlds__term_pass2__BoolList1_17);
                }
#line 274 "term_pass2.m"
                if (transform_hlds__term_pass2__succeeded)
#line 274 "term_pass2.m"
                  {
#line 273 "term_pass2.m"
                    transform_hlds__term_pass2__V_16_16 = (MR_Integer) 0;
#line 273 "term_pass2.m"
                    {
#line 273 "term_pass2.m"
                      MR_Word base;
#line 273 "term_pass2.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "term_pass2.m"
                      *transform_hlds__term_pass2__BoolList_9 = base;
#line 273 "term_pass2.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__V_16_16));
#line 273 "term_pass2.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass2__BoolList1_17));
#line 273 "term_pass2.m"
                    }
#line 273 "term_pass2.m"
                    transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 274 "term_pass2.m"
                  }
#line 274 "term_pass2.m"
              }
#line 274 "term_pass2.m"
          }
#line 250 "term_pass2.m"
      }
#line 250 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 250 "term_pass2.m"
  }
#line 246 "term_pass2.m"
}

#line 207 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_p_0(
#line 207 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__TrialPPId_10,
#line 207 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__RestSCC_11,
#line 207 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__ArgNum0_12,
#line 207 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__PassInfo_13,
#line 207 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__Terminates_14,
#line 207 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_21,
#line 207 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_22)
#line 207 "term_pass2.m"
{
#line 228 "term_pass2.m"
  while (MR_TRUE)
#line 228 "term_pass2.m"
    {
#line 228 "term_pass2.m"
      /* tailcall optimized into a loop */
#line 228 "term_pass2.m"
      {
#line 228 "term_pass2.m"
        MR_bool transform_hlds__term_pass2__succeeded;
#line 228 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__InitRecSuppliers_17;
#line 237 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TypeCtorInfo_16_43;
#line 237 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TypeInfo_17_44;
#line 237 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__ProcInfo_39;
#line 237 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__ArgModes_40;
#line 237 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TrialPPIdRecSuppliers_41;
#line 237 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__RecSupplierMap0_42;
#line 238 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_38_38;

#line 238 "term_pass2.m"
        {
#line 238 "term_pass2.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_21, transform_hlds__term_pass2__TrialPPId_10, &transform_hlds__term_pass2__V_38_38, &transform_hlds__term_pass2__ProcInfo_39);
        }
#line 239 "term_pass2.m"
        {
#line 239 "term_pass2.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_pass2__ProcInfo_39, &transform_hlds__term_pass2__ArgModes_40);
        }
#line 240 "term_pass2.m"
        {
#line 240 "term_pass2.m"
          transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0(transform_hlds__term_pass2__ArgModes_40, transform_hlds__term_pass2__ArgNum0_12, transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_21, &transform_hlds__term_pass2__TrialPPIdRecSuppliers_41);
        }
#line 237 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 237 "term_pass2.m"
          {
#line 4065 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__TypeCtorInfo_16_43 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 4067 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__TypeInfo_17_44 = (MR_Word) &transform_hlds__term_pass2_scalar_common_1[0];
#line 242 "term_pass2.m"
            {
#line 242 "term_pass2.m"
              transform_hlds__term_pass2__RecSupplierMap0_42 = mercury__map__singleton_2_f_0(transform_hlds__term_pass2__TypeCtorInfo_16_43, transform_hlds__term_pass2__TypeInfo_17_44, ((MR_Box) (transform_hlds__term_pass2__TrialPPId_10)), ((MR_Box) (transform_hlds__term_pass2__TrialPPIdRecSuppliers_41)));
            }
#line 243 "term_pass2.m"
            {
#line 243 "term_pass2.m"
              transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0(transform_hlds__term_pass2__RestSCC_11, transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_21, transform_hlds__term_pass2__RecSupplierMap0_42, &transform_hlds__term_pass2__InitRecSuppliers_17);
            }
#line 243 "term_pass2.m"
            transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 237 "term_pass2.m"
          }
#line 228 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 218 "term_pass2.m"
          {
#line 218 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_25_25;
#line 218 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_27_27;
#line 218 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Result_56;

#line 217 "term_pass2.m"
            {
#line 217 "term_pass2.m"
              transform_hlds__term_pass2__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "term_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__V_25_25, 0) = ((MR_Box) (transform_hlds__term_pass2__TrialPPId_10));
#line 217 "term_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__V_25_25, 1) = ((MR_Box) (transform_hlds__term_pass2__RestSCC_11));
#line 217 "term_pass2.m"
            }
#line 306 "term_pass2.m"
            {
#line 306 "term_pass2.m"
              transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_p_0(transform_hlds__term_pass2__V_25_25, (MR_Integer) 0, transform_hlds__term_pass2__PassInfo_13, transform_hlds__term_pass2__InitRecSuppliers_17, &transform_hlds__term_pass2__Result_56, transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_21, &transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_27_27);
            }
#line 4109 "transform_hlds.term_pass2.c"
            if (((MR_tag((MR_Word) transform_hlds__term_pass2__Result_56)) == (MR_mktag((MR_Integer) 1))))
#line 4111 "transform_hlds.term_pass2.c"
              {
#line 4113 "transform_hlds.term_pass2.c"
                MR_Integer transform_hlds__term_pass2__ArgNum1_20 = (transform_hlds__term_pass2__ArgNum0_12 + (MR_Integer) 1);

#line 225 "term_pass2.m"
                /* direct tailcall eliminated */
#line 225 "term_pass2.m"
                {
#line 225 "term_pass2.m"
                  MR_Integer transform_hlds__term_pass2__ArgNum0__tmp_copy_12 = transform_hlds__term_pass2__ArgNum1_20;
#line 225 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0__tmp_copy_21 = transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_27_27;

#line 225 "term_pass2.m"
                  transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_21 = transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0__tmp_copy_21;
#line 225 "term_pass2.m"
                  transform_hlds__term_pass2__ArgNum0_12 = transform_hlds__term_pass2__ArgNum0__tmp_copy_12;
#line 225 "term_pass2.m"
                }
#line 225 "term_pass2.m"
                continue;
#line 4133 "transform_hlds.term_pass2.c"
              }
#line 4135 "transform_hlds.term_pass2.c"
            else
#line 4137 "transform_hlds.term_pass2.c"
              {
#line 4139 "transform_hlds.term_pass2.c"
                MR_Word transform_hlds__term_pass2__CallInfo_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result_56, (MR_Integer) 0)));
#line 4141 "transform_hlds.term_pass2.c"
                MR_Word transform_hlds__term_pass2__InfCalls_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo_57, (MR_Integer) 0)));
#line 4143 "transform_hlds.term_pass2.c"
                MR_Word transform_hlds__term_pass2__CallWeights_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo_57, (MR_Integer) 1)));
#line 309 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result_56, (MR_Integer) 1)));

#line 4148 "transform_hlds.term_pass2.c"
                if ((transform_hlds__term_pass2__InfCalls_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4150 "transform_hlds.term_pass2.c"
                  {
#line 4152 "transform_hlds.term_pass2.c"
                    MR_Word transform_hlds__term_pass2__Cycles_67;
#line 320 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__PPIds_85;
#line 321 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__V_68_68;
#line 321 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__V_69_69;

#line 537 "term_pass2.m"
                    {
#line 537 "term_pass2.m"
                      mercury__map__keys_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__CallWeights_60, &transform_hlds__term_pass2__PPIds_85);
                    }
#line 538 "term_pass2.m"
                    {
#line 538 "term_pass2.m"
                      transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(transform_hlds__term_pass2__PPIds_85, transform_hlds__term_pass2__CallWeights_60, transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_27_27, &transform_hlds__term_pass2__Cycles_67);
                    }
#line 321 "term_pass2.m"
                    transform_hlds__term_pass2__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass2__Cycles_67)) == (MR_mktag((MR_Integer) 1)));
#line 321 "term_pass2.m"
                    if (transform_hlds__term_pass2__succeeded)
#line 321 "term_pass2.m"
                      {
#line 321 "term_pass2.m"
                        transform_hlds__term_pass2__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Cycles_67, (MR_Integer) 0)));
#line 321 "term_pass2.m"
                        transform_hlds__term_pass2__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Cycles_67, (MR_Integer) 1)));
#line 4181 "transform_hlds.term_pass2.c"
                        {
#line 4183 "transform_hlds.term_pass2.c"
                          MR_Integer transform_hlds__term_pass2__MaxErrors_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_13, (MR_Integer) 1)));
#line 4185 "transform_hlds.term_pass2.c"
                          MR_Integer transform_hlds__term_pass2__ArgNum1_88;
#line 323 "term_pass2.m"
                          MR_Word transform_hlds__term_pass2__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_13, (MR_Integer) 0)));
#line 323 "term_pass2.m"
                          MR_Integer transform_hlds__term_pass2__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_13, (MR_Integer) 2)));
#line 324 "term_pass2.m"
                          MR_Word transform_hlds__term_pass2__ReportedCycles_72;

#line 324 "term_pass2.m"
                          {
#line 324 "term_pass2.m"
                            mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0, transform_hlds__term_pass2__MaxErrors_77, transform_hlds__term_pass2__Cycles_67, &transform_hlds__term_pass2__ReportedCycles_72);
                          }
#line 224 "term_pass2.m"
                          transform_hlds__term_pass2__ArgNum1_88 = (transform_hlds__term_pass2__ArgNum0_12 + (MR_Integer) 1);
#line 225 "term_pass2.m"
                          /* direct tailcall eliminated */
#line 225 "term_pass2.m"
                          {
#line 225 "term_pass2.m"
                            MR_Integer transform_hlds__term_pass2__ArgNum0__tmp_copy_12 = transform_hlds__term_pass2__ArgNum1_88;
#line 225 "term_pass2.m"
                            MR_Word transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0__tmp_copy_21 = transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_27_27;

#line 225 "term_pass2.m"
                            transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_21 = transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0__tmp_copy_21;
#line 225 "term_pass2.m"
                            transform_hlds__term_pass2__ArgNum0_12 = transform_hlds__term_pass2__ArgNum0__tmp_copy_12;
#line 225 "term_pass2.m"
                          }
#line 225 "term_pass2.m"
                          continue;
#line 4218 "transform_hlds.term_pass2.c"
                        }
#line 321 "term_pass2.m"
                      }
#line 321 "term_pass2.m"
                    else
#line 4224 "transform_hlds.term_pass2.c"
                      {
#line 221 "term_pass2.m"
                        *transform_hlds__term_pass2__Terminates_14 = (MR_Integer) 1;
#line 221 "term_pass2.m"
                        *transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_22 = transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_27_27;
#line 4230 "transform_hlds.term_pass2.c"
                      }
#line 4232 "transform_hlds.term_pass2.c"
                  }
#line 4234 "transform_hlds.term_pass2.c"
                else
#line 4236 "transform_hlds.term_pass2.c"
                  {
#line 4238 "transform_hlds.term_pass2.c"
                    MR_Integer transform_hlds__term_pass2__MaxErrors_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_13, (MR_Integer) 1)));
#line 4240 "transform_hlds.term_pass2.c"
                    MR_Integer transform_hlds__term_pass2__ArgNum1_96;
#line 313 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_13, (MR_Integer) 0)));
#line 313 "term_pass2.m"
                    MR_Integer transform_hlds__term_pass2__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_13, (MR_Integer) 2)));
#line 314 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__ReportedInfCalls_66;

#line 314 "term_pass2.m"
                    {
#line 314 "term_pass2.m"
                      mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0, transform_hlds__term_pass2__MaxErrors_64, transform_hlds__term_pass2__InfCalls_59, &transform_hlds__term_pass2__ReportedInfCalls_66);
                    }
#line 224 "term_pass2.m"
                    transform_hlds__term_pass2__ArgNum1_96 = (transform_hlds__term_pass2__ArgNum0_12 + (MR_Integer) 1);
#line 225 "term_pass2.m"
                    /* direct tailcall eliminated */
#line 225 "term_pass2.m"
                    {
#line 225 "term_pass2.m"
                      MR_Integer transform_hlds__term_pass2__ArgNum0__tmp_copy_12 = transform_hlds__term_pass2__ArgNum1_96;
#line 225 "term_pass2.m"
                      MR_Word transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0__tmp_copy_21 = transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_27_27;

#line 225 "term_pass2.m"
                      transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_21 = transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0__tmp_copy_21;
#line 225 "term_pass2.m"
                      transform_hlds__term_pass2__ArgNum0_12 = transform_hlds__term_pass2__ArgNum0__tmp_copy_12;
#line 225 "term_pass2.m"
                    }
#line 225 "term_pass2.m"
                    continue;
#line 4273 "transform_hlds.term_pass2.c"
                  }
#line 4275 "transform_hlds.term_pass2.c"
              }
#line 218 "term_pass2.m"
          }
#line 228 "term_pass2.m"
        else
#line 229 "term_pass2.m"
          {
#line 229 "term_pass2.m"
            *transform_hlds__term_pass2__Terminates_14 = (MR_Integer) 0;
#line 229 "term_pass2.m"
            *transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_22 = transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_21;
#line 229 "term_pass2.m"
          }
#line 228 "term_pass2.m"
      }
#line 228 "term_pass2.m"
      break;
#line 228 "term_pass2.m"
    }
#line 207 "term_pass2.m"
}

#line 187 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__find_min_arity_proc_6_p_0(
#line 187 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 187 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__BestSofarPPId_2,
#line 187 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__BestSofarArity_3,
#line 187 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_4,
#line 187 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__5_5,
#line 187 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__6_6)
#line 187 "term_pass2.m"
{
#line 191 "term_pass2.m"
  {
#line 191 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 191 "term_pass2.m"
    if ((transform_hlds__term_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 191 "term_pass2.m"
      {
#line 191 "term_pass2.m"
        *transform_hlds__term_pass2__HeadVar__5_5 = transform_hlds__term_pass2__BestSofarPPId_2;
#line 191 "term_pass2.m"
        *transform_hlds__term_pass2__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 191 "term_pass2.m"
      }
#line 191 "term_pass2.m"
    else
#line 193 "term_pass2.m"
      {
#line 193 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__PPId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 193 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__PPIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 193 "term_pass2.m"
        MR_Integer transform_hlds__term_pass2__Arity_17;
#line 193 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__ProcInfo_24;
#line 193 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__HeadVars_25;
#line 294 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_23_23;

#line 294 "term_pass2.m"
        {
#line 294 "term_pass2.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass2__ModuleInfo_4, transform_hlds__term_pass2__PPId_10, &transform_hlds__term_pass2__V_23_23, &transform_hlds__term_pass2__ProcInfo_24);
        }
#line 295 "term_pass2.m"
        {
#line 295 "term_pass2.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass2__ProcInfo_24, &transform_hlds__term_pass2__HeadVars_25);
        }
#line 296 "term_pass2.m"
        {
#line 296 "term_pass2.m"
          mercury__list__length_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__HeadVars_25, &transform_hlds__term_pass2__Arity_17);
        }
#line 195 "term_pass2.m"
        transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__Arity_17 < transform_hlds__term_pass2__BestSofarArity_3);
#line 199 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 197 "term_pass2.m"
          {
#line 197 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RestSCC0_18;

#line 196 "term_pass2.m"
            {
#line 196 "term_pass2.m"
              transform_hlds__term_pass2__find_min_arity_proc_6_p_0(transform_hlds__term_pass2__PPIds_11, transform_hlds__term_pass2__PPId_10, transform_hlds__term_pass2__Arity_17, transform_hlds__term_pass2__ModuleInfo_4, transform_hlds__term_pass2__HeadVar__5_5, &transform_hlds__term_pass2__RestSCC0_18);
            }
#line 198 "term_pass2.m"
            {
#line 198 "term_pass2.m"
              MR_Word base;
#line 198 "term_pass2.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 198 "term_pass2.m"
              *transform_hlds__term_pass2__HeadVar__6_6 = base;
#line 198 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__BestSofarPPId_2));
#line 198 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass2__RestSCC0_18));
#line 198 "term_pass2.m"
            }
#line 197 "term_pass2.m"
          }
#line 199 "term_pass2.m"
        else
#line 201 "term_pass2.m"
          {
#line 201 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RestSCC0_19;

#line 200 "term_pass2.m"
            {
#line 200 "term_pass2.m"
              transform_hlds__term_pass2__find_min_arity_proc_6_p_0(transform_hlds__term_pass2__PPIds_11, transform_hlds__term_pass2__BestSofarPPId_2, transform_hlds__term_pass2__BestSofarArity_3, transform_hlds__term_pass2__ModuleInfo_4, transform_hlds__term_pass2__HeadVar__5_5, &transform_hlds__term_pass2__RestSCC0_19);
            }
#line 202 "term_pass2.m"
            {
#line 202 "term_pass2.m"
              MR_Word base;
#line 202 "term_pass2.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "term_pass2.m"
              *transform_hlds__term_pass2__HeadVar__6_6 = base;
#line 202 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__PPId_10));
#line 202 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass2__RestSCC0_19));
#line 202 "term_pass2.m"
            }
#line 201 "term_pass2.m"
          }
#line 193 "term_pass2.m"
      }
#line 191 "term_pass2.m"
  }
#line 187 "term_pass2.m"
}

#line 166 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_single_arg_7_p_0(
#line 166 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__SCC_8,
#line 166 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__PassInfo_9,
#line 166 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__Terminates_10,
#line 166 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_18,
#line 166 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_19)
#line 166 "term_pass2.m"
{
#line 173 "term_pass2.m"
  {
#line 173 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 173 "term_pass2.m"
    if ((transform_hlds__term_pass2__SCC_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 180 "term_pass2.m"
      {
#line 181 "term_pass2.m"
        {
#line 181 "term_pass2.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.prove_termination_in_scc_single_arg\'/7", (MR_String) "empty SCC");
#line 181 "term_pass2.m"
          return;
        }
#line 180 "term_pass2.m"
      }
#line 173 "term_pass2.m"
    else
#line 173 "term_pass2.m"
      {
#line 173 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__FirstPPId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__SCC_8, (MR_Integer) 0)));
#line 173 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__LaterPPIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__SCC_8, (MR_Integer) 1)));
#line 173 "term_pass2.m"
        MR_Integer transform_hlds__term_pass2__FirstArity_15;
#line 173 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TrialPPId_16;
#line 173 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__RestSCC_17;
#line 173 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__ProcInfo_32;
#line 173 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__HeadVars_33;
#line 294 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_31_31;

#line 294 "term_pass2.m"
        {
#line 294 "term_pass2.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__term_pass2__FirstPPId_13, &transform_hlds__term_pass2__V_31_31, &transform_hlds__term_pass2__ProcInfo_32);
        }
#line 295 "term_pass2.m"
        {
#line 295 "term_pass2.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass2__ProcInfo_32, &transform_hlds__term_pass2__HeadVars_33);
        }
#line 296 "term_pass2.m"
        {
#line 296 "term_pass2.m"
          mercury__list__length_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__HeadVars_33, &transform_hlds__term_pass2__FirstArity_15);
        }
#line 175 "term_pass2.m"
        {
#line 175 "term_pass2.m"
          transform_hlds__term_pass2__find_min_arity_proc_6_p_0(transform_hlds__term_pass2__LaterPPIds_14, transform_hlds__term_pass2__FirstPPId_13, transform_hlds__term_pass2__FirstArity_15, transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_18, &transform_hlds__term_pass2__TrialPPId_16, &transform_hlds__term_pass2__RestSCC_17);
        }
#line 177 "term_pass2.m"
        {
#line 177 "term_pass2.m"
          transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_p_0(transform_hlds__term_pass2__TrialPPId_16, transform_hlds__term_pass2__RestSCC_17, (MR_Integer) 1, transform_hlds__term_pass2__PassInfo_9, transform_hlds__term_pass2__Terminates_10, transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_19);
#line 177 "term_pass2.m"
          return;
        }
#line 173 "term_pass2.m"
      }
#line 173 "term_pass2.m"
  }
#line 166 "term_pass2.m"
}

#line 139 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0_1(
#line 139 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg,
#line 139 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 139 "term_pass2.m"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_2)
#line 139 "term_pass2.m"
{
#line 139 "term_pass2.m"
  {
#line 139 "term_pass2.m"
    MR_Box transform_hlds__term_pass2__closure = transform_hlds__term_pass2__closure_arg;
#line 139 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__3_22;

#line 139 "term_pass2.m"
    {
#line 139 "term_pass2.m"
      transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__142__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), &transform_hlds__term_pass2__conv0_HeadVar__3_22);
    }
#line 139 "term_pass2.m"
    *transform_hlds__term_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__3_22));
#line 139 "term_pass2.m"
  }
#line 139 "term_pass2.m"
}

#line 128 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0(
#line 128 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 128 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_2,
#line 128 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__3_3)
#line 128 "term_pass2.m"
{
#line 131 "term_pass2.m"
  {
#line 131 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 131 "term_pass2.m"
    if ((transform_hlds__term_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 131 "term_pass2.m"
      {
#line 132 "term_pass2.m"
        {
#line 132 "term_pass2.m"
          mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_1[0], transform_hlds__term_pass2__HeadVar__3_3);
#line 132 "term_pass2.m"
          return;
        }
#line 131 "term_pass2.m"
      }
#line 131 "term_pass2.m"
    else
#line 133 "term_pass2.m"
      {
#line 133 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__PPId_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 133 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__PPIds_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 133 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__RecSupplierMap0_10;
#line 133 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__ProcInfo_12;
#line 133 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__HeadVars_13;
#line 133 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__ArgModes_14;
#line 133 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__InArgs_15;
#line 133 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__MapIsInput_17;
#line 133 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__BoolList_20;
#line 135 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_11_11;
#line 138 "term_pass2.m"
        MR_Word transform_hlds__term_pass2___OutVars_16;

#line 134 "term_pass2.m"
        {
#line 134 "term_pass2.m"
          transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0(transform_hlds__term_pass2__PPIds_7, transform_hlds__term_pass2__ModuleInfo_2, &transform_hlds__term_pass2__RecSupplierMap0_10);
        }
#line 135 "term_pass2.m"
        {
#line 135 "term_pass2.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass2__ModuleInfo_2, transform_hlds__term_pass2__PPId_6, &transform_hlds__term_pass2__V_11_11, &transform_hlds__term_pass2__ProcInfo_12);
        }
#line 136 "term_pass2.m"
        {
#line 136 "term_pass2.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass2__ProcInfo_12, &transform_hlds__term_pass2__HeadVars_13);
        }
#line 137 "term_pass2.m"
        {
#line 137 "term_pass2.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_pass2__ProcInfo_12, &transform_hlds__term_pass2__ArgModes_14);
        }
#line 138 "term_pass2.m"
        {
#line 138 "term_pass2.m"
          transform_hlds__term_util__partition_call_args_5_p_0(transform_hlds__term_pass2__ModuleInfo_2, transform_hlds__term_pass2__ArgModes_14, transform_hlds__term_pass2__HeadVars_13, &transform_hlds__term_pass2__InArgs_15, &transform_hlds__term_pass2___OutVars_16);
        }
#line 139 "term_pass2.m"
        {
#line 139 "term_pass2.m"
          transform_hlds__term_pass2__MapIsInput_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 139 "term_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__MapIsInput_17, 0) = ((MR_Box) (&transform_hlds__term_pass2_scalar_common_4[0]));
#line 139 "term_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__MapIsInput_17, 1) = ((MR_Box) (transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0_1));
#line 139 "term_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__MapIsInput_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 139 "term_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__MapIsInput_17, 3) = ((MR_Box) (transform_hlds__term_pass2__InArgs_15));
#line 139 "term_pass2.m"
        }
#line 146 "term_pass2.m"
        {
#line 146 "term_pass2.m"
          mercury__list__map_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__term_pass2__MapIsInput_17, transform_hlds__term_pass2__HeadVars_13, &transform_hlds__term_pass2__BoolList_20);
        }
#line 147 "term_pass2.m"
        {
#line 147 "term_pass2.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_1[0], ((MR_Box) (transform_hlds__term_pass2__PPId_6)), ((MR_Box) (transform_hlds__term_pass2__BoolList_20)), transform_hlds__term_pass2__RecSupplierMap0_10, transform_hlds__term_pass2__HeadVar__3_3);
#line 147 "term_pass2.m"
          return;
        }
#line 133 "term_pass2.m"
      }
#line 131 "term_pass2.m"
  }
#line 128 "term_pass2.m"
}

#line 104 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_1(
#line 104 "term_pass2.m"
  void * transform_hlds__term_pass2__env_ptr_arg)
#line 104 "term_pass2.m"
{
#line 104 "term_pass2.m"
  {
#line 104 "term_pass2.m"
    struct transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0_s * transform_hlds__term_pass2__env_ptr = (struct transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0_s *) transform_hlds__term_pass2__env_ptr_arg;

#line 104 "term_pass2.m"
    MR_builtin_longjmp((transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__commit_0, 1);
#line 104 "term_pass2.m"
  }
#line 104 "term_pass2.m"
}

#line 104 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_3(
#line 104 "term_pass2.m"
  void * transform_hlds__term_pass2__env_ptr_arg)
#line 104 "term_pass2.m"
{
#line 104 "term_pass2.m"
  {
#line 104 "term_pass2.m"
    struct transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0_s * transform_hlds__term_pass2__env_ptr = (struct transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0_s *) transform_hlds__term_pass2__env_ptr_arg;

#line 104 "term_pass2.m"
    (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__Error_19 = ((MR_Word) (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__conv0_Error_19);
#line 104 "term_pass2.m"
    {
#line 104 "term_pass2.m"
      transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_2(transform_hlds__term_pass2__env_ptr);
#line 104 "term_pass2.m"
      return;
    }
#line 104 "term_pass2.m"
  }
#line 104 "term_pass2.m"
}

#line 104 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_2(
#line 104 "term_pass2.m"
  void * transform_hlds__term_pass2__env_ptr_arg)
#line 104 "term_pass2.m"
{
#line 104 "term_pass2.m"
  {
#line 104 "term_pass2.m"
    struct transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0_s * transform_hlds__term_pass2__env_ptr = (struct transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0_s *) transform_hlds__term_pass2__env_ptr_arg;

#line 104 "term_pass2.m"
    {
#line 105 "term_pass2.m"
      MR_Word transform_hlds__term_pass2__V_20_20;

#line 105 "term_pass2.m"
      (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__Error_19, (MR_Integer) 0)));
#line 105 "term_pass2.m"
      transform_hlds__term_pass2__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__Error_19, (MR_Integer) 1)));
#line 105 "term_pass2.m"
      (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__succeeded = ((transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 105 "term_pass2.m"
      if ((transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__succeeded)
#line 105 "term_pass2.m"
        {
#line 105 "term_pass2.m"
          transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_1(transform_hlds__term_pass2__env_ptr);
#line 105 "term_pass2.m"
          return;
        }
#line 104 "term_pass2.m"
    }
#line 104 "term_pass2.m"
  }
#line 104 "term_pass2.m"
}

#line 104 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_4(
#line 104 "term_pass2.m"
  void * transform_hlds__term_pass2__env_ptr_arg)
#line 104 "term_pass2.m"
{
#line 104 "term_pass2.m"
  {
#line 104 "term_pass2.m"
    struct transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0_s * transform_hlds__term_pass2__env_ptr = (struct transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0_s *) transform_hlds__term_pass2__env_ptr_arg;

#line 104 "term_pass2.m"
    if (MR_builtin_setjmp((transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__commit_0) == 0)
#line 104 "term_pass2.m"
      {
#line 104 "term_pass2.m"
        {
#line 104 "term_pass2.m"
          {
#line 104 "term_pass2.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0, &(transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__conv0_Error_19, (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__Errors_17, transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_3, transform_hlds__term_pass2__env_ptr);
          }
#line 104 "term_pass2.m"
        }
#line 104 "term_pass2.m"
        (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__succeeded = MR_FALSE;
#line 104 "term_pass2.m"
      }
#line 104 "term_pass2.m"
    else
#line 104 "term_pass2.m"
      (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__succeeded = MR_TRUE;
#line 104 "term_pass2.m"
  }
#line 104 "term_pass2.m"
}

#line 34 "term_pass2.m"
void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_8_p_0(
#line 34 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__SCC_9,
#line 34 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__PassInfo_10,
#line 34 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__SingleArgs_11,
#line 34 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__Termination_12,
#line 34 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_22,
#line 34 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_23)
#line 34 "term_pass2.m"
{
#line 34 "term_pass2.m"
  {
#line 34 "term_pass2.m"
    struct transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0_s transform_hlds__term_pass2__env;

#line 88 "term_pass2.m"
    {
#line 88 "term_pass2.m"
      MR_Word transform_hlds__term_pass2__InitRecSuppliers_15;
#line 88 "term_pass2.m"
      MR_Word transform_hlds__term_pass2__Termination0_16;
#line 88 "term_pass2.m"
      MR_Word transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_27_27;
#line 88 "term_pass2.m"
      MR_Word transform_hlds__term_pass2__Result_47;

#line 89 "term_pass2.m"
      {
#line 89 "term_pass2.m"
        transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0(transform_hlds__term_pass2__SCC_9, transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_22, &transform_hlds__term_pass2__InitRecSuppliers_15);
      }
#line 306 "term_pass2.m"
      {
#line 306 "term_pass2.m"
        transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_p_0(transform_hlds__term_pass2__SCC_9, (MR_Integer) 1, transform_hlds__term_pass2__PassInfo_10, transform_hlds__term_pass2__InitRecSuppliers_15, &transform_hlds__term_pass2__Result_47, transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_0_22, &transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_27_27);
      }
#line 330 "term_pass2.m"
      if (((MR_tag((MR_Word) transform_hlds__term_pass2__Result_47)) == (MR_mktag((MR_Integer) 1))))
#line 331 "term_pass2.m"
        {
#line 331 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__Errors_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Result_47, (MR_Integer) 0)));

#line 332 "term_pass2.m"
          {
#line 332 "term_pass2.m"
            transform_hlds__term_pass2__Termination0_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 332 "term_pass2.m"
            MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Termination0_16, 0) = ((MR_Box) (transform_hlds__term_pass2__Errors_64));
#line 332 "term_pass2.m"
          }
#line 331 "term_pass2.m"
        }
#line 330 "term_pass2.m"
      else
#line 309 "term_pass2.m"
        {
#line 309 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__CallInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result_47, (MR_Integer) 0)));
#line 309 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__InfCalls_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo_48, (MR_Integer) 0)));
#line 309 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__CallWeights_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo_48, (MR_Integer) 1)));
#line 309 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result_47, (MR_Integer) 1)));

#line 316 "term_pass2.m"
          if ((transform_hlds__term_pass2__InfCalls_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 326 "term_pass2.m"
            {
#line 326 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__Cycles_58;
#line 320 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__PPIds_76;
#line 321 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__V_59_59;
#line 321 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__V_60_60;

#line 537 "term_pass2.m"
              {
#line 537 "term_pass2.m"
                mercury__map__keys_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__CallWeights_51, &transform_hlds__term_pass2__PPIds_76);
              }
#line 538 "term_pass2.m"
              {
#line 538 "term_pass2.m"
                transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(transform_hlds__term_pass2__PPIds_76, transform_hlds__term_pass2__CallWeights_51, transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_27_27, &transform_hlds__term_pass2__Cycles_58);
              }
#line 321 "term_pass2.m"
              (transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass2__Cycles_58)) == (MR_mktag((MR_Integer) 1)));
#line 321 "term_pass2.m"
              if ((transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__succeeded)
#line 321 "term_pass2.m"
                {
#line 321 "term_pass2.m"
                  transform_hlds__term_pass2__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Cycles_58, (MR_Integer) 0)));
#line 321 "term_pass2.m"
                  transform_hlds__term_pass2__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Cycles_58, (MR_Integer) 1)));
#line 323 "term_pass2.m"
                  {
#line 323 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__ReportedCycles_63;
#line 323 "term_pass2.m"
                    MR_Integer transform_hlds__term_pass2__MaxErrors_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_10, (MR_Integer) 1)));
#line 323 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_10, (MR_Integer) 0)));
#line 323 "term_pass2.m"
                    MR_Integer transform_hlds__term_pass2__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_10, (MR_Integer) 2)));

#line 324 "term_pass2.m"
                    {
#line 324 "term_pass2.m"
                      mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0, transform_hlds__term_pass2__MaxErrors_68, transform_hlds__term_pass2__Cycles_58, &transform_hlds__term_pass2__ReportedCycles_63);
                    }
#line 325 "term_pass2.m"
                    {
#line 325 "term_pass2.m"
                      transform_hlds__term_pass2__Termination0_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 325 "term_pass2.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Termination0_16, 0) = ((MR_Box) (transform_hlds__term_pass2__ReportedCycles_63));
#line 325 "term_pass2.m"
                    }
#line 323 "term_pass2.m"
                  }
#line 321 "term_pass2.m"
                }
#line 321 "term_pass2.m"
              else
#line 327 "term_pass2.m"
                {
#line 327 "term_pass2.m"
                  mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 327 "term_pass2.m"
                  transform_hlds__term_pass2__Termination0_16 = (MR_Word) &transform_hlds__term_pass2_scalar_common_3[0];
#line 327 "term_pass2.m"
                }
#line 326 "term_pass2.m"
            }
#line 316 "term_pass2.m"
          else
#line 312 "term_pass2.m"
            {
#line 312 "term_pass2.m"
              MR_Integer transform_hlds__term_pass2__MaxErrors_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_10, (MR_Integer) 1)));
#line 312 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__ReportedInfCalls_57;
#line 313 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_10, (MR_Integer) 0)));
#line 313 "term_pass2.m"
              MR_Integer transform_hlds__term_pass2__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_10, (MR_Integer) 2)));

#line 314 "term_pass2.m"
              {
#line 314 "term_pass2.m"
                mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0, transform_hlds__term_pass2__MaxErrors_55, transform_hlds__term_pass2__InfCalls_50, &transform_hlds__term_pass2__ReportedInfCalls_57);
              }
#line 315 "term_pass2.m"
              {
#line 315 "term_pass2.m"
                transform_hlds__term_pass2__Termination0_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 315 "term_pass2.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Termination0_16, 0) = ((MR_Box) (transform_hlds__term_pass2__ReportedInfCalls_57));
#line 315 "term_pass2.m"
              }
#line 312 "term_pass2.m"
            }
#line 309 "term_pass2.m"
        }
#line 120 "term_pass2.m"
      if (((MR_tag((MR_Word) transform_hlds__term_pass2__Termination0_16)) == (MR_mktag((MR_Integer) 1))))
#line 93 "term_pass2.m"
        {
#line 98 "term_pass2.m"
          MR_Integer transform_hlds__term_pass2__ProcCount_18;

#line 93 "term_pass2.m"
          (transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__Errors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Termination0_16, (MR_Integer) 0)));
#line 98 "term_pass2.m"
          {
#line 98 "term_pass2.m"
            mercury__list__length_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_pass2__SCC_9, &transform_hlds__term_pass2__ProcCount_18);
          }
#line 99 "term_pass2.m"
          (transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__succeeded = (transform_hlds__term_pass2__ProcCount_18 <= transform_hlds__term_pass2__SingleArgs_11);
#line 98 "term_pass2.m"
          if ((transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__succeeded)
#line 98 "term_pass2.m"
            {
#line 104 "term_pass2.m"
              {
#line 104 "term_pass2.m"
                transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_4(&transform_hlds__term_pass2__env);
              }
#line 103 "term_pass2.m"
              (transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__succeeded = !((transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__succeeded);
#line 98 "term_pass2.m"
            }
#line 117 "term_pass2.m"
          if ((transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_8_p_0_env_0__succeeded)
#line 109 "term_pass2.m"
            {
#line 109 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__SingleArgTerminates_21;

#line 108 "term_pass2.m"
              {
#line 108 "term_pass2.m"
                transform_hlds__term_pass2__prove_termination_in_scc_single_arg_7_p_0(transform_hlds__term_pass2__SCC_9, transform_hlds__term_pass2__PassInfo_10, &transform_hlds__term_pass2__SingleArgTerminates_21, transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_27_27, transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_23);
              }
#line 113 "term_pass2.m"
              if ((transform_hlds__term_pass2__SingleArgTerminates_21 == (MR_Integer) 0))
#line 115 "term_pass2.m"
                *transform_hlds__term_pass2__Termination_12 = transform_hlds__term_pass2__Termination0_16;
#line 113 "term_pass2.m"
              else
#line 111 "term_pass2.m"
                {
#line 112 "term_pass2.m"
                  mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 112 "term_pass2.m"
                  *transform_hlds__term_pass2__Termination_12 = (MR_Word) &transform_hlds__term_pass2_scalar_common_3[0];
#line 111 "term_pass2.m"
                }
#line 109 "term_pass2.m"
            }
#line 117 "term_pass2.m"
          else
#line 118 "term_pass2.m"
            {
#line 118 "term_pass2.m"
              *transform_hlds__term_pass2__Termination_12 = transform_hlds__term_pass2__Termination0_16;
#line 118 "term_pass2.m"
              *transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_23 = transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_27_27;
#line 118 "term_pass2.m"
            }
#line 93 "term_pass2.m"
        }
#line 120 "term_pass2.m"
      else
#line 121 "term_pass2.m"
        {
#line 122 "term_pass2.m"
          *transform_hlds__term_pass2__Termination_12 = transform_hlds__term_pass2__Termination0_16;
#line 122 "term_pass2.m"
          *transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_23 = transform_hlds__term_pass2__STATE_VARIABLE_ModuleInfo_27_27;
#line 121 "term_pass2.m"
        }
#line 88 "term_pass2.m"
    }
#line 34 "term_pass2.m"
  }
#line 34 "term_pass2.m"
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
