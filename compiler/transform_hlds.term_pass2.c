/*
** Automatically generated from `term_pass2.m'
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



#line 34 "term_pass2.m"
struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s {
#line 88 "term_pass2.m"
  MR_bool transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded;
#line 93 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Errors_13;
#line 104 "term_pass2.m"
  jmp_buf transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__commit_0;
#line 104 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Error_15;
#line 104 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__V_20_20;
#line 104 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__conv0_Error_15;
#line 34 "term_pass2.m"
};


#line 161 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 164 "transform_hlds.term_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 167 "transform_hlds.term_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 170 "transform_hlds.term_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0;

#line 173 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0;

#line 176 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0;

#line 179 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0;

#line 182 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

#line 185 "transform_hlds.term_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_call_weight_info_0_0[2];

#line 188 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_call_weight_info_0_0;

#line 191 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_call_weight_info_0_0[1];

#line 194 "transform_hlds.term_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_call_weight_info_0[1];

#line 197 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_call_weight_info_0[1];

#line 200 "transform_hlds.term_pass2.c"
static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_call_weight_info_0[1];

#line 203 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_0;

#line 206 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_1;

#line 209 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__enum_value_ordered_fixpoint_dir_0[2];

#line 212 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__enum_name_ordered_fixpoint_dir_0[2];

#line 215 "transform_hlds.term_pass2.c"
static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_fixpoint_dir_0[2];

#line 218 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__list__ti_list_1bool__type_ctor_info_bool_0;

#line 221 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0;

#line 224 "transform_hlds.term_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_0[2];

#line 227 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_0;

#line 230 "transform_hlds.term_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_1[1];

#line 233 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_1;

#line 236 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_0[1];

#line 239 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_1[1];

#line 242 "transform_hlds.term_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_term_pass2_result_0[2];

#line 245 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_term_pass2_result_0[2];

#line 248 "transform_hlds.term_pass2.c"
static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_term_pass2_result_0[2];

#line 251 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0_10001(
#line 254 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 256 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2);

#line 259 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0_10001(
#line 262 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 264 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 266 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3);

#line 269 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_graph_0_0_10001(
#line 272 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 274 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2);

#line 277 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_graph_0_0_10001(
#line 280 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 282 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 284 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3);

#line 287 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_info_0_0_10001(
#line 290 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 292 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2);

#line 295 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_info_0_0_10001(
#line 298 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 300 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 302 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3);

#line 305 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____fixpoint_dir_0_0_10001(
#line 308 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 310 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2);

#line 313 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____fixpoint_dir_0_0_10001(
#line 316 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 318 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 320 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3);

#line 323 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____term_pass2_result_0_0_10001(
#line 326 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 328 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2);

#line 331 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____term_pass2_result_0_0_10001(
#line 334 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 336 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 338 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3);

#line 282 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_115_105_110_103_108_101_95_97_114_103_95_111_116_104_101_114_115_95_95_50_56_50_95_95_49_95_95_91_49_93_95_48_2_p_0(
#line 282 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_23);

#line 251 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_97_100_100_95_115_105_110_103_108_101_95_97_114_103_95_95_50_53_49_95_95_49_95_95_91_49_93_95_48_2_p_0(
#line 251 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_20);

#line 390 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__390__1_2_p_0(
#line 390 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CanLoop_39,
#line 390 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_60);

#line 407 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__407__1_2_p_0(
#line 407 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_55,
#line 407 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CanLoop_61);

#line 282 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_single_arg_others__282__1_2_p_0(
#line 282 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_22,
#line 282 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_23);

#line 251 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_add_single_arg__251__1_2_p_0(
#line 251 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_19,
#line 251 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_20);

#line 140 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__140__1_3_p_0(
#line 140 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__InArgs_15,
#line 140 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__LambdaHeadVar__1_21,
#line 140 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__LambdaHeadVar__2_22);

#line 77 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____term_pass2_result_0_0(
#line 77 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 77 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 77 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3);

#line 77 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____term_pass2_result_0_0(
#line 77 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 77 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2);

#line 64 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____fixpoint_dir_0_0(
#line 64 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 64 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 64 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3);

#line 64 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____fixpoint_dir_0_0(
#line 64 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_1,
#line 64 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2);

#line 68 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_info_0_0(
#line 68 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 68 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 68 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3);

#line 68 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_info_0_0(
#line 68 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 68 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2);

#line 74 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_graph_0_0(
#line 74 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 74 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 74 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3);

#line 74 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_graph_0_0(
#line 74 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 74 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2);

#line 75 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0(
#line 75 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 75 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 75 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3);

#line 75 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0(
#line 75 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 75 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2);

#line 572 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_p_0(
#line 572 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 572 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__LookforPPId_11,
#line 572 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ProcContext_12,
#line 572 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__WeightSoFar0_13,
#line 572 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__VisitedCalls_14,
#line 572 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CallWeights_15,
#line 572 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__Cycles_16);

#line 557 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(
#line 557 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 557 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__LookforPPId_2,
#line 557 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__Context_3,
#line 557 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__WeightSoFar_4,
#line 557 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__VisitedCalls_5,
#line 557 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CallWeights_6,
#line 557 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__7_7);

#line 532 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(
#line 532 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
#line 532 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CallWeights_2,
#line 532 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3,
#line 532 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__4_4);

#line 465 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__add_call_arcs_4_p_0(
#line 465 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 465 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 465 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3,
#line 465 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_4);

#line 414 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__update_rec_input_suppliers_7_p_0(
#line 414 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 414 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ActiveVars_2,
#line 414 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__FixDir_3,
#line 414 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__4_4,
#line 414 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__5_5,
#line 414 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecBag_0_6,
#line 414 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_RecBag_7);

#line 390 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_2(
#line 390 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg);

#line 407 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_1(
#line 407 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg);

#line 364 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0(
#line 364 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
#line 364 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__PassInfo_2,
#line 364 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__FixDir_3,
#line 364 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__4_4,
#line 364 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__RecSupplierMap_5,
#line 364 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__6_6,
#line 364 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__7_7,
#line 364 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__8_8);

#line 333 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_6_p_0(
#line 333 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_7,
#line 333 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__PassInfo_8,
#line 333 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__FixDir_9,
#line 333 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__SCC_10,
#line 333 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__RecSupplierMap0_11,
#line 333 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__Result_12);

#line 282 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0_1(
#line 282 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg,
#line 282 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 282 "term_pass2.m"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_2);

#line 274 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0(
#line 274 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
#line 274 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 274 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0_3,
#line 274 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_4);

#line 251 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0_1(
#line 251 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg,
#line 251 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 251 "term_pass2.m"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_2);

#line 242 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0(
#line 242 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_5,
#line 242 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 242 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__ArgNum_8,
#line 242 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__BoolList_9);

#line 205 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_6_p_0(
#line 205 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_7,
#line 205 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__PassInfo_8,
#line 205 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__TrialPPId_9,
#line 205 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__RestSCC_10,
#line 205 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__ArgNum0_11,
#line 205 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__Terminates_12);

#line 185 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__find_min_arity_proc_6_p_0(
#line 185 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
#line 185 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 185 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__BestSofarPPId_3,
#line 185 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__BestSofarArity_4,
#line 185 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__5_5,
#line 185 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__6_6);

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
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_1(
#line 104 "term_pass2.m"
  void * transform_hlds__term_pass2__env_ptr_arg);

#line 104 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_3(
#line 104 "term_pass2.m"
  void * transform_hlds__term_pass2__env_ptr_arg);

#line 104 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_2(
#line 104 "term_pass2.m"
  void * transform_hlds__term_pass2__env_ptr_arg);

#line 104 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_4(
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



#line 863 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 871 "transform_hlds.term_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_pass2__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 879 "transform_hlds.term_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 887 "transform_hlds.term_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

#line 895 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 904 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_pass2__pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0
  }
};

#line 913 "transform_hlds.term_pass2.c"
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

#line 930 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0
  }
};

#line 939 "transform_hlds.term_pass2.c"
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

#line 956 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

#line 964 "transform_hlds.term_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_call_weight_info_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass2__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0
};

#line 970 "transform_hlds.term_pass2.c"
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

#line 985 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_call_weight_info_0_0[1] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_call_weight_info_0_0
};

#line 990 "transform_hlds.term_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_call_weight_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_call_weight_info_0_0
  }
};

#line 999 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_call_weight_info_0[1] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_call_weight_info_0_0
};

#line 1004 "transform_hlds.term_pass2.c"
static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_call_weight_info_0[1] = {
  (MR_Integer) 0
};

#line 1009 "transform_hlds.term_pass2.c"
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

#line 1026 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_0 = {
  (MR_String) "up",
  (MR_Integer) 0
};

#line 1032 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_1 = {
  (MR_String) "down",
  (MR_Integer) 1
};

#line 1038 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__enum_value_ordered_fixpoint_dir_0[2] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_0,
  &transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_1
};

#line 1044 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__enum_name_ordered_fixpoint_dir_0[2] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_1,
  &transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_0
};

#line 1050 "transform_hlds.term_pass2.c"
static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_fixpoint_dir_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1056 "transform_hlds.term_pass2.c"
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

#line 1073 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 1081 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_pass2__list__ti_list_1bool__type_ctor_info_bool_0
  }
};

#line 1090 "transform_hlds.term_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_call_weight_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0
};

#line 1096 "transform_hlds.term_pass2.c"
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

#line 1111 "transform_hlds.term_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass2__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
};

#line 1116 "transform_hlds.term_pass2.c"
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

#line 1131 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_0[1] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_0
};

#line 1136 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_1[1] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_1
};

#line 1141 "transform_hlds.term_pass2.c"
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

#line 1155 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_term_pass2_result_0[2] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_1,
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_0
};

#line 1161 "transform_hlds.term_pass2.c"
static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_term_pass2_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1167 "transform_hlds.term_pass2.c"
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

#line 1184 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0_10001(
#line 1187 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 1189 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2)
#line 1191 "transform_hlds.term_pass2.c"
{
#line 1193 "transform_hlds.term_pass2.c"
  {
#line 1195 "transform_hlds.term_pass2.c"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 1198 "transform_hlds.term_pass2.c"
    {
#line 1200 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2));
    }
#line 1203 "transform_hlds.term_pass2.c"
    return transform_hlds__term_pass2__succeeded;
#line 1205 "transform_hlds.term_pass2.c"
  }
#line 1207 "transform_hlds.term_pass2.c"
}

#line 1210 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0_10001(
#line 1213 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 1215 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 1217 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3)
#line 1219 "transform_hlds.term_pass2.c"
{
#line 1221 "transform_hlds.term_pass2.c"
  {
#line 1223 "transform_hlds.term_pass2.c"
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__1_1;

#line 1226 "transform_hlds.term_pass2.c"
    {
#line 1228 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0(&transform_hlds__term_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_3));
    }
#line 1231 "transform_hlds.term_pass2.c"
    *transform_hlds__term_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__1_1));
#line 1233 "transform_hlds.term_pass2.c"
  }
#line 1235 "transform_hlds.term_pass2.c"
}

#line 1238 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_graph_0_0_10001(
#line 1241 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 1243 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2)
#line 1245 "transform_hlds.term_pass2.c"
{
#line 1247 "transform_hlds.term_pass2.c"
  {
#line 1249 "transform_hlds.term_pass2.c"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 1252 "transform_hlds.term_pass2.c"
    {
#line 1254 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____call_weight_graph_0_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2));
    }
#line 1257 "transform_hlds.term_pass2.c"
    return transform_hlds__term_pass2__succeeded;
#line 1259 "transform_hlds.term_pass2.c"
  }
#line 1261 "transform_hlds.term_pass2.c"
}

#line 1264 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_graph_0_0_10001(
#line 1267 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 1269 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 1271 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3)
#line 1273 "transform_hlds.term_pass2.c"
{
#line 1275 "transform_hlds.term_pass2.c"
  {
#line 1277 "transform_hlds.term_pass2.c"
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__1_1;

#line 1280 "transform_hlds.term_pass2.c"
    {
#line 1282 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2____Compare____call_weight_graph_0_0(&transform_hlds__term_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_3));
    }
#line 1285 "transform_hlds.term_pass2.c"
    *transform_hlds__term_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__1_1));
#line 1287 "transform_hlds.term_pass2.c"
  }
#line 1289 "transform_hlds.term_pass2.c"
}

#line 1292 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_info_0_0_10001(
#line 1295 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 1297 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2)
#line 1299 "transform_hlds.term_pass2.c"
{
#line 1301 "transform_hlds.term_pass2.c"
  {
#line 1303 "transform_hlds.term_pass2.c"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 1306 "transform_hlds.term_pass2.c"
    {
#line 1308 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____call_weight_info_0_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2));
    }
#line 1311 "transform_hlds.term_pass2.c"
    return transform_hlds__term_pass2__succeeded;
#line 1313 "transform_hlds.term_pass2.c"
  }
#line 1315 "transform_hlds.term_pass2.c"
}

#line 1318 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_info_0_0_10001(
#line 1321 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 1323 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 1325 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3)
#line 1327 "transform_hlds.term_pass2.c"
{
#line 1329 "transform_hlds.term_pass2.c"
  {
#line 1331 "transform_hlds.term_pass2.c"
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__1_1;

#line 1334 "transform_hlds.term_pass2.c"
    {
#line 1336 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2____Compare____call_weight_info_0_0(&transform_hlds__term_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_3));
    }
#line 1339 "transform_hlds.term_pass2.c"
    *transform_hlds__term_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__1_1));
#line 1341 "transform_hlds.term_pass2.c"
  }
#line 1343 "transform_hlds.term_pass2.c"
}

#line 1346 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____fixpoint_dir_0_0_10001(
#line 1349 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 1351 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2)
#line 1353 "transform_hlds.term_pass2.c"
{
#line 1355 "transform_hlds.term_pass2.c"
  {
#line 1357 "transform_hlds.term_pass2.c"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 1360 "transform_hlds.term_pass2.c"
    {
#line 1362 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____fixpoint_dir_0_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2));
    }
#line 1365 "transform_hlds.term_pass2.c"
    return transform_hlds__term_pass2__succeeded;
#line 1367 "transform_hlds.term_pass2.c"
  }
#line 1369 "transform_hlds.term_pass2.c"
}

#line 1372 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____fixpoint_dir_0_0_10001(
#line 1375 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 1377 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 1379 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3)
#line 1381 "transform_hlds.term_pass2.c"
{
#line 1383 "transform_hlds.term_pass2.c"
  {
#line 1385 "transform_hlds.term_pass2.c"
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__1_1;

#line 1388 "transform_hlds.term_pass2.c"
    {
#line 1390 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2____Compare____fixpoint_dir_0_0(&transform_hlds__term_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_3));
    }
#line 1393 "transform_hlds.term_pass2.c"
    *transform_hlds__term_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__1_1));
#line 1395 "transform_hlds.term_pass2.c"
  }
#line 1397 "transform_hlds.term_pass2.c"
}

#line 1400 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____term_pass2_result_0_0_10001(
#line 1403 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 1405 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2)
#line 1407 "transform_hlds.term_pass2.c"
{
#line 1409 "transform_hlds.term_pass2.c"
  {
#line 1411 "transform_hlds.term_pass2.c"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 1414 "transform_hlds.term_pass2.c"
    {
#line 1416 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____term_pass2_result_0_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2));
    }
#line 1419 "transform_hlds.term_pass2.c"
    return transform_hlds__term_pass2__succeeded;
#line 1421 "transform_hlds.term_pass2.c"
  }
#line 1423 "transform_hlds.term_pass2.c"
}

#line 1426 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____term_pass2_result_0_0_10001(
#line 1429 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 1431 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 1433 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3)
#line 1435 "transform_hlds.term_pass2.c"
{
#line 1437 "transform_hlds.term_pass2.c"
  {
#line 1439 "transform_hlds.term_pass2.c"
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__1_1;

#line 1442 "transform_hlds.term_pass2.c"
    {
#line 1444 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2____Compare____term_pass2_result_0_0(&transform_hlds__term_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_3));
    }
#line 1447 "transform_hlds.term_pass2.c"
    *transform_hlds__term_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__1_1));
#line 1449 "transform_hlds.term_pass2.c"
  }
#line 1451 "transform_hlds.term_pass2.c"
}

#line 282 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_115_105_110_103_108_101_95_97_114_103_95_111_116_104_101_114_115_95_95_50_56_50_95_95_49_95_95_91_49_93_95_48_2_p_0(
#line 282 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_23)
#line 282 "term_pass2.m"
{
#line 615 "term_pass2.m"
  {
#line 615 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 615 "term_pass2.m"
    *transform_hlds__term_pass2__HeadVar__2_23 = (MR_Integer) 0;
#line 615 "term_pass2.m"
  }
#line 282 "term_pass2.m"
}

#line 251 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_97_100_100_95_115_105_110_103_108_101_95_97_114_103_95_95_50_53_49_95_95_49_95_95_91_49_93_95_48_2_p_0(
#line 251 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_20)
#line 251 "term_pass2.m"
{
#line 615 "term_pass2.m"
  {
#line 615 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 615 "term_pass2.m"
    *transform_hlds__term_pass2__HeadVar__2_20 = (MR_Integer) 0;
#line 615 "term_pass2.m"
  }
#line 251 "term_pass2.m"
}

#line 390 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__390__1_2_p_0(
#line 390 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CanLoop_39,
#line 390 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_60)
#line 390 "term_pass2.m"
{
#line 390 "term_pass2.m"
  {
#line 390 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 390 "term_pass2.m"
    {
#line 390 "term_pass2.m"
      transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[2], ((MR_Box) (transform_hlds__term_pass2__CanLoop_39)), ((MR_Box) (transform_hlds__term_pass2__HeadVar__2_60)));
    }
#line 390 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 390 "term_pass2.m"
  }
#line 390 "term_pass2.m"
}

#line 407 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__407__1_2_p_0(
#line 407 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_55,
#line 407 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CanLoop_61)
#line 407 "term_pass2.m"
{
#line 407 "term_pass2.m"
  {
#line 407 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 407 "term_pass2.m"
    {
#line 407 "term_pass2.m"
      transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[2], ((MR_Box) (transform_hlds__term_pass2__CanLoop_61)), ((MR_Box) (transform_hlds__term_pass2__HeadVar__1_55)));
    }
#line 407 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 407 "term_pass2.m"
  }
#line 407 "term_pass2.m"
}

#line 282 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_single_arg_others__282__1_2_p_0(
#line 282 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_22,
#line 282 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_23)
#line 282 "term_pass2.m"
{
#line 615 "term_pass2.m"
  {
#line 615 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 615 "term_pass2.m"
    {
#line 615 "term_pass2.m"
      transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_115_105_110_103_108_101_95_97_114_103_95_111_116_104_101_114_115_95_95_50_56_50_95_95_49_95_95_91_49_93_95_48_2_p_0(transform_hlds__term_pass2__HeadVar__2_23);
    }
#line 615 "term_pass2.m"
  }
#line 282 "term_pass2.m"
}

#line 251 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_add_single_arg__251__1_2_p_0(
#line 251 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_19,
#line 251 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_20)
#line 251 "term_pass2.m"
{
#line 615 "term_pass2.m"
  {
#line 615 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 615 "term_pass2.m"
    {
#line 615 "term_pass2.m"
      transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_97_100_100_95_115_105_110_103_108_101_95_97_114_103_95_95_50_53_49_95_95_49_95_95_91_49_93_95_48_2_p_0(transform_hlds__term_pass2__HeadVar__2_20);
    }
#line 615 "term_pass2.m"
  }
#line 251 "term_pass2.m"
}

#line 140 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__140__1_3_p_0(
#line 140 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__InArgs_15,
#line 140 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__LambdaHeadVar__1_21,
#line 140 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__LambdaHeadVar__2_22)
#line 140 "term_pass2.m"
{
#line 140 "term_pass2.m"
  {
#line 140 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 140 "term_pass2.m"
    {
#line 140 "term_pass2.m"
      transform_hlds__term_pass2__succeeded = mercury__bag__contains_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__InArgs_15, ((MR_Box) (transform_hlds__term_pass2__LambdaHeadVar__1_21)));
    }
#line 140 "term_pass2.m"
    if (transform_hlds__term_pass2__succeeded)
#line 141 "term_pass2.m"
      *transform_hlds__term_pass2__LambdaHeadVar__2_22 = (MR_Integer) 1;
#line 140 "term_pass2.m"
    else
#line 143 "term_pass2.m"
      *transform_hlds__term_pass2__LambdaHeadVar__2_22 = (MR_Integer) 0;
#line 140 "term_pass2.m"
  }
#line 140 "term_pass2.m"
}

#line 77 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____term_pass2_result_0_0(
#line 77 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 77 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 77 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3)
#line 77 "term_pass2.m"
{
#line 77 "term_pass2.m"
  {
#line 77 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 77 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastX_17 = (MR_Integer) transform_hlds__term_pass2__HeadVar__2_2;
#line 77 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastY_18 = (MR_Integer) transform_hlds__term_pass2__HeadVar__3_3;

#line 77 "term_pass2.m"
    transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__CastX_17 == transform_hlds__term_pass2__CastY_18);
#line 77 "term_pass2.m"
    if (transform_hlds__term_pass2__succeeded)
#line 1650 "transform_hlds.term_pass2.c"
      *transform_hlds__term_pass2__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "term_pass2.m"
    else
#line 77 "term_pass2.m"
    if (((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 77 "term_pass2.m"
      {
#line 77 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));

#line 77 "term_pass2.m"
        if (((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 77 "term_pass2.m"
          {
#line 77 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 0)));

#line 77 "term_pass2.m"
            {
#line 77 "term_pass2.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[2], transform_hlds__term_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass2__V_22_22)), ((MR_Box) (transform_hlds__term_pass2__V_16_16)));
            }
#line 77 "term_pass2.m"
          }
#line 77 "term_pass2.m"
        else
#line 1677 "transform_hlds.term_pass2.c"
          *transform_hlds__term_pass2__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "term_pass2.m"
      }
#line 77 "term_pass2.m"
    else
#line 77 "term_pass2.m"
      {
#line 77 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 77 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));

#line 77 "term_pass2.m"
        if (((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1692 "transform_hlds.term_pass2.c"
          *transform_hlds__term_pass2__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "term_pass2.m"
        else
#line 77 "term_pass2.m"
          {
#line 77 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 0)));
#line 77 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 1)));
#line 77 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_8_8;

#line 77 "term_pass2.m"
            {
#line 77 "term_pass2.m"
              transform_hlds__term_pass2____Compare____call_weight_info_0_0(&transform_hlds__term_pass2__V_8_8, transform_hlds__term_pass2__V_24_24, transform_hlds__term_pass2__V_6_6);
            }
#line 1710 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__V_8_8 == (MR_Integer) 0);
#line 77 "term_pass2.m"
            transform_hlds__term_pass2__succeeded = !(transform_hlds__term_pass2__succeeded);
#line 77 "term_pass2.m"
            if (transform_hlds__term_pass2__succeeded)
#line 77 "term_pass2.m"
              *transform_hlds__term_pass2__HeadVar__1_1 = transform_hlds__term_pass2__V_8_8;
#line 77 "term_pass2.m"
            else
#line 77 "term_pass2.m"
              {
#line 77 "term_pass2.m"
                {
#line 77 "term_pass2.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[4], transform_hlds__term_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass2__V_23_23)), ((MR_Box) (transform_hlds__term_pass2__V_7_7)));
                }
#line 77 "term_pass2.m"
              }
#line 77 "term_pass2.m"
          }
#line 77 "term_pass2.m"
      }
#line 77 "term_pass2.m"
  }
#line 77 "term_pass2.m"
}

#line 77 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____term_pass2_result_0_0(
#line 77 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 77 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2)
#line 77 "term_pass2.m"
{
#line 77 "term_pass2.m"
  {
#line 77 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 77 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastX_9 = (MR_Integer) transform_hlds__term_pass2__HeadVar__1_1;
#line 77 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastY_10 = (MR_Integer) transform_hlds__term_pass2__HeadVar__2_2;

#line 77 "term_pass2.m"
    transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__CastX_9 == transform_hlds__term_pass2__CastY_10);
#line 77 "term_pass2.m"
    if (transform_hlds__term_pass2__succeeded)
#line 77 "term_pass2.m"
      transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 77 "term_pass2.m"
    else
#line 77 "term_pass2.m"
    if (((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 77 "term_pass2.m"
      {
#line 77 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TypeInfo_11_11;
#line 77 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 77 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_8_8;

#line 77 "term_pass2.m"
        transform_hlds__term_pass2__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 77 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 77 "term_pass2.m"
          {
#line 77 "term_pass2.m"
            transform_hlds__term_pass2__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 1783 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__TypeInfo_11_11 = (MR_Word) &transform_hlds__term_pass2_scalar_common_1[2];
#line 1785 "transform_hlds.term_pass2.c"
            {
#line 1787 "transform_hlds.term_pass2.c"
              transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass2__TypeInfo_11_11, ((MR_Box) (transform_hlds__term_pass2__V_7_7)), ((MR_Box) (transform_hlds__term_pass2__V_8_8)));
            }
#line 77 "term_pass2.m"
          }
#line 77 "term_pass2.m"
      }
#line 77 "term_pass2.m"
    else
#line 77 "term_pass2.m"
      {
#line 77 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TypeInfo_12_12;
#line 77 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 77 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 77 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_5_5;
#line 77 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_6_6;

#line 77 "term_pass2.m"
        transform_hlds__term_pass2__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 77 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 77 "term_pass2.m"
          {
#line 77 "term_pass2.m"
            transform_hlds__term_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 77 "term_pass2.m"
            transform_hlds__term_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 1819 "transform_hlds.term_pass2.c"
            {
#line 1821 "transform_hlds.term_pass2.c"
              transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____call_weight_info_0_0(transform_hlds__term_pass2__V_3_3, transform_hlds__term_pass2__V_5_5);
            }
#line 77 "term_pass2.m"
            if (transform_hlds__term_pass2__succeeded)
#line 77 "term_pass2.m"
              {
#line 1828 "transform_hlds.term_pass2.c"
                transform_hlds__term_pass2__TypeInfo_12_12 = (MR_Word) &transform_hlds__term_pass2_scalar_common_2[4];
#line 1830 "transform_hlds.term_pass2.c"
                {
#line 1832 "transform_hlds.term_pass2.c"
                  transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass2__TypeInfo_12_12, ((MR_Box) (transform_hlds__term_pass2__V_4_4)), ((MR_Box) (transform_hlds__term_pass2__V_6_6)));
                }
#line 77 "term_pass2.m"
              }
#line 77 "term_pass2.m"
          }
#line 77 "term_pass2.m"
      }
#line 77 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 77 "term_pass2.m"
  }
#line 77 "term_pass2.m"
}

#line 64 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____fixpoint_dir_0_0(
#line 64 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 64 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 64 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3)
#line 64 "term_pass2.m"
{
#line 64 "term_pass2.m"
  {
#line 64 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 64 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__term_pass2__HeadVar__2_2;
#line 64 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__term_pass2__HeadVar__3_3;

#line 64 "term_pass2.m"
    {
#line 64 "term_pass2.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_pass2__HeadVar__1_1, transform_hlds__term_pass2__Cast_HeadVar1_4, transform_hlds__term_pass2__Cast_HeadVar2_5);
    }
#line 64 "term_pass2.m"
  }
#line 64 "term_pass2.m"
}

#line 64 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____fixpoint_dir_0_0(
#line 64 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_1,
#line 64 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2)
#line 64 "term_pass2.m"
{
#line 1887 "transform_hlds.term_pass2.c"
  {
#line 1889 "transform_hlds.term_pass2.c"
    MR_bool transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__HeadVar__2_1 == transform_hlds__term_pass2__HeadVar__2_2);

#line 1892 "transform_hlds.term_pass2.c"
    return transform_hlds__term_pass2__succeeded;
#line 1894 "transform_hlds.term_pass2.c"
  }
#line 64 "term_pass2.m"
}

#line 68 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_info_0_0(
#line 68 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 68 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 68 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3)
#line 68 "term_pass2.m"
{
#line 68 "term_pass2.m"
  {
#line 68 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 68 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastX_9 = (MR_Integer) transform_hlds__term_pass2__HeadVar__2_2;
#line 68 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastY_10 = (MR_Integer) transform_hlds__term_pass2__HeadVar__3_3;

#line 68 "term_pass2.m"
    transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__CastX_9 == transform_hlds__term_pass2__CastY_10);
#line 68 "term_pass2.m"
    if (transform_hlds__term_pass2__succeeded)
#line 1923 "transform_hlds.term_pass2.c"
      *transform_hlds__term_pass2__HeadVar__1_1 = (MR_Integer) 0;
#line 68 "term_pass2.m"
    else
#line 68 "term_pass2.m"
      {
#line 68 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 68 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 0)));
#line 68 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 1)));
#line 68 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_8_8;

#line 68 "term_pass2.m"
        {
#line 68 "term_pass2.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[2], &transform_hlds__term_pass2__V_8_8, ((MR_Box) (transform_hlds__term_pass2__V_4_4)), ((MR_Box) (transform_hlds__term_pass2__V_6_6)));
        }
#line 1945 "transform_hlds.term_pass2.c"
        transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__V_8_8 == (MR_Integer) 0);
#line 68 "term_pass2.m"
        transform_hlds__term_pass2__succeeded = !(transform_hlds__term_pass2__succeeded);
#line 68 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 68 "term_pass2.m"
          *transform_hlds__term_pass2__HeadVar__1_1 = transform_hlds__term_pass2__V_8_8;
#line 68 "term_pass2.m"
        else
#line 68 "term_pass2.m"
          {
#line 68 "term_pass2.m"
            {
#line 68 "term_pass2.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[3], transform_hlds__term_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass2__V_5_5)), ((MR_Box) (transform_hlds__term_pass2__V_7_7)));
            }
#line 68 "term_pass2.m"
          }
#line 68 "term_pass2.m"
      }
#line 68 "term_pass2.m"
  }
#line 68 "term_pass2.m"
}

#line 68 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_info_0_0(
#line 68 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 68 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2)
#line 68 "term_pass2.m"
{
#line 68 "term_pass2.m"
  {
#line 68 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 68 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastX_7 = (MR_Integer) transform_hlds__term_pass2__HeadVar__1_1;
#line 68 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastY_8 = (MR_Integer) transform_hlds__term_pass2__HeadVar__2_2;

#line 68 "term_pass2.m"
    transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__CastX_7 == transform_hlds__term_pass2__CastY_8);
#line 68 "term_pass2.m"
    if (transform_hlds__term_pass2__succeeded)
#line 68 "term_pass2.m"
      transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 68 "term_pass2.m"
    else
#line 68 "term_pass2.m"
      {
#line 68 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TypeInfo_10_10;
#line 68 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 68 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 68 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));

#line 2010 "transform_hlds.term_pass2.c"
        {
#line 2012 "transform_hlds.term_pass2.c"
          transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[2], ((MR_Box) (transform_hlds__term_pass2__V_3_3)), ((MR_Box) (transform_hlds__term_pass2__V_5_5)));
        }
#line 68 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 68 "term_pass2.m"
          {
#line 2019 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__TypeInfo_10_10 = (MR_Word) &transform_hlds__term_pass2_scalar_common_2[3];
#line 2021 "transform_hlds.term_pass2.c"
            {
#line 2023 "transform_hlds.term_pass2.c"
              transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass2__TypeInfo_10_10, ((MR_Box) (transform_hlds__term_pass2__V_4_4)), ((MR_Box) (transform_hlds__term_pass2__V_6_6)));
            }
#line 68 "term_pass2.m"
          }
#line 68 "term_pass2.m"
      }
#line 68 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 68 "term_pass2.m"
  }
#line 68 "term_pass2.m"
}

#line 74 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_graph_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[3], transform_hlds__term_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar2_5)));
    }
#line 74 "term_pass2.m"
  }
#line 74 "term_pass2.m"
}

#line 74 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_graph_0_0(
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
      transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[3], ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar2_4)));
    }
#line 74 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 74 "term_pass2.m"
  }
#line 74 "term_pass2.m"
}

#line 75 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0(
#line 75 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 75 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 75 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3)
#line 75 "term_pass2.m"
{
#line 75 "term_pass2.m"
  {
#line 75 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 75 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Cast_HeadVar1_4 = transform_hlds__term_pass2__HeadVar__2_2;
#line 75 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Cast_HeadVar2_5 = transform_hlds__term_pass2__HeadVar__3_3;

#line 75 "term_pass2.m"
    {
#line 75 "term_pass2.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar2_5)));
    }
#line 75 "term_pass2.m"
  }
#line 75 "term_pass2.m"
}

#line 75 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0(
#line 75 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 75 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2)
#line 75 "term_pass2.m"
{
#line 75 "term_pass2.m"
  {
#line 75 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 75 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Cast_HeadVar1_3 = transform_hlds__term_pass2__HeadVar__1_1;
#line 75 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Cast_HeadVar2_4 = transform_hlds__term_pass2__HeadVar__2_2;

#line 75 "term_pass2.m"
    {
#line 75 "term_pass2.m"
      transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar2_4)));
    }
#line 75 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 75 "term_pass2.m"
  }
#line 75 "term_pass2.m"
}

#line 572 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_p_0(
#line 572 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 572 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__LookforPPId_11,
#line 572 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ProcContext_12,
#line 572 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__WeightSoFar0_13,
#line 572 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__VisitedCalls_14,
#line 572 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CallWeights_15,
#line 572 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__Cycles_16)
#line 572 "term_pass2.m"
{
#line 579 "term_pass2.m"
  {
#line 579 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 579 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__CurPPId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 579 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Context_9;
#line 579 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__EdgeWeight_10;
#line 579 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__WeightSoFar1_17;
#line 579 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));

#line 577 "term_pass2.m"
    transform_hlds__term_pass2__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_26_26, (MR_Integer) 0)));
#line 577 "term_pass2.m"
    transform_hlds__term_pass2__EdgeWeight_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_26_26, (MR_Integer) 1)));
#line 580 "term_pass2.m"
    transform_hlds__term_pass2__WeightSoFar1_17 = (transform_hlds__term_pass2__WeightSoFar0_13 + transform_hlds__term_pass2__EdgeWeight_10);
#line 582 "term_pass2.m"
    {
#line 582 "term_pass2.m"
      transform_hlds__term_pass2__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_pass2__CurPPId_8, transform_hlds__term_pass2__LookforPPId_11);
    }
#line 581 "term_pass2.m"
    if (transform_hlds__term_pass2__succeeded)
#line 585 "term_pass2.m"
      {
#line 585 "term_pass2.m"
        transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__WeightSoFar1_17 >= (MR_Integer) 0);
#line 585 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 586 "term_pass2.m"
          {
#line 586 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__FinalVisitedCalls_18;
#line 586 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RevFinalVisitedCalls_19;
#line 586 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__CycleError_20;
#line 586 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__CycleErrorContext_21;
#line 586 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_28_28;

#line 586 "term_pass2.m"
            {
#line 586 "term_pass2.m"
              transform_hlds__term_pass2__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 586 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_28_28, 0) = ((MR_Box) (transform_hlds__term_pass2__CurPPId_8));
#line 586 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_28_28, 1) = ((MR_Box) (transform_hlds__term_pass2__Context_9));
#line 586 "term_pass2.m"
            }
#line 586 "term_pass2.m"
            {
#line 586 "term_pass2.m"
              transform_hlds__term_pass2__FinalVisitedCalls_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 586 "term_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__FinalVisitedCalls_18, 0) = ((MR_Box) (transform_hlds__term_pass2__V_28_28));
#line 586 "term_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__FinalVisitedCalls_18, 1) = ((MR_Box) (transform_hlds__term_pass2__VisitedCalls_14));
#line 586 "term_pass2.m"
            }
#line 587 "term_pass2.m"
            {
#line 587 "term_pass2.m"
              mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[2], transform_hlds__term_pass2__FinalVisitedCalls_18, &transform_hlds__term_pass2__RevFinalVisitedCalls_19);
            }
#line 588 "term_pass2.m"
            {
#line 588 "term_pass2.m"
              transform_hlds__term_pass2__CycleError_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 588 "term_pass2.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__CycleError_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 588 "term_pass2.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__CycleError_20, 1) = ((MR_Box) (transform_hlds__term_pass2__LookforPPId_11));
#line 588 "term_pass2.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__CycleError_20, 2) = ((MR_Box) (transform_hlds__term_pass2__RevFinalVisitedCalls_19));
#line 588 "term_pass2.m"
            }
#line 589 "term_pass2.m"
            {
#line 589 "term_pass2.m"
              transform_hlds__term_pass2__CycleErrorContext_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 589 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CycleErrorContext_21, 0) = ((MR_Box) (transform_hlds__term_pass2__ProcContext_12));
#line 589 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CycleErrorContext_21, 1) = ((MR_Box) (transform_hlds__term_pass2__CycleError_20));
#line 589 "term_pass2.m"
            }
#line 590 "term_pass2.m"
            {
#line 590 "term_pass2.m"
              MR_Word base;
#line 590 "term_pass2.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "term_pass2.m"
              *transform_hlds__term_pass2__Cycles_16 = base;
#line 590 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__CycleErrorContext_21));
#line 590 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 590 "term_pass2.m"
            }
#line 586 "term_pass2.m"
          }
#line 585 "term_pass2.m"
        else
#line 592 "term_pass2.m"
          *transform_hlds__term_pass2__Cycles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 585 "term_pass2.m"
      }
#line 581 "term_pass2.m"
    else
#line 594 "term_pass2.m"
      {
#line 595 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 595 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__VisitedPPIds_22;

#line 595 "term_pass2.m"
        {
#line 595 "term_pass2.m"
          mercury__assoc_list__keys_2_p_0(transform_hlds__term_pass2__TypeCtorInfo_32_32, (MR_Word) &mercury__term__term__type_ctor_info_context_0, transform_hlds__term_pass2__VisitedCalls_14, &transform_hlds__term_pass2__VisitedPPIds_22);
        }
#line 596 "term_pass2.m"
        {
#line 596 "term_pass2.m"
          transform_hlds__term_pass2__succeeded = mercury__list__member_2_p_0(transform_hlds__term_pass2__TypeCtorInfo_32_32, ((MR_Box) (transform_hlds__term_pass2__CurPPId_8)), transform_hlds__term_pass2__VisitedPPIds_22);
        }
#line 594 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 600 "term_pass2.m"
          *transform_hlds__term_pass2__Cycles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 594 "term_pass2.m"
        else
#line 603 "term_pass2.m"
          {
#line 603 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__TypeCtorInfo_34_34;
#line 603 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__NewVisitedCalls_23;
#line 603 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__NeighboursMap_24;
#line 603 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__NeighboursList_25;
#line 603 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_30_30;
#line 604 "term_pass2.m"
            MR_Box transform_hlds__term_pass2__conv0_NeighboursMap_24;

#line 603 "term_pass2.m"
            {
#line 603 "term_pass2.m"
              transform_hlds__term_pass2__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 603 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_30_30, 0) = ((MR_Box) (transform_hlds__term_pass2__CurPPId_8));
#line 603 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_30_30, 1) = ((MR_Box) (transform_hlds__term_pass2__Context_9));
#line 603 "term_pass2.m"
            }
#line 603 "term_pass2.m"
            {
#line 603 "term_pass2.m"
              transform_hlds__term_pass2__NewVisitedCalls_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "term_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__NewVisitedCalls_23, 0) = ((MR_Box) (transform_hlds__term_pass2__V_30_30));
#line 603 "term_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__NewVisitedCalls_23, 1) = ((MR_Box) (transform_hlds__term_pass2__VisitedCalls_14));
#line 603 "term_pass2.m"
            }
#line 2352 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 604 "term_pass2.m"
            {
#line 604 "term_pass2.m"
              mercury__map__lookup_3_p_0(transform_hlds__term_pass2__TypeCtorInfo_34_34, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__CallWeights_15, ((MR_Box) (transform_hlds__term_pass2__CurPPId_8)), &transform_hlds__term_pass2__conv0_NeighboursMap_24);
            }
#line 604 "term_pass2.m"
            transform_hlds__term_pass2__NeighboursMap_24 = ((MR_Word) transform_hlds__term_pass2__conv0_NeighboursMap_24);
#line 605 "term_pass2.m"
            {
#line 605 "term_pass2.m"
              mercury__map__to_assoc_list_2_p_0(transform_hlds__term_pass2__TypeCtorInfo_34_34, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], transform_hlds__term_pass2__NeighboursMap_24, &transform_hlds__term_pass2__NeighboursList_25);
            }
#line 606 "term_pass2.m"
            {
#line 606 "term_pass2.m"
              transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(transform_hlds__term_pass2__NeighboursList_25, transform_hlds__term_pass2__LookforPPId_11, transform_hlds__term_pass2__ProcContext_12, transform_hlds__term_pass2__WeightSoFar1_17, transform_hlds__term_pass2__NewVisitedCalls_23, transform_hlds__term_pass2__CallWeights_15, transform_hlds__term_pass2__Cycles_16);
            }
#line 603 "term_pass2.m"
          }
#line 594 "term_pass2.m"
      }
#line 579 "term_pass2.m"
  }
#line 572 "term_pass2.m"
}

#line 557 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(
#line 557 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 557 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__LookforPPId_2,
#line 557 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__Context_3,
#line 557 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__WeightSoFar_4,
#line 557 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__VisitedCalls_5,
#line 557 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CallWeights_6,
#line 557 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__7_7)
#line 557 "term_pass2.m"
{
#line 562 "term_pass2.m"
  {
#line 562 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 562 "term_pass2.m"
    if ((transform_hlds__term_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 562 "term_pass2.m"
      *transform_hlds__term_pass2__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 562 "term_pass2.m"
    else
#line 565 "term_pass2.m"
      {
#line 565 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Neighbour_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 565 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Neighbours_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 565 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Cycles1_21;
#line 565 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Cycles2_22;

#line 566 "term_pass2.m"
        {
#line 566 "term_pass2.m"
          transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_p_0(transform_hlds__term_pass2__Neighbour_13, transform_hlds__term_pass2__LookforPPId_2, transform_hlds__term_pass2__Context_3, transform_hlds__term_pass2__WeightSoFar_4, transform_hlds__term_pass2__VisitedCalls_5, transform_hlds__term_pass2__CallWeights_6, &transform_hlds__term_pass2__Cycles1_21);
        }
#line 568 "term_pass2.m"
        {
#line 568 "term_pass2.m"
          transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(transform_hlds__term_pass2__Neighbours_14, transform_hlds__term_pass2__LookforPPId_2, transform_hlds__term_pass2__Context_3, transform_hlds__term_pass2__WeightSoFar_4, transform_hlds__term_pass2__VisitedCalls_5, transform_hlds__term_pass2__CallWeights_6, &transform_hlds__term_pass2__Cycles2_22);
        }
#line 570 "term_pass2.m"
        {
#line 570 "term_pass2.m"
          mercury__list__append_3_p_1((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_pass2__Cycles1_21, transform_hlds__term_pass2__Cycles2_22, transform_hlds__term_pass2__HeadVar__7_7);
        }
#line 565 "term_pass2.m"
      }
#line 562 "term_pass2.m"
  }
#line 557 "term_pass2.m"
}

#line 532 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(
#line 532 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
#line 532 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CallWeights_2,
#line 532 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3,
#line 532 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__4_4)
#line 532 "term_pass2.m"
{
#line 536 "term_pass2.m"
  {
#line 536 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 536 "term_pass2.m"
    if ((transform_hlds__term_pass2__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 536 "term_pass2.m"
      *transform_hlds__term_pass2__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 536 "term_pass2.m"
    else
#line 538 "term_pass2.m"
      {
#line 538 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TypeCtorInfo_17_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 538 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 0)));
#line 538 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 1)));
#line 538 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Cycles1_12;
#line 538 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Cycles2_13;
#line 538 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__NeighboursMap_19;
#line 538 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__NeighboursList_20;
#line 538 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__PredId_21;
#line 538 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__PredInfo_23;
#line 538 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Context_24;
#line 549 "term_pass2.m"
        MR_Box transform_hlds__term_pass2__conv0_NeighboursMap_19;
#line 551 "term_pass2.m"
        MR_Integer transform_hlds__term_pass2___ProcId_22;

#line 549 "term_pass2.m"
        {
#line 549 "term_pass2.m"
          mercury__map__lookup_3_p_0(transform_hlds__term_pass2__TypeCtorInfo_17_27, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__CallWeights_2, ((MR_Box) (transform_hlds__term_pass2__PPId_9)), &transform_hlds__term_pass2__conv0_NeighboursMap_19);
        }
#line 549 "term_pass2.m"
        transform_hlds__term_pass2__NeighboursMap_19 = ((MR_Word) transform_hlds__term_pass2__conv0_NeighboursMap_19);
#line 550 "term_pass2.m"
        {
#line 550 "term_pass2.m"
          mercury__map__to_assoc_list_2_p_0(transform_hlds__term_pass2__TypeCtorInfo_17_27, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], transform_hlds__term_pass2__NeighboursMap_19, &transform_hlds__term_pass2__NeighboursList_20);
        }
#line 551 "term_pass2.m"
        transform_hlds__term_pass2__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PPId_9, (MR_Integer) 0)));
#line 551 "term_pass2.m"
        transform_hlds__term_pass2___ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PPId_9, (MR_Integer) 1)));
#line 552 "term_pass2.m"
        {
#line 552 "term_pass2.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__PredId_21, &transform_hlds__term_pass2__PredInfo_23);
        }
#line 553 "term_pass2.m"
        {
#line 553 "term_pass2.m"
          hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_pass2__PredInfo_23, &transform_hlds__term_pass2__Context_24);
        }
#line 554 "term_pass2.m"
        {
#line 554 "term_pass2.m"
          transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(transform_hlds__term_pass2__NeighboursList_20, transform_hlds__term_pass2__PPId_9, transform_hlds__term_pass2__Context_24, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_pass2__CallWeights_2, &transform_hlds__term_pass2__Cycles1_12);
        }
#line 541 "term_pass2.m"
        {
#line 541 "term_pass2.m"
          transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__CallWeights_2, transform_hlds__term_pass2__PPIds_10, &transform_hlds__term_pass2__Cycles2_13);
        }
#line 543 "term_pass2.m"
        {
#line 543 "term_pass2.m"
          *transform_hlds__term_pass2__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_pass2__Cycles1_12, transform_hlds__term_pass2__Cycles2_13);
        }
#line 538 "term_pass2.m"
      }
#line 536 "term_pass2.m"
  }
#line 532 "term_pass2.m"
}

#line 465 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__add_call_arcs_4_p_0(
#line 465 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 465 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 465 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3,
#line 465 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_4)
#line 465 "term_pass2.m"
{
#line 468 "term_pass2.m"
  while (MR_TRUE)
#line 468 "term_pass2.m"
    {
#line 468 "term_pass2.m"
      /* tailcall optimized into a loop */
