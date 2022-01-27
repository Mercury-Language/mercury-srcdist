/*
** Automatically generated from `instmap.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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


/* :- module hlds.instmap. */
/* :- implementation. */

/*
INIT mercury__hlds__instmap__init
ENDINIT
*/

#include "hlds.instmap.mih"


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
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
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
#include "std_util.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 146 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 149 "hlds.instmap.c"
static const MR_FA_TypeInfo_Struct1 hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 152 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 155 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 158 "hlds.instmap.c"
static const MR_VA_PseudoTypeInfo_Struct0 hlds__instmap____vpti_pred_0;

#line 161 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 164 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 167 "hlds.instmap.c"
static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_arm_instmap_0_0[2];

#line 170 "hlds.instmap.c"
static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_arm_instmap_0_0;

#line 173 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_arm_instmap_0_0[1];

#line 176 "hlds.instmap.c"
static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_arm_instmap_0[1];

#line 179 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_arm_instmap_0[1];

#line 182 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_arm_instmap_0[1];

#line 185 "hlds.instmap.c"
static const MR_FA_TypeInfo_Struct2 hlds__instmap__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 188 "hlds.instmap.c"
static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_instmap_0_0[1];

#line 191 "hlds.instmap.c"
static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_0;

#line 194 "hlds.instmap.c"
static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_1;

#line 197 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_0[1];

#line 200 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_1[1];

#line 203 "hlds.instmap.c"
static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_instmap_0[2];

#line 206 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_instmap_0[2];

#line 209 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_instmap_0[2];

#line 212 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0;

#line 215 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1;

#line 218 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2;

#line 221 "hlds.instmap.c"
static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_value_ordered_overlay_how_0[3];

#line 224 "hlds.instmap.c"
static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_name_ordered_overlay_how_0[3];

#line 227 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_overlay_how_0[3];

#line 230 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____arm_instmap_0_0_10001(
#line 233 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 235 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2);

#line 238 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____arm_instmap_0_0_10001(
#line 241 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 243 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 245 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3);

#line 248 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_0_0_10001(
#line 251 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 253 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2);

#line 256 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmap_0_0_10001(
#line 259 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 261 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 263 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3);

#line 266 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_delta_0_0_10001(
#line 269 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 271 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2);

#line 274 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmap_delta_0_0_10001(
#line 277 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 279 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 281 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3);

#line 284 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0_10001(
#line 287 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 289 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2);

#line 292 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0_10001(
#line 295 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 297 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 299 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3);

#line 302 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____overlay_how_0_0_10001(
#line 305 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 307 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2);

#line 310 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____overlay_how_0_0_10001(
#line 313 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 315 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 317 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3);

#line 1315 "instmap.m"
static void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_p_0(
#line 1315 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1315 "instmap.m"
  MR_Word hlds__instmap__InstMappingA_3,
#line 1315 "instmap.m"
  MR_Word hlds__instmap__InstMappingB_4,
#line 1315 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_5,
#line 1315 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_6,
#line 1315 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7,
#line 1315 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_8);

#line 602 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__602__1_2_p_0(
#line 602 "instmap.m"
  MR_Word hlds__instmap__Inst_10,
#line 602 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_20);

#line 580 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__580__1_2_p_0(
#line 580 "instmap.m"
  MR_Word hlds__instmap__Inst_8,
#line 580 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_19);

#line 645 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__645__1_2_p_0(
#line 645 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 645 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_17);

#line 616 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__616__1_2_p_0(
#line 616 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 616 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_17);

#line 387 "instmap.m"
static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0(
#line 387 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1,
#line 387 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 387 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3);

#line 387 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0(
#line 387 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 387 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2);

#line 1362 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_delta_apply_sub_2_5_p_0(
#line 1362 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1362 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 1362 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 1362 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_Instmapping_0_4,
#line 1362 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_Instmapping_5);

#line 1237 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_instmapping_delta_2_9_p_0(
#line 1237 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1237 "instmap.m"
  MR_Word hlds__instmap__InstMap_2,
#line 1237 "instmap.m"
  MR_Word hlds__instmap__VarTypes_3,
#line 1237 "instmap.m"
  MR_Word hlds__instmap__InstMappingA_4,
#line 1237 "instmap.m"
  MR_Word hlds__instmap__InstMappingB_5,
#line 1237 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_6,
#line 1237 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_7,
#line 1237 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8,
#line 1237 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_9);

#line 1181 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__var_is_not_output_5_p_0(
#line 1181 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 1181 "instmap.m"
  MR_Word hlds__instmap__VarTypes_7,
#line 1181 "instmap.m"
  MR_Word hlds__instmap__InstMap0_8,
#line 1181 "instmap.m"
  MR_Word hlds__instmap__InstMapDeltaMap_9,
#line 1181 "instmap.m"
  MR_Word hlds__instmap__Var_10);

#line 1151 "instmap.m"
static void MR_CALL 
hlds__instmap__compute_instmap_delta_for_vars_4_p_0(
#line 1151 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1151 "instmap.m"
  MR_Word hlds__instmap__InstMappingA_2,
#line 1151 "instmap.m"
  MR_Word hlds__instmap__InstMappingB_3,
#line 1151 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4);

#line 1095 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_instmap_deltas_2_8_p_0(
#line 1095 "instmap.m"
  MR_Word hlds__instmap__InstMap_9,
#line 1095 "instmap.m"
  MR_Word hlds__instmap__NonLocals_10,
#line 1095 "instmap.m"
  MR_Word hlds__instmap__VarTypes_11,
#line 1095 "instmap.m"
  MR_Word hlds__instmap__Deltas_12,
#line 1095 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24,
#line 1095 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_MergedDeltas_25,
#line 1095 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26,
#line 1095 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_27);

#line 1071 "instmap.m"
static void MR_CALL 
hlds__instmap__arm_instmap_project_context_2_p_0(
#line 1071 "instmap.m"
  MR_Word hlds__instmap__ArmErrorInfo_3,
#line 1071 "instmap.m"
  MR_Word * hlds__instmap__Context_4);

#line 1025 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_var_insts_pass_8_p_0(
#line 1025 "instmap.m"
  MR_Word hlds__instmap__Insts_9,
#line 1025 "instmap.m"
  MR_Word hlds__instmap__MaybeType_10,
#line 1025 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_MergedInsts_0_23,
#line 1025 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_MergedInsts_24,
#line 1025 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25,
#line 1025 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_26,
#line 1025 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_Error_0_27,
#line 1025 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_Error_28);

#line 1001 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_var_insts_5_p_0(
#line 1001 "instmap.m"
  MR_Word hlds__instmap__Insts_6,
#line 1001 "instmap.m"
  MR_Word hlds__instmap__MaybeType_7,
#line 1001 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_16,
#line 1001 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_17,
#line 1001 "instmap.m"
  MR_Word * hlds__instmap__MaybeMergedInst_9);

#line 969 "instmap.m"
static void MR_CALL 
hlds__instmap__lookup_var_in_arm_instmap_3_p_0(
#line 969 "instmap.m"
  MR_Word hlds__instmap__Var_4,
#line 969 "instmap.m"
  MR_Word hlds__instmap__ArmInstMap_5,
#line 969 "instmap.m"
  MR_Word * hlds__instmap__Inst_6);

#line 960 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_2(
#line 960 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 960 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 960 "instmap.m"
  MR_Box * hlds__instmap__wrapper_arg_2);

#line 956 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_1(
#line 956 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 956 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 956 "instmap.m"
  MR_Box * hlds__instmap__wrapper_arg_2);

#line 946 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0(
#line 946 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 946 "instmap.m"
  MR_Word hlds__instmap__ArmInstMaps_2,
#line 946 "instmap.m"
  MR_Word hlds__instmap__VarTypes_3,
#line 946 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 946 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__5_5,
#line 946 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6,
#line 946 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_7,
#line 946 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__8_8);

#line 912 "instmap.m"
static void MR_CALL 
hlds__instmap__get_reachable_instmaps_2_p_0(
#line 912 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 912 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__2_2);

#line 768 "instmap.m"
static void MR_CALL 
hlds__instmap__bind_inst_to_functors_others_6_p_0(
#line 768 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 768 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 768 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 768 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4,
#line 768 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5,
#line 768 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_6);

#line 622 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_same_4_p_0(
#line 622 "instmap.m"
  MR_Word hlds__instmap__Inst_1,
#line 622 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 622 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_3,
#line 622 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_4);

#line 602 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_2(
#line 602 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 602 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_1(
#line 602 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 595 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0(
#line 595 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 595 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 595 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 595 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4);

#line 580 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_2(
#line 580 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 580 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_1(
#line 580 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 575 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0(
#line 575 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 575 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_2,
#line 575 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_3);

#line 508 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_changed_vars_2_6_p_0(
#line 508 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 508 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 508 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 508 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 508 "instmap.m"
  MR_Word hlds__instmap__HeadVar__5_5,
#line 508 "instmap.m"
  MR_Word * hlds__instmap__ChangedVars_6);

#line 485 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_bound_vars_2_5_p_0(
#line 485 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 485 "instmap.m"
  MR_Word hlds__instmap__Var_7,
#line 485 "instmap.m"
  MR_Word hlds__instmap__Inst_8,
#line 485 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_BoundVars_0_10,
#line 485 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_BoundVars_11);

#line 466 "instmap.m"
static MR_Word MR_CALL 
hlds__instmap__pair_with_ground_1_f_0(
#line 466 "instmap.m"
  MR_Word hlds__instmap__Var_3);

#line 433 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_delta_from_mode_list_2_5_p_0(
#line 433 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 433 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 433 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_3,
#line 433 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4,
#line 433 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapDelta_5);

#line 1176 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_no_output_vars_5_p_0_1(
#line 1176 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 1176 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1);

#line 645 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_2(
#line 645 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 645 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_1(
#line 645 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 616 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_2(
#line 616 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 616 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_1(
#line 616 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 482 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_bound_vars_3_p_0_1(
#line 482 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 482 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 482 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 482 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_3,
#line 482 "instmap.m"
  MR_Box * hlds__instmap__wrapper_arg_4);

#line 464 "instmap.m"
static MR_Box MR_CALL 
hlds__instmap__instmap_delta_bind_vars_1_f_0_1(
#line 464 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 464 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1);


static /* final */ const MR_Box hlds__instmap_scalar_common_1[2][2];

static /* final */ const MR_Box hlds__instmap_scalar_common_2[5][3];

static /* final */ const MR_Box hlds__instmap_scalar_common_3[3][5];

static /* final */ const MR_Box hlds__instmap_scalar_common_4[2][8];

static /* final */ const MR_Box hlds__instmap_scalar_common_5[1][4];

static /* final */ const MR_Box hlds__instmap_scalar_common_6[1][6];

static /* final */ const MR_Box hlds__instmap_scalar_common_7[2][1];




static /* final */ const MR_Box hlds__instmap_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&hlds__instmap_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box hlds__instmap_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__instmap_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__instmap_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__instmap_scalar_common_3[0])),
    ((MR_Box) (hlds__instmap__instmap_delta_bind_vars_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__instmap_scalar_common_3[2])),
    ((MR_Box) (hlds__instmap__merge_insts_of_vars_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__instmap_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__instmap__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__instmap__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_arm_instmap_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
};

static /* final */ const MR_Box hlds__instmap_scalar_common_4[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__instmap__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__instmap__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__instmap__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__instmap_scalar_common_5[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__instmap____vpti_pred_0))
  },
};

static /* final */ const MR_Box hlds__instmap_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__instmap__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_arm_instmap_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box hlds__instmap_scalar_common_7[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 908 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 916 "hlds.instmap.c"
static const MR_FA_TypeInfo_Struct1 hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 924 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 933 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 941 "hlds.instmap.c"
static const MR_VA_PseudoTypeInfo_Struct0 hlds__instmap____vpti_pred_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 0,
  { 0 }

};

#line 949 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 958 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 967 "hlds.instmap.c"
static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_arm_instmap_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0
};

#line 973 "hlds.instmap.c"
static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_arm_instmap_0_0 = {
  (MR_String) "arm_instmap",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__instmap__hlds__instmap__field_types_arm_instmap_0_0,
  NULL,
  NULL,
  NULL
};

#line 988 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_arm_instmap_0_0[1] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_arm_instmap_0_0
};

#line 993 "hlds.instmap.c"
static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_arm_instmap_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__instmap__hlds__instmap__du_stag_ordered_arm_instmap_0_0
  }
};

#line 1002 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_arm_instmap_0[1] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_arm_instmap_0_0
};

#line 1007 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_arm_instmap_0[1] = {
  (MR_Integer) 0
};

#line 1012 "hlds.instmap.c"
const MR_TypeCtorInfo_Struct hlds__instmap__hlds__instmap__type_ctor_info_arm_instmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__instmap____Unify____arm_instmap_0_0_10001)),
  ((MR_Box) (hlds__instmap____Compare____arm_instmap_0_0_10001)),
  (MR_String) "hlds.instmap",
  (MR_String) "arm_instmap",
  {     hlds__instmap__hlds__instmap__du_name_ordered_arm_instmap_0 },
  {     hlds__instmap__hlds__instmap__du_ptag_ordered_arm_instmap_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__instmap__hlds__instmap__functor_number_map_arm_instmap_0
};

#line 1029 "hlds.instmap.c"
static const MR_FA_TypeInfo_Struct2 hlds__instmap__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1038 "hlds.instmap.c"
static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_instmap_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__instmap__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 1043 "hlds.instmap.c"
static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_0 = {
  (MR_String) "reachable",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__instmap__hlds__instmap__field_types_instmap_0_0,
  NULL,
  NULL,
  NULL
};

#line 1058 "hlds.instmap.c"
static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_1 = {
  (MR_String) "unreachable",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1073 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_0[1] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_1
};

#line 1078 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_1[1] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_0
};

#line 1083 "hlds.instmap.c"
static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_instmap_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_1
  }
};

#line 1097 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_instmap_0[2] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_0,
  &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_1
};

#line 1103 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_instmap_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1109 "hlds.instmap.c"
const MR_TypeCtorInfo_Struct hlds__instmap__hlds__instmap__type_ctor_info_instmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__instmap____Unify____instmap_0_0_10001)),
  ((MR_Box) (hlds__instmap____Compare____instmap_0_0_10001)),
  (MR_String) "hlds.instmap",
  (MR_String) "instmap",
  {     hlds__instmap__hlds__instmap__du_name_ordered_instmap_0 },
  {     hlds__instmap__hlds__instmap__du_ptag_ordered_instmap_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__instmap__hlds__instmap__functor_number_map_instmap_0
};

#line 1126 "hlds.instmap.c"
const MR_TypeCtorInfo_Struct hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__instmap____Unify____instmap_delta_0_0_10001)),
  ((MR_Box) (hlds__instmap____Compare____instmap_delta_0_0_10001)),
  (MR_String) "hlds.instmap",
  (MR_String) "instmap_delta",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1143 "hlds.instmap.c"
const MR_TypeCtorInfo_Struct hlds__instmap__hlds__instmap__type_ctor_info_instmapping_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__instmap____Unify____instmapping_0_0_10001)),
  ((MR_Box) (hlds__instmap____Compare____instmapping_0_0_10001)),
  (MR_String) "hlds.instmap",
  (MR_String) "instmapping",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__instmap__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1160 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0 = {
  (MR_String) "large_base",
  (MR_Integer) 0
};

#line 1166 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1 = {
  (MR_String) "large_overlay",
  (MR_Integer) 1
};

#line 1172 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2 = {
  (MR_String) "test_size",
  (MR_Integer) 2
};

#line 1178 "hlds.instmap.c"
static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_value_ordered_overlay_how_0[3] = {
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2
};

#line 1185 "hlds.instmap.c"
static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_name_ordered_overlay_how_0[3] = {
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2
};

#line 1192 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_overlay_how_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1199 "hlds.instmap.c"
const MR_TypeCtorInfo_Struct hlds__instmap__hlds__instmap__type_ctor_info_overlay_how_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__instmap____Unify____overlay_how_0_0_10001)),
  ((MR_Box) (hlds__instmap____Compare____overlay_how_0_0_10001)),
  (MR_String) "hlds.instmap",
  (MR_String) "overlay_how",
  {     hlds__instmap__hlds__instmap__enum_name_ordered_overlay_how_0 },
  {     hlds__instmap__hlds__instmap__enum_value_ordered_overlay_how_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__instmap__hlds__instmap__functor_number_map_overlay_how_0
};

#line 1216 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____arm_instmap_0_0_10001(
#line 1219 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 1221 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2)
#line 1223 "hlds.instmap.c"
{
#line 1225 "hlds.instmap.c"
  {
#line 1227 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 1230 "hlds.instmap.c"
    {
#line 1232 "hlds.instmap.c"
      hlds__instmap__succeeded = hlds__instmap____Unify____arm_instmap_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
#line 1235 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 1237 "hlds.instmap.c"
  }
#line 1239 "hlds.instmap.c"
}

#line 1242 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____arm_instmap_0_0_10001(
#line 1245 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 1247 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 1249 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3)
#line 1251 "hlds.instmap.c"
{
#line 1253 "hlds.instmap.c"
  {
#line 1255 "hlds.instmap.c"
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

#line 1258 "hlds.instmap.c"
    {
#line 1260 "hlds.instmap.c"
      hlds__instmap____Compare____arm_instmap_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
#line 1263 "hlds.instmap.c"
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
#line 1265 "hlds.instmap.c"
  }
#line 1267 "hlds.instmap.c"
}

#line 1270 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_0_0_10001(
#line 1273 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 1275 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2)
#line 1277 "hlds.instmap.c"
{
#line 1279 "hlds.instmap.c"
  {
#line 1281 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 1284 "hlds.instmap.c"
    {
#line 1286 "hlds.instmap.c"
      hlds__instmap__succeeded = hlds__instmap____Unify____instmap_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
#line 1289 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 1291 "hlds.instmap.c"
  }
#line 1293 "hlds.instmap.c"
}

#line 1296 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmap_0_0_10001(
#line 1299 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 1301 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 1303 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3)
#line 1305 "hlds.instmap.c"
{
#line 1307 "hlds.instmap.c"
  {
#line 1309 "hlds.instmap.c"
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

#line 1312 "hlds.instmap.c"
    {
#line 1314 "hlds.instmap.c"
      hlds__instmap____Compare____instmap_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
#line 1317 "hlds.instmap.c"
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
#line 1319 "hlds.instmap.c"
  }
#line 1321 "hlds.instmap.c"
}

#line 1324 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_delta_0_0_10001(
#line 1327 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 1329 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2)
#line 1331 "hlds.instmap.c"
{
#line 1333 "hlds.instmap.c"
  {
#line 1335 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 1338 "hlds.instmap.c"
    {
#line 1340 "hlds.instmap.c"
      hlds__instmap__succeeded = hlds__instmap____Unify____instmap_delta_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
#line 1343 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 1345 "hlds.instmap.c"
  }
#line 1347 "hlds.instmap.c"
}

#line 1350 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmap_delta_0_0_10001(
#line 1353 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 1355 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 1357 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3)
#line 1359 "hlds.instmap.c"
{
#line 1361 "hlds.instmap.c"
  {
#line 1363 "hlds.instmap.c"
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

#line 1366 "hlds.instmap.c"
    {
#line 1368 "hlds.instmap.c"
      hlds__instmap____Compare____instmap_delta_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
#line 1371 "hlds.instmap.c"
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
#line 1373 "hlds.instmap.c"
  }
#line 1375 "hlds.instmap.c"
}

#line 1378 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0_10001(
#line 1381 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 1383 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2)
#line 1385 "hlds.instmap.c"
{
#line 1387 "hlds.instmap.c"
  {
#line 1389 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 1392 "hlds.instmap.c"
    {
#line 1394 "hlds.instmap.c"
      hlds__instmap__succeeded = hlds__instmap____Unify____instmapping_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
#line 1397 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 1399 "hlds.instmap.c"
  }
#line 1401 "hlds.instmap.c"
}

#line 1404 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0_10001(
#line 1407 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 1409 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 1411 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3)
#line 1413 "hlds.instmap.c"
{
#line 1415 "hlds.instmap.c"
  {
#line 1417 "hlds.instmap.c"
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

#line 1420 "hlds.instmap.c"
    {
#line 1422 "hlds.instmap.c"
      hlds__instmap____Compare____instmapping_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
#line 1425 "hlds.instmap.c"
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
#line 1427 "hlds.instmap.c"
  }
#line 1429 "hlds.instmap.c"
}

#line 1432 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____overlay_how_0_0_10001(
#line 1435 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 1437 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2)
#line 1439 "hlds.instmap.c"
{
#line 1441 "hlds.instmap.c"
  {
#line 1443 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 1446 "hlds.instmap.c"
    {
#line 1448 "hlds.instmap.c"
      hlds__instmap__succeeded = hlds__instmap____Unify____overlay_how_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
#line 1451 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 1453 "hlds.instmap.c"
  }
#line 1455 "hlds.instmap.c"
}

#line 1458 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____overlay_how_0_0_10001(
#line 1461 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 1463 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 1465 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3)
#line 1467 "hlds.instmap.c"
{
#line 1469 "hlds.instmap.c"
  {
#line 1471 "hlds.instmap.c"
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

#line 1474 "hlds.instmap.c"
    {
#line 1476 "hlds.instmap.c"
      hlds__instmap____Compare____overlay_how_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
#line 1479 "hlds.instmap.c"
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
#line 1481 "hlds.instmap.c"
  }
#line 1483 "hlds.instmap.c"
}

#line 1315 "instmap.m"
static void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_p_0(
#line 1315 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1315 "instmap.m"
  MR_Word hlds__instmap__InstMappingA_3,
#line 1315 "instmap.m"
  MR_Word hlds__instmap__InstMappingB_4,
#line 1315 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_5,
#line 1315 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_6,
#line 1315 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7,
#line 1315 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_8)
#line 1315 "instmap.m"
{
#line 1319 "instmap.m"
  while (MR_TRUE)
#line 1319 "instmap.m"
    {
#line 1319 "instmap.m"
      /* tailcall optimized into a loop */
#line 1319 "instmap.m"
      {
#line 1319 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 1319 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1319 "instmap.m"
          {
#line 1319 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
#line 1319 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_InstMapping_6 = hlds__instmap__STATE_VARIABLE_InstMapping_0_5;
#line 1319 "instmap.m"
          }
#line 1319 "instmap.m"
        else
#line 1321 "instmap.m"
          {
#line 1321 "instmap.m"
            MR_Word hlds__instmap__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 1321 "instmap.m"
            MR_Word hlds__instmap__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 1321 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_36_36;
#line 1321 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40;
#line 1339 "instmap.m"
            MR_Word hlds__instmap__InstA_25;
#line 1322 "instmap.m"
            MR_Box hlds__instmap__conv0_InstA_25;

#line 1322 "instmap.m"
            {
#line 1322 "instmap.m"
              hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingA_3, ((MR_Box) (hlds__instmap__Var_18)), &hlds__instmap__conv0_InstA_25);
            }
#line 1322 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1322 "instmap.m"
              {
#line 1322 "instmap.m"
                hlds__instmap__InstA_25 = ((MR_Word) hlds__instmap__conv0_InstA_25);
#line 1322 "instmap.m"
                hlds__instmap__succeeded = MR_TRUE;
#line 1322 "instmap.m"
              }
#line 1339 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1336 "instmap.m"
              {
#line 1336 "instmap.m"
                MR_Word hlds__instmap__InstB_26;
#line 1323 "instmap.m"
                MR_Box hlds__instmap__conv1_InstB_26;

#line 1323 "instmap.m"
                {
#line 1323 "instmap.m"
                  hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingB_4, ((MR_Box) (hlds__instmap__Var_18)), &hlds__instmap__conv1_InstB_26);
                }
#line 1323 "instmap.m"
                if (hlds__instmap__succeeded)
#line 1323 "instmap.m"
                  {
#line 1323 "instmap.m"
                    hlds__instmap__InstB_26 = ((MR_Word) hlds__instmap__conv1_InstB_26);
#line 1323 "instmap.m"
                    hlds__instmap__succeeded = MR_TRUE;
#line 1323 "instmap.m"
                  }
#line 1336 "instmap.m"
                if (hlds__instmap__succeeded)
#line 1333 "instmap.m"
                  {
#line 1333 "instmap.m"
                    MR_Word hlds__instmap__Inst_27;
#line 1333 "instmap.m"
                    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_35_35;
#line 1329 "instmap.m"
                    MR_Word hlds__instmap___Det_28;

#line 1329 "instmap.m"
                    {
#line 1329 "instmap.m"
                      hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 0, hlds__instmap__InstA_25, hlds__instmap__InstB_26, (MR_Integer) 1, &hlds__instmap__Inst_27, &hlds__instmap___Det_28, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7, &hlds__instmap__STATE_VARIABLE_ModuleInfo_35_35);
                    }
#line 1333 "instmap.m"
                    if (hlds__instmap__succeeded)
#line 1332 "instmap.m"
                      {
#line 1332 "instmap.m"
                        hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40 = hlds__instmap__STATE_VARIABLE_ModuleInfo_35_35;
#line 1332 "instmap.m"
                        {
#line 1332 "instmap.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_18)), ((MR_Box) (hlds__instmap__Inst_27)), hlds__instmap__STATE_VARIABLE_InstMapping_0_5, &hlds__instmap__STATE_VARIABLE_InstMapping_36_36);
                        }
#line 1332 "instmap.m"
                      }
#line 1333 "instmap.m"
                    else
#line 1334 "instmap.m"
                      {
#line 1334 "instmap.m"
                        {
#line 1334 "instmap.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.unify_instmapping_delta_2\'/8", (MR_String) "unexpected error");
#line 1334 "instmap.m"
                          return;
                        }
#line 1334 "instmap.m"
                      }
#line 1333 "instmap.m"
                  }
#line 1336 "instmap.m"
                else
#line 1337 "instmap.m"
                  {
#line 1337 "instmap.m"
                    {
#line 1337 "instmap.m"
                      mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_18)), ((MR_Box) (hlds__instmap__InstA_25)), hlds__instmap__STATE_VARIABLE_InstMapping_0_5, &hlds__instmap__STATE_VARIABLE_InstMapping_36_36);
                    }
#line 1337 "instmap.m"
                    hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
#line 1337 "instmap.m"
                  }
#line 1336 "instmap.m"
              }
#line 1339 "instmap.m"
            else
#line 1342 "instmap.m"
              {
#line 1342 "instmap.m"
                MR_Word hlds__instmap__InstB_45;
#line 1340 "instmap.m"
                MR_Box hlds__instmap__conv2_InstB_45;

#line 1340 "instmap.m"
                {
#line 1340 "instmap.m"
                  hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingB_4, ((MR_Box) (hlds__instmap__Var_18)), &hlds__instmap__conv2_InstB_45);
                }
#line 1340 "instmap.m"
                if (hlds__instmap__succeeded)
#line 1340 "instmap.m"
                  {
#line 1340 "instmap.m"
                    hlds__instmap__InstB_45 = ((MR_Word) hlds__instmap__conv2_InstB_45);
#line 1340 "instmap.m"
                    hlds__instmap__succeeded = MR_TRUE;
#line 1340 "instmap.m"
                  }
#line 1342 "instmap.m"
                if (hlds__instmap__succeeded)
#line 1341 "instmap.m"
                  {
#line 1341 "instmap.m"
                    {
#line 1341 "instmap.m"
                      mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_18)), ((MR_Box) (hlds__instmap__InstB_45)), hlds__instmap__STATE_VARIABLE_InstMapping_0_5, &hlds__instmap__STATE_VARIABLE_InstMapping_36_36);
                    }
#line 1341 "instmap.m"
                  }
#line 1342 "instmap.m"
                else
#line 1342 "instmap.m"
                  hlds__instmap__STATE_VARIABLE_InstMapping_36_36 = hlds__instmap__STATE_VARIABLE_InstMapping_0_5;
#line 1342 "instmap.m"
                hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
#line 1342 "instmap.m"
              }
#line 1346 "instmap.m"
            /* direct tailcall eliminated */
#line 1346 "instmap.m"
            {
#line 1346 "instmap.m"
              MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__Vars_19;
#line 1346 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_5 = hlds__instmap__STATE_VARIABLE_InstMapping_36_36;
#line 1346 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40;

#line 1346 "instmap.m"
              hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_7;
#line 1346 "instmap.m"
              hlds__instmap__STATE_VARIABLE_InstMapping_0_5 = hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_5;
#line 1346 "instmap.m"
              hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 1346 "instmap.m"
            }
#line 1346 "instmap.m"
            continue;
#line 1321 "instmap.m"
          }
#line 1319 "instmap.m"
      }
#line 1319 "instmap.m"
      break;
#line 1319 "instmap.m"
    }
#line 1315 "instmap.m"
}

#line 308 "instmap.m"
void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_p_0(
#line 308 "instmap.m"
  MR_Word hlds__instmap__NonLocals_2,
#line 308 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 308 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 308 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__5_5,
#line 308 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6,
#line 308 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_7)
#line 308 "instmap.m"
{
#line 1291 "instmap.m"
  {
#line 1291 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1291 "instmap.m"
    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1291 "instmap.m"
      {
#line 1291 "instmap.m"
        *hlds__instmap__HeadVar__5_5 = hlds__instmap__HeadVar__4_4;
#line 1292 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6;
#line 1291 "instmap.m"
      }
#line 1291 "instmap.m"
    else
#line 1291 "instmap.m"
      {
#line 1291 "instmap.m"
        MR_Word hlds__instmap__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));

#line 1291 "instmap.m"
        if ((hlds__instmap__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1293 "instmap.m"
          {
#line 1294 "instmap.m"
            *hlds__instmap__HeadVar__5_5 = hlds__instmap__HeadVar__3_3;
#line 1294 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6;
#line 1293 "instmap.m"
          }
#line 1291 "instmap.m"
        else
#line 1296 "instmap.m"
          {
#line 1296 "instmap.m"
            MR_Word hlds__instmap__TypeInfo_24_46 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 1296 "instmap.m"
            MR_Word hlds__instmap__TypeCtorInfo_25_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1296 "instmap.m"
            MR_Word hlds__instmap__TypeCtorInfo_26_48;
#line 1296 "instmap.m"
            MR_Word hlds__instmap__InstMappingB_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__4_4, (MR_Integer) 0)));
#line 1296 "instmap.m"
            MR_Word hlds__instmap__InstMapping_24;
#line 1296 "instmap.m"
            MR_Word hlds__instmap__VarsInA_38;
#line 1296 "instmap.m"
            MR_Word hlds__instmap__VarsInB_39;
#line 1296 "instmap.m"
            MR_Word hlds__instmap__SetofVarsInA_40;
#line 1296 "instmap.m"
            MR_Word hlds__instmap__SetofVars0_41;
#line 1296 "instmap.m"
            MR_Word hlds__instmap__SetofVars_42;
#line 1296 "instmap.m"
            MR_Word hlds__instmap__ListofVars_43;
#line 1296 "instmap.m"
            MR_Word hlds__instmap__V_44_44;

#line 1306 "instmap.m"
            {
#line 1306 "instmap.m"
              mercury__map__keys_2_p_0(hlds__instmap__TypeInfo_24_46, hlds__instmap__TypeCtorInfo_25_47, hlds__instmap__V_29_29, &hlds__instmap__VarsInA_38);
            }
#line 1307 "instmap.m"
            {
#line 1307 "instmap.m"
              mercury__map__keys_2_p_0(hlds__instmap__TypeInfo_24_46, hlds__instmap__TypeCtorInfo_25_47, hlds__instmap__InstMappingB_23, &hlds__instmap__VarsInB_39);
            }
#line 1804 "hlds.instmap.c"
            hlds__instmap__TypeCtorInfo_26_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1308 "instmap.m"
            {
#line 1308 "instmap.m"
              parse_tree__set_of_var__sorted_list_to_set_2_p_0(hlds__instmap__TypeCtorInfo_26_48, hlds__instmap__VarsInA_38, &hlds__instmap__SetofVarsInA_40);
            }
#line 1309 "instmap.m"
            {
#line 1309 "instmap.m"
              parse_tree__set_of_var__insert_list_3_p_0(hlds__instmap__TypeCtorInfo_26_48, hlds__instmap__VarsInB_39, hlds__instmap__SetofVarsInA_40, &hlds__instmap__SetofVars0_41);
            }
#line 1310 "instmap.m"
            {
#line 1310 "instmap.m"
              parse_tree__set_of_var__intersect_3_p_0(hlds__instmap__TypeCtorInfo_26_48, hlds__instmap__SetofVars0_41, hlds__instmap__NonLocals_2, &hlds__instmap__SetofVars_42);
            }
#line 1311 "instmap.m"
            {
#line 1311 "instmap.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__instmap__TypeCtorInfo_26_48, hlds__instmap__SetofVars_42, &hlds__instmap__ListofVars_43);
            }
#line 1313 "instmap.m"
            {
#line 1313 "instmap.m"
              hlds__instmap__V_44_44 = mercury__map__init_0_f_0(hlds__instmap__TypeInfo_24_46, hlds__instmap__TypeCtorInfo_25_47);
            }
#line 1312 "instmap.m"
            {
#line 1312 "instmap.m"
              hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_p_0(hlds__instmap__ListofVars_43, hlds__instmap__V_29_29, hlds__instmap__InstMappingB_23, hlds__instmap__V_44_44, &hlds__instmap__InstMapping_24, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6, hlds__instmap__STATE_VARIABLE_ModuleInfo_7);
            }
#line 1296 "instmap.m"
            {
#line 1296 "instmap.m"
              MR_Word base;
#line 1296 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1296 "instmap.m"
              *hlds__instmap__HeadVar__5_5 = base;
#line 1296 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_24));
#line 1296 "instmap.m"
            }
#line 1296 "instmap.m"
          }
#line 1291 "instmap.m"
      }
#line 1291 "instmap.m"
  }
