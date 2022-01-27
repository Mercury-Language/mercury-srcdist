/*
** Automatically generated from `instmap.m'
** by the Mercury compiler,
** version 13.05.2, configured for x86_64-apple-darwin12.5.0.
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
#include "std_util.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 136 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 139 "hlds.instmap.c"
static const MR_FA_TypeInfo_Struct1 hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 142 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 145 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 148 "hlds.instmap.c"
static const MR_VA_PseudoTypeInfo_Struct0 hlds__instmap____vpti_pred_0;

#line 151 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 154 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 157 "hlds.instmap.c"
static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_arm_instmap_0_0[2];

#line 160 "hlds.instmap.c"
static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_arm_instmap_0_0;

#line 163 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_arm_instmap_0_0[1];

#line 166 "hlds.instmap.c"
static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_arm_instmap_0[1];

#line 169 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_arm_instmap_0[1];

#line 172 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_arm_instmap_0[1];

#line 175 "hlds.instmap.c"
static const MR_FA_TypeInfo_Struct2 hlds__instmap__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 178 "hlds.instmap.c"
static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_instmap_0_0[1];

#line 181 "hlds.instmap.c"
static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_0;

#line 184 "hlds.instmap.c"
static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_1;

#line 187 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_0[1];

#line 190 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_1[1];

#line 193 "hlds.instmap.c"
static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_instmap_0[2];

#line 196 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_instmap_0[2];

#line 199 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_instmap_0[2];

#line 202 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0;

#line 205 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1;

#line 208 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2;

#line 211 "hlds.instmap.c"
static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_value_ordered_overlay_how_0[3];

#line 214 "hlds.instmap.c"
static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_name_ordered_overlay_how_0[3];

#line 217 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_overlay_how_0[3];

#line 220 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____arm_instmap_0_0_10001(
#line 223 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 225 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2);

#line 228 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____arm_instmap_0_0_10001(
#line 231 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 233 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 235 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3);

#line 238 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_0_0_10001(
#line 241 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 243 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2);

#line 246 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmap_0_0_10001(
#line 249 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 251 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 253 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3);

#line 256 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_delta_0_0_10001(
#line 259 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 261 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2);

#line 264 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmap_delta_0_0_10001(
#line 267 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 269 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 271 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3);

#line 274 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0_10001(
#line 277 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 279 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2);

#line 282 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0_10001(
#line 285 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 287 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 289 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3);

#line 292 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____overlay_how_0_0_10001(
#line 295 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 297 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2);

#line 300 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____overlay_how_0_0_10001(
#line 303 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 305 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 307 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3);

#line 1309 "instmap.m"
static void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_p_0(
#line 1309 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1309 "instmap.m"
  MR_Word hlds__instmap__InstMappingA_3,
#line 1309 "instmap.m"
  MR_Word hlds__instmap__InstMappingB_4,
#line 1309 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_5,
#line 1309 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_6,
#line 1309 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7,
#line 1309 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_8);

#line 607 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__607__1_2_p_0(
#line 607 "instmap.m"
  MR_Word hlds__instmap__Inst_10,
#line 607 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_20);

#line 585 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__585__1_2_p_0(
#line 585 "instmap.m"
  MR_Word hlds__instmap__Inst_8,
#line 585 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_19);

#line 650 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__650__1_2_p_0(
#line 650 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 650 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_17);

#line 621 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__621__1_2_p_0(
#line 621 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 621 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_17);

#line 392 "instmap.m"
static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0(
#line 392 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1,
#line 392 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 392 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3);

#line 392 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0(
#line 392 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 392 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2);

#line 1356 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_delta_apply_sub_2_5_p_0(
#line 1356 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1356 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 1356 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 1356 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_Instmapping_0_4,
#line 1356 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_Instmapping_5);

#line 1231 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_instmapping_delta_2_9_p_0(
#line 1231 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1231 "instmap.m"
  MR_Word hlds__instmap__InstMap_2,
#line 1231 "instmap.m"
  MR_Word hlds__instmap__VarTypes_3,
#line 1231 "instmap.m"
  MR_Word hlds__instmap__InstMappingA_4,
#line 1231 "instmap.m"
  MR_Word hlds__instmap__InstMappingB_5,
#line 1231 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_6,
#line 1231 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_7,
#line 1231 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8,
#line 1231 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_9);

#line 1175 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__var_is_not_output_5_p_0(
#line 1175 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 1175 "instmap.m"
  MR_Word hlds__instmap__VarTypes_7,
#line 1175 "instmap.m"
  MR_Word hlds__instmap__InstMap0_8,
#line 1175 "instmap.m"
  MR_Word hlds__instmap__InstMapDeltaMap_9,
#line 1175 "instmap.m"
  MR_Word hlds__instmap__Var_10);

#line 1147 "instmap.m"
static void MR_CALL 
hlds__instmap__compute_instmap_delta_2_4_p_0(
#line 1147 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1147 "instmap.m"
  MR_Word hlds__instmap__InstMapA_2,
#line 1147 "instmap.m"
  MR_Word hlds__instmap__InstMapB_3,
#line 1147 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4);

#line 1101 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_instmap_deltas_2_8_p_0(
#line 1101 "instmap.m"
  MR_Word hlds__instmap__InstMap_9,
#line 1101 "instmap.m"
  MR_Word hlds__instmap__NonLocals_10,
#line 1101 "instmap.m"
  MR_Word hlds__instmap__VarTypes_11,
#line 1101 "instmap.m"
  MR_Word hlds__instmap__Deltas_12,
#line 1101 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24,
#line 1101 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_MergedDeltas_25,
#line 1101 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26,
#line 1101 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_27);

#line 1077 "instmap.m"
static void MR_CALL 
hlds__instmap__arm_instmap_project_context_2_p_0(
#line 1077 "instmap.m"
  MR_Word hlds__instmap__ArmErrorInfo_3,
#line 1077 "instmap.m"
  MR_Word * hlds__instmap__Context_4);

#line 1031 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_var_insts_pass_8_p_0(
#line 1031 "instmap.m"
  MR_Word hlds__instmap__Insts_9,
#line 1031 "instmap.m"
  MR_Word hlds__instmap__MaybeType_10,
#line 1031 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_MergedInsts_0_23,
#line 1031 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_MergedInsts_24,
#line 1031 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25,
#line 1031 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_26,
#line 1031 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_Error_0_27,
#line 1031 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_Error_28);

#line 1006 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_var_insts_5_p_0(
#line 1006 "instmap.m"
  MR_Word hlds__instmap__Insts_6,
#line 1006 "instmap.m"
  MR_Word hlds__instmap__Type_7,
#line 1006 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_16,
#line 1006 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_17,
#line 1006 "instmap.m"
  MR_Word * hlds__instmap__MaybeMergedInst_9);

#line 974 "instmap.m"
static void MR_CALL 
hlds__instmap__lookup_var_in_arm_instmap_3_p_0(
#line 974 "instmap.m"
  MR_Word hlds__instmap__Var_4,
#line 974 "instmap.m"
  MR_Word hlds__instmap__ArmInstMap_5,
#line 974 "instmap.m"
  MR_Word * hlds__instmap__Inst_6);

#line 965 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_2(
#line 965 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 965 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 965 "instmap.m"
  MR_Box * hlds__instmap__wrapper_arg_2);

#line 961 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_1(
#line 961 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 961 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 961 "instmap.m"
  MR_Box * hlds__instmap__wrapper_arg_2);

#line 951 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0(
#line 951 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 951 "instmap.m"
  MR_Word hlds__instmap__ArmInstMaps_2,
#line 951 "instmap.m"
  MR_Word hlds__instmap__VarTypes_3,
#line 951 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 951 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__5_5,
#line 951 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6,
#line 951 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_7,
#line 951 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__8_8);

#line 917 "instmap.m"
static void MR_CALL 
hlds__instmap__get_reachable_instmaps_2_p_0(
#line 917 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 917 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__2_2);

#line 773 "instmap.m"
static void MR_CALL 
hlds__instmap__bind_inst_to_functors_others_6_p_0(
#line 773 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 773 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 773 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 773 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4,
#line 773 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5,
#line 773 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_6);

#line 627 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_same_4_p_0(
#line 627 "instmap.m"
  MR_Word hlds__instmap__Inst_1,
#line 627 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 627 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_3,
#line 627 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_4);

#line 607 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_2(
#line 607 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 607 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_1(
#line 607 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 600 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0(
#line 600 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 600 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 600 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 600 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4);

#line 585 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_2(
#line 585 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 585 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_1(
#line 585 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 580 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0(
#line 580 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 580 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_2,
#line 580 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_3);

#line 513 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_changed_vars_2_6_p_0(
#line 513 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 513 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 513 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 513 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 513 "instmap.m"
  MR_Word hlds__instmap__HeadVar__5_5,
#line 513 "instmap.m"
  MR_Word * hlds__instmap__ChangedVars_6);

#line 490 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_bound_vars_2_5_p_0(
#line 490 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 490 "instmap.m"
  MR_Word hlds__instmap__Var_7,
#line 490 "instmap.m"
  MR_Word hlds__instmap__Inst_8,
#line 490 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_BoundVars_0_10,
#line 490 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_BoundVars_11);

#line 471 "instmap.m"
static MR_Word MR_CALL 
hlds__instmap__pair_with_ground_1_f_0(
#line 471 "instmap.m"
  MR_Word hlds__instmap__Var_3);

#line 438 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_delta_from_mode_list_2_5_p_0(
#line 438 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 438 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 438 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_3,
#line 438 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4,
#line 438 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapDelta_5);

#line 1170 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_no_output_vars_5_p_0_1(
#line 1170 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 1170 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1);

#line 650 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_2(
#line 650 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 650 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_1(
#line 650 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 621 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_2(
#line 621 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 621 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_1(
#line 621 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 487 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_bound_vars_3_p_0_1(
#line 487 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 487 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 487 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 487 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_3,
#line 487 "instmap.m"
  MR_Box * hlds__instmap__wrapper_arg_4);

#line 469 "instmap.m"
static MR_Box MR_CALL 
hlds__instmap__instmap_delta_bind_vars_1_f_0_1(
#line 469 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 469 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1);


static /* final */ const MR_Box hlds__instmap_scalar_common_1[2][2];

static /* final */ const MR_Box hlds__instmap_scalar_common_2[5][3];

static /* final */ const MR_Box hlds__instmap_scalar_common_3[3][5];

static /* final */ const MR_Box hlds__instmap_scalar_common_4[2][8];

static /* final */ const MR_Box hlds__instmap_scalar_common_5[1][4];

static /* final */ const MR_Box hlds__instmap_scalar_common_6[1][6];

static /* final */ const MR_Box hlds__instmap_scalar_common_7[1][1];




static /* final */ const MR_Box hlds__instmap_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
    ((MR_Box) (&hlds__instmap__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__instmap__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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

static /* final */ const MR_Box hlds__instmap_scalar_common_7[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
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



#line 900 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 908 "hlds.instmap.c"
static const MR_FA_TypeInfo_Struct1 hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 916 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 925 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 933 "hlds.instmap.c"
static const MR_VA_PseudoTypeInfo_Struct0 hlds__instmap____vpti_pred_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 0,
  { 0 }

};

#line 941 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 950 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 959 "hlds.instmap.c"
static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_arm_instmap_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0
};

#line 965 "hlds.instmap.c"
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

#line 980 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_arm_instmap_0_0[1] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_arm_instmap_0_0
};

#line 985 "hlds.instmap.c"
static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_arm_instmap_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__instmap__hlds__instmap__du_stag_ordered_arm_instmap_0_0
  }
};

#line 994 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_arm_instmap_0[1] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_arm_instmap_0_0
};

#line 999 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_arm_instmap_0[1] = {
  (MR_Integer) 0
};

#line 1004 "hlds.instmap.c"
const MR_TypeCtorInfo_Struct hlds__instmap__hlds__instmap__type_ctor_info_arm_instmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__instmap____Unify____arm_instmap_0_0_10001)),
  ((MR_Box) (hlds__instmap____Compare____arm_instmap_0_0_10001)),
  (MR_String) "hlds.instmap",
  (MR_String) "arm_instmap",
  {
    hlds__instmap__hlds__instmap__du_name_ordered_arm_instmap_0
  },
  {
    hlds__instmap__hlds__instmap__du_ptag_ordered_arm_instmap_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__instmap__hlds__instmap__functor_number_map_arm_instmap_0
};

#line 1025 "hlds.instmap.c"
static const MR_FA_TypeInfo_Struct2 hlds__instmap__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1034 "hlds.instmap.c"
static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_instmap_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__instmap__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 1039 "hlds.instmap.c"
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

#line 1054 "hlds.instmap.c"
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

#line 1069 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_0[1] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_1
};

#line 1074 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_1[1] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_0
};

#line 1079 "hlds.instmap.c"
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

#line 1093 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_instmap_0[2] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_0,
  &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_1
};

#line 1099 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_instmap_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1105 "hlds.instmap.c"
const MR_TypeCtorInfo_Struct hlds__instmap__hlds__instmap__type_ctor_info_instmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__instmap____Unify____instmap_0_0_10001)),
  ((MR_Box) (hlds__instmap____Compare____instmap_0_0_10001)),
  (MR_String) "hlds.instmap",
  (MR_String) "instmap",
  {
    hlds__instmap__hlds__instmap__du_name_ordered_instmap_0
  },
  {
    hlds__instmap__hlds__instmap__du_ptag_ordered_instmap_0
  },
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
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1147 "hlds.instmap.c"
const MR_TypeCtorInfo_Struct hlds__instmap__hlds__instmap__type_ctor_info_instmapping_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__instmap____Unify____instmapping_0_0_10001)),
  ((MR_Box) (hlds__instmap____Compare____instmapping_0_0_10001)),
  (MR_String) "hlds.instmap",
  (MR_String) "instmapping",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &hlds__instmap__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1168 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0 = {
  (MR_String) "large_base",
  (MR_Integer) 0
};

#line 1174 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1 = {
  (MR_String) "large_overlay",
  (MR_Integer) 1
};

#line 1180 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2 = {
  (MR_String) "test_size",
  (MR_Integer) 2
};

#line 1186 "hlds.instmap.c"
static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_value_ordered_overlay_how_0[3] = {
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2
};

#line 1193 "hlds.instmap.c"
static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_name_ordered_overlay_how_0[3] = {
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2
};

#line 1200 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_overlay_how_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1207 "hlds.instmap.c"
const MR_TypeCtorInfo_Struct hlds__instmap__hlds__instmap__type_ctor_info_overlay_how_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__instmap____Unify____overlay_how_0_0_10001)),
  ((MR_Box) (hlds__instmap____Compare____overlay_how_0_0_10001)),
  (MR_String) "hlds.instmap",
  (MR_String) "overlay_how",
  {
    hlds__instmap__hlds__instmap__enum_name_ordered_overlay_how_0
  },
  {
    hlds__instmap__hlds__instmap__enum_value_ordered_overlay_how_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__instmap__hlds__instmap__functor_number_map_overlay_how_0
};

#line 1228 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____arm_instmap_0_0_10001(
#line 1231 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 1233 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2)
#line 1235 "hlds.instmap.c"
{
#line 1237 "hlds.instmap.c"
  {
#line 1239 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 1242 "hlds.instmap.c"
    {
#line 1244 "hlds.instmap.c"
      hlds__instmap__succeeded = hlds__instmap____Unify____arm_instmap_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
#line 1247 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 1249 "hlds.instmap.c"
  }
#line 1251 "hlds.instmap.c"
}

#line 1254 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____arm_instmap_0_0_10001(
#line 1257 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 1259 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 1261 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3)
#line 1263 "hlds.instmap.c"
{
#line 1265 "hlds.instmap.c"
  {
#line 1267 "hlds.instmap.c"
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

#line 1270 "hlds.instmap.c"
    {
#line 1272 "hlds.instmap.c"
      hlds__instmap____Compare____arm_instmap_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
#line 1275 "hlds.instmap.c"
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
#line 1277 "hlds.instmap.c"
  }
#line 1279 "hlds.instmap.c"
}

#line 1282 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_0_0_10001(
#line 1285 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 1287 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2)
#line 1289 "hlds.instmap.c"
{
#line 1291 "hlds.instmap.c"
  {
#line 1293 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 1296 "hlds.instmap.c"
    {
#line 1298 "hlds.instmap.c"
      hlds__instmap__succeeded = hlds__instmap____Unify____instmap_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
#line 1301 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 1303 "hlds.instmap.c"
  }
#line 1305 "hlds.instmap.c"
}

#line 1308 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmap_0_0_10001(
#line 1311 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 1313 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 1315 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3)
#line 1317 "hlds.instmap.c"
{
#line 1319 "hlds.instmap.c"
  {
#line 1321 "hlds.instmap.c"
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

#line 1324 "hlds.instmap.c"
    {
#line 1326 "hlds.instmap.c"
      hlds__instmap____Compare____instmap_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
#line 1329 "hlds.instmap.c"
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
#line 1331 "hlds.instmap.c"
  }
#line 1333 "hlds.instmap.c"
}

#line 1336 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_delta_0_0_10001(
#line 1339 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 1341 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2)
#line 1343 "hlds.instmap.c"
{
#line 1345 "hlds.instmap.c"
  {
#line 1347 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 1350 "hlds.instmap.c"
    {
#line 1352 "hlds.instmap.c"
      hlds__instmap__succeeded = hlds__instmap____Unify____instmap_delta_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
#line 1355 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 1357 "hlds.instmap.c"
  }
#line 1359 "hlds.instmap.c"
}

#line 1362 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmap_delta_0_0_10001(
#line 1365 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 1367 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 1369 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3)
#line 1371 "hlds.instmap.c"
{
#line 1373 "hlds.instmap.c"
  {
#line 1375 "hlds.instmap.c"
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

#line 1378 "hlds.instmap.c"
    {
#line 1380 "hlds.instmap.c"
      hlds__instmap____Compare____instmap_delta_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
#line 1383 "hlds.instmap.c"
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
#line 1385 "hlds.instmap.c"
  }
#line 1387 "hlds.instmap.c"
}

#line 1390 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0_10001(
#line 1393 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 1395 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2)
#line 1397 "hlds.instmap.c"
{
#line 1399 "hlds.instmap.c"
  {
#line 1401 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 1404 "hlds.instmap.c"
    {
#line 1406 "hlds.instmap.c"
      hlds__instmap__succeeded = hlds__instmap____Unify____instmapping_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
#line 1409 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 1411 "hlds.instmap.c"
  }
#line 1413 "hlds.instmap.c"
}

#line 1416 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0_10001(
#line 1419 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 1421 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 1423 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3)
#line 1425 "hlds.instmap.c"
{
#line 1427 "hlds.instmap.c"
  {
#line 1429 "hlds.instmap.c"
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

#line 1432 "hlds.instmap.c"
    {
#line 1434 "hlds.instmap.c"
      hlds__instmap____Compare____instmapping_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
#line 1437 "hlds.instmap.c"
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
#line 1439 "hlds.instmap.c"
  }
#line 1441 "hlds.instmap.c"
}

#line 1444 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____overlay_how_0_0_10001(
#line 1447 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 1449 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2)
#line 1451 "hlds.instmap.c"
{
#line 1453 "hlds.instmap.c"
  {
#line 1455 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 1458 "hlds.instmap.c"
    {
#line 1460 "hlds.instmap.c"
      hlds__instmap__succeeded = hlds__instmap____Unify____overlay_how_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
#line 1463 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 1465 "hlds.instmap.c"
  }
#line 1467 "hlds.instmap.c"
}

#line 1470 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____overlay_how_0_0_10001(
#line 1473 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 1475 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 1477 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3)
#line 1479 "hlds.instmap.c"
{
#line 1481 "hlds.instmap.c"
  {
#line 1483 "hlds.instmap.c"
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

#line 1486 "hlds.instmap.c"
    {
#line 1488 "hlds.instmap.c"
      hlds__instmap____Compare____overlay_how_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
#line 1491 "hlds.instmap.c"
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
#line 1493 "hlds.instmap.c"
  }
#line 1495 "hlds.instmap.c"
}

#line 1309 "instmap.m"
static void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_p_0(
#line 1309 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1309 "instmap.m"
  MR_Word hlds__instmap__InstMappingA_3,
#line 1309 "instmap.m"
  MR_Word hlds__instmap__InstMappingB_4,
#line 1309 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_5,
#line 1309 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_6,
#line 1309 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7,
#line 1309 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_8)
#line 1309 "instmap.m"
{
#line 1313 "instmap.m"
  while (MR_TRUE)
#line 1313 "instmap.m"
    {
#line 1313 "instmap.m"
      /* tailcall optimized into a loop */
#line 1313 "instmap.m"
      {
#line 1313 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 1313 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1313 "instmap.m"
          {
#line 1313 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
#line 1313 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_InstMapping_6 = hlds__instmap__STATE_VARIABLE_InstMapping_0_5;
#line 1313 "instmap.m"
          }
#line 1313 "instmap.m"
        else
#line 1315 "instmap.m"
          {
#line 1315 "instmap.m"
            MR_Word hlds__instmap__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 1315 "instmap.m"
            MR_Word hlds__instmap__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 1315 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_36_36;
#line 1315 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40;
#line 1333 "instmap.m"
            MR_Word hlds__instmap__InstA_25;
#line 1316 "instmap.m"
            MR_Box hlds__instmap__conv0_InstA_25;

#line 1316 "instmap.m"
            {
#line 1316 "instmap.m"
              hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingA_3, ((MR_Box) (hlds__instmap__Var_18)), &hlds__instmap__conv0_InstA_25);
            }
#line 1316 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1316 "instmap.m"
              {
#line 1316 "instmap.m"
                hlds__instmap__InstA_25 = ((MR_Word) hlds__instmap__conv0_InstA_25);
#line 1316 "instmap.m"
                hlds__instmap__succeeded = MR_TRUE;
#line 1316 "instmap.m"
              }
#line 1333 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1330 "instmap.m"
              {
#line 1330 "instmap.m"
                MR_Word hlds__instmap__InstB_26;
#line 1317 "instmap.m"
                MR_Box hlds__instmap__conv1_InstB_26;

#line 1317 "instmap.m"
                {
#line 1317 "instmap.m"
                  hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingB_4, ((MR_Box) (hlds__instmap__Var_18)), &hlds__instmap__conv1_InstB_26);
                }
#line 1317 "instmap.m"
                if (hlds__instmap__succeeded)
#line 1317 "instmap.m"
                  {
#line 1317 "instmap.m"
                    hlds__instmap__InstB_26 = ((MR_Word) hlds__instmap__conv1_InstB_26);
#line 1317 "instmap.m"
                    hlds__instmap__succeeded = MR_TRUE;
#line 1317 "instmap.m"
                  }
#line 1330 "instmap.m"
                if (hlds__instmap__succeeded)
#line 1327 "instmap.m"
                  {
#line 1327 "instmap.m"
                    MR_Word hlds__instmap__Inst_27;
#line 1327 "instmap.m"
                    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_35_35;
#line 1323 "instmap.m"
                    MR_Word hlds__instmap___Det_28;

#line 1323 "instmap.m"
                    {
#line 1323 "instmap.m"
                      hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 0, hlds__instmap__InstA_25, hlds__instmap__InstB_26, (MR_Integer) 1, &hlds__instmap__Inst_27, &hlds__instmap___Det_28, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7, &hlds__instmap__STATE_VARIABLE_ModuleInfo_35_35);
                    }
#line 1327 "instmap.m"
                    if (hlds__instmap__succeeded)
#line 1326 "instmap.m"
                      {
#line 1326 "instmap.m"
                        hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40 = hlds__instmap__STATE_VARIABLE_ModuleInfo_35_35;
#line 1326 "instmap.m"
                        {
#line 1326 "instmap.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_18)), ((MR_Box) (hlds__instmap__Inst_27)), hlds__instmap__STATE_VARIABLE_InstMapping_0_5, &hlds__instmap__STATE_VARIABLE_InstMapping_36_36);
                        }
#line 1326 "instmap.m"
                      }
#line 1327 "instmap.m"
                    else
#line 1328 "instmap.m"
                      {
#line 1328 "instmap.m"
                        {
#line 1328 "instmap.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.unify_instmapping_delta_2\'/8", (MR_String) "unexpected error");
#line 1328 "instmap.m"
                          return;
                        }
#line 1328 "instmap.m"
                      }
#line 1327 "instmap.m"
                  }
#line 1330 "instmap.m"
                else
#line 1331 "instmap.m"
                  {
#line 1331 "instmap.m"
                    {
#line 1331 "instmap.m"
                      mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_18)), ((MR_Box) (hlds__instmap__InstA_25)), hlds__instmap__STATE_VARIABLE_InstMapping_0_5, &hlds__instmap__STATE_VARIABLE_InstMapping_36_36);
                    }
#line 1331 "instmap.m"
                    hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
#line 1331 "instmap.m"
                  }
#line 1330 "instmap.m"
              }
#line 1333 "instmap.m"
            else
#line 1336 "instmap.m"
              {
#line 1336 "instmap.m"
                MR_Word hlds__instmap__InstB_45;
#line 1334 "instmap.m"
                MR_Box hlds__instmap__conv2_InstB_45;

#line 1334 "instmap.m"
                {
#line 1334 "instmap.m"
                  hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingB_4, ((MR_Box) (hlds__instmap__Var_18)), &hlds__instmap__conv2_InstB_45);
                }
#line 1334 "instmap.m"
                if (hlds__instmap__succeeded)
#line 1334 "instmap.m"
                  {
#line 1334 "instmap.m"
                    hlds__instmap__InstB_45 = ((MR_Word) hlds__instmap__conv2_InstB_45);
#line 1334 "instmap.m"
                    hlds__instmap__succeeded = MR_TRUE;
#line 1334 "instmap.m"
                  }
#line 1336 "instmap.m"
                if (hlds__instmap__succeeded)
#line 1335 "instmap.m"
                  {
#line 1335 "instmap.m"
                    {
#line 1335 "instmap.m"
                      mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_18)), ((MR_Box) (hlds__instmap__InstB_45)), hlds__instmap__STATE_VARIABLE_InstMapping_0_5, &hlds__instmap__STATE_VARIABLE_InstMapping_36_36);
                    }
#line 1335 "instmap.m"
                  }
#line 1336 "instmap.m"
                else
#line 1335 "instmap.m"
                  hlds__instmap__STATE_VARIABLE_InstMapping_36_36 = hlds__instmap__STATE_VARIABLE_InstMapping_0_5;
#line 1335 "instmap.m"
                hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
#line 1336 "instmap.m"
              }
#line 1340 "instmap.m"
            /* direct tailcall eliminated */
#line 1340 "instmap.m"
            {
#line 1340 "instmap.m"
              MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__Vars_19;
#line 1340 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_5 = hlds__instmap__STATE_VARIABLE_InstMapping_36_36;
#line 1340 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40;

#line 1340 "instmap.m"
              hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_7;
#line 1340 "instmap.m"
              hlds__instmap__STATE_VARIABLE_InstMapping_0_5 = hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_5;
#line 1340 "instmap.m"
              hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 1340 "instmap.m"
            }
#line 1340 "instmap.m"
            continue;
#line 1315 "instmap.m"
          }
#line 1313 "instmap.m"
      }
#line 1313 "instmap.m"
      break;
#line 1313 "instmap.m"
    }
#line 1309 "instmap.m"
}

#line 313 "instmap.m"
void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_p_0(
#line 313 "instmap.m"
  MR_Word hlds__instmap__NonLocals_2,
#line 313 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 313 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 313 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__5_5,
#line 313 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6,
#line 313 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_7)
#line 313 "instmap.m"
{
#line 1285 "instmap.m"
  {
#line 1285 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1285 "instmap.m"
    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1285 "instmap.m"
      {
#line 1285 "instmap.m"
        *hlds__instmap__HeadVar__5_5 = hlds__instmap__HeadVar__4_4;
#line 1285 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6;
#line 1285 "instmap.m"
      }
#line 1285 "instmap.m"
    else
#line 1285 "instmap.m"
      {
#line 1285 "instmap.m"
        MR_Word hlds__instmap__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));

#line 1285 "instmap.m"
        if ((hlds__instmap__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1287 "instmap.m"
          {
#line 1287 "instmap.m"
            *hlds__instmap__HeadVar__5_5 = hlds__instmap__HeadVar__3_3;
#line 1287 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6;
#line 1287 "instmap.m"
          }
#line 1285 "instmap.m"
        else
#line 1290 "instmap.m"
          {
#line 1290 "instmap.m"
            MR_Word hlds__instmap__TypeInfo_24_46 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 1290 "instmap.m"
            MR_Word hlds__instmap__TypeCtorInfo_25_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1290 "instmap.m"
            MR_Word hlds__instmap__TypeCtorInfo_26_48;
#line 1290 "instmap.m"
            MR_Word hlds__instmap__InstMappingB_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__4_4, (MR_Integer) 0)));
#line 1290 "instmap.m"
            MR_Word hlds__instmap__InstMapping_24;
#line 1290 "instmap.m"
            MR_Word hlds__instmap__VarsInA_38;
#line 1290 "instmap.m"
            MR_Word hlds__instmap__VarsInB_39;
#line 1290 "instmap.m"
            MR_Word hlds__instmap__SetofVarsInA_40;
#line 1290 "instmap.m"
            MR_Word hlds__instmap__SetofVars0_41;
#line 1290 "instmap.m"
            MR_Word hlds__instmap__SetofVars_42;
#line 1290 "instmap.m"
            MR_Word hlds__instmap__ListofVars_43;
#line 1290 "instmap.m"
            MR_Word hlds__instmap__V_44_44;

#line 1300 "instmap.m"
            {
#line 1300 "instmap.m"
              mercury__map__keys_2_p_0(hlds__instmap__TypeInfo_24_46, hlds__instmap__TypeCtorInfo_25_47, hlds__instmap__V_29_29, &hlds__instmap__VarsInA_38);
            }
#line 1301 "instmap.m"
            {
#line 1301 "instmap.m"
              mercury__map__keys_2_p_0(hlds__instmap__TypeInfo_24_46, hlds__instmap__TypeCtorInfo_25_47, hlds__instmap__InstMappingB_23, &hlds__instmap__VarsInB_39);
            }
#line 1816 "hlds.instmap.c"
            hlds__instmap__TypeCtorInfo_26_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1302 "instmap.m"
            {
#line 1302 "instmap.m"
              parse_tree__set_of_var__sorted_list_to_set_2_p_0(hlds__instmap__TypeCtorInfo_26_48, hlds__instmap__VarsInA_38, &hlds__instmap__SetofVarsInA_40);
            }
#line 1303 "instmap.m"
            {
#line 1303 "instmap.m"
              parse_tree__set_of_var__insert_list_3_p_0(hlds__instmap__TypeCtorInfo_26_48, hlds__instmap__VarsInB_39, hlds__instmap__SetofVarsInA_40, &hlds__instmap__SetofVars0_41);
            }
#line 1304 "instmap.m"
            {
#line 1304 "instmap.m"
              parse_tree__set_of_var__intersect_3_p_0(hlds__instmap__TypeCtorInfo_26_48, hlds__instmap__SetofVars0_41, hlds__instmap__NonLocals_2, &hlds__instmap__SetofVars_42);
            }
#line 1305 "instmap.m"
            {
#line 1305 "instmap.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__instmap__TypeCtorInfo_26_48, hlds__instmap__SetofVars_42, &hlds__instmap__ListofVars_43);
            }
#line 1306 "instmap.m"
            {
#line 1306 "instmap.m"
              hlds__instmap__V_44_44 = mercury__map__init_0_f_0(hlds__instmap__TypeInfo_24_46, hlds__instmap__TypeCtorInfo_25_47);
            }
#line 1306 "instmap.m"
            {
#line 1306 "instmap.m"
              hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_p_0(hlds__instmap__ListofVars_43, hlds__instmap__V_29_29, hlds__instmap__InstMappingB_23, hlds__instmap__V_44_44, &hlds__instmap__InstMapping_24, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6, hlds__instmap__STATE_VARIABLE_ModuleInfo_7);
            }
#line 1290 "instmap.m"
            {
#line 1290 "instmap.m"
              MR_Word base;
#line 1290 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1290 "instmap.m"
              *hlds__instmap__HeadVar__5_5 = base;
#line 1290 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_24));
#line 1290 "instmap.m"
            }
#line 1290 "instmap.m"
          }
#line 1285 "instmap.m"
      }
#line 1285 "instmap.m"
  }