#line 468 "term_pass2.m"
      {
#line 468 "term_pass2.m"
        MR_bool transform_hlds__term_pass2__succeeded;

#line 468 "term_pass2.m"
        if ((transform_hlds__term_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 468 "term_pass2.m"
          *transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_4 = transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3;
#line 468 "term_pass2.m"
        else
#line 469 "term_pass2.m"
          {
#line 469 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Path_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 469 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Paths_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 469 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__PPId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Path_9, (MR_Integer) 0)));
#line 469 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__CallSite_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Path_9, (MR_Integer) 1)));
#line 469 "term_pass2.m"
            MR_Integer transform_hlds__term_pass2__GammaConst_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Path_9, (MR_Integer) 2)));
#line 469 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__GammaVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Path_9, (MR_Integer) 3)));
#line 469 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__ActiveVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Path_9, (MR_Integer) 4)));
#line 469 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__CallPPId_20;
#line 469 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Context_21;
#line 469 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__InfCalls0_24;
#line 469 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__CallWeights0_25;
#line 469 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46;

#line 475 "term_pass2.m"
            if ((transform_hlds__term_pass2__CallSite_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 476 "term_pass2.m"
              {
#line 477 "term_pass2.m"
                {
#line 477 "term_pass2.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.add_call_arcs\'/4", (MR_String) "no call site in path in stage 2");
#line 477 "term_pass2.m"
                  return;
                }
#line 476 "term_pass2.m"
              }
#line 475 "term_pass2.m"
            else
#line 472 "term_pass2.m"
              {
#line 472 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__CallSite_14, (MR_Integer) 0)));

#line 472 "term_pass2.m"
                transform_hlds__term_pass2__CallPPId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_40_40, (MR_Integer) 0)));
#line 472 "term_pass2.m"
                transform_hlds__term_pass2__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_40_40, (MR_Integer) 1)));