#line 308 "instmap.m"
}

#line 602 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__602__1_2_p_0(
#line 602 "instmap.m"
  MR_Word hlds__instmap__Inst_10,
#line 602 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_20)
#line 602 "instmap.m"
{
#line 602 "instmap.m"
  {
#line 602 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 602 "instmap.m"
    {
#line 602 "instmap.m"
      return hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst_10, hlds__instmap__HeadVar__2_20);
    }
#line 602 "instmap.m"
    return hlds__instmap__succeeded;
#line 602 "instmap.m"
  }
#line 602 "instmap.m"
}

#line 580 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__580__1_2_p_0(
#line 580 "instmap.m"
  MR_Word hlds__instmap__Inst_8,
#line 580 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_19)
#line 580 "instmap.m"
{
#line 580 "instmap.m"
  {
#line 580 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 580 "instmap.m"
    {
#line 580 "instmap.m"
      return hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst_8, hlds__instmap__HeadVar__2_19);
    }
#line 580 "instmap.m"
    return hlds__instmap__succeeded;
#line 580 "instmap.m"
  }
#line 580 "instmap.m"
}

#line 645 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__645__1_2_p_0(
#line 645 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 645 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_17)
#line 645 "instmap.m"
{
#line 645 "instmap.m"
  {
#line 645 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 645 "instmap.m"
    {
#line 645 "instmap.m"
      return hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst_5, hlds__instmap__HeadVar__2_17);
    }
#line 645 "instmap.m"
    return hlds__instmap__succeeded;
#line 645 "instmap.m"
  }
#line 645 "instmap.m"
}

#line 616 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__616__1_2_p_0(
#line 616 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 616 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_17)
#line 616 "instmap.m"
{
#line 616 "instmap.m"
  {
#line 616 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 616 "instmap.m"
    {
#line 616 "instmap.m"
      return hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst_5, hlds__instmap__HeadVar__2_17);
    }
#line 616 "instmap.m"
    return hlds__instmap__succeeded;
#line 616 "instmap.m"
  }
#line 616 "instmap.m"
}

#line 204 "instmap.m"
void MR_CALL 
hlds__instmap____Compare____overlay_how_0_0(
#line 204 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1,
#line 204 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 204 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3)
#line 204 "instmap.m"
{
#line 204 "instmap.m"
  {
#line 204 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 204 "instmap.m"
    MR_Integer hlds__instmap__Cast_HeadVar1_4 = (MR_Integer) hlds__instmap__HeadVar__2_2;
#line 204 "instmap.m"
    MR_Integer hlds__instmap__Cast_HeadVar2_5 = (MR_Integer) hlds__instmap__HeadVar__3_3;

#line 204 "instmap.m"
    {
#line 204 "instmap.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__instmap__HeadVar__1_1, hlds__instmap__Cast_HeadVar1_4, hlds__instmap__Cast_HeadVar2_5);
#line 204 "instmap.m"
      return;
    }
#line 204 "instmap.m"
  }
#line 204 "instmap.m"
}

#line 204 "instmap.m"
MR_bool MR_CALL 
hlds__instmap____Unify____overlay_how_0_0(
#line 204 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_1,
#line 204 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2)
#line 204 "instmap.m"
{
#line 2002 "hlds.instmap.c"
  {
#line 2004 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded = (hlds__instmap__HeadVar__2_1 == hlds__instmap__HeadVar__2_2);

#line 2007 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 2009 "hlds.instmap.c"
  }
#line 204 "instmap.m"
}

#line 387 "instmap.m"
static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0(
#line 387 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1,
#line 387 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 387 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3)
#line 387 "instmap.m"
{
#line 387 "instmap.m"
  {
#line 387 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 387 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar1_4 = hlds__instmap__HeadVar__2_2;
#line 387 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar2_5 = hlds__instmap__HeadVar__3_3;

#line 387 "instmap.m"
    {
#line 387 "instmap.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__instmap_scalar_common_2[1], hlds__instmap__HeadVar__1_1, ((MR_Box) (hlds__instmap__Cast_HeadVar1_4)), ((MR_Box) (hlds__instmap__Cast_HeadVar2_5)));
#line 387 "instmap.m"
      return;
    }
#line 387 "instmap.m"
  }
#line 387 "instmap.m"
}

#line 387 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0(
#line 387 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 387 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2)
#line 387 "instmap.m"
{
#line 387 "instmap.m"
  {
#line 387 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 387 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar1_3 = hlds__instmap__HeadVar__1_1;
#line 387 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar2_4 = hlds__instmap__HeadVar__2_2;

#line 387 "instmap.m"
    {
#line 387 "instmap.m"
      return hlds__instmap__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__instmap_scalar_common_2[1], ((MR_Box) (hlds__instmap__Cast_HeadVar1_3)), ((MR_Box) (hlds__instmap__Cast_HeadVar2_4)));
    }
#line 387 "instmap.m"
    return hlds__instmap__succeeded;
#line 387 "instmap.m"
  }
#line 387 "instmap.m"
}

#line 381 "instmap.m"
void MR_CALL 
hlds__instmap____Compare____instmap_delta_0_0(
#line 381 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1,
#line 381 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 381 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3)
#line 381 "instmap.m"
{
#line 381 "instmap.m"
  {
#line 381 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 381 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar1_4 = hlds__instmap__HeadVar__2_2;
#line 381 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar2_5 = hlds__instmap__HeadVar__3_3;

#line 381 "instmap.m"
    {
#line 381 "instmap.m"
      hlds__instmap____Compare____instmap_0_0(hlds__instmap__HeadVar__1_1, hlds__instmap__Cast_HeadVar1_4, hlds__instmap__Cast_HeadVar2_5);
#line 381 "instmap.m"
      return;
    }
#line 381 "instmap.m"
  }
#line 381 "instmap.m"
}

#line 381 "instmap.m"
MR_bool MR_CALL 
hlds__instmap____Unify____instmap_delta_0_0(
#line 381 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 381 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2)
#line 381 "instmap.m"
{
#line 381 "instmap.m"
  {
#line 381 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 381 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar1_3 = hlds__instmap__HeadVar__1_1;
#line 381 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar2_4 = hlds__instmap__HeadVar__2_2;

#line 381 "instmap.m"
    {
#line 381 "instmap.m"
      return hlds__instmap__succeeded = hlds__instmap____Unify____instmap_0_0(hlds__instmap__Cast_HeadVar1_3, hlds__instmap__Cast_HeadVar2_4);
    }
#line 381 "instmap.m"
    return hlds__instmap__succeeded;
#line 381 "instmap.m"
  }
#line 381 "instmap.m"
}

#line 383 "instmap.m"
void MR_CALL 
hlds__instmap____Compare____instmap_0_0(
#line 383 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1,
#line 383 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 383 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3)
#line 383 "instmap.m"
{
#line 383 "instmap.m"
  {
#line 383 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 383 "instmap.m"
    MR_Integer hlds__instmap__CastX_8 = (MR_Integer) hlds__instmap__HeadVar__2_2;
#line 383 "instmap.m"
    MR_Integer hlds__instmap__CastY_9 = (MR_Integer) hlds__instmap__HeadVar__3_3;

#line 383 "instmap.m"
    hlds__instmap__succeeded = (hlds__instmap__CastX_8 == hlds__instmap__CastY_9);
#line 383 "instmap.m"
    if (hlds__instmap__succeeded)
#line 2162 "hlds.instmap.c"
      *hlds__instmap__HeadVar__1_1 = (MR_Integer) 0;
#line 383 "instmap.m"
    else
#line 383 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 383 "instmap.m"
      if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 383 "instmap.m"
        *hlds__instmap__HeadVar__1_1 = (MR_Integer) 0;
#line 383 "instmap.m"
      else
#line 2174 "hlds.instmap.c"
        *hlds__instmap__HeadVar__1_1 = (MR_Integer) 2;
#line 383 "instmap.m"
    else
#line 383 "instmap.m"
      {
#line 383 "instmap.m"
        MR_Word hlds__instmap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));

#line 383 "instmap.m"
        if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2185 "hlds.instmap.c"
          *hlds__instmap__HeadVar__1_1 = (MR_Integer) 1;
#line 383 "instmap.m"
        else
#line 383 "instmap.m"
          {
#line 383 "instmap.m"
            MR_Word hlds__instmap__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));

#line 383 "instmap.m"
            {
#line 383 "instmap.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__instmap_scalar_common_2[1], hlds__instmap__HeadVar__1_1, ((MR_Box) (hlds__instmap__V_11_11)), ((MR_Box) (hlds__instmap__V_5_5)));
#line 383 "instmap.m"
              return;
            }
#line 383 "instmap.m"
          }
#line 383 "instmap.m"
      }
#line 383 "instmap.m"
  }
#line 383 "instmap.m"
}

#line 383 "instmap.m"
MR_bool MR_CALL 
hlds__instmap____Unify____instmap_0_0(
#line 383 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 383 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2)
#line 383 "instmap.m"
{
#line 383 "instmap.m"
  {
#line 383 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 383 "instmap.m"
    MR_Integer hlds__instmap__CastX_7 = (MR_Integer) hlds__instmap__HeadVar__1_1;
#line 383 "instmap.m"
    MR_Integer hlds__instmap__CastY_8 = (MR_Integer) hlds__instmap__HeadVar__2_2;

#line 383 "instmap.m"
    hlds__instmap__succeeded = (hlds__instmap__CastX_7 == hlds__instmap__CastY_8);
#line 383 "instmap.m"
    if (hlds__instmap__succeeded)
#line 383 "instmap.m"
      hlds__instmap__succeeded = MR_TRUE;
#line 383 "instmap.m"
    else
#line 383 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 383 "instmap.m"
      {
#line 383 "instmap.m"
        MR_Integer hlds__instmap__CastX_5 = (MR_Integer) hlds__instmap__HeadVar__1_1;
#line 383 "instmap.m"
        MR_Integer hlds__instmap__CastY_6 = (MR_Integer) hlds__instmap__HeadVar__2_2;

#line 383 "instmap.m"
        hlds__instmap__succeeded = (hlds__instmap__CastY_6 == hlds__instmap__CastX_5);
#line 383 "instmap.m"
      }
#line 383 "instmap.m"
    else
#line 383 "instmap.m"
      {
#line 383 "instmap.m"
        MR_Word hlds__instmap__TypeInfo_9_9;
#line 383 "instmap.m"
        MR_Word hlds__instmap__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 383 "instmap.m"
        MR_Word hlds__instmap__V_4_4;

#line 383 "instmap.m"
        hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 383 "instmap.m"
        if (hlds__instmap__succeeded)
#line 383 "instmap.m"
          {
#line 383 "instmap.m"
            hlds__instmap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 2268 "hlds.instmap.c"
            hlds__instmap__TypeInfo_9_9 = (MR_Word) &hlds__instmap_scalar_common_2[1];
#line 2270 "hlds.instmap.c"
            {
#line 2272 "hlds.instmap.c"
              return hlds__instmap__succeeded = mercury__builtin__unify_2_p_0(hlds__instmap__TypeInfo_9_9, ((MR_Box) (hlds__instmap__V_3_3)), ((MR_Box) (hlds__instmap__V_4_4)));
            }
#line 383 "instmap.m"
          }
#line 383 "instmap.m"
      }
#line 383 "instmap.m"
    return hlds__instmap__succeeded;
#line 383 "instmap.m"
  }
#line 383 "instmap.m"
}

#line 239 "instmap.m"
void MR_CALL 
hlds__instmap____Compare____arm_instmap_0_0(
#line 239 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1,
#line 239 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 239 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3)
#line 239 "instmap.m"
{
#line 239 "instmap.m"
  {
#line 239 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 239 "instmap.m"
    MR_Integer hlds__instmap__CastX_9 = (MR_Integer) hlds__instmap__HeadVar__2_2;
#line 239 "instmap.m"
    MR_Integer hlds__instmap__CastY_10 = (MR_Integer) hlds__instmap__HeadVar__3_3;

#line 239 "instmap.m"
    hlds__instmap__succeeded = (hlds__instmap__CastX_9 == hlds__instmap__CastY_10);
#line 239 "instmap.m"
    if (hlds__instmap__succeeded)
#line 2310 "hlds.instmap.c"
      *hlds__instmap__HeadVar__1_1 = (MR_Integer) 0;
#line 239 "instmap.m"
    else
#line 239 "instmap.m"
      {
#line 239 "instmap.m"
        MR_Word hlds__instmap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 239 "instmap.m"
        MR_Word hlds__instmap__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 239 "instmap.m"
        MR_Word hlds__instmap__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));
#line 239 "instmap.m"
        MR_Word hlds__instmap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__3_3, (MR_Integer) 1)));
#line 239 "instmap.m"
        MR_Word hlds__instmap__V_8_8;

#line 239 "instmap.m"
        {
#line 239 "instmap.m"
          mercury__term____Compare____context_0_0(&hlds__instmap__V_8_8, hlds__instmap__V_4_4, hlds__instmap__V_6_6);
        }
#line 2332 "hlds.instmap.c"
        hlds__instmap__succeeded = (hlds__instmap__V_8_8 == (MR_Integer) 0);
#line 239 "instmap.m"
        hlds__instmap__succeeded = !(hlds__instmap__succeeded);
#line 239 "instmap.m"
        if (hlds__instmap__succeeded)
#line 239 "instmap.m"
          *hlds__instmap__HeadVar__1_1 = hlds__instmap__V_8_8;
#line 239 "instmap.m"
        else
#line 239 "instmap.m"
          {
#line 239 "instmap.m"
            hlds__instmap____Compare____instmap_0_0(hlds__instmap__HeadVar__1_1, hlds__instmap__V_5_5, hlds__instmap__V_7_7);
#line 239 "instmap.m"
            return;
          }
#line 239 "instmap.m"
      }
#line 239 "instmap.m"
  }
#line 239 "instmap.m"
}

#line 239 "instmap.m"
MR_bool MR_CALL 
hlds__instmap____Unify____arm_instmap_0_0(
#line 239 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 239 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2)
#line 239 "instmap.m"
{
#line 239 "instmap.m"
  {
#line 239 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 239 "instmap.m"
    MR_Integer hlds__instmap__CastX_7 = (MR_Integer) hlds__instmap__HeadVar__1_1;
#line 239 "instmap.m"
    MR_Integer hlds__instmap__CastY_8 = (MR_Integer) hlds__instmap__HeadVar__2_2;

#line 239 "instmap.m"
    hlds__instmap__succeeded = (hlds__instmap__CastX_7 == hlds__instmap__CastY_8);
#line 239 "instmap.m"
    if (hlds__instmap__succeeded)
#line 239 "instmap.m"
      hlds__instmap__succeeded = MR_TRUE;
#line 239 "instmap.m"
    else
#line 239 "instmap.m"
      {
#line 239 "instmap.m"
        MR_Word hlds__instmap__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 239 "instmap.m"
        MR_Word hlds__instmap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 239 "instmap.m"
        MR_Word hlds__instmap__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 239 "instmap.m"
        MR_Word hlds__instmap__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));

#line 2393 "hlds.instmap.c"
        {
#line 2395 "hlds.instmap.c"
          hlds__instmap__succeeded = mercury__term____Unify____context_0_0(hlds__instmap__V_3_3, hlds__instmap__V_5_5);
        }
#line 239 "instmap.m"
        if (hlds__instmap__succeeded)
#line 2400 "hlds.instmap.c"
          {
#line 2402 "hlds.instmap.c"
            return hlds__instmap__succeeded = hlds__instmap____Unify____instmap_0_0(hlds__instmap__V_4_4, hlds__instmap__V_6_6);
          }
#line 239 "instmap.m"
      }
#line 239 "instmap.m"
    return hlds__instmap__succeeded;
#line 239 "instmap.m"
  }
#line 239 "instmap.m"
}

#line 1362 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_delta_apply_sub_2_5_p_0(
#line 1362 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1362 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 1362 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 1362 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_Instmapping_0_4,
#line 1362 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_Instmapping_5)
#line 1362 "instmap.m"
{
#line 1366 "instmap.m"
  while (MR_TRUE)
#line 1366 "instmap.m"
    {
#line 1366 "instmap.m"
      /* tailcall optimized into a loop */
#line 1366 "instmap.m"
      {
#line 1366 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 1366 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1366 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_Instmapping_5 = hlds__instmap__STATE_VARIABLE_Instmapping_0_4;
#line 1366 "instmap.m"
        else
#line 1368 "instmap.m"
          {
#line 1368 "instmap.m"
            MR_Word hlds__instmap__Var0_11;
#line 1368 "instmap.m"
            MR_Word hlds__instmap__Inst_12;
#line 1368 "instmap.m"
            MR_Word hlds__instmap__VarInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 1368 "instmap.m"
            MR_Word hlds__instmap__Var_17;
#line 1368 "instmap.m"
            MR_Word hlds__instmap__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 1368 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_Instmapping_21_21;

#line 1367 "instmap.m"
            hlds__instmap__Var0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_20_20, (MR_Integer) 0)));
#line 1367 "instmap.m"
            hlds__instmap__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_20_20, (MR_Integer) 1)));
#line 1369 "instmap.m"
            {
#line 1369 "instmap.m"
              parse_tree__prog_rename__rename_var_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__HeadVar__2_2, hlds__instmap__HeadVar__3_3, hlds__instmap__Var0_11, &hlds__instmap__Var_17);
            }
#line 1374 "instmap.m"
            {
#line 1374 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_17)), ((MR_Box) (hlds__instmap__Inst_12)), hlds__instmap__STATE_VARIABLE_Instmapping_0_4, &hlds__instmap__STATE_VARIABLE_Instmapping_21_21);
            }
#line 1375 "instmap.m"
            /* direct tailcall eliminated */
#line 1375 "instmap.m"
            {
#line 1375 "instmap.m"
              MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__VarInsts0_13;
#line 1375 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_Instmapping_0__tmp_copy_4 = hlds__instmap__STATE_VARIABLE_Instmapping_21_21;

#line 1375 "instmap.m"
              hlds__instmap__STATE_VARIABLE_Instmapping_0_4 = hlds__instmap__STATE_VARIABLE_Instmapping_0__tmp_copy_4;
#line 1375 "instmap.m"
              hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 1375 "instmap.m"
            }
#line 1375 "instmap.m"
            continue;
#line 1368 "instmap.m"
          }
#line 1366 "instmap.m"
      }
#line 1366 "instmap.m"
      break;
#line 1366 "instmap.m"
    }
#line 1362 "instmap.m"
}

#line 1237 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_instmapping_delta_2_9_p_0(
#line 1237 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1237 "instmap.m"
  MR_Word hlds__instmap__InstMap_2,
#line 1237 "instmap.m"
  MR_Word hlds__instmap__VarTypes_3,
#line 1237 "instmap.m"
  MR_Word hlds__instmap__InstMappingA_4,
#line 1237 "instmap.m"
  MR_Word hlds__instmap__InstMappingB_5,
#line 1237 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_6,
#line 1237 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_7,
#line 1237 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8,
#line 1237 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_9)
#line 1237 "instmap.m"
{
#line 1242 "instmap.m"
  while (MR_TRUE)
#line 1242 "instmap.m"
    {
#line 1242 "instmap.m"
      /* tailcall optimized into a loop */
#line 1242 "instmap.m"
      {
#line 1242 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 1242 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1242 "instmap.m"
          {
#line 1242 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_9 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8;
#line 1242 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_InstMapping_7 = hlds__instmap__STATE_VARIABLE_InstMapping_0_6;
#line 1242 "instmap.m"
          }
#line 1242 "instmap.m"
        else
#line 1244 "instmap.m"
          {
#line 1244 "instmap.m"
            MR_Word hlds__instmap__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 1244 "instmap.m"
            MR_Word hlds__instmap__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 1244 "instmap.m"
            MR_Word hlds__instmap__InstA_29;
#line 1244 "instmap.m"
            MR_Word hlds__instmap__InstB_31;
#line 1244 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_43_43;
#line 1244 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50;
#line 1247 "instmap.m"
            MR_Word hlds__instmap__InstInA_28;
#line 1245 "instmap.m"
            MR_Box hlds__instmap__conv0_InstInA_28;
#line 1252 "instmap.m"
            MR_Word hlds__instmap__InstInB_30;
#line 1250 "instmap.m"
            MR_Box hlds__instmap__conv1_InstInB_30;
#line 1277 "instmap.m"
            MR_Word hlds__instmap__Inst1_33;
#line 1277 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_42_42;
#line 1256 "instmap.m"
            MR_Word hlds__instmap__VarType_32;
#line 1256 "instmap.m"
            MR_Word hlds__instmap__V_41_41;

#line 1245 "instmap.m"
            {
#line 1245 "instmap.m"
              hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingA_4, ((MR_Box) (hlds__instmap__Var_20)), &hlds__instmap__conv0_InstInA_28);
            }
#line 1245 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1245 "instmap.m"
              {
#line 1245 "instmap.m"
                hlds__instmap__InstInA_28 = ((MR_Word) hlds__instmap__conv0_InstInA_28);
#line 1245 "instmap.m"
                hlds__instmap__succeeded = MR_TRUE;
#line 1245 "instmap.m"
              }
#line 1247 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1246 "instmap.m"
              hlds__instmap__InstA_29 = hlds__instmap__InstInA_28;
#line 1247 "instmap.m"
            else
#line 1248 "instmap.m"
              {
#line 1248 "instmap.m"
                hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_2, hlds__instmap__Var_20, &hlds__instmap__InstA_29);
              }
#line 1250 "instmap.m"
            {
#line 1250 "instmap.m"
              hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingB_5, ((MR_Box) (hlds__instmap__Var_20)), &hlds__instmap__conv1_InstInB_30);
            }
#line 1250 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1250 "instmap.m"
              {
#line 1250 "instmap.m"
                hlds__instmap__InstInB_30 = ((MR_Word) hlds__instmap__conv1_InstInB_30);
#line 1250 "instmap.m"
                hlds__instmap__succeeded = MR_TRUE;
#line 1250 "instmap.m"
              }
#line 1252 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1251 "instmap.m"
              hlds__instmap__InstB_31 = hlds__instmap__InstInB_30;
#line 1252 "instmap.m"
            else
#line 1253 "instmap.m"
              {
#line 1253 "instmap.m"
                hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_2, hlds__instmap__Var_20, &hlds__instmap__InstB_31);
              }
#line 1256 "instmap.m"
            {
#line 1256 "instmap.m"
              hlds__vartypes__lookup_var_type_3_p_0(hlds__instmap__VarTypes_3, hlds__instmap__Var_20, &hlds__instmap__VarType_32);
            }
#line 1257 "instmap.m"
            {
#line 1257 "instmap.m"
              hlds__instmap__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1257 "instmap.m"
              MR_hl_field(MR_mktag(1), hlds__instmap__V_41_41, 0) = ((MR_Box) (hlds__instmap__VarType_32));
#line 1257 "instmap.m"
            }
#line 1257 "instmap.m"
            {
#line 1257 "instmap.m"
              hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__InstA_29, hlds__instmap__InstB_31, hlds__instmap__V_41_41, &hlds__instmap__Inst1_33, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8, &hlds__instmap__STATE_VARIABLE_ModuleInfo_42_42);
            }
#line 1277 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1275 "instmap.m"
              {
#line 1275 "instmap.m"
                hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50 = hlds__instmap__STATE_VARIABLE_ModuleInfo_42_42;
#line 1276 "instmap.m"
                {
#line 1276 "instmap.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_20)), ((MR_Box) (hlds__instmap__Inst1_33)), hlds__instmap__STATE_VARIABLE_InstMapping_0_6, &hlds__instmap__STATE_VARIABLE_InstMapping_43_43);
                }
#line 1275 "instmap.m"
              }
#line 1277 "instmap.m"
            else
#line 1278 "instmap.m"
              {
#line 1278 "instmap.m"
                MR_Integer hlds__instmap__VarInt_35;
#line 1278 "instmap.m"
                MR_String hlds__instmap__Msg_36;
#line 1278 "instmap.m"
                MR_String hlds__instmap__V_60_60;

#line 1278 "instmap.m"
                {
#line 1278 "instmap.m"
                  mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Var_20, &hlds__instmap__VarInt_35);
                }
#line 1280 "instmap.m"
                {
#line 1280 "instmap.m"
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__instmap_scalar_common_7[1], hlds__instmap__VarInt_35, &hlds__instmap__V_60_60);
                }
#line 1279 "instmap.m"
                {
#line 1279 "instmap.m"
                  hlds__instmap__Msg_36 = mercury__string__f_43_43_2_f_0((MR_String) "merge_instmapping_delta_2: error merging var ", hlds__instmap__V_60_60);
                }
#line 1281 "instmap.m"
                {
#line 1281 "instmap.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.merge_instmapping_delta_2\'/9", hlds__instmap__Msg_36);
#line 1281 "instmap.m"
                  return;
                }
#line 1278 "instmap.m"
              }
#line 1283 "instmap.m"
            /* direct tailcall eliminated */
#line 1283 "instmap.m"
            {
#line 1283 "instmap.m"
              MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__Vars_21;
#line 1283 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_6 = hlds__instmap__STATE_VARIABLE_InstMapping_43_43;
#line 1283 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50;

#line 1283 "instmap.m"
              hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8;
#line 1283 "instmap.m"
              hlds__instmap__STATE_VARIABLE_InstMapping_0_6 = hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_6;
#line 1283 "instmap.m"
              hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 1283 "instmap.m"
            }
#line 1283 "instmap.m"
            continue;
#line 1244 "instmap.m"
          }
#line 1242 "instmap.m"
      }
#line 1242 "instmap.m"
      break;
#line 1242 "instmap.m"
    }
#line 1237 "instmap.m"
}

#line 1181 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__var_is_not_output_5_p_0(
#line 1181 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 1181 "instmap.m"
  MR_Word hlds__instmap__VarTypes_7,
#line 1181 "instmap.m"
  MR_Word hlds__instmap__InstMap0_8,
#line 1181 "instmap.m"
  MR_Word hlds__instmap__InstMapDeltaMap_9,
#line 1181 "instmap.m"
  MR_Word hlds__instmap__Var_10)