#line 313 "instmap.m"
}

#line 607 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__607__1_2_p_0(
#line 607 "instmap.m"
  MR_Word hlds__instmap__Inst_10,
#line 607 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_20)
#line 607 "instmap.m"
{
#line 607 "instmap.m"
  {
#line 607 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 607 "instmap.m"
    {
#line 607 "instmap.m"
      return hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst_10, hlds__instmap__HeadVar__2_20);
    }
#line 607 "instmap.m"
    return hlds__instmap__succeeded;
#line 607 "instmap.m"
  }
#line 607 "instmap.m"
}

#line 585 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__585__1_2_p_0(
#line 585 "instmap.m"
  MR_Word hlds__instmap__Inst_8,
#line 585 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_19)
#line 585 "instmap.m"
{
#line 585 "instmap.m"
  {
#line 585 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 585 "instmap.m"
    {
#line 585 "instmap.m"
      return hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst_8, hlds__instmap__HeadVar__2_19);
    }
#line 585 "instmap.m"
    return hlds__instmap__succeeded;
#line 585 "instmap.m"
  }
#line 585 "instmap.m"
}

#line 650 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__650__1_2_p_0(
#line 650 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 650 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_17)
#line 650 "instmap.m"
{
#line 650 "instmap.m"
  {
#line 650 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 650 "instmap.m"
    {
#line 650 "instmap.m"
      return hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst_5, hlds__instmap__HeadVar__2_17);
    }
#line 650 "instmap.m"
    return hlds__instmap__succeeded;
#line 650 "instmap.m"
  }
#line 650 "instmap.m"
}

#line 621 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__621__1_2_p_0(
#line 621 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 621 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_17)
#line 621 "instmap.m"
{
#line 621 "instmap.m"
  {
#line 621 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 621 "instmap.m"
    {
#line 621 "instmap.m"
      return hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst_5, hlds__instmap__HeadVar__2_17);
    }
#line 621 "instmap.m"
    return hlds__instmap__succeeded;
#line 621 "instmap.m"
  }
#line 621 "instmap.m"
}

#line 209 "instmap.m"
void MR_CALL 
hlds__instmap____Compare____overlay_how_0_0(
#line 209 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1,
#line 209 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 209 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3)
#line 209 "instmap.m"
{
#line 209 "instmap.m"
  {
#line 209 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 209 "instmap.m"
    MR_Integer hlds__instmap__Cast_HeadVar1_4 = (MR_Integer) hlds__instmap__HeadVar__2_2;
#line 209 "instmap.m"
    MR_Integer hlds__instmap__Cast_HeadVar2_5 = (MR_Integer) hlds__instmap__HeadVar__3_3;

#line 209 "instmap.m"
    {
#line 209 "instmap.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__instmap__HeadVar__1_1, hlds__instmap__Cast_HeadVar1_4, hlds__instmap__Cast_HeadVar2_5);
#line 209 "instmap.m"
      return;
    }
#line 209 "instmap.m"
  }
#line 209 "instmap.m"
}

#line 209 "instmap.m"
MR_bool MR_CALL 
hlds__instmap____Unify____overlay_how_0_0(
#line 209 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_1,
#line 209 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2)
#line 209 "instmap.m"
{
#line 2014 "hlds.instmap.c"
  {
#line 2016 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded = (hlds__instmap__HeadVar__2_1 == hlds__instmap__HeadVar__2_2);

#line 2019 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 2021 "hlds.instmap.c"
  }
#line 209 "instmap.m"
}

#line 392 "instmap.m"
static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0(
#line 392 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1,
#line 392 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 392 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3)
#line 392 "instmap.m"
{
#line 392 "instmap.m"
  {
#line 392 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 392 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar1_4 = hlds__instmap__HeadVar__2_2;
#line 392 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar2_5 = hlds__instmap__HeadVar__3_3;

#line 392 "instmap.m"
    {
#line 392 "instmap.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__instmap_scalar_common_2[1], hlds__instmap__HeadVar__1_1, ((MR_Box) (hlds__instmap__Cast_HeadVar1_4)), ((MR_Box) (hlds__instmap__Cast_HeadVar2_5)));
#line 392 "instmap.m"
      return;
    }
#line 392 "instmap.m"
  }
#line 392 "instmap.m"
}

#line 392 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0(
#line 392 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 392 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2)
#line 392 "instmap.m"
{
#line 392 "instmap.m"
  {
#line 392 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 392 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar1_3 = hlds__instmap__HeadVar__1_1;
#line 392 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar2_4 = hlds__instmap__HeadVar__2_2;

#line 392 "instmap.m"
    {
#line 392 "instmap.m"
      return hlds__instmap__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__instmap_scalar_common_2[1], ((MR_Box) (hlds__instmap__Cast_HeadVar1_3)), ((MR_Box) (hlds__instmap__Cast_HeadVar2_4)));
    }
#line 392 "instmap.m"
    return hlds__instmap__succeeded;
#line 392 "instmap.m"
  }
#line 392 "instmap.m"
}

#line 386 "instmap.m"
void MR_CALL 
hlds__instmap____Compare____instmap_delta_0_0(
#line 386 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1,
#line 386 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 386 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3)
#line 386 "instmap.m"
{
#line 386 "instmap.m"
  {
#line 386 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 386 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar1_4 = hlds__instmap__HeadVar__2_2;
#line 386 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar2_5 = hlds__instmap__HeadVar__3_3;

#line 386 "instmap.m"
    {
#line 386 "instmap.m"
      hlds__instmap____Compare____instmap_0_0(hlds__instmap__HeadVar__1_1, hlds__instmap__Cast_HeadVar1_4, hlds__instmap__Cast_HeadVar2_5);
#line 386 "instmap.m"
      return;
    }
#line 386 "instmap.m"
  }
#line 386 "instmap.m"
}

#line 386 "instmap.m"
MR_bool MR_CALL 
hlds__instmap____Unify____instmap_delta_0_0(
#line 386 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 386 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2)
#line 386 "instmap.m"
{
#line 386 "instmap.m"
  {
#line 386 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 386 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar1_3 = hlds__instmap__HeadVar__1_1;
#line 386 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar2_4 = hlds__instmap__HeadVar__2_2;

#line 386 "instmap.m"
    {
#line 386 "instmap.m"
      return hlds__instmap__succeeded = hlds__instmap____Unify____instmap_0_0(hlds__instmap__Cast_HeadVar1_3, hlds__instmap__Cast_HeadVar2_4);
    }
#line 386 "instmap.m"
    return hlds__instmap__succeeded;
#line 386 "instmap.m"
  }
#line 386 "instmap.m"
}

#line 388 "instmap.m"
void MR_CALL 
hlds__instmap____Compare____instmap_0_0(
#line 388 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1,
#line 388 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 388 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3)
#line 388 "instmap.m"
{
#line 388 "instmap.m"
  {
#line 388 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 388 "instmap.m"
    MR_Integer hlds__instmap__CastX_8 = (MR_Integer) hlds__instmap__HeadVar__2_2;
#line 388 "instmap.m"
    MR_Integer hlds__instmap__CastY_9 = (MR_Integer) hlds__instmap__HeadVar__3_3;

#line 388 "instmap.m"
    hlds__instmap__succeeded = (hlds__instmap__CastX_8 == hlds__instmap__CastY_9);
#line 388 "instmap.m"
    if (hlds__instmap__succeeded)
#line 2174 "hlds.instmap.c"
      *hlds__instmap__HeadVar__1_1 = (MR_Integer) 0;
#line 388 "instmap.m"
    else
#line 388 "instmap.m"
      if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 388 "instmap.m"
        if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 388 "instmap.m"
          *hlds__instmap__HeadVar__1_1 = (MR_Integer) 0;
#line 388 "instmap.m"
        else
#line 2186 "hlds.instmap.c"
          *hlds__instmap__HeadVar__1_1 = (MR_Integer) 2;
#line 388 "instmap.m"
      else
#line 388 "instmap.m"
        {
#line 388 "instmap.m"
          MR_Word hlds__instmap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));

#line 388 "instmap.m"
          if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2197 "hlds.instmap.c"
            *hlds__instmap__HeadVar__1_1 = (MR_Integer) 1;
#line 388 "instmap.m"
          else
#line 388 "instmap.m"
            {
#line 388 "instmap.m"
              MR_Word hlds__instmap__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));

#line 388 "instmap.m"
              {
#line 388 "instmap.m"
                mercury__builtin__compare_3_p_0((MR_Word) &hlds__instmap_scalar_common_2[1], hlds__instmap__HeadVar__1_1, ((MR_Box) (hlds__instmap__V_11_11)), ((MR_Box) (hlds__instmap__V_5_5)));
#line 388 "instmap.m"
                return;
              }
#line 388 "instmap.m"
            }
#line 388 "instmap.m"
        }
#line 388 "instmap.m"
  }
#line 388 "instmap.m"
}

#line 388 "instmap.m"
MR_bool MR_CALL 
hlds__instmap____Unify____instmap_0_0(
#line 388 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 388 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2)
#line 388 "instmap.m"
{
#line 388 "instmap.m"
  {
#line 388 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 388 "instmap.m"
    MR_Integer hlds__instmap__CastX_7 = (MR_Integer) hlds__instmap__HeadVar__1_1;
#line 388 "instmap.m"
    MR_Integer hlds__instmap__CastY_8 = (MR_Integer) hlds__instmap__HeadVar__2_2;

#line 388 "instmap.m"
    hlds__instmap__succeeded = (hlds__instmap__CastX_7 == hlds__instmap__CastY_8);
#line 388 "instmap.m"
    if (hlds__instmap__succeeded)
#line 388 "instmap.m"
      hlds__instmap__succeeded = MR_TRUE;
#line 388 "instmap.m"
    else
#line 388 "instmap.m"
      if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 388 "instmap.m"
        {
#line 388 "instmap.m"
          MR_Integer hlds__instmap__CastX_5 = (MR_Integer) hlds__instmap__HeadVar__1_1;
#line 388 "instmap.m"
          MR_Integer hlds__instmap__CastY_6 = (MR_Integer) hlds__instmap__HeadVar__2_2;

#line 388 "instmap.m"
          hlds__instmap__succeeded = (hlds__instmap__CastY_6 == hlds__instmap__CastX_5);
#line 388 "instmap.m"
        }
#line 388 "instmap.m"
      else
#line 388 "instmap.m"
        {
#line 388 "instmap.m"
          MR_Word hlds__instmap__TypeInfo_9_9;
#line 388 "instmap.m"
          MR_Word hlds__instmap__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 388 "instmap.m"
          MR_Word hlds__instmap__V_4_4;

#line 388 "instmap.m"
          hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 388 "instmap.m"
          if (hlds__instmap__succeeded)
#line 388 "instmap.m"
            {
#line 388 "instmap.m"
              hlds__instmap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 2280 "hlds.instmap.c"
              hlds__instmap__TypeInfo_9_9 = (MR_Word) &hlds__instmap_scalar_common_2[1];
#line 2282 "hlds.instmap.c"
              {
#line 2284 "hlds.instmap.c"
                return hlds__instmap__succeeded = mercury__builtin__unify_2_p_0(hlds__instmap__TypeInfo_9_9, ((MR_Box) (hlds__instmap__V_3_3)), ((MR_Box) (hlds__instmap__V_4_4)));
              }
#line 388 "instmap.m"
            }
#line 388 "instmap.m"
        }
#line 388 "instmap.m"
    return hlds__instmap__succeeded;
#line 388 "instmap.m"
  }
#line 388 "instmap.m"
}

#line 244 "instmap.m"
void MR_CALL 
hlds__instmap____Compare____arm_instmap_0_0(
#line 244 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1,
#line 244 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 244 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3)
#line 244 "instmap.m"
{
#line 244 "instmap.m"
  {
#line 244 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 244 "instmap.m"
    MR_Integer hlds__instmap__CastX_9 = (MR_Integer) hlds__instmap__HeadVar__2_2;
#line 244 "instmap.m"
    MR_Integer hlds__instmap__CastY_10 = (MR_Integer) hlds__instmap__HeadVar__3_3;

#line 244 "instmap.m"
    hlds__instmap__succeeded = (hlds__instmap__CastX_9 == hlds__instmap__CastY_10);
#line 244 "instmap.m"
    if (hlds__instmap__succeeded)
#line 2322 "hlds.instmap.c"
      *hlds__instmap__HeadVar__1_1 = (MR_Integer) 0;
#line 244 "instmap.m"
    else
#line 244 "instmap.m"
      {
#line 244 "instmap.m"
        MR_Word hlds__instmap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 244 "instmap.m"
        MR_Word hlds__instmap__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 244 "instmap.m"
        MR_Word hlds__instmap__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));
#line 244 "instmap.m"
        MR_Word hlds__instmap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__3_3, (MR_Integer) 1)));
#line 244 "instmap.m"
        MR_Word hlds__instmap__V_8_8;

#line 244 "instmap.m"
        {
#line 244 "instmap.m"
          mercury__term____Compare____context_0_0(&hlds__instmap__V_8_8, hlds__instmap__V_4_4, hlds__instmap__V_6_6);
        }
#line 2344 "hlds.instmap.c"
        hlds__instmap__succeeded = (hlds__instmap__V_8_8 == (MR_Integer) 0);
#line 244 "instmap.m"
        hlds__instmap__succeeded = !(hlds__instmap__succeeded);
#line 244 "instmap.m"
        if (hlds__instmap__succeeded)
#line 244 "instmap.m"
          *hlds__instmap__HeadVar__1_1 = hlds__instmap__V_8_8;
#line 244 "instmap.m"
        else
#line 244 "instmap.m"
          {
#line 244 "instmap.m"
            hlds__instmap____Compare____instmap_0_0(hlds__instmap__HeadVar__1_1, hlds__instmap__V_5_5, hlds__instmap__V_7_7);
#line 244 "instmap.m"
            return;
          }
#line 244 "instmap.m"
      }
#line 244 "instmap.m"
  }
#line 244 "instmap.m"
}

#line 244 "instmap.m"
MR_bool MR_CALL 
hlds__instmap____Unify____arm_instmap_0_0(
#line 244 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 244 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2)
#line 244 "instmap.m"
{
#line 244 "instmap.m"
  {
#line 244 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 244 "instmap.m"
    MR_Integer hlds__instmap__CastX_7 = (MR_Integer) hlds__instmap__HeadVar__1_1;
#line 244 "instmap.m"
    MR_Integer hlds__instmap__CastY_8 = (MR_Integer) hlds__instmap__HeadVar__2_2;

#line 244 "instmap.m"
    hlds__instmap__succeeded = (hlds__instmap__CastX_7 == hlds__instmap__CastY_8);
#line 244 "instmap.m"
    if (hlds__instmap__succeeded)
#line 244 "instmap.m"
      hlds__instmap__succeeded = MR_TRUE;
#line 244 "instmap.m"
    else
#line 244 "instmap.m"
      {
#line 244 "instmap.m"
        MR_Word hlds__instmap__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 244 "instmap.m"
        MR_Word hlds__instmap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 244 "instmap.m"
        MR_Word hlds__instmap__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 244 "instmap.m"
        MR_Word hlds__instmap__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));

#line 2405 "hlds.instmap.c"
        {
#line 2407 "hlds.instmap.c"
          hlds__instmap__succeeded = mercury__term____Unify____context_0_0(hlds__instmap__V_3_3, hlds__instmap__V_5_5);
        }
#line 244 "instmap.m"
        if (hlds__instmap__succeeded)
#line 2412 "hlds.instmap.c"
          {
#line 2414 "hlds.instmap.c"
            return hlds__instmap__succeeded = hlds__instmap____Unify____instmap_0_0(hlds__instmap__V_4_4, hlds__instmap__V_6_6);
          }
#line 244 "instmap.m"
      }
#line 244 "instmap.m"
    return hlds__instmap__succeeded;
#line 244 "instmap.m"
  }
#line 244 "instmap.m"
}

#line 1356 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_delta_apply_sub_2_5_p_0(
#line 1356 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1356 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 1356 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 1356 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_Instmapping_0_4,
#line 1356 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_Instmapping_5)
#line 1356 "instmap.m"
{
#line 1360 "instmap.m"
  while (MR_TRUE)
#line 1360 "instmap.m"
    {
#line 1360 "instmap.m"
      /* tailcall optimized into a loop */
#line 1360 "instmap.m"
      {
#line 1360 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 1360 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1360 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_Instmapping_5 = hlds__instmap__STATE_VARIABLE_Instmapping_0_4;
#line 1360 "instmap.m"
        else
#line 1362 "instmap.m"
          {
#line 1362 "instmap.m"
            MR_Word hlds__instmap__Var0_11;
#line 1362 "instmap.m"
            MR_Word hlds__instmap__Inst_12;
#line 1362 "instmap.m"
            MR_Word hlds__instmap__VarInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 1362 "instmap.m"
            MR_Word hlds__instmap__Var_17;
#line 1362 "instmap.m"
            MR_Word hlds__instmap__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 1362 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_Instmapping_21_21;

#line 1361 "instmap.m"
            hlds__instmap__Var0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_20_20, (MR_Integer) 0)));
#line 1361 "instmap.m"
            hlds__instmap__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_20_20, (MR_Integer) 1)));
#line 1363 "instmap.m"
            {
#line 1363 "instmap.m"
              parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__HeadVar__2_2, hlds__instmap__HeadVar__3_3, hlds__instmap__Var0_11, &hlds__instmap__Var_17);
            }
#line 1368 "instmap.m"
            {
#line 1368 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_17)), ((MR_Box) (hlds__instmap__Inst_12)), hlds__instmap__STATE_VARIABLE_Instmapping_0_4, &hlds__instmap__STATE_VARIABLE_Instmapping_21_21);
            }
#line 1369 "instmap.m"
            /* direct tailcall eliminated */
#line 1369 "instmap.m"
            {
#line 1369 "instmap.m"
              MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__VarInsts0_13;
#line 1369 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_Instmapping_0__tmp_copy_4 = hlds__instmap__STATE_VARIABLE_Instmapping_21_21;

#line 1369 "instmap.m"
              hlds__instmap__STATE_VARIABLE_Instmapping_0_4 = hlds__instmap__STATE_VARIABLE_Instmapping_0__tmp_copy_4;
#line 1369 "instmap.m"
              hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 1369 "instmap.m"
            }
#line 1369 "instmap.m"
            continue;
#line 1362 "instmap.m"
          }
#line 1360 "instmap.m"
      }
#line 1360 "instmap.m"
      break;
#line 1360 "instmap.m"
    }
#line 1356 "instmap.m"
}

#line 1231 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_instmapping_delta_2_9_p_0(
#line 1231 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1231 "instmap.m"
  MR_Word hlds__instmap__InstMap_2,
#line 1231 "instmap.m"
  MR_Word hlds__instmap__VarTypes_3,
#line 1231 "instmap.m"
  MR_Word hlds__instmap__InstMappingA_4,
#line 1231 "instmap.m"
  MR_Word hlds__instmap__InstMappingB_5,
#line 1231 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_6,
#line 1231 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_7,
#line 1231 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8,
#line 1231 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_9)
#line 1231 "instmap.m"
{
#line 1236 "instmap.m"
  while (MR_TRUE)
#line 1236 "instmap.m"
    {
#line 1236 "instmap.m"
      /* tailcall optimized into a loop */
#line 1236 "instmap.m"
      {
#line 1236 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 1236 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1236 "instmap.m"
          {
#line 1236 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_9 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8;
#line 1236 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_InstMapping_7 = hlds__instmap__STATE_VARIABLE_InstMapping_0_6;
#line 1236 "instmap.m"
          }
#line 1236 "instmap.m"
        else
#line 1238 "instmap.m"
          {
#line 1238 "instmap.m"
            MR_Word hlds__instmap__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 1238 "instmap.m"
            MR_Word hlds__instmap__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 1238 "instmap.m"
            MR_Word hlds__instmap__InstA_29;
#line 1238 "instmap.m"
            MR_Word hlds__instmap__InstB_31;
#line 1238 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_43_43;
#line 1238 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50;
#line 1241 "instmap.m"
            MR_Word hlds__instmap__InstInA_28;
#line 1239 "instmap.m"
            MR_Box hlds__instmap__conv0_InstInA_28;
#line 1246 "instmap.m"
            MR_Word hlds__instmap__InstInB_30;
#line 1244 "instmap.m"
            MR_Box hlds__instmap__conv1_InstInB_30;
#line 1271 "instmap.m"
            MR_Word hlds__instmap__Inst1_33;
#line 1271 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_42_42;
#line 1250 "instmap.m"
            MR_Word hlds__instmap__VarType_32;
#line 1250 "instmap.m"
            MR_Word hlds__instmap__V_41_41;

#line 1239 "instmap.m"
            {
#line 1239 "instmap.m"
              hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingA_4, ((MR_Box) (hlds__instmap__Var_20)), &hlds__instmap__conv0_InstInA_28);
            }
#line 1239 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1239 "instmap.m"
              {
#line 1239 "instmap.m"
                hlds__instmap__InstInA_28 = ((MR_Word) hlds__instmap__conv0_InstInA_28);
#line 1239 "instmap.m"
                hlds__instmap__succeeded = MR_TRUE;
#line 1239 "instmap.m"
              }
#line 1241 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1240 "instmap.m"
              hlds__instmap__InstA_29 = hlds__instmap__InstInA_28;
#line 1241 "instmap.m"
            else
#line 1242 "instmap.m"
              {
#line 1242 "instmap.m"
                hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_2, hlds__instmap__Var_20, &hlds__instmap__InstA_29);
              }
#line 1244 "instmap.m"
            {
#line 1244 "instmap.m"
              hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingB_5, ((MR_Box) (hlds__instmap__Var_20)), &hlds__instmap__conv1_InstInB_30);
            }
#line 1244 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1244 "instmap.m"
              {
#line 1244 "instmap.m"
                hlds__instmap__InstInB_30 = ((MR_Word) hlds__instmap__conv1_InstInB_30);
#line 1244 "instmap.m"
                hlds__instmap__succeeded = MR_TRUE;
#line 1244 "instmap.m"
              }
#line 1246 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1245 "instmap.m"
              hlds__instmap__InstB_31 = hlds__instmap__InstInB_30;
#line 1246 "instmap.m"
            else
#line 1247 "instmap.m"
              {
#line 1247 "instmap.m"
                hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_2, hlds__instmap__Var_20, &hlds__instmap__InstB_31);
              }
#line 1250 "instmap.m"
            {
#line 1250 "instmap.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(hlds__instmap__VarTypes_3, hlds__instmap__Var_20, &hlds__instmap__VarType_32);
            }
#line 1251 "instmap.m"
            {
#line 1251 "instmap.m"
              hlds__instmap__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1251 "instmap.m"
              MR_hl_field(MR_mktag(1), hlds__instmap__V_41_41, 0) = ((MR_Box) (hlds__instmap__VarType_32));
#line 1251 "instmap.m"
            }
#line 1251 "instmap.m"
            {
#line 1251 "instmap.m"
              hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__InstA_29, hlds__instmap__InstB_31, hlds__instmap__V_41_41, &hlds__instmap__Inst1_33, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8, &hlds__instmap__STATE_VARIABLE_ModuleInfo_42_42);
            }
#line 1271 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1269 "instmap.m"
              {
#line 1269 "instmap.m"
                hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50 = hlds__instmap__STATE_VARIABLE_ModuleInfo_42_42;
#line 1270 "instmap.m"
                {
#line 1270 "instmap.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_20)), ((MR_Box) (hlds__instmap__Inst1_33)), hlds__instmap__STATE_VARIABLE_InstMapping_0_6, &hlds__instmap__STATE_VARIABLE_InstMapping_43_43);
                }
#line 1269 "instmap.m"
              }
#line 1271 "instmap.m"
            else
#line 1272 "instmap.m"
              {
#line 1272 "instmap.m"
                MR_Integer hlds__instmap__VarInt_35;
#line 1272 "instmap.m"
                MR_String hlds__instmap__Msg_36;
#line 1272 "instmap.m"
                MR_Word hlds__instmap__V_45_45;
#line 1272 "instmap.m"
                MR_Word hlds__instmap__V_46_46;

#line 1272 "instmap.m"
                {
#line 1272 "instmap.m"
                  mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Var_20, &hlds__instmap__VarInt_35);
                }
#line 1274 "instmap.m"
                {
#line 1274 "instmap.m"
                  hlds__instmap__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1274 "instmap.m"
                  MR_hl_field(MR_mktag(1), hlds__instmap__V_46_46, 0) = ((MR_Box) (hlds__instmap__VarInt_35));
#line 1274 "instmap.m"
                }
#line 1273 "instmap.m"
                {
#line 1273 "instmap.m"
                  hlds__instmap__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1273 "instmap.m"
                  MR_hl_field(MR_mktag(1), hlds__instmap__V_45_45, 0) = ((MR_Box) (hlds__instmap__V_46_46));
#line 1273 "instmap.m"
                  MR_hl_field(MR_mktag(1), hlds__instmap__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1273 "instmap.m"
                }
#line 1273 "instmap.m"
                {
#line 1273 "instmap.m"
                  mercury__string__format_3_p_0((MR_String) "merge_instmapping_delta_2: error merging var %i", hlds__instmap__V_45_45, &hlds__instmap__Msg_36);
                }
#line 1275 "instmap.m"
                {
#line 1275 "instmap.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.merge_instmapping_delta_2\'/9", hlds__instmap__Msg_36);
#line 1275 "instmap.m"
                  return;
                }
#line 1272 "instmap.m"
              }
#line 1277 "instmap.m"
            /* direct tailcall eliminated */
#line 1277 "instmap.m"
            {
#line 1277 "instmap.m"
              MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__Vars_21;
#line 1277 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_6 = hlds__instmap__STATE_VARIABLE_InstMapping_43_43;
#line 1277 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50;

#line 1277 "instmap.m"
              hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8;
#line 1277 "instmap.m"
              hlds__instmap__STATE_VARIABLE_InstMapping_0_6 = hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_6;
#line 1277 "instmap.m"
              hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 1277 "instmap.m"
            }
#line 1277 "instmap.m"
            continue;
#line 1238 "instmap.m"
          }
#line 1236 "instmap.m"
      }
#line 1236 "instmap.m"
      break;
#line 1236 "instmap.m"
    }
#line 1231 "instmap.m"
}

#line 1175 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__var_is_not_output_5_p_0(
#line 1175 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 1175 "instmap.m"
  MR_Word hlds__instmap__VarTypes_7,
#line 1175 "instmap.m"
  MR_Word hlds__instmap__InstMap0_8,
#line 1175 "instmap.m"
  MR_Word hlds__instmap__InstMapDeltaMap_9,
#line 1175 "instmap.m"
  MR_Word hlds__instmap__Var_10)