#line 472 "term_pass2.m"
              }
#line 481 "term_pass2.m"
            if ((transform_hlds__term_pass2__GammaVars_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 480 "term_pass2.m"
              {
#line 480 "term_pass2.m"
              }
#line 481 "term_pass2.m"
            else
#line 482 "term_pass2.m"
              {
#line 483 "term_pass2.m"
                {
#line 483 "term_pass2.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.add_call_arcs\'/4", (MR_String) "gamma variables in path in stage 2");
#line 483 "term_pass2.m"
                  return;
                }
#line 482 "term_pass2.m"
              }
#line 485 "term_pass2.m"
            transform_hlds__term_pass2__InfCalls0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3, (MR_Integer) 0)));
#line 485 "term_pass2.m"
            transform_hlds__term_pass2__CallWeights0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3, (MR_Integer) 1)));
#line 486 "term_pass2.m"
            {
#line 486 "term_pass2.m"
              transform_hlds__term_pass2__succeeded = mercury__bag__is_subbag_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__ActiveVars_17, transform_hlds__term_pass2__HeadVar__2_2);
            }
#line 486 "term_pass2.m"
            if (transform_hlds__term_pass2__succeeded)
#line 504 "term_pass2.m"
              {
#line 504 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__CallWeights1_32;
#line 487 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__NeighbourMap0_26;
#line 487 "term_pass2.m"
                MR_Box transform_hlds__term_pass2__conv0_NeighbourMap0_26;

#line 487 "term_pass2.m"
                {
#line 487 "term_pass2.m"
                  transform_hlds__term_pass2__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__CallWeights0_25, ((MR_Box) (transform_hlds__term_pass2__PPId_13)), &transform_hlds__term_pass2__conv0_NeighbourMap0_26);
                }