#line 1181 "instmap.m"
{
#line 1184 "instmap.m"
  {
#line 1184 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 1184 "instmap.m"
    MR_Word hlds__instmap__OldInst_11;
#line 1204 "instmap.m"
    MR_Word hlds__instmap__NewInst_12;
#line 1186 "instmap.m"
    MR_Box hlds__instmap__conv0_NewInst_12;

#line 1185 "instmap.m"
    {
#line 1185 "instmap.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap0_8, hlds__instmap__Var_10, &hlds__instmap__OldInst_11);
    }
#line 1186 "instmap.m"
    {
#line 1186 "instmap.m"
      hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapDeltaMap_9, ((MR_Box) (hlds__instmap__Var_10)), &hlds__instmap__conv0_NewInst_12);
    }
#line 1186 "instmap.m"
    if (hlds__instmap__succeeded)
#line 1186 "instmap.m"
      {
#line 1186 "instmap.m"
        hlds__instmap__NewInst_12 = ((MR_Word) hlds__instmap__conv0_NewInst_12);
#line 1186 "instmap.m"
        hlds__instmap__succeeded = MR_TRUE;
#line 1186 "instmap.m"
      }
#line 1204 "instmap.m"
    if (hlds__instmap__succeeded)
#line 1202 "instmap.m"
      {
#line 1202 "instmap.m"
        MR_Word hlds__instmap__Type_13;

#line 1202 "instmap.m"
        {
#line 1202 "instmap.m"
          hlds__vartypes__lookup_var_type_3_p_0(hlds__instmap__VarTypes_7, hlds__instmap__Var_10, &hlds__instmap__Type_13);
        }
#line 1203 "instmap.m"
        {
#line 1203 "instmap.m"
          return hlds__instmap__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(hlds__instmap__NewInst_12, hlds__instmap__OldInst_11, hlds__instmap__Type_13, hlds__instmap__ModuleInfo_6);
        }
#line 1202 "instmap.m"
      }
#line 1204 "instmap.m"
    else
#line 1207 "instmap.m"
      {
#line 1207 "instmap.m"
        {
#line 1207 "instmap.m"
          hlds__instmap__succeeded = check_hlds__inst_util__inst_contains_any_2_p_0(hlds__instmap__ModuleInfo_6, hlds__instmap__OldInst_11);
        }
#line 1207 "instmap.m"
        hlds__instmap__succeeded = !(hlds__instmap__succeeded);
#line 1207 "instmap.m"
      }
#line 1184 "instmap.m"
    return hlds__instmap__succeeded;
#line 1184 "instmap.m"
  }
#line 1181 "instmap.m"
}

#line 1151 "instmap.m"
static void MR_CALL 
hlds__instmap__compute_instmap_delta_for_vars_4_p_0(
#line 1151 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1151 "instmap.m"
  MR_Word hlds__instmap__InstMappingA_2,
#line 1151 "instmap.m"
  MR_Word hlds__instmap__InstMappingB_3,
#line 1151 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 1151 "instmap.m"
{
#line 1154 "instmap.m"
  {
#line 1154 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1154 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1154 "instmap.m"
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1154 "instmap.m"
    else
#line 1156 "instmap.m"
      {
#line 1156 "instmap.m"
        MR_Word hlds__instmap__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 1156 "instmap.m"
        MR_Word hlds__instmap__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 1156 "instmap.m"
        MR_Word hlds__instmap__AssocListTail_12;
#line 1156 "instmap.m"
        MR_Word hlds__instmap__InstA_13;
#line 1156 "instmap.m"
        MR_Word hlds__instmap__InstB_14;
#line 541 "instmap.m"
        MR_Word hlds__instmap__VarInst_20;
#line 539 "instmap.m"
        MR_Box hlds__instmap__conv0_VarInst_20;
#line 541 "instmap.m"
        MR_Word hlds__instmap__VarInst_26;
#line 539 "instmap.m"
        MR_Box hlds__instmap__conv1_VarInst_26;

#line 1157 "instmap.m"
        {
#line 1157 "instmap.m"
          hlds__instmap__compute_instmap_delta_for_vars_4_p_0(hlds__instmap__Vars_8, hlds__instmap__InstMappingA_2, hlds__instmap__InstMappingB_3, &hlds__instmap__AssocListTail_12);
        }
#line 539 "instmap.m"
        {
#line 539 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingA_2, ((MR_Box) (hlds__instmap__Var_7)), &hlds__instmap__conv0_VarInst_20);
        }
#line 539 "instmap.m"
        if (hlds__instmap__succeeded)
#line 539 "instmap.m"
          {
#line 539 "instmap.m"
            hlds__instmap__VarInst_20 = ((MR_Word) hlds__instmap__conv0_VarInst_20);
#line 539 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 539 "instmap.m"
          }
#line 541 "instmap.m"
        if (hlds__instmap__succeeded)
#line 540 "instmap.m"
          hlds__instmap__InstA_13 = hlds__instmap__VarInst_20;
#line 541 "instmap.m"
        else
#line 542 "instmap.m"
          hlds__instmap__InstA_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 539 "instmap.m"
        {
#line 539 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingB_3, ((MR_Box) (hlds__instmap__Var_7)), &hlds__instmap__conv1_VarInst_26);
        }
#line 539 "instmap.m"
        if (hlds__instmap__succeeded)
#line 539 "instmap.m"
          {
#line 539 "instmap.m"
            hlds__instmap__VarInst_26 = ((MR_Word) hlds__instmap__conv1_VarInst_26);
#line 539 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 539 "instmap.m"
          }
#line 541 "instmap.m"
        if (hlds__instmap__succeeded)
#line 540 "instmap.m"
          hlds__instmap__InstB_14 = hlds__instmap__VarInst_26;
#line 541 "instmap.m"
        else
#line 542 "instmap.m"
          hlds__instmap__InstB_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1161 "instmap.m"
        {
#line 1161 "instmap.m"
          hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__InstA_13, hlds__instmap__InstB_14);
        }
#line 1163 "instmap.m"
        if (hlds__instmap__succeeded)
#line 1162 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = hlds__instmap__AssocListTail_12;
#line 1163 "instmap.m"
        else
#line 1164 "instmap.m"
          {
#line 1164 "instmap.m"
            MR_Word hlds__instmap__V_15_15;

#line 1164 "instmap.m"
            {
#line 1164 "instmap.m"
              hlds__instmap__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1164 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 0) = ((MR_Box) (hlds__instmap__Var_7));
#line 1164 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 1) = ((MR_Box) (hlds__instmap__InstB_14));
#line 1164 "instmap.m"
            }
#line 1164 "instmap.m"
            {
#line 1164 "instmap.m"
              MR_Word base;
#line 1164 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1164 "instmap.m"
              *hlds__instmap__HeadVar__4_4 = base;
#line 1164 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__V_15_15));
#line 1164 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__AssocListTail_12));
#line 1164 "instmap.m"
            }
#line 1164 "instmap.m"
          }
#line 1156 "instmap.m"
      }
#line 1154 "instmap.m"
  }
#line 1151 "instmap.m"
}

#line 1095 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_instmap_deltas_2_8_p_0(
#line 1095 "instmap.m"
  MR_Word hlds__instmap__InstMap_9,
#line 1095 "instmap.m"
  MR_Word hlds__instmap__NonLocals_10,
#line 1095 "instmap.m"
  MR_Word hlds__instmap__VarTypes_11,
#line 1095 "instmap.m"
  MR_Word hlds__instmap__Deltas_12,
#line 1095 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24,
#line 1095 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_MergedDeltas_25,
#line 1095 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26,
#line 1095 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_27)
#line 1095 "instmap.m"
{
#line 1102 "instmap.m"
  while (MR_TRUE)
#line 1102 "instmap.m"
    {
#line 1102 "instmap.m"
      /* tailcall optimized into a loop */
#line 1102 "instmap.m"
      {
#line 1102 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 1102 "instmap.m"
        if ((hlds__instmap__Deltas_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1102 "instmap.m"
          {
#line 1102 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_MergedDeltas_25 = hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24;
#line 1102 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_27 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26;
#line 1102 "instmap.m"
          }
#line 1102 "instmap.m"
        else
#line 1102 "instmap.m"
          {
#line 1102 "instmap.m"
            MR_Word hlds__instmap__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Deltas_12, (MR_Integer) 1)));
#line 1102 "instmap.m"
            MR_Word hlds__instmap__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Deltas_12, (MR_Integer) 0)));

#line 1102 "instmap.m"
            if ((hlds__instmap__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1104 "instmap.m"
              {
#line 1105 "instmap.m"
                {
#line 1105 "instmap.m"
                  MR_Word base;
#line 1105 "instmap.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1105 "instmap.m"
                  *hlds__instmap__STATE_VARIABLE_MergedDeltas_25 = base;
#line 1105 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__V_58_58));
#line 1105 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24));
#line 1105 "instmap.m"
                }
#line 1104 "instmap.m"
                *hlds__instmap__STATE_VARIABLE_ModuleInfo_27 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26;
#line 1104 "instmap.m"
              }
#line 1102 "instmap.m"
            else
#line 1102 "instmap.m"
              {
#line 1102 "instmap.m"
                MR_Word hlds__instmap__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_57_57, (MR_Integer) 1)));
#line 1102 "instmap.m"
                MR_Word hlds__instmap__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_57_57, (MR_Integer) 0)));

#line 1102 "instmap.m"
                if ((hlds__instmap__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1107 "instmap.m"
                  {
#line 1107 "instmap.m"
                    MR_Word hlds__instmap__Delta12_17;

#line 1108 "instmap.m"
                    {
#line 1108 "instmap.m"
                      hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__V_58_58, hlds__instmap__V_60_60, &hlds__instmap__Delta12_17, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26, hlds__instmap__STATE_VARIABLE_ModuleInfo_27);
                    }
#line 1110 "instmap.m"
                    {
#line 1110 "instmap.m"
                      MR_Word base;
#line 1110 "instmap.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1110 "instmap.m"
                      *hlds__instmap__STATE_VARIABLE_MergedDeltas_25 = base;
#line 1110 "instmap.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Delta12_17));
#line 1110 "instmap.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24));
#line 1110 "instmap.m"
                    }
#line 1107 "instmap.m"
                  }
#line 1102 "instmap.m"
                else
#line 1102 "instmap.m"
                  {
#line 1102 "instmap.m"
                    MR_Word hlds__instmap__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_59_59, (MR_Integer) 1)));
#line 1102 "instmap.m"
                    MR_Word hlds__instmap__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_59_59, (MR_Integer) 0)));

#line 1102 "instmap.m"
                    if ((hlds__instmap__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1112 "instmap.m"
                      {
#line 1112 "instmap.m"
                        MR_Word hlds__instmap__Delta123_19;
#line 1112 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40;
#line 1112 "instmap.m"
                        MR_Word hlds__instmap__Delta12_52;

#line 1113 "instmap.m"
                        {
#line 1113 "instmap.m"
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__V_58_58, hlds__instmap__V_60_60, &hlds__instmap__Delta12_52, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26, &hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40);
                        }
#line 1115 "instmap.m"
                        {
#line 1115 "instmap.m"
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__Delta12_52, hlds__instmap__V_62_62, &hlds__instmap__Delta123_19, hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40, hlds__instmap__STATE_VARIABLE_ModuleInfo_27);
                        }
#line 1117 "instmap.m"
                        {
#line 1117 "instmap.m"
                          MR_Word base;
#line 1117 "instmap.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "instmap.m"
                          *hlds__instmap__STATE_VARIABLE_MergedDeltas_25 = base;
#line 1117 "instmap.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Delta123_19));
#line 1117 "instmap.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24));
#line 1117 "instmap.m"
                        }
#line 1112 "instmap.m"
                      }
#line 1102 "instmap.m"
                    else
#line 1119 "instmap.m"
                      {
#line 1119 "instmap.m"
                        MR_Word hlds__instmap__Delta4_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_61_61, (MR_Integer) 0)));
#line 1119 "instmap.m"
                        MR_Word hlds__instmap__MoreDeltas_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_61_61, (MR_Integer) 1)));
#line 1119 "instmap.m"
                        MR_Word hlds__instmap__Delta34_22;
#line 1119 "instmap.m"
                        MR_Word hlds__instmap__Delta1234_23;
#line 1119 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_31_31;
#line 1119 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32;
#line 1119 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33;
#line 1119 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34;
#line 1119 "instmap.m"
                        MR_Word hlds__instmap__Delta12_55;

#line 1120 "instmap.m"
                        {
#line 1120 "instmap.m"
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__V_58_58, hlds__instmap__V_60_60, &hlds__instmap__Delta12_55, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26, &hlds__instmap__STATE_VARIABLE_ModuleInfo_31_31);
                        }
#line 1122 "instmap.m"
                        {
#line 1122 "instmap.m"
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__V_62_62, hlds__instmap__Delta4_20, &hlds__instmap__Delta34_22, hlds__instmap__STATE_VARIABLE_ModuleInfo_31_31, &hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32);
                        }
#line 1124 "instmap.m"
                        {
#line 1124 "instmap.m"
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__Delta12_55, hlds__instmap__Delta34_22, &hlds__instmap__Delta1234_23, hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32, &hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33);
                        }
#line 1126 "instmap.m"
                        {
#line 1126 "instmap.m"
                          hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1126 "instmap.m"
                          MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34, 0) = ((MR_Box) (hlds__instmap__Delta1234_23));
#line 1126 "instmap.m"
                          MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24));
#line 1126 "instmap.m"
                        }
#line 1127 "instmap.m"
                        /* direct tailcall eliminated */
#line 1127 "instmap.m"
                        {
#line 1127 "instmap.m"
                          MR_Word hlds__instmap__Deltas__tmp_copy_12 = hlds__instmap__MoreDeltas_21;
#line 1127 "instmap.m"
                          MR_Word hlds__instmap__STATE_VARIABLE_MergedDeltas_0__tmp_copy_24 = hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34;
#line 1127 "instmap.m"
                          MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33;

#line 1127 "instmap.m"
                          hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_26;
#line 1127 "instmap.m"
                          hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24 = hlds__instmap__STATE_VARIABLE_MergedDeltas_0__tmp_copy_24;
#line 1127 "instmap.m"
                          hlds__instmap__Deltas_12 = hlds__instmap__Deltas__tmp_copy_12;
#line 1127 "instmap.m"
                        }
#line 1127 "instmap.m"
                        continue;
#line 1119 "instmap.m"
                      }
#line 1102 "instmap.m"
                  }
#line 1102 "instmap.m"
              }
#line 1102 "instmap.m"
          }
#line 1102 "instmap.m"
      }
#line 1102 "instmap.m"
      break;
#line 1102 "instmap.m"
    }
#line 1095 "instmap.m"
}

#line 1071 "instmap.m"
static void MR_CALL 
hlds__instmap__arm_instmap_project_context_2_p_0(
#line 1071 "instmap.m"
  MR_Word hlds__instmap__ArmErrorInfo_3,
#line 1071 "instmap.m"
  MR_Word * hlds__instmap__Context_4)
#line 1071 "instmap.m"
{
#line 1074 "instmap.m"
  {
#line 1074 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 1074 "instmap.m"
    MR_Word hlds__instmap___InstMap_5;

#line 1074 "instmap.m"
    *hlds__instmap__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmErrorInfo_3, (MR_Integer) 0)));
#line 1074 "instmap.m"
    hlds__instmap___InstMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmErrorInfo_3, (MR_Integer) 1)));
#line 1074 "instmap.m"
  }
#line 1071 "instmap.m"
}

#line 1025 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_var_insts_pass_8_p_0(
#line 1025 "instmap.m"
  MR_Word hlds__instmap__Insts_9,
#line 1025 "instmap.m"
  MR_Word hlds__instmap__MaybeType_10,
#line 1025 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_MergedInsts_0_23,
#line 1025 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_MergedInsts_24,
#line 1025 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25,
#line 1025 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_26,
#line 1025 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_Error_0_27,
#line 1025 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_Error_28)
#line 1025 "instmap.m"
{
#line 1031 "instmap.m"
  while (MR_TRUE)
#line 1031 "instmap.m"
    {
#line 1031 "instmap.m"
      /* tailcall optimized into a loop */
#line 1031 "instmap.m"
      {
#line 1031 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 1031 "instmap.m"
        if ((hlds__instmap__Insts_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1031 "instmap.m"
          {
#line 1031 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = hlds__instmap__STATE_VARIABLE_MergedInsts_0_23;
#line 1031 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
#line 1031 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_Error_28 = hlds__instmap__STATE_VARIABLE_Error_0_27;
#line 1031 "instmap.m"
          }
#line 1031 "instmap.m"
        else
#line 1031 "instmap.m"
          {
#line 1031 "instmap.m"
            MR_Word hlds__instmap__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Insts_9, (MR_Integer) 1)));
#line 1031 "instmap.m"
            MR_Word hlds__instmap__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Insts_9, (MR_Integer) 0)));

#line 1031 "instmap.m"
            if ((hlds__instmap__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1033 "instmap.m"
              {
#line 1034 "instmap.m"
                {
#line 1034 "instmap.m"
                  MR_Word base;
#line 1034 "instmap.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "instmap.m"
                  *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = base;
#line 1034 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__V_69_69));
#line 1034 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedInsts_0_23));
#line 1034 "instmap.m"
                }
#line 1033 "instmap.m"
                *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
#line 1033 "instmap.m"
                *hlds__instmap__STATE_VARIABLE_Error_28 = hlds__instmap__STATE_VARIABLE_Error_0_27;
#line 1033 "instmap.m"
              }
#line 1031 "instmap.m"
            else
#line 1031 "instmap.m"
              {
#line 1031 "instmap.m"
                MR_Word hlds__instmap__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_68_68, (MR_Integer) 1)));
#line 1031 "instmap.m"
                MR_Word hlds__instmap__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_68_68, (MR_Integer) 0)));

#line 1031 "instmap.m"
                if ((hlds__instmap__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1041 "instmap.m"
                  {
#line 1041 "instmap.m"
                    MR_Word hlds__instmap__Inst12_16;
#line 1041 "instmap.m"
                    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50;

#line 1038 "instmap.m"
                    {
#line 1038 "instmap.m"
                      hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__V_69_69, hlds__instmap__V_71_71, hlds__instmap__MaybeType_10, &hlds__instmap__Inst12_16, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25, &hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50);
                    }
#line 1041 "instmap.m"
                    if (hlds__instmap__succeeded)
#line 1040 "instmap.m"
                      {
#line 1040 "instmap.m"
                        *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50;
#line 1040 "instmap.m"
                        {
#line 1040 "instmap.m"
                          MR_Word base;
#line 1040 "instmap.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "instmap.m"
                          *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = base;
#line 1040 "instmap.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Inst12_16));
#line 1040 "instmap.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedInsts_0_23));
#line 1040 "instmap.m"
                        }
#line 1040 "instmap.m"
                        *hlds__instmap__STATE_VARIABLE_Error_28 = hlds__instmap__STATE_VARIABLE_Error_0_27;
#line 1040 "instmap.m"
                      }
#line 1041 "instmap.m"
                    else
#line 1042 "instmap.m"
                      {
#line 1042 "instmap.m"
                        *hlds__instmap__STATE_VARIABLE_Error_28 = (MR_Integer) 1;
#line 1042 "instmap.m"
                        *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
#line 1042 "instmap.m"
                        *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = hlds__instmap__STATE_VARIABLE_MergedInsts_0_23;
#line 1042 "instmap.m"
                      }
#line 1041 "instmap.m"
                  }
#line 1031 "instmap.m"
                else
#line 1031 "instmap.m"
                  {
#line 1031 "instmap.m"
                    MR_Word hlds__instmap__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_70_70, (MR_Integer) 1)));
#line 1031 "instmap.m"
                    MR_Word hlds__instmap__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_70_70, (MR_Integer) 0)));

#line 1031 "instmap.m"
                    if ((hlds__instmap__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1051 "instmap.m"
                      {
#line 1051 "instmap.m"
                        MR_Word hlds__instmap__Inst123_18;
#line 1051 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_44_44;
#line 1047 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_43_43;
#line 1047 "instmap.m"
                        MR_Word hlds__instmap__Inst12_57;

#line 1047 "instmap.m"
                        {
#line 1047 "instmap.m"
                          hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__V_69_69, hlds__instmap__V_71_71, hlds__instmap__MaybeType_10, &hlds__instmap__Inst12_57, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25, &hlds__instmap__STATE_VARIABLE_ModuleInfo_43_43);
                        }
#line 1047 "instmap.m"
                        if (hlds__instmap__succeeded)
#line 1048 "instmap.m"
                          {
#line 1048 "instmap.m"
                            hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__Inst12_57, hlds__instmap__V_73_73, hlds__instmap__MaybeType_10, &hlds__instmap__Inst123_18, hlds__instmap__STATE_VARIABLE_ModuleInfo_43_43, &hlds__instmap__STATE_VARIABLE_ModuleInfo_44_44);
                          }
#line 1051 "instmap.m"
                        if (hlds__instmap__succeeded)
#line 1050 "instmap.m"
                          {
#line 1050 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_44_44;
#line 1050 "instmap.m"
                            {
#line 1050 "instmap.m"
                              MR_Word base;
#line 1050 "instmap.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1050 "instmap.m"
                              *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = base;
#line 1050 "instmap.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Inst123_18));
#line 1050 "instmap.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedInsts_0_23));
#line 1050 "instmap.m"
                            }
#line 1050 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_Error_28 = hlds__instmap__STATE_VARIABLE_Error_0_27;
#line 1050 "instmap.m"
                          }
#line 1051 "instmap.m"
                        else
#line 1052 "instmap.m"
                          {
#line 1052 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_Error_28 = (MR_Integer) 1;
#line 1052 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
#line 1052 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = hlds__instmap__STATE_VARIABLE_MergedInsts_0_23;
#line 1052 "instmap.m"
                          }
#line 1051 "instmap.m"
                      }
#line 1031 "instmap.m"
                    else
#line 1055 "instmap.m"
                      {
#line 1055 "instmap.m"
                        MR_Word hlds__instmap__Inst4_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_72_72, (MR_Integer) 0)));
#line 1055 "instmap.m"
                        MR_Word hlds__instmap__MoreInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_72_72, (MR_Integer) 1)));
#line 1064 "instmap.m"
                        MR_Word hlds__instmap__Inst1234_22;
#line 1064 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_34_34;
#line 1057 "instmap.m"
                        MR_Word hlds__instmap__Inst34_21;
#line 1057 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32;
#line 1057 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33;
#line 1057 "instmap.m"
                        MR_Word hlds__instmap__Inst12_62;

#line 1057 "instmap.m"
                        {
#line 1057 "instmap.m"
                          hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__V_69_69, hlds__instmap__V_71_71, hlds__instmap__MaybeType_10, &hlds__instmap__Inst12_62, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25, &hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32);
                        }
#line 1057 "instmap.m"
                        if (hlds__instmap__succeeded)
#line 1057 "instmap.m"
                          {
#line 1058 "instmap.m"
                            {
#line 1058 "instmap.m"
                              hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__V_73_73, hlds__instmap__Inst4_19, hlds__instmap__MaybeType_10, &hlds__instmap__Inst34_21, hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32, &hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33);
                            }
#line 1057 "instmap.m"
                            if (hlds__instmap__succeeded)
#line 1059 "instmap.m"
                              {
#line 1059 "instmap.m"
                                hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__Inst12_62, hlds__instmap__Inst34_21, hlds__instmap__MaybeType_10, &hlds__instmap__Inst1234_22, hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33, &hlds__instmap__STATE_VARIABLE_ModuleInfo_34_34);
                              }
#line 1057 "instmap.m"
                          }
#line 1064 "instmap.m"
                        if (hlds__instmap__succeeded)
#line 1061 "instmap.m"
                          {
#line 1061 "instmap.m"
                            MR_Word hlds__instmap__STATE_VARIABLE_MergedInsts_35_35;

#line 1061 "instmap.m"
                            {
#line 1061 "instmap.m"
                              hlds__instmap__STATE_VARIABLE_MergedInsts_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1061 "instmap.m"
                              MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_MergedInsts_35_35, 0) = ((MR_Box) (hlds__instmap__Inst1234_22));
#line 1061 "instmap.m"
                              MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_MergedInsts_35_35, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedInsts_0_23));
#line 1061 "instmap.m"
                            }
#line 1062 "instmap.m"
                            /* direct tailcall eliminated */
#line 1062 "instmap.m"
                            {
#line 1062 "instmap.m"
                              MR_Word hlds__instmap__Insts__tmp_copy_9 = hlds__instmap__MoreInsts_20;
#line 1062 "instmap.m"
                              MR_Word hlds__instmap__STATE_VARIABLE_MergedInsts_0__tmp_copy_23 = hlds__instmap__STATE_VARIABLE_MergedInsts_35_35;
#line 1062 "instmap.m"
                              MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_25 = hlds__instmap__STATE_VARIABLE_ModuleInfo_34_34;

#line 1062 "instmap.m"
                              hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_25;
#line 1062 "instmap.m"
                              hlds__instmap__STATE_VARIABLE_MergedInsts_0_23 = hlds__instmap__STATE_VARIABLE_MergedInsts_0__tmp_copy_23;
#line 1062 "instmap.m"
                              hlds__instmap__Insts_9 = hlds__instmap__Insts__tmp_copy_9;
#line 1062 "instmap.m"
                            }
#line 1062 "instmap.m"
                            continue;
#line 1061 "instmap.m"
                          }
#line 1064 "instmap.m"
                        else
#line 1065 "instmap.m"
                          {
#line 1065 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_Error_28 = (MR_Integer) 1;
#line 1065 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
#line 1065 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = hlds__instmap__STATE_VARIABLE_MergedInsts_0_23;
#line 1065 "instmap.m"
                          }
#line 1055 "instmap.m"
                      }
#line 1031 "instmap.m"
                  }
#line 1031 "instmap.m"
              }
#line 1031 "instmap.m"
          }
#line 1031 "instmap.m"
      }
#line 1031 "instmap.m"
      break;
#line 1031 "instmap.m"
    }
#line 1025 "instmap.m"
}

#line 1001 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_var_insts_5_p_0(
#line 1001 "instmap.m"
  MR_Word hlds__instmap__Insts_6,
#line 1001 "instmap.m"
  MR_Word hlds__instmap__MaybeType_7,
#line 1001 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_16,
#line 1001 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_17,
#line 1001 "instmap.m"
  MR_Word * hlds__instmap__MaybeMergedInst_9)
#line 1001 "instmap.m"
{
#line 1004 "instmap.m"
  while (MR_TRUE)
#line 1004 "instmap.m"
    {
#line 1004 "instmap.m"
      /* tailcall optimized into a loop */
#line 1004 "instmap.m"
      {
#line 1004 "instmap.m"
        MR_bool hlds__instmap__succeeded;
#line 1004 "instmap.m"
        MR_Word hlds__instmap__MergedInsts_10;
#line 1004 "instmap.m"
        MR_Word hlds__instmap__Error_11;
#line 1004 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19;

#line 1005 "instmap.m"
        {
#line 1005 "instmap.m"
          hlds__instmap__merge_var_insts_pass_8_p_0(hlds__instmap__Insts_6, hlds__instmap__MaybeType_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__instmap__MergedInsts_10, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_16, &hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19, (MR_Integer) 0, &hlds__instmap__Error_11);
        }
#line 1010 "instmap.m"
#line 1010 "instmap.m"
        switch (hlds__instmap__Error_11) {
#line 1010 "instmap.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1010 "instmap.m"
          case (MR_Integer) 0:
#line 1011 "instmap.m"
            if ((hlds__instmap__MergedInsts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1013 "instmap.m"
              {
#line 1014 "instmap.m"
                *hlds__instmap__MaybeMergedInst_9 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__instmap_scalar_common_7[0]);
#line 1013 "instmap.m"
                *hlds__instmap__STATE_VARIABLE_ModuleInfo_17 = hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19;
#line 1013 "instmap.m"
              }
#line 1011 "instmap.m"
            else
#line 1015 "instmap.m"
              {
#line 1015 "instmap.m"
                MR_Word hlds__instmap__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MergedInsts_10, (MR_Integer) 1)));
#line 1015 "instmap.m"
                MR_Word hlds__instmap__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MergedInsts_10, (MR_Integer) 0)));

#line 1015 "instmap.m"
                if ((hlds__instmap__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1016 "instmap.m"
                  {
#line 1017 "instmap.m"
                    {
#line 1017 "instmap.m"
                      MR_Word base;
#line 1017 "instmap.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1017 "instmap.m"
                      *hlds__instmap__MaybeMergedInst_9 = base;
#line 1017 "instmap.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__V_26_26));
#line 1017 "instmap.m"
                    }
#line 1016 "instmap.m"
                    *hlds__instmap__STATE_VARIABLE_ModuleInfo_17 = hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19;
#line 1016 "instmap.m"
                  }
#line 1015 "instmap.m"
                else
#line 1020 "instmap.m"
                  {
#line 1020 "instmap.m"
                    /* direct tailcall eliminated */
#line 1020 "instmap.m"
                    {
#line 1020 "instmap.m"
                      MR_Word hlds__instmap__Insts__tmp_copy_6 = hlds__instmap__MergedInsts_10;
#line 1020 "instmap.m"
                      MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_16 = hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19;

#line 1020 "instmap.m"
                      hlds__instmap__STATE_VARIABLE_ModuleInfo_0_16 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_16;
#line 1020 "instmap.m"
                      hlds__instmap__Insts_6 = hlds__instmap__Insts__tmp_copy_6;
#line 1020 "instmap.m"
                    }
#line 1020 "instmap.m"
                    continue;
#line 1020 "instmap.m"
                  }
#line 1015 "instmap.m"
              }
#line 1010 "instmap.m"
            break;
#line 1010 "instmap.m"
          case (MR_Integer) 1:
#line 1008 "instmap.m"
            {
#line 1009 "instmap.m"
              *hlds__instmap__MaybeMergedInst_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1008 "instmap.m"
              *hlds__instmap__STATE_VARIABLE_ModuleInfo_17 = hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19;
#line 1008 "instmap.m"
            }
#line 1010 "instmap.m"
            break;
#line 1010 "instmap.m"
        }
#line 1004 "instmap.m"
      }
#line 1004 "instmap.m"
      break;
#line 1004 "instmap.m"
    }
#line 1001 "instmap.m"
}

#line 969 "instmap.m"
static void MR_CALL 
hlds__instmap__lookup_var_in_arm_instmap_3_p_0(
#line 969 "instmap.m"
  MR_Word hlds__instmap__Var_4,
#line 969 "instmap.m"
  MR_Word hlds__instmap__ArmInstMap_5,
#line 969 "instmap.m"
  MR_Word * hlds__instmap__Inst_6)
#line 969 "instmap.m"
{
#line 972 "instmap.m"
  {
#line 972 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 972 "instmap.m"
    MR_Word hlds__instmap__InstMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmInstMap_5, (MR_Integer) 1)));
#line 973 "instmap.m"
    MR_Word hlds__instmap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmInstMap_5, (MR_Integer) 0)));

#line 974 "instmap.m"
    {
#line 974 "instmap.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_8, hlds__instmap__Var_4, hlds__instmap__Inst_6);
#line 974 "instmap.m"
      return;
    }
#line 972 "instmap.m"
  }
#line 969 "instmap.m"
}

#line 960 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_2(
#line 960 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 960 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 960 "instmap.m"
  MR_Box * hlds__instmap__wrapper_arg_2)
#line 960 "instmap.m"
{
#line 960 "instmap.m"
  {
#line 960 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;
#line 960 "instmap.m"
    MR_Word hlds__instmap__conv1_Context_4;

#line 960 "instmap.m"
    {
#line 960 "instmap.m"
      hlds__instmap__arm_instmap_project_context_2_p_0(((MR_Word) hlds__instmap__wrapper_arg_1), &hlds__instmap__conv1_Context_4);
    }
#line 960 "instmap.m"
    *hlds__instmap__wrapper_arg_2 = ((MR_Box) (hlds__instmap__conv1_Context_4));
#line 960 "instmap.m"
  }
#line 960 "instmap.m"
}