#line 1175 "instmap.m"
{
#line 1178 "instmap.m"
  {
#line 1178 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 1178 "instmap.m"
    MR_Word hlds__instmap__OldInst_11;
#line 1198 "instmap.m"
    MR_Word hlds__instmap__NewInst_12;
#line 1180 "instmap.m"
    MR_Box hlds__instmap__conv0_NewInst_12;

#line 1179 "instmap.m"
    {
#line 1179 "instmap.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap0_8, hlds__instmap__Var_10, &hlds__instmap__OldInst_11);
    }
#line 1180 "instmap.m"
    {
#line 1180 "instmap.m"
      hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapDeltaMap_9, ((MR_Box) (hlds__instmap__Var_10)), &hlds__instmap__conv0_NewInst_12);
    }
#line 1180 "instmap.m"
    if (hlds__instmap__succeeded)
#line 1180 "instmap.m"
      {
#line 1180 "instmap.m"
        hlds__instmap__NewInst_12 = ((MR_Word) hlds__instmap__conv0_NewInst_12);
#line 1180 "instmap.m"
        hlds__instmap__succeeded = MR_TRUE;
#line 1180 "instmap.m"
      }
#line 1198 "instmap.m"
    if (hlds__instmap__succeeded)
#line 1196 "instmap.m"
      {
#line 1196 "instmap.m"
        MR_Word hlds__instmap__Type_13;

#line 1196 "instmap.m"
        {
#line 1196 "instmap.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(hlds__instmap__VarTypes_7, hlds__instmap__Var_10, &hlds__instmap__Type_13);
        }
#line 1197 "instmap.m"
        {
#line 1197 "instmap.m"
          return hlds__instmap__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(hlds__instmap__NewInst_12, hlds__instmap__OldInst_11, hlds__instmap__Type_13, hlds__instmap__ModuleInfo_6);
        }
#line 1196 "instmap.m"
      }
#line 1198 "instmap.m"
    else
#line 1201 "instmap.m"
      {
#line 1201 "instmap.m"
        {
#line 1201 "instmap.m"
          hlds__instmap__succeeded = check_hlds__inst_util__inst_contains_any_2_p_0(hlds__instmap__ModuleInfo_6, hlds__instmap__OldInst_11);
        }
#line 1201 "instmap.m"
        hlds__instmap__succeeded = !(hlds__instmap__succeeded);
#line 1201 "instmap.m"
      }
#line 1178 "instmap.m"
    return hlds__instmap__succeeded;
#line 1178 "instmap.m"
  }
#line 1175 "instmap.m"
}

#line 1147 "instmap.m"
static void MR_CALL 
hlds__instmap__compute_instmap_delta_2_4_p_0(
#line 1147 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1147 "instmap.m"
  MR_Word hlds__instmap__InstMapA_2,
#line 1147 "instmap.m"
  MR_Word hlds__instmap__InstMapB_3,
#line 1147 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 1147 "instmap.m"
{
#line 1150 "instmap.m"
  {
#line 1150 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1150 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1150 "instmap.m"
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1150 "instmap.m"
    else
#line 1151 "instmap.m"
      {
#line 1151 "instmap.m"
        MR_Word hlds__instmap__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 1151 "instmap.m"
        MR_Word hlds__instmap__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 1151 "instmap.m"
        MR_Word hlds__instmap__AssocListTail_12;
#line 1151 "instmap.m"
        MR_Word hlds__instmap__InstA_13;
#line 1151 "instmap.m"
        MR_Word hlds__instmap__InstB_14;
#line 546 "instmap.m"
        MR_Word hlds__instmap__VarInst_20;
#line 544 "instmap.m"
        MR_Box hlds__instmap__conv0_VarInst_20;
#line 546 "instmap.m"
        MR_Word hlds__instmap__VarInst_26;
#line 544 "instmap.m"
        MR_Box hlds__instmap__conv1_VarInst_26;

#line 1152 "instmap.m"
        {
#line 1152 "instmap.m"
          hlds__instmap__compute_instmap_delta_2_4_p_0(hlds__instmap__Vars_8, hlds__instmap__InstMapA_2, hlds__instmap__InstMapB_3, &hlds__instmap__AssocListTail_12);
        }
#line 544 "instmap.m"
        {
#line 544 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapA_2, ((MR_Box) (hlds__instmap__Var_7)), &hlds__instmap__conv0_VarInst_20);
        }
#line 544 "instmap.m"
        if (hlds__instmap__succeeded)
#line 544 "instmap.m"
          {
#line 544 "instmap.m"
            hlds__instmap__VarInst_20 = ((MR_Word) hlds__instmap__conv0_VarInst_20);
#line 544 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 544 "instmap.m"
          }
#line 546 "instmap.m"
        if (hlds__instmap__succeeded)
#line 545 "instmap.m"
          hlds__instmap__InstA_13 = hlds__instmap__VarInst_20;
#line 546 "instmap.m"
        else
#line 547 "instmap.m"
          hlds__instmap__InstA_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 544 "instmap.m"
        {
#line 544 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapB_3, ((MR_Box) (hlds__instmap__Var_7)), &hlds__instmap__conv1_VarInst_26);
        }
#line 544 "instmap.m"
        if (hlds__instmap__succeeded)
#line 544 "instmap.m"
          {
#line 544 "instmap.m"
            hlds__instmap__VarInst_26 = ((MR_Word) hlds__instmap__conv1_VarInst_26);
#line 544 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 544 "instmap.m"
          }
#line 546 "instmap.m"
        if (hlds__instmap__succeeded)
#line 545 "instmap.m"
          hlds__instmap__InstB_14 = hlds__instmap__VarInst_26;
#line 546 "instmap.m"
        else
#line 547 "instmap.m"
          hlds__instmap__InstB_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1155 "instmap.m"
        {
#line 1155 "instmap.m"
          hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__InstA_13, hlds__instmap__InstB_14);
        }
#line 1157 "instmap.m"
        if (hlds__instmap__succeeded)
#line 1156 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = hlds__instmap__AssocListTail_12;
#line 1157 "instmap.m"
        else
#line 1158 "instmap.m"
          {
#line 1158 "instmap.m"
            MR_Word hlds__instmap__V_15_15;

#line 1158 "instmap.m"
            {
#line 1158 "instmap.m"
              hlds__instmap__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1158 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 0) = ((MR_Box) (hlds__instmap__Var_7));
#line 1158 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 1) = ((MR_Box) (hlds__instmap__InstB_14));
#line 1158 "instmap.m"
            }
#line 1158 "instmap.m"
            {
#line 1158 "instmap.m"
              MR_Word base;
#line 1158 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "instmap.m"
              *hlds__instmap__HeadVar__4_4 = base;
#line 1158 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__V_15_15));
#line 1158 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__AssocListTail_12));
#line 1158 "instmap.m"
            }
#line 1158 "instmap.m"
          }
#line 1151 "instmap.m"
      }
#line 1150 "instmap.m"
  }
#line 1147 "instmap.m"
}

#line 1101 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_instmap_deltas_2_8_p_0(
#line 1101 "instmap.m"
  MR_Word hlds__instmap__InstMap_9,
#line 1101 "instmap.m"
  MR_Word hlds__instmap__NonLocals_10,
#line 1101 "instmap.m"
  MR_Word hlds__instmap__VarTypes_11,
#line 1101 "instmap.m"
  MR_Word hlds__instmap__Deltas_12,
#line 1101 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24,
#line 1101 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_MergedDeltas_25,
#line 1101 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26,
#line 1101 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_27)
#line 1101 "instmap.m"
{
#line 1108 "instmap.m"
  while (MR_TRUE)
#line 1108 "instmap.m"
    {
#line 1108 "instmap.m"
      /* tailcall optimized into a loop */
#line 1108 "instmap.m"
      {
#line 1108 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 1108 "instmap.m"
        if ((hlds__instmap__Deltas_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1108 "instmap.m"
          {
#line 1108 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_MergedDeltas_25 = hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24;
#line 1108 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_27 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26;
#line 1108 "instmap.m"
          }
#line 1108 "instmap.m"
        else
#line 1108 "instmap.m"
          {
#line 1108 "instmap.m"
            MR_Word hlds__instmap__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Deltas_12, (MR_Integer) 1)));
#line 1108 "instmap.m"
            MR_Word hlds__instmap__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Deltas_12, (MR_Integer) 0)));

#line 1108 "instmap.m"
            if ((hlds__instmap__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1110 "instmap.m"
              {
#line 1111 "instmap.m"
                {
#line 1111 "instmap.m"
                  MR_Word base;
#line 1111 "instmap.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "instmap.m"
                  *hlds__instmap__STATE_VARIABLE_MergedDeltas_25 = base;
#line 1111 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__V_58_58));
#line 1111 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24));
#line 1111 "instmap.m"
                }
#line 1111 "instmap.m"
                *hlds__instmap__STATE_VARIABLE_ModuleInfo_27 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26;
#line 1110 "instmap.m"
              }
#line 1108 "instmap.m"
            else
#line 1108 "instmap.m"
              {
#line 1108 "instmap.m"
                MR_Word hlds__instmap__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_57_57, (MR_Integer) 1)));
#line 1108 "instmap.m"
                MR_Word hlds__instmap__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_57_57, (MR_Integer) 0)));

#line 1108 "instmap.m"
                if ((hlds__instmap__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1113 "instmap.m"
                  {
#line 1113 "instmap.m"
                    MR_Word hlds__instmap__Delta12_17;

#line 1114 "instmap.m"
                    {
#line 1114 "instmap.m"
                      hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__V_58_58, hlds__instmap__V_60_60, &hlds__instmap__Delta12_17, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26, hlds__instmap__STATE_VARIABLE_ModuleInfo_27);
                    }
#line 1116 "instmap.m"
                    {
#line 1116 "instmap.m"
                      MR_Word base;
#line 1116 "instmap.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1116 "instmap.m"
                      *hlds__instmap__STATE_VARIABLE_MergedDeltas_25 = base;
#line 1116 "instmap.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Delta12_17));
#line 1116 "instmap.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24));
#line 1116 "instmap.m"
                    }
#line 1113 "instmap.m"
                  }
#line 1108 "instmap.m"
                else
#line 1108 "instmap.m"
                  {
#line 1108 "instmap.m"
                    MR_Word hlds__instmap__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_59_59, (MR_Integer) 1)));
#line 1108 "instmap.m"
                    MR_Word hlds__instmap__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_59_59, (MR_Integer) 0)));

#line 1108 "instmap.m"
                    if ((hlds__instmap__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1118 "instmap.m"
                      {
#line 1118 "instmap.m"
                        MR_Word hlds__instmap__Delta123_19;
#line 1118 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40;
#line 1118 "instmap.m"
                        MR_Word hlds__instmap__Delta12_52;

#line 1119 "instmap.m"
                        {
#line 1119 "instmap.m"
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__V_58_58, hlds__instmap__V_60_60, &hlds__instmap__Delta12_52, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26, &hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40);
                        }
#line 1121 "instmap.m"
                        {
#line 1121 "instmap.m"
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__Delta12_52, hlds__instmap__V_62_62, &hlds__instmap__Delta123_19, hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40, hlds__instmap__STATE_VARIABLE_ModuleInfo_27);
                        }
#line 1123 "instmap.m"
                        {
#line 1123 "instmap.m"
                          MR_Word base;
#line 1123 "instmap.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1123 "instmap.m"
                          *hlds__instmap__STATE_VARIABLE_MergedDeltas_25 = base;
#line 1123 "instmap.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Delta123_19));
#line 1123 "instmap.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24));
#line 1123 "instmap.m"
                        }
#line 1118 "instmap.m"
                      }
#line 1108 "instmap.m"
                    else
#line 1125 "instmap.m"
                      {
#line 1125 "instmap.m"
                        MR_Word hlds__instmap__Delta4_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_61_61, (MR_Integer) 0)));
#line 1125 "instmap.m"
                        MR_Word hlds__instmap__MoreDeltas_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_61_61, (MR_Integer) 1)));
#line 1125 "instmap.m"
                        MR_Word hlds__instmap__Delta34_22;
#line 1125 "instmap.m"
                        MR_Word hlds__instmap__Delta1234_23;
#line 1125 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_31_31;
#line 1125 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32;
#line 1125 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33;
#line 1125 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34;
#line 1125 "instmap.m"
                        MR_Word hlds__instmap__Delta12_55;

#line 1126 "instmap.m"
                        {
#line 1126 "instmap.m"
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__V_58_58, hlds__instmap__V_60_60, &hlds__instmap__Delta12_55, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26, &hlds__instmap__STATE_VARIABLE_ModuleInfo_31_31);
                        }
#line 1128 "instmap.m"
                        {
#line 1128 "instmap.m"
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__V_62_62, hlds__instmap__Delta4_20, &hlds__instmap__Delta34_22, hlds__instmap__STATE_VARIABLE_ModuleInfo_31_31, &hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32);
                        }
#line 1130 "instmap.m"
                        {
#line 1130 "instmap.m"
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__Delta12_55, hlds__instmap__Delta34_22, &hlds__instmap__Delta1234_23, hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32, &hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33);
                        }
#line 1132 "instmap.m"
                        {
#line 1132 "instmap.m"
                          hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1132 "instmap.m"
                          MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34, 0) = ((MR_Box) (hlds__instmap__Delta1234_23));
#line 1132 "instmap.m"
                          MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24));
#line 1132 "instmap.m"
                        }
#line 1133 "instmap.m"
                        /* direct tailcall eliminated */
#line 1133 "instmap.m"
                        {
#line 1133 "instmap.m"
                          MR_Word hlds__instmap__Deltas__tmp_copy_12 = hlds__instmap__MoreDeltas_21;
#line 1133 "instmap.m"
                          MR_Word hlds__instmap__STATE_VARIABLE_MergedDeltas_0__tmp_copy_24 = hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34;
#line 1133 "instmap.m"
                          MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33;

#line 1133 "instmap.m"
                          hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_26;
#line 1133 "instmap.m"
                          hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24 = hlds__instmap__STATE_VARIABLE_MergedDeltas_0__tmp_copy_24;
#line 1133 "instmap.m"
                          hlds__instmap__Deltas_12 = hlds__instmap__Deltas__tmp_copy_12;
#line 1133 "instmap.m"
                        }
#line 1133 "instmap.m"
                        continue;
#line 1125 "instmap.m"
                      }
#line 1108 "instmap.m"
                  }
#line 1108 "instmap.m"
              }
#line 1108 "instmap.m"
          }
#line 1108 "instmap.m"
      }
#line 1108 "instmap.m"
      break;
#line 1108 "instmap.m"
    }
#line 1101 "instmap.m"
}

#line 1077 "instmap.m"
static void MR_CALL 
hlds__instmap__arm_instmap_project_context_2_p_0(
#line 1077 "instmap.m"
  MR_Word hlds__instmap__ArmErrorInfo_3,
#line 1077 "instmap.m"
  MR_Word * hlds__instmap__Context_4)
#line 1077 "instmap.m"
{
#line 1080 "instmap.m"
  {
#line 1080 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 1080 "instmap.m"
    MR_Word hlds__instmap___InstMap_5;

#line 1080 "instmap.m"
    *hlds__instmap__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmErrorInfo_3, (MR_Integer) 0)));
#line 1080 "instmap.m"
    hlds__instmap___InstMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmErrorInfo_3, (MR_Integer) 1)));
#line 1080 "instmap.m"
  }
#line 1077 "instmap.m"
}

#line 1031 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_var_insts_pass_8_p_0(
#line 1031 "instmap.m"
  MR_Word hlds__instmap__Insts_9,
#line 1031 "instmap.m"
  MR_Word hlds__instmap__MaybeType_10,
#line 1031 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_MergedInsts_0_23,
#line 1031 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_MergedInsts_24,
#line 1031 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25,
#line 1031 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_26,
#line 1031 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_Error_0_27,
#line 1031 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_Error_28)
#line 1031 "instmap.m"
{
#line 1037 "instmap.m"
  while (MR_TRUE)
#line 1037 "instmap.m"
    {
#line 1037 "instmap.m"
      /* tailcall optimized into a loop */
#line 1037 "instmap.m"
      {
#line 1037 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 1037 "instmap.m"
        if ((hlds__instmap__Insts_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1037 "instmap.m"
          {
#line 1037 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = hlds__instmap__STATE_VARIABLE_MergedInsts_0_23;
#line 1037 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
#line 1037 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_Error_28 = hlds__instmap__STATE_VARIABLE_Error_0_27;
#line 1037 "instmap.m"
          }
#line 1037 "instmap.m"
        else
#line 1037 "instmap.m"
          {
#line 1037 "instmap.m"
            MR_Word hlds__instmap__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Insts_9, (MR_Integer) 1)));
#line 1037 "instmap.m"
            MR_Word hlds__instmap__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Insts_9, (MR_Integer) 0)));

#line 1037 "instmap.m"
            if ((hlds__instmap__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1039 "instmap.m"
              {
#line 1040 "instmap.m"
                {
#line 1040 "instmap.m"
                  MR_Word base;
#line 1040 "instmap.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "instmap.m"
                  *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = base;
#line 1040 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__V_69_69));
#line 1040 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedInsts_0_23));
#line 1040 "instmap.m"
                }
#line 1040 "instmap.m"
                *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
#line 1040 "instmap.m"
                *hlds__instmap__STATE_VARIABLE_Error_28 = hlds__instmap__STATE_VARIABLE_Error_0_27;
#line 1039 "instmap.m"
              }
#line 1037 "instmap.m"
            else
#line 1037 "instmap.m"
              {
#line 1037 "instmap.m"
                MR_Word hlds__instmap__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_68_68, (MR_Integer) 1)));
#line 1037 "instmap.m"
                MR_Word hlds__instmap__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_68_68, (MR_Integer) 0)));

#line 1037 "instmap.m"
                if ((hlds__instmap__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1047 "instmap.m"
                  {
#line 1047 "instmap.m"
                    MR_Word hlds__instmap__Inst12_16;
#line 1047 "instmap.m"
                    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50;

#line 1044 "instmap.m"
                    {
#line 1044 "instmap.m"
                      hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__V_69_69, hlds__instmap__V_71_71, hlds__instmap__MaybeType_10, &hlds__instmap__Inst12_16, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25, &hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50);
                    }
#line 1047 "instmap.m"
                    if (hlds__instmap__succeeded)
#line 1046 "instmap.m"
                      {
#line 1046 "instmap.m"
                        *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50;
#line 1046 "instmap.m"
                        {
#line 1046 "instmap.m"
                          MR_Word base;
#line 1046 "instmap.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1046 "instmap.m"
                          *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = base;
#line 1046 "instmap.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Inst12_16));
#line 1046 "instmap.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedInsts_0_23));
#line 1046 "instmap.m"
                        }
#line 1046 "instmap.m"
                        *hlds__instmap__STATE_VARIABLE_Error_28 = hlds__instmap__STATE_VARIABLE_Error_0_27;
#line 1046 "instmap.m"
                      }
#line 1047 "instmap.m"
                    else
#line 1048 "instmap.m"
                      {
#line 1048 "instmap.m"
                        *hlds__instmap__STATE_VARIABLE_Error_28 = (MR_Integer) 1;
#line 1048 "instmap.m"
                        *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
#line 1048 "instmap.m"
                        *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = hlds__instmap__STATE_VARIABLE_MergedInsts_0_23;
#line 1048 "instmap.m"
                      }
#line 1047 "instmap.m"
                  }
#line 1037 "instmap.m"
                else
#line 1037 "instmap.m"
                  {
#line 1037 "instmap.m"
                    MR_Word hlds__instmap__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_70_70, (MR_Integer) 1)));
#line 1037 "instmap.m"
                    MR_Word hlds__instmap__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_70_70, (MR_Integer) 0)));

#line 1037 "instmap.m"
                    if ((hlds__instmap__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1057 "instmap.m"
                      {
#line 1057 "instmap.m"
                        MR_Word hlds__instmap__Inst123_18;
#line 1057 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_44_44;
#line 1053 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_43_43;
#line 1053 "instmap.m"
                        MR_Word hlds__instmap__Inst12_57;

#line 1053 "instmap.m"
                        {
#line 1053 "instmap.m"
                          hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__V_69_69, hlds__instmap__V_71_71, hlds__instmap__MaybeType_10, &hlds__instmap__Inst12_57, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25, &hlds__instmap__STATE_VARIABLE_ModuleInfo_43_43);
                        }
#line 1053 "instmap.m"
                        if (hlds__instmap__succeeded)
#line 1054 "instmap.m"
                          {
#line 1054 "instmap.m"
                            hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__Inst12_57, hlds__instmap__V_73_73, hlds__instmap__MaybeType_10, &hlds__instmap__Inst123_18, hlds__instmap__STATE_VARIABLE_ModuleInfo_43_43, &hlds__instmap__STATE_VARIABLE_ModuleInfo_44_44);
                          }
#line 1057 "instmap.m"
                        if (hlds__instmap__succeeded)
#line 1056 "instmap.m"
                          {
#line 1056 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_44_44;
#line 1056 "instmap.m"
                            {
#line 1056 "instmap.m"
                              MR_Word base;
#line 1056 "instmap.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1056 "instmap.m"
                              *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = base;
#line 1056 "instmap.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Inst123_18));
#line 1056 "instmap.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedInsts_0_23));
#line 1056 "instmap.m"
                            }
#line 1056 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_Error_28 = hlds__instmap__STATE_VARIABLE_Error_0_27;
#line 1056 "instmap.m"
                          }
#line 1057 "instmap.m"
                        else
#line 1058 "instmap.m"
                          {
#line 1058 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_Error_28 = (MR_Integer) 1;
#line 1058 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
#line 1058 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = hlds__instmap__STATE_VARIABLE_MergedInsts_0_23;
#line 1058 "instmap.m"
                          }
#line 1057 "instmap.m"
                      }
#line 1037 "instmap.m"
                    else
#line 1061 "instmap.m"
                      {
#line 1061 "instmap.m"
                        MR_Word hlds__instmap__Inst4_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_72_72, (MR_Integer) 0)));
#line 1061 "instmap.m"
                        MR_Word hlds__instmap__MoreInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_72_72, (MR_Integer) 1)));
#line 1070 "instmap.m"
                        MR_Word hlds__instmap__Inst1234_22;
#line 1070 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_34_34;
#line 1063 "instmap.m"
                        MR_Word hlds__instmap__Inst34_21;
#line 1063 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32;
#line 1063 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33;
#line 1063 "instmap.m"
                        MR_Word hlds__instmap__Inst12_62;

#line 1063 "instmap.m"
                        {
#line 1063 "instmap.m"
                          hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__V_69_69, hlds__instmap__V_71_71, hlds__instmap__MaybeType_10, &hlds__instmap__Inst12_62, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25, &hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32);
                        }
#line 1063 "instmap.m"
                        if (hlds__instmap__succeeded)
#line 1063 "instmap.m"
                          {
#line 1064 "instmap.m"
                            {
#line 1064 "instmap.m"
                              hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__V_73_73, hlds__instmap__Inst4_19, hlds__instmap__MaybeType_10, &hlds__instmap__Inst34_21, hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32, &hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33);
                            }
#line 1063 "instmap.m"
                            if (hlds__instmap__succeeded)
#line 1065 "instmap.m"
                              {
#line 1065 "instmap.m"
                                hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__Inst12_62, hlds__instmap__Inst34_21, hlds__instmap__MaybeType_10, &hlds__instmap__Inst1234_22, hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33, &hlds__instmap__STATE_VARIABLE_ModuleInfo_34_34);
                              }
#line 1063 "instmap.m"
                          }
#line 1070 "instmap.m"
                        if (hlds__instmap__succeeded)
#line 1067 "instmap.m"
                          {
#line 1067 "instmap.m"
                            MR_Word hlds__instmap__STATE_VARIABLE_MergedInsts_35_35;

#line 1067 "instmap.m"
                            {
#line 1067 "instmap.m"
                              hlds__instmap__STATE_VARIABLE_MergedInsts_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "instmap.m"
                              MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_MergedInsts_35_35, 0) = ((MR_Box) (hlds__instmap__Inst1234_22));
#line 1067 "instmap.m"
                              MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_MergedInsts_35_35, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedInsts_0_23));
#line 1067 "instmap.m"
                            }
#line 1068 "instmap.m"
                            /* direct tailcall eliminated */
#line 1068 "instmap.m"
                            {
#line 1068 "instmap.m"
                              MR_Word hlds__instmap__Insts__tmp_copy_9 = hlds__instmap__MoreInsts_20;
#line 1068 "instmap.m"
                              MR_Word hlds__instmap__STATE_VARIABLE_MergedInsts_0__tmp_copy_23 = hlds__instmap__STATE_VARIABLE_MergedInsts_35_35;
#line 1068 "instmap.m"
                              MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_25 = hlds__instmap__STATE_VARIABLE_ModuleInfo_34_34;

#line 1068 "instmap.m"
                              hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_25;
#line 1068 "instmap.m"
                              hlds__instmap__STATE_VARIABLE_MergedInsts_0_23 = hlds__instmap__STATE_VARIABLE_MergedInsts_0__tmp_copy_23;
#line 1068 "instmap.m"
                              hlds__instmap__Insts_9 = hlds__instmap__Insts__tmp_copy_9;
#line 1068 "instmap.m"
                            }
#line 1068 "instmap.m"
                            continue;
#line 1067 "instmap.m"
                          }
#line 1070 "instmap.m"
                        else
#line 1071 "instmap.m"
                          {
#line 1071 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_Error_28 = (MR_Integer) 1;
#line 1071 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
#line 1071 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = hlds__instmap__STATE_VARIABLE_MergedInsts_0_23;
#line 1071 "instmap.m"
                          }
#line 1061 "instmap.m"
                      }
#line 1037 "instmap.m"
                  }
#line 1037 "instmap.m"
              }
#line 1037 "instmap.m"
          }
#line 1037 "instmap.m"
      }
#line 1037 "instmap.m"
      break;
#line 1037 "instmap.m"
    }
#line 1031 "instmap.m"
}

#line 1006 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_var_insts_5_p_0(
#line 1006 "instmap.m"
  MR_Word hlds__instmap__Insts_6,
#line 1006 "instmap.m"
  MR_Word hlds__instmap__Type_7,
#line 1006 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_16,
#line 1006 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_17,
#line 1006 "instmap.m"
  MR_Word * hlds__instmap__MaybeMergedInst_9)
#line 1006 "instmap.m"
{
#line 1009 "instmap.m"
  while (MR_TRUE)
#line 1009 "instmap.m"
    {
#line 1009 "instmap.m"
      /* tailcall optimized into a loop */
#line 1009 "instmap.m"
      {
#line 1009 "instmap.m"
        MR_bool hlds__instmap__succeeded;
#line 1009 "instmap.m"
        MR_Word hlds__instmap__MergedInsts_10;
#line 1009 "instmap.m"
        MR_Word hlds__instmap__Error_11;
#line 1009 "instmap.m"
        MR_Word hlds__instmap__V_18_18;
#line 1009 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_20_20;

#line 1012 "instmap.m"
        {
#line 1012 "instmap.m"
          hlds__instmap__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "instmap.m"
          MR_hl_field(MR_mktag(1), hlds__instmap__V_18_18, 0) = ((MR_Box) (hlds__instmap__Type_7));
#line 1012 "instmap.m"
        }
#line 1012 "instmap.m"
        {
#line 1012 "instmap.m"
          hlds__instmap__merge_var_insts_pass_8_p_0(hlds__instmap__Insts_6, hlds__instmap__V_18_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__instmap__MergedInsts_10, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_16, &hlds__instmap__STATE_VARIABLE_ModuleInfo_20_20, (MR_Integer) 0, &hlds__instmap__Error_11);
        }
#line 1017 "instmap.m"
        if ((hlds__instmap__Error_11 == (MR_Integer) 0))
#line 1018 "instmap.m"
          if ((hlds__instmap__MergedInsts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1020 "instmap.m"
            {
#line 1021 "instmap.m"
              *hlds__instmap__MaybeMergedInst_9 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__instmap_scalar_common_7[0]);
#line 1021 "instmap.m"
              *hlds__instmap__STATE_VARIABLE_ModuleInfo_17 = hlds__instmap__STATE_VARIABLE_ModuleInfo_20_20;
#line 1020 "instmap.m"
            }
#line 1018 "instmap.m"
          else
#line 1022 "instmap.m"
            {
#line 1022 "instmap.m"
              MR_Word hlds__instmap__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MergedInsts_10, (MR_Integer) 1)));
#line 1022 "instmap.m"
              MR_Word hlds__instmap__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MergedInsts_10, (MR_Integer) 0)));

#line 1022 "instmap.m"
              if ((hlds__instmap__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1023 "instmap.m"
                {
#line 1024 "instmap.m"
                  {
#line 1024 "instmap.m"
                    MR_Word base;
#line 1024 "instmap.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "instmap.m"
                    *hlds__instmap__MaybeMergedInst_9 = base;
#line 1024 "instmap.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__V_27_27));
#line 1024 "instmap.m"
                  }
#line 1024 "instmap.m"
                  *hlds__instmap__STATE_VARIABLE_ModuleInfo_17 = hlds__instmap__STATE_VARIABLE_ModuleInfo_20_20;
#line 1023 "instmap.m"
                }
#line 1022 "instmap.m"
              else
#line 1027 "instmap.m"
                {
#line 1027 "instmap.m"
                  /* direct tailcall eliminated */
#line 1027 "instmap.m"
                  {
#line 1027 "instmap.m"
                    MR_Word hlds__instmap__Insts__tmp_copy_6 = hlds__instmap__MergedInsts_10;
#line 1027 "instmap.m"
                    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_16 = hlds__instmap__STATE_VARIABLE_ModuleInfo_20_20;

#line 1027 "instmap.m"
                    hlds__instmap__STATE_VARIABLE_ModuleInfo_0_16 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_16;
#line 1027 "instmap.m"
                    hlds__instmap__Insts_6 = hlds__instmap__Insts__tmp_copy_6;
#line 1027 "instmap.m"
                  }
#line 1027 "instmap.m"
                  continue;
#line 1027 "instmap.m"
                }
#line 1022 "instmap.m"
            }
#line 1017 "instmap.m"
        else
#line 1015 "instmap.m"
          {
#line 1016 "instmap.m"
            *hlds__instmap__MaybeMergedInst_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1016 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_17 = hlds__instmap__STATE_VARIABLE_ModuleInfo_20_20;
#line 1015 "instmap.m"
          }
#line 1009 "instmap.m"
      }
#line 1009 "instmap.m"
      break;
#line 1009 "instmap.m"
    }
#line 1006 "instmap.m"
}

#line 974 "instmap.m"
static void MR_CALL 
hlds__instmap__lookup_var_in_arm_instmap_3_p_0(
#line 974 "instmap.m"
  MR_Word hlds__instmap__Var_4,
#line 974 "instmap.m"
  MR_Word hlds__instmap__ArmInstMap_5,
#line 974 "instmap.m"
  MR_Word * hlds__instmap__Inst_6)
#line 974 "instmap.m"
{
#line 977 "instmap.m"
  {
#line 977 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 977 "instmap.m"
    MR_Word hlds__instmap__InstMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmInstMap_5, (MR_Integer) 1)));