#line 487 "term_pass2.m"
                if (transform_hlds__term_pass2__succeeded)
#line 487 "term_pass2.m"
                  {
#line 487 "term_pass2.m"
                    transform_hlds__term_pass2__NeighbourMap0_26 = ((MR_Word) transform_hlds__term_pass2__conv0_NeighbourMap0_26);
#line 487 "term_pass2.m"
                    transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 487 "term_pass2.m"
                  }
#line 487 "term_pass2.m"
                if (transform_hlds__term_pass2__succeeded)
#line 499 "term_pass2.m"
                  {
#line 499 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__NeighbourMap_31;
#line 488 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__OldEdgeInfo_27;
#line 488 "term_pass2.m"
                    MR_Box transform_hlds__term_pass2__conv1_OldEdgeInfo_27;

#line 488 "term_pass2.m"
                    {
#line 488 "term_pass2.m"
                      transform_hlds__term_pass2__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], transform_hlds__term_pass2__NeighbourMap0_26, ((MR_Box) (transform_hlds__term_pass2__CallPPId_20)), &transform_hlds__term_pass2__conv1_OldEdgeInfo_27);
                    }
#line 488 "term_pass2.m"
                    if (transform_hlds__term_pass2__succeeded)
#line 488 "term_pass2.m"
                      {
#line 488 "term_pass2.m"
                        transform_hlds__term_pass2__OldEdgeInfo_27 = ((MR_Word) transform_hlds__term_pass2__conv1_OldEdgeInfo_27);
#line 488 "term_pass2.m"
                        transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 488 "term_pass2.m"
                      }
#line 488 "term_pass2.m"
                    if (transform_hlds__term_pass2__succeeded)
#line 489 "term_pass2.m"
                      {
#line 489 "term_pass2.m"
                        MR_Integer transform_hlds__term_pass2__OldWeight_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__OldEdgeInfo_27, (MR_Integer) 1)));
#line 489 "term_pass2.m"
                        MR_Word transform_hlds__term_pass2__EdgeInfo_30;
#line 489 "term_pass2.m"
                        MR_Word transform_hlds__term_pass2___OldContext_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__OldEdgeInfo_27, (MR_Integer) 0)));

#line 490 "term_pass2.m"
                        transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__OldWeight_29 >= transform_hlds__term_pass2__GammaConst_15);
#line 490 "term_pass2.m"
                        if (transform_hlds__term_pass2__succeeded)
#line 491 "term_pass2.m"
                          transform_hlds__term_pass2__EdgeInfo_30 = transform_hlds__term_pass2__OldEdgeInfo_27;
#line 490 "term_pass2.m"
                        else
#line 493 "term_pass2.m"
                          {
#line 493 "term_pass2.m"
                            transform_hlds__term_pass2__EdgeInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 493 "term_pass2.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__EdgeInfo_30, 0) = ((MR_Box) (transform_hlds__term_pass2__Context_21));
#line 493 "term_pass2.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__EdgeInfo_30, 1) = ((MR_Box) (transform_hlds__term_pass2__GammaConst_15));
#line 493 "term_pass2.m"
                          }
#line 495 "term_pass2.m"
                        {
#line 495 "term_pass2.m"
                          mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], ((MR_Box) (transform_hlds__term_pass2__CallPPId_20)), ((MR_Box) (transform_hlds__term_pass2__EdgeInfo_30)), transform_hlds__term_pass2__NeighbourMap0_26, &transform_hlds__term_pass2__NeighbourMap_31);
                        }
#line 489 "term_pass2.m"
                      }
#line 488 "term_pass2.m"
                    else
#line 497 "term_pass2.m"
                      {
#line 497 "term_pass2.m"
                        MR_Word transform_hlds__term_pass2__V_44_44;

#line 497 "term_pass2.m"
                        {
#line 497 "term_pass2.m"
                          transform_hlds__term_pass2__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 497 "term_pass2.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_44_44, 0) = ((MR_Box) (transform_hlds__term_pass2__Context_21));
#line 497 "term_pass2.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_44_44, 1) = ((MR_Box) (transform_hlds__term_pass2__GammaConst_15));
#line 497 "term_pass2.m"
                        }
#line 497 "term_pass2.m"
                        {
#line 497 "term_pass2.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], ((MR_Box) (transform_hlds__term_pass2__CallPPId_20)), ((MR_Box) (transform_hlds__term_pass2__V_44_44)), transform_hlds__term_pass2__NeighbourMap0_26, &transform_hlds__term_pass2__NeighbourMap_31);
                        }
#line 497 "term_pass2.m"
                      }
#line 500 "term_pass2.m"
                    {
#line 500 "term_pass2.m"
                      mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], ((MR_Box) (transform_hlds__term_pass2__PPId_13)), ((MR_Box) (transform_hlds__term_pass2__NeighbourMap_31)), transform_hlds__term_pass2__CallWeights0_25, &transform_hlds__term_pass2__CallWeights1_32);
                    }
#line 499 "term_pass2.m"
                  }
#line 487 "term_pass2.m"
                else
#line 502 "term_pass2.m"
                  {
#line 502 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 502 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__V_45_45;
#line 502 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__NeighbourMap_50;

#line 502 "term_pass2.m"
                    {
#line 502 "term_pass2.m"
                      transform_hlds__term_pass2__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 502 "term_pass2.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_45_45, 0) = ((MR_Box) (transform_hlds__term_pass2__Context_21));
#line 502 "term_pass2.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_45_45, 1) = ((MR_Box) (transform_hlds__term_pass2__GammaConst_15));
#line 502 "term_pass2.m"
                    }
#line 502 "term_pass2.m"
                    {
#line 502 "term_pass2.m"
                      transform_hlds__term_pass2__NeighbourMap_50 = mercury__map__singleton_2_f_0(transform_hlds__term_pass2__TypeCtorInfo_62_62, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], ((MR_Box) (transform_hlds__term_pass2__CallPPId_20)), ((MR_Box) (transform_hlds__term_pass2__V_45_45)));
                    }
#line 503 "term_pass2.m"
                    {
#line 503 "term_pass2.m"
                      mercury__map__det_insert_4_p_0(transform_hlds__term_pass2__TypeCtorInfo_62_62, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], ((MR_Box) (transform_hlds__term_pass2__PPId_13)), ((MR_Box) (transform_hlds__term_pass2__NeighbourMap_50)), transform_hlds__term_pass2__CallWeights0_25, &transform_hlds__term_pass2__CallWeights1_32);
                    }
#line 502 "term_pass2.m"
                  }
#line 505 "term_pass2.m"
                {
#line 505 "term_pass2.m"
                  transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 505 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46, 0) = ((MR_Box) (transform_hlds__term_pass2__InfCalls0_24));
#line 505 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46, 1) = ((MR_Box) (transform_hlds__term_pass2__CallWeights1_32));
#line 505 "term_pass2.m"
                }
#line 504 "term_pass2.m"
              }
#line 486 "term_pass2.m"
            else
#line 507 "term_pass2.m"
              {
#line 507 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__InfCall_33;
#line 507 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__InfCalls1_34;
#line 507 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__V_47_47;

#line 507 "term_pass2.m"
                {
#line 507 "term_pass2.m"
                  transform_hlds__term_pass2__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 507 "term_pass2.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 507 "term_pass2.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__V_47_47, 1) = ((MR_Box) (transform_hlds__term_pass2__PPId_13));
#line 507 "term_pass2.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__V_47_47, 2) = ((MR_Box) (transform_hlds__term_pass2__CallPPId_20));
#line 507 "term_pass2.m"
                }
#line 507 "term_pass2.m"
                {
#line 507 "term_pass2.m"
                  transform_hlds__term_pass2__InfCall_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 507 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__InfCall_33, 0) = ((MR_Box) (transform_hlds__term_pass2__Context_21));
#line 507 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__InfCall_33, 1) = ((MR_Box) (transform_hlds__term_pass2__V_47_47));
#line 507 "term_pass2.m"
                }
#line 508 "term_pass2.m"
                {
#line 508 "term_pass2.m"
                  transform_hlds__term_pass2__InfCalls1_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "term_pass2.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__InfCalls1_34, 0) = ((MR_Box) (transform_hlds__term_pass2__InfCall_33));
#line 508 "term_pass2.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__InfCalls1_34, 1) = ((MR_Box) (transform_hlds__term_pass2__InfCalls0_24));
#line 508 "term_pass2.m"
                }
#line 509 "term_pass2.m"
                {
#line 509 "term_pass2.m"
                  transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 509 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46, 0) = ((MR_Box) (transform_hlds__term_pass2__InfCalls1_34));
#line 509 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46, 1) = ((MR_Box) (transform_hlds__term_pass2__CallWeights0_25));
#line 509 "term_pass2.m"
                }
#line 507 "term_pass2.m"
              }
#line 511 "term_pass2.m"
            /* direct tailcall eliminated */
#line 511 "term_pass2.m"
            {
#line 511 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__HeadVar__1__tmp_copy_1 = transform_hlds__term_pass2__Paths_10;
#line 511 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0__tmp_copy_3 = transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46;

#line 511 "term_pass2.m"
              transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3 = transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0__tmp_copy_3;
#line 511 "term_pass2.m"
              transform_hlds__term_pass2__HeadVar__1_1 = transform_hlds__term_pass2__HeadVar__1__tmp_copy_1;
#line 511 "term_pass2.m"
            }
#line 511 "term_pass2.m"
            continue;
#line 469 "term_pass2.m"
          }
#line 468 "term_pass2.m"
      }
#line 468 "term_pass2.m"
      break;
#line 468 "term_pass2.m"
    }
#line 465 "term_pass2.m"
}