#line 956 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_1(
#line 956 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 956 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 956 "instmap.m"
  MR_Box * hlds__instmap__wrapper_arg_2)
#line 956 "instmap.m"
{
#line 956 "instmap.m"
  {
#line 956 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;
#line 956 "instmap.m"
    MR_Word hlds__instmap__conv0_Inst_6;

#line 956 "instmap.m"
    {
#line 956 "instmap.m"
      hlds__instmap__lookup_var_in_arm_instmap_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) hlds__instmap__wrapper_arg_1), &hlds__instmap__conv0_Inst_6);
    }
#line 956 "instmap.m"
    *hlds__instmap__wrapper_arg_2 = ((MR_Box) (hlds__instmap__conv0_Inst_6));
#line 956 "instmap.m"
  }
#line 956 "instmap.m"
}

#line 946 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0(
#line 946 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 946 "instmap.m"
  MR_Word hlds__instmap__ArmInstMaps_2,
#line 946 "instmap.m"
  MR_Word hlds__instmap__VarTypes_3,
#line 946 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 946 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__5_5,
#line 946 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6,
#line 946 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_7,
#line 946 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__8_8)
#line 946 "instmap.m"
{
#line 950 "instmap.m"
  {
#line 950 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 950 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 950 "instmap.m"
      {
#line 950 "instmap.m"
        *hlds__instmap__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 950 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6;
#line 950 "instmap.m"
        *hlds__instmap__HeadVar__5_5 = hlds__instmap__HeadVar__4_4;
#line 950 "instmap.m"
      }
#line 950 "instmap.m"
    else
#line 952 "instmap.m"
      {
#line 952 "instmap.m"
        MR_Word hlds__instmap__TypeCtorInfo_49_49;
#line 952 "instmap.m"
        MR_Word hlds__instmap__TypeCtorInfo_50_50;
#line 952 "instmap.m"
        MR_Word hlds__instmap__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 952 "instmap.m"
        MR_Word hlds__instmap__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 952 "instmap.m"
        MR_Word hlds__instmap__VarType_24;
#line 952 "instmap.m"
        MR_Word hlds__instmap__InstList_25;
#line 952 "instmap.m"
        MR_Word hlds__instmap__MaybeInst_26;
#line 952 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_35_35;
#line 952 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_36_36;
#line 952 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ErrorList_37_37;
#line 952 "instmap.m"
        MR_Word hlds__instmap__V_38_38;
#line 952 "instmap.m"
        MR_Word hlds__instmap__V_39_39;

#line 953 "instmap.m"
        {
#line 953 "instmap.m"
          hlds__instmap__merge_insts_of_vars_8_p_0(hlds__instmap__Vars_18, hlds__instmap__ArmInstMaps_2, hlds__instmap__VarTypes_3, hlds__instmap__HeadVar__4_4, &hlds__instmap__STATE_VARIABLE_InstMapping_35_35, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6, &hlds__instmap__STATE_VARIABLE_ModuleInfo_36_36, &hlds__instmap__STATE_VARIABLE_ErrorList_37_37);
        }
#line 955 "instmap.m"
        {
#line 955 "instmap.m"
          hlds__vartypes__lookup_var_type_3_p_0(hlds__instmap__VarTypes_3, hlds__instmap__Var_17, &hlds__instmap__VarType_24);
        }
#line 956 "instmap.m"
        {
#line 956 "instmap.m"
          hlds__instmap__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 956 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_38_38, 0) = ((MR_Box) (&hlds__instmap_scalar_common_6[0]));
#line 956 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_38_38, 1) = ((MR_Box) (hlds__instmap__merge_insts_of_vars_8_p_0_1));
#line 956 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 956 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_38_38, 3) = ((MR_Box) (hlds__instmap__Var_17));
#line 956 "instmap.m"
        }
#line 3866 "hlds.instmap.c"
        hlds__instmap__TypeCtorInfo_49_49 = (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_arm_instmap_0;
#line 3868 "hlds.instmap.c"
        hlds__instmap__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 956 "instmap.m"
        {
#line 956 "instmap.m"
          mercury__list__map_3_p_0(hlds__instmap__TypeCtorInfo_49_49, hlds__instmap__TypeCtorInfo_50_50, hlds__instmap__V_38_38, hlds__instmap__ArmInstMaps_2, &hlds__instmap__InstList_25);
        }
#line 957 "instmap.m"
        {
#line 957 "instmap.m"
          hlds__instmap__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 957 "instmap.m"
          MR_hl_field(MR_mktag(1), hlds__instmap__V_39_39, 0) = ((MR_Box) (hlds__instmap__VarType_24));
#line 957 "instmap.m"
        }
#line 957 "instmap.m"
        {
#line 957 "instmap.m"
          hlds__instmap__merge_var_insts_5_p_0(hlds__instmap__InstList_25, hlds__instmap__V_39_39, hlds__instmap__STATE_VARIABLE_ModuleInfo_36_36, hlds__instmap__STATE_VARIABLE_ModuleInfo_7, &hlds__instmap__MaybeInst_26);
        }
#line 964 "instmap.m"
        if ((hlds__instmap__MaybeInst_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 959 "instmap.m"
          {
#line 959 "instmap.m"
            MR_Word hlds__instmap__TypeCtorInfo_53_53 = (MR_Word) &mercury__term__term__type_ctor_info_context_0;
#line 959 "instmap.m"
            MR_Word hlds__instmap__Contexts_27;
#line 959 "instmap.m"
            MR_Word hlds__instmap__ContextsInsts_28;
#line 959 "instmap.m"
            MR_Word hlds__instmap__V_44_44;

#line 960 "instmap.m"
            {
#line 960 "instmap.m"
              mercury__list__map_3_p_0(hlds__instmap__TypeCtorInfo_49_49, hlds__instmap__TypeCtorInfo_53_53, (MR_Word) &hlds__instmap_scalar_common_2[4], hlds__instmap__ArmInstMaps_2, &hlds__instmap__Contexts_27);
            }
#line 961 "instmap.m"
            {
#line 961 "instmap.m"
              mercury__assoc_list__from_corresponding_lists_3_p_0(hlds__instmap__TypeCtorInfo_53_53, hlds__instmap__TypeCtorInfo_50_50, hlds__instmap__Contexts_27, hlds__instmap__InstList_25, &hlds__instmap__ContextsInsts_28);
            }
#line 962 "instmap.m"
            {
#line 962 "instmap.m"
              hlds__instmap__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 962 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_44_44, 0) = ((MR_Box) (hlds__instmap__Var_17));
#line 962 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_44_44, 1) = ((MR_Box) (hlds__instmap__ContextsInsts_28));
#line 962 "instmap.m"
            }
#line 962 "instmap.m"
            {
#line 962 "instmap.m"
              MR_Word base;
#line 962 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 962 "instmap.m"
              *hlds__instmap__HeadVar__8_8 = base;
#line 962 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__V_44_44));
#line 962 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_ErrorList_37_37));
#line 962 "instmap.m"
            }
#line 963 "instmap.m"
            {
#line 963 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], hlds__instmap__TypeCtorInfo_50_50, ((MR_Box) (hlds__instmap__Var_17)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), hlds__instmap__STATE_VARIABLE_InstMapping_35_35, hlds__instmap__HeadVar__5_5);
#line 963 "instmap.m"
              return;
            }
#line 959 "instmap.m"
          }
#line 964 "instmap.m"
        else
#line 965 "instmap.m"
          {
#line 965 "instmap.m"
            MR_Word hlds__instmap__Inst_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MaybeInst_26, (MR_Integer) 0)));

#line 966 "instmap.m"
            {
#line 966 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], hlds__instmap__TypeCtorInfo_50_50, ((MR_Box) (hlds__instmap__Var_17)), ((MR_Box) (hlds__instmap__Inst_29)), hlds__instmap__STATE_VARIABLE_InstMapping_35_35, hlds__instmap__HeadVar__5_5);
            }
#line 965 "instmap.m"
            *hlds__instmap__HeadVar__8_8 = hlds__instmap__STATE_VARIABLE_ErrorList_37_37;
#line 965 "instmap.m"
          }
#line 952 "instmap.m"
      }
#line 950 "instmap.m"
  }
#line 946 "instmap.m"
}

#line 912 "instmap.m"
static void MR_CALL 
hlds__instmap__get_reachable_instmaps_2_p_0(
#line 912 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 912 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__2_2)
#line 912 "instmap.m"
{
#line 915 "instmap.m"
  while (MR_TRUE)
#line 915 "instmap.m"
    {
#line 915 "instmap.m"
      /* tailcall optimized into a loop */
#line 915 "instmap.m"
      {
#line 915 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 915 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 915 "instmap.m"
          *hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 915 "instmap.m"
        else
#line 916 "instmap.m"
          {
#line 916 "instmap.m"
            MR_Word hlds__instmap__ArmInstMap_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 916 "instmap.m"
            MR_Word hlds__instmap__ArmInstMaps_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 916 "instmap.m"
            MR_Word hlds__instmap__InstMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmInstMap_3, (MR_Integer) 1)));
#line 917 "instmap.m"
            MR_Word hlds__instmap__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmInstMap_3, (MR_Integer) 0)));

#line 922 "instmap.m"
            if ((hlds__instmap__InstMap_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 924 "instmap.m"
              {
#line 924 "instmap.m"
                /* direct tailcall eliminated */
#line 924 "instmap.m"
                {
#line 924 "instmap.m"
                  MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__ArmInstMaps_4;

#line 924 "instmap.m"
                  hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 924 "instmap.m"
                }
#line 924 "instmap.m"
                continue;
#line 924 "instmap.m"
              }
#line 922 "instmap.m"
            else
#line 919 "instmap.m"
              {
#line 919 "instmap.m"
                MR_Word hlds__instmap__InstMapping_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap_7, (MR_Integer) 0)));
#line 919 "instmap.m"
                MR_Word hlds__instmap__ReachablesTail_9;

#line 920 "instmap.m"
                {
#line 920 "instmap.m"
                  hlds__instmap__get_reachable_instmaps_2_p_0(hlds__instmap__ArmInstMaps_4, &hlds__instmap__ReachablesTail_9);
                }
#line 921 "instmap.m"
                {
#line 921 "instmap.m"
                  MR_Word base;
#line 921 "instmap.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 921 "instmap.m"
                  *hlds__instmap__HeadVar__2_2 = base;
#line 921 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_8));
#line 921 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__ReachablesTail_9));
#line 921 "instmap.m"
                }
#line 919 "instmap.m"
              }
#line 916 "instmap.m"
          }
#line 915 "instmap.m"
      }
#line 915 "instmap.m"
      break;
#line 915 "instmap.m"
    }
#line 912 "instmap.m"
}

#line 768 "instmap.m"
static void MR_CALL 
hlds__instmap__bind_inst_to_functors_others_6_p_0(
#line 768 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 768 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 768 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 768 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4,
#line 768 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5,
#line 768 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_6)
#line 768 "instmap.m"
{
#line 772 "instmap.m"
  {
#line 772 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 772 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 772 "instmap.m"
      {
#line 772 "instmap.m"
        *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 772 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_6 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5;
#line 772 "instmap.m"
      }
#line 772 "instmap.m"
    else
#line 774 "instmap.m"
      {
#line 774 "instmap.m"
        MR_Word hlds__instmap__ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 774 "instmap.m"
        MR_Word hlds__instmap__ConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 774 "instmap.m"
        MR_Word hlds__instmap__FinalInst_16;
#line 774 "instmap.m"
        MR_Word hlds__instmap__FinalInsts_17;
#line 774 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21;
#line 774 "instmap.m"
        MR_Integer hlds__instmap__Arity_31;
#line 774 "instmap.m"
        MR_Word hlds__instmap__ArgLives_32;
#line 774 "instmap.m"
        MR_Word hlds__instmap__ArgInsts_33;
#line 741 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_39;
#line 741 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_40;
#line 737 "instmap.m"
        MR_Word hlds__instmap___Det_34;

#line 733 "instmap.m"
        {
#line 733 "instmap.m"
          hlds__instmap__Arity_31 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5, hlds__instmap__HeadVar__1_1, hlds__instmap__ConsId_13);
        }
#line 734 "instmap.m"
        {
#line 734 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_31, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_32);
        }
#line 735 "instmap.m"
        {
#line 735 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_31, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_33);
        }
#line 737 "instmap.m"
        {
#line 737 "instmap.m"
          hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__HeadVar__3_3, hlds__instmap__ConsId_13, hlds__instmap__ArgInsts_33, hlds__instmap__ArgLives_32, (MR_Integer) 0, hlds__instmap__HeadVar__1_1, &hlds__instmap__STATE_VARIABLE_Inst_23_39, &hlds__instmap___Det_34, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_40);
        }
#line 741 "instmap.m"
        if (hlds__instmap__succeeded)
#line 740 "instmap.m"
          {
#line 740 "instmap.m"
            hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_40;
#line 740 "instmap.m"
            hlds__instmap__FinalInst_16 = hlds__instmap__STATE_VARIABLE_Inst_23_39;
#line 740 "instmap.m"
          }
#line 741 "instmap.m"
        else
#line 742 "instmap.m"
          {
#line 742 "instmap.m"
            {
#line 742 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
#line 742 "instmap.m"
              return;
            }
#line 742 "instmap.m"
          }
#line 776 "instmap.m"
        {
#line 776 "instmap.m"
          hlds__instmap__bind_inst_to_functors_others_6_p_0(hlds__instmap__HeadVar__1_1, hlds__instmap__ConsIds_14, hlds__instmap__HeadVar__3_3, &hlds__instmap__FinalInsts_17, hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21, hlds__instmap__STATE_VARIABLE_ModuleInfo_6);
        }
#line 774 "instmap.m"
        {
#line 774 "instmap.m"
          MR_Word base;
#line 774 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 774 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = base;
#line 774 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__FinalInst_16));
#line 774 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__FinalInsts_17));
#line 774 "instmap.m"
        }
#line 774 "instmap.m"
      }
#line 772 "instmap.m"
  }
#line 768 "instmap.m"
}

#line 622 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_same_4_p_0(
#line 622 "instmap.m"
  MR_Word hlds__instmap__Inst_1,
#line 622 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 622 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_3,
#line 622 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_4)
#line 622 "instmap.m"
{
#line 625 "instmap.m"
  while (MR_TRUE)
#line 625 "instmap.m"
    {
#line 625 "instmap.m"
      /* tailcall optimized into a loop */
#line 625 "instmap.m"
      {
#line 625 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 625 "instmap.m"
        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 625 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMapping_4 = hlds__instmap__STATE_VARIABLE_InstMapping_0_3;
#line 625 "instmap.m"
        else
#line 626 "instmap.m"
          {
#line 626 "instmap.m"
            MR_Word hlds__instmap__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 626 "instmap.m"
            MR_Word hlds__instmap__Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 626 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_15_15;

#line 627 "instmap.m"
            {
#line 627 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_10)), ((MR_Box) (hlds__instmap__Inst_1)), hlds__instmap__STATE_VARIABLE_InstMapping_0_3, &hlds__instmap__STATE_VARIABLE_InstMapping_15_15);
            }
#line 628 "instmap.m"
            /* direct tailcall eliminated */
#line 628 "instmap.m"
            {
#line 628 "instmap.m"
              MR_Word hlds__instmap__HeadVar__2__tmp_copy_2 = hlds__instmap__Vars_11;
#line 628 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_3 = hlds__instmap__STATE_VARIABLE_InstMapping_15_15;

#line 628 "instmap.m"
              hlds__instmap__STATE_VARIABLE_InstMapping_0_3 = hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_3;
#line 628 "instmap.m"
              hlds__instmap__HeadVar__2_2 = hlds__instmap__HeadVar__2__tmp_copy_2;
#line 628 "instmap.m"
            }
#line 628 "instmap.m"
            continue;
#line 626 "instmap.m"
          }
#line 625 "instmap.m"
      }
#line 625 "instmap.m"
      break;
#line 625 "instmap.m"
    }
#line 622 "instmap.m"
}

#line 602 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_2(
#line 602 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 602 "instmap.m"
{
#line 602 "instmap.m"
  {
#line 602 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 602 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 602 "instmap.m"
    {
#line 602 "instmap.m"
      return hlds__instmap__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))));
    }
#line 602 "instmap.m"
    return hlds__instmap__succeeded;
#line 602 "instmap.m"
  }
#line 602 "instmap.m"
}

#line 602 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_1(
#line 602 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 602 "instmap.m"
{
#line 602 "instmap.m"
  {
#line 602 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 602 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 602 "instmap.m"
    {
#line 602 "instmap.m"
      return hlds__instmap__succeeded = hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__602__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))));
    }
#line 602 "instmap.m"
    return hlds__instmap__succeeded;
#line 602 "instmap.m"
  }
#line 602 "instmap.m"
}

#line 595 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0(
#line 595 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 595 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 595 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 595 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 595 "instmap.m"
{
#line 599 "instmap.m"
  while (MR_TRUE)
#line 599 "instmap.m"
    {
#line 599 "instmap.m"
      /* tailcall optimized into a loop */
#line 599 "instmap.m"
      {
#line 599 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 599 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 599 "instmap.m"
          if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 599 "instmap.m"
            *hlds__instmap__HeadVar__4_4 = hlds__instmap__HeadVar__3_3;
#line 599 "instmap.m"
          else
#line 607 "instmap.m"
            {
#line 608 "instmap.m"
              {
#line 608 "instmap.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmapping_set_vars_corresponding\'/4", (MR_String) "length mismatch (2)");
#line 608 "instmap.m"
                return;
              }
#line 607 "instmap.m"
            }
#line 599 "instmap.m"
        else
#line 599 "instmap.m"
          {
#line 599 "instmap.m"
            MR_Word hlds__instmap__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 599 "instmap.m"
            MR_Word hlds__instmap__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 599 "instmap.m"
            if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 605 "instmap.m"
              {
#line 606 "instmap.m"
                {
#line 606 "instmap.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmapping_set_vars_corresponding\'/4", (MR_String) "length mismatch (1)");
#line 606 "instmap.m"
                  return;
                }
#line 605 "instmap.m"
              }
#line 599 "instmap.m"
            else
#line 601 "instmap.m"
              {
#line 601 "instmap.m"
                MR_Word hlds__instmap__Inst_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 601 "instmap.m"
                MR_Word hlds__instmap__Insts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 601 "instmap.m"
                MR_Word hlds__instmap__V_15_15;
#line 601 "instmap.m"
                MR_Word hlds__instmap__V_19_19;
#line 601 "instmap.m"
                MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_21_21;

#line 602 "instmap.m"
                {
#line 602 "instmap.m"
                  hlds__instmap__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 602 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_19_19, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
#line 602 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_19_19, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_corresponding_4_p_0_1));
#line 602 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 602 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_19_19, 3) = ((MR_Box) (hlds__instmap__Inst_10));
#line 602 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_19_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 602 "instmap.m"
                }
#line 602 "instmap.m"
                {
#line 602 "instmap.m"
                  hlds__instmap__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 602 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
#line 602 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_corresponding_4_p_0_2));
#line 602 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 602 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 3) = ((MR_Box) (hlds__instmap__V_19_19));
#line 602 "instmap.m"
                }
#line 602 "instmap.m"
                {
#line 602 "instmap.m"
                  mercury__require__expect_4_p_0(hlds__instmap__V_15_15, (MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmapping_set_vars_corresponding\'/4", (MR_String) "not_reached");
                }
#line 603 "instmap.m"
                {
#line 603 "instmap.m"
                  mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__V_43_43)), ((MR_Box) (hlds__instmap__Inst_10)), hlds__instmap__HeadVar__3_3, &hlds__instmap__STATE_VARIABLE_InstMapping_21_21);
                }
#line 604 "instmap.m"
                /* direct tailcall eliminated */
#line 604 "instmap.m"
                {
#line 604 "instmap.m"
                  MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__V_42_42;
#line 604 "instmap.m"
                  MR_Word hlds__instmap__HeadVar__2__tmp_copy_2 = hlds__instmap__Insts_11;
#line 604 "instmap.m"
                  MR_Word hlds__instmap__HeadVar__3__tmp_copy_3 = hlds__instmap__STATE_VARIABLE_InstMapping_21_21;

#line 604 "instmap.m"
                  hlds__instmap__HeadVar__3_3 = hlds__instmap__HeadVar__3__tmp_copy_3;
#line 604 "instmap.m"
                  hlds__instmap__HeadVar__2_2 = hlds__instmap__HeadVar__2__tmp_copy_2;
#line 604 "instmap.m"
                  hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 604 "instmap.m"
                }
#line 604 "instmap.m"
                continue;
#line 601 "instmap.m"
              }
#line 599 "instmap.m"
          }
#line 599 "instmap.m"
      }
#line 599 "instmap.m"
      break;
#line 599 "instmap.m"
    }
#line 595 "instmap.m"
}

#line 580 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_2(
#line 580 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 580 "instmap.m"
{
#line 580 "instmap.m"
  {
#line 580 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 580 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 580 "instmap.m"
    {
#line 580 "instmap.m"
      return hlds__instmap__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))));
    }
#line 580 "instmap.m"
    return hlds__instmap__succeeded;
#line 580 "instmap.m"
  }
#line 580 "instmap.m"
}

#line 580 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_1(
#line 580 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 580 "instmap.m"
{
#line 580 "instmap.m"
  {
#line 580 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 580 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 580 "instmap.m"
    {
#line 580 "instmap.m"
      return hlds__instmap__succeeded = hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__580__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))));
    }
#line 580 "instmap.m"
    return hlds__instmap__succeeded;
#line 580 "instmap.m"
  }
#line 580 "instmap.m"
}

#line 575 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0(
#line 575 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 575 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_2,
#line 575 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_3)
#line 575 "instmap.m"
{
#line 578 "instmap.m"
  while (MR_TRUE)
#line 578 "instmap.m"
    {
#line 578 "instmap.m"
      /* tailcall optimized into a loop */
#line 578 "instmap.m"
      {
#line 578 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 578 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 578 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMapping_3 = hlds__instmap__STATE_VARIABLE_InstMapping_0_2;
#line 578 "instmap.m"
        else
#line 579 "instmap.m"
          {
#line 579 "instmap.m"
            MR_Word hlds__instmap__Var_7;
#line 579 "instmap.m"
            MR_Word hlds__instmap__Inst_8;
#line 579 "instmap.m"
            MR_Word hlds__instmap__VarsInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 579 "instmap.m"
            MR_Word hlds__instmap__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 579 "instmap.m"
            MR_Word hlds__instmap__V_14_14;
#line 579 "instmap.m"
            MR_Word hlds__instmap__V_18_18;
#line 579 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_20_20;

#line 579 "instmap.m"
            hlds__instmap__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_13_13, (MR_Integer) 0)));
#line 579 "instmap.m"
            hlds__instmap__Inst_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_13_13, (MR_Integer) 1)));
#line 580 "instmap.m"
            {
#line 580 "instmap.m"
              hlds__instmap__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 580 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_18_18, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
#line 580 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_18_18, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_3_p_0_1));
#line 580 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 580 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_18_18, 3) = ((MR_Box) (hlds__instmap__Inst_8));
#line 580 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_18_18, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 580 "instmap.m"
            }
#line 580 "instmap.m"
            {
#line 580 "instmap.m"
              hlds__instmap__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 580 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_14_14, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
#line 580 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_14_14, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_3_p_0_2));
#line 580 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 580 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_14_14, 3) = ((MR_Box) (hlds__instmap__V_18_18));
#line 580 "instmap.m"
            }
#line 580 "instmap.m"
            {
#line 580 "instmap.m"
              mercury__require__expect_4_p_0(hlds__instmap__V_14_14, (MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmapping_set_vars\'/3", (MR_String) "not_reached");
            }
#line 581 "instmap.m"
            {
#line 581 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_7)), ((MR_Box) (hlds__instmap__Inst_8)), hlds__instmap__STATE_VARIABLE_InstMapping_0_2, &hlds__instmap__STATE_VARIABLE_InstMapping_20_20);
            }
#line 582 "instmap.m"
            /* direct tailcall eliminated */
#line 582 "instmap.m"
            {
#line 582 "instmap.m"
              MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__VarsInsts_9;
#line 582 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_2 = hlds__instmap__STATE_VARIABLE_InstMapping_20_20;

#line 582 "instmap.m"
              hlds__instmap__STATE_VARIABLE_InstMapping_0_2 = hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_2;
#line 582 "instmap.m"
              hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 582 "instmap.m"
            }
#line 582 "instmap.m"
            continue;
#line 579 "instmap.m"
          }
#line 578 "instmap.m"
      }
#line 578 "instmap.m"
      break;
#line 578 "instmap.m"
    }
#line 575 "instmap.m"
}

#line 508 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_changed_vars_2_6_p_0(
#line 508 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 508 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 508 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 508 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 508 "instmap.m"
  MR_Word hlds__instmap__HeadVar__5_5,
#line 508 "instmap.m"
  MR_Word * hlds__instmap__ChangedVars_6)
#line 508 "instmap.m"
{
#line 512 "instmap.m"
  {
#line 512 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 512 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "instmap.m"
      {
#line 513 "instmap.m"
        {
#line 513 "instmap.m"
          parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__ChangedVars_6);
#line 513 "instmap.m"
          return;
        }
#line 512 "instmap.m"
      }
#line 512 "instmap.m"
    else
#line 515 "instmap.m"
      {
#line 515 "instmap.m"
        MR_Word hlds__instmap__VarB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 515 "instmap.m"
        MR_Word hlds__instmap__VarBs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 515 "instmap.m"
        MR_Word hlds__instmap__ChangedVars0_19;
#line 515 "instmap.m"
        MR_Word hlds__instmap__InitialInst_20;
#line 515 "instmap.m"
        MR_Word hlds__instmap__FinalInst_21;
#line 515 "instmap.m"
        MR_Word hlds__instmap__Type_22;

#line 516 "instmap.m"
        {
#line 516 "instmap.m"
          hlds__instmap__instmap_changed_vars_2_6_p_0(hlds__instmap__VarBs_13, hlds__instmap__HeadVar__2_2, hlds__instmap__HeadVar__3_3, hlds__instmap__HeadVar__4_4, hlds__instmap__HeadVar__5_5, &hlds__instmap__ChangedVars0_19);
        }
#line 519 "instmap.m"
        {
#line 519 "instmap.m"
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__HeadVar__2_2, hlds__instmap__VarB_12, &hlds__instmap__InitialInst_20);
        }
#line 520 "instmap.m"
        {
#line 520 "instmap.m"
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__HeadVar__3_3, hlds__instmap__VarB_12, &hlds__instmap__FinalInst_21);
        }
#line 521 "instmap.m"
        {
#line 521 "instmap.m"
          hlds__vartypes__lookup_var_type_3_p_0(hlds__instmap__HeadVar__4_4, hlds__instmap__VarB_12, &hlds__instmap__Type_22);
        }
#line 523 "instmap.m"
        {
#line 523 "instmap.m"
          hlds__instmap__succeeded = check_hlds__inst_match__inst_matches_final_typed_4_p_0(hlds__instmap__InitialInst_20, hlds__instmap__FinalInst_21, hlds__instmap__Type_22, hlds__instmap__HeadVar__5_5);
        }
#line 525 "instmap.m"
        if (hlds__instmap__succeeded)
#line 524 "instmap.m"
          *hlds__instmap__ChangedVars_6 = hlds__instmap__ChangedVars0_19;
#line 525 "instmap.m"
        else
#line 526 "instmap.m"
          {
#line 526 "instmap.m"
            {
#line 526 "instmap.m"
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__VarB_12, hlds__instmap__ChangedVars0_19, hlds__instmap__ChangedVars_6);
#line 526 "instmap.m"
              return;
            }
#line 526 "instmap.m"
          }
#line 515 "instmap.m"
      }
#line 512 "instmap.m"
  }
#line 508 "instmap.m"
}

#line 485 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_bound_vars_2_5_p_0(
#line 485 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 485 "instmap.m"
  MR_Word hlds__instmap__Var_7,
#line 485 "instmap.m"
  MR_Word hlds__instmap__Inst_8,
#line 485 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_BoundVars_0_10,
#line 485 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_BoundVars_11)
#line 485 "instmap.m"
{
#line 491 "instmap.m"
  {
#line 491 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 489 "instmap.m"
    {
#line 489 "instmap.m"
      hlds__instmap__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(hlds__instmap__ModuleInfo_6, hlds__instmap__Inst_8);
    }
#line 491 "instmap.m"
    if (hlds__instmap__succeeded)
#line 490 "instmap.m"
      {
#line 490 "instmap.m"
        {
#line 490 "instmap.m"
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Var_7, hlds__instmap__STATE_VARIABLE_BoundVars_0_10, hlds__instmap__STATE_VARIABLE_BoundVars_11);
#line 490 "instmap.m"
          return;
        }
#line 490 "instmap.m"
      }
#line 491 "instmap.m"
    else
#line 491 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_BoundVars_11 = hlds__instmap__STATE_VARIABLE_BoundVars_0_10;
#line 491 "instmap.m"
  }
#line 485 "instmap.m"
}

#line 466 "instmap.m"
static MR_Word MR_CALL 
hlds__instmap__pair_with_ground_1_f_0(
#line 466 "instmap.m"
  MR_Word hlds__instmap__Var_3)
#line 466 "instmap.m"
{
#line 468 "instmap.m"
  {
#line 468 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 468 "instmap.m"
    MR_Word hlds__instmap__HeadVar__2_2;

#line 468 "instmap.m"
    {
#line 468 "instmap.m"
      hlds__instmap__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 468 "instmap.m"
      MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, 0) = ((MR_Box) (hlds__instmap__Var_3));
#line 468 "instmap.m"
      MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__instmap_scalar_common_2[2])));
#line 468 "instmap.m"
    }
#line 468 "instmap.m"
    return hlds__instmap__HeadVar__2_2;
#line 468 "instmap.m"
  }
#line 466 "instmap.m"
}