#line 978 "instmap.m"
    MR_Word hlds__instmap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmInstMap_5, (MR_Integer) 0)));

#line 979 "instmap.m"
    {
#line 979 "instmap.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_8, hlds__instmap__Var_4, hlds__instmap__Inst_6);
#line 979 "instmap.m"
      return;
    }
#line 977 "instmap.m"
  }
#line 974 "instmap.m"
}

#line 965 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_2(
#line 965 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 965 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 965 "instmap.m"
  MR_Box * hlds__instmap__wrapper_arg_2)
#line 965 "instmap.m"
{
#line 965 "instmap.m"
  {
#line 965 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;
#line 965 "instmap.m"
    MR_Word hlds__instmap__conv1_Context_4;

#line 965 "instmap.m"
    {
#line 965 "instmap.m"
      hlds__instmap__arm_instmap_project_context_2_p_0(((MR_Word) hlds__instmap__wrapper_arg_1), &hlds__instmap__conv1_Context_4);
    }
#line 965 "instmap.m"
    *hlds__instmap__wrapper_arg_2 = ((MR_Box) (hlds__instmap__conv1_Context_4));
#line 965 "instmap.m"
  }
#line 965 "instmap.m"
}

#line 961 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_1(
#line 961 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 961 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 961 "instmap.m"
  MR_Box * hlds__instmap__wrapper_arg_2)
#line 961 "instmap.m"
{
#line 961 "instmap.m"
  {
#line 961 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;
#line 961 "instmap.m"
    MR_Word hlds__instmap__conv0_Inst_6;

#line 961 "instmap.m"
    {
#line 961 "instmap.m"
      hlds__instmap__lookup_var_in_arm_instmap_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) hlds__instmap__wrapper_arg_1), &hlds__instmap__conv0_Inst_6);
    }
#line 961 "instmap.m"
    *hlds__instmap__wrapper_arg_2 = ((MR_Box) (hlds__instmap__conv0_Inst_6));
#line 961 "instmap.m"
  }
#line 961 "instmap.m"
}

#line 951 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0(
#line 951 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 951 "instmap.m"
  MR_Word hlds__instmap__ArmInstMaps_2,
#line 951 "instmap.m"
  MR_Word hlds__instmap__VarTypes_3,
#line 951 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 951 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__5_5,
#line 951 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6,
#line 951 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_7,
#line 951 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__8_8)
#line 951 "instmap.m"
{
#line 955 "instmap.m"
  {
#line 955 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 955 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 955 "instmap.m"
      {
#line 955 "instmap.m"
        *hlds__instmap__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 955 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6;
#line 955 "instmap.m"
        *hlds__instmap__HeadVar__5_5 = hlds__instmap__HeadVar__4_4;
#line 955 "instmap.m"
      }
#line 955 "instmap.m"
    else
#line 957 "instmap.m"
      {
#line 957 "instmap.m"
        MR_Word hlds__instmap__TypeCtorInfo_48_48;
#line 957 "instmap.m"
        MR_Word hlds__instmap__TypeCtorInfo_49_49;
#line 957 "instmap.m"
        MR_Word hlds__instmap__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 957 "instmap.m"
        MR_Word hlds__instmap__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 957 "instmap.m"
        MR_Word hlds__instmap__VarType_24;
#line 957 "instmap.m"
        MR_Word hlds__instmap__InstList_25;
#line 957 "instmap.m"
        MR_Word hlds__instmap__MaybeInst_26;
#line 957 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_35_35;
#line 957 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_36_36;
#line 957 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ErrorList_37_37;
#line 957 "instmap.m"
        MR_Word hlds__instmap__V_38_38;

#line 958 "instmap.m"
        {
#line 958 "instmap.m"
          hlds__instmap__merge_insts_of_vars_8_p_0(hlds__instmap__Vars_18, hlds__instmap__ArmInstMaps_2, hlds__instmap__VarTypes_3, hlds__instmap__HeadVar__4_4, &hlds__instmap__STATE_VARIABLE_InstMapping_35_35, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6, &hlds__instmap__STATE_VARIABLE_ModuleInfo_36_36, &hlds__instmap__STATE_VARIABLE_ErrorList_37_37);
        }
#line 960 "instmap.m"
        {
#line 960 "instmap.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(hlds__instmap__VarTypes_3, hlds__instmap__Var_17, &hlds__instmap__VarType_24);
        }
#line 961 "instmap.m"
        {
#line 961 "instmap.m"
          hlds__instmap__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 961 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_38_38, 0) = ((MR_Box) (&hlds__instmap_scalar_common_6[0]));
#line 961 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_38_38, 1) = ((MR_Box) (hlds__instmap__merge_insts_of_vars_8_p_0_1));
#line 961 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 961 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_38_38, 3) = ((MR_Box) (hlds__instmap__Var_17));
#line 961 "instmap.m"
        }
#line 3890 "hlds.instmap.c"
        hlds__instmap__TypeCtorInfo_48_48 = (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_arm_instmap_0;
#line 3892 "hlds.instmap.c"
        hlds__instmap__TypeCtorInfo_49_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 961 "instmap.m"
        {
#line 961 "instmap.m"
          mercury__list__map_3_p_0(hlds__instmap__TypeCtorInfo_48_48, hlds__instmap__TypeCtorInfo_49_49, hlds__instmap__V_38_38, hlds__instmap__ArmInstMaps_2, &hlds__instmap__InstList_25);
        }
#line 962 "instmap.m"
        {
#line 962 "instmap.m"
          hlds__instmap__merge_var_insts_5_p_0(hlds__instmap__InstList_25, hlds__instmap__VarType_24, hlds__instmap__STATE_VARIABLE_ModuleInfo_36_36, hlds__instmap__STATE_VARIABLE_ModuleInfo_7, &hlds__instmap__MaybeInst_26);
        }
#line 969 "instmap.m"
        if ((hlds__instmap__MaybeInst_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 964 "instmap.m"
          {
#line 964 "instmap.m"
            MR_Word hlds__instmap__TypeCtorInfo_52_52 = (MR_Word) &mercury__term__term__type_ctor_info_context_0;
#line 964 "instmap.m"
            MR_Word hlds__instmap__Contexts_27;
#line 964 "instmap.m"
            MR_Word hlds__instmap__ContextsInsts_28;
#line 964 "instmap.m"
            MR_Word hlds__instmap__V_43_43;

#line 965 "instmap.m"
            {
#line 965 "instmap.m"
              mercury__list__map_3_p_0(hlds__instmap__TypeCtorInfo_48_48, hlds__instmap__TypeCtorInfo_52_52, (MR_Word) &hlds__instmap_scalar_common_2[4], hlds__instmap__ArmInstMaps_2, &hlds__instmap__Contexts_27);
            }
#line 966 "instmap.m"
            {
#line 966 "instmap.m"
              mercury__assoc_list__from_corresponding_lists_3_p_0(hlds__instmap__TypeCtorInfo_52_52, hlds__instmap__TypeCtorInfo_49_49, hlds__instmap__Contexts_27, hlds__instmap__InstList_25, &hlds__instmap__ContextsInsts_28);
            }
#line 967 "instmap.m"
            {
#line 967 "instmap.m"
              hlds__instmap__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 967 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_43_43, 0) = ((MR_Box) (hlds__instmap__Var_17));
#line 967 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_43_43, 1) = ((MR_Box) (hlds__instmap__ContextsInsts_28));
#line 967 "instmap.m"
            }
#line 967 "instmap.m"
            {
#line 967 "instmap.m"
              MR_Word base;
#line 967 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 967 "instmap.m"
              *hlds__instmap__HeadVar__8_8 = base;
#line 967 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__V_43_43));
#line 967 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_ErrorList_37_37));
#line 967 "instmap.m"
            }
#line 968 "instmap.m"
            {
#line 968 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], hlds__instmap__TypeCtorInfo_49_49, ((MR_Box) (hlds__instmap__Var_17)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), hlds__instmap__STATE_VARIABLE_InstMapping_35_35, hlds__instmap__HeadVar__5_5);
#line 968 "instmap.m"
              return;
            }
#line 964 "instmap.m"
          }
#line 969 "instmap.m"
        else
#line 970 "instmap.m"
          {
#line 970 "instmap.m"
            MR_Word hlds__instmap__Inst_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MaybeInst_26, (MR_Integer) 0)));

#line 971 "instmap.m"
            {
#line 971 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], hlds__instmap__TypeCtorInfo_49_49, ((MR_Box) (hlds__instmap__Var_17)), ((MR_Box) (hlds__instmap__Inst_29)), hlds__instmap__STATE_VARIABLE_InstMapping_35_35, hlds__instmap__HeadVar__5_5);
            }
#line 971 "instmap.m"
            *hlds__instmap__HeadVar__8_8 = hlds__instmap__STATE_VARIABLE_ErrorList_37_37;
#line 970 "instmap.m"
          }
#line 957 "instmap.m"
      }
#line 955 "instmap.m"
  }
#line 951 "instmap.m"
}

#line 917 "instmap.m"
static void MR_CALL 
hlds__instmap__get_reachable_instmaps_2_p_0(
#line 917 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 917 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__2_2)
#line 917 "instmap.m"
{
#line 920 "instmap.m"
  while (MR_TRUE)
#line 920 "instmap.m"
    {
#line 920 "instmap.m"
      /* tailcall optimized into a loop */
#line 920 "instmap.m"
      {
#line 920 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 920 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 920 "instmap.m"
          *hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 920 "instmap.m"
        else
#line 921 "instmap.m"
          {
#line 921 "instmap.m"
            MR_Word hlds__instmap__ArmInstMap_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 921 "instmap.m"
            MR_Word hlds__instmap__ArmInstMaps_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 921 "instmap.m"
            MR_Word hlds__instmap__InstMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmInstMap_3, (MR_Integer) 1)));
#line 922 "instmap.m"
            MR_Word hlds__instmap__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmInstMap_3, (MR_Integer) 0)));

#line 927 "instmap.m"
            if ((hlds__instmap__InstMap_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 929 "instmap.m"
              {
#line 929 "instmap.m"
                /* direct tailcall eliminated */
#line 929 "instmap.m"
                {
#line 929 "instmap.m"
                  MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__ArmInstMaps_4;

#line 929 "instmap.m"
                  hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 929 "instmap.m"
                }
#line 929 "instmap.m"
                continue;
#line 929 "instmap.m"
              }
#line 927 "instmap.m"
            else
#line 924 "instmap.m"
              {
#line 924 "instmap.m"
                MR_Word hlds__instmap__InstMapping_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap_7, (MR_Integer) 0)));
#line 924 "instmap.m"
                MR_Word hlds__instmap__ReachablesTail_9;

#line 925 "instmap.m"
                {
#line 925 "instmap.m"
                  hlds__instmap__get_reachable_instmaps_2_p_0(hlds__instmap__ArmInstMaps_4, &hlds__instmap__ReachablesTail_9);
                }
#line 926 "instmap.m"
                {
#line 926 "instmap.m"
                  MR_Word base;
#line 926 "instmap.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 926 "instmap.m"
                  *hlds__instmap__HeadVar__2_2 = base;
#line 926 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_8));
#line 926 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__ReachablesTail_9));
#line 926 "instmap.m"
                }
#line 924 "instmap.m"
              }
#line 921 "instmap.m"
          }
#line 920 "instmap.m"
      }
#line 920 "instmap.m"
      break;
#line 920 "instmap.m"
    }
#line 917 "instmap.m"
}

#line 773 "instmap.m"
static void MR_CALL 
hlds__instmap__bind_inst_to_functors_others_6_p_0(
#line 773 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 773 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 773 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 773 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4,
#line 773 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5,
#line 773 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_6)
#line 773 "instmap.m"
{
#line 777 "instmap.m"
  {
#line 777 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 777 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 777 "instmap.m"
      {
#line 777 "instmap.m"
        *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 777 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_6 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5;
#line 777 "instmap.m"
      }
#line 777 "instmap.m"
    else
#line 779 "instmap.m"
      {
#line 779 "instmap.m"
        MR_Word hlds__instmap__ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 779 "instmap.m"
        MR_Word hlds__instmap__ConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 779 "instmap.m"
        MR_Word hlds__instmap__FinalInst_16;
#line 779 "instmap.m"
        MR_Word hlds__instmap__FinalInsts_17;
#line 779 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21;
#line 779 "instmap.m"
        MR_Integer hlds__instmap__Arity_31;
#line 779 "instmap.m"
        MR_Word hlds__instmap__ArgLives_32;
#line 779 "instmap.m"
        MR_Word hlds__instmap__ArgInsts_33;
#line 746 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_39;
#line 746 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_40;
#line 742 "instmap.m"
        MR_Word hlds__instmap___Det_34;

#line 738 "instmap.m"
        {
#line 738 "instmap.m"
          hlds__instmap__Arity_31 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5, hlds__instmap__HeadVar__1_1, hlds__instmap__ConsId_13);
        }
#line 739 "instmap.m"
        {
#line 739 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_31, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_32);
        }
#line 740 "instmap.m"
        {
#line 740 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_31, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_33);
        }
#line 742 "instmap.m"
        {
#line 742 "instmap.m"
          hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__HeadVar__3_3, hlds__instmap__ConsId_13, hlds__instmap__ArgInsts_33, hlds__instmap__ArgLives_32, (MR_Integer) 0, hlds__instmap__HeadVar__1_1, &hlds__instmap__STATE_VARIABLE_Inst_23_39, &hlds__instmap___Det_34, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_40);
        }
#line 746 "instmap.m"
        if (hlds__instmap__succeeded)
#line 745 "instmap.m"
          {
#line 745 "instmap.m"
            hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_40;
#line 745 "instmap.m"
            hlds__instmap__FinalInst_16 = hlds__instmap__STATE_VARIABLE_Inst_23_39;
#line 745 "instmap.m"
          }
#line 746 "instmap.m"
        else
#line 747 "instmap.m"
          {
#line 747 "instmap.m"
            {
#line 747 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
#line 747 "instmap.m"
              return;
            }
#line 747 "instmap.m"
          }
#line 781 "instmap.m"
        {
#line 781 "instmap.m"
          hlds__instmap__bind_inst_to_functors_others_6_p_0(hlds__instmap__HeadVar__1_1, hlds__instmap__ConsIds_14, hlds__instmap__HeadVar__3_3, &hlds__instmap__FinalInsts_17, hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21, hlds__instmap__STATE_VARIABLE_ModuleInfo_6);
        }
#line 779 "instmap.m"
        {
#line 779 "instmap.m"
          MR_Word base;
#line 779 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = base;
#line 779 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__FinalInst_16));
#line 779 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__FinalInsts_17));
#line 779 "instmap.m"
        }
#line 779 "instmap.m"
      }
#line 777 "instmap.m"
  }
#line 773 "instmap.m"
}

#line 627 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_same_4_p_0(
#line 627 "instmap.m"
  MR_Word hlds__instmap__Inst_1,
#line 627 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 627 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_3,
#line 627 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_4)
#line 627 "instmap.m"
{
#line 630 "instmap.m"
  while (MR_TRUE)
#line 630 "instmap.m"
    {
#line 630 "instmap.m"
      /* tailcall optimized into a loop */
#line 630 "instmap.m"
      {
#line 630 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 630 "instmap.m"
        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 630 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMapping_4 = hlds__instmap__STATE_VARIABLE_InstMapping_0_3;
#line 630 "instmap.m"
        else
#line 631 "instmap.m"
          {
#line 631 "instmap.m"
            MR_Word hlds__instmap__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 631 "instmap.m"
            MR_Word hlds__instmap__Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 631 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_15_15;

#line 632 "instmap.m"
            {
#line 632 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_10)), ((MR_Box) (hlds__instmap__Inst_1)), hlds__instmap__STATE_VARIABLE_InstMapping_0_3, &hlds__instmap__STATE_VARIABLE_InstMapping_15_15);
            }
#line 633 "instmap.m"
            /* direct tailcall eliminated */
#line 633 "instmap.m"
            {
#line 633 "instmap.m"
              MR_Word hlds__instmap__HeadVar__2__tmp_copy_2 = hlds__instmap__Vars_11;
#line 633 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_3 = hlds__instmap__STATE_VARIABLE_InstMapping_15_15;

#line 633 "instmap.m"
              hlds__instmap__STATE_VARIABLE_InstMapping_0_3 = hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_3;
#line 633 "instmap.m"
              hlds__instmap__HeadVar__2_2 = hlds__instmap__HeadVar__2__tmp_copy_2;
#line 633 "instmap.m"
            }
#line 633 "instmap.m"
            continue;
#line 631 "instmap.m"
          }
#line 630 "instmap.m"
      }
#line 630 "instmap.m"
      break;
#line 630 "instmap.m"
    }
#line 627 "instmap.m"
}

#line 607 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_2(
#line 607 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 607 "instmap.m"
{
#line 607 "instmap.m"
  {
#line 607 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 607 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 607 "instmap.m"
    {
#line 607 "instmap.m"
      return hlds__instmap__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))));
    }
#line 607 "instmap.m"
    return hlds__instmap__succeeded;
#line 607 "instmap.m"
  }
#line 607 "instmap.m"
}

#line 607 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_1(
#line 607 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 607 "instmap.m"
{
#line 607 "instmap.m"
  {
#line 607 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 607 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 607 "instmap.m"
    {
#line 607 "instmap.m"
      return hlds__instmap__succeeded = hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__607__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))));
    }
#line 607 "instmap.m"
    return hlds__instmap__succeeded;
#line 607 "instmap.m"
  }
#line 607 "instmap.m"
}

#line 600 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0(
#line 600 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 600 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 600 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 600 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 600 "instmap.m"
{
#line 604 "instmap.m"
  while (MR_TRUE)
#line 604 "instmap.m"
    {
#line 604 "instmap.m"
      /* tailcall optimized into a loop */
#line 604 "instmap.m"
      {
#line 604 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 604 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 604 "instmap.m"
          if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 604 "instmap.m"
            *hlds__instmap__HeadVar__4_4 = hlds__instmap__HeadVar__3_3;
#line 604 "instmap.m"
          else
#line 612 "instmap.m"
            {
#line 613 "instmap.m"
              {
#line 613 "instmap.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmapping_set_vars_corresponding\'/4", (MR_String) "length mismatch (2)");
#line 613 "instmap.m"
                return;
              }
#line 612 "instmap.m"
            }
#line 604 "instmap.m"
        else
#line 604 "instmap.m"
          {
#line 604 "instmap.m"
            MR_Word hlds__instmap__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 604 "instmap.m"
            MR_Word hlds__instmap__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 604 "instmap.m"
            if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "instmap.m"
              {
#line 611 "instmap.m"
                {
#line 611 "instmap.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmapping_set_vars_corresponding\'/4", (MR_String) "length mismatch (1)");
#line 611 "instmap.m"
                  return;
                }
#line 610 "instmap.m"
              }
#line 604 "instmap.m"
            else
#line 606 "instmap.m"
              {
#line 606 "instmap.m"
                MR_Word hlds__instmap__Inst_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 606 "instmap.m"
                MR_Word hlds__instmap__Insts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 606 "instmap.m"
                MR_Word hlds__instmap__V_15_15;
#line 606 "instmap.m"
                MR_Word hlds__instmap__V_19_19;
#line 606 "instmap.m"
                MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_21_21;

#line 607 "instmap.m"
                {
#line 607 "instmap.m"
                  hlds__instmap__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 607 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_19_19, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
#line 607 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_19_19, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_corresponding_4_p_0_1));
#line 607 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 607 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_19_19, 3) = ((MR_Box) (hlds__instmap__Inst_10));
#line 607 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_19_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 607 "instmap.m"
                }
#line 607 "instmap.m"
                {
#line 607 "instmap.m"
                  hlds__instmap__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 607 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
#line 607 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_corresponding_4_p_0_2));
#line 607 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 607 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 3) = ((MR_Box) (hlds__instmap__V_19_19));
#line 607 "instmap.m"
                }
#line 607 "instmap.m"
                {
#line 607 "instmap.m"
                  mercury__require__expect_4_p_0(hlds__instmap__V_15_15, (MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmapping_set_vars_corresponding\'/4", (MR_String) "not_reached");
                }
#line 608 "instmap.m"
                {
#line 608 "instmap.m"
                  mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__V_43_43)), ((MR_Box) (hlds__instmap__Inst_10)), hlds__instmap__HeadVar__3_3, &hlds__instmap__STATE_VARIABLE_InstMapping_21_21);
                }
#line 609 "instmap.m"
                /* direct tailcall eliminated */
#line 609 "instmap.m"
                {
#line 609 "instmap.m"
                  MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__V_42_42;
#line 609 "instmap.m"
                  MR_Word hlds__instmap__HeadVar__2__tmp_copy_2 = hlds__instmap__Insts_11;
#line 609 "instmap.m"
                  MR_Word hlds__instmap__HeadVar__3__tmp_copy_3 = hlds__instmap__STATE_VARIABLE_InstMapping_21_21;

#line 609 "instmap.m"
                  hlds__instmap__HeadVar__3_3 = hlds__instmap__HeadVar__3__tmp_copy_3;
#line 609 "instmap.m"
                  hlds__instmap__HeadVar__2_2 = hlds__instmap__HeadVar__2__tmp_copy_2;
#line 609 "instmap.m"
                  hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 609 "instmap.m"
                }
#line 609 "instmap.m"
                continue;
#line 606 "instmap.m"
              }
#line 604 "instmap.m"
          }
#line 604 "instmap.m"
      }
#line 604 "instmap.m"
      break;
#line 604 "instmap.m"
    }
#line 600 "instmap.m"
}

#line 585 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_2(
#line 585 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 585 "instmap.m"
{
#line 585 "instmap.m"
  {
#line 585 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 585 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 585 "instmap.m"
    {
#line 585 "instmap.m"
      return hlds__instmap__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))));
    }
#line 585 "instmap.m"
    return hlds__instmap__succeeded;
#line 585 "instmap.m"
  }
#line 585 "instmap.m"
}

#line 585 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_1(
#line 585 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 585 "instmap.m"
{
#line 585 "instmap.m"
  {
#line 585 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 585 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 585 "instmap.m"
    {
#line 585 "instmap.m"
      return hlds__instmap__succeeded = hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__585__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))));
    }
#line 585 "instmap.m"
    return hlds__instmap__succeeded;
#line 585 "instmap.m"
  }
#line 585 "instmap.m"
}

#line 580 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0(
#line 580 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 580 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_2,
#line 580 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_3)
#line 580 "instmap.m"
{
#line 583 "instmap.m"
  while (MR_TRUE)
#line 583 "instmap.m"
    {
#line 583 "instmap.m"
      /* tailcall optimized into a loop */
#line 583 "instmap.m"
      {
#line 583 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 583 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 583 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMapping_3 = hlds__instmap__STATE_VARIABLE_InstMapping_0_2;
#line 583 "instmap.m"
        else
#line 584 "instmap.m"
          {
#line 584 "instmap.m"
            MR_Word hlds__instmap__Var_7;
#line 584 "instmap.m"
            MR_Word hlds__instmap__Inst_8;
#line 584 "instmap.m"
            MR_Word hlds__instmap__VarsInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 584 "instmap.m"
            MR_Word hlds__instmap__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 584 "instmap.m"
            MR_Word hlds__instmap__V_14_14;
#line 584 "instmap.m"
            MR_Word hlds__instmap__V_18_18;
#line 584 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_20_20;

#line 584 "instmap.m"
            hlds__instmap__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_13_13, (MR_Integer) 0)));
#line 584 "instmap.m"
            hlds__instmap__Inst_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_13_13, (MR_Integer) 1)));
#line 585 "instmap.m"
            {
#line 585 "instmap.m"
              hlds__instmap__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 585 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_18_18, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
#line 585 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_18_18, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_3_p_0_1));
#line 585 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 585 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_18_18, 3) = ((MR_Box) (hlds__instmap__Inst_8));
#line 585 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_18_18, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 585 "instmap.m"
            }
#line 585 "instmap.m"
            {
#line 585 "instmap.m"
              hlds__instmap__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 585 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_14_14, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
#line 585 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_14_14, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_3_p_0_2));
#line 585 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 585 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_14_14, 3) = ((MR_Box) (hlds__instmap__V_18_18));
#line 585 "instmap.m"
            }
#line 585 "instmap.m"
            {
#line 585 "instmap.m"
              mercury__require__expect_4_p_0(hlds__instmap__V_14_14, (MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmapping_set_vars\'/3", (MR_String) "not_reached");
            }
#line 586 "instmap.m"
            {
#line 586 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_7)), ((MR_Box) (hlds__instmap__Inst_8)), hlds__instmap__STATE_VARIABLE_InstMapping_0_2, &hlds__instmap__STATE_VARIABLE_InstMapping_20_20);
            }
#line 587 "instmap.m"
            /* direct tailcall eliminated */
#line 587 "instmap.m"
            {
#line 587 "instmap.m"
              MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__VarsInsts_9;
#line 587 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_2 = hlds__instmap__STATE_VARIABLE_InstMapping_20_20;

#line 587 "instmap.m"
              hlds__instmap__STATE_VARIABLE_InstMapping_0_2 = hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_2;
#line 587 "instmap.m"
              hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 587 "instmap.m"
            }
#line 587 "instmap.m"
            continue;
#line 584 "instmap.m"
          }
#line 583 "instmap.m"
      }
#line 583 "instmap.m"
      break;
#line 583 "instmap.m"
    }
#line 580 "instmap.m"
}

#line 513 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_changed_vars_2_6_p_0(
#line 513 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 513 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 513 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 513 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 513 "instmap.m"
  MR_Word hlds__instmap__HeadVar__5_5,
#line 513 "instmap.m"
  MR_Word * hlds__instmap__ChangedVars_6)
#line 513 "instmap.m"
{
#line 517 "instmap.m"
  {
#line 517 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 517 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 517 "instmap.m"
      {
#line 518 "instmap.m"
        {
#line 518 "instmap.m"
          parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__ChangedVars_6);
#line 518 "instmap.m"
          return;
        }
#line 517 "instmap.m"
      }
#line 517 "instmap.m"
    else
#line 520 "instmap.m"
      {
#line 520 "instmap.m"
        MR_Word hlds__instmap__VarB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 520 "instmap.m"
        MR_Word hlds__instmap__VarBs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 520 "instmap.m"
        MR_Word hlds__instmap__ChangedVars0_19;
#line 520 "instmap.m"
        MR_Word hlds__instmap__InitialInst_20;
#line 520 "instmap.m"
        MR_Word hlds__instmap__FinalInst_21;
#line 520 "instmap.m"
        MR_Word hlds__instmap__Type_22;

#line 521 "instmap.m"
        {
#line 521 "instmap.m"
          hlds__instmap__instmap_changed_vars_2_6_p_0(hlds__instmap__VarBs_13, hlds__instmap__HeadVar__2_2, hlds__instmap__HeadVar__3_3, hlds__instmap__HeadVar__4_4, hlds__instmap__HeadVar__5_5, &hlds__instmap__ChangedVars0_19);
        }
#line 524 "instmap.m"
        {
#line 524 "instmap.m"
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__HeadVar__2_2, hlds__instmap__VarB_12, &hlds__instmap__InitialInst_20);
        }
#line 525 "instmap.m"
        {
#line 525 "instmap.m"
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__HeadVar__3_3, hlds__instmap__VarB_12, &hlds__instmap__FinalInst_21);
        }
#line 526 "instmap.m"
        {
#line 526 "instmap.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(hlds__instmap__HeadVar__4_4, hlds__instmap__VarB_12, &hlds__instmap__Type_22);
        }
#line 528 "instmap.m"
        {
#line 528 "instmap.m"
          hlds__instmap__succeeded = check_hlds__inst_match__inst_matches_final_typed_4_p_0(hlds__instmap__InitialInst_20, hlds__instmap__FinalInst_21, hlds__instmap__Type_22, hlds__instmap__HeadVar__5_5);
        }
#line 530 "instmap.m"
        if (hlds__instmap__succeeded)
#line 529 "instmap.m"
          *hlds__instmap__ChangedVars_6 = hlds__instmap__ChangedVars0_19;
#line 530 "instmap.m"
        else
#line 531 "instmap.m"
          {
#line 531 "instmap.m"
            {
#line 531 "instmap.m"
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__VarB_12, hlds__instmap__ChangedVars0_19, hlds__instmap__ChangedVars_6);
#line 531 "instmap.m"
              return;
            }
#line 531 "instmap.m"
          }
#line 520 "instmap.m"
      }
#line 517 "instmap.m"
  }
#line 513 "instmap.m"
}

#line 490 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_bound_vars_2_5_p_0(
#line 490 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 490 "instmap.m"
  MR_Word hlds__instmap__Var_7,
#line 490 "instmap.m"
  MR_Word hlds__instmap__Inst_8,
#line 490 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_BoundVars_0_10,
#line 490 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_BoundVars_11)
#line 490 "instmap.m"
{
#line 496 "instmap.m"
  {
#line 496 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 494 "instmap.m"
    {
#line 494 "instmap.m"
      hlds__instmap__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(hlds__instmap__ModuleInfo_6, hlds__instmap__Inst_8);
    }
#line 496 "instmap.m"
    if (hlds__instmap__succeeded)
#line 495 "instmap.m"
      {
#line 495 "instmap.m"
        {
#line 495 "instmap.m"
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Var_7, hlds__instmap__STATE_VARIABLE_BoundVars_0_10, hlds__instmap__STATE_VARIABLE_BoundVars_11);
#line 495 "instmap.m"
          return;
        }
#line 495 "instmap.m"
      }
#line 496 "instmap.m"
    else
#line 495 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_BoundVars_11 = hlds__instmap__STATE_VARIABLE_BoundVars_0_10;
#line 496 "instmap.m"
  }
#line 490 "instmap.m"
}

#line 471 "instmap.m"
static MR_Word MR_CALL 
hlds__instmap__pair_with_ground_1_f_0(
#line 471 "instmap.m"
  MR_Word hlds__instmap__Var_3)