#line 414 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__update_rec_input_suppliers_7_p_0(
#line 414 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 414 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ActiveVars_2,
#line 414 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__FixDir_3,
#line 414 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__4_4,
#line 414 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__5_5,
#line 414 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecBag_0_6,
#line 414 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_RecBag_7)
#line 414 "term_pass2.m"
{
#line 418 "term_pass2.m"
  {
#line 418 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 418 "term_pass2.m"
    if ((transform_hlds__term_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 418 "term_pass2.m"
      if ((transform_hlds__term_pass2__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 418 "term_pass2.m"
        {
#line 418 "term_pass2.m"
          *transform_hlds__term_pass2__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 418 "term_pass2.m"
          *transform_hlds__term_pass2__STATE_VARIABLE_RecBag_7 = transform_hlds__term_pass2__STATE_VARIABLE_RecBag_0_6;
#line 418 "term_pass2.m"
        }
#line 418 "term_pass2.m"
      else
#line 421 "term_pass2.m"
        {
#line 421 "term_pass2.m"
          *transform_hlds__term_pass2__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 422 "term_pass2.m"
          {
#line 422 "term_pass2.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.update_rec_input_suppliers\'/7", (MR_String) "unmatched variables");
#line 422 "term_pass2.m"
            return;
          }
#line 421 "term_pass2.m"
        }
#line 418 "term_pass2.m"
    else
#line 418 "term_pass2.m"
      {
#line 418 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));

#line 418 "term_pass2.m"
        if ((transform_hlds__term_pass2__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 419 "term_pass2.m"
          {
#line 419 "term_pass2.m"
            *transform_hlds__term_pass2__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 420 "term_pass2.m"
            {
#line 420 "term_pass2.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.update_rec_input_suppliers\'/7", (MR_String) "unmatched variables");
#line 420 "term_pass2.m"
              return;
            }
#line 419 "term_pass2.m"
          }
#line 418 "term_pass2.m"
        else
#line 425 "term_pass2.m"
          {
#line 425 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RecInputSupplier0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__4_4, (MR_Integer) 0)));
#line 425 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RecInputSuppliers0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__4_4, (MR_Integer) 1)));
#line 425 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RecInputSupplier_37;
#line 425 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RecInputSuppliers_38;
#line 425 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecBag_42_42;

#line 429 "term_pass2.m"
#line 429 "term_pass2.m"
            switch (transform_hlds__term_pass2__RecInputSupplier0_35) {
#line 429 "term_pass2.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 429 "term_pass2.m"
              case (MR_Integer) 0:
#line 430 "term_pass2.m"
                transform_hlds__term_pass2__STATE_VARIABLE_RecBag_42_42 = transform_hlds__term_pass2__STATE_VARIABLE_RecBag_0_6;
#line 429 "term_pass2.m"
                break;
#line 429 "term_pass2.m"
              case (MR_Integer) 1:
#line 427 "term_pass2.m"
                {
#line 428 "term_pass2.m"
                  {
#line 428 "term_pass2.m"
                    mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], ((MR_Box) (transform_hlds__term_pass2__V_48_48)), transform_hlds__term_pass2__STATE_VARIABLE_RecBag_0_6, &transform_hlds__term_pass2__STATE_VARIABLE_RecBag_42_42);
                  }
#line 427 "term_pass2.m"
                }
#line 429 "term_pass2.m"
                break;
#line 429 "term_pass2.m"
            }
#line 441 "term_pass2.m"
#line 441 "term_pass2.m"
            switch (transform_hlds__term_pass2__FixDir_3) {
#line 441 "term_pass2.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 441 "term_pass2.m"
              case (MR_Integer) 1:
#line 433 "term_pass2.m"
                {
#line 436 "term_pass2.m"
                  {
#line 436 "term_pass2.m"
                    transform_hlds__term_pass2__succeeded = mercury__bag__contains_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__ActiveVars_2, ((MR_Box) (transform_hlds__term_pass2__V_48_48)));
                  }
#line 433 "term_pass2.m"
                  if (transform_hlds__term_pass2__succeeded)
#line 437 "term_pass2.m"
                    transform_hlds__term_pass2__RecInputSupplier_37 = transform_hlds__term_pass2__RecInputSupplier0_35;
#line 433 "term_pass2.m"
                  else
#line 439 "term_pass2.m"
                    transform_hlds__term_pass2__RecInputSupplier_37 = (MR_Integer) 0;
#line 433 "term_pass2.m"
                }
#line 441 "term_pass2.m"
                break;
#line 441 "term_pass2.m"
              case (MR_Integer) 0:
#line 442 "term_pass2.m"
                {
#line 445 "term_pass2.m"
                  {
#line 445 "term_pass2.m"
                    transform_hlds__term_pass2__succeeded = mercury__bag__contains_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__ActiveVars_2, ((MR_Box) (transform_hlds__term_pass2__V_48_48)));
                  }
#line 442 "term_pass2.m"
                  if (transform_hlds__term_pass2__succeeded)
#line 446 "term_pass2.m"
                    transform_hlds__term_pass2__RecInputSupplier_37 = (MR_Integer) 1;
#line 442 "term_pass2.m"
                  else
#line 448 "term_pass2.m"
                    transform_hlds__term_pass2__RecInputSupplier_37 = transform_hlds__term_pass2__RecInputSupplier0_35;
#line 442 "term_pass2.m"
                }
#line 441 "term_pass2.m"
                break;
#line 441 "term_pass2.m"
            }
#line 451 "term_pass2.m"
            {
#line 451 "term_pass2.m"
              transform_hlds__term_pass2__update_rec_input_suppliers_7_p_0(transform_hlds__term_pass2__V_47_47, transform_hlds__term_pass2__ActiveVars_2, transform_hlds__term_pass2__FixDir_3, transform_hlds__term_pass2__RecInputSuppliers0_36, &transform_hlds__term_pass2__RecInputSuppliers_38, transform_hlds__term_pass2__STATE_VARIABLE_RecBag_42_42, transform_hlds__term_pass2__STATE_VARIABLE_RecBag_7);
            }
#line 425 "term_pass2.m"
            {
#line 425 "term_pass2.m"
              MR_Word base;
#line 425 "term_pass2.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "term_pass2.m"
              *transform_hlds__term_pass2__HeadVar__5_5 = base;
#line 425 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__RecInputSupplier_37));
#line 425 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass2__RecInputSuppliers_38));
#line 425 "term_pass2.m"
            }
#line 425 "term_pass2.m"
          }
#line 418 "term_pass2.m"
      }
#line 418 "term_pass2.m"
  }
#line 414 "term_pass2.m"
}

#line 390 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_2(
#line 390 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg)
#line 390 "term_pass2.m"
{
#line 390 "term_pass2.m"
  {
#line 390 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 390 "term_pass2.m"
    MR_Box transform_hlds__term_pass2__closure = transform_hlds__term_pass2__closure_arg;

#line 390 "term_pass2.m"
    {
#line 390 "term_pass2.m"
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__390__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__closure, (MR_Integer) 4))));
    }
#line 390 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 390 "term_pass2.m"
  }
#line 390 "term_pass2.m"
}

#line 407 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_1(
#line 407 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg)
#line 407 "term_pass2.m"
{
#line 407 "term_pass2.m"
  {
#line 407 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 407 "term_pass2.m"
    MR_Box transform_hlds__term_pass2__closure = transform_hlds__term_pass2__closure_arg;

#line 407 "term_pass2.m"
    {
#line 407 "term_pass2.m"
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__407__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__closure, (MR_Integer) 4))));
    }
#line 407 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 407 "term_pass2.m"
  }
#line 407 "term_pass2.m"
}

#line 364 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0(
#line 364 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
#line 364 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__PassInfo_2,
#line 364 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__FixDir_3,
#line 364 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__4_4,
#line 364 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__RecSupplierMap_5,
#line 364 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__6_6,
#line 364 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__7_7,
#line 364 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__8_8)
#line 364 "term_pass2.m"
{
#line 368 "term_pass2.m"
  while (MR_TRUE)
#line 368 "term_pass2.m"
    {
#line 368 "term_pass2.m"
      /* tailcall optimized into a loop */
#line 368 "term_pass2.m"
      {
#line 368 "term_pass2.m"
        MR_bool transform_hlds__term_pass2__succeeded;

#line 368 "term_pass2.m"
        if ((transform_hlds__term_pass2__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 369 "term_pass2.m"
          {
#line 369 "term_pass2.m"
            MR_Word base;
#line 369 "term_pass2.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 369 "term_pass2.m"
            *transform_hlds__term_pass2__HeadVar__8_8 = base;
#line 369 "term_pass2.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass2__HeadVar__7_7));
#line 369 "term_pass2.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass2__HeadVar__6_6));
#line 369 "term_pass2.m"
          }
#line 368 "term_pass2.m"
        else
#line 371 "term_pass2.m"
          {
#line 371 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__TypeCtorInfo_62_62;
#line 371 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__TypeInfo_63_63;
#line 371 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__TypeCtorInfo_64_64;
#line 371 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__PPId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__4_4, (MR_Integer) 0)));
#line 371 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__PPIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__4_4, (MR_Integer) 1)));
#line 371 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__PredInfo_24;
#line 371 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__ProcInfo_25;
#line 371 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Context_26;
#line 371 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Goal0_27;
#line 371 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Goal_28;
#line 371 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__VarTypes_29;
#line 371 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__EmptyMap_30;
#line 371 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__FunctorInfo_31;
#line 371 "term_pass2.m"
            MR_Integer transform_hlds__term_pass2__MaxErrors_32;
#line 371 "term_pass2.m"
            MR_Integer transform_hlds__term_pass2__MaxPaths_33;
#line 371 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Params_34;
#line 371 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__PathSet0_35;
#line 371 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Info0_36;
#line 371 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Info_37;

#line 372 "term_pass2.m"
            {
#line 372 "term_pass2.m"
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__PPId_18, &transform_hlds__term_pass2__PredInfo_24, &transform_hlds__term_pass2__ProcInfo_25);
            }
#line 373 "term_pass2.m"
            {
#line 373 "term_pass2.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_pass2__PredInfo_24, &transform_hlds__term_pass2__Context_26);
            }
#line 374 "term_pass2.m"
            {
#line 374 "term_pass2.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__term_pass2__ProcInfo_25, &transform_hlds__term_pass2__Goal0_27);
            }
#line 379 "term_pass2.m"
            {
#line 379 "term_pass2.m"
              transform_hlds__term_pass2__Goal_28 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(transform_hlds__term_pass2__Goal0_27);
            }
#line 380 "term_pass2.m"
            {
#line 380 "term_pass2.m"
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__term_pass2__ProcInfo_25, &transform_hlds__term_pass2__VarTypes_29);
            }
#line 3261 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 3263 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__TypeInfo_63_63 = (MR_Word) &transform_hlds__term_pass2_scalar_common_1[0];
#line 381 "term_pass2.m"
            {
#line 381 "term_pass2.m"
              mercury__map__init_1_p_0(transform_hlds__term_pass2__TypeCtorInfo_62_62, transform_hlds__term_pass2__TypeInfo_63_63, &transform_hlds__term_pass2__EmptyMap_30);
            }
#line 382 "term_pass2.m"
            transform_hlds__term_pass2__FunctorInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_2, (MR_Integer) 0)));
#line 382 "term_pass2.m"
            transform_hlds__term_pass2__MaxErrors_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_2, (MR_Integer) 1)));
#line 382 "term_pass2.m"
            transform_hlds__term_pass2__MaxPaths_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_2, (MR_Integer) 2)));
#line 383 "term_pass2.m"
            {
#line 383 "term_pass2.m"
              transform_hlds__term_traversal__init_term_traversal_params_9_p_0(transform_hlds__term_pass2__FunctorInfo_31, transform_hlds__term_pass2__PPId_18, transform_hlds__term_pass2__Context_26, transform_hlds__term_pass2__VarTypes_29, transform_hlds__term_pass2__EmptyMap_30, transform_hlds__term_pass2__RecSupplierMap_5, transform_hlds__term_pass2__MaxErrors_32, transform_hlds__term_pass2__MaxPaths_33, &transform_hlds__term_pass2__Params_34);
            }
#line 3281 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__TypeCtorInfo_64_64 = (MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0;
#line 385 "term_pass2.m"
            {
#line 385 "term_pass2.m"
              mercury__set__init_1_p_0(transform_hlds__term_pass2__TypeCtorInfo_64_64, &transform_hlds__term_pass2__PathSet0_35);
            }
#line 386 "term_pass2.m"
            {
#line 386 "term_pass2.m"
              transform_hlds__term_pass2__Info0_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 386 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Info0_36, 0) = ((MR_Box) (transform_hlds__term_pass2__PathSet0_35));
#line 386 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Info0_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 386 "term_pass2.m"
            }
#line 387 "term_pass2.m"
            {
#line 387 "term_pass2.m"
              transform_hlds__term_traversal__term_traverse_goal_5_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__Params_34, transform_hlds__term_pass2__Goal_28, transform_hlds__term_pass2__Info0_36, &transform_hlds__term_pass2__Info_37);
            }
#line 405 "term_pass2.m"
            if (((MR_tag((MR_Word) transform_hlds__term_pass2__Info_37)) == (MR_mktag((MR_Integer) 1))))
#line 406 "term_pass2.m"
              {
#line 406 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__Errors_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Info_37, (MR_Integer) 0)));
#line 406 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__V_51_51;
#line 406 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__CanLoop_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Info_37, (MR_Integer) 1)));

#line 407 "term_pass2.m"
                {
#line 407 "term_pass2.m"
                  transform_hlds__term_pass2__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 407 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_51_51, 0) = ((MR_Box) (&transform_hlds__term_pass2_scalar_common_5[2]));
#line 407 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_51_51, 1) = ((MR_Box) (transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_1));
#line 407 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 407 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_51_51, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 407 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_51_51, 4) = ((MR_Box) (transform_hlds__term_pass2__CanLoop_61));
#line 407 "term_pass2.m"
                }
#line 407 "term_pass2.m"
                {
#line 407 "term_pass2.m"
                  mercury__require__expect_4_p_0(transform_hlds__term_pass2__V_51_51, (MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.prove_termination_in_scc_pass\'/8", (MR_String) "can_loop detected in pass2 but not pass1");
                }
#line 409 "term_pass2.m"
                {
#line 409 "term_pass2.m"
                  MR_Word base;
#line 409 "term_pass2.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 409 "term_pass2.m"
                  *transform_hlds__term_pass2__HeadVar__8_8 = base;
#line 409 "term_pass2.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__Errors_49));
#line 409 "term_pass2.m"
                }
#line 406 "term_pass2.m"
              }
#line 405 "term_pass2.m"
            else
#line 389 "term_pass2.m"
              {
#line 389 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__Paths_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Info_37, (MR_Integer) 0)));
#line 389 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__CanLoop_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Info_37, (MR_Integer) 1)));
#line 389 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__PathList_40;
#line 389 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__ActiveVars_41;
#line 389 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__RecSuppliers0_42;
#line 389 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__Args_43;
#line 389 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__EmptyBag_44;
#line 389 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__RecSuppliers_45;
#line 389 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__RecSuppliers0Bag_46;
#line 389 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__NewRecSupplierMap1_47;
#line 389 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__CallInfo1_48;
#line 389 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__V_56_56;
#line 394 "term_pass2.m"
                MR_Box transform_hlds__term_pass2__conv0_RecSuppliers0_42;

#line 390 "term_pass2.m"
                {
#line 390 "term_pass2.m"
                  transform_hlds__term_pass2__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 390 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_56_56, 0) = ((MR_Box) (&transform_hlds__term_pass2_scalar_common_5[2]));
#line 390 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_56_56, 1) = ((MR_Box) (transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_2));
#line 390 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 390 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_56_56, 3) = ((MR_Box) (transform_hlds__term_pass2__CanLoop_39));
#line 390 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_56_56, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 390 "term_pass2.m"
                }
#line 390 "term_pass2.m"
                {
#line 390 "term_pass2.m"
                  mercury__require__expect_4_p_0(transform_hlds__term_pass2__V_56_56, (MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.prove_termination_in_scc_pass\'/8", (MR_String) "can_loop detected in pass2 but not pass1");
                }
#line 392 "term_pass2.m"
                {
#line 392 "term_pass2.m"
                  mercury__set__to_sorted_list_2_p_0(transform_hlds__term_pass2__TypeCtorInfo_64_64, transform_hlds__term_pass2__Paths_38, &transform_hlds__term_pass2__PathList_40);
                }
#line 393 "term_pass2.m"
                {
#line 393 "term_pass2.m"
                  transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(transform_hlds__term_pass2__PathList_40, &transform_hlds__term_pass2__ActiveVars_41);
                }
#line 394 "term_pass2.m"
                {
#line 394 "term_pass2.m"
                  mercury__map__lookup_3_p_0(transform_hlds__term_pass2__TypeCtorInfo_62_62, transform_hlds__term_pass2__TypeInfo_63_63, transform_hlds__term_pass2__RecSupplierMap_5, ((MR_Box) (transform_hlds__term_pass2__PPId_18)), &transform_hlds__term_pass2__conv0_RecSuppliers0_42);
                }
#line 394 "term_pass2.m"
                transform_hlds__term_pass2__RecSuppliers0_42 = ((MR_Word) transform_hlds__term_pass2__conv0_RecSuppliers0_42);
#line 395 "term_pass2.m"
                {
#line 395 "term_pass2.m"
                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass2__ProcInfo_25, &transform_hlds__term_pass2__Args_43);
                }
#line 396 "term_pass2.m"
                {
#line 396 "term_pass2.m"
                  mercury__bag__init_1_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], &transform_hlds__term_pass2__EmptyBag_44);
                }
#line 397 "term_pass2.m"
                {
#line 397 "term_pass2.m"
                  transform_hlds__term_pass2__update_rec_input_suppliers_7_p_0(transform_hlds__term_pass2__Args_43, transform_hlds__term_pass2__ActiveVars_41, transform_hlds__term_pass2__FixDir_3, transform_hlds__term_pass2__RecSuppliers0_42, &transform_hlds__term_pass2__RecSuppliers_45, transform_hlds__term_pass2__EmptyBag_44, &transform_hlds__term_pass2__RecSuppliers0Bag_46);
                }