#line 433 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_delta_from_mode_list_2_5_p_0(
#line 433 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 433 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 433 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_3,
#line 433 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4,
#line 433 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapDelta_5)
#line 433 "instmap.m"
{
#line 436 "instmap.m"
  while (MR_TRUE)
#line 436 "instmap.m"
    {
#line 436 "instmap.m"
      /* tailcall optimized into a loop */
#line 436 "instmap.m"
      {
#line 436 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 436 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 436 "instmap.m"
          if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 436 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_InstMapDelta_5 = hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4;
#line 436 "instmap.m"
          else
#line 437 "instmap.m"
            {
#line 438 "instmap.m"
              {
#line 438 "instmap.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_delta_from_mode_list_2\'/5", (MR_String) "length mismatch");
#line 438 "instmap.m"
                return;
              }
#line 437 "instmap.m"
            }
#line 436 "instmap.m"
        else
#line 436 "instmap.m"
          {
#line 436 "instmap.m"
            MR_Word hlds__instmap__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 436 "instmap.m"
            MR_Word hlds__instmap__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 436 "instmap.m"
            if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 439 "instmap.m"
              {
#line 440 "instmap.m"
                {
#line 440 "instmap.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_delta_from_mode_list_2\'/5", (MR_String) "length mismatch");
#line 440 "instmap.m"
                  return;
                }
#line 439 "instmap.m"
              }
#line 436 "instmap.m"
            else
#line 442 "instmap.m"
              {
#line 442 "instmap.m"
                MR_Word hlds__instmap__Mode_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 442 "instmap.m"
                MR_Word hlds__instmap__Modes_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 442 "instmap.m"
                MR_Word hlds__instmap__Inst1_34;
#line 442 "instmap.m"
                MR_Word hlds__instmap__Inst2_35;

#line 443 "instmap.m"
                {
#line 443 "instmap.m"
                  check_hlds__mode_util__mode_get_insts_4_p_0(hlds__instmap__ModuleInfo_3, hlds__instmap__Mode_30, &hlds__instmap__Inst1_34, &hlds__instmap__Inst2_35);
                }
#line 444 "instmap.m"
                {
#line 444 "instmap.m"
                  hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst1_34, hlds__instmap__Inst2_35);
                }
#line 446 "instmap.m"
                if (hlds__instmap__succeeded)
#line 445 "instmap.m"
                  {
#line 445 "instmap.m"
                    /* direct tailcall eliminated */
#line 445 "instmap.m"
                    {
#line 445 "instmap.m"
                      MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__V_41_41;
#line 445 "instmap.m"
                      MR_Word hlds__instmap__HeadVar__2__tmp_copy_2 = hlds__instmap__Modes_31;

#line 445 "instmap.m"
                      hlds__instmap__HeadVar__2_2 = hlds__instmap__HeadVar__2__tmp_copy_2;
#line 445 "instmap.m"
                      hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 445 "instmap.m"
                    }
#line 445 "instmap.m"
                    continue;
#line 445 "instmap.m"
                  }
#line 446 "instmap.m"
                else
#line 447 "instmap.m"
                  {
#line 447 "instmap.m"
                    MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_39_39;

#line 447 "instmap.m"
                    {
#line 447 "instmap.m"
                      hlds__instmap__instmap_delta_set_var_4_p_0(hlds__instmap__V_42_42, hlds__instmap__Inst2_35, hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4, &hlds__instmap__STATE_VARIABLE_InstMapDelta_39_39);
                    }
#line 448 "instmap.m"
                    /* direct tailcall eliminated */
#line 448 "instmap.m"
                    {
#line 448 "instmap.m"
                      MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__V_41_41;
#line 448 "instmap.m"
                      MR_Word hlds__instmap__HeadVar__2__tmp_copy_2 = hlds__instmap__Modes_31;
#line 448 "instmap.m"
                      MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_0__tmp_copy_4 = hlds__instmap__STATE_VARIABLE_InstMapDelta_39_39;

#line 448 "instmap.m"
                      hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4 = hlds__instmap__STATE_VARIABLE_InstMapDelta_0__tmp_copy_4;
#line 448 "instmap.m"
                      hlds__instmap__HeadVar__2_2 = hlds__instmap__HeadVar__2__tmp_copy_2;
#line 448 "instmap.m"
                      hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 448 "instmap.m"
                    }
#line 448 "instmap.m"
                    continue;
#line 447 "instmap.m"
                  }
#line 442 "instmap.m"
              }
#line 436 "instmap.m"
          }
#line 436 "instmap.m"
      }
#line 436 "instmap.m"
      break;
#line 436 "instmap.m"
    }
#line 433 "instmap.m"
}

#line 355 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__var_is_bound_in_instmap_delta_4_p_0(
#line 355 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_5,
#line 355 "instmap.m"
  MR_Word hlds__instmap__InstMap_6,
#line 355 "instmap.m"
  MR_Word hlds__instmap__InstMapDelta_7,
#line 355 "instmap.m"
  MR_Word hlds__instmap__Var_8)
#line 355 "instmap.m"
{
#line 1397 "instmap.m"
  {
#line 1397 "instmap.m"
    MR_bool hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__InstMap_6)) == (MR_mktag((MR_Integer) 1)));
#line 1397 "instmap.m"
    MR_Word hlds__instmap__TypeInfo_8_17;
#line 1397 "instmap.m"
    MR_Word hlds__instmap__TypeCtorInfo_9_18;
#line 1397 "instmap.m"
    MR_Word hlds__instmap__OldVarInst_9;
#line 1397 "instmap.m"
    MR_Word hlds__instmap__VarInst_10;
#line 1397 "instmap.m"
    MR_Word hlds__instmap__InstMap_14;
#line 1397 "instmap.m"
    MR_Word hlds__instmap__InstMap_20;
#line 409 "instmap.m"
    MR_Word hlds__instmap__V_12_12;
#line 541 "instmap.m"
    MR_Word hlds__instmap__VarInst_26;
#line 539 "instmap.m"
    MR_Word hlds__instmap__TypeInfo_8_27;
#line 539 "instmap.m"
    MR_Word hlds__instmap__TypeCtorInfo_9_28;
#line 539 "instmap.m"
    MR_Box hlds__instmap__conv0_VarInst_26;
#line 547 "instmap.m"
    MR_Box hlds__instmap__conv1_VarInst_10;

#line 405 "instmap.m"
    if (hlds__instmap__succeeded)
#line 405 "instmap.m"
      {
#line 405 "instmap.m"
        hlds__instmap__InstMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap_6, (MR_Integer) 0)));
#line 409 "instmap.m"
        hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__InstMapDelta_7)) == (MR_mktag((MR_Integer) 1)));
#line 409 "instmap.m"
        if (hlds__instmap__succeeded)
#line 409 "instmap.m"
          {
#line 409 "instmap.m"
            hlds__instmap__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_7, (MR_Integer) 0)));
#line 5035 "hlds.instmap.c"
            hlds__instmap__TypeInfo_8_27 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 5037 "hlds.instmap.c"
            hlds__instmap__TypeCtorInfo_9_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 539 "instmap.m"
            {
#line 539 "instmap.m"
              hlds__instmap__succeeded = mercury__map__search_3_p_0(hlds__instmap__TypeInfo_8_27, hlds__instmap__TypeCtorInfo_9_28, hlds__instmap__InstMap_20, ((MR_Box) (hlds__instmap__Var_8)), &hlds__instmap__conv0_VarInst_26);
            }
#line 539 "instmap.m"
            if (hlds__instmap__succeeded)
#line 539 "instmap.m"
              {
#line 539 "instmap.m"
                hlds__instmap__VarInst_26 = ((MR_Word) hlds__instmap__conv0_VarInst_26);
#line 539 "instmap.m"
                hlds__instmap__succeeded = MR_TRUE;
#line 539 "instmap.m"
              }
#line 541 "instmap.m"
            if (hlds__instmap__succeeded)
#line 540 "instmap.m"
              hlds__instmap__OldVarInst_9 = hlds__instmap__VarInst_26;
#line 541 "instmap.m"
            else
#line 542 "instmap.m"
              hlds__instmap__OldVarInst_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1401 "instmap.m"
            {
#line 1401 "instmap.m"
              hlds__instmap__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(hlds__instmap__ModuleInfo_5, hlds__instmap__OldVarInst_9);
            }
#line 1397 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1397 "instmap.m"
              {
#line 546 "instmap.m"
                hlds__instmap__InstMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_7, (MR_Integer) 0)));
#line 5073 "hlds.instmap.c"
                hlds__instmap__TypeInfo_8_17 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 5075 "hlds.instmap.c"
                hlds__instmap__TypeCtorInfo_9_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 547 "instmap.m"
                {
#line 547 "instmap.m"
                  hlds__instmap__succeeded = mercury__map__search_3_p_0(hlds__instmap__TypeInfo_8_17, hlds__instmap__TypeCtorInfo_9_18, hlds__instmap__InstMap_14, ((MR_Box) (hlds__instmap__Var_8)), &hlds__instmap__conv1_VarInst_10);
                }
#line 547 "instmap.m"
                if (hlds__instmap__succeeded)
#line 547 "instmap.m"
                  {
#line 547 "instmap.m"
                    hlds__instmap__VarInst_10 = ((MR_Word) hlds__instmap__conv1_VarInst_10);
#line 547 "instmap.m"
                    hlds__instmap__succeeded = MR_TRUE;
#line 547 "instmap.m"
                  }
#line 1397 "instmap.m"
                if (hlds__instmap__succeeded)
#line 1403 "instmap.m"
                  {
#line 1403 "instmap.m"
                    return hlds__instmap__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(hlds__instmap__ModuleInfo_5, hlds__instmap__VarInst_10);
                  }
#line 1397 "instmap.m"
              }
#line 409 "instmap.m"
          }
#line 405 "instmap.m"
      }
#line 1397 "instmap.m"
    return hlds__instmap__succeeded;
#line 1397 "instmap.m"
  }
#line 355 "instmap.m"
}

#line 345 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__var_is_any_in_instmap_3_p_0(
#line 345 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_4,
#line 345 "instmap.m"
  MR_Word hlds__instmap__InstMap_5,
#line 345 "instmap.m"
  MR_Word hlds__instmap__Var_6)
#line 345 "instmap.m"
{
#line 1393 "instmap.m"
  {
#line 1393 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 1393 "instmap.m"
    MR_Word hlds__instmap__Inst_7;

#line 1394 "instmap.m"
    {
#line 1394 "instmap.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_5, hlds__instmap__Var_6, &hlds__instmap__Inst_7);
    }
#line 1395 "instmap.m"
    {
#line 1395 "instmap.m"
      return hlds__instmap__succeeded = check_hlds__inst_match__inst_is_any_2_p_0(hlds__instmap__ModuleInfo_4, hlds__instmap__Inst_7);
    }
#line 1393 "instmap.m"
    return hlds__instmap__succeeded;
#line 1393 "instmap.m"
  }
#line 345 "instmap.m"
}

#line 342 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__var_is_ground_in_instmap_3_p_0(
#line 342 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_4,
#line 342 "instmap.m"
  MR_Word hlds__instmap__InstMap_5,
#line 342 "instmap.m"
  MR_Word hlds__instmap__Var_6)
#line 342 "instmap.m"
{
#line 1389 "instmap.m"
  {
#line 1389 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 1389 "instmap.m"
    MR_Word hlds__instmap__Inst_7;

#line 1390 "instmap.m"
    {
#line 1390 "instmap.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_5, hlds__instmap__Var_6, &hlds__instmap__Inst_7);
    }
#line 1391 "instmap.m"
    {
#line 1391 "instmap.m"
      return hlds__instmap__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(hlds__instmap__ModuleInfo_4, hlds__instmap__Inst_7);
    }
#line 1389 "instmap.m"
    return hlds__instmap__succeeded;
#line 1389 "instmap.m"
  }
#line 342 "instmap.m"
}

#line 337 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_map_foldl_5_p_0(
#line 337 "instmap.m"
  MR_Word hlds__instmap__TypeInfo_for_T_17,
#line 337 "instmap.m"
  MR_Word hlds__instmap__P_1,
#line 337 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 337 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3,
#line 337 "instmap.m"
  MR_Box hlds__instmap__STATE_VARIABLE_T_0_4,
#line 337 "instmap.m"
  MR_Box * hlds__instmap__STATE_VARIABLE_T_5)
#line 337 "instmap.m"
{
#line 421 "instmap.m"
  {
#line 421 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 421 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 421 "instmap.m"
      {
#line 421 "instmap.m"
        *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 421 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_T_5 = hlds__instmap__STATE_VARIABLE_T_0_4;
#line 421 "instmap.m"
      }
#line 421 "instmap.m"
    else
#line 423 "instmap.m"
      {
#line 423 "instmap.m"
        MR_Word hlds__instmap__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 423 "instmap.m"
        MR_Word hlds__instmap__Instmapping0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 423 "instmap.m"
        MR_Word hlds__instmap__Instmapping_12;

#line 424 "instmap.m"
        {
#line 424 "instmap.m"
          mercury__map__map_foldl_5_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], hlds__instmap__TypeCtorInfo_19_19, hlds__instmap__TypeCtorInfo_19_19, hlds__instmap__TypeInfo_for_T_17, hlds__instmap__P_1, hlds__instmap__Instmapping0_11, &hlds__instmap__Instmapping_12, hlds__instmap__STATE_VARIABLE_T_0_4, hlds__instmap__STATE_VARIABLE_T_5);
        }
#line 422 "instmap.m"
        {
#line 422 "instmap.m"
          MR_Word base;
#line 422 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 422 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = base;
#line 422 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Instmapping_12));
#line 422 "instmap.m"
        }
#line 423 "instmap.m"
      }
#line 421 "instmap.m"
  }
#line 337 "instmap.m"
}

#line 332 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_to_assoc_list_2_p_0(
#line 332 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 332 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__2_2)
#line 332 "instmap.m"
{
#line 1383 "instmap.m"
  {
#line 1383 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1383 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1383 "instmap.m"
      *hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1383 "instmap.m"
    else
#line 1384 "instmap.m"
      {
#line 1384 "instmap.m"
        MR_Word hlds__instmap__InstMapping_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 1385 "instmap.m"
        {
#line 1385 "instmap.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_3, hlds__instmap__HeadVar__2_2);
#line 1385 "instmap.m"
          return;
        }
#line 1384 "instmap.m"
      }
#line 1383 "instmap.m"
  }
#line 332 "instmap.m"
}

#line 329 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_to_assoc_list_2_p_0(
#line 329 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 329 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__2_2)
#line 329 "instmap.m"
{
#line 1379 "instmap.m"
  {
#line 1379 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1379 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1379 "instmap.m"
      *hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1379 "instmap.m"
    else
#line 1380 "instmap.m"
      {
#line 1380 "instmap.m"
        MR_Word hlds__instmap__InstMapping_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 1381 "instmap.m"
        {
#line 1381 "instmap.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_3, hlds__instmap__HeadVar__2_2);
#line 1381 "instmap.m"
          return;
        }
#line 1380 "instmap.m"
      }
#line 1379 "instmap.m"
  }
#line 329 "instmap.m"
}

#line 324 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_apply_sub_4_p_0(
#line 324 "instmap.m"
  MR_Word hlds__instmap__Must_5,
#line 324 "instmap.m"
  MR_Word hlds__instmap__Renaming_6,
#line 324 "instmap.m"
  MR_Word hlds__instmap__InstMap0_7,
#line 324 "instmap.m"
  MR_Word * hlds__instmap__InstMap_8)
#line 324 "instmap.m"
{
#line 1360 "instmap.m"
  {
#line 1360 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1360 "instmap.m"
    {
#line 1360 "instmap.m"
      hlds__instmap__instmap_delta_apply_sub_4_p_0(hlds__instmap__Must_5, hlds__instmap__Renaming_6, hlds__instmap__InstMap0_7, hlds__instmap__InstMap_8);
#line 1360 "instmap.m"
      return;
    }
#line 1360 "instmap.m"
  }
#line 324 "instmap.m"
}

#line 321 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_apply_sub_4_p_0(
#line 321 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 321 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 321 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 321 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 321 "instmap.m"
{
#line 1352 "instmap.m"
  {
#line 1352 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1352 "instmap.m"
    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1352 "instmap.m"
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1352 "instmap.m"
    else
#line 1354 "instmap.m"
      {
#line 1354 "instmap.m"
        MR_Word hlds__instmap__TypeInfo_13_13 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 1354 "instmap.m"
        MR_Word hlds__instmap__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1354 "instmap.m"
        MR_Word hlds__instmap__OldInstMapping_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));
#line 1354 "instmap.m"
        MR_Word hlds__instmap__InstMapping_10;
#line 1354 "instmap.m"
        MR_Word hlds__instmap__InstMappingAL_11;
#line 1354 "instmap.m"
        MR_Word hlds__instmap__V_12_12;

#line 1355 "instmap.m"
        {
#line 1355 "instmap.m"
          mercury__map__to_assoc_list_2_p_0(hlds__instmap__TypeInfo_13_13, hlds__instmap__TypeCtorInfo_14_14, hlds__instmap__OldInstMapping_9, &hlds__instmap__InstMappingAL_11);
        }
#line 1357 "instmap.m"
        {
#line 1357 "instmap.m"
          hlds__instmap__V_12_12 = mercury__map__init_0_f_0(hlds__instmap__TypeInfo_13_13, hlds__instmap__TypeCtorInfo_14_14);
        }
#line 1356 "instmap.m"
        {
#line 1356 "instmap.m"
          hlds__instmap__instmap_delta_apply_sub_2_5_p_0(hlds__instmap__InstMappingAL_11, hlds__instmap__HeadVar__1_1, hlds__instmap__HeadVar__2_2, hlds__instmap__V_12_12, &hlds__instmap__InstMapping_10);
        }
#line 1354 "instmap.m"
        {
#line 1354 "instmap.m"
          MR_Word base;
#line 1354 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1354 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = base;
#line 1354 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_10));
#line 1354 "instmap.m"
        }
#line 1354 "instmap.m"
      }
#line 1352 "instmap.m"
  }
#line 321 "instmap.m"
}

#line 308 "instmap.m"
void MR_CALL 
hlds__instmap__unify_instmap_delta_7_p_0(
#line 308 "instmap.m"
  MR_Word hlds__instmap__InstMap_1,
#line 308 "instmap.m"
  MR_Word hlds__instmap__NonLocals_2,
#line 308 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 308 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 308 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__5_5,
#line 308 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6,
#line 308 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_7)
#line 308 "instmap.m"
{
#line 1291 "instmap.m"
  {
#line 1291 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1291 "instmap.m"
    {
#line 1291 "instmap.m"
      hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_p_0(hlds__instmap__NonLocals_2, hlds__instmap__HeadVar__3_3, hlds__instmap__HeadVar__4_4, hlds__instmap__HeadVar__5_5, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6, hlds__instmap__STATE_VARIABLE_ModuleInfo_7);
#line 1291 "instmap.m"
      return;
    }
#line 1291 "instmap.m"
  }
#line 308 "instmap.m"
}

#line 298 "instmap.m"
void MR_CALL 
hlds__instmap__merge_instmap_deltas_7_p_0(
#line 298 "instmap.m"
  MR_Word hlds__instmap__InstMap_8,
#line 298 "instmap.m"
  MR_Word hlds__instmap__NonLocals_9,
#line 298 "instmap.m"
  MR_Word hlds__instmap__VarTypes_10,
#line 298 "instmap.m"
  MR_Word hlds__instmap__Deltas_11,
#line 298 "instmap.m"
  MR_Word * hlds__instmap__MergedDelta_12,
#line 298 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_18,
#line 298 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_19)
#line 298 "instmap.m"
{
#line 1079 "instmap.m"
  while (MR_TRUE)
#line 1079 "instmap.m"
    {
#line 1079 "instmap.m"
      /* tailcall optimized into a loop */
#line 1079 "instmap.m"
      {
#line 1079 "instmap.m"
        MR_bool hlds__instmap__succeeded;
#line 1079 "instmap.m"
        MR_Word hlds__instmap__MergedDeltas_14;
#line 1079 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21;

#line 1082 "instmap.m"
        {
#line 1082 "instmap.m"
          hlds__instmap__merge_instmap_deltas_2_8_p_0(hlds__instmap__InstMap_8, hlds__instmap__NonLocals_9, hlds__instmap__VarTypes_10, hlds__instmap__Deltas_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__instmap__MergedDeltas_14, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_18, &hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21);
        }
#line 1087 "instmap.m"
        if ((hlds__instmap__MergedDeltas_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1085 "instmap.m"
          {
#line 1086 "instmap.m"
            {
#line 1086 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.merge_instmap_deltas\'/7", (MR_String) "empty instmap_delta list.");
#line 1086 "instmap.m"
              return;
            }
#line 1085 "instmap.m"
          }
#line 1087 "instmap.m"
        else
#line 1087 "instmap.m"
          {
#line 1087 "instmap.m"
            MR_Word hlds__instmap__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MergedDeltas_14, (MR_Integer) 1)));
#line 1087 "instmap.m"
            MR_Word hlds__instmap__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MergedDeltas_14, (MR_Integer) 0)));

#line 1087 "instmap.m"
            if ((hlds__instmap__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1088 "instmap.m"
              {
#line 1088 "instmap.m"
                *hlds__instmap__MergedDelta_12 = hlds__instmap__V_29_29;
#line 1088 "instmap.m"
                *hlds__instmap__STATE_VARIABLE_ModuleInfo_19 = hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21;
#line 1088 "instmap.m"
              }
#line 1087 "instmap.m"
            else
#line 1091 "instmap.m"
              {
#line 1091 "instmap.m"
                /* direct tailcall eliminated */
#line 1091 "instmap.m"
                {
#line 1091 "instmap.m"
                  MR_Word hlds__instmap__Deltas__tmp_copy_11 = hlds__instmap__MergedDeltas_14;
#line 1091 "instmap.m"
                  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_18 = hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21;

#line 1091 "instmap.m"
                  hlds__instmap__STATE_VARIABLE_ModuleInfo_0_18 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_18;
#line 1091 "instmap.m"
                  hlds__instmap__Deltas_11 = hlds__instmap__Deltas__tmp_copy_11;
#line 1091 "instmap.m"
                }
#line 1091 "instmap.m"
                continue;
#line 1091 "instmap.m"
              }
#line 1087 "instmap.m"
          }
#line 1079 "instmap.m"
      }
#line 1079 "instmap.m"
      break;
#line 1079 "instmap.m"
    }
#line 298 "instmap.m"
}

#line 287 "instmap.m"
void MR_CALL 
hlds__instmap__merge_instmap_delta_8_p_0(
#line 287 "instmap.m"
  MR_Word hlds__instmap__InstMap_1,
#line 287 "instmap.m"
  MR_Word hlds__instmap__NonLocals_2,
#line 287 "instmap.m"
  MR_Word hlds__instmap__VarTypes_3,
#line 287 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 287 "instmap.m"
  MR_Word hlds__instmap__HeadVar__5_5,
#line 287 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__6_6,
#line 287 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7,
#line 287 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_8)
#line 287 "instmap.m"
{
#line 1213 "instmap.m"
  {
#line 1213 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1213 "instmap.m"
    if ((hlds__instmap__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1213 "instmap.m"
      {
#line 1213 "instmap.m"
        *hlds__instmap__HeadVar__6_6 = hlds__instmap__HeadVar__5_5;
#line 1214 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
#line 1213 "instmap.m"
      }
#line 1213 "instmap.m"
    else
#line 1213 "instmap.m"
      {
#line 1213 "instmap.m"
        MR_Word hlds__instmap__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__4_4, (MR_Integer) 0)));

#line 1213 "instmap.m"
        if ((hlds__instmap__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1215 "instmap.m"
          {
#line 1216 "instmap.m"
            *hlds__instmap__HeadVar__6_6 = hlds__instmap__HeadVar__4_4;
#line 1216 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
#line 1215 "instmap.m"
          }
#line 1213 "instmap.m"
        else
#line 1218 "instmap.m"
          {
#line 1218 "instmap.m"
            MR_Word hlds__instmap__TypeInfo_26_51 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 1218 "instmap.m"
            MR_Word hlds__instmap__TypeCtorInfo_27_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1218 "instmap.m"
            MR_Word hlds__instmap__TypeCtorInfo_28_53;
#line 1218 "instmap.m"
            MR_Word hlds__instmap__InstMappingB_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__5_5, (MR_Integer) 0)));
#line 1218 "instmap.m"
            MR_Word hlds__instmap__InstMapping_28;
#line 1218 "instmap.m"
            MR_Word hlds__instmap__VarsInA_43;
#line 1218 "instmap.m"
            MR_Word hlds__instmap__VarsInB_44;
#line 1218 "instmap.m"
            MR_Word hlds__instmap__SetofVarsInA_45;
#line 1218 "instmap.m"
            MR_Word hlds__instmap__SetofVars0_46;
#line 1218 "instmap.m"
            MR_Word hlds__instmap__SetofVars_47;
#line 1218 "instmap.m"
            MR_Word hlds__instmap__ListofVars_48;
#line 1218 "instmap.m"
            MR_Word hlds__instmap__V_49_49;

#line 1228 "instmap.m"
            {
#line 1228 "instmap.m"
              mercury__map__keys_2_p_0(hlds__instmap__TypeInfo_26_51, hlds__instmap__TypeCtorInfo_27_52, hlds__instmap__V_33_33, &hlds__instmap__VarsInA_43);
            }
#line 1229 "instmap.m"
            {
#line 1229 "instmap.m"
              mercury__map__keys_2_p_0(hlds__instmap__TypeInfo_26_51, hlds__instmap__TypeCtorInfo_27_52, hlds__instmap__InstMappingB_27, &hlds__instmap__VarsInB_44);
            }
#line 5663 "hlds.instmap.c"
            hlds__instmap__TypeCtorInfo_28_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1230 "instmap.m"
            {
#line 1230 "instmap.m"
              parse_tree__set_of_var__sorted_list_to_set_2_p_0(hlds__instmap__TypeCtorInfo_28_53, hlds__instmap__VarsInA_43, &hlds__instmap__SetofVarsInA_45);
            }
#line 1231 "instmap.m"
            {
#line 1231 "instmap.m"
              parse_tree__set_of_var__insert_list_3_p_0(hlds__instmap__TypeCtorInfo_28_53, hlds__instmap__VarsInB_44, hlds__instmap__SetofVarsInA_45, &hlds__instmap__SetofVars0_46);
            }
#line 1232 "instmap.m"
            {
#line 1232 "instmap.m"
              parse_tree__set_of_var__intersect_3_p_0(hlds__instmap__TypeCtorInfo_28_53, hlds__instmap__SetofVars0_46, hlds__instmap__NonLocals_2, &hlds__instmap__SetofVars_47);
            }
#line 1233 "instmap.m"
            {
#line 1233 "instmap.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__instmap__TypeCtorInfo_28_53, hlds__instmap__SetofVars_47, &hlds__instmap__ListofVars_48);
            }
#line 1235 "instmap.m"
            {
#line 1235 "instmap.m"
              hlds__instmap__V_49_49 = mercury__map__init_0_f_0(hlds__instmap__TypeInfo_26_51, hlds__instmap__TypeCtorInfo_27_52);
            }
#line 1234 "instmap.m"
            {
#line 1234 "instmap.m"
              hlds__instmap__merge_instmapping_delta_2_9_p_0(hlds__instmap__ListofVars_48, hlds__instmap__InstMap_1, hlds__instmap__VarTypes_3, hlds__instmap__V_33_33, hlds__instmap__InstMappingB_27, hlds__instmap__V_49_49, &hlds__instmap__InstMapping_28, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7, hlds__instmap__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1218 "instmap.m"
            {
#line 1218 "instmap.m"
              MR_Word base;
#line 1218 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "instmap.m"
              *hlds__instmap__HeadVar__6_6 = base;
#line 1218 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_28));
#line 1218 "instmap.m"
            }
#line 1218 "instmap.m"
          }
#line 1213 "instmap.m"
      }
#line 1213 "instmap.m"
  }
#line 287 "instmap.m"
}

#line 1176 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_no_output_vars_5_p_0_1(
#line 1176 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 1176 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1)
#line 1176 "instmap.m"
{
#line 1176 "instmap.m"
  {
#line 1176 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 1176 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 1176 "instmap.m"
    {
#line 1176 "instmap.m"
      return hlds__instmap__succeeded = hlds__instmap__var_is_not_output_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 6))), ((MR_Word) hlds__instmap__wrapper_arg_1));
    }
#line 1176 "instmap.m"
    return hlds__instmap__succeeded;
#line 1176 "instmap.m"
  }
#line 1176 "instmap.m"
}

#line 278 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__instmap_delta_no_output_vars_5_p_0(
#line 278 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 278 "instmap.m"
  MR_Word hlds__instmap__VarTypes_7,
#line 278 "instmap.m"
  MR_Word hlds__instmap__InstMap0_8,
#line 278 "instmap.m"
  MR_Word hlds__instmap__InstMapDelta_9,
#line 278 "instmap.m"
  MR_Word hlds__instmap__Vars_10)
#line 278 "instmap.m"
{
#line 1173 "instmap.m"
  {
#line 1173 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1173 "instmap.m"
    if ((hlds__instmap__InstMapDelta_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1173 "instmap.m"
      hlds__instmap__succeeded = MR_TRUE;
#line 1173 "instmap.m"
    else
#line 1175 "instmap.m"
      {
#line 1175 "instmap.m"
        MR_Word hlds__instmap__InstMapDeltaMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_9, (MR_Integer) 0)));
#line 1175 "instmap.m"
        MR_Word hlds__instmap__Test_12;

#line 1176 "instmap.m"
        {
#line 1176 "instmap.m"
          hlds__instmap__Test_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1176 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 0) = ((MR_Box) (&hlds__instmap_scalar_common_4[1]));
#line 1176 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 1) = ((MR_Box) (hlds__instmap__instmap_delta_no_output_vars_5_p_0_1));
#line 1176 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1176 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 3) = ((MR_Box) (hlds__instmap__ModuleInfo_6));
#line 1176 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 4) = ((MR_Box) (hlds__instmap__VarTypes_7));
#line 1176 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 5) = ((MR_Box) (hlds__instmap__InstMap0_8));
#line 1176 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 6) = ((MR_Box) (hlds__instmap__InstMapDeltaMap_11));
#line 1176 "instmap.m"
        }
#line 1178 "instmap.m"
        {
#line 1178 "instmap.m"
          return hlds__instmap__succeeded = parse_tree__set_of_var__all_true_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Test_12, hlds__instmap__Vars_10);
        }
#line 1175 "instmap.m"
      }
#line 1173 "instmap.m"
    return hlds__instmap__succeeded;
#line 1173 "instmap.m"
  }
#line 278 "instmap.m"
}

#line 270 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_delete_vars_3_p_0(
#line 270 "instmap.m"
  MR_Word hlds__instmap__Vars_1,