#line 471 "instmap.m"
{
#line 473 "instmap.m"
  {
#line 473 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 473 "instmap.m"
    MR_Word hlds__instmap__HeadVar__2_2;

#line 473 "instmap.m"
    {
#line 473 "instmap.m"
      hlds__instmap__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 473 "instmap.m"
      MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, 0) = ((MR_Box) (hlds__instmap__Var_3));
#line 473 "instmap.m"
      MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__instmap_scalar_common_2[2])));
#line 473 "instmap.m"
    }
#line 473 "instmap.m"
    return hlds__instmap__HeadVar__2_2;
#line 473 "instmap.m"
  }
#line 471 "instmap.m"
}

#line 438 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_delta_from_mode_list_2_5_p_0(
#line 438 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 438 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 438 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_3,
#line 438 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4,
#line 438 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapDelta_5)
#line 438 "instmap.m"
{
#line 441 "instmap.m"
  while (MR_TRUE)
#line 441 "instmap.m"
    {
#line 441 "instmap.m"
      /* tailcall optimized into a loop */
#line 441 "instmap.m"
      {
#line 441 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 441 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 441 "instmap.m"
          if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 441 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_InstMapDelta_5 = hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4;
#line 441 "instmap.m"
          else
#line 442 "instmap.m"
            {
#line 443 "instmap.m"
              {
#line 443 "instmap.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_delta_from_mode_list_2\'/5", (MR_String) "length mismatch");
#line 443 "instmap.m"
                return;
              }
#line 442 "instmap.m"
            }
#line 441 "instmap.m"
        else
#line 441 "instmap.m"
          {
#line 441 "instmap.m"
            MR_Word hlds__instmap__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 441 "instmap.m"
            MR_Word hlds__instmap__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 441 "instmap.m"
            if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 444 "instmap.m"
              {
#line 445 "instmap.m"
                {
#line 445 "instmap.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_delta_from_mode_list_2\'/5", (MR_String) "length mismatch");
#line 445 "instmap.m"
                  return;
                }
#line 444 "instmap.m"
              }
#line 441 "instmap.m"
            else
#line 447 "instmap.m"
              {
#line 447 "instmap.m"
                MR_Word hlds__instmap__Mode_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 447 "instmap.m"
                MR_Word hlds__instmap__Modes_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 447 "instmap.m"
                MR_Word hlds__instmap__Inst1_34;
#line 447 "instmap.m"
                MR_Word hlds__instmap__Inst2_35;

#line 448 "instmap.m"
                {
#line 448 "instmap.m"
                  check_hlds__mode_util__mode_get_insts_4_p_0(hlds__instmap__ModuleInfo_3, hlds__instmap__Mode_30, &hlds__instmap__Inst1_34, &hlds__instmap__Inst2_35);
                }
#line 449 "instmap.m"
                {
#line 449 "instmap.m"
                  hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst1_34, hlds__instmap__Inst2_35);
                }
#line 451 "instmap.m"
                if (hlds__instmap__succeeded)
#line 450 "instmap.m"
                  {
#line 450 "instmap.m"
                    /* direct tailcall eliminated */
#line 450 "instmap.m"
                    {
#line 450 "instmap.m"
                      MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__V_41_41;
#line 450 "instmap.m"
                      MR_Word hlds__instmap__HeadVar__2__tmp_copy_2 = hlds__instmap__Modes_31;

#line 450 "instmap.m"
                      hlds__instmap__HeadVar__2_2 = hlds__instmap__HeadVar__2__tmp_copy_2;
#line 450 "instmap.m"
                      hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 450 "instmap.m"
                    }
#line 450 "instmap.m"
                    continue;
#line 450 "instmap.m"
                  }
#line 451 "instmap.m"
                else
#line 452 "instmap.m"
                  {
#line 452 "instmap.m"
                    MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_39_39;

#line 452 "instmap.m"
                    {
#line 452 "instmap.m"
                      hlds__instmap__instmap_delta_set_var_4_p_0(hlds__instmap__V_42_42, hlds__instmap__Inst2_35, hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4, &hlds__instmap__STATE_VARIABLE_InstMapDelta_39_39);
                    }
#line 453 "instmap.m"
                    /* direct tailcall eliminated */
#line 453 "instmap.m"
                    {
#line 453 "instmap.m"
                      MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__V_41_41;
#line 453 "instmap.m"
                      MR_Word hlds__instmap__HeadVar__2__tmp_copy_2 = hlds__instmap__Modes_31;
#line 453 "instmap.m"
                      MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_0__tmp_copy_4 = hlds__instmap__STATE_VARIABLE_InstMapDelta_39_39;

#line 453 "instmap.m"
                      hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4 = hlds__instmap__STATE_VARIABLE_InstMapDelta_0__tmp_copy_4;
#line 453 "instmap.m"
                      hlds__instmap__HeadVar__2_2 = hlds__instmap__HeadVar__2__tmp_copy_2;
#line 453 "instmap.m"
                      hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 453 "instmap.m"
                    }
#line 453 "instmap.m"
                    continue;
#line 452 "instmap.m"
                  }
#line 447 "instmap.m"
              }
#line 441 "instmap.m"
          }
#line 441 "instmap.m"
      }
#line 441 "instmap.m"
      break;
#line 441 "instmap.m"
    }
#line 438 "instmap.m"
}

#line 360 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__var_is_bound_in_instmap_delta_4_p_0(
#line 360 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_5,
#line 360 "instmap.m"
  MR_Word hlds__instmap__InstMap_6,
#line 360 "instmap.m"
  MR_Word hlds__instmap__InstMapDelta_7,
#line 360 "instmap.m"
  MR_Word hlds__instmap__Var_8)
#line 360 "instmap.m"
{
#line 1391 "instmap.m"
  {
#line 1391 "instmap.m"
    MR_bool hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__InstMap_6)) == (MR_mktag((MR_Integer) 1)));
#line 1391 "instmap.m"
    MR_Word hlds__instmap__TypeInfo_8_17;
#line 1391 "instmap.m"
    MR_Word hlds__instmap__TypeCtorInfo_9_18;
#line 1391 "instmap.m"
    MR_Word hlds__instmap__OldVarInst_9;
#line 1391 "instmap.m"
    MR_Word hlds__instmap__VarInst_10;
#line 1391 "instmap.m"
    MR_Word hlds__instmap__InstMap_14;
#line 1391 "instmap.m"
    MR_Word hlds__instmap__InstMap_20;
#line 414 "instmap.m"
    MR_Word hlds__instmap__V_12_12;
#line 546 "instmap.m"
    MR_Word hlds__instmap__VarInst_26;
#line 544 "instmap.m"
    MR_Word hlds__instmap__TypeInfo_8_27;
#line 544 "instmap.m"
    MR_Word hlds__instmap__TypeCtorInfo_9_28;
#line 544 "instmap.m"
    MR_Box hlds__instmap__conv0_VarInst_26;
#line 552 "instmap.m"
    MR_Box hlds__instmap__conv1_VarInst_10;

#line 410 "instmap.m"
    if (hlds__instmap__succeeded)
#line 410 "instmap.m"
      {
#line 410 "instmap.m"
        hlds__instmap__InstMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap_6, (MR_Integer) 0)));
#line 414 "instmap.m"
        hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__InstMapDelta_7)) == (MR_mktag((MR_Integer) 1)));
#line 414 "instmap.m"
        if (hlds__instmap__succeeded)
#line 414 "instmap.m"
          {
#line 414 "instmap.m"
            hlds__instmap__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_7, (MR_Integer) 0)));
#line 5051 "hlds.instmap.c"
            hlds__instmap__TypeInfo_8_27 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 5053 "hlds.instmap.c"
            hlds__instmap__TypeCtorInfo_9_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 544 "instmap.m"
            {
#line 544 "instmap.m"
              hlds__instmap__succeeded = mercury__map__search_3_p_0(hlds__instmap__TypeInfo_8_27, hlds__instmap__TypeCtorInfo_9_28, hlds__instmap__InstMap_20, ((MR_Box) (hlds__instmap__Var_8)), &hlds__instmap__conv0_VarInst_26);
            }
#line 544 "instmap.m"
            if (hlds__instmap__succeeded)
#line 544 "instmap.m"
              {
#line 544 "instmap.m"
                hlds__instmap__VarInst_26 = ((MR_Word) hlds__instmap__conv0_VarInst_26);
#line 544 "instmap.m"
                hlds__instmap__succeeded = MR_TRUE;
#line 544 "instmap.m"
              }
#line 546 "instmap.m"
            if (hlds__instmap__succeeded)
#line 545 "instmap.m"
              hlds__instmap__OldVarInst_9 = hlds__instmap__VarInst_26;
#line 546 "instmap.m"
            else
#line 547 "instmap.m"
              hlds__instmap__OldVarInst_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1395 "instmap.m"
            {
#line 1395 "instmap.m"
              hlds__instmap__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(hlds__instmap__ModuleInfo_5, hlds__instmap__OldVarInst_9);
            }
#line 1391 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1391 "instmap.m"
              {
#line 551 "instmap.m"
                hlds__instmap__InstMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_7, (MR_Integer) 0)));
#line 5089 "hlds.instmap.c"
                hlds__instmap__TypeInfo_8_17 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 5091 "hlds.instmap.c"
                hlds__instmap__TypeCtorInfo_9_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 552 "instmap.m"
                {
#line 552 "instmap.m"
                  hlds__instmap__succeeded = mercury__map__search_3_p_0(hlds__instmap__TypeInfo_8_17, hlds__instmap__TypeCtorInfo_9_18, hlds__instmap__InstMap_14, ((MR_Box) (hlds__instmap__Var_8)), &hlds__instmap__conv1_VarInst_10);
                }
#line 552 "instmap.m"
                if (hlds__instmap__succeeded)
#line 552 "instmap.m"
                  {
#line 552 "instmap.m"
                    hlds__instmap__VarInst_10 = ((MR_Word) hlds__instmap__conv1_VarInst_10);
#line 552 "instmap.m"
                    hlds__instmap__succeeded = MR_TRUE;
#line 552 "instmap.m"
                  }
#line 1391 "instmap.m"
                if (hlds__instmap__succeeded)
#line 1397 "instmap.m"
                  {
#line 1397 "instmap.m"
                    return hlds__instmap__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(hlds__instmap__ModuleInfo_5, hlds__instmap__VarInst_10);
                  }
#line 1391 "instmap.m"
              }
#line 414 "instmap.m"
          }
#line 410 "instmap.m"
      }
#line 1391 "instmap.m"
    return hlds__instmap__succeeded;
#line 1391 "instmap.m"
  }
#line 360 "instmap.m"
}

#line 350 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__var_is_any_in_instmap_3_p_0(
#line 350 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_4,
#line 350 "instmap.m"
  MR_Word hlds__instmap__InstMap_5,
#line 350 "instmap.m"
  MR_Word hlds__instmap__Var_6)
#line 350 "instmap.m"
{
#line 1387 "instmap.m"
  {
#line 1387 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 1387 "instmap.m"
    MR_Word hlds__instmap__Inst_7;

#line 1388 "instmap.m"
    {
#line 1388 "instmap.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_5, hlds__instmap__Var_6, &hlds__instmap__Inst_7);
    }
#line 1389 "instmap.m"
    {
#line 1389 "instmap.m"
      return hlds__instmap__succeeded = check_hlds__inst_match__inst_is_any_2_p_0(hlds__instmap__ModuleInfo_4, hlds__instmap__Inst_7);
    }
#line 1387 "instmap.m"
    return hlds__instmap__succeeded;
#line 1387 "instmap.m"
  }
#line 350 "instmap.m"
}

#line 347 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__var_is_ground_in_instmap_3_p_0(
#line 347 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_4,
#line 347 "instmap.m"
  MR_Word hlds__instmap__InstMap_5,
#line 347 "instmap.m"
  MR_Word hlds__instmap__Var_6)
#line 347 "instmap.m"
{
#line 1383 "instmap.m"
  {
#line 1383 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 1383 "instmap.m"
    MR_Word hlds__instmap__Inst_7;

#line 1384 "instmap.m"
    {
#line 1384 "instmap.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_5, hlds__instmap__Var_6, &hlds__instmap__Inst_7);
    }
#line 1385 "instmap.m"
    {
#line 1385 "instmap.m"
      return hlds__instmap__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(hlds__instmap__ModuleInfo_4, hlds__instmap__Inst_7);
    }
#line 1383 "instmap.m"
    return hlds__instmap__succeeded;
#line 1383 "instmap.m"
  }
#line 347 "instmap.m"
}

#line 342 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_map_foldl_5_p_0(
#line 342 "instmap.m"
  MR_Word hlds__instmap__TypeInfo_for_T_17,
#line 342 "instmap.m"
  MR_Word hlds__instmap__P_1,
#line 342 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 342 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3,
#line 342 "instmap.m"
  MR_Box hlds__instmap__STATE_VARIABLE_T_0_4,
#line 342 "instmap.m"
  MR_Box * hlds__instmap__STATE_VARIABLE_T_5)
#line 342 "instmap.m"
{
#line 426 "instmap.m"
  {
#line 426 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 426 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 426 "instmap.m"
      {
#line 426 "instmap.m"
        *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 426 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_T_5 = hlds__instmap__STATE_VARIABLE_T_0_4;
#line 426 "instmap.m"
      }
#line 426 "instmap.m"
    else
#line 428 "instmap.m"
      {
#line 428 "instmap.m"
        MR_Word hlds__instmap__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 428 "instmap.m"
        MR_Word hlds__instmap__Instmapping0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 428 "instmap.m"
        MR_Word hlds__instmap__Instmapping_12;

#line 429 "instmap.m"
        {
#line 429 "instmap.m"
          mercury__map__map_foldl_5_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], hlds__instmap__TypeCtorInfo_19_19, hlds__instmap__TypeCtorInfo_19_19, hlds__instmap__TypeInfo_for_T_17, hlds__instmap__P_1, hlds__instmap__Instmapping0_11, &hlds__instmap__Instmapping_12, hlds__instmap__STATE_VARIABLE_T_0_4, hlds__instmap__STATE_VARIABLE_T_5);
        }
#line 428 "instmap.m"
        {
#line 428 "instmap.m"
          MR_Word base;
#line 428 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 428 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = base;
#line 428 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Instmapping_12));
#line 428 "instmap.m"
        }
#line 428 "instmap.m"
      }
#line 426 "instmap.m"
  }
#line 342 "instmap.m"
}

#line 337 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_to_assoc_list_2_p_0(
#line 337 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 337 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__2_2)
#line 337 "instmap.m"
{
#line 1377 "instmap.m"
  {
#line 1377 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1377 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1377 "instmap.m"
      *hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1377 "instmap.m"
    else
#line 1378 "instmap.m"
      {
#line 1378 "instmap.m"
        MR_Word hlds__instmap__InstMapping_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 1379 "instmap.m"
        {
#line 1379 "instmap.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_3, hlds__instmap__HeadVar__2_2);
#line 1379 "instmap.m"
          return;
        }
#line 1378 "instmap.m"
      }
#line 1377 "instmap.m"
  }
#line 337 "instmap.m"
}

#line 334 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_to_assoc_list_2_p_0(
#line 334 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 334 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__2_2)
#line 334 "instmap.m"
{
#line 1373 "instmap.m"
  {
#line 1373 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1373 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1373 "instmap.m"
      *hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1373 "instmap.m"
    else
#line 1374 "instmap.m"
      {
#line 1374 "instmap.m"
        MR_Word hlds__instmap__InstMapping_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 1375 "instmap.m"
        {
#line 1375 "instmap.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_3, hlds__instmap__HeadVar__2_2);
#line 1375 "instmap.m"
          return;
        }
#line 1374 "instmap.m"
      }
#line 1373 "instmap.m"
  }
#line 334 "instmap.m"
}

#line 329 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_apply_sub_4_p_0(
#line 329 "instmap.m"
  MR_Word hlds__instmap__Must_5,
#line 329 "instmap.m"
  MR_Word hlds__instmap__Renaming_6,
#line 329 "instmap.m"
  MR_Word hlds__instmap__InstMap0_7,
#line 329 "instmap.m"
  MR_Word * hlds__instmap__InstMap_8)
#line 329 "instmap.m"
{
#line 1354 "instmap.m"
  {
#line 1354 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1354 "instmap.m"
    {
#line 1354 "instmap.m"
      hlds__instmap__instmap_delta_apply_sub_4_p_0(hlds__instmap__Must_5, hlds__instmap__Renaming_6, hlds__instmap__InstMap0_7, hlds__instmap__InstMap_8);
#line 1354 "instmap.m"
      return;
    }
#line 1354 "instmap.m"
  }
#line 329 "instmap.m"
}

#line 326 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_apply_sub_4_p_0(
#line 326 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 326 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 326 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 326 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 326 "instmap.m"
{
#line 1346 "instmap.m"
  {
#line 1346 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1346 "instmap.m"
    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1346 "instmap.m"
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1346 "instmap.m"
    else
#line 1348 "instmap.m"
      {
#line 1348 "instmap.m"
        MR_Word hlds__instmap__TypeInfo_13_13 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 1348 "instmap.m"
        MR_Word hlds__instmap__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1348 "instmap.m"
        MR_Word hlds__instmap__OldInstMapping_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));
#line 1348 "instmap.m"
        MR_Word hlds__instmap__InstMapping_10;
#line 1348 "instmap.m"
        MR_Word hlds__instmap__InstMappingAL_11;
#line 1348 "instmap.m"
        MR_Word hlds__instmap__V_12_12;

#line 1349 "instmap.m"
        {
#line 1349 "instmap.m"
          mercury__map__to_assoc_list_2_p_0(hlds__instmap__TypeInfo_13_13, hlds__instmap__TypeCtorInfo_14_14, hlds__instmap__OldInstMapping_9, &hlds__instmap__InstMappingAL_11);
        }
#line 1350 "instmap.m"
        {
#line 1350 "instmap.m"
          hlds__instmap__V_12_12 = mercury__map__init_0_f_0(hlds__instmap__TypeInfo_13_13, hlds__instmap__TypeCtorInfo_14_14);
        }
#line 1350 "instmap.m"
        {
#line 1350 "instmap.m"
          hlds__instmap__instmap_delta_apply_sub_2_5_p_0(hlds__instmap__InstMappingAL_11, hlds__instmap__HeadVar__1_1, hlds__instmap__HeadVar__2_2, hlds__instmap__V_12_12, &hlds__instmap__InstMapping_10);
        }
#line 1348 "instmap.m"
        {
#line 1348 "instmap.m"
          MR_Word base;
#line 1348 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1348 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = base;
#line 1348 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_10));
#line 1348 "instmap.m"
        }
#line 1348 "instmap.m"
      }
#line 1346 "instmap.m"
  }
#line 326 "instmap.m"
}

#line 313 "instmap.m"
void MR_CALL 
hlds__instmap__unify_instmap_delta_7_p_0(
#line 313 "instmap.m"
  MR_Word hlds__instmap__InstMap_1,
#line 313 "instmap.m"
  MR_Word hlds__instmap__NonLocals_2,
#line 313 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 313 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 313 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__5_5,
#line 313 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6,
#line 313 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_7)
#line 313 "instmap.m"
{
#line 1285 "instmap.m"
  {
#line 1285 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1285 "instmap.m"
    {
#line 1285 "instmap.m"
      hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_p_0(hlds__instmap__NonLocals_2, hlds__instmap__HeadVar__3_3, hlds__instmap__HeadVar__4_4, hlds__instmap__HeadVar__5_5, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6, hlds__instmap__STATE_VARIABLE_ModuleInfo_7);
#line 1285 "instmap.m"
      return;
    }
#line 1285 "instmap.m"
  }
#line 313 "instmap.m"
}

#line 303 "instmap.m"
void MR_CALL 
hlds__instmap__merge_instmap_deltas_7_p_0(
#line 303 "instmap.m"
  MR_Word hlds__instmap__InstMap_8,
#line 303 "instmap.m"
  MR_Word hlds__instmap__NonLocals_9,
#line 303 "instmap.m"
  MR_Word hlds__instmap__VarTypes_10,
#line 303 "instmap.m"
  MR_Word hlds__instmap__Deltas_11,
#line 303 "instmap.m"
  MR_Word * hlds__instmap__MergedDelta_12,
#line 303 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_18,
#line 303 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_19)
#line 303 "instmap.m"
{
#line 1085 "instmap.m"
  while (MR_TRUE)
#line 1085 "instmap.m"
    {
#line 1085 "instmap.m"
      /* tailcall optimized into a loop */
#line 1085 "instmap.m"
      {
#line 1085 "instmap.m"
        MR_bool hlds__instmap__succeeded;
#line 1085 "instmap.m"
        MR_Word hlds__instmap__MergedDeltas_14;
#line 1085 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21;

#line 1088 "instmap.m"
        {
#line 1088 "instmap.m"
          hlds__instmap__merge_instmap_deltas_2_8_p_0(hlds__instmap__InstMap_8, hlds__instmap__NonLocals_9, hlds__instmap__VarTypes_10, hlds__instmap__Deltas_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__instmap__MergedDeltas_14, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_18, &hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21);
        }
#line 1093 "instmap.m"
        if ((hlds__instmap__MergedDeltas_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1091 "instmap.m"
          {
#line 1092 "instmap.m"
            {
#line 1092 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.merge_instmap_deltas\'/7", (MR_String) "empty instmap_delta list.");
#line 1092 "instmap.m"
              return;
            }
#line 1091 "instmap.m"
          }
#line 1093 "instmap.m"
        else
#line 1093 "instmap.m"
          {
#line 1093 "instmap.m"
            MR_Word hlds__instmap__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MergedDeltas_14, (MR_Integer) 1)));
#line 1093 "instmap.m"
            MR_Word hlds__instmap__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MergedDeltas_14, (MR_Integer) 0)));

#line 1093 "instmap.m"
            if ((hlds__instmap__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1094 "instmap.m"
              {
#line 1094 "instmap.m"
                *hlds__instmap__MergedDelta_12 = hlds__instmap__V_29_29;
#line 1094 "instmap.m"
                *hlds__instmap__STATE_VARIABLE_ModuleInfo_19 = hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21;
#line 1094 "instmap.m"
              }
#line 1093 "instmap.m"
            else
#line 1097 "instmap.m"
              {
#line 1097 "instmap.m"
                /* direct tailcall eliminated */
#line 1097 "instmap.m"
                {
#line 1097 "instmap.m"
                  MR_Word hlds__instmap__Deltas__tmp_copy_11 = hlds__instmap__MergedDeltas_14;
#line 1097 "instmap.m"
                  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_18 = hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21;

#line 1097 "instmap.m"
                  hlds__instmap__STATE_VARIABLE_ModuleInfo_0_18 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_18;
#line 1097 "instmap.m"
                  hlds__instmap__Deltas_11 = hlds__instmap__Deltas__tmp_copy_11;
#line 1097 "instmap.m"
                }
#line 1097 "instmap.m"
                continue;
#line 1097 "instmap.m"
              }
#line 1093 "instmap.m"
          }
#line 1085 "instmap.m"
      }
#line 1085 "instmap.m"
      break;
#line 1085 "instmap.m"
    }
#line 303 "instmap.m"
}

#line 292 "instmap.m"
void MR_CALL 
hlds__instmap__merge_instmap_delta_8_p_0(
#line 292 "instmap.m"
  MR_Word hlds__instmap__InstMap_1,
#line 292 "instmap.m"
  MR_Word hlds__instmap__NonLocals_2,
#line 292 "instmap.m"
  MR_Word hlds__instmap__VarTypes_3,
#line 292 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 292 "instmap.m"
  MR_Word hlds__instmap__HeadVar__5_5,
#line 292 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__6_6,
#line 292 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7,
#line 292 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_8)
#line 292 "instmap.m"
{
#line 1207 "instmap.m"
  {
#line 1207 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1207 "instmap.m"
    if ((hlds__instmap__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1207 "instmap.m"
      {
#line 1207 "instmap.m"
        *hlds__instmap__HeadVar__6_6 = hlds__instmap__HeadVar__5_5;
#line 1207 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
#line 1207 "instmap.m"
      }
#line 1207 "instmap.m"
    else
#line 1207 "instmap.m"
      {
#line 1207 "instmap.m"
        MR_Word hlds__instmap__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__4_4, (MR_Integer) 0)));

#line 1207 "instmap.m"
        if ((hlds__instmap__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1209 "instmap.m"
          {
#line 1209 "instmap.m"
            *hlds__instmap__HeadVar__6_6 = hlds__instmap__HeadVar__4_4;
#line 1209 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
#line 1209 "instmap.m"
          }
#line 1207 "instmap.m"
        else
#line 1212 "instmap.m"
          {
#line 1212 "instmap.m"
            MR_Word hlds__instmap__TypeInfo_26_51 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 1212 "instmap.m"
            MR_Word hlds__instmap__TypeCtorInfo_27_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1212 "instmap.m"
            MR_Word hlds__instmap__TypeCtorInfo_28_53;
#line 1212 "instmap.m"
            MR_Word hlds__instmap__InstMappingB_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__5_5, (MR_Integer) 0)));
#line 1212 "instmap.m"
            MR_Word hlds__instmap__InstMapping_28;
#line 1212 "instmap.m"
            MR_Word hlds__instmap__VarsInA_43;
#line 1212 "instmap.m"
            MR_Word hlds__instmap__VarsInB_44;
#line 1212 "instmap.m"
            MR_Word hlds__instmap__SetofVarsInA_45;
#line 1212 "instmap.m"
            MR_Word hlds__instmap__SetofVars0_46;
#line 1212 "instmap.m"
            MR_Word hlds__instmap__SetofVars_47;
#line 1212 "instmap.m"
            MR_Word hlds__instmap__ListofVars_48;
#line 1212 "instmap.m"
            MR_Word hlds__instmap__V_49_49;

#line 1222 "instmap.m"
            {
#line 1222 "instmap.m"
              mercury__map__keys_2_p_0(hlds__instmap__TypeInfo_26_51, hlds__instmap__TypeCtorInfo_27_52, hlds__instmap__V_33_33, &hlds__instmap__VarsInA_43);
            }
#line 1223 "instmap.m"
            {
#line 1223 "instmap.m"
              mercury__map__keys_2_p_0(hlds__instmap__TypeInfo_26_51, hlds__instmap__TypeCtorInfo_27_52, hlds__instmap__InstMappingB_27, &hlds__instmap__VarsInB_44);
            }
#line 5679 "hlds.instmap.c"
            hlds__instmap__TypeCtorInfo_28_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1224 "instmap.m"
            {
#line 1224 "instmap.m"
              parse_tree__set_of_var__sorted_list_to_set_2_p_0(hlds__instmap__TypeCtorInfo_28_53, hlds__instmap__VarsInA_43, &hlds__instmap__SetofVarsInA_45);
            }
#line 1225 "instmap.m"
            {
#line 1225 "instmap.m"
              parse_tree__set_of_var__insert_list_3_p_0(hlds__instmap__TypeCtorInfo_28_53, hlds__instmap__VarsInB_44, hlds__instmap__SetofVarsInA_45, &hlds__instmap__SetofVars0_46);
            }
#line 1226 "instmap.m"
            {
#line 1226 "instmap.m"
              parse_tree__set_of_var__intersect_3_p_0(hlds__instmap__TypeCtorInfo_28_53, hlds__instmap__SetofVars0_46, hlds__instmap__NonLocals_2, &hlds__instmap__SetofVars_47);
            }
#line 1227 "instmap.m"
            {
#line 1227 "instmap.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__instmap__TypeCtorInfo_28_53, hlds__instmap__SetofVars_47, &hlds__instmap__ListofVars_48);
            }
#line 1228 "instmap.m"
            {
#line 1228 "instmap.m"
              hlds__instmap__V_49_49 = mercury__map__init_0_f_0(hlds__instmap__TypeInfo_26_51, hlds__instmap__TypeCtorInfo_27_52);
            }
#line 1228 "instmap.m"
            {
#line 1228 "instmap.m"
              hlds__instmap__merge_instmapping_delta_2_9_p_0(hlds__instmap__ListofVars_48, hlds__instmap__InstMap_1, hlds__instmap__VarTypes_3, hlds__instmap__V_33_33, hlds__instmap__InstMappingB_27, hlds__instmap__V_49_49, &hlds__instmap__InstMapping_28, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7, hlds__instmap__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1212 "instmap.m"
            {
#line 1212 "instmap.m"
              MR_Word base;
#line 1212 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "instmap.m"
              *hlds__instmap__HeadVar__6_6 = base;
#line 1212 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_28));
#line 1212 "instmap.m"
            }
#line 1212 "instmap.m"
          }
#line 1207 "instmap.m"
      }
#line 1207 "instmap.m"
  }
#line 292 "instmap.m"
}

#line 1170 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_no_output_vars_5_p_0_1(
#line 1170 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 1170 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1)
#line 1170 "instmap.m"
{
#line 1170 "instmap.m"
  {
#line 1170 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 1170 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 1170 "instmap.m"
    {
#line 1170 "instmap.m"
      return hlds__instmap__succeeded = hlds__instmap__var_is_not_output_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 6))), ((MR_Word) hlds__instmap__wrapper_arg_1));
    }
#line 1170 "instmap.m"
    return hlds__instmap__succeeded;
#line 1170 "instmap.m"
  }
#line 1170 "instmap.m"
}

#line 283 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__instmap_delta_no_output_vars_5_p_0(
#line 283 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 283 "instmap.m"
  MR_Word hlds__instmap__VarTypes_7,
#line 283 "instmap.m"
  MR_Word hlds__instmap__InstMap0_8,
#line 283 "instmap.m"
  MR_Word hlds__instmap__InstMapDelta_9,
#line 283 "instmap.m"
  MR_Word hlds__instmap__Vars_10)