#line 400 "term_pass2.m"
                {
#line 400 "term_pass2.m"
                  mercury__map__det_insert_4_p_0(transform_hlds__term_pass2__TypeCtorInfo_62_62, transform_hlds__term_pass2__TypeInfo_63_63, ((MR_Box) (transform_hlds__term_pass2__PPId_18)), ((MR_Box) (transform_hlds__term_pass2__RecSuppliers_45)), transform_hlds__term_pass2__HeadVar__6_6, &transform_hlds__term_pass2__NewRecSupplierMap1_47);
                }
#line 402 "term_pass2.m"
                {
#line 402 "term_pass2.m"
                  transform_hlds__term_pass2__add_call_arcs_4_p_0(transform_hlds__term_pass2__PathList_40, transform_hlds__term_pass2__RecSuppliers0Bag_46, transform_hlds__term_pass2__HeadVar__7_7, &transform_hlds__term_pass2__CallInfo1_48);
                }
#line 403 "term_pass2.m"
                /* direct tailcall eliminated */
#line 403 "term_pass2.m"
                {
#line 403 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__HeadVar__4__tmp_copy_4 = transform_hlds__term_pass2__PPIds_19;
#line 403 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__HeadVar__6__tmp_copy_6 = transform_hlds__term_pass2__NewRecSupplierMap1_47;
#line 403 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__HeadVar__7__tmp_copy_7 = transform_hlds__term_pass2__CallInfo1_48;

#line 403 "term_pass2.m"
                  transform_hlds__term_pass2__HeadVar__7_7 = transform_hlds__term_pass2__HeadVar__7__tmp_copy_7;
#line 403 "term_pass2.m"
                  transform_hlds__term_pass2__HeadVar__6_6 = transform_hlds__term_pass2__HeadVar__6__tmp_copy_6;
#line 403 "term_pass2.m"
                  transform_hlds__term_pass2__HeadVar__4_4 = transform_hlds__term_pass2__HeadVar__4__tmp_copy_4;
#line 403 "term_pass2.m"
                }
#line 403 "term_pass2.m"
                continue;
#line 389 "term_pass2.m"
              }
#line 371 "term_pass2.m"
          }
#line 368 "term_pass2.m"
      }
#line 368 "term_pass2.m"
      break;
#line 368 "term_pass2.m"
    }
#line 364 "term_pass2.m"
}

#line 333 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_6_p_0(
#line 333 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_7,
#line 333 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__PassInfo_8,
#line 333 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__FixDir_9,
#line 333 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__SCC_10,
#line 333 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__RecSupplierMap0_11,
#line 333 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__Result_12)
#line 333 "term_pass2.m"
{
#line 338 "term_pass2.m"
  while (MR_TRUE)
#line 338 "term_pass2.m"
    {
#line 338 "term_pass2.m"
      /* tailcall optimized into a loop */
#line 338 "term_pass2.m"
      {
#line 338 "term_pass2.m"
        MR_bool transform_hlds__term_pass2__succeeded;
#line 338 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 338 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__NewRecSupplierMap0_13;
#line 338 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__CallWeightGraph0_14;
#line 338 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__CallInfo0_15;
#line 338 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Result1_16;

#line 339 "term_pass2.m"
        {
#line 339 "term_pass2.m"
          mercury__map__init_1_p_0(transform_hlds__term_pass2__TypeCtorInfo_21_21, (MR_Word) &transform_hlds__term_pass2_scalar_common_1[0], &transform_hlds__term_pass2__NewRecSupplierMap0_13);
        }
#line 340 "term_pass2.m"
        {
#line 340 "term_pass2.m"
          mercury__map__init_1_p_0(transform_hlds__term_pass2__TypeCtorInfo_21_21, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], &transform_hlds__term_pass2__CallWeightGraph0_14);
        }
#line 341 "term_pass2.m"
        {
#line 341 "term_pass2.m"
          transform_hlds__term_pass2__CallInfo0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 341 "term_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo0_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 341 "term_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo0_15, 1) = ((MR_Box) (transform_hlds__term_pass2__CallWeightGraph0_14));
#line 341 "term_pass2.m"
        }
#line 342 "term_pass2.m"
        {
#line 342 "term_pass2.m"
          transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0(transform_hlds__term_pass2__ModuleInfo_7, transform_hlds__term_pass2__PassInfo_8, transform_hlds__term_pass2__FixDir_9, transform_hlds__term_pass2__SCC_10, transform_hlds__term_pass2__RecSupplierMap0_11, transform_hlds__term_pass2__NewRecSupplierMap0_13, transform_hlds__term_pass2__CallInfo0_15, &transform_hlds__term_pass2__Result1_16);
        }
#line 354 "term_pass2.m"
        if (((MR_tag((MR_Word) transform_hlds__term_pass2__Result1_16)) == (MR_mktag((MR_Integer) 1))))
#line 356 "term_pass2.m"
          *transform_hlds__term_pass2__Result_12 = transform_hlds__term_pass2__Result1_16;
#line 354 "term_pass2.m"
        else
#line 345 "term_pass2.m"
          {
#line 345 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RecSupplierMap1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result1_16, (MR_Integer) 1)));
#line 345 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result1_16, (MR_Integer) 0)));

#line 346 "term_pass2.m"
            {
#line 346 "term_pass2.m"
              transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[4], ((MR_Box) (transform_hlds__term_pass2__RecSupplierMap1_18)), ((MR_Box) (transform_hlds__term_pass2__RecSupplierMap0_11)));
            }
#line 346 "term_pass2.m"
            if (transform_hlds__term_pass2__succeeded)
#line 349 "term_pass2.m"
              *transform_hlds__term_pass2__Result_12 = transform_hlds__term_pass2__Result1_16;
#line 346 "term_pass2.m"
            else
#line 351 "term_pass2.m"
              {
#line 351 "term_pass2.m"
                /* direct tailcall eliminated */
#line 351 "term_pass2.m"
                {
#line 351 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__RecSupplierMap0__tmp_copy_11 = transform_hlds__term_pass2__RecSupplierMap1_18;

#line 351 "term_pass2.m"
                  transform_hlds__term_pass2__RecSupplierMap0_11 = transform_hlds__term_pass2__RecSupplierMap0__tmp_copy_11;
#line 351 "term_pass2.m"
                }
#line 351 "term_pass2.m"
                continue;
#line 351 "term_pass2.m"
              }
#line 345 "term_pass2.m"
          }
#line 338 "term_pass2.m"
      }
#line 338 "term_pass2.m"
      break;
#line 338 "term_pass2.m"
    }
#line 333 "term_pass2.m"
}

#line 282 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0_1(
#line 282 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg,
#line 282 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 282 "term_pass2.m"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_2)
#line 282 "term_pass2.m"
{
#line 282 "term_pass2.m"
  {
#line 282 "term_pass2.m"
    MR_Box transform_hlds__term_pass2__closure = transform_hlds__term_pass2__closure_arg;
#line 282 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__2_23;

#line 282 "term_pass2.m"
    {
#line 282 "term_pass2.m"
      transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_single_arg_others__282__1_2_p_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), &transform_hlds__term_pass2__conv0_HeadVar__2_23);
    }
#line 282 "term_pass2.m"
    *transform_hlds__term_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__2_23));
#line 282 "term_pass2.m"
  }
#line 282 "term_pass2.m"
}

#line 274 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0(
#line 274 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
#line 274 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 274 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0_3,
#line 274 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_4)
#line 274 "term_pass2.m"
{
#line 277 "term_pass2.m"
  while (MR_TRUE)
#line 277 "term_pass2.m"
    {
#line 277 "term_pass2.m"
      /* tailcall optimized into a loop */
#line 277 "term_pass2.m"
      {
#line 277 "term_pass2.m"
        MR_bool transform_hlds__term_pass2__succeeded;

#line 277 "term_pass2.m"
        if ((transform_hlds__term_pass2__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 277 "term_pass2.m"
          *transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_4 = transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0_3;
#line 277 "term_pass2.m"
        else
#line 279 "term_pass2.m"
          {
#line 279 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__PPId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 279 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__PPIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 279 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__ProcInfo_14;
#line 279 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__HeadVars_15;
#line 279 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__BoolList_16;
#line 279 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_20_20;
#line 280 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_13_13;

#line 280 "term_pass2.m"
            {
#line 280 "term_pass2.m"
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__PPId_10, &transform_hlds__term_pass2__V_13_13, &transform_hlds__term_pass2__ProcInfo_14);
            }
#line 281 "term_pass2.m"
            {
#line 281 "term_pass2.m"
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass2__ProcInfo_14, &transform_hlds__term_pass2__HeadVars_15);
            }
#line 282 "term_pass2.m"
            {
#line 282 "term_pass2.m"
              mercury__list__map_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[6], transform_hlds__term_pass2__HeadVars_15, &transform_hlds__term_pass2__BoolList_16);
            }
#line 283 "term_pass2.m"
            {
#line 283 "term_pass2.m"
              mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_1[0], ((MR_Box) (transform_hlds__term_pass2__PPId_10)), ((MR_Box) (transform_hlds__term_pass2__BoolList_16)), transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0_3, &transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_20_20);
            }
#line 284 "term_pass2.m"
            /* direct tailcall eliminated */
#line 284 "term_pass2.m"
            {
#line 284 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__HeadVar__2__tmp_copy_2 = transform_hlds__term_pass2__PPIds_11;
#line 284 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0__tmp_copy_3 = transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_20_20;

#line 284 "term_pass2.m"
              transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0_3 = transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0__tmp_copy_3;
#line 284 "term_pass2.m"
              transform_hlds__term_pass2__HeadVar__2_2 = transform_hlds__term_pass2__HeadVar__2__tmp_copy_2;
#line 284 "term_pass2.m"
            }
#line 284 "term_pass2.m"
            continue;
#line 279 "term_pass2.m"
          }
#line 277 "term_pass2.m"
      }
#line 277 "term_pass2.m"
      break;
#line 277 "term_pass2.m"
    }
#line 274 "term_pass2.m"
}

#line 251 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0_1(
#line 251 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg,
#line 251 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 251 "term_pass2.m"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_2)
#line 251 "term_pass2.m"
{
#line 251 "term_pass2.m"
  {
#line 251 "term_pass2.m"
    MR_Box transform_hlds__term_pass2__closure = transform_hlds__term_pass2__closure_arg;
#line 251 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__2_20;

#line 251 "term_pass2.m"
    {
#line 251 "term_pass2.m"
      transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_add_single_arg__251__1_2_p_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), &transform_hlds__term_pass2__conv0_HeadVar__2_20);
    }
#line 251 "term_pass2.m"
    *transform_hlds__term_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__2_20));
#line 251 "term_pass2.m"
  }
#line 251 "term_pass2.m"
}

#line 242 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0(
#line 242 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_5,
#line 242 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 242 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__ArgNum_8,
#line 242 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__BoolList_9)
#line 242 "term_pass2.m"
{
#line 246 "term_pass2.m"
  {
#line 246 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 246 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Mode_6;
#line 246 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Modes_7;

#line 245 "term_pass2.m"
    if (transform_hlds__term_pass2__succeeded)
#line 245 "term_pass2.m"
      {
#line 245 "term_pass2.m"
        transform_hlds__term_pass2__Mode_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 245 "term_pass2.m"
        transform_hlds__term_pass2__Modes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 248 "term_pass2.m"
        {
#line 248 "term_pass2.m"
          transform_hlds__term_pass2__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__term_pass2__ModuleInfo_5, transform_hlds__term_pass2__Mode_6);
        }
#line 248 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 249 "term_pass2.m"
          transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__ArgNum_8 == (MR_Integer) 1);
#line 247 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 251 "term_pass2.m"
          {
#line 251 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__BoolListTail_10;

#line 251 "term_pass2.m"
            {
#line 251 "term_pass2.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[5], transform_hlds__term_pass2__Modes_7, &transform_hlds__term_pass2__BoolListTail_10);
            }
#line 252 "term_pass2.m"
            {
#line 252 "term_pass2.m"
              MR_Word base;
#line 252 "term_pass2.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "term_pass2.m"
              *transform_hlds__term_pass2__BoolList_9 = base;
#line 252 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 252 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass2__BoolListTail_10));
#line 252 "term_pass2.m"
            }
#line 251 "term_pass2.m"
            transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 251 "term_pass2.m"
          }
#line 247 "term_pass2.m"
        else
#line 253 "term_pass2.m"
          {
#line 253 "term_pass2.m"
            MR_Integer transform_hlds__term_pass2__NextArgNum_11;
#line 253 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_16_16;
#line 253 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__BoolListTail_17;

#line 255 "term_pass2.m"
            {
#line 255 "term_pass2.m"
              transform_hlds__term_pass2__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(transform_hlds__term_pass2__ModuleInfo_5, transform_hlds__term_pass2__Mode_6);
            }
#line 254 "term_pass2.m"
            if (transform_hlds__term_pass2__succeeded)
#line 257 "term_pass2.m"
              {
#line 257 "term_pass2.m"
                transform_hlds__term_pass2__NextArgNum_11 = transform_hlds__term_pass2__ArgNum_8;
#line 257 "term_pass2.m"
                transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 257 "term_pass2.m"
              }
#line 254 "term_pass2.m"
            else
#line 258 "term_pass2.m"
              {
#line 258 "term_pass2.m"
                MR_Integer transform_hlds__term_pass2__V_14_14;
#line 258 "term_pass2.m"
                MR_Integer transform_hlds__term_pass2__V_15_15;

#line 259 "term_pass2.m"
                {
#line 259 "term_pass2.m"
                  transform_hlds__term_pass2__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__term_pass2__ModuleInfo_5, transform_hlds__term_pass2__Mode_6);
                }
#line 258 "term_pass2.m"
                if (transform_hlds__term_pass2__succeeded)
#line 258 "term_pass2.m"
                  {
#line 260 "term_pass2.m"
                    transform_hlds__term_pass2__V_14_14 = (MR_Integer) 1;
#line 260 "term_pass2.m"
                    transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__ArgNum_8 > transform_hlds__term_pass2__V_14_14);
#line 258 "term_pass2.m"
                    if (transform_hlds__term_pass2__succeeded)
#line 258 "term_pass2.m"
                      {
#line 262 "term_pass2.m"
                        transform_hlds__term_pass2__V_15_15 = (MR_Integer) 1;
#line 262 "term_pass2.m"
                        transform_hlds__term_pass2__NextArgNum_11 = (transform_hlds__term_pass2__ArgNum_8 - transform_hlds__term_pass2__V_15_15);
#line 262 "term_pass2.m"
                        transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 258 "term_pass2.m"
                      }
#line 258 "term_pass2.m"
                  }
#line 258 "term_pass2.m"
              }
#line 253 "term_pass2.m"
            if (transform_hlds__term_pass2__succeeded)
#line 253 "term_pass2.m"
              {
#line 267 "term_pass2.m"
                {
#line 267 "term_pass2.m"
                  transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0(transform_hlds__term_pass2__ModuleInfo_5, transform_hlds__term_pass2__Modes_7, transform_hlds__term_pass2__NextArgNum_11, &transform_hlds__term_pass2__BoolListTail_17);
                }
#line 253 "term_pass2.m"
                if (transform_hlds__term_pass2__succeeded)
#line 253 "term_pass2.m"
                  {
#line 269 "term_pass2.m"
                    transform_hlds__term_pass2__V_16_16 = (MR_Integer) 0;
#line 269 "term_pass2.m"
                    {
#line 269 "term_pass2.m"
                      MR_Word base;
#line 269 "term_pass2.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "term_pass2.m"
                      *transform_hlds__term_pass2__BoolList_9 = base;
#line 269 "term_pass2.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__V_16_16));
#line 269 "term_pass2.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass2__BoolListTail_17));
#line 269 "term_pass2.m"
                    }
#line 269 "term_pass2.m"
                    transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 253 "term_pass2.m"
                  }
#line 253 "term_pass2.m"
              }