#line 270 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 270 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 270 "instmap.m"
{
#line 847 "instmap.m"
  {
#line 847 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 847 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 847 "instmap.m"
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 847 "instmap.m"
    else
#line 849 "instmap.m"
      {
#line 849 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 849 "instmap.m"
        MR_Word hlds__instmap__InstMapping_7;

#line 850 "instmap.m"
        {
#line 850 "instmap.m"
          mercury__map__delete_list_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Vars_1, hlds__instmap__InstMapping0_6, &hlds__instmap__InstMapping_7);
        }
#line 849 "instmap.m"
        {
#line 849 "instmap.m"
          MR_Word base;
#line 849 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 849 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = base;
#line 849 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_7));
#line 849 "instmap.m"
        }
#line 849 "instmap.m"
      }
#line 847 "instmap.m"
  }
#line 270 "instmap.m"
}

#line 265 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_restrict_3_p_0(
#line 265 "instmap.m"
  MR_Word hlds__instmap__Vars_1,
#line 265 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 265 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 265 "instmap.m"
{
#line 836 "instmap.m"
  {
#line 836 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 836 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 836 "instmap.m"
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 836 "instmap.m"
    else
#line 837 "instmap.m"
      {
#line 837 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 837 "instmap.m"
        MR_Word hlds__instmap__InstMapping_7;
#line 837 "instmap.m"
        MR_Word hlds__instmap__V_8_8;

#line 838 "instmap.m"
        {
#line 838 "instmap.m"
          hlds__instmap__V_8_8 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Vars_1);
        }
#line 838 "instmap.m"
        {
#line 838 "instmap.m"
          mercury__map__select_sorted_list_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping0_6, hlds__instmap__V_8_8, &hlds__instmap__InstMapping_7);
        }
#line 837 "instmap.m"
        {
#line 837 "instmap.m"
          MR_Word base;
#line 837 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 837 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = base;
#line 837 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_7));
#line 837 "instmap.m"
        }
#line 837 "instmap.m"
      }
#line 836 "instmap.m"
  }
#line 265 "instmap.m"
}

#line 259 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_merge_5_p_0(
#line 259 "instmap.m"
  MR_Word hlds__instmap__NonLocals_6,
#line 259 "instmap.m"
  MR_Word hlds__instmap__ArmInstMaps_7,
#line 259 "instmap.m"
  MR_Word hlds__instmap__MergeContext_8,
#line 259 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModeInfo_0_27,
#line 259 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModeInfo_28)
#line 259 "instmap.m"
{
#line 882 "instmap.m"
  {
#line 882 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 882 "instmap.m"
    MR_Word hlds__instmap__InstMap0_10;
#line 882 "instmap.m"
    MR_Word hlds__instmap__ModuleInfo0_11;
#line 882 "instmap.m"
    MR_Word hlds__instmap__ReachableInstMappingList_12;
#line 882 "instmap.m"
    MR_Word hlds__instmap__InstMap_26;
#line 882 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_ModeInfo_31_31;
#line 907 "instmap.m"
    MR_Word hlds__instmap__InstMapping0_13;
#line 890 "instmap.m"
    MR_Word hlds__instmap__V_14_14;
#line 890 "instmap.m"
    MR_Word hlds__instmap__V_15_15;

#line 883 "instmap.m"
    {
#line 883 "instmap.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(hlds__instmap__STATE_VARIABLE_ModeInfo_0_27, &hlds__instmap__InstMap0_10);
    }
#line 884 "instmap.m"
    {
#line 884 "instmap.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(hlds__instmap__STATE_VARIABLE_ModeInfo_0_27, &hlds__instmap__ModuleInfo0_11);
    }
#line 885 "instmap.m"
    {
#line 885 "instmap.m"
      hlds__instmap__get_reachable_instmaps_2_p_0(hlds__instmap__ArmInstMaps_7, &hlds__instmap__ReachableInstMappingList_12);
    }
#line 890 "instmap.m"
    hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__ReachableInstMappingList_12)) == (MR_mktag((MR_Integer) 1)));
#line 890 "instmap.m"
    if (hlds__instmap__succeeded)
#line 890 "instmap.m"
      {
#line 890 "instmap.m"
        hlds__instmap__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__ReachableInstMappingList_12, (MR_Integer) 0)));
#line 890 "instmap.m"
        hlds__instmap__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__ReachableInstMappingList_12, (MR_Integer) 1)));
#line 889 "instmap.m"
        hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__InstMap0_10)) == (MR_mktag((MR_Integer) 1)));
#line 889 "instmap.m"
        if (hlds__instmap__succeeded)
#line 889 "instmap.m"
          hlds__instmap__InstMapping0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap0_10, (MR_Integer) 0)));
#line 890 "instmap.m"
      }
#line 907 "instmap.m"
    if (hlds__instmap__succeeded)
#line 892 "instmap.m"
      {
#line 892 "instmap.m"
        MR_Word hlds__instmap__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 892 "instmap.m"
        MR_Word hlds__instmap__NonLocalsList_16;
#line 892 "instmap.m"
        MR_Word hlds__instmap__VarTypes_17;
#line 892 "instmap.m"
        MR_Word hlds__instmap__InstMapping_18;
#line 892 "instmap.m"
        MR_Word hlds__instmap__ModuleInfo_19;
#line 892 "instmap.m"
        MR_Word hlds__instmap__ErrorList_20;
#line 892 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModeInfo_29_29;

#line 892 "instmap.m"
        {
#line 892 "instmap.m"
          parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__instmap__TypeCtorInfo_33_33, hlds__instmap__NonLocals_6, &hlds__instmap__NonLocalsList_16);
        }
#line 893 "instmap.m"
        {
#line 893 "instmap.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(hlds__instmap__STATE_VARIABLE_ModeInfo_0_27, &hlds__instmap__VarTypes_17);
        }
#line 894 "instmap.m"
        {
#line 894 "instmap.m"
          hlds__instmap__merge_insts_of_vars_8_p_0(hlds__instmap__NonLocalsList_16, hlds__instmap__ArmInstMaps_7, hlds__instmap__VarTypes_17, hlds__instmap__InstMapping0_13, &hlds__instmap__InstMapping_18, hlds__instmap__ModuleInfo0_11, &hlds__instmap__ModuleInfo_19, &hlds__instmap__ErrorList_20);
        }
#line 896 "instmap.m"
        {
#line 896 "instmap.m"
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(hlds__instmap__ModuleInfo_19, hlds__instmap__STATE_VARIABLE_ModeInfo_0_27, &hlds__instmap__STATE_VARIABLE_ModeInfo_29_29);
        }
#line 903 "instmap.m"
        if ((hlds__instmap__ErrorList_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 904 "instmap.m"
          hlds__instmap__STATE_VARIABLE_ModeInfo_31_31 = hlds__instmap__STATE_VARIABLE_ModeInfo_29_29;
#line 903 "instmap.m"
        else
#line 898 "instmap.m"
          {
#line 898 "instmap.m"
            MR_Word hlds__instmap__FirstError_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__ErrorList_20, (MR_Integer) 0)));
#line 898 "instmap.m"
            MR_Word hlds__instmap__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__FirstError_21, (MR_Integer) 0)));
#line 898 "instmap.m"
            MR_Word hlds__instmap__WaitingVars_25;
#line 898 "instmap.m"
            MR_Word hlds__instmap__V_30_30;
#line 898 "instmap.m"
            MR_Word hlds__instmap__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__ErrorList_20, (MR_Integer) 1)));
#line 899 "instmap.m"
            MR_Word hlds__instmap__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__FirstError_21, (MR_Integer) 1)));

#line 900 "instmap.m"
            {
#line 900 "instmap.m"
              hlds__instmap__WaitingVars_25 = parse_tree__set_of_var__make_singleton_1_f_0(hlds__instmap__TypeCtorInfo_33_33, hlds__instmap__Var_23);
            }
#line 902 "instmap.m"
            {
#line 902 "instmap.m"
              hlds__instmap__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 902 "instmap.m"
              MR_hl_field(MR_mktag(1), hlds__instmap__V_30_30, 0) = ((MR_Box) (hlds__instmap__MergeContext_8));
#line 902 "instmap.m"
              MR_hl_field(MR_mktag(1), hlds__instmap__V_30_30, 1) = ((MR_Box) (hlds__instmap__ErrorList_20));
#line 902 "instmap.m"
            }
#line 901 "instmap.m"
            {
#line 901 "instmap.m"
              check_hlds__mode_info__mode_info_error_4_p_0(hlds__instmap__WaitingVars_25, hlds__instmap__V_30_30, hlds__instmap__STATE_VARIABLE_ModeInfo_29_29, &hlds__instmap__STATE_VARIABLE_ModeInfo_31_31);
            }
#line 898 "instmap.m"
          }
#line 906 "instmap.m"
        {
#line 906 "instmap.m"
          hlds__instmap__InstMap_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 906 "instmap.m"
          MR_hl_field(MR_mktag(1), hlds__instmap__InstMap_26, 0) = ((MR_Box) (hlds__instmap__InstMapping_18));
#line 906 "instmap.m"
        }
#line 892 "instmap.m"
      }
#line 907 "instmap.m"
    else
#line 908 "instmap.m"
      {
#line 908 "instmap.m"
        hlds__instmap__InstMap_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 908 "instmap.m"
        hlds__instmap__STATE_VARIABLE_ModeInfo_31_31 = hlds__instmap__STATE_VARIABLE_ModeInfo_0_27;
#line 908 "instmap.m"
      }
#line 910 "instmap.m"
    {
#line 910 "instmap.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(hlds__instmap__InstMap_26, hlds__instmap__STATE_VARIABLE_ModeInfo_31_31, hlds__instmap__STATE_VARIABLE_ModeInfo_28);
#line 910 "instmap.m"
      return;
    }
#line 882 "instmap.m"
  }
#line 259 "instmap.m"
}

#line 250 "instmap.m"
void MR_CALL 
hlds__instmap__make_arm_instmaps_for_cases_3_p_0(
#line 250 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 250 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 250 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 250 "instmap.m"
{
#line 867 "instmap.m"
  {
#line 867 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 867 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 867 "instmap.m"
      if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 867 "instmap.m"
        *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 867 "instmap.m"
      else
#line 868 "instmap.m"
        {
#line 869 "instmap.m"
          {
#line 869 "instmap.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_cases\'/3", (MR_String) "mismatched lists");
#line 869 "instmap.m"
            return;
          }
#line 868 "instmap.m"
        }
#line 867 "instmap.m"
    else
#line 867 "instmap.m"
      {
#line 867 "instmap.m"
        MR_Word hlds__instmap__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 867 "instmap.m"
        MR_Word hlds__instmap__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 867 "instmap.m"
        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 870 "instmap.m"
          {
#line 871 "instmap.m"
            {
#line 871 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_cases\'/3", (MR_String) "mismatched lists");
#line 871 "instmap.m"
              return;
            }
#line 870 "instmap.m"
          }
#line 867 "instmap.m"
        else
#line 873 "instmap.m"
          {
#line 873 "instmap.m"
            MR_Word hlds__instmap__InstMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 873 "instmap.m"
            MR_Word hlds__instmap__InstMaps_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 873 "instmap.m"
            MR_Word hlds__instmap__ArmInfo_20;
#line 873 "instmap.m"
            MR_Word hlds__instmap__ArmInfos_21;
#line 873 "instmap.m"
            MR_Word hlds__instmap__Goal_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_29_29, (MR_Integer) 2)));
#line 873 "instmap.m"
            MR_Word hlds__instmap__GoalInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__Goal_24, (MR_Integer) 1)));
#line 873 "instmap.m"
            MR_Word hlds__instmap__Context_27;
#line 874 "instmap.m"
            MR_Word hlds__instmap__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_29_29, (MR_Integer) 0)));
#line 874 "instmap.m"
            MR_Word hlds__instmap__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_29_29, (MR_Integer) 1)));
#line 875 "instmap.m"
            MR_Word hlds__instmap__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__Goal_24, (MR_Integer) 0)));

#line 876 "instmap.m"
            {
#line 876 "instmap.m"
              hlds__instmap__Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__instmap__GoalInfo_26);
            }
#line 877 "instmap.m"
            {
#line 877 "instmap.m"
              hlds__instmap__ArmInfo_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 877 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__ArmInfo_20, 0) = ((MR_Box) (hlds__instmap__Context_27));
#line 877 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__ArmInfo_20, 1) = ((MR_Box) (hlds__instmap__InstMap_18));
#line 877 "instmap.m"
            }
#line 878 "instmap.m"
            {
#line 878 "instmap.m"
              hlds__instmap__make_arm_instmaps_for_cases_3_p_0(hlds__instmap__V_28_28, hlds__instmap__InstMaps_19, &hlds__instmap__ArmInfos_21);
            }
#line 873 "instmap.m"
            {
#line 873 "instmap.m"
              MR_Word base;
#line 873 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 873 "instmap.m"
              *hlds__instmap__HeadVar__3_3 = base;
#line 873 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__ArmInfo_20));
#line 873 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__ArmInfos_21));
#line 873 "instmap.m"
            }
#line 873 "instmap.m"
          }
#line 867 "instmap.m"
      }
#line 867 "instmap.m"
  }
#line 250 "instmap.m"
}

#line 248 "instmap.m"
void MR_CALL 
hlds__instmap__make_arm_instmaps_for_goals_3_p_0(
#line 248 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 248 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 248 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 248 "instmap.m"
{
#line 855 "instmap.m"
  {
#line 855 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 855 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 855 "instmap.m"
      if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 855 "instmap.m"
        *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 855 "instmap.m"
      else
#line 856 "instmap.m"
        {
#line 857 "instmap.m"
          {
#line 857 "instmap.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_goals\'/3", (MR_String) "mismatched lists");
#line 857 "instmap.m"
            return;
          }
#line 856 "instmap.m"
        }
#line 855 "instmap.m"
    else
#line 855 "instmap.m"
      {
#line 855 "instmap.m"
        MR_Word hlds__instmap__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 855 "instmap.m"
        MR_Word hlds__instmap__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 855 "instmap.m"
        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 858 "instmap.m"
          {
#line 859 "instmap.m"
            {
#line 859 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_goals\'/3", (MR_String) "mismatched lists");
#line 859 "instmap.m"
              return;
            }
#line 858 "instmap.m"
          }
#line 855 "instmap.m"
        else
#line 861 "instmap.m"
          {
#line 861 "instmap.m"
            MR_Word hlds__instmap__InstMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 861 "instmap.m"
            MR_Word hlds__instmap__InstMaps_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 861 "instmap.m"
            MR_Word hlds__instmap__ArmInfo_20;
#line 861 "instmap.m"
            MR_Word hlds__instmap__ArmInfos_21;
#line 861 "instmap.m"
            MR_Word hlds__instmap__GoalInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_26_26, (MR_Integer) 1)));
#line 861 "instmap.m"
            MR_Word hlds__instmap__Context_24;
#line 862 "instmap.m"
            MR_Word hlds__instmap__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_26_26, (MR_Integer) 0)));

#line 863 "instmap.m"
            {
#line 863 "instmap.m"
              hlds__instmap__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__instmap__GoalInfo_23);
            }
#line 864 "instmap.m"
            {
#line 864 "instmap.m"
              hlds__instmap__ArmInfo_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 864 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__ArmInfo_20, 0) = ((MR_Box) (hlds__instmap__Context_24));
#line 864 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__ArmInfo_20, 1) = ((MR_Box) (hlds__instmap__InstMap_18));
#line 864 "instmap.m"
            }
#line 865 "instmap.m"
            {
#line 865 "instmap.m"
              hlds__instmap__make_arm_instmaps_for_goals_3_p_0(hlds__instmap__V_25_25, hlds__instmap__InstMaps_19, &hlds__instmap__ArmInfos_21);
            }
#line 861 "instmap.m"
            {
#line 861 "instmap.m"
              MR_Word base;
#line 861 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 861 "instmap.m"
              *hlds__instmap__HeadVar__3_3 = base;
#line 861 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__ArmInfo_20));
#line 861 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__ArmInfos_21));
#line 861 "instmap.m"
            }
#line 861 "instmap.m"
          }
#line 855 "instmap.m"
      }
#line 855 "instmap.m"
  }
#line 248 "instmap.m"
}

#line 236 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_restrict_3_p_0(
#line 236 "instmap.m"
  MR_Word hlds__instmap__Vars_1,
#line 236 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 236 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 236 "instmap.m"
{
#line 841 "instmap.m"
  {
#line 841 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 841 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 841 "instmap.m"
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 841 "instmap.m"
    else
#line 843 "instmap.m"
      {
#line 843 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 843 "instmap.m"
        MR_Word hlds__instmap__InstMapping_7;
#line 843 "instmap.m"
        MR_Word hlds__instmap__V_8_8;

#line 844 "instmap.m"
        {
#line 844 "instmap.m"
          hlds__instmap__V_8_8 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Vars_1);
        }
#line 844 "instmap.m"
        {
#line 844 "instmap.m"
          mercury__map__select_sorted_list_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping0_6, hlds__instmap__V_8_8, &hlds__instmap__InstMapping_7);
        }
#line 843 "instmap.m"
        {
#line 843 "instmap.m"
          MR_Word base;
#line 843 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 843 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = base;
#line 843 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_7));
#line 843 "instmap.m"
        }
#line 843 "instmap.m"
      }
#line 841 "instmap.m"
  }
#line 236 "instmap.m"
}

#line 230 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(
#line 230 "instmap.m"
  MR_Word hlds__instmap__InstMap1_5,
#line 230 "instmap.m"
  MR_Word hlds__instmap__InstMap2_6,
#line 230 "instmap.m"
  MR_Word hlds__instmap__How_7,
#line 230 "instmap.m"
  MR_Word * hlds__instmap__InstMap_8)
#line 230 "instmap.m"
{
#line 800 "instmap.m"
  {
#line 800 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 800 "instmap.m"
    if ((hlds__instmap__InstMap1_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 800 "instmap.m"
      *hlds__instmap__InstMap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 800 "instmap.m"
    else
#line 800 "instmap.m"
      {
#line 800 "instmap.m"
        MR_Word hlds__instmap__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap1_5, (MR_Integer) 0)));

#line 800 "instmap.m"
        if ((hlds__instmap__InstMap2_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 805 "instmap.m"
          *hlds__instmap__InstMap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 800 "instmap.m"
        else
#line 807 "instmap.m"
          {
#line 807 "instmap.m"
            MR_Word hlds__instmap__InstMappingDelta2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap2_6, (MR_Integer) 0)));
#line 807 "instmap.m"
            MR_Word hlds__instmap__InstMappingDelta_12;

#line 813 "instmap.m"
#line 813 "instmap.m"
            switch (hlds__instmap__How_7) {
#line 813 "instmap.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 813 "instmap.m"
              case (MR_Integer) 0:
#line 810 "instmap.m"
                {
#line 811 "instmap.m"
                  {
#line 811 "instmap.m"
                    mercury__map__overlay_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_25_25, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__InstMappingDelta_12);
                  }
#line 810 "instmap.m"
                }
#line 813 "instmap.m"
                break;
#line 813 "instmap.m"
              case (MR_Integer) 1:
#line 814 "instmap.m"
                {
#line 815 "instmap.m"
                  {
#line 815 "instmap.m"
                    mercury__map__overlay_large_map_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_25_25, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__InstMappingDelta_12);
                  }
#line 814 "instmap.m"
                }
#line 813 "instmap.m"
                break;
#line 813 "instmap.m"
              case (MR_Integer) 2:
#line 818 "instmap.m"
                {
#line 820 "instmap.m"
                  MR_Word hlds__instmap__TypeInfo_19_19 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 820 "instmap.m"
                  MR_Word hlds__instmap__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 820 "instmap.m"
                  MR_Integer hlds__instmap__Count1_13;
#line 820 "instmap.m"
                  MR_Integer hlds__instmap__Count2_14;

#line 820 "instmap.m"
                  {
#line 820 "instmap.m"
                    mercury__map__count_2_p_0(hlds__instmap__TypeInfo_19_19, hlds__instmap__TypeCtorInfo_20_20, hlds__instmap__V_25_25, &hlds__instmap__Count1_13);
                  }
#line 821 "instmap.m"
                  {
#line 821 "instmap.m"
                    mercury__map__count_2_p_0(hlds__instmap__TypeInfo_19_19, hlds__instmap__TypeCtorInfo_20_20, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__Count2_14);
                  }
#line 822 "instmap.m"
                  hlds__instmap__succeeded = (hlds__instmap__Count1_13 >= hlds__instmap__Count2_14);
#line 818 "instmap.m"
                  if (hlds__instmap__succeeded)
#line 824 "instmap.m"
                    {
#line 824 "instmap.m"
                      {
#line 824 "instmap.m"
                        mercury__map__overlay_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_25_25, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__InstMappingDelta_12);
                      }
#line 824 "instmap.m"
                    }
#line 818 "instmap.m"
                  else
#line 827 "instmap.m"
                    {
#line 827 "instmap.m"
                      {
#line 827 "instmap.m"
                        mercury__map__overlay_large_map_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_25_25, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__InstMappingDelta_12);
                      }
#line 827 "instmap.m"
                    }
#line 818 "instmap.m"
                }
#line 813 "instmap.m"
                break;
#line 813 "instmap.m"
            }
#line 831 "instmap.m"
            {
#line 831 "instmap.m"
              MR_Word base;
#line 831 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 831 "instmap.m"
              *hlds__instmap__InstMap_8 = base;
#line 831 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMappingDelta_12));
#line 831 "instmap.m"
            }
#line 807 "instmap.m"
          }
#line 800 "instmap.m"
      }
#line 800 "instmap.m"
  }
#line 230 "instmap.m"
}

#line 224 "instmap.m"
void MR_CALL 
hlds__instmap__apply_instmap_delta_sv_3_p_0(
#line 224 "instmap.m"
  MR_Word hlds__instmap__Delta_4,
#line 224 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_Instmap_0_6,
#line 224 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_Instmap_7)
#line 224 "instmap.m"
{
#line 796 "instmap.m"
  {
#line 796 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 796 "instmap.m"
    {
#line 796 "instmap.m"
      hlds__instmap__apply_instmap_delta_3_p_0(hlds__instmap__STATE_VARIABLE_Instmap_0_6, hlds__instmap__Delta_4, hlds__instmap__STATE_VARIABLE_Instmap_7);
#line 796 "instmap.m"
      return;
    }
#line 796 "instmap.m"
  }
#line 224 "instmap.m"
}

#line 218 "instmap.m"
void MR_CALL 
hlds__instmap__apply_instmap_delta_3_p_0(
#line 218 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 218 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 218 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 218 "instmap.m"
{
#line 789 "instmap.m"
  {
#line 789 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 789 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 789 "instmap.m"
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 789 "instmap.m"
    else
#line 789 "instmap.m"
      {
#line 789 "instmap.m"
        MR_Word hlds__instmap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 789 "instmap.m"
        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 790 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 789 "instmap.m"
        else
#line 792 "instmap.m"
          {
#line 792 "instmap.m"
            MR_Word hlds__instmap__InstMappingDelta_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 792 "instmap.m"
            MR_Word hlds__instmap__InstMapping_8;

#line 793 "instmap.m"
            {
#line 793 "instmap.m"
              mercury__map__overlay_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_11_11, hlds__instmap__InstMappingDelta_7, &hlds__instmap__InstMapping_8);
            }
#line 792 "instmap.m"
            {
#line 792 "instmap.m"
              MR_Word base;
#line 792 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 792 "instmap.m"
              *hlds__instmap__HeadVar__3_3 = base;
#line 792 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_8));
#line 792 "instmap.m"
            }
#line 792 "instmap.m"
          }
#line 789 "instmap.m"
      }
#line 789 "instmap.m"
  }
#line 218 "instmap.m"
}

#line 212 "instmap.m"
void MR_CALL 
hlds__instmap__compute_instmap_delta_4_p_0(
#line 212 "instmap.m"
  MR_Word hlds__instmap__InstMapA_5,
#line 212 "instmap.m"
  MR_Word hlds__instmap__InstMapB_6,
#line 212 "instmap.m"
  MR_Word hlds__instmap__NonLocals_7,
#line 212 "instmap.m"
  MR_Word * hlds__instmap__InstMap_8)
#line 212 "instmap.m"
{
#line 1135 "instmap.m"
  {
#line 1135 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1135 "instmap.m"
    if ((hlds__instmap__InstMapA_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1135 "instmap.m"
      *hlds__instmap__InstMap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1135 "instmap.m"
    else
#line 1135 "instmap.m"
      {
#line 1135 "instmap.m"
        MR_Word hlds__instmap__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapA_5, (MR_Integer) 0)));

#line 1135 "instmap.m"
        if ((hlds__instmap__InstMapB_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1140 "instmap.m"
          *hlds__instmap__InstMap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1135 "instmap.m"
        else
#line 1142 "instmap.m"
          {
#line 1142 "instmap.m"
            MR_Word hlds__instmap__InstMappingB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapB_6, (MR_Integer) 0)));
#line 1142 "instmap.m"
            MR_Word hlds__instmap__NonLocalsList_12;
#line 1142 "instmap.m"
            MR_Word hlds__instmap__AssocList_13;
#line 1142 "instmap.m"
            MR_Word hlds__instmap__DeltaInstMap_14;

#line 1144 "instmap.m"
            {
#line 1144 "instmap.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__NonLocals_7, &hlds__instmap__NonLocalsList_12);
            }
#line 1145 "instmap.m"
            {
#line 1145 "instmap.m"
              hlds__instmap__compute_instmap_delta_for_vars_4_p_0(hlds__instmap__NonLocalsList_12, hlds__instmap__V_18_18, hlds__instmap__InstMappingB_11, &hlds__instmap__AssocList_13);
            }
#line 1147 "instmap.m"
            {
#line 1147 "instmap.m"
              mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__AssocList_13, &hlds__instmap__DeltaInstMap_14);
            }
#line 1148 "instmap.m"
            {
#line 1148 "instmap.m"
              MR_Word base;
#line 1148 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "instmap.m"
              *hlds__instmap__InstMap_8 = base;
#line 1148 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__DeltaInstMap_14));
#line 1148 "instmap.m"
            }
#line 1142 "instmap.m"
          }
#line 1135 "instmap.m"
      }
#line 1135 "instmap.m"
  }
#line 212 "instmap.m"
}

#line 199 "instmap.m"
void MR_CALL 
hlds__instmap__pre_lambda_update_5_p_0(
#line 199 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 199 "instmap.m"
  MR_Word hlds__instmap__Vars_7,
#line 199 "instmap.m"
  MR_Word hlds__instmap__Modes_8,
#line 199 "instmap.m"
  MR_Word hlds__instmap__InstMap0_9,
#line 199 "instmap.m"
  MR_Word * hlds__instmap__InstMap_10)
#line 199 "instmap.m"
{
#line 781 "instmap.m"
  {
#line 781 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 781 "instmap.m"
    MR_Word hlds__instmap__Insts_11;
#line 781 "instmap.m"
    MR_Word hlds__instmap__VarInsts_12;
#line 781 "instmap.m"
    MR_Word hlds__instmap__InstMapDelta_13;
#line 781 "instmap.m"
    MR_Word hlds__instmap__Instmapping_17;

#line 782 "instmap.m"
    {
#line 782 "instmap.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(hlds__instmap__ModuleInfo_6, hlds__instmap__Modes_8, &hlds__instmap__Insts_11);
    }
#line 783 "instmap.m"
    {
#line 783 "instmap.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Vars_7, hlds__instmap__Insts_11, &hlds__instmap__VarInsts_12);
    }
#line 419 "instmap.m"
    {
#line 419 "instmap.m"
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__VarInsts_12, &hlds__instmap__Instmapping_17);
    }
#line 418 "instmap.m"
    {
#line 418 "instmap.m"
      hlds__instmap__InstMapDelta_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 418 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_13, 0) = ((MR_Box) (hlds__instmap__Instmapping_17));
#line 418 "instmap.m"
    }
#line 785 "instmap.m"
    {
#line 785 "instmap.m"
      hlds__instmap__apply_instmap_delta_3_p_0(hlds__instmap__InstMap0_9, hlds__instmap__InstMapDelta_13, hlds__instmap__InstMap_10);
#line 785 "instmap.m"
      return;
    }
#line 781 "instmap.m"
  }
#line 199 "instmap.m"
}

#line 192 "instmap.m"
void MR_CALL 
hlds__instmap__bind_var_to_functors_8_p_0(
#line 192 "instmap.m"
  MR_Word hlds__instmap__Var_9,
#line 192 "instmap.m"
  MR_Word hlds__instmap__Type_10,
#line 192 "instmap.m"
  MR_Word hlds__instmap__MainConsId_11,
#line 192 "instmap.m"
  MR_Word hlds__instmap__OtherConsIds_12,
#line 192 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_17,
#line 192 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_18,
#line 192 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_19,
#line 192 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_20)
#line 192 "instmap.m"
{
#line 723 "instmap.m"
  {
#line 723 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 723 "instmap.m"
    MR_Word hlds__instmap__Inst0_15;
#line 723 "instmap.m"
    MR_Word hlds__instmap__Inst_16;
#line 723 "instmap.m"
    MR_Word hlds__instmap__MainFinalInst_31;
#line 723 "instmap.m"
    MR_Word hlds__instmap__OtherFinalInsts_32;
#line 723 "instmap.m"
    MR_Word hlds__instmap__MaybeMergedInst_33;
#line 723 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_19_34;
#line 723 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_20_35;
#line 723 "instmap.m"
    MR_Word hlds__instmap__V_36_36;
#line 723 "instmap.m"
    MR_Word hlds__instmap__V_37_37;
#line 723 "instmap.m"
    MR_Integer hlds__instmap__Arity_50;
#line 723 "instmap.m"
    MR_Word hlds__instmap__ArgLives_51;
#line 723 "instmap.m"
    MR_Word hlds__instmap__ArgInsts_52;
#line 741 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_58;
#line 741 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_59;
#line 737 "instmap.m"
    MR_Word hlds__instmap___Det_53;

#line 724 "instmap.m"
    {
#line 724 "instmap.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__STATE_VARIABLE_InstMap_0_17, hlds__instmap__Var_9, &hlds__instmap__Inst0_15);
    }
#line 733 "instmap.m"
    {
#line 733 "instmap.m"
      hlds__instmap__Arity_50 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_19, hlds__instmap__Type_10, hlds__instmap__MainConsId_11);
    }
#line 734 "instmap.m"
    {
#line 734 "instmap.m"
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_50, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_51);
    }
#line 735 "instmap.m"
    {
#line 735 "instmap.m"
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_50, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_52);
    }