#line 283 "instmap.m"
{
#line 1167 "instmap.m"
  {
#line 1167 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1167 "instmap.m"
    if ((hlds__instmap__InstMapDelta_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1167 "instmap.m"
      hlds__instmap__succeeded = MR_TRUE;
#line 1167 "instmap.m"
    else
#line 1169 "instmap.m"
      {
#line 1169 "instmap.m"
        MR_Word hlds__instmap__InstMapDeltaMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_9, (MR_Integer) 0)));
#line 1169 "instmap.m"
        MR_Word hlds__instmap__Test_12;

#line 1170 "instmap.m"
        {
#line 1170 "instmap.m"
          hlds__instmap__Test_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1170 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 0) = ((MR_Box) (&hlds__instmap_scalar_common_4[1]));
#line 1170 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 1) = ((MR_Box) (hlds__instmap__instmap_delta_no_output_vars_5_p_0_1));
#line 1170 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1170 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 3) = ((MR_Box) (hlds__instmap__ModuleInfo_6));
#line 1170 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 4) = ((MR_Box) (hlds__instmap__VarTypes_7));
#line 1170 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 5) = ((MR_Box) (hlds__instmap__InstMap0_8));
#line 1170 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 6) = ((MR_Box) (hlds__instmap__InstMapDeltaMap_11));
#line 1170 "instmap.m"
        }
#line 1172 "instmap.m"
        {
#line 1172 "instmap.m"
          return hlds__instmap__succeeded = parse_tree__set_of_var__all_true_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Test_12, hlds__instmap__Vars_10);
        }
#line 1169 "instmap.m"
      }
#line 1167 "instmap.m"
    return hlds__instmap__succeeded;
#line 1167 "instmap.m"
  }
#line 283 "instmap.m"
}

#line 275 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_delete_vars_3_p_0(
#line 275 "instmap.m"
  MR_Word hlds__instmap__Vars_1,
#line 275 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 275 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 275 "instmap.m"
{
#line 852 "instmap.m"
  {
#line 852 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 852 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 852 "instmap.m"
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 852 "instmap.m"
    else
#line 854 "instmap.m"
      {
#line 854 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 854 "instmap.m"
        MR_Word hlds__instmap__InstMapping_7;

#line 855 "instmap.m"
        {
#line 855 "instmap.m"
          mercury__map__delete_list_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Vars_1, hlds__instmap__InstMapping0_6, &hlds__instmap__InstMapping_7);
        }
#line 854 "instmap.m"
        {
#line 854 "instmap.m"
          MR_Word base;
#line 854 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 854 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = base;
#line 854 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_7));
#line 854 "instmap.m"
        }
#line 854 "instmap.m"
      }
#line 852 "instmap.m"
  }
#line 275 "instmap.m"
}

#line 270 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_restrict_3_p_0(
#line 270 "instmap.m"
  MR_Word hlds__instmap__Vars_1,
#line 270 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 270 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 270 "instmap.m"
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
#line 842 "instmap.m"
      {
#line 842 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 842 "instmap.m"
        MR_Word hlds__instmap__InstMapping_7;
#line 842 "instmap.m"
        MR_Word hlds__instmap__V_8_8;

#line 843 "instmap.m"
        {
#line 843 "instmap.m"
          hlds__instmap__V_8_8 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Vars_1);
        }
#line 843 "instmap.m"
        {
#line 843 "instmap.m"
          mercury__map__select_sorted_list_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping0_6, hlds__instmap__V_8_8, &hlds__instmap__InstMapping_7);
        }
#line 842 "instmap.m"
        {
#line 842 "instmap.m"
          MR_Word base;
#line 842 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 842 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = base;
#line 842 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_7));
#line 842 "instmap.m"
        }
#line 842 "instmap.m"
      }
#line 841 "instmap.m"
  }
#line 270 "instmap.m"
}

#line 264 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_merge_5_p_0(
#line 264 "instmap.m"
  MR_Word hlds__instmap__NonLocals_6,
#line 264 "instmap.m"
  MR_Word hlds__instmap__ArmInstMaps_7,
#line 264 "instmap.m"
  MR_Word hlds__instmap__MergeContext_8,
#line 264 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModeInfo_0_27,
#line 264 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModeInfo_28)
#line 264 "instmap.m"
{
#line 887 "instmap.m"
  {
#line 887 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 887 "instmap.m"
    MR_Word hlds__instmap__InstMap0_10;
#line 887 "instmap.m"
    MR_Word hlds__instmap__ModuleInfo0_11;
#line 887 "instmap.m"
    MR_Word hlds__instmap__ReachableInstMappingList_12;
#line 887 "instmap.m"
    MR_Word hlds__instmap__InstMap_26;
#line 887 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_ModeInfo_31_31;
#line 912 "instmap.m"
    MR_Word hlds__instmap__InstMapping0_13;
#line 895 "instmap.m"
    MR_Word hlds__instmap__V_14_14;
#line 895 "instmap.m"
    MR_Word hlds__instmap__V_15_15;

#line 888 "instmap.m"
    {
#line 888 "instmap.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(hlds__instmap__STATE_VARIABLE_ModeInfo_0_27, &hlds__instmap__InstMap0_10);
    }
#line 889 "instmap.m"
    {
#line 889 "instmap.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(hlds__instmap__STATE_VARIABLE_ModeInfo_0_27, &hlds__instmap__ModuleInfo0_11);
    }
#line 890 "instmap.m"
    {
#line 890 "instmap.m"
      hlds__instmap__get_reachable_instmaps_2_p_0(hlds__instmap__ArmInstMaps_7, &hlds__instmap__ReachableInstMappingList_12);
    }
#line 895 "instmap.m"
    hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__ReachableInstMappingList_12)) == (MR_mktag((MR_Integer) 1)));
#line 895 "instmap.m"
    if (hlds__instmap__succeeded)
#line 895 "instmap.m"
      {
#line 895 "instmap.m"
        hlds__instmap__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__ReachableInstMappingList_12, (MR_Integer) 0)));
#line 895 "instmap.m"
        hlds__instmap__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__ReachableInstMappingList_12, (MR_Integer) 1)));
#line 894 "instmap.m"
        hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__InstMap0_10)) == (MR_mktag((MR_Integer) 1)));
#line 894 "instmap.m"
        if (hlds__instmap__succeeded)
#line 894 "instmap.m"
          hlds__instmap__InstMapping0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap0_10, (MR_Integer) 0)));
#line 895 "instmap.m"
      }
#line 912 "instmap.m"
    if (hlds__instmap__succeeded)
#line 897 "instmap.m"
      {
#line 897 "instmap.m"
        MR_Word hlds__instmap__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 897 "instmap.m"
        MR_Word hlds__instmap__NonLocalsList_16;
#line 897 "instmap.m"
        MR_Word hlds__instmap__VarTypes_17;
#line 897 "instmap.m"
        MR_Word hlds__instmap__InstMapping_18;
#line 897 "instmap.m"
        MR_Word hlds__instmap__ModuleInfo_19;
#line 897 "instmap.m"
        MR_Word hlds__instmap__ErrorList_20;
#line 897 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModeInfo_29_29;

#line 897 "instmap.m"
        {
#line 897 "instmap.m"
          parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__instmap__TypeCtorInfo_33_33, hlds__instmap__NonLocals_6, &hlds__instmap__NonLocalsList_16);
        }
#line 898 "instmap.m"
        {
#line 898 "instmap.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(hlds__instmap__STATE_VARIABLE_ModeInfo_0_27, &hlds__instmap__VarTypes_17);
        }
#line 899 "instmap.m"
        {
#line 899 "instmap.m"
          hlds__instmap__merge_insts_of_vars_8_p_0(hlds__instmap__NonLocalsList_16, hlds__instmap__ArmInstMaps_7, hlds__instmap__VarTypes_17, hlds__instmap__InstMapping0_13, &hlds__instmap__InstMapping_18, hlds__instmap__ModuleInfo0_11, &hlds__instmap__ModuleInfo_19, &hlds__instmap__ErrorList_20);
        }
#line 901 "instmap.m"
        {
#line 901 "instmap.m"
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(hlds__instmap__ModuleInfo_19, hlds__instmap__STATE_VARIABLE_ModeInfo_0_27, &hlds__instmap__STATE_VARIABLE_ModeInfo_29_29);
        }
#line 908 "instmap.m"
        if ((hlds__instmap__ErrorList_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 909 "instmap.m"
          hlds__instmap__STATE_VARIABLE_ModeInfo_31_31 = hlds__instmap__STATE_VARIABLE_ModeInfo_29_29;
#line 908 "instmap.m"
        else
#line 903 "instmap.m"
          {
#line 903 "instmap.m"
            MR_Word hlds__instmap__FirstError_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__ErrorList_20, (MR_Integer) 0)));
#line 903 "instmap.m"
            MR_Word hlds__instmap__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__FirstError_21, (MR_Integer) 0)));
#line 903 "instmap.m"
            MR_Word hlds__instmap__WaitingVars_25;
#line 903 "instmap.m"
            MR_Word hlds__instmap__V_30_30;
#line 903 "instmap.m"
            MR_Word hlds__instmap__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__ErrorList_20, (MR_Integer) 1)));
#line 904 "instmap.m"
            MR_Word hlds__instmap__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__FirstError_21, (MR_Integer) 1)));

#line 905 "instmap.m"
            {
#line 905 "instmap.m"
              hlds__instmap__WaitingVars_25 = parse_tree__set_of_var__make_singleton_1_f_0(hlds__instmap__TypeCtorInfo_33_33, hlds__instmap__Var_23);
            }
#line 906 "instmap.m"
            {
#line 906 "instmap.m"
              hlds__instmap__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "instmap.m"
              MR_hl_field(MR_mktag(1), hlds__instmap__V_30_30, 0) = ((MR_Box) (hlds__instmap__MergeContext_8));
#line 906 "instmap.m"
              MR_hl_field(MR_mktag(1), hlds__instmap__V_30_30, 1) = ((MR_Box) (hlds__instmap__ErrorList_20));
#line 906 "instmap.m"
            }
#line 906 "instmap.m"
            {
#line 906 "instmap.m"
              check_hlds__mode_info__mode_info_error_4_p_0(hlds__instmap__WaitingVars_25, hlds__instmap__V_30_30, hlds__instmap__STATE_VARIABLE_ModeInfo_29_29, &hlds__instmap__STATE_VARIABLE_ModeInfo_31_31);
            }
#line 903 "instmap.m"
          }
#line 911 "instmap.m"
        {
#line 911 "instmap.m"
          hlds__instmap__InstMap_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 911 "instmap.m"
          MR_hl_field(MR_mktag(1), hlds__instmap__InstMap_26, 0) = ((MR_Box) (hlds__instmap__InstMapping_18));
#line 911 "instmap.m"
        }
#line 897 "instmap.m"
      }
#line 912 "instmap.m"
    else
#line 913 "instmap.m"
      {
#line 913 "instmap.m"
        hlds__instmap__InstMap_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 913 "instmap.m"
        hlds__instmap__STATE_VARIABLE_ModeInfo_31_31 = hlds__instmap__STATE_VARIABLE_ModeInfo_0_27;
#line 913 "instmap.m"
      }
#line 915 "instmap.m"
    {
#line 915 "instmap.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(hlds__instmap__InstMap_26, hlds__instmap__STATE_VARIABLE_ModeInfo_31_31, hlds__instmap__STATE_VARIABLE_ModeInfo_28);
#line 915 "instmap.m"
      return;
    }
#line 887 "instmap.m"
  }
#line 264 "instmap.m"
}

#line 255 "instmap.m"
void MR_CALL 
hlds__instmap__make_arm_instmaps_for_cases_3_p_0(
#line 255 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 255 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 255 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 255 "instmap.m"
{
#line 872 "instmap.m"
  {
#line 872 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 872 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 872 "instmap.m"
      if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 872 "instmap.m"
        *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 872 "instmap.m"
      else
#line 873 "instmap.m"
        {
#line 874 "instmap.m"
          {
#line 874 "instmap.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_cases\'/3", (MR_String) "mismatched lists");
#line 874 "instmap.m"
            return;
          }
#line 873 "instmap.m"
        }
#line 872 "instmap.m"
    else
#line 872 "instmap.m"
      {
#line 872 "instmap.m"
        MR_Word hlds__instmap__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 872 "instmap.m"
        MR_Word hlds__instmap__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 872 "instmap.m"
        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 875 "instmap.m"
          {
#line 876 "instmap.m"
            {
#line 876 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_cases\'/3", (MR_String) "mismatched lists");
#line 876 "instmap.m"
              return;
            }
#line 875 "instmap.m"
          }
#line 872 "instmap.m"
        else
#line 878 "instmap.m"
          {
#line 878 "instmap.m"
            MR_Word hlds__instmap__InstMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 878 "instmap.m"
            MR_Word hlds__instmap__InstMaps_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 878 "instmap.m"
            MR_Word hlds__instmap__ArmInfo_20;
#line 878 "instmap.m"
            MR_Word hlds__instmap__ArmInfos_21;
#line 878 "instmap.m"
            MR_Word hlds__instmap__Goal_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_29_29, (MR_Integer) 2)));
#line 878 "instmap.m"
            MR_Word hlds__instmap__GoalInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__Goal_24, (MR_Integer) 1)));
#line 878 "instmap.m"
            MR_Word hlds__instmap__Context_27;
#line 879 "instmap.m"
            MR_Word hlds__instmap__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_29_29, (MR_Integer) 0)));
#line 879 "instmap.m"
            MR_Word hlds__instmap__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_29_29, (MR_Integer) 1)));
#line 880 "instmap.m"
            MR_Word hlds__instmap__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__Goal_24, (MR_Integer) 0)));

#line 881 "instmap.m"
            {
#line 881 "instmap.m"
              hlds__instmap__Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__instmap__GoalInfo_26);
            }
#line 882 "instmap.m"
            {
#line 882 "instmap.m"
              hlds__instmap__ArmInfo_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 882 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__ArmInfo_20, 0) = ((MR_Box) (hlds__instmap__Context_27));
#line 882 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__ArmInfo_20, 1) = ((MR_Box) (hlds__instmap__InstMap_18));
#line 882 "instmap.m"
            }
#line 883 "instmap.m"
            {
#line 883 "instmap.m"
              hlds__instmap__make_arm_instmaps_for_cases_3_p_0(hlds__instmap__V_28_28, hlds__instmap__InstMaps_19, &hlds__instmap__ArmInfos_21);
            }
#line 878 "instmap.m"
            {
#line 878 "instmap.m"
              MR_Word base;
#line 878 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 878 "instmap.m"
              *hlds__instmap__HeadVar__3_3 = base;
#line 878 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__ArmInfo_20));
#line 878 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__ArmInfos_21));
#line 878 "instmap.m"
            }
#line 878 "instmap.m"
          }
#line 872 "instmap.m"
      }
#line 872 "instmap.m"
  }
#line 255 "instmap.m"
}

#line 253 "instmap.m"
void MR_CALL 
hlds__instmap__make_arm_instmaps_for_goals_3_p_0(
#line 253 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 253 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 253 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 253 "instmap.m"
{
#line 860 "instmap.m"
  {
#line 860 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 860 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 860 "instmap.m"
      if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 860 "instmap.m"
        *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 860 "instmap.m"
      else
#line 861 "instmap.m"
        {
#line 862 "instmap.m"
          {
#line 862 "instmap.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_goals\'/3", (MR_String) "mismatched lists");
#line 862 "instmap.m"
            return;
          }
#line 861 "instmap.m"
        }
#line 860 "instmap.m"
    else
#line 860 "instmap.m"
      {
#line 860 "instmap.m"
        MR_Word hlds__instmap__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 860 "instmap.m"
        MR_Word hlds__instmap__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 860 "instmap.m"
        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 863 "instmap.m"
          {
#line 864 "instmap.m"
            {
#line 864 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_goals\'/3", (MR_String) "mismatched lists");
#line 864 "instmap.m"
              return;
            }
#line 863 "instmap.m"
          }
#line 860 "instmap.m"
        else
#line 866 "instmap.m"
          {
#line 866 "instmap.m"
            MR_Word hlds__instmap__InstMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 866 "instmap.m"
            MR_Word hlds__instmap__InstMaps_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 866 "instmap.m"
            MR_Word hlds__instmap__ArmInfo_20;
#line 866 "instmap.m"
            MR_Word hlds__instmap__ArmInfos_21;
#line 866 "instmap.m"
            MR_Word hlds__instmap__GoalInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_26_26, (MR_Integer) 1)));
#line 866 "instmap.m"
            MR_Word hlds__instmap__Context_24;
#line 867 "instmap.m"
            MR_Word hlds__instmap__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_26_26, (MR_Integer) 0)));

#line 868 "instmap.m"
            {
#line 868 "instmap.m"
              hlds__instmap__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__instmap__GoalInfo_23);
            }
#line 869 "instmap.m"
            {
#line 869 "instmap.m"
              hlds__instmap__ArmInfo_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 869 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__ArmInfo_20, 0) = ((MR_Box) (hlds__instmap__Context_24));
#line 869 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__ArmInfo_20, 1) = ((MR_Box) (hlds__instmap__InstMap_18));
#line 869 "instmap.m"
            }
#line 870 "instmap.m"
            {
#line 870 "instmap.m"
              hlds__instmap__make_arm_instmaps_for_goals_3_p_0(hlds__instmap__V_25_25, hlds__instmap__InstMaps_19, &hlds__instmap__ArmInfos_21);
            }
#line 866 "instmap.m"
            {
#line 866 "instmap.m"
              MR_Word base;
#line 866 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "instmap.m"
              *hlds__instmap__HeadVar__3_3 = base;
#line 866 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__ArmInfo_20));
#line 866 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__ArmInfos_21));
#line 866 "instmap.m"
            }
#line 866 "instmap.m"
          }
#line 860 "instmap.m"
      }
#line 860 "instmap.m"
  }
#line 253 "instmap.m"
}

#line 241 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_restrict_3_p_0(
#line 241 "instmap.m"
  MR_Word hlds__instmap__Vars_1,
#line 241 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 241 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 241 "instmap.m"
{
#line 846 "instmap.m"
  {
#line 846 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 846 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 846 "instmap.m"
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 846 "instmap.m"
    else
#line 848 "instmap.m"
      {
#line 848 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 848 "instmap.m"
        MR_Word hlds__instmap__InstMapping_7;
#line 848 "instmap.m"
        MR_Word hlds__instmap__V_8_8;

#line 849 "instmap.m"
        {
#line 849 "instmap.m"
          hlds__instmap__V_8_8 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Vars_1);
        }
#line 849 "instmap.m"
        {
#line 849 "instmap.m"
          mercury__map__select_sorted_list_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping0_6, hlds__instmap__V_8_8, &hlds__instmap__InstMapping_7);
        }
#line 848 "instmap.m"
        {
#line 848 "instmap.m"
          MR_Word base;
#line 848 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 848 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = base;
#line 848 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_7));
#line 848 "instmap.m"
        }
#line 848 "instmap.m"
      }
#line 846 "instmap.m"
  }
#line 241 "instmap.m"
}

#line 235 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(
#line 235 "instmap.m"
  MR_Word hlds__instmap__InstMap1_5,
#line 235 "instmap.m"
  MR_Word hlds__instmap__InstMap2_6,
#line 235 "instmap.m"
  MR_Word hlds__instmap__How_7,
#line 235 "instmap.m"
  MR_Word * hlds__instmap__InstMap_8)
#line 235 "instmap.m"
{
#line 805 "instmap.m"
  {
#line 805 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 805 "instmap.m"
    if ((hlds__instmap__InstMap1_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 805 "instmap.m"
      *hlds__instmap__InstMap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 805 "instmap.m"
    else
#line 805 "instmap.m"
      {
#line 805 "instmap.m"
        MR_Word hlds__instmap__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap1_5, (MR_Integer) 0)));

#line 805 "instmap.m"
        if ((hlds__instmap__InstMap2_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 810 "instmap.m"
          *hlds__instmap__InstMap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 805 "instmap.m"
        else
#line 812 "instmap.m"
          {
#line 812 "instmap.m"
            MR_Word hlds__instmap__InstMappingDelta2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap2_6, (MR_Integer) 0)));
#line 812 "instmap.m"
            MR_Word hlds__instmap__InstMappingDelta_12;

#line 818 "instmap.m"
            if ((hlds__instmap__How_7 == (MR_Integer) 0))
#line 815 "instmap.m"
              {
#line 816 "instmap.m"
                {
#line 816 "instmap.m"
                  mercury__map__overlay_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_25_25, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__InstMappingDelta_12);
                }
#line 815 "instmap.m"
              }
#line 818 "instmap.m"
            else
#line 818 "instmap.m"
              if ((hlds__instmap__How_7 == (MR_Integer) 1))
#line 819 "instmap.m"
                {
#line 820 "instmap.m"
                  {
#line 820 "instmap.m"
                    mercury__map__overlay_large_map_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_25_25, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__InstMappingDelta_12);
                  }
#line 819 "instmap.m"
                }
#line 818 "instmap.m"
              else
#line 823 "instmap.m"
                {
#line 825 "instmap.m"
                  MR_Word hlds__instmap__TypeInfo_19_19 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 825 "instmap.m"
                  MR_Word hlds__instmap__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 825 "instmap.m"
                  MR_Integer hlds__instmap__Count1_13;
#line 825 "instmap.m"
                  MR_Integer hlds__instmap__Count2_14;

#line 825 "instmap.m"
                  {
#line 825 "instmap.m"
                    mercury__map__count_2_p_0(hlds__instmap__TypeInfo_19_19, hlds__instmap__TypeCtorInfo_20_20, hlds__instmap__V_25_25, &hlds__instmap__Count1_13);
                  }
#line 826 "instmap.m"
                  {
#line 826 "instmap.m"
                    mercury__map__count_2_p_0(hlds__instmap__TypeInfo_19_19, hlds__instmap__TypeCtorInfo_20_20, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__Count2_14);
                  }
#line 827 "instmap.m"
                  hlds__instmap__succeeded = (hlds__instmap__Count1_13 >= hlds__instmap__Count2_14);
#line 823 "instmap.m"
                  if (hlds__instmap__succeeded)
#line 829 "instmap.m"
                    {
#line 829 "instmap.m"
                      {
#line 829 "instmap.m"
                        mercury__map__overlay_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_25_25, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__InstMappingDelta_12);
                      }
#line 829 "instmap.m"
                    }
#line 823 "instmap.m"
                  else
#line 832 "instmap.m"
                    {
#line 832 "instmap.m"
                      {
#line 832 "instmap.m"
                        mercury__map__overlay_large_map_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_25_25, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__InstMappingDelta_12);
                      }
#line 832 "instmap.m"
                    }
#line 823 "instmap.m"
                }
#line 836 "instmap.m"
            {
#line 836 "instmap.m"
              MR_Word base;
#line 836 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 836 "instmap.m"
              *hlds__instmap__InstMap_8 = base;
#line 836 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMappingDelta_12));
#line 836 "instmap.m"
            }
#line 812 "instmap.m"
          }
#line 805 "instmap.m"
      }
#line 805 "instmap.m"
  }
#line 235 "instmap.m"
}

#line 229 "instmap.m"
void MR_CALL 
hlds__instmap__apply_instmap_delta_sv_3_p_0(
#line 229 "instmap.m"
  MR_Word hlds__instmap__Delta_4,
#line 229 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_Instmap_0_6,
#line 229 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_Instmap_7)
#line 229 "instmap.m"
{
#line 801 "instmap.m"
  {
#line 801 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 801 "instmap.m"
    {
#line 801 "instmap.m"
      hlds__instmap__apply_instmap_delta_3_p_0(hlds__instmap__STATE_VARIABLE_Instmap_0_6, hlds__instmap__Delta_4, hlds__instmap__STATE_VARIABLE_Instmap_7);
#line 801 "instmap.m"
      return;
    }
#line 801 "instmap.m"
  }
#line 229 "instmap.m"
}

#line 223 "instmap.m"
void MR_CALL 
hlds__instmap__apply_instmap_delta_3_p_0(
#line 223 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 223 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 223 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 223 "instmap.m"
{
#line 794 "instmap.m"
  {
#line 794 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 794 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 794 "instmap.m"
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 794 "instmap.m"
    else
#line 794 "instmap.m"
      {
#line 794 "instmap.m"
        MR_Word hlds__instmap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 794 "instmap.m"
        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 795 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 794 "instmap.m"
        else
#line 797 "instmap.m"
          {
#line 797 "instmap.m"
            MR_Word hlds__instmap__InstMappingDelta_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 797 "instmap.m"
            MR_Word hlds__instmap__InstMapping_8;

#line 798 "instmap.m"
            {
#line 798 "instmap.m"
              mercury__map__overlay_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_11_11, hlds__instmap__InstMappingDelta_7, &hlds__instmap__InstMapping_8);
            }
#line 797 "instmap.m"
            {
#line 797 "instmap.m"
              MR_Word base;
#line 797 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 797 "instmap.m"
              *hlds__instmap__HeadVar__3_3 = base;
#line 797 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_8));
#line 797 "instmap.m"
            }
#line 797 "instmap.m"
          }
#line 794 "instmap.m"
      }
#line 794 "instmap.m"
  }
#line 223 "instmap.m"
}

#line 217 "instmap.m"
void MR_CALL 
hlds__instmap__compute_instmap_delta_4_p_0(
#line 217 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 217 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 217 "instmap.m"
  MR_Word hlds__instmap__NonLocals_3,
#line 217 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 217 "instmap.m"
{
#line 1139 "instmap.m"
  {
#line 1139 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1139 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1139 "instmap.m"
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1139 "instmap.m"
    else
#line 1139 "instmap.m"
      {
#line 1139 "instmap.m"
        MR_Word hlds__instmap__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 1139 "instmap.m"
        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1140 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1139 "instmap.m"
        else
#line 1142 "instmap.m"
          {
#line 1142 "instmap.m"
            MR_Word hlds__instmap__InstMapB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 1142 "instmap.m"
            MR_Word hlds__instmap__DeltaInstMap_12;
#line 1142 "instmap.m"
            MR_Word hlds__instmap__NonLocalsList_13;
#line 1142 "instmap.m"
            MR_Word hlds__instmap__AssocList_14;

#line 1143 "instmap.m"
            {
#line 1143 "instmap.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__NonLocals_3, &hlds__instmap__NonLocalsList_13);
            }
#line 1144 "instmap.m"
            {
#line 1144 "instmap.m"
              hlds__instmap__compute_instmap_delta_2_4_p_0(hlds__instmap__NonLocalsList_13, hlds__instmap__V_18_18, hlds__instmap__InstMapB_10, &hlds__instmap__AssocList_14);
            }
#line 1145 "instmap.m"
            {
#line 1145 "instmap.m"
              mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__AssocList_14, &hlds__instmap__DeltaInstMap_12);
            }
#line 1142 "instmap.m"
            {
#line 1142 "instmap.m"
              MR_Word base;
#line 1142 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1142 "instmap.m"
              *hlds__instmap__HeadVar__4_4 = base;
#line 1142 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__DeltaInstMap_12));
#line 1142 "instmap.m"
            }
#line 1142 "instmap.m"
          }
#line 1139 "instmap.m"
      }
#line 1139 "instmap.m"
  }
#line 217 "instmap.m"
}

#line 204 "instmap.m"
void MR_CALL 
hlds__instmap__pre_lambda_update_5_p_0(
#line 204 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 204 "instmap.m"
  MR_Word hlds__instmap__Vars_7,
#line 204 "instmap.m"
  MR_Word hlds__instmap__Modes_8,
#line 204 "instmap.m"
  MR_Word hlds__instmap__InstMap0_9,
#line 204 "instmap.m"
  MR_Word * hlds__instmap__InstMap_10)
#line 204 "instmap.m"
{
#line 786 "instmap.m"
  {
#line 786 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 786 "instmap.m"
    MR_Word hlds__instmap__Insts_11;
#line 786 "instmap.m"
    MR_Word hlds__instmap__VarInsts_12;
#line 786 "instmap.m"
    MR_Word hlds__instmap__InstMapDelta_13;
#line 786 "instmap.m"
    MR_Word hlds__instmap__Instmapping_17;

#line 787 "instmap.m"
    {
#line 787 "instmap.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(hlds__instmap__ModuleInfo_6, hlds__instmap__Modes_8, &hlds__instmap__Insts_11);
    }
#line 788 "instmap.m"
    {
#line 788 "instmap.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Vars_7, hlds__instmap__Insts_11, &hlds__instmap__VarInsts_12);
    }
#line 424 "instmap.m"
    {
#line 424 "instmap.m"
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__VarInsts_12, &hlds__instmap__Instmapping_17);
    }
#line 423 "instmap.m"
    {
#line 423 "instmap.m"
      hlds__instmap__InstMapDelta_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 423 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_13, 0) = ((MR_Box) (hlds__instmap__Instmapping_17));
#line 423 "instmap.m"
    }
#line 790 "instmap.m"
    {
#line 790 "instmap.m"
      hlds__instmap__apply_instmap_delta_3_p_0(hlds__instmap__InstMap0_9, hlds__instmap__InstMapDelta_13, hlds__instmap__InstMap_10);
#line 790 "instmap.m"
      return;
    }
#line 786 "instmap.m"
  }
#line 204 "instmap.m"
}

#line 197 "instmap.m"
void MR_CALL 
hlds__instmap__bind_var_to_functors_8_p_0(
#line 197 "instmap.m"
  MR_Word hlds__instmap__Var_9,
#line 197 "instmap.m"
  MR_Word hlds__instmap__Type_10,
#line 197 "instmap.m"
  MR_Word hlds__instmap__MainConsId_11,
#line 197 "instmap.m"
  MR_Word hlds__instmap__OtherConsIds_12,
#line 197 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_17,
#line 197 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_18,
#line 197 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_19,
#line 197 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_20)
#line 197 "instmap.m"
{
#line 728 "instmap.m"
  {
#line 728 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 728 "instmap.m"
    MR_Word hlds__instmap__Inst0_15;
#line 728 "instmap.m"
    MR_Word hlds__instmap__Inst_16;
#line 728 "instmap.m"
    MR_Word hlds__instmap__MainFinalInst_31;
#line 728 "instmap.m"
    MR_Word hlds__instmap__OtherFinalInsts_32;
#line 728 "instmap.m"
    MR_Word hlds__instmap__MaybeMergedInst_33;
#line 728 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_19_34;
#line 728 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_20_35;
#line 728 "instmap.m"
    MR_Word hlds__instmap__V_36_36;
#line 728 "instmap.m"
    MR_Integer hlds__instmap__Arity_49;
#line 728 "instmap.m"
    MR_Word hlds__instmap__ArgLives_50;
#line 728 "instmap.m"
    MR_Word hlds__instmap__ArgInsts_51;
#line 746 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_57;
#line 746 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_58;
#line 742 "instmap.m"
    MR_Word hlds__instmap___Det_52;

#line 729 "instmap.m"
    {
#line 729 "instmap.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__STATE_VARIABLE_InstMap_0_17, hlds__instmap__Var_9, &hlds__instmap__Inst0_15);
    }
#line 738 "instmap.m"
    {
#line 738 "instmap.m"
      hlds__instmap__Arity_49 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_19, hlds__instmap__Type_10, hlds__instmap__MainConsId_11);
    }
#line 739 "instmap.m"
    {
#line 739 "instmap.m"
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_49, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_50);
    }
#line 740 "instmap.m"
    {
#line 740 "instmap.m"
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_49, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_51);
    }