#line 253 "term_pass2.m"
          }
#line 245 "term_pass2.m"
      }
#line 246 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 246 "term_pass2.m"
  }
#line 242 "term_pass2.m"
}

#line 205 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_6_p_0(
#line 205 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_7,
#line 205 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__PassInfo_8,
#line 205 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__TrialPPId_9,
#line 205 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__RestSCC_10,
#line 205 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__ArgNum0_11,
#line 205 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__Terminates_12)
#line 205 "term_pass2.m"
{
#line 210 "term_pass2.m"
  while (MR_TRUE)
#line 210 "term_pass2.m"
    {
#line 210 "term_pass2.m"
      /* tailcall optimized into a loop */
#line 210 "term_pass2.m"
      {
#line 210 "term_pass2.m"
        MR_bool transform_hlds__term_pass2__succeeded;
#line 210 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__InitRecSuppliers_13;
#line 233 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TypeCtorInfo_16_31;
#line 233 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TypeInfo_17_32;
#line 233 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__ProcInfo_27;
#line 233 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__ArgModes_28;
#line 233 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TrialPPIdRecSuppliers_29;
#line 233 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__RecSupplierMap0_30;
#line 234 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_26_26;

#line 234 "term_pass2.m"
        {
#line 234 "term_pass2.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass2__ModuleInfo_7, transform_hlds__term_pass2__TrialPPId_9, &transform_hlds__term_pass2__V_26_26, &transform_hlds__term_pass2__ProcInfo_27);
        }
#line 235 "term_pass2.m"
        {
#line 235 "term_pass2.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_pass2__ProcInfo_27, &transform_hlds__term_pass2__ArgModes_28);
        }
#line 236 "term_pass2.m"
        {
#line 236 "term_pass2.m"
          transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0(transform_hlds__term_pass2__ModuleInfo_7, transform_hlds__term_pass2__ArgModes_28, transform_hlds__term_pass2__ArgNum0_11, &transform_hlds__term_pass2__TrialPPIdRecSuppliers_29);
        }
#line 233 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 233 "term_pass2.m"
          {
#line 3989 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__TypeCtorInfo_16_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 3991 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__TypeInfo_17_32 = (MR_Word) &transform_hlds__term_pass2_scalar_common_1[0];
#line 238 "term_pass2.m"
            {
#line 238 "term_pass2.m"
              transform_hlds__term_pass2__RecSupplierMap0_30 = mercury__map__singleton_2_f_0(transform_hlds__term_pass2__TypeCtorInfo_16_31, transform_hlds__term_pass2__TypeInfo_17_32, ((MR_Box) (transform_hlds__term_pass2__TrialPPId_9)), ((MR_Box) (transform_hlds__term_pass2__TrialPPIdRecSuppliers_29)));
            }
#line 239 "term_pass2.m"
            {
#line 239 "term_pass2.m"
              transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0(transform_hlds__term_pass2__ModuleInfo_7, transform_hlds__term_pass2__RestSCC_10, transform_hlds__term_pass2__RecSupplierMap0_30, &transform_hlds__term_pass2__InitRecSuppliers_13);
            }
#line 239 "term_pass2.m"
            transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 233 "term_pass2.m"
          }
#line 210 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 215 "term_pass2.m"
          {
#line 215 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_18_18;
#line 215 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Result_39;

#line 215 "term_pass2.m"
            {
#line 215 "term_pass2.m"
              transform_hlds__term_pass2__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "term_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__V_18_18, 0) = ((MR_Box) (transform_hlds__term_pass2__TrialPPId_9));
#line 215 "term_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__V_18_18, 1) = ((MR_Box) (transform_hlds__term_pass2__RestSCC_10));
#line 215 "term_pass2.m"
            }
#line 302 "term_pass2.m"
            {
#line 302 "term_pass2.m"
              transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_6_p_0(transform_hlds__term_pass2__ModuleInfo_7, transform_hlds__term_pass2__PassInfo_8, (MR_Integer) 0, transform_hlds__term_pass2__V_18_18, transform_hlds__term_pass2__InitRecSuppliers_13, &transform_hlds__term_pass2__Result_39);
            }
#line 4031 "transform_hlds.term_pass2.c"
            if (((MR_tag((MR_Word) transform_hlds__term_pass2__Result_39)) == (MR_mktag((MR_Integer) 1))))
#line 4033 "transform_hlds.term_pass2.c"
              {
#line 4035 "transform_hlds.term_pass2.c"
                MR_Integer transform_hlds__term_pass2__ArgNum1_16 = (transform_hlds__term_pass2__ArgNum0_11 + (MR_Integer) 1);

#line 222 "term_pass2.m"
                /* direct tailcall eliminated */
#line 222 "term_pass2.m"
                {
#line 222 "term_pass2.m"
                  MR_Integer transform_hlds__term_pass2__ArgNum0__tmp_copy_11 = transform_hlds__term_pass2__ArgNum1_16;

#line 222 "term_pass2.m"
                  transform_hlds__term_pass2__ArgNum0_11 = transform_hlds__term_pass2__ArgNum0__tmp_copy_11;
#line 222 "term_pass2.m"
                }
#line 222 "term_pass2.m"
                continue;
#line 4051 "transform_hlds.term_pass2.c"
              }
#line 4053 "transform_hlds.term_pass2.c"
            else
#line 4055 "transform_hlds.term_pass2.c"
              {
#line 4057 "transform_hlds.term_pass2.c"
                MR_Word transform_hlds__term_pass2__CallInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result_39, (MR_Integer) 0)));
#line 4059 "transform_hlds.term_pass2.c"
                MR_Word transform_hlds__term_pass2__InfCalls_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo_40, (MR_Integer) 0)));
#line 4061 "transform_hlds.term_pass2.c"
                MR_Word transform_hlds__term_pass2__CallWeights_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo_40, (MR_Integer) 1)));
#line 305 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result_39, (MR_Integer) 1)));

#line 4066 "transform_hlds.term_pass2.c"
                if ((transform_hlds__term_pass2__InfCalls_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4068 "transform_hlds.term_pass2.c"
                  {
#line 4070 "transform_hlds.term_pass2.c"
                    MR_Word transform_hlds__term_pass2__Cycles_50;
#line 316 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__PPIds_66;
#line 317 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__V_51_51;
#line 317 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__V_52_52;

#line 529 "term_pass2.m"
                    {
#line 529 "term_pass2.m"
                      mercury__map__keys_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__CallWeights_43, &transform_hlds__term_pass2__PPIds_66);
                    }
#line 530 "term_pass2.m"
                    {
#line 530 "term_pass2.m"
                      transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(transform_hlds__term_pass2__ModuleInfo_7, transform_hlds__term_pass2__CallWeights_43, transform_hlds__term_pass2__PPIds_66, &transform_hlds__term_pass2__Cycles_50);
                    }
#line 317 "term_pass2.m"
                    transform_hlds__term_pass2__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass2__Cycles_50)) == (MR_mktag((MR_Integer) 1)));
#line 317 "term_pass2.m"
                    if (transform_hlds__term_pass2__succeeded)
#line 317 "term_pass2.m"
                      {
#line 317 "term_pass2.m"
                        transform_hlds__term_pass2__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Cycles_50, (MR_Integer) 0)));
#line 317 "term_pass2.m"
                        transform_hlds__term_pass2__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Cycles_50, (MR_Integer) 1)));
#line 4099 "transform_hlds.term_pass2.c"
                        {
#line 4101 "transform_hlds.term_pass2.c"
                          MR_Integer transform_hlds__term_pass2__MaxErrors_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_8, (MR_Integer) 1)));
#line 4103 "transform_hlds.term_pass2.c"
                          MR_Integer transform_hlds__term_pass2__ArgNum1_69;
#line 319 "term_pass2.m"
                          MR_Word transform_hlds__term_pass2__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_8, (MR_Integer) 0)));
#line 319 "term_pass2.m"
                          MR_Integer transform_hlds__term_pass2__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_8, (MR_Integer) 2)));
#line 320 "term_pass2.m"
                          MR_Word transform_hlds__term_pass2__ReportedCycles_55;

#line 320 "term_pass2.m"
                          {
#line 320 "term_pass2.m"
                            mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_pass2__MaxErrors_58, transform_hlds__term_pass2__Cycles_50, &transform_hlds__term_pass2__ReportedCycles_55);
                          }
#line 221 "term_pass2.m"
                          transform_hlds__term_pass2__ArgNum1_69 = (transform_hlds__term_pass2__ArgNum0_11 + (MR_Integer) 1);
#line 222 "term_pass2.m"
                          /* direct tailcall eliminated */
#line 222 "term_pass2.m"
                          {
#line 222 "term_pass2.m"
                            MR_Integer transform_hlds__term_pass2__ArgNum0__tmp_copy_11 = transform_hlds__term_pass2__ArgNum1_69;

#line 222 "term_pass2.m"
                            transform_hlds__term_pass2__ArgNum0_11 = transform_hlds__term_pass2__ArgNum0__tmp_copy_11;
#line 222 "term_pass2.m"
                          }
#line 222 "term_pass2.m"
                          continue;
#line 4132 "transform_hlds.term_pass2.c"
                        }
#line 317 "term_pass2.m"
                      }
#line 317 "term_pass2.m"
                    else
#line 218 "term_pass2.m"
                      *transform_hlds__term_pass2__Terminates_12 = (MR_Integer) 1;
#line 4140 "transform_hlds.term_pass2.c"
                  }
#line 4142 "transform_hlds.term_pass2.c"
                else
#line 4144 "transform_hlds.term_pass2.c"
                  {
#line 4146 "transform_hlds.term_pass2.c"
                    MR_Integer transform_hlds__term_pass2__MaxErrors_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_8, (MR_Integer) 1)));
#line 4148 "transform_hlds.term_pass2.c"
                    MR_Integer transform_hlds__term_pass2__ArgNum1_77;
#line 309 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_8, (MR_Integer) 0)));
#line 309 "term_pass2.m"
                    MR_Integer transform_hlds__term_pass2__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_8, (MR_Integer) 2)));
#line 310 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__ReportedInfCalls_49;

#line 310 "term_pass2.m"
                    {
#line 310 "term_pass2.m"
                      mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_pass2__MaxErrors_47, transform_hlds__term_pass2__InfCalls_42, &transform_hlds__term_pass2__ReportedInfCalls_49);
                    }
#line 221 "term_pass2.m"
                    transform_hlds__term_pass2__ArgNum1_77 = (transform_hlds__term_pass2__ArgNum0_11 + (MR_Integer) 1);
#line 222 "term_pass2.m"
                    /* direct tailcall eliminated */
#line 222 "term_pass2.m"
                    {
#line 222 "term_pass2.m"
                      MR_Integer transform_hlds__term_pass2__ArgNum0__tmp_copy_11 = transform_hlds__term_pass2__ArgNum1_77;

#line 222 "term_pass2.m"
                      transform_hlds__term_pass2__ArgNum0_11 = transform_hlds__term_pass2__ArgNum0__tmp_copy_11;
#line 222 "term_pass2.m"
                    }
#line 222 "term_pass2.m"
                    continue;
#line 4177 "transform_hlds.term_pass2.c"
                  }
#line 4179 "transform_hlds.term_pass2.c"
              }
#line 215 "term_pass2.m"
          }
#line 210 "term_pass2.m"
        else
#line 226 "term_pass2.m"
          *transform_hlds__term_pass2__Terminates_12 = (MR_Integer) 0;
#line 210 "term_pass2.m"
      }
#line 210 "term_pass2.m"
      break;
#line 210 "term_pass2.m"
    }
#line 205 "term_pass2.m"
}

#line 185 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__find_min_arity_proc_6_p_0(
#line 185 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
#line 185 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 185 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__BestSofarPPId_3,
#line 185 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__BestSofarArity_4,
#line 185 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__5_5,
#line 185 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__6_6)
#line 185 "term_pass2.m"
{
#line 189 "term_pass2.m"
  {
#line 189 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 189 "term_pass2.m"
    if ((transform_hlds__term_pass2__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 189 "term_pass2.m"
      {
#line 189 "term_pass2.m"
        *transform_hlds__term_pass2__HeadVar__5_5 = transform_hlds__term_pass2__BestSofarPPId_3;
#line 189 "term_pass2.m"
        *transform_hlds__term_pass2__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 189 "term_pass2.m"
      }
#line 189 "term_pass2.m"
    else
#line 191 "term_pass2.m"
      {
#line 191 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__PPId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 191 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__PPIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 191 "term_pass2.m"
        MR_Integer transform_hlds__term_pass2__Arity_17;
#line 191 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__ProcInfo_24;
#line 191 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__HeadVars_25;
#line 290 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_23_23;

#line 290 "term_pass2.m"
        {
#line 290 "term_pass2.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__PPId_11, &transform_hlds__term_pass2__V_23_23, &transform_hlds__term_pass2__ProcInfo_24);
        }
#line 291 "term_pass2.m"
        {
#line 291 "term_pass2.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass2__ProcInfo_24, &transform_hlds__term_pass2__HeadVars_25);
        }
#line 292 "term_pass2.m"
        {
#line 292 "term_pass2.m"
          mercury__list__length_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__HeadVars_25, &transform_hlds__term_pass2__Arity_17);
        }
#line 193 "term_pass2.m"
        transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__Arity_17 < transform_hlds__term_pass2__BestSofarArity_4);
#line 193 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 195 "term_pass2.m"
          {
#line 195 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RestSCC0_18;

#line 194 "term_pass2.m"
            {
#line 194 "term_pass2.m"
              transform_hlds__term_pass2__find_min_arity_proc_6_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__PPIds_12, transform_hlds__term_pass2__PPId_11, transform_hlds__term_pass2__Arity_17, transform_hlds__term_pass2__HeadVar__5_5, &transform_hlds__term_pass2__RestSCC0_18);
            }
#line 196 "term_pass2.m"
            {
#line 196 "term_pass2.m"
              MR_Word base;
#line 196 "term_pass2.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "term_pass2.m"
              *transform_hlds__term_pass2__HeadVar__6_6 = base;
#line 196 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__BestSofarPPId_3));
#line 196 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass2__RestSCC0_18));
#line 196 "term_pass2.m"
            }
#line 195 "term_pass2.m"
          }
#line 193 "term_pass2.m"
        else
#line 199 "term_pass2.m"
          {
#line 199 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RestSCC0_19;

#line 198 "term_pass2.m"
            {
#line 198 "term_pass2.m"
              transform_hlds__term_pass2__find_min_arity_proc_6_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__PPIds_12, transform_hlds__term_pass2__BestSofarPPId_3, transform_hlds__term_pass2__BestSofarArity_4, transform_hlds__term_pass2__HeadVar__5_5, &transform_hlds__term_pass2__RestSCC0_19);
            }
#line 200 "term_pass2.m"
            {
#line 200 "term_pass2.m"
              MR_Word base;
#line 200 "term_pass2.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 200 "term_pass2.m"
              *transform_hlds__term_pass2__HeadVar__6_6 = base;
#line 200 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__PPId_11));
#line 200 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass2__RestSCC0_19));
#line 200 "term_pass2.m"
            }
#line 199 "term_pass2.m"
          }
#line 191 "term_pass2.m"
      }