#line 737 "instmap.m"
    {
#line 737 "instmap.m"
      hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__Inst0_15, hlds__instmap__MainConsId_11, hlds__instmap__ArgInsts_52, hlds__instmap__ArgLives_51, (MR_Integer) 0, hlds__instmap__Type_10, &hlds__instmap__STATE_VARIABLE_Inst_23_58, &hlds__instmap___Det_53, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_19, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_59);
    }
#line 741 "instmap.m"
    if (hlds__instmap__succeeded)
#line 740 "instmap.m"
      {
#line 740 "instmap.m"
        hlds__instmap__STATE_VARIABLE_ModuleInfo_19_34 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_59;
#line 740 "instmap.m"
        hlds__instmap__MainFinalInst_31 = hlds__instmap__STATE_VARIABLE_Inst_23_58;
#line 740 "instmap.m"
      }
#line 741 "instmap.m"
    else
#line 742 "instmap.m"
      {
#line 742 "instmap.m"
        {
#line 742 "instmap.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
#line 742 "instmap.m"
          return;
        }
#line 742 "instmap.m"
      }
#line 752 "instmap.m"
    {
#line 752 "instmap.m"
      hlds__instmap__bind_inst_to_functors_others_6_p_0(hlds__instmap__Type_10, hlds__instmap__OtherConsIds_12, hlds__instmap__Inst0_15, &hlds__instmap__OtherFinalInsts_32, hlds__instmap__STATE_VARIABLE_ModuleInfo_19_34, &hlds__instmap__STATE_VARIABLE_ModuleInfo_20_35);
    }
#line 754 "instmap.m"
    {
#line 754 "instmap.m"
      hlds__instmap__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__V_36_36, 0) = ((MR_Box) (hlds__instmap__MainFinalInst_31));
#line 754 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__V_36_36, 1) = ((MR_Box) (hlds__instmap__OtherFinalInsts_32));
#line 754 "instmap.m"
    }
#line 754 "instmap.m"
    {
#line 754 "instmap.m"
      hlds__instmap__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 754 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__V_37_37, 0) = ((MR_Box) (hlds__instmap__Type_10));
#line 754 "instmap.m"
    }
#line 754 "instmap.m"
    {
#line 754 "instmap.m"
      hlds__instmap__merge_var_insts_5_p_0(hlds__instmap__V_36_36, hlds__instmap__V_37_37, hlds__instmap__STATE_VARIABLE_ModuleInfo_20_35, hlds__instmap__STATE_VARIABLE_ModuleInfo_20, &hlds__instmap__MaybeMergedInst_33);
    }
#line 758 "instmap.m"
    if ((hlds__instmap__MaybeMergedInst_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 759 "instmap.m"
      {
#line 765 "instmap.m"
        {
#line 765 "instmap.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functors\'/7", (MR_String) "no MaybeMergedInst");
#line 765 "instmap.m"
          return;
        }
#line 759 "instmap.m"
      }
#line 758 "instmap.m"
    else
#line 757 "instmap.m"
      hlds__instmap__Inst_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MaybeMergedInst_33, (MR_Integer) 0)));
#line 561 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 561 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMap_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 561 "instmap.m"
    else
#line 562 "instmap.m"
      {
#line 562 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_17, (MR_Integer) 0)));
#line 562 "instmap.m"
        MR_Word hlds__instmap__InstMapping_72;

#line 563 "instmap.m"
        {
#line 563 "instmap.m"
          mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_9)), ((MR_Box) (hlds__instmap__Inst_16)), hlds__instmap__InstMapping0_71, &hlds__instmap__InstMapping_72);
        }
#line 562 "instmap.m"
        {
#line 562 "instmap.m"
          MR_Word base;
#line 562 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 562 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMap_18 = base;
#line 562 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_72));
#line 562 "instmap.m"
        }
#line 562 "instmap.m"
      }
#line 723 "instmap.m"
  }
#line 192 "instmap.m"
}

#line 189 "instmap.m"
void MR_CALL 
hlds__instmap__bind_var_to_functor_7_p_0(
#line 189 "instmap.m"
  MR_Word hlds__instmap__Var_8,
#line 189 "instmap.m"
  MR_Word hlds__instmap__Type_9,
#line 189 "instmap.m"
  MR_Word hlds__instmap__ConsId_10,
#line 189 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_15,
#line 189 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_16,
#line 189 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_17,
#line 189 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_18)
#line 189 "instmap.m"
{
#line 717 "instmap.m"
  {
#line 717 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 717 "instmap.m"
    MR_Word hlds__instmap__Inst0_13;
#line 717 "instmap.m"
    MR_Word hlds__instmap__Inst_14;
#line 717 "instmap.m"
    MR_Integer hlds__instmap__Arity_29;
#line 717 "instmap.m"
    MR_Word hlds__instmap__ArgLives_30;
#line 717 "instmap.m"
    MR_Word hlds__instmap__ArgInsts_31;
#line 741 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_37;
#line 741 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_38;
#line 737 "instmap.m"
    MR_Word hlds__instmap___Det_32;

#line 718 "instmap.m"
    {
#line 718 "instmap.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__STATE_VARIABLE_InstMap_0_15, hlds__instmap__Var_8, &hlds__instmap__Inst0_13);
    }
#line 733 "instmap.m"
    {
#line 733 "instmap.m"
      hlds__instmap__Arity_29 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_17, hlds__instmap__Type_9, hlds__instmap__ConsId_10);
    }
#line 734 "instmap.m"
    {
#line 734 "instmap.m"
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_29, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_30);
    }
#line 735 "instmap.m"
    {
#line 735 "instmap.m"
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_29, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_31);
    }
#line 737 "instmap.m"
    {
#line 737 "instmap.m"
      hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__Inst0_13, hlds__instmap__ConsId_10, hlds__instmap__ArgInsts_31, hlds__instmap__ArgLives_30, (MR_Integer) 0, hlds__instmap__Type_9, &hlds__instmap__STATE_VARIABLE_Inst_23_37, &hlds__instmap___Det_32, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_17, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_38);
    }
#line 741 "instmap.m"
    if (hlds__instmap__succeeded)
#line 740 "instmap.m"
      {
#line 740 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_18 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_38;
#line 740 "instmap.m"
        hlds__instmap__Inst_14 = hlds__instmap__STATE_VARIABLE_Inst_23_37;
#line 740 "instmap.m"
      }
#line 741 "instmap.m"
    else
#line 742 "instmap.m"
      {
#line 742 "instmap.m"
        {
#line 742 "instmap.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
#line 742 "instmap.m"
          return;
        }
#line 742 "instmap.m"
      }
#line 561 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 561 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMap_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 561 "instmap.m"
    else
#line 562 "instmap.m"
      {
#line 562 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_15, (MR_Integer) 0)));
#line 562 "instmap.m"
        MR_Word hlds__instmap__InstMapping_51;

#line 563 "instmap.m"
        {
#line 563 "instmap.m"
          mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_8)), ((MR_Box) (hlds__instmap__Inst_14)), hlds__instmap__InstMapping0_50, &hlds__instmap__InstMapping_51);
        }
#line 562 "instmap.m"
        {
#line 562 "instmap.m"
          MR_Word base;
#line 562 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 562 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMap_16 = base;
#line 562 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_51));
#line 562 "instmap.m"
        }
#line 562 "instmap.m"
      }
#line 717 "instmap.m"
  }
#line 189 "instmap.m"
}

#line 184 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_bind_var_to_functors_9_p_0(
#line 184 "instmap.m"
  MR_Word hlds__instmap__Var_10,
#line 184 "instmap.m"
  MR_Word hlds__instmap__Type_11,
#line 184 "instmap.m"
  MR_Word hlds__instmap__MainConsId_12,
#line 184 "instmap.m"
  MR_Word hlds__instmap__OtherConsIds_13,
#line 184 "instmap.m"
  MR_Word hlds__instmap__InstMap_14,
#line 184 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22,
#line 184 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstmapDelta_23,
#line 184 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_24,
#line 184 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_25)
#line 184 "instmap.m"
{
#line 692 "instmap.m"
  {
#line 692 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 692 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 692 "instmap.m"
      {
#line 692 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_InstmapDelta_23 = hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22;
#line 692 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_25 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_24;
#line 692 "instmap.m"
      }
#line 692 "instmap.m"
    else
#line 694 "instmap.m"
      {
#line 694 "instmap.m"
        MR_Word hlds__instmap__InstmappingDelta0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22, (MR_Integer) 0)));
#line 694 "instmap.m"
        MR_Word hlds__instmap__OldInst_18;
#line 694 "instmap.m"
        MR_Word hlds__instmap__NewInst1_20;
#line 694 "instmap.m"
        MR_Word hlds__instmap__NewInst_21;
#line 694 "instmap.m"
        MR_Word hlds__instmap__MainFinalInst_39;
#line 694 "instmap.m"
        MR_Word hlds__instmap__OtherFinalInsts_40;
#line 694 "instmap.m"
        MR_Word hlds__instmap__MaybeMergedInst_41;
#line 694 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_19_42;
#line 694 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_20_43;
#line 694 "instmap.m"
        MR_Word hlds__instmap__V_44_44;
#line 694 "instmap.m"
        MR_Word hlds__instmap__V_45_45;
#line 694 "instmap.m"
        MR_Integer hlds__instmap__Arity_58;
#line 694 "instmap.m"
        MR_Word hlds__instmap__ArgLives_59;
#line 694 "instmap.m"
        MR_Word hlds__instmap__ArgInsts_60;
#line 703 "instmap.m"
        MR_Word hlds__instmap__NewInst0_19;
#line 701 "instmap.m"
        MR_Box hlds__instmap__conv0_NewInst0_19;
#line 741 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_66;
#line 741 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_67;
#line 737 "instmap.m"
        MR_Word hlds__instmap___Det_61;

#line 697 "instmap.m"
        {
#line 697 "instmap.m"
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_14, hlds__instmap__Var_10, &hlds__instmap__OldInst_18);
        }
#line 701 "instmap.m"
        {
#line 701 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstmappingDelta0_17, ((MR_Box) (hlds__instmap__Var_10)), &hlds__instmap__conv0_NewInst0_19);
        }
#line 701 "instmap.m"
        if (hlds__instmap__succeeded)
#line 701 "instmap.m"
          {
#line 701 "instmap.m"
            hlds__instmap__NewInst0_19 = ((MR_Word) hlds__instmap__conv0_NewInst0_19);
#line 701 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 701 "instmap.m"
          }
#line 703 "instmap.m"
        if (hlds__instmap__succeeded)
#line 702 "instmap.m"
          hlds__instmap__NewInst1_20 = hlds__instmap__NewInst0_19;
#line 703 "instmap.m"
        else
#line 704 "instmap.m"
          hlds__instmap__NewInst1_20 = hlds__instmap__OldInst_18;
#line 733 "instmap.m"
        {
#line 733 "instmap.m"
          hlds__instmap__Arity_58 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_24, hlds__instmap__Type_11, hlds__instmap__MainConsId_12);
        }
#line 734 "instmap.m"
        {
#line 734 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_58, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_59);
        }
#line 735 "instmap.m"
        {
#line 735 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_58, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_60);
        }
#line 737 "instmap.m"
        {
#line 737 "instmap.m"
          hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__NewInst1_20, hlds__instmap__MainConsId_12, hlds__instmap__ArgInsts_60, hlds__instmap__ArgLives_59, (MR_Integer) 0, hlds__instmap__Type_11, &hlds__instmap__STATE_VARIABLE_Inst_23_66, &hlds__instmap___Det_61, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_24, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_67);
        }
#line 741 "instmap.m"
        if (hlds__instmap__succeeded)
#line 740 "instmap.m"
          {
#line 740 "instmap.m"
            hlds__instmap__STATE_VARIABLE_ModuleInfo_19_42 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_67;
#line 740 "instmap.m"
            hlds__instmap__MainFinalInst_39 = hlds__instmap__STATE_VARIABLE_Inst_23_66;
#line 740 "instmap.m"
          }
#line 741 "instmap.m"
        else
#line 742 "instmap.m"
          {
#line 742 "instmap.m"
            {
#line 742 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
#line 742 "instmap.m"
              return;
            }
#line 742 "instmap.m"
          }
#line 752 "instmap.m"
        {
#line 752 "instmap.m"
          hlds__instmap__bind_inst_to_functors_others_6_p_0(hlds__instmap__Type_11, hlds__instmap__OtherConsIds_13, hlds__instmap__NewInst1_20, &hlds__instmap__OtherFinalInsts_40, hlds__instmap__STATE_VARIABLE_ModuleInfo_19_42, &hlds__instmap__STATE_VARIABLE_ModuleInfo_20_43);
        }
#line 754 "instmap.m"
        {
#line 754 "instmap.m"
          hlds__instmap__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "instmap.m"
          MR_hl_field(MR_mktag(1), hlds__instmap__V_44_44, 0) = ((MR_Box) (hlds__instmap__MainFinalInst_39));
#line 754 "instmap.m"
          MR_hl_field(MR_mktag(1), hlds__instmap__V_44_44, 1) = ((MR_Box) (hlds__instmap__OtherFinalInsts_40));
#line 754 "instmap.m"
        }
#line 754 "instmap.m"
        {
#line 754 "instmap.m"
          hlds__instmap__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 754 "instmap.m"
          MR_hl_field(MR_mktag(1), hlds__instmap__V_45_45, 0) = ((MR_Box) (hlds__instmap__Type_11));
#line 754 "instmap.m"
        }
#line 754 "instmap.m"
        {
#line 754 "instmap.m"
          hlds__instmap__merge_var_insts_5_p_0(hlds__instmap__V_44_44, hlds__instmap__V_45_45, hlds__instmap__STATE_VARIABLE_ModuleInfo_20_43, hlds__instmap__STATE_VARIABLE_ModuleInfo_25, &hlds__instmap__MaybeMergedInst_41);
        }
#line 758 "instmap.m"
        if ((hlds__instmap__MaybeMergedInst_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 759 "instmap.m"
          {
#line 765 "instmap.m"
            {
#line 765 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functors\'/7", (MR_String) "no MaybeMergedInst");
#line 765 "instmap.m"
              return;
            }
#line 759 "instmap.m"
          }
#line 758 "instmap.m"
        else
#line 757 "instmap.m"
          hlds__instmap__NewInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MaybeMergedInst_41, (MR_Integer) 0)));
#line 710 "instmap.m"
        {
#line 710 "instmap.m"
          hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__NewInst_21, hlds__instmap__OldInst_18);
        }
#line 710 "instmap.m"
        hlds__instmap__succeeded = !(hlds__instmap__succeeded);
#line 712 "instmap.m"
        if (hlds__instmap__succeeded)
#line 631 "instmap.m"
          {
#line 631 "instmap.m"
            MR_Word hlds__instmap__InstMapping0_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22, (MR_Integer) 0)));

#line 632 "instmap.m"
            hlds__instmap__succeeded = (hlds__instmap__NewInst_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 634 "instmap.m"
            if (hlds__instmap__succeeded)
#line 633 "instmap.m"
              *hlds__instmap__STATE_VARIABLE_InstmapDelta_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 634 "instmap.m"
            else
#line 635 "instmap.m"
              {
#line 635 "instmap.m"
                MR_Word hlds__instmap__InstMapping_81;

#line 635 "instmap.m"
                {
#line 635 "instmap.m"
                  mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_10)), ((MR_Box) (hlds__instmap__NewInst_21)), hlds__instmap__InstMapping0_79, &hlds__instmap__InstMapping_81);
                }
#line 636 "instmap.m"
                {
#line 636 "instmap.m"
                  MR_Word base;
#line 636 "instmap.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 636 "instmap.m"
                  *hlds__instmap__STATE_VARIABLE_InstmapDelta_23 = base;
#line 636 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_81));
#line 636 "instmap.m"
                }
#line 635 "instmap.m"
              }
#line 631 "instmap.m"
          }
#line 712 "instmap.m"
        else
#line 712 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstmapDelta_23 = hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22;
#line 694 "instmap.m"
      }
#line 692 "instmap.m"
  }
#line 184 "instmap.m"
}

#line 180 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_bind_var_to_functor_8_p_0(
#line 180 "instmap.m"
  MR_Word hlds__instmap__Var_9,
#line 180 "instmap.m"
  MR_Word hlds__instmap__Type_10,
#line 180 "instmap.m"
  MR_Word hlds__instmap__ConsId_11,
#line 180 "instmap.m"
  MR_Word hlds__instmap__InstMap_12,
#line 180 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20,
#line 180 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstmapDelta_21,
#line 180 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_22,
#line 180 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_23)
#line 180 "instmap.m"
{
#line 665 "instmap.m"
  {
#line 665 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 665 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 665 "instmap.m"
      {
#line 665 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_InstmapDelta_21 = hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20;
#line 665 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_23 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_22;
#line 665 "instmap.m"
      }
#line 665 "instmap.m"
    else
#line 667 "instmap.m"
      {
#line 667 "instmap.m"
        MR_Word hlds__instmap__InstmappingDelta0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20, (MR_Integer) 0)));
#line 667 "instmap.m"
        MR_Word hlds__instmap__OldInst_16;
#line 667 "instmap.m"
        MR_Word hlds__instmap__NewInst1_18;
#line 667 "instmap.m"
        MR_Word hlds__instmap__NewInst_19;
#line 667 "instmap.m"
        MR_Integer hlds__instmap__Arity_37;
#line 667 "instmap.m"
        MR_Word hlds__instmap__ArgLives_38;
#line 667 "instmap.m"
        MR_Word hlds__instmap__ArgInsts_39;
#line 676 "instmap.m"
        MR_Word hlds__instmap__NewInst0_17;
#line 674 "instmap.m"
        MR_Box hlds__instmap__conv0_NewInst0_17;
#line 741 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_45;
#line 741 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_46;
#line 737 "instmap.m"
        MR_Word hlds__instmap___Det_40;

#line 670 "instmap.m"
        {
#line 670 "instmap.m"
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_12, hlds__instmap__Var_9, &hlds__instmap__OldInst_16);
        }
#line 674 "instmap.m"
        {
#line 674 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstmappingDelta0_15, ((MR_Box) (hlds__instmap__Var_9)), &hlds__instmap__conv0_NewInst0_17);
        }
#line 674 "instmap.m"
        if (hlds__instmap__succeeded)
#line 674 "instmap.m"
          {
#line 674 "instmap.m"
            hlds__instmap__NewInst0_17 = ((MR_Word) hlds__instmap__conv0_NewInst0_17);
#line 674 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 674 "instmap.m"
          }
#line 676 "instmap.m"
        if (hlds__instmap__succeeded)
#line 675 "instmap.m"
          hlds__instmap__NewInst1_18 = hlds__instmap__NewInst0_17;
#line 676 "instmap.m"
        else
#line 677 "instmap.m"
          hlds__instmap__NewInst1_18 = hlds__instmap__OldInst_16;
#line 733 "instmap.m"
        {
#line 733 "instmap.m"
          hlds__instmap__Arity_37 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_22, hlds__instmap__Type_10, hlds__instmap__ConsId_11);
        }
#line 734 "instmap.m"
        {
#line 734 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_37, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_38);
        }
#line 735 "instmap.m"
        {
#line 735 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_37, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_39);
        }
#line 737 "instmap.m"
        {
#line 737 "instmap.m"
          hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__NewInst1_18, hlds__instmap__ConsId_11, hlds__instmap__ArgInsts_39, hlds__instmap__ArgLives_38, (MR_Integer) 0, hlds__instmap__Type_10, &hlds__instmap__STATE_VARIABLE_Inst_23_45, &hlds__instmap___Det_40, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_22, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_46);
        }
#line 741 "instmap.m"
        if (hlds__instmap__succeeded)
#line 740 "instmap.m"
          {
#line 740 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_23 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_46;
#line 740 "instmap.m"
            hlds__instmap__NewInst_19 = hlds__instmap__STATE_VARIABLE_Inst_23_45;
#line 740 "instmap.m"
          }
#line 741 "instmap.m"
        else
#line 742 "instmap.m"
          {
#line 742 "instmap.m"
            {
#line 742 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
#line 742 "instmap.m"
              return;
            }
#line 742 "instmap.m"
          }
#line 682 "instmap.m"
        {
#line 682 "instmap.m"
          hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__NewInst_19, hlds__instmap__OldInst_16);
        }
#line 682 "instmap.m"
        hlds__instmap__succeeded = !(hlds__instmap__succeeded);
#line 684 "instmap.m"
        if (hlds__instmap__succeeded)
#line 631 "instmap.m"
          {
#line 631 "instmap.m"
            MR_Word hlds__instmap__InstMapping0_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20, (MR_Integer) 0)));

#line 632 "instmap.m"
            hlds__instmap__succeeded = (hlds__instmap__NewInst_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 634 "instmap.m"
            if (hlds__instmap__succeeded)
#line 633 "instmap.m"
              *hlds__instmap__STATE_VARIABLE_InstmapDelta_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 634 "instmap.m"
            else
#line 635 "instmap.m"
              {
#line 635 "instmap.m"
                MR_Word hlds__instmap__InstMapping_60;

#line 635 "instmap.m"
                {
#line 635 "instmap.m"
                  mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_9)), ((MR_Box) (hlds__instmap__NewInst_19)), hlds__instmap__InstMapping0_58, &hlds__instmap__InstMapping_60);
                }
#line 636 "instmap.m"
                {
#line 636 "instmap.m"
                  MR_Word base;
#line 636 "instmap.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 636 "instmap.m"
                  *hlds__instmap__STATE_VARIABLE_InstmapDelta_21 = base;
#line 636 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_60));
#line 636 "instmap.m"
                }
#line 635 "instmap.m"
              }
#line 631 "instmap.m"
          }
#line 684 "instmap.m"
        else
#line 684 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstmapDelta_21 = hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20;
#line 667 "instmap.m"
      }
#line 665 "instmap.m"
  }
#line 180 "instmap.m"
}

#line 645 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_2(
#line 645 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 645 "instmap.m"
{
#line 645 "instmap.m"
  {
#line 645 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 645 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 645 "instmap.m"
    {
#line 645 "instmap.m"
      return hlds__instmap__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))));
    }
#line 645 "instmap.m"
    return hlds__instmap__succeeded;
#line 645 "instmap.m"
  }
#line 645 "instmap.m"
}

#line 645 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_1(
#line 645 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 645 "instmap.m"
{
#line 645 "instmap.m"
  {
#line 645 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 645 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 645 "instmap.m"
    {
#line 645 "instmap.m"
      return hlds__instmap__succeeded = hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__645__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))));
    }
#line 645 "instmap.m"
    return hlds__instmap__succeeded;
#line 645 "instmap.m"
  }
#line 645 "instmap.m"
}

#line 174 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0(
#line 174 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 174 "instmap.m"
  MR_Word hlds__instmap__Vars_6,
#line 174 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_0_10,
#line 174 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapDelta_11)
#line 174 "instmap.m"
{
#line 641 "instmap.m"
  {
#line 641 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 641 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMapDelta_0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 641 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMapDelta_11 = hlds__instmap__STATE_VARIABLE_InstMapDelta_0_10;
#line 641 "instmap.m"
    else
#line 644 "instmap.m"
      {
#line 644 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMapDelta_0_10, (MR_Integer) 0)));
#line 644 "instmap.m"
        MR_Word hlds__instmap__InstMapping_9;
#line 644 "instmap.m"
        MR_Word hlds__instmap__V_12_12;
#line 644 "instmap.m"
        MR_Word hlds__instmap__V_16_16;

#line 645 "instmap.m"
        {
#line 645 "instmap.m"
          hlds__instmap__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 645 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
#line 645 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 1) = ((MR_Box) (hlds__instmap__instmap_delta_set_vars_same_4_p_0_1));
#line 645 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 645 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 3) = ((MR_Box) (hlds__instmap__Inst_5));
#line 645 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 645 "instmap.m"
        }
#line 645 "instmap.m"
        {
#line 645 "instmap.m"
          hlds__instmap__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 645 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
#line 645 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 1) = ((MR_Box) (hlds__instmap__instmap_delta_set_vars_same_4_p_0_2));
#line 645 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 645 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 3) = ((MR_Box) (hlds__instmap__V_16_16));
#line 645 "instmap.m"
        }
#line 645 "instmap.m"
        {
#line 645 "instmap.m"
          mercury__require__expect_4_p_0(hlds__instmap__V_12_12, (MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_delta_set_vars_same\'/4", (MR_String) "not_reached");
        }
#line 647 "instmap.m"
        {
#line 647 "instmap.m"
          hlds__instmap__instmapping_set_vars_same_4_p_0(hlds__instmap__Inst_5, hlds__instmap__Vars_6, hlds__instmap__InstMapping0_8, &hlds__instmap__InstMapping_9);
        }
#line 648 "instmap.m"
        {
#line 648 "instmap.m"
          MR_Word base;
#line 648 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 648 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMapDelta_11 = base;
#line 648 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_9));
#line 648 "instmap.m"
        }
#line 644 "instmap.m"
      }
#line 641 "instmap.m"
  }
#line 174 "instmap.m"
}

#line 171 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_set_var_4_p_0(
#line 171 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 171 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 171 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 171 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 171 "instmap.m"
{
#line 630 "instmap.m"
  {
#line 630 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 630 "instmap.m"
    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 630 "instmap.m"
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 630 "instmap.m"
    else
#line 631 "instmap.m"
      {
#line 631 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));

#line 632 "instmap.m"
        hlds__instmap__succeeded = (hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 634 "instmap.m"
        if (hlds__instmap__succeeded)
#line 633 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 634 "instmap.m"
        else
#line 635 "instmap.m"
          {
#line 635 "instmap.m"
            MR_Word hlds__instmap__InstMapping_11;

#line 635 "instmap.m"
            {
#line 635 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__HeadVar__1_1)), ((MR_Box) (hlds__instmap__HeadVar__2_2)), hlds__instmap__InstMapping0_9, &hlds__instmap__InstMapping_11);
            }
#line 636 "instmap.m"
            {
#line 636 "instmap.m"
              MR_Word base;
#line 636 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 636 "instmap.m"
              *hlds__instmap__HeadVar__4_4 = base;
#line 636 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_11));
#line 636 "instmap.m"
            }
#line 635 "instmap.m"
          }
#line 631 "instmap.m"
      }
#line 630 "instmap.m"
  }
#line 171 "instmap.m"
}

#line 616 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_2(
#line 616 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 616 "instmap.m"
{
#line 616 "instmap.m"
  {
#line 616 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 616 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 616 "instmap.m"
    {
#line 616 "instmap.m"
      return hlds__instmap__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))));
    }
#line 616 "instmap.m"
    return hlds__instmap__succeeded;
#line 616 "instmap.m"
  }
#line 616 "instmap.m"
}

#line 616 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_1(
#line 616 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 616 "instmap.m"
{
#line 616 "instmap.m"
  {
#line 616 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 616 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 616 "instmap.m"
    {
#line 616 "instmap.m"
      return hlds__instmap__succeeded = hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__616__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))));
    }
#line 616 "instmap.m"
    return hlds__instmap__succeeded;
#line 616 "instmap.m"
  }
#line 616 "instmap.m"
}

#line 168 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0(
#line 168 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 168 "instmap.m"
  MR_Word hlds__instmap__Vars_6,
#line 168 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_10,
#line 168 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_11)
#line 168 "instmap.m"
{
#line 612 "instmap.m"
  {
#line 612 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 612 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 612 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMap_11 = hlds__instmap__STATE_VARIABLE_InstMap_0_10;
#line 612 "instmap.m"
    else
#line 615 "instmap.m"
      {
#line 615 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_10, (MR_Integer) 0)));
#line 615 "instmap.m"
        MR_Word hlds__instmap__InstMapping_9;
#line 615 "instmap.m"
        MR_Word hlds__instmap__V_12_12;
#line 615 "instmap.m"
        MR_Word hlds__instmap__V_16_16;

#line 616 "instmap.m"
        {
#line 616 "instmap.m"
          hlds__instmap__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 616 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
#line 616 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 1) = ((MR_Box) (hlds__instmap__instmap_set_vars_same_4_p_0_1));
#line 616 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 616 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 3) = ((MR_Box) (hlds__instmap__Inst_5));
#line 616 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 616 "instmap.m"
        }
#line 616 "instmap.m"
        {
#line 616 "instmap.m"
          hlds__instmap__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 616 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
#line 616 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 1) = ((MR_Box) (hlds__instmap__instmap_set_vars_same_4_p_0_2));
#line 616 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 616 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 3) = ((MR_Box) (hlds__instmap__V_16_16));
#line 616 "instmap.m"
        }
#line 616 "instmap.m"
        {
#line 616 "instmap.m"
          mercury__require__expect_4_p_0(hlds__instmap__V_12_12, (MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_set_vars_same\'/4", (MR_String) "not_reached");
        }
#line 618 "instmap.m"
        {
#line 618 "instmap.m"
          hlds__instmap__instmapping_set_vars_same_4_p_0(hlds__instmap__Inst_5, hlds__instmap__Vars_6, hlds__instmap__InstMapping0_8, &hlds__instmap__InstMapping_9);
        }
#line 619 "instmap.m"
        {
#line 619 "instmap.m"
          MR_Word base;
#line 619 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 619 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMap_11 = base;
#line 619 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_9));
#line 619 "instmap.m"
        }
#line 615 "instmap.m"
      }
#line 612 "instmap.m"
  }
#line 168 "instmap.m"
}

#line 166 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_set_vars_corresponding_4_p_0(
#line 166 "instmap.m"
  MR_Word hlds__instmap__Vars_5,
#line 166 "instmap.m"
  MR_Word hlds__instmap__Insts_6,
#line 166 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_10,
#line 166 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_11)
#line 166 "instmap.m"
{
#line 586 "instmap.m"
  {
#line 586 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 586 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 586 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMap_11 = hlds__instmap__STATE_VARIABLE_InstMap_0_10;
#line 586 "instmap.m"
    else
#line 589 "instmap.m"
      {
#line 589 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_10, (MR_Integer) 0)));
#line 589 "instmap.m"
        MR_Word hlds__instmap__InstMapping_9;

#line 590 "instmap.m"
        {
#line 590 "instmap.m"
          hlds__instmap__instmapping_set_vars_corresponding_4_p_0(hlds__instmap__Vars_5, hlds__instmap__Insts_6, hlds__instmap__InstMapping0_8, &hlds__instmap__InstMapping_9);
        }
#line 592 "instmap.m"
        {
#line 592 "instmap.m"
          MR_Word base;
#line 592 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 592 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMap_11 = base;
#line 592 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_9));
#line 592 "instmap.m"
        }
#line 589 "instmap.m"
      }
#line 586 "instmap.m"
  }
#line 166 "instmap.m"
}

#line 164 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_set_vars_3_p_0(
#line 164 "instmap.m"
  MR_Word hlds__instmap__VarsInsts_4,
#line 164 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_8,
#line 164 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_9)
#line 164 "instmap.m"
{
#line 567 "instmap.m"
  {
#line 567 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 567 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 567 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMap_9 = hlds__instmap__STATE_VARIABLE_InstMap_0_8;
#line 567 "instmap.m"
    else
#line 570 "instmap.m"
      {
#line 570 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_8, (MR_Integer) 0)));
#line 570 "instmap.m"
        MR_Word hlds__instmap__InstMapping_7;

#line 571 "instmap.m"
        {
#line 571 "instmap.m"
          hlds__instmap__instmapping_set_vars_3_p_0(hlds__instmap__VarsInsts_4, hlds__instmap__InstMapping0_6, &hlds__instmap__InstMapping_7);
        }
#line 572 "instmap.m"
        {
#line 572 "instmap.m"
          MR_Word base;
#line 572 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 572 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMap_9 = base;
#line 572 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_7));
#line 572 "instmap.m"
        }
#line 570 "instmap.m"
      }
#line 567 "instmap.m"
  }
#line 164 "instmap.m"
}

#line 158 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_set_var_4_p_0(
#line 158 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 158 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 158 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 158 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 158 "instmap.m"
{
#line 561 "instmap.m"
  {
#line 561 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 561 "instmap.m"
    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 561 "instmap.m"
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 561 "instmap.m"
    else
#line 562 "instmap.m"
      {
#line 562 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));
#line 562 "instmap.m"
        MR_Word hlds__instmap__InstMapping_10;

#line 563 "instmap.m"
        {
#line 563 "instmap.m"
          mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__HeadVar__1_1)), ((MR_Box) (hlds__instmap__HeadVar__2_2)), hlds__instmap__InstMapping0_9, &hlds__instmap__InstMapping_10);
        }
#line 562 "instmap.m"
        {
#line 562 "instmap.m"
          MR_Word base;
#line 562 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 562 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = base;
#line 562 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_10));
#line 562 "instmap.m"
        }
#line 562 "instmap.m"
      }
#line 561 "instmap.m"
  }