#line 742 "instmap.m"
    {
#line 742 "instmap.m"
      hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__Inst0_15, hlds__instmap__MainConsId_11, hlds__instmap__ArgInsts_51, hlds__instmap__ArgLives_50, (MR_Integer) 0, hlds__instmap__Type_10, &hlds__instmap__STATE_VARIABLE_Inst_23_57, &hlds__instmap___Det_52, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_19, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_58);
    }
#line 746 "instmap.m"
    if (hlds__instmap__succeeded)
#line 745 "instmap.m"
      {
#line 745 "instmap.m"
        hlds__instmap__STATE_VARIABLE_ModuleInfo_19_34 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_58;
#line 745 "instmap.m"
        hlds__instmap__MainFinalInst_31 = hlds__instmap__STATE_VARIABLE_Inst_23_57;
#line 745 "instmap.m"
      }
#line 746 "instmap.m"
    else
#line 747 "instmap.m"
      {
#line 747 "instmap.m"
        {
#line 747 "instmap.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
#line 747 "instmap.m"
          return;
        }
#line 747 "instmap.m"
      }
#line 757 "instmap.m"
    {
#line 757 "instmap.m"
      hlds__instmap__bind_inst_to_functors_others_6_p_0(hlds__instmap__Type_10, hlds__instmap__OtherConsIds_12, hlds__instmap__Inst0_15, &hlds__instmap__OtherFinalInsts_32, hlds__instmap__STATE_VARIABLE_ModuleInfo_19_34, &hlds__instmap__STATE_VARIABLE_ModuleInfo_20_35);
    }
#line 759 "instmap.m"
    {
#line 759 "instmap.m"
      hlds__instmap__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__V_36_36, 0) = ((MR_Box) (hlds__instmap__MainFinalInst_31));
#line 759 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__V_36_36, 1) = ((MR_Box) (hlds__instmap__OtherFinalInsts_32));
#line 759 "instmap.m"
    }
#line 759 "instmap.m"
    {
#line 759 "instmap.m"
      hlds__instmap__merge_var_insts_5_p_0(hlds__instmap__V_36_36, hlds__instmap__Type_10, hlds__instmap__STATE_VARIABLE_ModuleInfo_20_35, hlds__instmap__STATE_VARIABLE_ModuleInfo_20, &hlds__instmap__MaybeMergedInst_33);
    }
#line 763 "instmap.m"
    if ((hlds__instmap__MaybeMergedInst_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "instmap.m"
      {
#line 770 "instmap.m"
        {
#line 770 "instmap.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functors\'/7", (MR_String) "no MaybeMergedInst");
#line 770 "instmap.m"
          return;
        }
#line 764 "instmap.m"
      }
#line 763 "instmap.m"
    else
#line 762 "instmap.m"
      hlds__instmap__Inst_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MaybeMergedInst_33, (MR_Integer) 0)));
#line 566 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 566 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMap_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 566 "instmap.m"
    else
#line 567 "instmap.m"
      {
#line 567 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_17, (MR_Integer) 0)));
#line 567 "instmap.m"
        MR_Word hlds__instmap__InstMapping_71;

#line 568 "instmap.m"
        {
#line 568 "instmap.m"
          mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_9)), ((MR_Box) (hlds__instmap__Inst_16)), hlds__instmap__InstMapping0_70, &hlds__instmap__InstMapping_71);
        }
#line 567 "instmap.m"
        {
#line 567 "instmap.m"
          MR_Word base;
#line 567 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 567 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMap_18 = base;
#line 567 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_71));
#line 567 "instmap.m"
        }
#line 567 "instmap.m"
      }
#line 728 "instmap.m"
  }
#line 197 "instmap.m"
}

#line 194 "instmap.m"
void MR_CALL 
hlds__instmap__bind_var_to_functor_7_p_0(
#line 194 "instmap.m"
  MR_Word hlds__instmap__Var_8,
#line 194 "instmap.m"
  MR_Word hlds__instmap__Type_9,
#line 194 "instmap.m"
  MR_Word hlds__instmap__ConsId_10,
#line 194 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_15,
#line 194 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_16,
#line 194 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_17,
#line 194 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_18)
#line 194 "instmap.m"
{
#line 722 "instmap.m"
  {
#line 722 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 722 "instmap.m"
    MR_Word hlds__instmap__Inst0_13;
#line 722 "instmap.m"
    MR_Word hlds__instmap__Inst_14;
#line 722 "instmap.m"
    MR_Integer hlds__instmap__Arity_29;
#line 722 "instmap.m"
    MR_Word hlds__instmap__ArgLives_30;
#line 722 "instmap.m"
    MR_Word hlds__instmap__ArgInsts_31;
#line 746 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_37;
#line 746 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_38;
#line 742 "instmap.m"
    MR_Word hlds__instmap___Det_32;

#line 723 "instmap.m"
    {
#line 723 "instmap.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__STATE_VARIABLE_InstMap_0_15, hlds__instmap__Var_8, &hlds__instmap__Inst0_13);
    }
#line 738 "instmap.m"
    {
#line 738 "instmap.m"
      hlds__instmap__Arity_29 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_17, hlds__instmap__Type_9, hlds__instmap__ConsId_10);
    }
#line 739 "instmap.m"
    {
#line 739 "instmap.m"
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_29, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_30);
    }
#line 740 "instmap.m"
    {
#line 740 "instmap.m"
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_29, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_31);
    }
#line 742 "instmap.m"
    {
#line 742 "instmap.m"
      hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__Inst0_13, hlds__instmap__ConsId_10, hlds__instmap__ArgInsts_31, hlds__instmap__ArgLives_30, (MR_Integer) 0, hlds__instmap__Type_9, &hlds__instmap__STATE_VARIABLE_Inst_23_37, &hlds__instmap___Det_32, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_17, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_38);
    }
#line 746 "instmap.m"
    if (hlds__instmap__succeeded)
#line 745 "instmap.m"
      {
#line 745 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_18 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_38;
#line 745 "instmap.m"
        hlds__instmap__Inst_14 = hlds__instmap__STATE_VARIABLE_Inst_23_37;
#line 745 "instmap.m"
      }
#line 746 "instmap.m"
    else
#line 747 "instmap.m"
      {
#line 747 "instmap.m"
        {
#line 747 "instmap.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
#line 747 "instmap.m"
          return;
        }
#line 747 "instmap.m"
      }
#line 566 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 566 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMap_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 566 "instmap.m"
    else
#line 567 "instmap.m"
      {
#line 567 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_15, (MR_Integer) 0)));
#line 567 "instmap.m"
        MR_Word hlds__instmap__InstMapping_51;

#line 568 "instmap.m"
        {
#line 568 "instmap.m"
          mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_8)), ((MR_Box) (hlds__instmap__Inst_14)), hlds__instmap__InstMapping0_50, &hlds__instmap__InstMapping_51);
        }
#line 567 "instmap.m"
        {
#line 567 "instmap.m"
          MR_Word base;
#line 567 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 567 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMap_16 = base;
#line 567 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_51));
#line 567 "instmap.m"
        }
#line 567 "instmap.m"
      }
#line 722 "instmap.m"
  }
#line 194 "instmap.m"
}

#line 189 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_bind_var_to_functors_9_p_0(
#line 189 "instmap.m"
  MR_Word hlds__instmap__Var_10,
#line 189 "instmap.m"
  MR_Word hlds__instmap__Type_11,
#line 189 "instmap.m"
  MR_Word hlds__instmap__MainConsId_12,
#line 189 "instmap.m"
  MR_Word hlds__instmap__OtherConsIds_13,
#line 189 "instmap.m"
  MR_Word hlds__instmap__InstMap_14,
#line 189 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22,
#line 189 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstmapDelta_23,
#line 189 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_24,
#line 189 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_25)
#line 189 "instmap.m"
{
#line 697 "instmap.m"
  {
#line 697 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 697 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 697 "instmap.m"
      {
#line 697 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_InstmapDelta_23 = hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22;
#line 697 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_25 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_24;
#line 697 "instmap.m"
      }
#line 697 "instmap.m"
    else
#line 699 "instmap.m"
      {
#line 699 "instmap.m"
        MR_Word hlds__instmap__InstmappingDelta0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22, (MR_Integer) 0)));
#line 699 "instmap.m"
        MR_Word hlds__instmap__OldInst_18;
#line 699 "instmap.m"
        MR_Word hlds__instmap__NewInst1_20;
#line 699 "instmap.m"
        MR_Word hlds__instmap__NewInst_21;
#line 699 "instmap.m"
        MR_Word hlds__instmap__MainFinalInst_39;
#line 699 "instmap.m"
        MR_Word hlds__instmap__OtherFinalInsts_40;
#line 699 "instmap.m"
        MR_Word hlds__instmap__MaybeMergedInst_41;
#line 699 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_19_42;
#line 699 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_20_43;
#line 699 "instmap.m"
        MR_Word hlds__instmap__V_44_44;
#line 699 "instmap.m"
        MR_Integer hlds__instmap__Arity_57;
#line 699 "instmap.m"
        MR_Word hlds__instmap__ArgLives_58;
#line 699 "instmap.m"
        MR_Word hlds__instmap__ArgInsts_59;
#line 708 "instmap.m"
        MR_Word hlds__instmap__NewInst0_19;
#line 706 "instmap.m"
        MR_Box hlds__instmap__conv0_NewInst0_19;
#line 746 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_65;
#line 746 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_66;
#line 742 "instmap.m"
        MR_Word hlds__instmap___Det_60;

#line 702 "instmap.m"
        {
#line 702 "instmap.m"
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_14, hlds__instmap__Var_10, &hlds__instmap__OldInst_18);
        }
#line 706 "instmap.m"
        {
#line 706 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstmappingDelta0_17, ((MR_Box) (hlds__instmap__Var_10)), &hlds__instmap__conv0_NewInst0_19);
        }
#line 706 "instmap.m"
        if (hlds__instmap__succeeded)
#line 706 "instmap.m"
          {
#line 706 "instmap.m"
            hlds__instmap__NewInst0_19 = ((MR_Word) hlds__instmap__conv0_NewInst0_19);
#line 706 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 706 "instmap.m"
          }
#line 708 "instmap.m"
        if (hlds__instmap__succeeded)
#line 707 "instmap.m"
          hlds__instmap__NewInst1_20 = hlds__instmap__NewInst0_19;
#line 708 "instmap.m"
        else
#line 709 "instmap.m"
          hlds__instmap__NewInst1_20 = hlds__instmap__OldInst_18;
#line 738 "instmap.m"
        {
#line 738 "instmap.m"
          hlds__instmap__Arity_57 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_24, hlds__instmap__Type_11, hlds__instmap__MainConsId_12);
        }
#line 739 "instmap.m"
        {
#line 739 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_57, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_58);
        }
#line 740 "instmap.m"
        {
#line 740 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_57, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_59);
        }
#line 742 "instmap.m"
        {
#line 742 "instmap.m"
          hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__NewInst1_20, hlds__instmap__MainConsId_12, hlds__instmap__ArgInsts_59, hlds__instmap__ArgLives_58, (MR_Integer) 0, hlds__instmap__Type_11, &hlds__instmap__STATE_VARIABLE_Inst_23_65, &hlds__instmap___Det_60, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_24, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_66);
        }
#line 746 "instmap.m"
        if (hlds__instmap__succeeded)
#line 745 "instmap.m"
          {
#line 745 "instmap.m"
            hlds__instmap__STATE_VARIABLE_ModuleInfo_19_42 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_66;
#line 745 "instmap.m"
            hlds__instmap__MainFinalInst_39 = hlds__instmap__STATE_VARIABLE_Inst_23_65;
#line 745 "instmap.m"
          }
#line 746 "instmap.m"
        else
#line 747 "instmap.m"
          {
#line 747 "instmap.m"
            {
#line 747 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
#line 747 "instmap.m"
              return;
            }
#line 747 "instmap.m"
          }
#line 757 "instmap.m"
        {
#line 757 "instmap.m"
          hlds__instmap__bind_inst_to_functors_others_6_p_0(hlds__instmap__Type_11, hlds__instmap__OtherConsIds_13, hlds__instmap__NewInst1_20, &hlds__instmap__OtherFinalInsts_40, hlds__instmap__STATE_VARIABLE_ModuleInfo_19_42, &hlds__instmap__STATE_VARIABLE_ModuleInfo_20_43);
        }
#line 759 "instmap.m"
        {
#line 759 "instmap.m"
          hlds__instmap__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "instmap.m"
          MR_hl_field(MR_mktag(1), hlds__instmap__V_44_44, 0) = ((MR_Box) (hlds__instmap__MainFinalInst_39));
#line 759 "instmap.m"
          MR_hl_field(MR_mktag(1), hlds__instmap__V_44_44, 1) = ((MR_Box) (hlds__instmap__OtherFinalInsts_40));
#line 759 "instmap.m"
        }
#line 759 "instmap.m"
        {
#line 759 "instmap.m"
          hlds__instmap__merge_var_insts_5_p_0(hlds__instmap__V_44_44, hlds__instmap__Type_11, hlds__instmap__STATE_VARIABLE_ModuleInfo_20_43, hlds__instmap__STATE_VARIABLE_ModuleInfo_25, &hlds__instmap__MaybeMergedInst_41);
        }
#line 763 "instmap.m"
        if ((hlds__instmap__MaybeMergedInst_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "instmap.m"
          {
#line 770 "instmap.m"
            {
#line 770 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functors\'/7", (MR_String) "no MaybeMergedInst");
#line 770 "instmap.m"
              return;
            }
#line 764 "instmap.m"
          }
#line 763 "instmap.m"
        else
#line 762 "instmap.m"
          hlds__instmap__NewInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MaybeMergedInst_41, (MR_Integer) 0)));
#line 715 "instmap.m"
        {
#line 715 "instmap.m"
          hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__NewInst_21, hlds__instmap__OldInst_18);
        }
#line 715 "instmap.m"
        hlds__instmap__succeeded = !(hlds__instmap__succeeded);
#line 717 "instmap.m"
        if (hlds__instmap__succeeded)
#line 636 "instmap.m"
          {
#line 636 "instmap.m"
            MR_Word hlds__instmap__InstMapping0_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22, (MR_Integer) 0)));

#line 637 "instmap.m"
            hlds__instmap__succeeded = (hlds__instmap__NewInst_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 639 "instmap.m"
            if (hlds__instmap__succeeded)
#line 638 "instmap.m"
              *hlds__instmap__STATE_VARIABLE_InstmapDelta_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 639 "instmap.m"
            else
#line 640 "instmap.m"
              {
#line 640 "instmap.m"
                MR_Word hlds__instmap__InstMapping_80;

#line 640 "instmap.m"
                {
#line 640 "instmap.m"
                  mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_10)), ((MR_Box) (hlds__instmap__NewInst_21)), hlds__instmap__InstMapping0_78, &hlds__instmap__InstMapping_80);
                }
#line 641 "instmap.m"
                {
#line 641 "instmap.m"
                  MR_Word base;
#line 641 "instmap.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 641 "instmap.m"
                  *hlds__instmap__STATE_VARIABLE_InstmapDelta_23 = base;
#line 641 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_80));
#line 641 "instmap.m"
                }
#line 640 "instmap.m"
              }
#line 636 "instmap.m"
          }
#line 717 "instmap.m"
        else
#line 716 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstmapDelta_23 = hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22;
#line 699 "instmap.m"
      }
#line 697 "instmap.m"
  }
#line 189 "instmap.m"
}

#line 185 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_bind_var_to_functor_8_p_0(
#line 185 "instmap.m"
  MR_Word hlds__instmap__Var_9,
#line 185 "instmap.m"
  MR_Word hlds__instmap__Type_10,
#line 185 "instmap.m"
  MR_Word hlds__instmap__ConsId_11,
#line 185 "instmap.m"
  MR_Word hlds__instmap__InstMap_12,
#line 185 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20,
#line 185 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstmapDelta_21,
#line 185 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_22,
#line 185 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_23)
#line 185 "instmap.m"
{
#line 670 "instmap.m"
  {
#line 670 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 670 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 670 "instmap.m"
      {
#line 670 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_InstmapDelta_21 = hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20;
#line 670 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_23 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_22;
#line 670 "instmap.m"
      }
#line 670 "instmap.m"
    else
#line 672 "instmap.m"
      {
#line 672 "instmap.m"
        MR_Word hlds__instmap__InstmappingDelta0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20, (MR_Integer) 0)));
#line 672 "instmap.m"
        MR_Word hlds__instmap__OldInst_16;
#line 672 "instmap.m"
        MR_Word hlds__instmap__NewInst1_18;
#line 672 "instmap.m"
        MR_Word hlds__instmap__NewInst_19;
#line 672 "instmap.m"
        MR_Integer hlds__instmap__Arity_37;
#line 672 "instmap.m"
        MR_Word hlds__instmap__ArgLives_38;
#line 672 "instmap.m"
        MR_Word hlds__instmap__ArgInsts_39;
#line 681 "instmap.m"
        MR_Word hlds__instmap__NewInst0_17;
#line 679 "instmap.m"
        MR_Box hlds__instmap__conv0_NewInst0_17;
#line 746 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_45;
#line 746 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_46;
#line 742 "instmap.m"
        MR_Word hlds__instmap___Det_40;

#line 675 "instmap.m"
        {
#line 675 "instmap.m"
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_12, hlds__instmap__Var_9, &hlds__instmap__OldInst_16);
        }
#line 679 "instmap.m"
        {
#line 679 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstmappingDelta0_15, ((MR_Box) (hlds__instmap__Var_9)), &hlds__instmap__conv0_NewInst0_17);
        }
#line 679 "instmap.m"
        if (hlds__instmap__succeeded)
#line 679 "instmap.m"
          {
#line 679 "instmap.m"
            hlds__instmap__NewInst0_17 = ((MR_Word) hlds__instmap__conv0_NewInst0_17);
#line 679 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 679 "instmap.m"
          }
#line 681 "instmap.m"
        if (hlds__instmap__succeeded)
#line 680 "instmap.m"
          hlds__instmap__NewInst1_18 = hlds__instmap__NewInst0_17;
#line 681 "instmap.m"
        else
#line 682 "instmap.m"
          hlds__instmap__NewInst1_18 = hlds__instmap__OldInst_16;
#line 738 "instmap.m"
        {
#line 738 "instmap.m"
          hlds__instmap__Arity_37 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_22, hlds__instmap__Type_10, hlds__instmap__ConsId_11);
        }
#line 739 "instmap.m"
        {
#line 739 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_37, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_38);
        }
#line 740 "instmap.m"
        {
#line 740 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_37, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_39);
        }
#line 742 "instmap.m"
        {
#line 742 "instmap.m"
          hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__NewInst1_18, hlds__instmap__ConsId_11, hlds__instmap__ArgInsts_39, hlds__instmap__ArgLives_38, (MR_Integer) 0, hlds__instmap__Type_10, &hlds__instmap__STATE_VARIABLE_Inst_23_45, &hlds__instmap___Det_40, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_22, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_46);
        }
#line 746 "instmap.m"
        if (hlds__instmap__succeeded)
#line 745 "instmap.m"
          {
#line 745 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_23 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_46;
#line 745 "instmap.m"
            hlds__instmap__NewInst_19 = hlds__instmap__STATE_VARIABLE_Inst_23_45;
#line 745 "instmap.m"
          }
#line 746 "instmap.m"
        else
#line 747 "instmap.m"
          {
#line 747 "instmap.m"
            {
#line 747 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
#line 747 "instmap.m"
              return;
            }
#line 747 "instmap.m"
          }
#line 687 "instmap.m"
        {
#line 687 "instmap.m"
          hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__NewInst_19, hlds__instmap__OldInst_16);
        }
#line 687 "instmap.m"
        hlds__instmap__succeeded = !(hlds__instmap__succeeded);
#line 689 "instmap.m"
        if (hlds__instmap__succeeded)
#line 636 "instmap.m"
          {
#line 636 "instmap.m"
            MR_Word hlds__instmap__InstMapping0_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20, (MR_Integer) 0)));

#line 637 "instmap.m"
            hlds__instmap__succeeded = (hlds__instmap__NewInst_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 639 "instmap.m"
            if (hlds__instmap__succeeded)
#line 638 "instmap.m"
              *hlds__instmap__STATE_VARIABLE_InstmapDelta_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 639 "instmap.m"
            else
#line 640 "instmap.m"
              {
#line 640 "instmap.m"
                MR_Word hlds__instmap__InstMapping_60;

#line 640 "instmap.m"
                {
#line 640 "instmap.m"
                  mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_9)), ((MR_Box) (hlds__instmap__NewInst_19)), hlds__instmap__InstMapping0_58, &hlds__instmap__InstMapping_60);
                }
#line 641 "instmap.m"
                {
#line 641 "instmap.m"
                  MR_Word base;
#line 641 "instmap.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 641 "instmap.m"
                  *hlds__instmap__STATE_VARIABLE_InstmapDelta_21 = base;
#line 641 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_60));
#line 641 "instmap.m"
                }
#line 640 "instmap.m"
              }
#line 636 "instmap.m"
          }
#line 689 "instmap.m"
        else
#line 688 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstmapDelta_21 = hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20;
#line 672 "instmap.m"
      }
#line 670 "instmap.m"
  }
#line 185 "instmap.m"
}

#line 650 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_2(
#line 650 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 650 "instmap.m"
{
#line 650 "instmap.m"
  {
#line 650 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 650 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 650 "instmap.m"
    {
#line 650 "instmap.m"
      return hlds__instmap__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))));
    }
#line 650 "instmap.m"
    return hlds__instmap__succeeded;
#line 650 "instmap.m"
  }
#line 650 "instmap.m"
}

#line 650 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_1(
#line 650 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 650 "instmap.m"
{
#line 650 "instmap.m"
  {
#line 650 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 650 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 650 "instmap.m"
    {
#line 650 "instmap.m"
      return hlds__instmap__succeeded = hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__650__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))));
    }
#line 650 "instmap.m"
    return hlds__instmap__succeeded;
#line 650 "instmap.m"
  }
#line 650 "instmap.m"
}

#line 179 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0(
#line 179 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 179 "instmap.m"
  MR_Word hlds__instmap__Vars_6,
#line 179 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_0_10,
#line 179 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapDelta_11)
#line 179 "instmap.m"
{
#line 646 "instmap.m"
  {
#line 646 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 646 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMapDelta_0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 646 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMapDelta_11 = hlds__instmap__STATE_VARIABLE_InstMapDelta_0_10;
#line 646 "instmap.m"
    else
#line 649 "instmap.m"
      {
#line 649 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMapDelta_0_10, (MR_Integer) 0)));
#line 649 "instmap.m"
        MR_Word hlds__instmap__InstMapping_9;
#line 649 "instmap.m"
        MR_Word hlds__instmap__V_12_12;
#line 649 "instmap.m"
        MR_Word hlds__instmap__V_16_16;

#line 650 "instmap.m"
        {
#line 650 "instmap.m"
          hlds__instmap__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 650 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
#line 650 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 1) = ((MR_Box) (hlds__instmap__instmap_delta_set_vars_same_4_p_0_1));
#line 650 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 650 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 3) = ((MR_Box) (hlds__instmap__Inst_5));
#line 650 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 650 "instmap.m"
        }
#line 650 "instmap.m"
        {
#line 650 "instmap.m"
          hlds__instmap__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 650 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
#line 650 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 1) = ((MR_Box) (hlds__instmap__instmap_delta_set_vars_same_4_p_0_2));
#line 650 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 650 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 3) = ((MR_Box) (hlds__instmap__V_16_16));
#line 650 "instmap.m"
        }
#line 650 "instmap.m"
        {
#line 650 "instmap.m"
          mercury__require__expect_4_p_0(hlds__instmap__V_12_12, (MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_delta_set_vars_same\'/4", (MR_String) "not_reached");
        }
#line 652 "instmap.m"
        {
#line 652 "instmap.m"
          hlds__instmap__instmapping_set_vars_same_4_p_0(hlds__instmap__Inst_5, hlds__instmap__Vars_6, hlds__instmap__InstMapping0_8, &hlds__instmap__InstMapping_9);
        }
#line 653 "instmap.m"
        {
#line 653 "instmap.m"
          MR_Word base;
#line 653 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 653 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMapDelta_11 = base;
#line 653 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_9));
#line 653 "instmap.m"
        }
#line 649 "instmap.m"
      }
#line 646 "instmap.m"
  }
#line 179 "instmap.m"
}

#line 176 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_set_var_4_p_0(
#line 176 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 176 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 176 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 176 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 176 "instmap.m"
{
#line 635 "instmap.m"
  {
#line 635 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 635 "instmap.m"
    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 635 "instmap.m"
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 635 "instmap.m"
    else
#line 636 "instmap.m"
      {
#line 636 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));

#line 637 "instmap.m"
        hlds__instmap__succeeded = (hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 639 "instmap.m"
        if (hlds__instmap__succeeded)
#line 638 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 639 "instmap.m"
        else
#line 640 "instmap.m"
          {
#line 640 "instmap.m"
            MR_Word hlds__instmap__InstMapping_11;

#line 640 "instmap.m"
            {
#line 640 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__HeadVar__1_1)), ((MR_Box) (hlds__instmap__HeadVar__2_2)), hlds__instmap__InstMapping0_9, &hlds__instmap__InstMapping_11);
            }
#line 641 "instmap.m"
            {
#line 641 "instmap.m"
              MR_Word base;
#line 641 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 641 "instmap.m"
              *hlds__instmap__HeadVar__4_4 = base;
#line 641 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_11));
#line 641 "instmap.m"
            }
#line 640 "instmap.m"
          }
#line 636 "instmap.m"
      }
#line 635 "instmap.m"
  }
#line 176 "instmap.m"
}

#line 621 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_2(
#line 621 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 621 "instmap.m"
{
#line 621 "instmap.m"
  {
#line 621 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 621 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 621 "instmap.m"
    {
#line 621 "instmap.m"
      return hlds__instmap__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))));
    }
#line 621 "instmap.m"
    return hlds__instmap__succeeded;
#line 621 "instmap.m"
  }
#line 621 "instmap.m"
}

#line 621 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_1(
#line 621 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 621 "instmap.m"
{
#line 621 "instmap.m"
  {
#line 621 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 621 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 621 "instmap.m"
    {
#line 621 "instmap.m"
      return hlds__instmap__succeeded = hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__621__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))));
    }
#line 621 "instmap.m"
    return hlds__instmap__succeeded;
#line 621 "instmap.m"
  }
#line 621 "instmap.m"
}

#line 173 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0(
#line 173 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 173 "instmap.m"
  MR_Word hlds__instmap__Vars_6,