#line 189 "term_pass2.m"
  }
#line 185 "term_pass2.m"
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
    MR_Word transform_hlds__term_pass2__conv0_LambdaHeadVar__2_22;

#line 139 "term_pass2.m"
    {
#line 139 "term_pass2.m"
      transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__140__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), &transform_hlds__term_pass2__conv0_LambdaHeadVar__2_22);
    }
#line 139 "term_pass2.m"
    *transform_hlds__term_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass2__conv0_LambdaHeadVar__2_22));
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
        }
#line 133 "term_pass2.m"
      }
#line 131 "term_pass2.m"
  }
#line 128 "term_pass2.m"
}

#line 104 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_1(
#line 104 "term_pass2.m"
  void * transform_hlds__term_pass2__env_ptr_arg)
#line 104 "term_pass2.m"
{
#line 104 "term_pass2.m"
  {
#line 104 "term_pass2.m"
    struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s * transform_hlds__term_pass2__env_ptr = (struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s *) transform_hlds__term_pass2__env_ptr_arg;

#line 104 "term_pass2.m"
    MR_builtin_longjmp((transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__commit_0, 1);
#line 104 "term_pass2.m"
  }
#line 104 "term_pass2.m"
}

#line 104 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_3(
#line 104 "term_pass2.m"
  void * transform_hlds__term_pass2__env_ptr_arg)
#line 104 "term_pass2.m"
{
#line 104 "term_pass2.m"
  {
#line 104 "term_pass2.m"
    struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s * transform_hlds__term_pass2__env_ptr = (struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s *) transform_hlds__term_pass2__env_ptr_arg;

#line 104 "term_pass2.m"
    (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Error_15 = ((MR_Word) (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__conv0_Error_15);
#line 104 "term_pass2.m"
    {
#line 104 "term_pass2.m"
      transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_2(transform_hlds__term_pass2__env_ptr);
    }
#line 104 "term_pass2.m"
  }
#line 104 "term_pass2.m"
}

#line 104 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_2(
#line 104 "term_pass2.m"
  void * transform_hlds__term_pass2__env_ptr_arg)
#line 104 "term_pass2.m"
{
#line 104 "term_pass2.m"
  {
#line 104 "term_pass2.m"
    struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s * transform_hlds__term_pass2__env_ptr = (struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s *) transform_hlds__term_pass2__env_ptr_arg;

#line 104 "term_pass2.m"
    {
#line 105 "term_pass2.m"
      MR_Word transform_hlds__term_pass2__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Error_15, (MR_Integer) 0)));

#line 105 "term_pass2.m"
      (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Error_15, (MR_Integer) 1)));
#line 105 "term_pass2.m"
      (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = ((transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 105 "term_pass2.m"
      if ((transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded)
#line 105 "term_pass2.m"
        {
#line 105 "term_pass2.m"
          transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_1(transform_hlds__term_pass2__env_ptr);
        }
#line 104 "term_pass2.m"
    }
#line 104 "term_pass2.m"
  }
#line 104 "term_pass2.m"
}

#line 104 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_4(
#line 104 "term_pass2.m"
  void * transform_hlds__term_pass2__env_ptr_arg)
#line 104 "term_pass2.m"
{
#line 104 "term_pass2.m"
  {
#line 104 "term_pass2.m"
    struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s * transform_hlds__term_pass2__env_ptr = (struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s *) transform_hlds__term_pass2__env_ptr_arg;

#line 104 "term_pass2.m"
    if (MR_builtin_setjmp((transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__commit_0) == 0)
#line 104 "term_pass2.m"
      {
#line 104 "term_pass2.m"
        {
#line 104 "term_pass2.m"
          {
#line 104 "term_pass2.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, &(transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__conv0_Error_15, (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Errors_13, transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_3, transform_hlds__term_pass2__env_ptr);
          }
#line 104 "term_pass2.m"
        }
#line 104 "term_pass2.m"
        (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = MR_FALSE;
#line 104 "term_pass2.m"
      }
#line 104 "term_pass2.m"
    else
#line 104 "term_pass2.m"
      (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = MR_TRUE;
#line 104 "term_pass2.m"
  }
#line 104 "term_pass2.m"
}

#line 34 "term_pass2.m"
void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0(
#line 34 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_6,
#line 34 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__PassInfo_7,
#line 34 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__SCC_8,
#line 34 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__SingleArgs_9,
#line 34 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__Termination_10)
#line 34 "term_pass2.m"
{
#line 34 "term_pass2.m"
  {
#line 34 "term_pass2.m"
    struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s transform_hlds__term_pass2__env;

#line 88 "term_pass2.m"
    {
#line 88 "term_pass2.m"
      MR_Word transform_hlds__term_pass2__InitRecSuppliers_11;
#line 88 "term_pass2.m"
      MR_Word transform_hlds__term_pass2__Termination0_12;
#line 88 "term_pass2.m"
      MR_Word transform_hlds__term_pass2__Result_30;

#line 89 "term_pass2.m"
      {
#line 89 "term_pass2.m"
        transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0(transform_hlds__term_pass2__SCC_8, transform_hlds__term_pass2__ModuleInfo_6, &transform_hlds__term_pass2__InitRecSuppliers_11);
      }
#line 302 "term_pass2.m"
      {
#line 302 "term_pass2.m"
        transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_6_p_0(transform_hlds__term_pass2__ModuleInfo_6, transform_hlds__term_pass2__PassInfo_7, (MR_Integer) 1, transform_hlds__term_pass2__SCC_8, transform_hlds__term_pass2__InitRecSuppliers_11, &transform_hlds__term_pass2__Result_30);
      }
#line 326 "term_pass2.m"
      if (((MR_tag((MR_Word) transform_hlds__term_pass2__Result_30)) == (MR_mktag((MR_Integer) 1))))
#line 327 "term_pass2.m"
        {
#line 327 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__Errors_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Result_30, (MR_Integer) 0)));

#line 328 "term_pass2.m"
          {
#line 328 "term_pass2.m"
            transform_hlds__term_pass2__Termination0_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 328 "term_pass2.m"
            MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Termination0_12, 0) = ((MR_Box) (transform_hlds__term_pass2__Errors_47));
#line 328 "term_pass2.m"
          }
#line 327 "term_pass2.m"
        }
#line 326 "term_pass2.m"
      else
#line 305 "term_pass2.m"
        {
#line 305 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__CallInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result_30, (MR_Integer) 0)));
#line 305 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__InfCalls_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo_31, (MR_Integer) 0)));
#line 305 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__CallWeights_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo_31, (MR_Integer) 1)));
#line 305 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result_30, (MR_Integer) 1)));

#line 312 "term_pass2.m"
          if ((transform_hlds__term_pass2__InfCalls_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 314 "term_pass2.m"
            {
#line 314 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__Cycles_41;
#line 316 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__PPIds_57;
#line 317 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__V_42_42;
#line 317 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__V_43_43;

#line 529 "term_pass2.m"
              {
#line 529 "term_pass2.m"
                mercury__map__keys_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__CallWeights_34, &transform_hlds__term_pass2__PPIds_57);
              }
#line 530 "term_pass2.m"
              {
#line 530 "term_pass2.m"
                transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(transform_hlds__term_pass2__ModuleInfo_6, transform_hlds__term_pass2__CallWeights_34, transform_hlds__term_pass2__PPIds_57, &transform_hlds__term_pass2__Cycles_41);
              }
#line 317 "term_pass2.m"
              (transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass2__Cycles_41)) == (MR_mktag((MR_Integer) 1)));
#line 317 "term_pass2.m"
              if ((transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded)
#line 317 "term_pass2.m"
                {
#line 317 "term_pass2.m"
                  transform_hlds__term_pass2__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Cycles_41, (MR_Integer) 0)));
#line 317 "term_pass2.m"
                  transform_hlds__term_pass2__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Cycles_41, (MR_Integer) 1)));
#line 319 "term_pass2.m"
                  {
#line 319 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__ReportedCycles_46;
#line 319 "term_pass2.m"
                    MR_Integer transform_hlds__term_pass2__MaxErrors_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_7, (MR_Integer) 1)));
#line 319 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_7, (MR_Integer) 0)));
#line 319 "term_pass2.m"
                    MR_Integer transform_hlds__term_pass2__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_7, (MR_Integer) 2)));

#line 320 "term_pass2.m"
                    {
#line 320 "term_pass2.m"
                      mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_pass2__MaxErrors_49, transform_hlds__term_pass2__Cycles_41, &transform_hlds__term_pass2__ReportedCycles_46);
                    }
#line 321 "term_pass2.m"
                    {
#line 321 "term_pass2.m"
                      transform_hlds__term_pass2__Termination0_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 321 "term_pass2.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Termination0_12, 0) = ((MR_Box) (transform_hlds__term_pass2__ReportedCycles_46));
#line 321 "term_pass2.m"
                    }
#line 319 "term_pass2.m"
                  }
#line 317 "term_pass2.m"
                }
#line 317 "term_pass2.m"
              else
#line 323 "term_pass2.m"
                {
#line 323 "term_pass2.m"
                  mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 323 "term_pass2.m"
                  transform_hlds__term_pass2__Termination0_12 = (MR_Word) &transform_hlds__term_pass2_scalar_common_3[0];
#line 323 "term_pass2.m"
                }
#line 314 "term_pass2.m"
            }
#line 312 "term_pass2.m"
          else
#line 308 "term_pass2.m"
            {
#line 308 "term_pass2.m"
              MR_Integer transform_hlds__term_pass2__MaxErrors_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_7, (MR_Integer) 1)));
#line 308 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__ReportedInfCalls_40;
#line 309 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_7, (MR_Integer) 0)));
#line 309 "term_pass2.m"
              MR_Integer transform_hlds__term_pass2__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_7, (MR_Integer) 2)));

#line 310 "term_pass2.m"
              {
#line 310 "term_pass2.m"
                mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_pass2__MaxErrors_38, transform_hlds__term_pass2__InfCalls_33, &transform_hlds__term_pass2__ReportedInfCalls_40);
              }
#line 311 "term_pass2.m"
              {
#line 311 "term_pass2.m"
                transform_hlds__term_pass2__Termination0_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 311 "term_pass2.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Termination0_12, 0) = ((MR_Box) (transform_hlds__term_pass2__ReportedInfCalls_40));
#line 311 "term_pass2.m"
              }
#line 308 "term_pass2.m"
            }
#line 305 "term_pass2.m"
        }
#line 120 "term_pass2.m"
      if (((MR_tag((MR_Word) transform_hlds__term_pass2__Termination0_12)) == (MR_mktag((MR_Integer) 1))))
#line 93 "term_pass2.m"
        {
#line 98 "term_pass2.m"
          MR_Integer transform_hlds__term_pass2__ProcCount_14;

#line 93 "term_pass2.m"
          (transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Errors_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Termination0_12, (MR_Integer) 0)));
#line 98 "term_pass2.m"
          {
#line 98 "term_pass2.m"
            mercury__list__length_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_pass2__SCC_8, &transform_hlds__term_pass2__ProcCount_14);
          }
#line 99 "term_pass2.m"
          (transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = (transform_hlds__term_pass2__ProcCount_14 <= transform_hlds__term_pass2__SingleArgs_9);
#line 98 "term_pass2.m"
          if ((transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded)
#line 98 "term_pass2.m"
            {
#line 104 "term_pass2.m"
              {
#line 104 "term_pass2.m"
                transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_4(&transform_hlds__term_pass2__env);
              }
#line 103 "term_pass2.m"
              (transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = !((transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded);
#line 98 "term_pass2.m"
            }
#line 94 "term_pass2.m"
          if ((transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded)
#line 109 "term_pass2.m"
            {
#line 109 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__SingleArgTerminates_17;

#line 171 "term_pass2.m"
              if ((transform_hlds__term_pass2__SCC_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 178 "term_pass2.m"
                {
#line 179 "term_pass2.m"
                  {
#line 179 "term_pass2.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.prove_termination_in_scc_single_arg\'/4", (MR_String) "empty SCC");
#line 179 "term_pass2.m"
                    return;
                  }
#line 178 "term_pass2.m"
                }
#line 171 "term_pass2.m"
              else
#line 171 "term_pass2.m"
                {
#line 171 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__FirstPPId_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__SCC_8, (MR_Integer) 0)));
#line 171 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__LaterPPIds_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__SCC_8, (MR_Integer) 1)));
#line 171 "term_pass2.m"
                  MR_Integer transform_hlds__term_pass2__FirstArity_66;
#line 171 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__TrialPPId_67;
#line 171 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__RestSCC_68;
#line 171 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__ProcInfo_77;
#line 171 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__HeadVars_78;
#line 290 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__V_76_76;

#line 290 "term_pass2.m"
                  {
#line 290 "term_pass2.m"
                    hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass2__ModuleInfo_6, transform_hlds__term_pass2__FirstPPId_64, &transform_hlds__term_pass2__V_76_76, &transform_hlds__term_pass2__ProcInfo_77);
                  }
#line 291 "term_pass2.m"
                  {
#line 291 "term_pass2.m"
                    hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass2__ProcInfo_77, &transform_hlds__term_pass2__HeadVars_78);
                  }
#line 292 "term_pass2.m"
                  {
#line 292 "term_pass2.m"
                    mercury__list__length_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__HeadVars_78, &transform_hlds__term_pass2__FirstArity_66);
                  }
#line 173 "term_pass2.m"
                  {
#line 173 "term_pass2.m"
                    transform_hlds__term_pass2__find_min_arity_proc_6_p_0(transform_hlds__term_pass2__ModuleInfo_6, transform_hlds__term_pass2__LaterPPIds_65, transform_hlds__term_pass2__FirstPPId_64, transform_hlds__term_pass2__FirstArity_66, &transform_hlds__term_pass2__TrialPPId_67, &transform_hlds__term_pass2__RestSCC_68);
                  }
#line 175 "term_pass2.m"
                  {
#line 175 "term_pass2.m"
                    transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_6_p_0(transform_hlds__term_pass2__ModuleInfo_6, transform_hlds__term_pass2__PassInfo_7, transform_hlds__term_pass2__TrialPPId_67, transform_hlds__term_pass2__RestSCC_68, (MR_Integer) 1, &transform_hlds__term_pass2__SingleArgTerminates_17);
                  }
#line 171 "term_pass2.m"
                }
#line 113 "term_pass2.m"
#line 113 "term_pass2.m"
              switch (transform_hlds__term_pass2__SingleArgTerminates_17) {
#line 113 "term_pass2.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 113 "term_pass2.m"
                case (MR_Integer) 0:
#line 115 "term_pass2.m"
                  *transform_hlds__term_pass2__Termination_10 = transform_hlds__term_pass2__Termination0_12;
#line 113 "term_pass2.m"
                  break;
#line 113 "term_pass2.m"
                case (MR_Integer) 1:
#line 111 "term_pass2.m"
                  {
#line 112 "term_pass2.m"
                    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 112 "term_pass2.m"
                    *transform_hlds__term_pass2__Termination_10 = (MR_Word) &transform_hlds__term_pass2_scalar_common_3[0];
#line 111 "term_pass2.m"
                  }
#line 113 "term_pass2.m"
                  break;
#line 113 "term_pass2.m"
              }
#line 109 "term_pass2.m"
            }
#line 94 "term_pass2.m"
          else
#line 118 "term_pass2.m"
            *transform_hlds__term_pass2__Termination_10 = transform_hlds__term_pass2__Termination0_12;
#line 93 "term_pass2.m"
        }
#line 120 "term_pass2.m"
      else
#line 122 "term_pass2.m"
        *transform_hlds__term_pass2__Termination_10 = transform_hlds__term_pass2__Termination0_12;
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