#line 158 "instmap.m"
}

#line 153 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_insert_var_4_p_0(
#line 153 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 153 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 153 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 153 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 153 "instmap.m"
{
#line 651 "instmap.m"
  {
#line 651 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 651 "instmap.m"
    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 651 "instmap.m"
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 651 "instmap.m"
    else
#line 652 "instmap.m"
      {
#line 652 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));

#line 653 "instmap.m"
        hlds__instmap__succeeded = (hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 655 "instmap.m"
        if (hlds__instmap__succeeded)
#line 654 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 655 "instmap.m"
        else
#line 656 "instmap.m"
          {
#line 656 "instmap.m"
            MR_Word hlds__instmap__InstMapping_11;

#line 656 "instmap.m"
            {
#line 656 "instmap.m"
              mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__HeadVar__1_1)), ((MR_Box) (hlds__instmap__HeadVar__2_2)), hlds__instmap__InstMapping0_9, &hlds__instmap__InstMapping_11);
            }
#line 657 "instmap.m"
            {
#line 657 "instmap.m"
              MR_Word base;
#line 657 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 657 "instmap.m"
              *hlds__instmap__HeadVar__4_4 = base;
#line 657 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_11));
#line 657 "instmap.m"
            }
#line 656 "instmap.m"
          }
#line 652 "instmap.m"
      }
#line 651 "instmap.m"
  }
#line 153 "instmap.m"
}

#line 147 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_lookup_vars_3_p_0(
#line 147 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 147 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 147 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 147 "instmap.m"
{
#line 556 "instmap.m"
  {
#line 556 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 556 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 556 "instmap.m"
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 556 "instmap.m"
    else
#line 557 "instmap.m"
      {
#line 557 "instmap.m"
        MR_Word hlds__instmap__Arg_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 557 "instmap.m"
        MR_Word hlds__instmap__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 557 "instmap.m"
        MR_Word hlds__instmap__Inst_8;
#line 557 "instmap.m"
        MR_Word hlds__instmap__Insts_9;

#line 558 "instmap.m"
        {
#line 558 "instmap.m"
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__HeadVar__1_1, hlds__instmap__Arg_6, &hlds__instmap__Inst_8);
        }
#line 559 "instmap.m"
        {
#line 559 "instmap.m"
          hlds__instmap__instmap_lookup_vars_3_p_0(hlds__instmap__HeadVar__1_1, hlds__instmap__Args_7, &hlds__instmap__Insts_9);
        }
#line 557 "instmap.m"
        {
#line 557 "instmap.m"
          MR_Word base;
#line 557 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = base;
#line 557 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Inst_8));
#line 557 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__Insts_9));
#line 557 "instmap.m"
        }
#line 557 "instmap.m"
      }
#line 556 "instmap.m"
  }
#line 147 "instmap.m"
}

#line 141 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_lookup_var_3_p_0(
#line 141 "instmap.m"
  MR_Word hlds__instmap__InstMapDelta_4,
#line 141 "instmap.m"
  MR_Word hlds__instmap__Var_5,
#line 141 "instmap.m"
  MR_Word * hlds__instmap__Inst_6)
#line 141 "instmap.m"
{
#line 552 "instmap.m"
  {
#line 552 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 552 "instmap.m"
    MR_Word hlds__instmap__InstPrime_7;

#line 545 "instmap.m"
    if ((hlds__instmap__InstMapDelta_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 545 "instmap.m"
      {
#line 545 "instmap.m"
        hlds__instmap__InstPrime_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 545 "instmap.m"
        hlds__instmap__succeeded = MR_TRUE;
#line 545 "instmap.m"
      }
#line 545 "instmap.m"
    else
#line 546 "instmap.m"
      {
#line 546 "instmap.m"
        MR_Word hlds__instmap__InstMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_4, (MR_Integer) 0)));
#line 547 "instmap.m"
        MR_Box hlds__instmap__conv0_InstPrime_7;

#line 547 "instmap.m"
        {
#line 547 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMap_12, ((MR_Box) (hlds__instmap__Var_5)), &hlds__instmap__conv0_InstPrime_7);
        }
#line 547 "instmap.m"
        if (hlds__instmap__succeeded)
#line 547 "instmap.m"
          {
#line 547 "instmap.m"
            hlds__instmap__InstPrime_7 = ((MR_Word) hlds__instmap__conv0_InstPrime_7);
#line 547 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 547 "instmap.m"
          }
#line 546 "instmap.m"
      }
#line 552 "instmap.m"
    if (hlds__instmap__succeeded)
#line 551 "instmap.m"
      *hlds__instmap__Inst_6 = hlds__instmap__InstPrime_7;
#line 552 "instmap.m"
    else
#line 553 "instmap.m"
      {
#line 553 "instmap.m"
        {
#line 553 "instmap.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_delta_lookup_var\'/3", (MR_String) "var not in instmap");
#line 553 "instmap.m"
          return;
        }
#line 553 "instmap.m"
      }
#line 552 "instmap.m"
  }
#line 141 "instmap.m"
}

#line 135 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__instmap_delta_search_var_3_p_0(
#line 135 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 135 "instmap.m"
  MR_Word hlds__instmap__Var_2,
#line 135 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 135 "instmap.m"
{
#line 545 "instmap.m"
  {
#line 545 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 545 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 545 "instmap.m"
      {
#line 545 "instmap.m"
        *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 545 "instmap.m"
        hlds__instmap__succeeded = MR_TRUE;
#line 545 "instmap.m"
      }
#line 545 "instmap.m"
    else
#line 546 "instmap.m"
      {
#line 546 "instmap.m"
        MR_Word hlds__instmap__InstMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 547 "instmap.m"
        MR_Box hlds__instmap__conv0_HeadVar__3_3;

#line 547 "instmap.m"
        {
#line 547 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMap_5, ((MR_Box) (hlds__instmap__Var_2)), &hlds__instmap__conv0_HeadVar__3_3);
        }
#line 547 "instmap.m"
        if (hlds__instmap__succeeded)
#line 547 "instmap.m"
          {
#line 547 "instmap.m"
            *hlds__instmap__HeadVar__3_3 = ((MR_Word) hlds__instmap__conv0_HeadVar__3_3);
#line 547 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 547 "instmap.m"
          }
#line 546 "instmap.m"
      }
#line 545 "instmap.m"
    return hlds__instmap__succeeded;
#line 545 "instmap.m"
  }
#line 135 "instmap.m"
}

#line 130 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_lookup_var_3_p_0(
#line 130 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 130 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 130 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 130 "instmap.m"
{
#line 531 "instmap.m"
  {
#line 531 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 531 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 531 "instmap.m"
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 531 "instmap.m"
    else
#line 532 "instmap.m"
      {
#line 532 "instmap.m"
        MR_Word hlds__instmap__InstMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 541 "instmap.m"
        MR_Word hlds__instmap__VarInst_11;
#line 539 "instmap.m"
        MR_Box hlds__instmap__conv0_VarInst_11;

#line 539 "instmap.m"
        {
#line 539 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMap_5, ((MR_Box) (hlds__instmap__HeadVar__2_2)), &hlds__instmap__conv0_VarInst_11);
        }
#line 539 "instmap.m"
        if (hlds__instmap__succeeded)
#line 539 "instmap.m"
          {
#line 539 "instmap.m"
            hlds__instmap__VarInst_11 = ((MR_Word) hlds__instmap__conv0_VarInst_11);
#line 539 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 539 "instmap.m"
          }
#line 541 "instmap.m"
        if (hlds__instmap__succeeded)
#line 540 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = hlds__instmap__VarInst_11;
#line 541 "instmap.m"
        else
#line 542 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 532 "instmap.m"
      }
#line 531 "instmap.m"
  }
#line 130 "instmap.m"
}

#line 123 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_changed_vars_5_p_0(
#line 123 "instmap.m"
  MR_Word hlds__instmap__InstMapA_6,
#line 123 "instmap.m"
  MR_Word hlds__instmap__InstMapB_7,
#line 123 "instmap.m"
  MR_Word hlds__instmap__VarTypes_8,
#line 123 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_9,
#line 123 "instmap.m"
  MR_Word * hlds__instmap__ChangedVars_10)
#line 123 "instmap.m"
{
#line 8425 "hlds.instmap.c"
  {
#line 8427 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 8430 "hlds.instmap.c"
    if ((hlds__instmap__InstMapB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8432 "hlds.instmap.c"
      {
#line 513 "instmap.m"
        {
#line 513 "instmap.m"
          parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__ChangedVars_10);
#line 513 "instmap.m"
          return;
        }
#line 8441 "hlds.instmap.c"
      }
#line 8443 "hlds.instmap.c"
    else
#line 8445 "hlds.instmap.c"
      {
#line 8447 "hlds.instmap.c"
        MR_Word hlds__instmap__VarsB_11;
#line 8449 "hlds.instmap.c"
        MR_Word hlds__instmap__InstMapping_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapB_7, (MR_Integer) 0)));

#line 478 "instmap.m"
        {
#line 478 "instmap.m"
          mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_12, &hlds__instmap__VarsB_11);
        }
#line 505 "instmap.m"
        {
#line 505 "instmap.m"
          hlds__instmap__instmap_changed_vars_2_6_p_0(hlds__instmap__VarsB_11, hlds__instmap__InstMapA_6, hlds__instmap__InstMapB_7, hlds__instmap__VarTypes_8, hlds__instmap__ModuleInfo_9, hlds__instmap__ChangedVars_10);
#line 505 "instmap.m"
          return;
        }
#line 8464 "hlds.instmap.c"
      }
#line 8466 "hlds.instmap.c"
  }
#line 123 "instmap.m"
}

#line 482 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_bound_vars_3_p_0_1(
#line 482 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 482 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 482 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 482 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_3,
#line 482 "instmap.m"
  MR_Box * hlds__instmap__wrapper_arg_4)
#line 482 "instmap.m"
{
#line 482 "instmap.m"
  {
#line 482 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;
#line 482 "instmap.m"
    MR_Word hlds__instmap__conv0_STATE_VARIABLE_BoundVars_11;

#line 482 "instmap.m"
    {
#line 482 "instmap.m"
      hlds__instmap__instmap_bound_vars_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3), &hlds__instmap__conv0_STATE_VARIABLE_BoundVars_11);
    }
#line 482 "instmap.m"
    *hlds__instmap__wrapper_arg_4 = ((MR_Box) (hlds__instmap__conv0_STATE_VARIABLE_BoundVars_11));
#line 482 "instmap.m"
  }
#line 482 "instmap.m"
}

#line 112 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_bound_vars_3_p_0(
#line 112 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 112 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 112 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 112 "instmap.m"
{
#line 480 "instmap.m"
  {
#line 480 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 480 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 480 "instmap.m"
      {
#line 480 "instmap.m"
        {
#line 480 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 480 "instmap.m"
      }
#line 480 "instmap.m"
    else
#line 481 "instmap.m"
      {
#line 481 "instmap.m"
        MR_Word hlds__instmap__InstMapping_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 481 "instmap.m"
        MR_Word hlds__instmap__V_8_8;
#line 481 "instmap.m"
        MR_Word hlds__instmap__V_9_9;
#line 482 "instmap.m"
        MR_Box hlds__instmap__conv1_HeadVar__3_3;

#line 482 "instmap.m"
        {
#line 482 "instmap.m"
          hlds__instmap__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 482 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_8_8, 0) = ((MR_Box) (&hlds__instmap_scalar_common_4[0]));
#line 482 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_8_8, 1) = ((MR_Box) (hlds__instmap__instmap_bound_vars_3_p_0_1));
#line 482 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 482 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_8_8, 3) = ((MR_Box) (hlds__instmap__HeadVar__2_2));
#line 482 "instmap.m"
        }
#line 483 "instmap.m"
        {
#line 483 "instmap.m"
          hlds__instmap__V_9_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 482 "instmap.m"
        {
#line 482 "instmap.m"
          mercury__map__foldl_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__instmap_scalar_common_1[1], hlds__instmap__V_8_8, hlds__instmap__InstMapping_5, ((MR_Box) (hlds__instmap__V_9_9)), &hlds__instmap__conv1_HeadVar__3_3);
        }
#line 482 "instmap.m"
        *hlds__instmap__HeadVar__3_3 = ((MR_Word) hlds__instmap__conv1_HeadVar__3_3);
#line 481 "instmap.m"
      }
#line 480 "instmap.m"
  }
#line 112 "instmap.m"
}

#line 106 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_changed_vars_2_p_0(
#line 106 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 106 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__2_2)
#line 106 "instmap.m"
{
#line 495 "instmap.m"
  {
#line 495 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 495 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 495 "instmap.m"
      {
#line 496 "instmap.m"
        {
#line 496 "instmap.m"
          parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__HeadVar__2_2);
#line 496 "instmap.m"
          return;
        }
#line 495 "instmap.m"
      }
#line 495 "instmap.m"
    else
#line 497 "instmap.m"
      {
#line 497 "instmap.m"
        MR_Word hlds__instmap__InstMapping_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 497 "instmap.m"
        MR_Word hlds__instmap__ChangedVarsList_6;

#line 498 "instmap.m"
        {
#line 498 "instmap.m"
          mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_4, &hlds__instmap__ChangedVarsList_6);
        }
#line 499 "instmap.m"
        {
#line 499 "instmap.m"
          parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__ChangedVarsList_6, hlds__instmap__HeadVar__2_2);
#line 499 "instmap.m"
          return;
        }
#line 497 "instmap.m"
      }
#line 495 "instmap.m"
  }
#line 106 "instmap.m"
}

#line 101 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_vars_list_2_p_0(
#line 101 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 101 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__2_2)
#line 101 "instmap.m"
{
#line 476 "instmap.m"
  {
#line 476 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 476 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 476 "instmap.m"
      *hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 476 "instmap.m"
    else
#line 477 "instmap.m"
      {
#line 477 "instmap.m"
        MR_Word hlds__instmap__InstMapping_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 478 "instmap.m"
        {
#line 478 "instmap.m"
          mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_3, hlds__instmap__HeadVar__2_2);
#line 478 "instmap.m"
          return;
        }
#line 477 "instmap.m"
      }
#line 476 "instmap.m"
  }
#line 101 "instmap.m"
}

#line 97 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_vars_2_p_0(
#line 97 "instmap.m"
  MR_Word hlds__instmap__Instmap_3,
#line 97 "instmap.m"
  MR_Word * hlds__instmap__Vars_4)
#line 97 "instmap.m"
{
#line 472 "instmap.m"
  {
#line 472 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 472 "instmap.m"
    MR_Word hlds__instmap__VarsList_5;

#line 476 "instmap.m"
    if ((hlds__instmap__Instmap_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 476 "instmap.m"
      hlds__instmap__VarsList_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 476 "instmap.m"
    else
#line 477 "instmap.m"
      {
#line 477 "instmap.m"
        MR_Word hlds__instmap__InstMapping_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Instmap_3, (MR_Integer) 0)));

#line 478 "instmap.m"
        {
#line 478 "instmap.m"
          mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_7, &hlds__instmap__VarsList_5);
        }
#line 477 "instmap.m"
      }
#line 474 "instmap.m"
    {
#line 474 "instmap.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__VarsList_5, hlds__instmap__Vars_4);
#line 474 "instmap.m"
      return;
    }
#line 472 "instmap.m"
  }
#line 97 "instmap.m"
}

#line 464 "instmap.m"
static MR_Box MR_CALL 
hlds__instmap__instmap_delta_bind_vars_1_f_0_1(
#line 464 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 464 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1)
#line 464 "instmap.m"
{
#line 464 "instmap.m"
  {
#line 464 "instmap.m"
    MR_Box hlds__instmap__wrapper_arg_2;
#line 464 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;
#line 464 "instmap.m"
    MR_Word hlds__instmap__conv0_HeadVar__2_2;

#line 464 "instmap.m"
    {
#line 464 "instmap.m"
      hlds__instmap__conv0_HeadVar__2_2 = hlds__instmap__pair_with_ground_1_f_0(((MR_Word) hlds__instmap__wrapper_arg_1));
    }
#line 464 "instmap.m"
    hlds__instmap__wrapper_arg_2 = ((MR_Box) (hlds__instmap__conv0_HeadVar__2_2));
#line 464 "instmap.m"
    return hlds__instmap__wrapper_arg_2;
#line 464 "instmap.m"
  }
#line 464 "instmap.m"
}

#line 91 "instmap.m"
MR_Word MR_CALL 
hlds__instmap__instmap_delta_bind_vars_1_f_0(
#line 91 "instmap.m"
  MR_Word hlds__instmap__Vars_3)
#line 91 "instmap.m"
{
#line 457 "instmap.m"
  {
#line 457 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 457 "instmap.m"
    MR_Word hlds__instmap__InstMapDelta_4;
#line 457 "instmap.m"
    MR_Word hlds__instmap__VarsAndGround_5;
#line 457 "instmap.m"
    MR_Word hlds__instmap__Instmapping_14;

#line 464 "instmap.m"
    {
#line 464 "instmap.m"
      hlds__instmap__VarsAndGround_5 = mercury__list__map_2_f_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &hlds__instmap_scalar_common_2[0], (MR_Word) &hlds__instmap_scalar_common_2[3], hlds__instmap__Vars_3);
    }
#line 419 "instmap.m"
    {
#line 419 "instmap.m"
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__VarsAndGround_5, &hlds__instmap__Instmapping_14);
    }
#line 418 "instmap.m"
    {
#line 418 "instmap.m"
      hlds__instmap__InstMapDelta_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 418 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_4, 0) = ((MR_Box) (hlds__instmap__Instmapping_14));
#line 418 "instmap.m"
    }
#line 457 "instmap.m"
    return hlds__instmap__InstMapDelta_4;
#line 457 "instmap.m"
  }
#line 91 "instmap.m"
}

#line 90 "instmap.m"
MR_Word MR_CALL 
hlds__instmap__instmap_delta_bind_var_1_f_0(
#line 90 "instmap.m"
  MR_Word hlds__instmap__Var_3)
#line 90 "instmap.m"
{
#line 454 "instmap.m"
  {
#line 454 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 454 "instmap.m"
    MR_Word hlds__instmap__InstMapDelta_4;
#line 454 "instmap.m"
    MR_Word hlds__instmap__V_5_5;
#line 454 "instmap.m"
    MR_Word hlds__instmap__V_6_6;
#line 454 "instmap.m"
    MR_Word hlds__instmap__Instmapping_12;

#line 455 "instmap.m"
    {
#line 455 "instmap.m"
      hlds__instmap__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 455 "instmap.m"
      MR_hl_field(MR_mktag(0), hlds__instmap__V_6_6, 0) = ((MR_Box) (hlds__instmap__Var_3));
#line 455 "instmap.m"
      MR_hl_field(MR_mktag(0), hlds__instmap__V_6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__instmap_scalar_common_2[2])));
#line 455 "instmap.m"
    }
#line 455 "instmap.m"
    {
#line 455 "instmap.m"
      hlds__instmap__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 455 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__V_5_5, 0) = ((MR_Box) (hlds__instmap__V_6_6));
#line 455 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__V_5_5, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 455 "instmap.m"
    }
#line 419 "instmap.m"
    {
#line 419 "instmap.m"
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_5_5, &hlds__instmap__Instmapping_12);
    }
#line 418 "instmap.m"
    {
#line 418 "instmap.m"
      hlds__instmap__InstMapDelta_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 418 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_4, 0) = ((MR_Box) (hlds__instmap__Instmapping_12));
#line 418 "instmap.m"
    }
#line 454 "instmap.m"
    return hlds__instmap__InstMapDelta_4;
#line 454 "instmap.m"
  }
#line 90 "instmap.m"
}

#line 89 "instmap.m"
MR_Word MR_CALL 
hlds__instmap__instmap_delta_bind_no_var_0_f_0(void)
#line 89 "instmap.m"
{
#line 451 "instmap.m"
  {
#line 451 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 451 "instmap.m"
    MR_Word hlds__instmap__InstMapDelta_2;
#line 451 "instmap.m"
    MR_Word hlds__instmap__Instmapping_5;

#line 419 "instmap.m"
    {
#line 419 "instmap.m"
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__instmap__Instmapping_5);
    }
#line 418 "instmap.m"
    {
#line 418 "instmap.m"
      hlds__instmap__InstMapDelta_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 418 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_2, 0) = ((MR_Box) (hlds__instmap__Instmapping_5));
#line 418 "instmap.m"
    }
#line 451 "instmap.m"
    return hlds__instmap__InstMapDelta_2;
#line 451 "instmap.m"
  }
#line 89 "instmap.m"
}

#line 86 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_from_mode_list_4_p_0(
#line 86 "instmap.m"
  MR_Word hlds__instmap__Var_5,
#line 86 "instmap.m"
  MR_Word hlds__instmap__Modes_6,
#line 86 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_7,
#line 86 "instmap.m"
  MR_Word * hlds__instmap__InstMapDelta_8)
#line 86 "instmap.m"
{
#line 428 "instmap.m"
  {
#line 428 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 428 "instmap.m"
    MR_Word hlds__instmap__InstMapDelta0_9;
#line 428 "instmap.m"
    MR_Word hlds__instmap__InstMapping_10;

#line 399 "instmap.m"
    {
#line 399 "instmap.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &hlds__instmap__InstMapping_10);
    }
#line 398 "instmap.m"
    {
#line 398 "instmap.m"
      hlds__instmap__InstMapDelta0_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 398 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta0_9, 0) = ((MR_Box) (hlds__instmap__InstMapping_10));
#line 398 "instmap.m"
    }
#line 430 "instmap.m"
    {
#line 430 "instmap.m"
      hlds__instmap__instmap_delta_from_mode_list_2_5_p_0(hlds__instmap__Var_5, hlds__instmap__Modes_6, hlds__instmap__ModuleInfo_7, hlds__instmap__InstMapDelta0_9, hlds__instmap__InstMapDelta_8);
#line 430 "instmap.m"
      return;
    }
#line 428 "instmap.m"
  }
#line 86 "instmap.m"
}

#line 83 "instmap.m"
MR_Word MR_CALL 
hlds__instmap__instmap_delta_from_assoc_list_1_f_0(
#line 83 "instmap.m"
  MR_Word hlds__instmap__AL_3)
#line 83 "instmap.m"
{
#line 418 "instmap.m"
  {
#line 418 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 418 "instmap.m"
    MR_Word hlds__instmap__HeadVar__2_2;
#line 418 "instmap.m"
    MR_Word hlds__instmap__Instmapping_4;

#line 419 "instmap.m"
    {
#line 419 "instmap.m"
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__AL_3, &hlds__instmap__Instmapping_4);
    }
#line 418 "instmap.m"
    {
#line 418 "instmap.m"
      hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 418 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, 0) = ((MR_Box) (hlds__instmap__Instmapping_4));
#line 418 "instmap.m"
    }
#line 418 "instmap.m"
    return hlds__instmap__HeadVar__2_2;
#line 418 "instmap.m"
  }
#line 83 "instmap.m"
}

#line 80 "instmap.m"
MR_Word MR_CALL 
hlds__instmap__instmap_from_assoc_list_1_f_0(
#line 80 "instmap.m"
  MR_Word hlds__instmap__AL_3)
#line 80 "instmap.m"
{
#line 415 "instmap.m"
  {
#line 415 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 415 "instmap.m"
    MR_Word hlds__instmap__HeadVar__2_2;
#line 415 "instmap.m"
    MR_Word hlds__instmap__Instmapping_4;

#line 416 "instmap.m"
    {
#line 416 "instmap.m"
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__AL_3, &hlds__instmap__Instmapping_4);
    }
#line 415 "instmap.m"
    {
#line 415 "instmap.m"
      hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 415 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, 0) = ((MR_Box) (hlds__instmap__Instmapping_4));
#line 415 "instmap.m"
    }
#line 415 "instmap.m"
    return hlds__instmap__HeadVar__2_2;
#line 415 "instmap.m"
  }
#line 80 "instmap.m"
}

#line 78 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__instmap_delta_is_unreachable_1_p_0(
#line 78 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1)
#line 78 "instmap.m"
{
#line 411 "instmap.m"
  {
#line 411 "instmap.m"
    MR_bool hlds__instmap__succeeded = (hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 411 "instmap.m"
    return hlds__instmap__succeeded;
#line 411 "instmap.m"
  }
#line 78 "instmap.m"
}

#line 74 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__instmap_delta_is_reachable_1_p_0(
#line 74 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1)
#line 74 "instmap.m"
{
#line 409 "instmap.m"
  {
#line 409 "instmap.m"
    MR_bool hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 409 "instmap.m"
    MR_Word hlds__instmap__V_2_2;

#line 409 "instmap.m"
    if (hlds__instmap__succeeded)
#line 409 "instmap.m"
      hlds__instmap__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 409 "instmap.m"
    return hlds__instmap__succeeded;
#line 409 "instmap.m"
  }
#line 74 "instmap.m"
}

#line 66 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__instmap_is_unreachable_1_p_0(
#line 66 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1)
#line 66 "instmap.m"
{
#line 407 "instmap.m"
  {
#line 407 "instmap.m"
    MR_bool hlds__instmap__succeeded = (hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 407 "instmap.m"
    return hlds__instmap__succeeded;
#line 407 "instmap.m"
  }
#line 66 "instmap.m"
}

#line 62 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__instmap_is_reachable_1_p_0(
#line 62 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1)
#line 62 "instmap.m"
{
#line 405 "instmap.m"
  {
#line 405 "instmap.m"
    MR_bool hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 405 "instmap.m"
    MR_Word hlds__instmap__V_2_2;

#line 405 "instmap.m"
    if (hlds__instmap__succeeded)
#line 405 "instmap.m"
      hlds__instmap__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 405 "instmap.m"
    return hlds__instmap__succeeded;
#line 405 "instmap.m"
  }
#line 62 "instmap.m"
}

#line 54 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_init_unreachable_1_p_0(
#line 54 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1)
#line 54 "instmap.m"
{
#line 401 "instmap.m"
  {
#line 401 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 401 "instmap.m"
    *hlds__instmap__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 401 "instmap.m"
  }
#line 54 "instmap.m"
}

#line 50 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_init_reachable_1_p_0(
#line 50 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1)
#line 50 "instmap.m"
{
#line 398 "instmap.m"
  {
#line 398 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 398 "instmap.m"
    MR_Word hlds__instmap__InstMapping_2;

#line 399 "instmap.m"
    {
#line 399 "instmap.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &hlds__instmap__InstMapping_2);
    }
#line 398 "instmap.m"
    {
#line 398 "instmap.m"
      MR_Word base;
#line 398 "instmap.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 398 "instmap.m"
      *hlds__instmap__HeadVar__1_1 = base;
#line 398 "instmap.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_2));
#line 398 "instmap.m"
    }
#line 398 "instmap.m"
  }
#line 50 "instmap.m"
}

#line 46 "instmap.m"
void MR_CALL 
hlds__instmap__init_unreachable_1_p_0(
#line 46 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1)
#line 46 "instmap.m"
{
#line 396 "instmap.m"
  {
#line 396 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 396 "instmap.m"
    *hlds__instmap__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 396 "instmap.m"
  }
#line 46 "instmap.m"
}

#line 42 "instmap.m"
void MR_CALL 
hlds__instmap__init_reachable_1_p_0(
#line 42 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1)
#line 42 "instmap.m"
{
#line 393 "instmap.m"
  {
#line 393 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 393 "instmap.m"
    MR_Word hlds__instmap__InstMapping_2;

#line 394 "instmap.m"
    {
#line 394 "instmap.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &hlds__instmap__InstMapping_2);
    }
#line 393 "instmap.m"
    {
#line 393 "instmap.m"
      MR_Word base;
#line 393 "instmap.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 393 "instmap.m"
      *hlds__instmap__HeadVar__1_1 = base;
#line 393 "instmap.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_2));
#line 393 "instmap.m"
    }
#line 393 "instmap.m"
  }
#line 42 "instmap.m"
}

void mercury__hlds__instmap__init(void)
{
}

void mercury__hlds__instmap__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__instmap__hlds__instmap__type_ctor_info_arm_instmap_0);
	MR_register_type_ctor_info(&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0);
	MR_register_type_ctor_info(&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0);
	MR_register_type_ctor_info(&hlds__instmap__hlds__instmap__type_ctor_info_instmapping_0);
	MR_register_type_ctor_info(&hlds__instmap__hlds__instmap__type_ctor_info_overlay_how_0);
}

void mercury__hlds__instmap__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.instmap. */