#line 173 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_10,
#line 173 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_11)
#line 173 "instmap.m"
{
#line 617 "instmap.m"
  {
#line 617 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 617 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 617 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMap_11 = hlds__instmap__STATE_VARIABLE_InstMap_0_10;
#line 617 "instmap.m"
    else
#line 620 "instmap.m"
      {
#line 620 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_10, (MR_Integer) 0)));
#line 620 "instmap.m"
        MR_Word hlds__instmap__InstMapping_9;
#line 620 "instmap.m"
        MR_Word hlds__instmap__V_12_12;
#line 620 "instmap.m"
        MR_Word hlds__instmap__V_16_16;

#line 621 "instmap.m"
        {
#line 621 "instmap.m"
          hlds__instmap__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 621 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
#line 621 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 1) = ((MR_Box) (hlds__instmap__instmap_set_vars_same_4_p_0_1));
#line 621 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 621 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 3) = ((MR_Box) (hlds__instmap__Inst_5));
#line 621 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 621 "instmap.m"
        }
#line 621 "instmap.m"
        {
#line 621 "instmap.m"
          hlds__instmap__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 621 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
#line 621 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 1) = ((MR_Box) (hlds__instmap__instmap_set_vars_same_4_p_0_2));
#line 621 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 621 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 3) = ((MR_Box) (hlds__instmap__V_16_16));
#line 621 "instmap.m"
        }
#line 621 "instmap.m"
        {
#line 621 "instmap.m"
          mercury__require__expect_4_p_0(hlds__instmap__V_12_12, (MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_set_vars_same\'/4", (MR_String) "not_reached");
        }
#line 623 "instmap.m"
        {
#line 623 "instmap.m"
          hlds__instmap__instmapping_set_vars_same_4_p_0(hlds__instmap__Inst_5, hlds__instmap__Vars_6, hlds__instmap__InstMapping0_8, &hlds__instmap__InstMapping_9);
        }
#line 624 "instmap.m"
        {
#line 624 "instmap.m"
          MR_Word base;
#line 624 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 624 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMap_11 = base;
#line 624 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_9));
#line 624 "instmap.m"
        }
#line 620 "instmap.m"
      }
#line 617 "instmap.m"
  }
#line 173 "instmap.m"
}

#line 171 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_set_vars_corresponding_4_p_0(
#line 171 "instmap.m"
  MR_Word hlds__instmap__Vars_5,
#line 171 "instmap.m"
  MR_Word hlds__instmap__Insts_6,
#line 171 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_10,
#line 171 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_11)
#line 171 "instmap.m"
{
#line 591 "instmap.m"
  {
#line 591 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 591 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 591 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMap_11 = hlds__instmap__STATE_VARIABLE_InstMap_0_10;
#line 591 "instmap.m"
    else
#line 594 "instmap.m"
      {
#line 594 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_10, (MR_Integer) 0)));
#line 594 "instmap.m"
        MR_Word hlds__instmap__InstMapping_9;

#line 595 "instmap.m"
        {
#line 595 "instmap.m"
          hlds__instmap__instmapping_set_vars_corresponding_4_p_0(hlds__instmap__Vars_5, hlds__instmap__Insts_6, hlds__instmap__InstMapping0_8, &hlds__instmap__InstMapping_9);
        }
#line 597 "instmap.m"
        {
#line 597 "instmap.m"
          MR_Word base;
#line 597 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 597 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMap_11 = base;
#line 597 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_9));
#line 597 "instmap.m"
        }
#line 594 "instmap.m"
      }
#line 591 "instmap.m"
  }
#line 171 "instmap.m"
}

#line 169 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_set_vars_3_p_0(
#line 169 "instmap.m"
  MR_Word hlds__instmap__VarsInsts_4,
#line 169 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_8,
#line 169 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_9)
#line 169 "instmap.m"
{
#line 572 "instmap.m"
  {
#line 572 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 572 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 572 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMap_9 = hlds__instmap__STATE_VARIABLE_InstMap_0_8;
#line 572 "instmap.m"
    else
#line 575 "instmap.m"
      {
#line 575 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_8, (MR_Integer) 0)));
#line 575 "instmap.m"
        MR_Word hlds__instmap__InstMapping_7;

#line 576 "instmap.m"
        {
#line 576 "instmap.m"
          hlds__instmap__instmapping_set_vars_3_p_0(hlds__instmap__VarsInsts_4, hlds__instmap__InstMapping0_6, &hlds__instmap__InstMapping_7);
        }
#line 577 "instmap.m"
        {
#line 577 "instmap.m"
          MR_Word base;
#line 577 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 577 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMap_9 = base;
#line 577 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_7));
#line 577 "instmap.m"
        }
#line 575 "instmap.m"
      }
#line 572 "instmap.m"
  }
#line 169 "instmap.m"
}

#line 163 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_set_var_4_p_0(
#line 163 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 163 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 163 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 163 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 163 "instmap.m"
{
#line 566 "instmap.m"
  {
#line 566 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 566 "instmap.m"
    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 566 "instmap.m"
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 566 "instmap.m"
    else
#line 567 "instmap.m"
      {
#line 567 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));
#line 567 "instmap.m"
        MR_Word hlds__instmap__InstMapping_10;

#line 568 "instmap.m"
        {
#line 568 "instmap.m"
          mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__HeadVar__1_1)), ((MR_Box) (hlds__instmap__HeadVar__2_2)), hlds__instmap__InstMapping0_9, &hlds__instmap__InstMapping_10);
        }
#line 567 "instmap.m"
        {
#line 567 "instmap.m"
          MR_Word base;
#line 567 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 567 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = base;
#line 567 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_10));
#line 567 "instmap.m"
        }
#line 567 "instmap.m"
      }
#line 566 "instmap.m"
  }
#line 163 "instmap.m"
}

#line 158 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_insert_var_4_p_0(
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
#line 656 "instmap.m"
  {
#line 656 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 656 "instmap.m"
    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 656 "instmap.m"
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 656 "instmap.m"
    else
#line 657 "instmap.m"
      {
#line 657 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));

#line 658 "instmap.m"
        hlds__instmap__succeeded = (hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 660 "instmap.m"
        if (hlds__instmap__succeeded)
#line 659 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 660 "instmap.m"
        else
#line 661 "instmap.m"
          {
#line 661 "instmap.m"
            MR_Word hlds__instmap__InstMapping_11;

#line 661 "instmap.m"
            {
#line 661 "instmap.m"
              mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__HeadVar__1_1)), ((MR_Box) (hlds__instmap__HeadVar__2_2)), hlds__instmap__InstMapping0_9, &hlds__instmap__InstMapping_11);
            }
#line 662 "instmap.m"
            {
#line 662 "instmap.m"
              MR_Word base;
#line 662 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 662 "instmap.m"
              *hlds__instmap__HeadVar__4_4 = base;
#line 662 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_11));
#line 662 "instmap.m"
            }
#line 661 "instmap.m"
          }
#line 657 "instmap.m"
      }
#line 656 "instmap.m"
  }
#line 158 "instmap.m"
}

#line 152 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_lookup_vars_3_p_0(
#line 152 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 152 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 152 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 152 "instmap.m"
{
#line 561 "instmap.m"
  {
#line 561 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 561 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 561 "instmap.m"
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 561 "instmap.m"
    else
#line 562 "instmap.m"
      {
#line 562 "instmap.m"
        MR_Word hlds__instmap__Arg_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 562 "instmap.m"
        MR_Word hlds__instmap__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 562 "instmap.m"
        MR_Word hlds__instmap__Inst_8;
#line 562 "instmap.m"
        MR_Word hlds__instmap__Insts_9;

#line 563 "instmap.m"
        {
#line 563 "instmap.m"
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__HeadVar__1_1, hlds__instmap__Arg_6, &hlds__instmap__Inst_8);
        }
#line 564 "instmap.m"
        {
#line 564 "instmap.m"
          hlds__instmap__instmap_lookup_vars_3_p_0(hlds__instmap__HeadVar__1_1, hlds__instmap__Args_7, &hlds__instmap__Insts_9);
        }
#line 562 "instmap.m"
        {
#line 562 "instmap.m"
          MR_Word base;
#line 562 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 562 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = base;
#line 562 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Inst_8));
#line 562 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__Insts_9));
#line 562 "instmap.m"
        }
#line 562 "instmap.m"
      }
#line 561 "instmap.m"
  }
#line 152 "instmap.m"
}

#line 146 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_lookup_var_3_p_0(
#line 146 "instmap.m"
  MR_Word hlds__instmap__InstMapDelta_4,
#line 146 "instmap.m"
  MR_Word hlds__instmap__Var_5,
#line 146 "instmap.m"
  MR_Word * hlds__instmap__Inst_6)
#line 146 "instmap.m"
{
#line 557 "instmap.m"
  {
#line 557 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 557 "instmap.m"
    MR_Word hlds__instmap__InstPrime_7;

#line 550 "instmap.m"
    if ((hlds__instmap__InstMapDelta_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "instmap.m"
      {
#line 550 "instmap.m"
        hlds__instmap__InstPrime_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 550 "instmap.m"
        hlds__instmap__succeeded = MR_TRUE;
#line 550 "instmap.m"
      }
#line 550 "instmap.m"
    else
#line 551 "instmap.m"
      {
#line 551 "instmap.m"
        MR_Word hlds__instmap__InstMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_4, (MR_Integer) 0)));
#line 552 "instmap.m"
        MR_Box hlds__instmap__conv0_InstPrime_7;

#line 552 "instmap.m"
        {
#line 552 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMap_12, ((MR_Box) (hlds__instmap__Var_5)), &hlds__instmap__conv0_InstPrime_7);
        }
#line 552 "instmap.m"
        if (hlds__instmap__succeeded)
#line 552 "instmap.m"
          {
#line 552 "instmap.m"
            hlds__instmap__InstPrime_7 = ((MR_Word) hlds__instmap__conv0_InstPrime_7);
#line 552 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 552 "instmap.m"
          }
#line 551 "instmap.m"
      }
#line 557 "instmap.m"
    if (hlds__instmap__succeeded)
#line 556 "instmap.m"
      *hlds__instmap__Inst_6 = hlds__instmap__InstPrime_7;
#line 557 "instmap.m"
    else
#line 558 "instmap.m"
      {
#line 558 "instmap.m"
        {
#line 558 "instmap.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_delta_lookup_var\'/3", (MR_String) "var not in instmap");
#line 558 "instmap.m"
          return;
        }
#line 558 "instmap.m"
      }
#line 557 "instmap.m"
  }
#line 146 "instmap.m"
}

#line 140 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__instmap_delta_search_var_3_p_0(
#line 140 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 140 "instmap.m"
  MR_Word hlds__instmap__Var_2,
#line 140 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 140 "instmap.m"
{
#line 550 "instmap.m"
  {
#line 550 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 550 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "instmap.m"
      {
#line 550 "instmap.m"
        *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 550 "instmap.m"
        hlds__instmap__succeeded = MR_TRUE;
#line 550 "instmap.m"
      }
#line 550 "instmap.m"
    else
#line 551 "instmap.m"
      {
#line 551 "instmap.m"
        MR_Word hlds__instmap__InstMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 552 "instmap.m"
        MR_Box hlds__instmap__conv0_HeadVar__3_3;

#line 552 "instmap.m"
        {
#line 552 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMap_5, ((MR_Box) (hlds__instmap__Var_2)), &hlds__instmap__conv0_HeadVar__3_3);
        }
#line 552 "instmap.m"
        if (hlds__instmap__succeeded)
#line 552 "instmap.m"
          {
#line 552 "instmap.m"
            *hlds__instmap__HeadVar__3_3 = ((MR_Word) hlds__instmap__conv0_HeadVar__3_3);
#line 552 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 552 "instmap.m"
          }
#line 551 "instmap.m"
      }
#line 550 "instmap.m"
    return hlds__instmap__succeeded;
#line 550 "instmap.m"
  }
#line 140 "instmap.m"
}

#line 135 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_lookup_var_3_p_0(
#line 135 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 135 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 135 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 135 "instmap.m"
{
#line 536 "instmap.m"
  {
#line 536 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 536 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 536 "instmap.m"
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 536 "instmap.m"
    else
#line 537 "instmap.m"
      {
#line 537 "instmap.m"
        MR_Word hlds__instmap__InstMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 546 "instmap.m"
        MR_Word hlds__instmap__VarInst_11;
#line 544 "instmap.m"
        MR_Box hlds__instmap__conv0_VarInst_11;

#line 544 "instmap.m"
        {
#line 544 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMap_5, ((MR_Box) (hlds__instmap__HeadVar__2_2)), &hlds__instmap__conv0_VarInst_11);
        }
#line 544 "instmap.m"
        if (hlds__instmap__succeeded)
#line 544 "instmap.m"
          {
#line 544 "instmap.m"
            hlds__instmap__VarInst_11 = ((MR_Word) hlds__instmap__conv0_VarInst_11);
#line 544 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 544 "instmap.m"
          }
#line 546 "instmap.m"
        if (hlds__instmap__succeeded)
#line 545 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = hlds__instmap__VarInst_11;
#line 546 "instmap.m"
        else
#line 547 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 537 "instmap.m"
      }
#line 536 "instmap.m"
  }
#line 135 "instmap.m"
}

#line 128 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_changed_vars_5_p_0(
#line 128 "instmap.m"
  MR_Word hlds__instmap__InstMapA_6,
#line 128 "instmap.m"
  MR_Word hlds__instmap__InstMapB_7,
#line 128 "instmap.m"
  MR_Word hlds__instmap__VarTypes_8,
#line 128 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_9,
#line 128 "instmap.m"
  MR_Word * hlds__instmap__ChangedVars_10)
#line 128 "instmap.m"
{
#line 8410 "hlds.instmap.c"
  {
#line 8412 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 8415 "hlds.instmap.c"
    if ((hlds__instmap__InstMapB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8417 "hlds.instmap.c"
      {
#line 518 "instmap.m"
        {
#line 518 "instmap.m"
          parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__ChangedVars_10);
#line 518 "instmap.m"
          return;
        }
#line 8426 "hlds.instmap.c"
      }
#line 8428 "hlds.instmap.c"
    else
#line 8430 "hlds.instmap.c"
      {
#line 8432 "hlds.instmap.c"
        MR_Word hlds__instmap__VarsB_11;
#line 8434 "hlds.instmap.c"
        MR_Word hlds__instmap__InstMapping_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapB_7, (MR_Integer) 0)));

#line 483 "instmap.m"
        {
#line 483 "instmap.m"
          mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_12, &hlds__instmap__VarsB_11);
        }
#line 510 "instmap.m"
        {
#line 510 "instmap.m"
          hlds__instmap__instmap_changed_vars_2_6_p_0(hlds__instmap__VarsB_11, hlds__instmap__InstMapA_6, hlds__instmap__InstMapB_7, hlds__instmap__VarTypes_8, hlds__instmap__ModuleInfo_9, hlds__instmap__ChangedVars_10);
#line 510 "instmap.m"
          return;
        }
#line 8449 "hlds.instmap.c"
      }
#line 8451 "hlds.instmap.c"
  }
#line 128 "instmap.m"
}

#line 487 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_bound_vars_3_p_0_1(
#line 487 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 487 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 487 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 487 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_3,
#line 487 "instmap.m"
  MR_Box * hlds__instmap__wrapper_arg_4)
#line 487 "instmap.m"
{
#line 487 "instmap.m"
  {
#line 487 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;
#line 487 "instmap.m"
    MR_Word hlds__instmap__conv0_STATE_VARIABLE_BoundVars_11;

#line 487 "instmap.m"
    {
#line 487 "instmap.m"
      hlds__instmap__instmap_bound_vars_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3), &hlds__instmap__conv0_STATE_VARIABLE_BoundVars_11);
    }
#line 487 "instmap.m"
    *hlds__instmap__wrapper_arg_4 = ((MR_Box) (hlds__instmap__conv0_STATE_VARIABLE_BoundVars_11));
#line 487 "instmap.m"
  }
#line 487 "instmap.m"
}

#line 114 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_bound_vars_3_p_0(
#line 114 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 114 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 114 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 114 "instmap.m"
{
#line 485 "instmap.m"
  {
#line 485 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 485 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 485 "instmap.m"
      {
#line 485 "instmap.m"
        {
#line 485 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 485 "instmap.m"
      }
#line 485 "instmap.m"
    else
#line 486 "instmap.m"
      {
#line 486 "instmap.m"
        MR_Word hlds__instmap__InstMapping_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 486 "instmap.m"
        MR_Word hlds__instmap__V_8_8;
#line 486 "instmap.m"
        MR_Word hlds__instmap__V_9_9;
#line 487 "instmap.m"
        MR_Box hlds__instmap__conv1_HeadVar__3_3;

#line 487 "instmap.m"
        {
#line 487 "instmap.m"
          hlds__instmap__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 487 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_8_8, 0) = ((MR_Box) (&hlds__instmap_scalar_common_4[0]));
#line 487 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_8_8, 1) = ((MR_Box) (hlds__instmap__instmap_bound_vars_3_p_0_1));
#line 487 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 487 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_8_8, 3) = ((MR_Box) (hlds__instmap__HeadVar__2_2));
#line 487 "instmap.m"
        }
#line 487 "instmap.m"
        {
#line 487 "instmap.m"
          hlds__instmap__V_9_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 487 "instmap.m"
        {
#line 487 "instmap.m"
          mercury__map__foldl_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__instmap_scalar_common_1[1], hlds__instmap__V_8_8, hlds__instmap__InstMapping_5, ((MR_Box) (hlds__instmap__V_9_9)), &hlds__instmap__conv1_HeadVar__3_3);
        }
#line 487 "instmap.m"
        *hlds__instmap__HeadVar__3_3 = ((MR_Word) hlds__instmap__conv1_HeadVar__3_3);
#line 486 "instmap.m"
      }
#line 485 "instmap.m"
  }
#line 114 "instmap.m"
}

#line 108 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_changed_vars_2_p_0(
#line 108 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 108 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__2_2)
#line 108 "instmap.m"
{
#line 500 "instmap.m"
  {
#line 500 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 500 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 500 "instmap.m"
      {
#line 501 "instmap.m"
        {
#line 501 "instmap.m"
          parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__HeadVar__2_2);
#line 501 "instmap.m"
          return;
        }
#line 500 "instmap.m"
      }
#line 500 "instmap.m"
    else
#line 502 "instmap.m"
      {
#line 502 "instmap.m"
        MR_Word hlds__instmap__InstMapping_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 502 "instmap.m"
        MR_Word hlds__instmap__ChangedVarsList_6;

#line 503 "instmap.m"
        {
#line 503 "instmap.m"
          mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_4, &hlds__instmap__ChangedVarsList_6);
        }
#line 504 "instmap.m"
        {
#line 504 "instmap.m"
          parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__ChangedVarsList_6, hlds__instmap__HeadVar__2_2);
#line 504 "instmap.m"
          return;
        }
#line 502 "instmap.m"
      }
#line 500 "instmap.m"
  }
#line 108 "instmap.m"
}

#line 99 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_vars_list_2_p_0(
#line 99 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 99 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__2_2)
#line 99 "instmap.m"
{
#line 481 "instmap.m"
  {
#line 481 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 481 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 481 "instmap.m"
      *hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 481 "instmap.m"
    else
#line 482 "instmap.m"
      {
#line 482 "instmap.m"
        MR_Word hlds__instmap__InstMapping_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 483 "instmap.m"
        {
#line 483 "instmap.m"
          mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_3, hlds__instmap__HeadVar__2_2);
#line 483 "instmap.m"
          return;
        }
#line 482 "instmap.m"
      }
#line 481 "instmap.m"
  }
#line 99 "instmap.m"
}

#line 95 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_vars_2_p_0(
#line 95 "instmap.m"
  MR_Word hlds__instmap__Instmap_3,
#line 95 "instmap.m"
  MR_Word * hlds__instmap__Vars_4)
#line 95 "instmap.m"
{
#line 477 "instmap.m"
  {
#line 477 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 477 "instmap.m"
    MR_Word hlds__instmap__VarsList_5;

#line 481 "instmap.m"
    if ((hlds__instmap__Instmap_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 481 "instmap.m"
      hlds__instmap__VarsList_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 481 "instmap.m"
    else
#line 482 "instmap.m"
      {
#line 482 "instmap.m"
        MR_Word hlds__instmap__InstMapping_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Instmap_3, (MR_Integer) 0)));

#line 483 "instmap.m"
        {
#line 483 "instmap.m"
          mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_7, &hlds__instmap__VarsList_5);
        }
#line 482 "instmap.m"
      }
#line 479 "instmap.m"
    {
#line 479 "instmap.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__VarsList_5, hlds__instmap__Vars_4);
#line 479 "instmap.m"
      return;
    }
#line 477 "instmap.m"
  }
#line 95 "instmap.m"
}

#line 469 "instmap.m"
static MR_Box MR_CALL 
hlds__instmap__instmap_delta_bind_vars_1_f_0_1(
#line 469 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 469 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1)
#line 469 "instmap.m"
{
#line 469 "instmap.m"
  {
#line 469 "instmap.m"
    MR_Box hlds__instmap__wrapper_arg_2;
#line 469 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;
#line 469 "instmap.m"
    MR_Word hlds__instmap__conv0_HeadVar__2_2;

#line 469 "instmap.m"
    {
#line 469 "instmap.m"
      hlds__instmap__conv0_HeadVar__2_2 = hlds__instmap__pair_with_ground_1_f_0(((MR_Word) hlds__instmap__wrapper_arg_1));
    }
#line 469 "instmap.m"
    hlds__instmap__wrapper_arg_2 = ((MR_Box) (hlds__instmap__conv0_HeadVar__2_2));
#line 469 "instmap.m"
    return hlds__instmap__wrapper_arg_2;
#line 469 "instmap.m"
  }
#line 469 "instmap.m"
}

#line 89 "instmap.m"
MR_Word MR_CALL 
hlds__instmap__instmap_delta_bind_vars_1_f_0(
#line 89 "instmap.m"
  MR_Word hlds__instmap__Vars_3)
#line 89 "instmap.m"
{
#line 462 "instmap.m"
  {
#line 462 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 462 "instmap.m"
    MR_Word hlds__instmap__InstMapDelta_4;
#line 462 "instmap.m"
    MR_Word hlds__instmap__VarsAndGround_5;
#line 462 "instmap.m"
    MR_Word hlds__instmap__Instmapping_14;

#line 469 "instmap.m"
    {
#line 469 "instmap.m"
      hlds__instmap__VarsAndGround_5 = mercury__list__map_2_f_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &hlds__instmap_scalar_common_2[0], (MR_Word) &hlds__instmap_scalar_common_2[3], hlds__instmap__Vars_3);
    }
#line 424 "instmap.m"
    {
#line 424 "instmap.m"
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__VarsAndGround_5, &hlds__instmap__Instmapping_14);
    }
#line 423 "instmap.m"
    {
#line 423 "instmap.m"
      hlds__instmap__InstMapDelta_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 423 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_4, 0) = ((MR_Box) (hlds__instmap__Instmapping_14));
#line 423 "instmap.m"
    }
#line 462 "instmap.m"
    return hlds__instmap__InstMapDelta_4;
#line 462 "instmap.m"
  }
#line 89 "instmap.m"
}

#line 88 "instmap.m"
MR_Word MR_CALL 
hlds__instmap__instmap_delta_bind_var_1_f_0(
#line 88 "instmap.m"
  MR_Word hlds__instmap__Var_3)
#line 88 "instmap.m"
{
#line 459 "instmap.m"
  {
#line 459 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 459 "instmap.m"
    MR_Word hlds__instmap__InstMapDelta_4;
#line 459 "instmap.m"
    MR_Word hlds__instmap__V_5_5;
#line 459 "instmap.m"
    MR_Word hlds__instmap__V_6_6;
#line 459 "instmap.m"
    MR_Word hlds__instmap__Instmapping_12;

#line 460 "instmap.m"
    {
#line 460 "instmap.m"
      hlds__instmap__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 460 "instmap.m"
      MR_hl_field(MR_mktag(0), hlds__instmap__V_6_6, 0) = ((MR_Box) (hlds__instmap__Var_3));
#line 460 "instmap.m"
      MR_hl_field(MR_mktag(0), hlds__instmap__V_6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__instmap_scalar_common_2[2])));
#line 460 "instmap.m"
    }
#line 460 "instmap.m"
    {
#line 460 "instmap.m"
      hlds__instmap__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__V_5_5, 0) = ((MR_Box) (hlds__instmap__V_6_6));
#line 460 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__V_5_5, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 460 "instmap.m"
    }
#line 424 "instmap.m"
    {
#line 424 "instmap.m"
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_5_5, &hlds__instmap__Instmapping_12);
    }
#line 423 "instmap.m"
    {
#line 423 "instmap.m"
      hlds__instmap__InstMapDelta_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 423 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_4, 0) = ((MR_Box) (hlds__instmap__Instmapping_12));
#line 423 "instmap.m"
    }
#line 459 "instmap.m"
    return hlds__instmap__InstMapDelta_4;
#line 459 "instmap.m"
  }
#line 88 "instmap.m"
}

#line 87 "instmap.m"
MR_Word MR_CALL 
hlds__instmap__instmap_delta_bind_no_var_0_f_0(void)
#line 87 "instmap.m"
{
#line 456 "instmap.m"
  {
#line 456 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 456 "instmap.m"
    MR_Word hlds__instmap__InstMapDelta_2;
#line 456 "instmap.m"
    MR_Word hlds__instmap__Instmapping_5;

#line 424 "instmap.m"
    {
#line 424 "instmap.m"
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__instmap__Instmapping_5);
    }
#line 423 "instmap.m"
    {
#line 423 "instmap.m"
      hlds__instmap__InstMapDelta_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 423 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_2, 0) = ((MR_Box) (hlds__instmap__Instmapping_5));
#line 423 "instmap.m"
    }
#line 456 "instmap.m"
    return hlds__instmap__InstMapDelta_2;
#line 456 "instmap.m"
  }
#line 87 "instmap.m"
}

#line 84 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_from_mode_list_4_p_0(
#line 84 "instmap.m"
  MR_Word hlds__instmap__Var_5,
#line 84 "instmap.m"
  MR_Word hlds__instmap__Modes_6,
#line 84 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_7,
#line 84 "instmap.m"
  MR_Word * hlds__instmap__InstMapDelta_8)
#line 84 "instmap.m"
{
#line 433 "instmap.m"
  {
#line 433 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 433 "instmap.m"
    MR_Word hlds__instmap__InstMapDelta0_9;
#line 433 "instmap.m"
    MR_Word hlds__instmap__InstMapping_10;

#line 404 "instmap.m"
    {
#line 404 "instmap.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &hlds__instmap__InstMapping_10);
    }
#line 403 "instmap.m"
    {
#line 403 "instmap.m"
      hlds__instmap__InstMapDelta0_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 403 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta0_9, 0) = ((MR_Box) (hlds__instmap__InstMapping_10));
#line 403 "instmap.m"
    }
#line 435 "instmap.m"
    {
#line 435 "instmap.m"
      hlds__instmap__instmap_delta_from_mode_list_2_5_p_0(hlds__instmap__Var_5, hlds__instmap__Modes_6, hlds__instmap__ModuleInfo_7, hlds__instmap__InstMapDelta0_9, hlds__instmap__InstMapDelta_8);
#line 435 "instmap.m"
      return;
    }
#line 433 "instmap.m"
  }
#line 84 "instmap.m"
}

#line 81 "instmap.m"
MR_Word MR_CALL 
hlds__instmap__instmap_delta_from_assoc_list_1_f_0(
#line 81 "instmap.m"
  MR_Word hlds__instmap__AL_3)
#line 81 "instmap.m"
{
#line 423 "instmap.m"
  {
#line 423 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 423 "instmap.m"
    MR_Word hlds__instmap__HeadVar__2_2;
#line 423 "instmap.m"
    MR_Word hlds__instmap__Instmapping_4;

#line 424 "instmap.m"
    {
#line 424 "instmap.m"
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__AL_3, &hlds__instmap__Instmapping_4);
    }
#line 423 "instmap.m"
    {
#line 423 "instmap.m"
      hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 423 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, 0) = ((MR_Box) (hlds__instmap__Instmapping_4));
#line 423 "instmap.m"
    }
#line 423 "instmap.m"
    return hlds__instmap__HeadVar__2_2;
#line 423 "instmap.m"
  }
#line 81 "instmap.m"
}

#line 78 "instmap.m"
MR_Word MR_CALL 
hlds__instmap__instmap_from_assoc_list_1_f_0(
#line 78 "instmap.m"
  MR_Word hlds__instmap__AL_3)
#line 78 "instmap.m"
{
#line 420 "instmap.m"
  {
#line 420 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 420 "instmap.m"
    MR_Word hlds__instmap__HeadVar__2_2;
#line 420 "instmap.m"
    MR_Word hlds__instmap__Instmapping_4;

#line 421 "instmap.m"
    {
#line 421 "instmap.m"
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__AL_3, &hlds__instmap__Instmapping_4);
    }
#line 420 "instmap.m"
    {
#line 420 "instmap.m"
      hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 420 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, 0) = ((MR_Box) (hlds__instmap__Instmapping_4));
#line 420 "instmap.m"
    }
#line 420 "instmap.m"
    return hlds__instmap__HeadVar__2_2;
#line 420 "instmap.m"
  }
#line 78 "instmap.m"
}

#line 76 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__instmap_delta_is_unreachable_1_p_0(
#line 76 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1)
#line 76 "instmap.m"
{
#line 416 "instmap.m"
  {
#line 416 "instmap.m"
    MR_bool hlds__instmap__succeeded = (hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 416 "instmap.m"
    return hlds__instmap__succeeded;
#line 416 "instmap.m"
  }
#line 76 "instmap.m"
}

#line 72 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__instmap_delta_is_reachable_1_p_0(
#line 72 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1)
#line 72 "instmap.m"
{
#line 414 "instmap.m"
  {
#line 414 "instmap.m"
    MR_bool hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 414 "instmap.m"
    MR_Word hlds__instmap__V_2_2;

#line 414 "instmap.m"
    if (hlds__instmap__succeeded)
#line 414 "instmap.m"
      hlds__instmap__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 414 "instmap.m"
    return hlds__instmap__succeeded;
#line 414 "instmap.m"
  }
#line 72 "instmap.m"
}

#line 64 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__instmap_is_unreachable_1_p_0(
#line 64 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1)
#line 64 "instmap.m"
{
#line 412 "instmap.m"
  {
#line 412 "instmap.m"
    MR_bool hlds__instmap__succeeded = (hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 412 "instmap.m"
    return hlds__instmap__succeeded;
#line 412 "instmap.m"
  }
#line 64 "instmap.m"
}

#line 60 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__instmap_is_reachable_1_p_0(
#line 60 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1)
#line 60 "instmap.m"
{
#line 410 "instmap.m"
  {
#line 410 "instmap.m"
    MR_bool hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 410 "instmap.m"
    MR_Word hlds__instmap__V_2_2;

#line 410 "instmap.m"
    if (hlds__instmap__succeeded)
#line 410 "instmap.m"
      hlds__instmap__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 410 "instmap.m"
    return hlds__instmap__succeeded;
#line 410 "instmap.m"
  }
#line 60 "instmap.m"
}

#line 52 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_init_unreachable_1_p_0(
#line 52 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1)
#line 52 "instmap.m"
{
#line 406 "instmap.m"
  {
#line 406 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 406 "instmap.m"
    *hlds__instmap__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 406 "instmap.m"
  }
#line 52 "instmap.m"
}

#line 48 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_init_reachable_1_p_0(
#line 48 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1)
#line 48 "instmap.m"
{
#line 403 "instmap.m"
  {
#line 403 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 403 "instmap.m"
    MR_Word hlds__instmap__InstMapping_2;

#line 404 "instmap.m"
    {
#line 404 "instmap.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &hlds__instmap__InstMapping_2);
    }
#line 403 "instmap.m"
    {
#line 403 "instmap.m"
      MR_Word base;
#line 403 "instmap.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 403 "instmap.m"
      *hlds__instmap__HeadVar__1_1 = base;
#line 403 "instmap.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_2));
#line 403 "instmap.m"
    }
#line 403 "instmap.m"
  }
#line 48 "instmap.m"
}

#line 44 "instmap.m"
void MR_CALL 
hlds__instmap__init_unreachable_1_p_0(
#line 44 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1)
#line 44 "instmap.m"
{
#line 401 "instmap.m"
  {
#line 401 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 401 "instmap.m"
    *hlds__instmap__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 401 "instmap.m"
  }
#line 44 "instmap.m"
}

#line 40 "instmap.m"
void MR_CALL 
hlds__instmap__init_reachable_1_p_0(
#line 40 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1)
#line 40 "instmap.m"
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
#line 40 "instmap.m"
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
