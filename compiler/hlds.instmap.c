/*
** Automatically generated from `instmap.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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
#include "mdbcomp.sym_name.mih"
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




#line 138 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 141 "hlds.instmap.c"
static const MR_FA_TypeInfo_Struct1 hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 144 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 147 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 150 "hlds.instmap.c"
static const MR_VA_PseudoTypeInfo_Struct0 hlds__instmap____vpti_pred_0;

#line 153 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 156 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 159 "hlds.instmap.c"
static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_arm_instmap_0_0[2];

#line 162 "hlds.instmap.c"
static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_arm_instmap_0_0;

#line 165 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_arm_instmap_0_0[1];

#line 168 "hlds.instmap.c"
static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_arm_instmap_0[1];

#line 171 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_arm_instmap_0[1];

#line 174 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_arm_instmap_0[1];

#line 177 "hlds.instmap.c"
static const MR_FA_TypeInfo_Struct2 hlds__instmap__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 180 "hlds.instmap.c"
static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_instmap_0_0[1];

#line 183 "hlds.instmap.c"
static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_0;

#line 186 "hlds.instmap.c"
static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_1;

#line 189 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_0[1];

#line 192 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_1[1];

#line 195 "hlds.instmap.c"
static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_instmap_0[2];

#line 198 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_instmap_0[2];

#line 201 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_instmap_0[2];

#line 204 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0;

#line 207 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1;

#line 210 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2;

#line 213 "hlds.instmap.c"
static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_value_ordered_overlay_how_0[3];

#line 216 "hlds.instmap.c"
static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_name_ordered_overlay_how_0[3];

#line 219 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_overlay_how_0[3];

#line 222 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____arm_instmap_0_0_10001(
#line 225 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 227 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2);

#line 230 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____arm_instmap_0_0_10001(
#line 233 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 235 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 237 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3);

#line 240 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_0_0_10001(
#line 243 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 245 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2);

#line 248 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmap_0_0_10001(
#line 251 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 253 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 255 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3);

#line 258 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_delta_0_0_10001(
#line 261 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 263 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2);

#line 266 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmap_delta_0_0_10001(
#line 269 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 271 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 273 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3);

#line 276 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0_10001(
#line 279 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 281 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2);

#line 284 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0_10001(
#line 287 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 289 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 291 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3);

#line 294 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____overlay_how_0_0_10001(
#line 297 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 299 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2);

#line 302 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____overlay_how_0_0_10001(
#line 305 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 307 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 309 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3);

#line 1301 "instmap.m"
static void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_p_0(
#line 1301 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1301 "instmap.m"
  MR_Word hlds__instmap__InstMappingA_3,
#line 1301 "instmap.m"
  MR_Word hlds__instmap__InstMappingB_4,
#line 1301 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_5,
#line 1301 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_6,
#line 1301 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7,
#line 1301 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_8);

#line 600 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__600__1_2_p_0(
#line 600 "instmap.m"
  MR_Word hlds__instmap__Inst_10,
#line 600 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_20);

#line 578 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__578__1_2_p_0(
#line 578 "instmap.m"
  MR_Word hlds__instmap__Inst_8,
#line 578 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_19);

#line 643 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__643__1_2_p_0(
#line 643 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 643 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_17);

#line 614 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__614__1_2_p_0(
#line 614 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 614 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_17);

#line 385 "instmap.m"
static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0(
#line 385 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1,
#line 385 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 385 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3);

#line 385 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0(
#line 385 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 385 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2);

#line 1348 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_delta_apply_sub_2_5_p_0(
#line 1348 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1348 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 1348 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 1348 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_Instmapping_0_4,
#line 1348 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_Instmapping_5);

#line 1223 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_instmapping_delta_2_9_p_0(
#line 1223 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1223 "instmap.m"
  MR_Word hlds__instmap__InstMap_2,
#line 1223 "instmap.m"
  MR_Word hlds__instmap__VarTypes_3,
#line 1223 "instmap.m"
  MR_Word hlds__instmap__InstMappingA_4,
#line 1223 "instmap.m"
  MR_Word hlds__instmap__InstMappingB_5,
#line 1223 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_6,
#line 1223 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_7,
#line 1223 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8,
#line 1223 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_9);

#line 1167 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__var_is_not_output_5_p_0(
#line 1167 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 1167 "instmap.m"
  MR_Word hlds__instmap__VarTypes_7,
#line 1167 "instmap.m"
  MR_Word hlds__instmap__InstMap0_8,
#line 1167 "instmap.m"
  MR_Word hlds__instmap__InstMapDeltaMap_9,
#line 1167 "instmap.m"
  MR_Word hlds__instmap__Var_10);

#line 1139 "instmap.m"
static void MR_CALL 
hlds__instmap__compute_instmap_delta_2_4_p_0(
#line 1139 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1139 "instmap.m"
  MR_Word hlds__instmap__InstMapA_2,
#line 1139 "instmap.m"
  MR_Word hlds__instmap__InstMapB_3,
#line 1139 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4);

#line 1093 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_instmap_deltas_2_8_p_0(
#line 1093 "instmap.m"
  MR_Word hlds__instmap__InstMap_9,
#line 1093 "instmap.m"
  MR_Word hlds__instmap__NonLocals_10,
#line 1093 "instmap.m"
  MR_Word hlds__instmap__VarTypes_11,
#line 1093 "instmap.m"
  MR_Word hlds__instmap__Deltas_12,
#line 1093 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24,
#line 1093 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_MergedDeltas_25,
#line 1093 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26,
#line 1093 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_27);

#line 1069 "instmap.m"
static void MR_CALL 
hlds__instmap__arm_instmap_project_context_2_p_0(
#line 1069 "instmap.m"
  MR_Word hlds__instmap__ArmErrorInfo_3,
#line 1069 "instmap.m"
  MR_Word * hlds__instmap__Context_4);

#line 1023 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_var_insts_pass_8_p_0(
#line 1023 "instmap.m"
  MR_Word hlds__instmap__Insts_9,
#line 1023 "instmap.m"
  MR_Word hlds__instmap__MaybeType_10,
#line 1023 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_MergedInsts_0_23,
#line 1023 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_MergedInsts_24,
#line 1023 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25,
#line 1023 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_26,
#line 1023 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_Error_0_27,
#line 1023 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_Error_28);

#line 999 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_var_insts_5_p_0(
#line 999 "instmap.m"
  MR_Word hlds__instmap__Insts_6,
#line 999 "instmap.m"
  MR_Word hlds__instmap__MaybeType_7,
#line 999 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_16,
#line 999 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_17,
#line 999 "instmap.m"
  MR_Word * hlds__instmap__MaybeMergedInst_9);

#line 967 "instmap.m"
static void MR_CALL 
hlds__instmap__lookup_var_in_arm_instmap_3_p_0(
#line 967 "instmap.m"
  MR_Word hlds__instmap__Var_4,
#line 967 "instmap.m"
  MR_Word hlds__instmap__ArmInstMap_5,
#line 967 "instmap.m"
  MR_Word * hlds__instmap__Inst_6);

#line 958 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_2(
#line 958 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 958 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 958 "instmap.m"
  MR_Box * hlds__instmap__wrapper_arg_2);

#line 954 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_1(
#line 954 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 954 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 954 "instmap.m"
  MR_Box * hlds__instmap__wrapper_arg_2);

#line 944 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0(
#line 944 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 944 "instmap.m"
  MR_Word hlds__instmap__ArmInstMaps_2,
#line 944 "instmap.m"
  MR_Word hlds__instmap__VarTypes_3,
#line 944 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 944 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__5_5,
#line 944 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6,
#line 944 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_7,
#line 944 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__8_8);

#line 910 "instmap.m"
static void MR_CALL 
hlds__instmap__get_reachable_instmaps_2_p_0(
#line 910 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 910 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__2_2);

#line 766 "instmap.m"
static void MR_CALL 
hlds__instmap__bind_inst_to_functors_others_6_p_0(
#line 766 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 766 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 766 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 766 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4,
#line 766 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5,
#line 766 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_6);

#line 620 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_same_4_p_0(
#line 620 "instmap.m"
  MR_Word hlds__instmap__Inst_1,
#line 620 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 620 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_3,
#line 620 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_4);

#line 600 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_2(
#line 600 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 600 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_1(
#line 600 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 593 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0(
#line 593 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 593 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 593 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 593 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4);

#line 578 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_2(
#line 578 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 578 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_1(
#line 578 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 573 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0(
#line 573 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 573 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_2,
#line 573 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_3);

#line 506 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_changed_vars_2_6_p_0(
#line 506 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 506 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 506 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 506 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 506 "instmap.m"
  MR_Word hlds__instmap__HeadVar__5_5,
#line 506 "instmap.m"
  MR_Word * hlds__instmap__ChangedVars_6);

#line 483 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_bound_vars_2_5_p_0(
#line 483 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 483 "instmap.m"
  MR_Word hlds__instmap__Var_7,
#line 483 "instmap.m"
  MR_Word hlds__instmap__Inst_8,
#line 483 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_BoundVars_0_10,
#line 483 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_BoundVars_11);

#line 464 "instmap.m"
static MR_Word MR_CALL 
hlds__instmap__pair_with_ground_1_f_0(
#line 464 "instmap.m"
  MR_Word hlds__instmap__Var_3);

#line 431 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_delta_from_mode_list_2_5_p_0(
#line 431 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 431 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 431 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_3,
#line 431 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4,
#line 431 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapDelta_5);

#line 1162 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_no_output_vars_5_p_0_1(
#line 1162 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 1162 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1);

#line 643 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_2(
#line 643 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 643 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_1(
#line 643 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 614 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_2(
#line 614 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 614 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_1(
#line 614 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 480 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_bound_vars_3_p_0_1(
#line 480 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 480 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 480 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 480 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_3,
#line 480 "instmap.m"
  MR_Box * hlds__instmap__wrapper_arg_4);

#line 462 "instmap.m"
static MR_Box MR_CALL 
hlds__instmap__instmap_delta_bind_vars_1_f_0_1(
#line 462 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 462 "instmap.m"
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



#line 902 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 910 "hlds.instmap.c"
static const MR_FA_TypeInfo_Struct1 hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 918 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 927 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 935 "hlds.instmap.c"
static const MR_VA_PseudoTypeInfo_Struct0 hlds__instmap____vpti_pred_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 0,
  { 0 }

};

#line 943 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 952 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 961 "hlds.instmap.c"
static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_arm_instmap_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0
};

#line 967 "hlds.instmap.c"
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

#line 982 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_arm_instmap_0_0[1] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_arm_instmap_0_0
};

#line 987 "hlds.instmap.c"
static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_arm_instmap_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__instmap__hlds__instmap__du_stag_ordered_arm_instmap_0_0
  }
};

#line 996 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_arm_instmap_0[1] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_arm_instmap_0_0
};

#line 1001 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_arm_instmap_0[1] = {
  (MR_Integer) 0
};

#line 1006 "hlds.instmap.c"
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

#line 1027 "hlds.instmap.c"
static const MR_FA_TypeInfo_Struct2 hlds__instmap__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1036 "hlds.instmap.c"
static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_instmap_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__instmap__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 1041 "hlds.instmap.c"
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

#line 1056 "hlds.instmap.c"
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

#line 1071 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_0[1] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_1
};

#line 1076 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_1[1] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_0
};

#line 1081 "hlds.instmap.c"
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

#line 1095 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_instmap_0[2] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_0,
  &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_1
};

#line 1101 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_instmap_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1107 "hlds.instmap.c"
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

#line 1128 "hlds.instmap.c"
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

#line 1149 "hlds.instmap.c"
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

#line 1170 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0 = {
  (MR_String) "large_base",
  (MR_Integer) 0
};

#line 1176 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1 = {
  (MR_String) "large_overlay",
  (MR_Integer) 1
};

#line 1182 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2 = {
  (MR_String) "test_size",
  (MR_Integer) 2
};

#line 1188 "hlds.instmap.c"
static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_value_ordered_overlay_how_0[3] = {
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2
};

#line 1195 "hlds.instmap.c"
static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_name_ordered_overlay_how_0[3] = {
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2
};

#line 1202 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_overlay_how_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1209 "hlds.instmap.c"
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

#line 1230 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____arm_instmap_0_0_10001(
#line 1233 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 1235 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2)
#line 1237 "hlds.instmap.c"
{
#line 1239 "hlds.instmap.c"
  {
#line 1241 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 1244 "hlds.instmap.c"
    {
#line 1246 "hlds.instmap.c"
      hlds__instmap__succeeded = hlds__instmap____Unify____arm_instmap_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
#line 1249 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 1251 "hlds.instmap.c"
  }
#line 1253 "hlds.instmap.c"
}

#line 1256 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____arm_instmap_0_0_10001(
#line 1259 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 1261 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 1263 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3)
#line 1265 "hlds.instmap.c"
{
#line 1267 "hlds.instmap.c"
  {
#line 1269 "hlds.instmap.c"
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

#line 1272 "hlds.instmap.c"
    {
#line 1274 "hlds.instmap.c"
      hlds__instmap____Compare____arm_instmap_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
#line 1277 "hlds.instmap.c"
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
#line 1279 "hlds.instmap.c"
  }
#line 1281 "hlds.instmap.c"
}

#line 1284 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_0_0_10001(
#line 1287 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 1289 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2)
#line 1291 "hlds.instmap.c"
{
#line 1293 "hlds.instmap.c"
  {
#line 1295 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 1298 "hlds.instmap.c"
    {
#line 1300 "hlds.instmap.c"
      hlds__instmap__succeeded = hlds__instmap____Unify____instmap_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
#line 1303 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 1305 "hlds.instmap.c"
  }
#line 1307 "hlds.instmap.c"
}

#line 1310 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmap_0_0_10001(
#line 1313 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 1315 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 1317 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3)
#line 1319 "hlds.instmap.c"
{
#line 1321 "hlds.instmap.c"
  {
#line 1323 "hlds.instmap.c"
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

#line 1326 "hlds.instmap.c"
    {
#line 1328 "hlds.instmap.c"
      hlds__instmap____Compare____instmap_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
#line 1331 "hlds.instmap.c"
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
#line 1333 "hlds.instmap.c"
  }
#line 1335 "hlds.instmap.c"
}

#line 1338 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_delta_0_0_10001(
#line 1341 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 1343 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2)
#line 1345 "hlds.instmap.c"
{
#line 1347 "hlds.instmap.c"
  {
#line 1349 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 1352 "hlds.instmap.c"
    {
#line 1354 "hlds.instmap.c"
      hlds__instmap__succeeded = hlds__instmap____Unify____instmap_delta_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
#line 1357 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 1359 "hlds.instmap.c"
  }
#line 1361 "hlds.instmap.c"
}

#line 1364 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmap_delta_0_0_10001(
#line 1367 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 1369 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 1371 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3)
#line 1373 "hlds.instmap.c"
{
#line 1375 "hlds.instmap.c"
  {
#line 1377 "hlds.instmap.c"
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

#line 1380 "hlds.instmap.c"
    {
#line 1382 "hlds.instmap.c"
      hlds__instmap____Compare____instmap_delta_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
#line 1385 "hlds.instmap.c"
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
#line 1387 "hlds.instmap.c"
  }
#line 1389 "hlds.instmap.c"
}

#line 1392 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0_10001(
#line 1395 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 1397 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2)
#line 1399 "hlds.instmap.c"
{
#line 1401 "hlds.instmap.c"
  {
#line 1403 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 1406 "hlds.instmap.c"
    {
#line 1408 "hlds.instmap.c"
      hlds__instmap__succeeded = hlds__instmap____Unify____instmapping_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
#line 1411 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 1413 "hlds.instmap.c"
  }
#line 1415 "hlds.instmap.c"
}

#line 1418 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0_10001(
#line 1421 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 1423 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 1425 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3)
#line 1427 "hlds.instmap.c"
{
#line 1429 "hlds.instmap.c"
  {
#line 1431 "hlds.instmap.c"
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

#line 1434 "hlds.instmap.c"
    {
#line 1436 "hlds.instmap.c"
      hlds__instmap____Compare____instmapping_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
#line 1439 "hlds.instmap.c"
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
#line 1441 "hlds.instmap.c"
  }
#line 1443 "hlds.instmap.c"
}

#line 1446 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____overlay_how_0_0_10001(
#line 1449 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 1451 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2)
#line 1453 "hlds.instmap.c"
{
#line 1455 "hlds.instmap.c"
  {
#line 1457 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 1460 "hlds.instmap.c"
    {
#line 1462 "hlds.instmap.c"
      hlds__instmap__succeeded = hlds__instmap____Unify____overlay_how_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
#line 1465 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 1467 "hlds.instmap.c"
  }
#line 1469 "hlds.instmap.c"
}

#line 1472 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____overlay_how_0_0_10001(
#line 1475 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 1477 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 1479 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3)
#line 1481 "hlds.instmap.c"
{
#line 1483 "hlds.instmap.c"
  {
#line 1485 "hlds.instmap.c"
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

#line 1488 "hlds.instmap.c"
    {
#line 1490 "hlds.instmap.c"
      hlds__instmap____Compare____overlay_how_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
#line 1493 "hlds.instmap.c"
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
#line 1495 "hlds.instmap.c"
  }
#line 1497 "hlds.instmap.c"
}

#line 1301 "instmap.m"
static void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_p_0(
#line 1301 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1301 "instmap.m"
  MR_Word hlds__instmap__InstMappingA_3,
#line 1301 "instmap.m"
  MR_Word hlds__instmap__InstMappingB_4,
#line 1301 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_5,
#line 1301 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_6,
#line 1301 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7,
#line 1301 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_8)
#line 1301 "instmap.m"
{
#line 1305 "instmap.m"
  while (MR_TRUE)
#line 1305 "instmap.m"
    {
#line 1305 "instmap.m"
      /* tailcall optimized into a loop */
#line 1305 "instmap.m"
      {
#line 1305 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 1305 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1305 "instmap.m"
          {
#line 1305 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
#line 1305 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_InstMapping_6 = hlds__instmap__STATE_VARIABLE_InstMapping_0_5;
#line 1305 "instmap.m"
          }
#line 1305 "instmap.m"
        else
#line 1307 "instmap.m"
          {
#line 1307 "instmap.m"
            MR_Word hlds__instmap__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 1307 "instmap.m"
            MR_Word hlds__instmap__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 1307 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_36_36;
#line 1307 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40;
#line 1325 "instmap.m"
            MR_Word hlds__instmap__InstA_25;
#line 1308 "instmap.m"
            MR_Box hlds__instmap__conv0_InstA_25;

#line 1308 "instmap.m"
            {
#line 1308 "instmap.m"
              hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingA_3, ((MR_Box) (hlds__instmap__Var_18)), &hlds__instmap__conv0_InstA_25);
            }
#line 1308 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1308 "instmap.m"
              {
#line 1308 "instmap.m"
                hlds__instmap__InstA_25 = ((MR_Word) hlds__instmap__conv0_InstA_25);
#line 1308 "instmap.m"
                hlds__instmap__succeeded = MR_TRUE;
#line 1308 "instmap.m"
              }
#line 1325 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1322 "instmap.m"
              {
#line 1322 "instmap.m"
                MR_Word hlds__instmap__InstB_26;
#line 1309 "instmap.m"
                MR_Box hlds__instmap__conv1_InstB_26;

#line 1309 "instmap.m"
                {
#line 1309 "instmap.m"
                  hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingB_4, ((MR_Box) (hlds__instmap__Var_18)), &hlds__instmap__conv1_InstB_26);
                }
#line 1309 "instmap.m"
                if (hlds__instmap__succeeded)
#line 1309 "instmap.m"
                  {
#line 1309 "instmap.m"
                    hlds__instmap__InstB_26 = ((MR_Word) hlds__instmap__conv1_InstB_26);
#line 1309 "instmap.m"
                    hlds__instmap__succeeded = MR_TRUE;
#line 1309 "instmap.m"
                  }
#line 1322 "instmap.m"
                if (hlds__instmap__succeeded)
#line 1319 "instmap.m"
                  {
#line 1319 "instmap.m"
                    MR_Word hlds__instmap__Inst_27;
#line 1319 "instmap.m"
                    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_35_35;
#line 1315 "instmap.m"
                    MR_Word hlds__instmap___Det_28;

#line 1315 "instmap.m"
                    {
#line 1315 "instmap.m"
                      hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 0, hlds__instmap__InstA_25, hlds__instmap__InstB_26, (MR_Integer) 1, &hlds__instmap__Inst_27, &hlds__instmap___Det_28, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7, &hlds__instmap__STATE_VARIABLE_ModuleInfo_35_35);
                    }
#line 1319 "instmap.m"
                    if (hlds__instmap__succeeded)
#line 1318 "instmap.m"
                      {
#line 1318 "instmap.m"
                        hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40 = hlds__instmap__STATE_VARIABLE_ModuleInfo_35_35;
#line 1318 "instmap.m"
                        {
#line 1318 "instmap.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_18)), ((MR_Box) (hlds__instmap__Inst_27)), hlds__instmap__STATE_VARIABLE_InstMapping_0_5, &hlds__instmap__STATE_VARIABLE_InstMapping_36_36);
                        }
#line 1318 "instmap.m"
                      }
#line 1319 "instmap.m"
                    else
#line 1320 "instmap.m"
                      {
#line 1320 "instmap.m"
                        {
#line 1320 "instmap.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.unify_instmapping_delta_2\'/8", (MR_String) "unexpected error");
#line 1320 "instmap.m"
                          return;
                        }
#line 1320 "instmap.m"
                      }
#line 1319 "instmap.m"
                  }
#line 1322 "instmap.m"
                else
#line 1323 "instmap.m"
                  {
#line 1323 "instmap.m"
                    {
#line 1323 "instmap.m"
                      mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_18)), ((MR_Box) (hlds__instmap__InstA_25)), hlds__instmap__STATE_VARIABLE_InstMapping_0_5, &hlds__instmap__STATE_VARIABLE_InstMapping_36_36);
                    }
#line 1323 "instmap.m"
                    hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
#line 1323 "instmap.m"
                  }
#line 1322 "instmap.m"
              }
#line 1325 "instmap.m"
            else
#line 1328 "instmap.m"
              {
#line 1328 "instmap.m"
                MR_Word hlds__instmap__InstB_45;
#line 1326 "instmap.m"
                MR_Box hlds__instmap__conv2_InstB_45;

#line 1326 "instmap.m"
                {
#line 1326 "instmap.m"
                  hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingB_4, ((MR_Box) (hlds__instmap__Var_18)), &hlds__instmap__conv2_InstB_45);
                }
#line 1326 "instmap.m"
                if (hlds__instmap__succeeded)
#line 1326 "instmap.m"
                  {
#line 1326 "instmap.m"
                    hlds__instmap__InstB_45 = ((MR_Word) hlds__instmap__conv2_InstB_45);
#line 1326 "instmap.m"
                    hlds__instmap__succeeded = MR_TRUE;
#line 1326 "instmap.m"
                  }
#line 1328 "instmap.m"
                if (hlds__instmap__succeeded)
#line 1327 "instmap.m"
                  {
#line 1327 "instmap.m"
                    {
#line 1327 "instmap.m"
                      mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_18)), ((MR_Box) (hlds__instmap__InstB_45)), hlds__instmap__STATE_VARIABLE_InstMapping_0_5, &hlds__instmap__STATE_VARIABLE_InstMapping_36_36);
                    }
#line 1327 "instmap.m"
                  }
#line 1328 "instmap.m"
                else
#line 1327 "instmap.m"
                  hlds__instmap__STATE_VARIABLE_InstMapping_36_36 = hlds__instmap__STATE_VARIABLE_InstMapping_0_5;
#line 1327 "instmap.m"
                hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
#line 1328 "instmap.m"
              }
#line 1332 "instmap.m"
            /* direct tailcall eliminated */
#line 1332 "instmap.m"
            {
#line 1332 "instmap.m"
              MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__Vars_19;
#line 1332 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_5 = hlds__instmap__STATE_VARIABLE_InstMapping_36_36;
#line 1332 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40;

#line 1332 "instmap.m"
              hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_7;
#line 1332 "instmap.m"
              hlds__instmap__STATE_VARIABLE_InstMapping_0_5 = hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_5;
#line 1332 "instmap.m"
              hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 1332 "instmap.m"
            }
#line 1332 "instmap.m"
            continue;
#line 1307 "instmap.m"
          }
#line 1305 "instmap.m"
      }
#line 1305 "instmap.m"
      break;
#line 1305 "instmap.m"
    }
#line 1301 "instmap.m"
}

#line 306 "instmap.m"
void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_p_0(
#line 306 "instmap.m"
  MR_Word hlds__instmap__NonLocals_2,
#line 306 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 306 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 306 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__5_5,
#line 306 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6,
#line 306 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_7)
#line 306 "instmap.m"
{
#line 1277 "instmap.m"
  {
#line 1277 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1277 "instmap.m"
    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1277 "instmap.m"
      {
#line 1277 "instmap.m"
        *hlds__instmap__HeadVar__5_5 = hlds__instmap__HeadVar__4_4;
#line 1278 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6;
#line 1277 "instmap.m"
      }
#line 1277 "instmap.m"
    else
#line 1277 "instmap.m"
      {
#line 1277 "instmap.m"
        MR_Word hlds__instmap__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));

#line 1277 "instmap.m"
        if ((hlds__instmap__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1279 "instmap.m"
          {
#line 1280 "instmap.m"
            *hlds__instmap__HeadVar__5_5 = hlds__instmap__HeadVar__3_3;
#line 1280 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6;
#line 1279 "instmap.m"
          }
#line 1277 "instmap.m"
        else
#line 1282 "instmap.m"
          {
#line 1282 "instmap.m"
            MR_Word hlds__instmap__TypeInfo_24_46 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 1282 "instmap.m"
            MR_Word hlds__instmap__TypeCtorInfo_25_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1282 "instmap.m"
            MR_Word hlds__instmap__TypeCtorInfo_26_48;
#line 1282 "instmap.m"
            MR_Word hlds__instmap__InstMappingB_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__4_4, (MR_Integer) 0)));
#line 1282 "instmap.m"
            MR_Word hlds__instmap__InstMapping_24;
#line 1282 "instmap.m"
            MR_Word hlds__instmap__VarsInA_38;
#line 1282 "instmap.m"
            MR_Word hlds__instmap__VarsInB_39;
#line 1282 "instmap.m"
            MR_Word hlds__instmap__SetofVarsInA_40;
#line 1282 "instmap.m"
            MR_Word hlds__instmap__SetofVars0_41;
#line 1282 "instmap.m"
            MR_Word hlds__instmap__SetofVars_42;
#line 1282 "instmap.m"
            MR_Word hlds__instmap__ListofVars_43;
#line 1282 "instmap.m"
            MR_Word hlds__instmap__V_44_44;

#line 1292 "instmap.m"
            {
#line 1292 "instmap.m"
              mercury__map__keys_2_p_0(hlds__instmap__TypeInfo_24_46, hlds__instmap__TypeCtorInfo_25_47, hlds__instmap__V_29_29, &hlds__instmap__VarsInA_38);
            }
#line 1293 "instmap.m"
            {
#line 1293 "instmap.m"
              mercury__map__keys_2_p_0(hlds__instmap__TypeInfo_24_46, hlds__instmap__TypeCtorInfo_25_47, hlds__instmap__InstMappingB_23, &hlds__instmap__VarsInB_39);
            }
#line 1818 "hlds.instmap.c"
            hlds__instmap__TypeCtorInfo_26_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1294 "instmap.m"
            {
#line 1294 "instmap.m"
              parse_tree__set_of_var__sorted_list_to_set_2_p_0(hlds__instmap__TypeCtorInfo_26_48, hlds__instmap__VarsInA_38, &hlds__instmap__SetofVarsInA_40);
            }
#line 1295 "instmap.m"
            {
#line 1295 "instmap.m"
              parse_tree__set_of_var__insert_list_3_p_0(hlds__instmap__TypeCtorInfo_26_48, hlds__instmap__VarsInB_39, hlds__instmap__SetofVarsInA_40, &hlds__instmap__SetofVars0_41);
            }
#line 1296 "instmap.m"
            {
#line 1296 "instmap.m"
              parse_tree__set_of_var__intersect_3_p_0(hlds__instmap__TypeCtorInfo_26_48, hlds__instmap__SetofVars0_41, hlds__instmap__NonLocals_2, &hlds__instmap__SetofVars_42);
            }
#line 1297 "instmap.m"
            {
#line 1297 "instmap.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__instmap__TypeCtorInfo_26_48, hlds__instmap__SetofVars_42, &hlds__instmap__ListofVars_43);
            }
#line 1299 "instmap.m"
            {
#line 1299 "instmap.m"
              hlds__instmap__V_44_44 = mercury__map__init_0_f_0(hlds__instmap__TypeInfo_24_46, hlds__instmap__TypeCtorInfo_25_47);
            }
#line 1298 "instmap.m"
            {
#line 1298 "instmap.m"
              hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_p_0(hlds__instmap__ListofVars_43, hlds__instmap__V_29_29, hlds__instmap__InstMappingB_23, hlds__instmap__V_44_44, &hlds__instmap__InstMapping_24, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6, hlds__instmap__STATE_VARIABLE_ModuleInfo_7);
            }
#line 1282 "instmap.m"
            {
#line 1282 "instmap.m"
              MR_Word base;
#line 1282 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1282 "instmap.m"
              *hlds__instmap__HeadVar__5_5 = base;
#line 1282 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_24));
#line 1282 "instmap.m"
            }
#line 1282 "instmap.m"
          }
#line 1277 "instmap.m"
      }
#line 1277 "instmap.m"
  }
#line 306 "instmap.m"
}

#line 600 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__600__1_2_p_0(
#line 600 "instmap.m"
  MR_Word hlds__instmap__Inst_10,
#line 600 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_20)
#line 600 "instmap.m"
{
#line 600 "instmap.m"
  {
#line 600 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 600 "instmap.m"
    {
#line 600 "instmap.m"
      return hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst_10, hlds__instmap__HeadVar__2_20);
    }
#line 600 "instmap.m"
    return hlds__instmap__succeeded;
#line 600 "instmap.m"
  }
#line 600 "instmap.m"
}

#line 578 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__578__1_2_p_0(
#line 578 "instmap.m"
  MR_Word hlds__instmap__Inst_8,
#line 578 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_19)
#line 578 "instmap.m"
{
#line 578 "instmap.m"
  {
#line 578 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 578 "instmap.m"
    {
#line 578 "instmap.m"
      return hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst_8, hlds__instmap__HeadVar__2_19);
    }
#line 578 "instmap.m"
    return hlds__instmap__succeeded;
#line 578 "instmap.m"
  }
#line 578 "instmap.m"
}

#line 643 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__643__1_2_p_0(
#line 643 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 643 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_17)
#line 643 "instmap.m"
{
#line 643 "instmap.m"
  {
#line 643 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 643 "instmap.m"
    {
#line 643 "instmap.m"
      return hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst_5, hlds__instmap__HeadVar__2_17);
    }
#line 643 "instmap.m"
    return hlds__instmap__succeeded;
#line 643 "instmap.m"
  }
#line 643 "instmap.m"
}

#line 614 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__614__1_2_p_0(
#line 614 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 614 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_17)
#line 614 "instmap.m"
{
#line 614 "instmap.m"
  {
#line 614 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 614 "instmap.m"
    {
#line 614 "instmap.m"
      return hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst_5, hlds__instmap__HeadVar__2_17);
    }
#line 614 "instmap.m"
    return hlds__instmap__succeeded;
#line 614 "instmap.m"
  }
#line 614 "instmap.m"
}

#line 202 "instmap.m"
void MR_CALL 
hlds__instmap____Compare____overlay_how_0_0(
#line 202 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1,
#line 202 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 202 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3)
#line 202 "instmap.m"
{
#line 202 "instmap.m"
  {
#line 202 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 202 "instmap.m"
    MR_Integer hlds__instmap__Cast_HeadVar1_4 = (MR_Integer) hlds__instmap__HeadVar__2_2;
#line 202 "instmap.m"
    MR_Integer hlds__instmap__Cast_HeadVar2_5 = (MR_Integer) hlds__instmap__HeadVar__3_3;

#line 202 "instmap.m"
    {
#line 202 "instmap.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__instmap__HeadVar__1_1, hlds__instmap__Cast_HeadVar1_4, hlds__instmap__Cast_HeadVar2_5);
#line 202 "instmap.m"
      return;
    }
#line 202 "instmap.m"
  }
#line 202 "instmap.m"
}

#line 202 "instmap.m"
MR_bool MR_CALL 
hlds__instmap____Unify____overlay_how_0_0(
#line 202 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_1,
#line 202 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2)
#line 202 "instmap.m"
{
#line 2016 "hlds.instmap.c"
  {
#line 2018 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded = (hlds__instmap__HeadVar__2_1 == hlds__instmap__HeadVar__2_2);

#line 2021 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 2023 "hlds.instmap.c"
  }
#line 202 "instmap.m"
}

#line 385 "instmap.m"
static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0(
#line 385 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1,
#line 385 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 385 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3)
#line 385 "instmap.m"
{
#line 385 "instmap.m"
  {
#line 385 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 385 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar1_4 = hlds__instmap__HeadVar__2_2;
#line 385 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar2_5 = hlds__instmap__HeadVar__3_3;

#line 385 "instmap.m"
    {
#line 385 "instmap.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__instmap_scalar_common_2[1], hlds__instmap__HeadVar__1_1, ((MR_Box) (hlds__instmap__Cast_HeadVar1_4)), ((MR_Box) (hlds__instmap__Cast_HeadVar2_5)));
#line 385 "instmap.m"
      return;
    }
#line 385 "instmap.m"
  }
#line 385 "instmap.m"
}

#line 385 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0(
#line 385 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 385 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2)
#line 385 "instmap.m"
{
#line 385 "instmap.m"
  {
#line 385 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 385 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar1_3 = hlds__instmap__HeadVar__1_1;
#line 385 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar2_4 = hlds__instmap__HeadVar__2_2;

#line 385 "instmap.m"
    {
#line 385 "instmap.m"
      return hlds__instmap__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__instmap_scalar_common_2[1], ((MR_Box) (hlds__instmap__Cast_HeadVar1_3)), ((MR_Box) (hlds__instmap__Cast_HeadVar2_4)));
    }
#line 385 "instmap.m"
    return hlds__instmap__succeeded;
#line 385 "instmap.m"
  }
#line 385 "instmap.m"
}

#line 379 "instmap.m"
void MR_CALL 
hlds__instmap____Compare____instmap_delta_0_0(
#line 379 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1,
#line 379 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 379 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3)
#line 379 "instmap.m"
{
#line 379 "instmap.m"
  {
#line 379 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 379 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar1_4 = hlds__instmap__HeadVar__2_2;
#line 379 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar2_5 = hlds__instmap__HeadVar__3_3;

#line 379 "instmap.m"
    {
#line 379 "instmap.m"
      hlds__instmap____Compare____instmap_0_0(hlds__instmap__HeadVar__1_1, hlds__instmap__Cast_HeadVar1_4, hlds__instmap__Cast_HeadVar2_5);
#line 379 "instmap.m"
      return;
    }
#line 379 "instmap.m"
  }
#line 379 "instmap.m"
}

#line 379 "instmap.m"
MR_bool MR_CALL 
hlds__instmap____Unify____instmap_delta_0_0(
#line 379 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 379 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2)
#line 379 "instmap.m"
{
#line 379 "instmap.m"
  {
#line 379 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 379 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar1_3 = hlds__instmap__HeadVar__1_1;
#line 379 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar2_4 = hlds__instmap__HeadVar__2_2;

#line 379 "instmap.m"
    {
#line 379 "instmap.m"
      return hlds__instmap__succeeded = hlds__instmap____Unify____instmap_0_0(hlds__instmap__Cast_HeadVar1_3, hlds__instmap__Cast_HeadVar2_4);
    }
#line 379 "instmap.m"
    return hlds__instmap__succeeded;
#line 379 "instmap.m"
  }
#line 379 "instmap.m"
}

#line 381 "instmap.m"
void MR_CALL 
hlds__instmap____Compare____instmap_0_0(
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
    MR_Integer hlds__instmap__CastX_8 = (MR_Integer) hlds__instmap__HeadVar__2_2;
#line 381 "instmap.m"
    MR_Integer hlds__instmap__CastY_9 = (MR_Integer) hlds__instmap__HeadVar__3_3;

#line 381 "instmap.m"
    hlds__instmap__succeeded = (hlds__instmap__CastX_8 == hlds__instmap__CastY_9);
#line 381 "instmap.m"
    if (hlds__instmap__succeeded)
#line 2176 "hlds.instmap.c"
      *hlds__instmap__HeadVar__1_1 = (MR_Integer) 0;
#line 381 "instmap.m"
    else
#line 381 "instmap.m"
      if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 381 "instmap.m"
        if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 381 "instmap.m"
          *hlds__instmap__HeadVar__1_1 = (MR_Integer) 0;
#line 381 "instmap.m"
        else
#line 2188 "hlds.instmap.c"
          *hlds__instmap__HeadVar__1_1 = (MR_Integer) 2;
#line 381 "instmap.m"
      else
#line 381 "instmap.m"
        {
#line 381 "instmap.m"
          MR_Word hlds__instmap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));

#line 381 "instmap.m"
          if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2199 "hlds.instmap.c"
            *hlds__instmap__HeadVar__1_1 = (MR_Integer) 1;
#line 381 "instmap.m"
          else
#line 381 "instmap.m"
            {
#line 381 "instmap.m"
              MR_Word hlds__instmap__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));

#line 381 "instmap.m"
              {
#line 381 "instmap.m"
                mercury__builtin__compare_3_p_0((MR_Word) &hlds__instmap_scalar_common_2[1], hlds__instmap__HeadVar__1_1, ((MR_Box) (hlds__instmap__V_11_11)), ((MR_Box) (hlds__instmap__V_5_5)));
#line 381 "instmap.m"
                return;
              }
#line 381 "instmap.m"
            }
#line 381 "instmap.m"
        }
#line 381 "instmap.m"
  }
#line 381 "instmap.m"
}

#line 381 "instmap.m"
MR_bool MR_CALL 
hlds__instmap____Unify____instmap_0_0(
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
    MR_Integer hlds__instmap__CastX_7 = (MR_Integer) hlds__instmap__HeadVar__1_1;
#line 381 "instmap.m"
    MR_Integer hlds__instmap__CastY_8 = (MR_Integer) hlds__instmap__HeadVar__2_2;

#line 381 "instmap.m"
    hlds__instmap__succeeded = (hlds__instmap__CastX_7 == hlds__instmap__CastY_8);
#line 381 "instmap.m"
    if (hlds__instmap__succeeded)
#line 381 "instmap.m"
      hlds__instmap__succeeded = MR_TRUE;
#line 381 "instmap.m"
    else
#line 381 "instmap.m"
      if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 381 "instmap.m"
        {
#line 381 "instmap.m"
          MR_Integer hlds__instmap__CastX_5 = (MR_Integer) hlds__instmap__HeadVar__1_1;
#line 381 "instmap.m"
          MR_Integer hlds__instmap__CastY_6 = (MR_Integer) hlds__instmap__HeadVar__2_2;

#line 381 "instmap.m"
          hlds__instmap__succeeded = (hlds__instmap__CastY_6 == hlds__instmap__CastX_5);
#line 381 "instmap.m"
        }
#line 381 "instmap.m"
      else
#line 381 "instmap.m"
        {
#line 381 "instmap.m"
          MR_Word hlds__instmap__TypeInfo_9_9;
#line 381 "instmap.m"
          MR_Word hlds__instmap__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 381 "instmap.m"
          MR_Word hlds__instmap__V_4_4;

#line 381 "instmap.m"
          hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 381 "instmap.m"
          if (hlds__instmap__succeeded)
#line 381 "instmap.m"
            {
#line 381 "instmap.m"
              hlds__instmap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 2282 "hlds.instmap.c"
              hlds__instmap__TypeInfo_9_9 = (MR_Word) &hlds__instmap_scalar_common_2[1];
#line 2284 "hlds.instmap.c"
              {
#line 2286 "hlds.instmap.c"
                return hlds__instmap__succeeded = mercury__builtin__unify_2_p_0(hlds__instmap__TypeInfo_9_9, ((MR_Box) (hlds__instmap__V_3_3)), ((MR_Box) (hlds__instmap__V_4_4)));
              }
#line 381 "instmap.m"
            }
#line 381 "instmap.m"
        }
#line 381 "instmap.m"
    return hlds__instmap__succeeded;
#line 381 "instmap.m"
  }
#line 381 "instmap.m"
}

#line 237 "instmap.m"
void MR_CALL 
hlds__instmap____Compare____arm_instmap_0_0(
#line 237 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1,
#line 237 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 237 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3)
#line 237 "instmap.m"
{
#line 237 "instmap.m"
  {
#line 237 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 237 "instmap.m"
    MR_Integer hlds__instmap__CastX_9 = (MR_Integer) hlds__instmap__HeadVar__2_2;
#line 237 "instmap.m"
    MR_Integer hlds__instmap__CastY_10 = (MR_Integer) hlds__instmap__HeadVar__3_3;

#line 237 "instmap.m"
    hlds__instmap__succeeded = (hlds__instmap__CastX_9 == hlds__instmap__CastY_10);
#line 237 "instmap.m"
    if (hlds__instmap__succeeded)
#line 2324 "hlds.instmap.c"
      *hlds__instmap__HeadVar__1_1 = (MR_Integer) 0;
#line 237 "instmap.m"
    else
#line 237 "instmap.m"
      {
#line 237 "instmap.m"
        MR_Word hlds__instmap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 237 "instmap.m"
        MR_Word hlds__instmap__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 237 "instmap.m"
        MR_Word hlds__instmap__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));
#line 237 "instmap.m"
        MR_Word hlds__instmap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__3_3, (MR_Integer) 1)));
#line 237 "instmap.m"
        MR_Word hlds__instmap__V_8_8;

#line 237 "instmap.m"
        {
#line 237 "instmap.m"
          mercury__term____Compare____context_0_0(&hlds__instmap__V_8_8, hlds__instmap__V_4_4, hlds__instmap__V_6_6);
        }
#line 2346 "hlds.instmap.c"
        hlds__instmap__succeeded = (hlds__instmap__V_8_8 == (MR_Integer) 0);
#line 237 "instmap.m"
        hlds__instmap__succeeded = !(hlds__instmap__succeeded);
#line 237 "instmap.m"
        if (hlds__instmap__succeeded)
#line 237 "instmap.m"
          *hlds__instmap__HeadVar__1_1 = hlds__instmap__V_8_8;
#line 237 "instmap.m"
        else
#line 237 "instmap.m"
          {
#line 237 "instmap.m"
            hlds__instmap____Compare____instmap_0_0(hlds__instmap__HeadVar__1_1, hlds__instmap__V_5_5, hlds__instmap__V_7_7);
#line 237 "instmap.m"
            return;
          }
#line 237 "instmap.m"
      }
#line 237 "instmap.m"
  }
#line 237 "instmap.m"
}

#line 237 "instmap.m"
MR_bool MR_CALL 
hlds__instmap____Unify____arm_instmap_0_0(
#line 237 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 237 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2)
#line 237 "instmap.m"
{
#line 237 "instmap.m"
  {
#line 237 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 237 "instmap.m"
    MR_Integer hlds__instmap__CastX_7 = (MR_Integer) hlds__instmap__HeadVar__1_1;
#line 237 "instmap.m"
    MR_Integer hlds__instmap__CastY_8 = (MR_Integer) hlds__instmap__HeadVar__2_2;

#line 237 "instmap.m"
    hlds__instmap__succeeded = (hlds__instmap__CastX_7 == hlds__instmap__CastY_8);
#line 237 "instmap.m"
    if (hlds__instmap__succeeded)
#line 237 "instmap.m"
      hlds__instmap__succeeded = MR_TRUE;
#line 237 "instmap.m"
    else
#line 237 "instmap.m"
      {
#line 237 "instmap.m"
        MR_Word hlds__instmap__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 237 "instmap.m"
        MR_Word hlds__instmap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 237 "instmap.m"
        MR_Word hlds__instmap__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 237 "instmap.m"
        MR_Word hlds__instmap__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));

#line 2407 "hlds.instmap.c"
        {
#line 2409 "hlds.instmap.c"
          hlds__instmap__succeeded = mercury__term____Unify____context_0_0(hlds__instmap__V_3_3, hlds__instmap__V_5_5);
        }
#line 237 "instmap.m"
        if (hlds__instmap__succeeded)
#line 2414 "hlds.instmap.c"
          {
#line 2416 "hlds.instmap.c"
            return hlds__instmap__succeeded = hlds__instmap____Unify____instmap_0_0(hlds__instmap__V_4_4, hlds__instmap__V_6_6);
          }
#line 237 "instmap.m"
      }
#line 237 "instmap.m"
    return hlds__instmap__succeeded;
#line 237 "instmap.m"
  }
#line 237 "instmap.m"
}

#line 1348 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_delta_apply_sub_2_5_p_0(
#line 1348 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1348 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 1348 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 1348 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_Instmapping_0_4,
#line 1348 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_Instmapping_5)
#line 1348 "instmap.m"
{
#line 1352 "instmap.m"
  while (MR_TRUE)
#line 1352 "instmap.m"
    {
#line 1352 "instmap.m"
      /* tailcall optimized into a loop */
#line 1352 "instmap.m"
      {
#line 1352 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 1352 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1352 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_Instmapping_5 = hlds__instmap__STATE_VARIABLE_Instmapping_0_4;
#line 1352 "instmap.m"
        else
#line 1354 "instmap.m"
          {
#line 1354 "instmap.m"
            MR_Word hlds__instmap__Var0_11;
#line 1354 "instmap.m"
            MR_Word hlds__instmap__Inst_12;
#line 1354 "instmap.m"
            MR_Word hlds__instmap__VarInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 1354 "instmap.m"
            MR_Word hlds__instmap__Var_17;
#line 1354 "instmap.m"
            MR_Word hlds__instmap__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 1354 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_Instmapping_21_21;

#line 1353 "instmap.m"
            hlds__instmap__Var0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_20_20, (MR_Integer) 0)));
#line 1353 "instmap.m"
            hlds__instmap__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_20_20, (MR_Integer) 1)));
#line 1355 "instmap.m"
            {
#line 1355 "instmap.m"
              parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__HeadVar__2_2, hlds__instmap__HeadVar__3_3, hlds__instmap__Var0_11, &hlds__instmap__Var_17);
            }
#line 1360 "instmap.m"
            {
#line 1360 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_17)), ((MR_Box) (hlds__instmap__Inst_12)), hlds__instmap__STATE_VARIABLE_Instmapping_0_4, &hlds__instmap__STATE_VARIABLE_Instmapping_21_21);
            }
#line 1361 "instmap.m"
            /* direct tailcall eliminated */
#line 1361 "instmap.m"
            {
#line 1361 "instmap.m"
              MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__VarInsts0_13;
#line 1361 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_Instmapping_0__tmp_copy_4 = hlds__instmap__STATE_VARIABLE_Instmapping_21_21;

#line 1361 "instmap.m"
              hlds__instmap__STATE_VARIABLE_Instmapping_0_4 = hlds__instmap__STATE_VARIABLE_Instmapping_0__tmp_copy_4;
#line 1361 "instmap.m"
              hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 1361 "instmap.m"
            }
#line 1361 "instmap.m"
            continue;
#line 1354 "instmap.m"
          }
#line 1352 "instmap.m"
      }
#line 1352 "instmap.m"
      break;
#line 1352 "instmap.m"
    }
#line 1348 "instmap.m"
}

#line 1223 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_instmapping_delta_2_9_p_0(
#line 1223 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1223 "instmap.m"
  MR_Word hlds__instmap__InstMap_2,
#line 1223 "instmap.m"
  MR_Word hlds__instmap__VarTypes_3,
#line 1223 "instmap.m"
  MR_Word hlds__instmap__InstMappingA_4,
#line 1223 "instmap.m"
  MR_Word hlds__instmap__InstMappingB_5,
#line 1223 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_6,
#line 1223 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_7,
#line 1223 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8,
#line 1223 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_9)
#line 1223 "instmap.m"
{
#line 1228 "instmap.m"
  while (MR_TRUE)
#line 1228 "instmap.m"
    {
#line 1228 "instmap.m"
      /* tailcall optimized into a loop */
#line 1228 "instmap.m"
      {
#line 1228 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 1228 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1228 "instmap.m"
          {
#line 1228 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_9 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8;
#line 1228 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_InstMapping_7 = hlds__instmap__STATE_VARIABLE_InstMapping_0_6;
#line 1228 "instmap.m"
          }
#line 1228 "instmap.m"
        else
#line 1230 "instmap.m"
          {
#line 1230 "instmap.m"
            MR_Word hlds__instmap__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 1230 "instmap.m"
            MR_Word hlds__instmap__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 1230 "instmap.m"
            MR_Word hlds__instmap__InstA_29;
#line 1230 "instmap.m"
            MR_Word hlds__instmap__InstB_31;
#line 1230 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_43_43;
#line 1230 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50;
#line 1233 "instmap.m"
            MR_Word hlds__instmap__InstInA_28;
#line 1231 "instmap.m"
            MR_Box hlds__instmap__conv0_InstInA_28;
#line 1238 "instmap.m"
            MR_Word hlds__instmap__InstInB_30;
#line 1236 "instmap.m"
            MR_Box hlds__instmap__conv1_InstInB_30;
#line 1263 "instmap.m"
            MR_Word hlds__instmap__Inst1_33;
#line 1263 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_42_42;
#line 1242 "instmap.m"
            MR_Word hlds__instmap__VarType_32;
#line 1242 "instmap.m"
            MR_Word hlds__instmap__V_41_41;

#line 1231 "instmap.m"
            {
#line 1231 "instmap.m"
              hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingA_4, ((MR_Box) (hlds__instmap__Var_20)), &hlds__instmap__conv0_InstInA_28);
            }
#line 1231 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1231 "instmap.m"
              {
#line 1231 "instmap.m"
                hlds__instmap__InstInA_28 = ((MR_Word) hlds__instmap__conv0_InstInA_28);
#line 1231 "instmap.m"
                hlds__instmap__succeeded = MR_TRUE;
#line 1231 "instmap.m"
              }
#line 1233 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1232 "instmap.m"
              hlds__instmap__InstA_29 = hlds__instmap__InstInA_28;
#line 1233 "instmap.m"
            else
#line 1234 "instmap.m"
              {
#line 1234 "instmap.m"
                hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_2, hlds__instmap__Var_20, &hlds__instmap__InstA_29);
              }
#line 1236 "instmap.m"
            {
#line 1236 "instmap.m"
              hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingB_5, ((MR_Box) (hlds__instmap__Var_20)), &hlds__instmap__conv1_InstInB_30);
            }
#line 1236 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1236 "instmap.m"
              {
#line 1236 "instmap.m"
                hlds__instmap__InstInB_30 = ((MR_Word) hlds__instmap__conv1_InstInB_30);
#line 1236 "instmap.m"
                hlds__instmap__succeeded = MR_TRUE;
#line 1236 "instmap.m"
              }
#line 1238 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1237 "instmap.m"
              hlds__instmap__InstB_31 = hlds__instmap__InstInB_30;
#line 1238 "instmap.m"
            else
#line 1239 "instmap.m"
              {
#line 1239 "instmap.m"
                hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_2, hlds__instmap__Var_20, &hlds__instmap__InstB_31);
              }
#line 1242 "instmap.m"
            {
#line 1242 "instmap.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(hlds__instmap__VarTypes_3, hlds__instmap__Var_20, &hlds__instmap__VarType_32);
            }
#line 1243 "instmap.m"
            {
#line 1243 "instmap.m"
              hlds__instmap__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1243 "instmap.m"
              MR_hl_field(MR_mktag(1), hlds__instmap__V_41_41, 0) = ((MR_Box) (hlds__instmap__VarType_32));
#line 1243 "instmap.m"
            }
#line 1243 "instmap.m"
            {
#line 1243 "instmap.m"
              hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__InstA_29, hlds__instmap__InstB_31, hlds__instmap__V_41_41, &hlds__instmap__Inst1_33, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8, &hlds__instmap__STATE_VARIABLE_ModuleInfo_42_42);
            }
#line 1263 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1261 "instmap.m"
              {
#line 1261 "instmap.m"
                hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50 = hlds__instmap__STATE_VARIABLE_ModuleInfo_42_42;
#line 1262 "instmap.m"
                {
#line 1262 "instmap.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_20)), ((MR_Box) (hlds__instmap__Inst1_33)), hlds__instmap__STATE_VARIABLE_InstMapping_0_6, &hlds__instmap__STATE_VARIABLE_InstMapping_43_43);
                }
#line 1261 "instmap.m"
              }
#line 1263 "instmap.m"
            else
#line 1264 "instmap.m"
              {
#line 1264 "instmap.m"
                MR_Integer hlds__instmap__VarInt_35;
#line 1264 "instmap.m"
                MR_String hlds__instmap__Msg_36;
#line 1264 "instmap.m"
                MR_Word hlds__instmap__V_45_45;
#line 1264 "instmap.m"
                MR_Word hlds__instmap__V_46_46;

#line 1264 "instmap.m"
                {
#line 1264 "instmap.m"
                  mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Var_20, &hlds__instmap__VarInt_35);
                }
#line 1266 "instmap.m"
                {
#line 1266 "instmap.m"
                  hlds__instmap__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1266 "instmap.m"
                  MR_hl_field(MR_mktag(1), hlds__instmap__V_46_46, 0) = ((MR_Box) (hlds__instmap__VarInt_35));
#line 1266 "instmap.m"
                }
#line 1266 "instmap.m"
                {
#line 1266 "instmap.m"
                  hlds__instmap__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1266 "instmap.m"
                  MR_hl_field(MR_mktag(1), hlds__instmap__V_45_45, 0) = ((MR_Box) (hlds__instmap__V_46_46));
#line 1266 "instmap.m"
                  MR_hl_field(MR_mktag(1), hlds__instmap__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1266 "instmap.m"
                }
#line 1265 "instmap.m"
                {
#line 1265 "instmap.m"
                  mercury__string__format_3_p_0((MR_String) "merge_instmapping_delta_2: error merging var %i", hlds__instmap__V_45_45, &hlds__instmap__Msg_36);
                }
#line 1267 "instmap.m"
                {
#line 1267 "instmap.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.merge_instmapping_delta_2\'/9", hlds__instmap__Msg_36);
#line 1267 "instmap.m"
                  return;
                }
#line 1264 "instmap.m"
              }
#line 1269 "instmap.m"
            /* direct tailcall eliminated */
#line 1269 "instmap.m"
            {
#line 1269 "instmap.m"
              MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__Vars_21;
#line 1269 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_6 = hlds__instmap__STATE_VARIABLE_InstMapping_43_43;
#line 1269 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50;

#line 1269 "instmap.m"
              hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8;
#line 1269 "instmap.m"
              hlds__instmap__STATE_VARIABLE_InstMapping_0_6 = hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_6;
#line 1269 "instmap.m"
              hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 1269 "instmap.m"
            }
#line 1269 "instmap.m"
            continue;
#line 1230 "instmap.m"
          }
#line 1228 "instmap.m"
      }
#line 1228 "instmap.m"
      break;
#line 1228 "instmap.m"
    }
#line 1223 "instmap.m"
}

#line 1167 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__var_is_not_output_5_p_0(
#line 1167 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 1167 "instmap.m"
  MR_Word hlds__instmap__VarTypes_7,
#line 1167 "instmap.m"
  MR_Word hlds__instmap__InstMap0_8,
#line 1167 "instmap.m"
  MR_Word hlds__instmap__InstMapDeltaMap_9,
#line 1167 "instmap.m"
  MR_Word hlds__instmap__Var_10)
#line 1167 "instmap.m"
{
#line 1170 "instmap.m"
  {
#line 1170 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 1170 "instmap.m"
    MR_Word hlds__instmap__OldInst_11;
#line 1190 "instmap.m"
    MR_Word hlds__instmap__NewInst_12;
#line 1172 "instmap.m"
    MR_Box hlds__instmap__conv0_NewInst_12;

#line 1171 "instmap.m"
    {
#line 1171 "instmap.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap0_8, hlds__instmap__Var_10, &hlds__instmap__OldInst_11);
    }
#line 1172 "instmap.m"
    {
#line 1172 "instmap.m"
      hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapDeltaMap_9, ((MR_Box) (hlds__instmap__Var_10)), &hlds__instmap__conv0_NewInst_12);
    }
#line 1172 "instmap.m"
    if (hlds__instmap__succeeded)
#line 1172 "instmap.m"
      {
#line 1172 "instmap.m"
        hlds__instmap__NewInst_12 = ((MR_Word) hlds__instmap__conv0_NewInst_12);
#line 1172 "instmap.m"
        hlds__instmap__succeeded = MR_TRUE;
#line 1172 "instmap.m"
      }
#line 1190 "instmap.m"
    if (hlds__instmap__succeeded)
#line 1188 "instmap.m"
      {
#line 1188 "instmap.m"
        MR_Word hlds__instmap__Type_13;

#line 1188 "instmap.m"
        {
#line 1188 "instmap.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(hlds__instmap__VarTypes_7, hlds__instmap__Var_10, &hlds__instmap__Type_13);
        }
#line 1189 "instmap.m"
        {
#line 1189 "instmap.m"
          return hlds__instmap__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(hlds__instmap__NewInst_12, hlds__instmap__OldInst_11, hlds__instmap__Type_13, hlds__instmap__ModuleInfo_6);
        }
#line 1188 "instmap.m"
      }
#line 1190 "instmap.m"
    else
#line 1193 "instmap.m"
      {
#line 1193 "instmap.m"
        {
#line 1193 "instmap.m"
          hlds__instmap__succeeded = check_hlds__inst_util__inst_contains_any_2_p_0(hlds__instmap__ModuleInfo_6, hlds__instmap__OldInst_11);
        }
#line 1193 "instmap.m"
        hlds__instmap__succeeded = !(hlds__instmap__succeeded);
#line 1193 "instmap.m"
      }
#line 1170 "instmap.m"
    return hlds__instmap__succeeded;
#line 1170 "instmap.m"
  }
#line 1167 "instmap.m"
}

#line 1139 "instmap.m"
static void MR_CALL 
hlds__instmap__compute_instmap_delta_2_4_p_0(
#line 1139 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1139 "instmap.m"
  MR_Word hlds__instmap__InstMapA_2,
#line 1139 "instmap.m"
  MR_Word hlds__instmap__InstMapB_3,
#line 1139 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 1139 "instmap.m"
{
#line 1142 "instmap.m"
  {
#line 1142 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1142 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1142 "instmap.m"
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1142 "instmap.m"
    else
#line 1143 "instmap.m"
      {
#line 1143 "instmap.m"
        MR_Word hlds__instmap__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 1143 "instmap.m"
        MR_Word hlds__instmap__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 1143 "instmap.m"
        MR_Word hlds__instmap__AssocListTail_12;
#line 1143 "instmap.m"
        MR_Word hlds__instmap__InstA_13;
#line 1143 "instmap.m"
        MR_Word hlds__instmap__InstB_14;
#line 539 "instmap.m"
        MR_Word hlds__instmap__VarInst_20;
#line 537 "instmap.m"
        MR_Box hlds__instmap__conv0_VarInst_20;
#line 539 "instmap.m"
        MR_Word hlds__instmap__VarInst_26;
#line 537 "instmap.m"
        MR_Box hlds__instmap__conv1_VarInst_26;

#line 1144 "instmap.m"
        {
#line 1144 "instmap.m"
          hlds__instmap__compute_instmap_delta_2_4_p_0(hlds__instmap__Vars_8, hlds__instmap__InstMapA_2, hlds__instmap__InstMapB_3, &hlds__instmap__AssocListTail_12);
        }
#line 537 "instmap.m"
        {
#line 537 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapA_2, ((MR_Box) (hlds__instmap__Var_7)), &hlds__instmap__conv0_VarInst_20);
        }
#line 537 "instmap.m"
        if (hlds__instmap__succeeded)
#line 537 "instmap.m"
          {
#line 537 "instmap.m"
            hlds__instmap__VarInst_20 = ((MR_Word) hlds__instmap__conv0_VarInst_20);
#line 537 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 537 "instmap.m"
          }
#line 539 "instmap.m"
        if (hlds__instmap__succeeded)
#line 538 "instmap.m"
          hlds__instmap__InstA_13 = hlds__instmap__VarInst_20;
#line 539 "instmap.m"
        else
#line 540 "instmap.m"
          hlds__instmap__InstA_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 537 "instmap.m"
        {
#line 537 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapB_3, ((MR_Box) (hlds__instmap__Var_7)), &hlds__instmap__conv1_VarInst_26);
        }
#line 537 "instmap.m"
        if (hlds__instmap__succeeded)
#line 537 "instmap.m"
          {
#line 537 "instmap.m"
            hlds__instmap__VarInst_26 = ((MR_Word) hlds__instmap__conv1_VarInst_26);
#line 537 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 537 "instmap.m"
          }
#line 539 "instmap.m"
        if (hlds__instmap__succeeded)
#line 538 "instmap.m"
          hlds__instmap__InstB_14 = hlds__instmap__VarInst_26;
#line 539 "instmap.m"
        else
#line 540 "instmap.m"
          hlds__instmap__InstB_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1147 "instmap.m"
        {
#line 1147 "instmap.m"
          hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__InstA_13, hlds__instmap__InstB_14);
        }
#line 1149 "instmap.m"
        if (hlds__instmap__succeeded)
#line 1148 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = hlds__instmap__AssocListTail_12;
#line 1149 "instmap.m"
        else
#line 1150 "instmap.m"
          {
#line 1150 "instmap.m"
            MR_Word hlds__instmap__V_15_15;

#line 1150 "instmap.m"
            {
#line 1150 "instmap.m"
              hlds__instmap__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1150 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 0) = ((MR_Box) (hlds__instmap__Var_7));
#line 1150 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 1) = ((MR_Box) (hlds__instmap__InstB_14));
#line 1150 "instmap.m"
            }
#line 1150 "instmap.m"
            {
#line 1150 "instmap.m"
              MR_Word base;
#line 1150 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "instmap.m"
              *hlds__instmap__HeadVar__4_4 = base;
#line 1150 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__V_15_15));
#line 1150 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__AssocListTail_12));
#line 1150 "instmap.m"
            }
#line 1150 "instmap.m"
          }
#line 1143 "instmap.m"
      }
#line 1142 "instmap.m"
  }
#line 1139 "instmap.m"
}

#line 1093 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_instmap_deltas_2_8_p_0(
#line 1093 "instmap.m"
  MR_Word hlds__instmap__InstMap_9,
#line 1093 "instmap.m"
  MR_Word hlds__instmap__NonLocals_10,
#line 1093 "instmap.m"
  MR_Word hlds__instmap__VarTypes_11,
#line 1093 "instmap.m"
  MR_Word hlds__instmap__Deltas_12,
#line 1093 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24,
#line 1093 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_MergedDeltas_25,
#line 1093 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26,
#line 1093 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_27)
#line 1093 "instmap.m"
{
#line 1100 "instmap.m"
  while (MR_TRUE)
#line 1100 "instmap.m"
    {
#line 1100 "instmap.m"
      /* tailcall optimized into a loop */
#line 1100 "instmap.m"
      {
#line 1100 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 1100 "instmap.m"
        if ((hlds__instmap__Deltas_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1100 "instmap.m"
          {
#line 1100 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_MergedDeltas_25 = hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24;
#line 1100 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_27 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26;
#line 1100 "instmap.m"
          }
#line 1100 "instmap.m"
        else
#line 1100 "instmap.m"
          {
#line 1100 "instmap.m"
            MR_Word hlds__instmap__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Deltas_12, (MR_Integer) 1)));
#line 1100 "instmap.m"
            MR_Word hlds__instmap__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Deltas_12, (MR_Integer) 0)));

#line 1100 "instmap.m"
            if ((hlds__instmap__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1102 "instmap.m"
              {
#line 1103 "instmap.m"
                {
#line 1103 "instmap.m"
                  MR_Word base;
#line 1103 "instmap.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "instmap.m"
                  *hlds__instmap__STATE_VARIABLE_MergedDeltas_25 = base;
#line 1103 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__V_58_58));
#line 1103 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24));
#line 1103 "instmap.m"
                }
#line 1103 "instmap.m"
                *hlds__instmap__STATE_VARIABLE_ModuleInfo_27 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26;
#line 1102 "instmap.m"
              }
#line 1100 "instmap.m"
            else
#line 1100 "instmap.m"
              {
#line 1100 "instmap.m"
                MR_Word hlds__instmap__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_57_57, (MR_Integer) 1)));
#line 1100 "instmap.m"
                MR_Word hlds__instmap__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_57_57, (MR_Integer) 0)));

#line 1100 "instmap.m"
                if ((hlds__instmap__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1105 "instmap.m"
                  {
#line 1105 "instmap.m"
                    MR_Word hlds__instmap__Delta12_17;

#line 1106 "instmap.m"
                    {
#line 1106 "instmap.m"
                      hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__V_58_58, hlds__instmap__V_60_60, &hlds__instmap__Delta12_17, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26, hlds__instmap__STATE_VARIABLE_ModuleInfo_27);
                    }
#line 1108 "instmap.m"
                    {
#line 1108 "instmap.m"
                      MR_Word base;
#line 1108 "instmap.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1108 "instmap.m"
                      *hlds__instmap__STATE_VARIABLE_MergedDeltas_25 = base;
#line 1108 "instmap.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Delta12_17));
#line 1108 "instmap.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24));
#line 1108 "instmap.m"
                    }
#line 1105 "instmap.m"
                  }
#line 1100 "instmap.m"
                else
#line 1100 "instmap.m"
                  {
#line 1100 "instmap.m"
                    MR_Word hlds__instmap__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_59_59, (MR_Integer) 1)));
#line 1100 "instmap.m"
                    MR_Word hlds__instmap__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_59_59, (MR_Integer) 0)));

#line 1100 "instmap.m"
                    if ((hlds__instmap__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1110 "instmap.m"
                      {
#line 1110 "instmap.m"
                        MR_Word hlds__instmap__Delta123_19;
#line 1110 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40;
#line 1110 "instmap.m"
                        MR_Word hlds__instmap__Delta12_52;

#line 1111 "instmap.m"
                        {
#line 1111 "instmap.m"
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__V_58_58, hlds__instmap__V_60_60, &hlds__instmap__Delta12_52, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26, &hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40);
                        }
#line 1113 "instmap.m"
                        {
#line 1113 "instmap.m"
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__Delta12_52, hlds__instmap__V_62_62, &hlds__instmap__Delta123_19, hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40, hlds__instmap__STATE_VARIABLE_ModuleInfo_27);
                        }
#line 1115 "instmap.m"
                        {
#line 1115 "instmap.m"
                          MR_Word base;
#line 1115 "instmap.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1115 "instmap.m"
                          *hlds__instmap__STATE_VARIABLE_MergedDeltas_25 = base;
#line 1115 "instmap.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Delta123_19));
#line 1115 "instmap.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24));
#line 1115 "instmap.m"
                        }
#line 1110 "instmap.m"
                      }
#line 1100 "instmap.m"
                    else
#line 1117 "instmap.m"
                      {
#line 1117 "instmap.m"
                        MR_Word hlds__instmap__Delta4_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_61_61, (MR_Integer) 0)));
#line 1117 "instmap.m"
                        MR_Word hlds__instmap__MoreDeltas_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_61_61, (MR_Integer) 1)));
#line 1117 "instmap.m"
                        MR_Word hlds__instmap__Delta34_22;
#line 1117 "instmap.m"
                        MR_Word hlds__instmap__Delta1234_23;
#line 1117 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_31_31;
#line 1117 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32;
#line 1117 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33;
#line 1117 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34;
#line 1117 "instmap.m"
                        MR_Word hlds__instmap__Delta12_55;

#line 1118 "instmap.m"
                        {
#line 1118 "instmap.m"
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__V_58_58, hlds__instmap__V_60_60, &hlds__instmap__Delta12_55, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26, &hlds__instmap__STATE_VARIABLE_ModuleInfo_31_31);
                        }
#line 1120 "instmap.m"
                        {
#line 1120 "instmap.m"
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__V_62_62, hlds__instmap__Delta4_20, &hlds__instmap__Delta34_22, hlds__instmap__STATE_VARIABLE_ModuleInfo_31_31, &hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32);
                        }
#line 1122 "instmap.m"
                        {
#line 1122 "instmap.m"
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__Delta12_55, hlds__instmap__Delta34_22, &hlds__instmap__Delta1234_23, hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32, &hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33);
                        }
#line 1124 "instmap.m"
                        {
#line 1124 "instmap.m"
                          hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "instmap.m"
                          MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34, 0) = ((MR_Box) (hlds__instmap__Delta1234_23));
#line 1124 "instmap.m"
                          MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24));
#line 1124 "instmap.m"
                        }
#line 1125 "instmap.m"
                        /* direct tailcall eliminated */
#line 1125 "instmap.m"
                        {
#line 1125 "instmap.m"
                          MR_Word hlds__instmap__Deltas__tmp_copy_12 = hlds__instmap__MoreDeltas_21;
#line 1125 "instmap.m"
                          MR_Word hlds__instmap__STATE_VARIABLE_MergedDeltas_0__tmp_copy_24 = hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34;
#line 1125 "instmap.m"
                          MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33;

#line 1125 "instmap.m"
                          hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_26;
#line 1125 "instmap.m"
                          hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24 = hlds__instmap__STATE_VARIABLE_MergedDeltas_0__tmp_copy_24;
#line 1125 "instmap.m"
                          hlds__instmap__Deltas_12 = hlds__instmap__Deltas__tmp_copy_12;
#line 1125 "instmap.m"
                        }
#line 1125 "instmap.m"
                        continue;
#line 1117 "instmap.m"
                      }
#line 1100 "instmap.m"
                  }
#line 1100 "instmap.m"
              }
#line 1100 "instmap.m"
          }
#line 1100 "instmap.m"
      }
#line 1100 "instmap.m"
      break;
#line 1100 "instmap.m"
    }
#line 1093 "instmap.m"
}

#line 1069 "instmap.m"
static void MR_CALL 
hlds__instmap__arm_instmap_project_context_2_p_0(
#line 1069 "instmap.m"
  MR_Word hlds__instmap__ArmErrorInfo_3,
#line 1069 "instmap.m"
  MR_Word * hlds__instmap__Context_4)
#line 1069 "instmap.m"
{
#line 1072 "instmap.m"
  {
#line 1072 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 1072 "instmap.m"
    MR_Word hlds__instmap___InstMap_5;

#line 1072 "instmap.m"
    *hlds__instmap__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmErrorInfo_3, (MR_Integer) 0)));
#line 1072 "instmap.m"
    hlds__instmap___InstMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmErrorInfo_3, (MR_Integer) 1)));
#line 1072 "instmap.m"
  }
#line 1069 "instmap.m"
}

#line 1023 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_var_insts_pass_8_p_0(
#line 1023 "instmap.m"
  MR_Word hlds__instmap__Insts_9,
#line 1023 "instmap.m"
  MR_Word hlds__instmap__MaybeType_10,
#line 1023 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_MergedInsts_0_23,
#line 1023 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_MergedInsts_24,
#line 1023 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25,
#line 1023 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_26,
#line 1023 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_Error_0_27,
#line 1023 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_Error_28)
#line 1023 "instmap.m"
{
#line 1029 "instmap.m"
  while (MR_TRUE)
#line 1029 "instmap.m"
    {
#line 1029 "instmap.m"
      /* tailcall optimized into a loop */
#line 1029 "instmap.m"
      {
#line 1029 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 1029 "instmap.m"
        if ((hlds__instmap__Insts_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1029 "instmap.m"
          {
#line 1029 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = hlds__instmap__STATE_VARIABLE_MergedInsts_0_23;
#line 1029 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
#line 1029 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_Error_28 = hlds__instmap__STATE_VARIABLE_Error_0_27;
#line 1029 "instmap.m"
          }
#line 1029 "instmap.m"
        else
#line 1029 "instmap.m"
          {
#line 1029 "instmap.m"
            MR_Word hlds__instmap__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Insts_9, (MR_Integer) 1)));
#line 1029 "instmap.m"
            MR_Word hlds__instmap__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Insts_9, (MR_Integer) 0)));

#line 1029 "instmap.m"
            if ((hlds__instmap__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1031 "instmap.m"
              {
#line 1032 "instmap.m"
                {
#line 1032 "instmap.m"
                  MR_Word base;
#line 1032 "instmap.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1032 "instmap.m"
                  *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = base;
#line 1032 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__V_69_69));
#line 1032 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedInsts_0_23));
#line 1032 "instmap.m"
                }
#line 1032 "instmap.m"
                *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
#line 1032 "instmap.m"
                *hlds__instmap__STATE_VARIABLE_Error_28 = hlds__instmap__STATE_VARIABLE_Error_0_27;
#line 1031 "instmap.m"
              }
#line 1029 "instmap.m"
            else
#line 1029 "instmap.m"
              {
#line 1029 "instmap.m"
                MR_Word hlds__instmap__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_68_68, (MR_Integer) 1)));
#line 1029 "instmap.m"
                MR_Word hlds__instmap__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_68_68, (MR_Integer) 0)));

#line 1029 "instmap.m"
                if ((hlds__instmap__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1039 "instmap.m"
                  {
#line 1039 "instmap.m"
                    MR_Word hlds__instmap__Inst12_16;
#line 1039 "instmap.m"
                    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50;

#line 1036 "instmap.m"
                    {
#line 1036 "instmap.m"
                      hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__V_69_69, hlds__instmap__V_71_71, hlds__instmap__MaybeType_10, &hlds__instmap__Inst12_16, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25, &hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50);
                    }
#line 1039 "instmap.m"
                    if (hlds__instmap__succeeded)
#line 1038 "instmap.m"
                      {
#line 1038 "instmap.m"
                        *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50;
#line 1038 "instmap.m"
                        {
#line 1038 "instmap.m"
                          MR_Word base;
#line 1038 "instmap.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1038 "instmap.m"
                          *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = base;
#line 1038 "instmap.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Inst12_16));
#line 1038 "instmap.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedInsts_0_23));
#line 1038 "instmap.m"
                        }
#line 1038 "instmap.m"
                        *hlds__instmap__STATE_VARIABLE_Error_28 = hlds__instmap__STATE_VARIABLE_Error_0_27;
#line 1038 "instmap.m"
                      }
#line 1039 "instmap.m"
                    else
#line 1040 "instmap.m"
                      {
#line 1040 "instmap.m"
                        *hlds__instmap__STATE_VARIABLE_Error_28 = (MR_Integer) 1;
#line 1040 "instmap.m"
                        *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
#line 1040 "instmap.m"
                        *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = hlds__instmap__STATE_VARIABLE_MergedInsts_0_23;
#line 1040 "instmap.m"
                      }
#line 1039 "instmap.m"
                  }
#line 1029 "instmap.m"
                else
#line 1029 "instmap.m"
                  {
#line 1029 "instmap.m"
                    MR_Word hlds__instmap__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_70_70, (MR_Integer) 1)));
#line 1029 "instmap.m"
                    MR_Word hlds__instmap__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_70_70, (MR_Integer) 0)));

#line 1029 "instmap.m"
                    if ((hlds__instmap__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1049 "instmap.m"
                      {
#line 1049 "instmap.m"
                        MR_Word hlds__instmap__Inst123_18;
#line 1049 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_44_44;
#line 1045 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_43_43;
#line 1045 "instmap.m"
                        MR_Word hlds__instmap__Inst12_57;

#line 1045 "instmap.m"
                        {
#line 1045 "instmap.m"
                          hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__V_69_69, hlds__instmap__V_71_71, hlds__instmap__MaybeType_10, &hlds__instmap__Inst12_57, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25, &hlds__instmap__STATE_VARIABLE_ModuleInfo_43_43);
                        }
#line 1045 "instmap.m"
                        if (hlds__instmap__succeeded)
#line 1046 "instmap.m"
                          {
#line 1046 "instmap.m"
                            hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__Inst12_57, hlds__instmap__V_73_73, hlds__instmap__MaybeType_10, &hlds__instmap__Inst123_18, hlds__instmap__STATE_VARIABLE_ModuleInfo_43_43, &hlds__instmap__STATE_VARIABLE_ModuleInfo_44_44);
                          }
#line 1049 "instmap.m"
                        if (hlds__instmap__succeeded)
#line 1048 "instmap.m"
                          {
#line 1048 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_44_44;
#line 1048 "instmap.m"
                            {
#line 1048 "instmap.m"
                              MR_Word base;
#line 1048 "instmap.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1048 "instmap.m"
                              *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = base;
#line 1048 "instmap.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Inst123_18));
#line 1048 "instmap.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedInsts_0_23));
#line 1048 "instmap.m"
                            }
#line 1048 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_Error_28 = hlds__instmap__STATE_VARIABLE_Error_0_27;
#line 1048 "instmap.m"
                          }
#line 1049 "instmap.m"
                        else
#line 1050 "instmap.m"
                          {
#line 1050 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_Error_28 = (MR_Integer) 1;
#line 1050 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
#line 1050 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = hlds__instmap__STATE_VARIABLE_MergedInsts_0_23;
#line 1050 "instmap.m"
                          }
#line 1049 "instmap.m"
                      }
#line 1029 "instmap.m"
                    else
#line 1053 "instmap.m"
                      {
#line 1053 "instmap.m"
                        MR_Word hlds__instmap__Inst4_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_72_72, (MR_Integer) 0)));
#line 1053 "instmap.m"
                        MR_Word hlds__instmap__MoreInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_72_72, (MR_Integer) 1)));
#line 1062 "instmap.m"
                        MR_Word hlds__instmap__Inst1234_22;
#line 1062 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_34_34;
#line 1055 "instmap.m"
                        MR_Word hlds__instmap__Inst34_21;
#line 1055 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32;
#line 1055 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33;
#line 1055 "instmap.m"
                        MR_Word hlds__instmap__Inst12_62;

#line 1055 "instmap.m"
                        {
#line 1055 "instmap.m"
                          hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__V_69_69, hlds__instmap__V_71_71, hlds__instmap__MaybeType_10, &hlds__instmap__Inst12_62, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25, &hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32);
                        }
#line 1055 "instmap.m"
                        if (hlds__instmap__succeeded)
#line 1055 "instmap.m"
                          {
#line 1056 "instmap.m"
                            {
#line 1056 "instmap.m"
                              hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__V_73_73, hlds__instmap__Inst4_19, hlds__instmap__MaybeType_10, &hlds__instmap__Inst34_21, hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32, &hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33);
                            }
#line 1055 "instmap.m"
                            if (hlds__instmap__succeeded)
#line 1057 "instmap.m"
                              {
#line 1057 "instmap.m"
                                hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__Inst12_62, hlds__instmap__Inst34_21, hlds__instmap__MaybeType_10, &hlds__instmap__Inst1234_22, hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33, &hlds__instmap__STATE_VARIABLE_ModuleInfo_34_34);
                              }
#line 1055 "instmap.m"
                          }
#line 1062 "instmap.m"
                        if (hlds__instmap__succeeded)
#line 1059 "instmap.m"
                          {
#line 1059 "instmap.m"
                            MR_Word hlds__instmap__STATE_VARIABLE_MergedInsts_35_35;

#line 1059 "instmap.m"
                            {
#line 1059 "instmap.m"
                              hlds__instmap__STATE_VARIABLE_MergedInsts_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "instmap.m"
                              MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_MergedInsts_35_35, 0) = ((MR_Box) (hlds__instmap__Inst1234_22));
#line 1059 "instmap.m"
                              MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_MergedInsts_35_35, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedInsts_0_23));
#line 1059 "instmap.m"
                            }
#line 1060 "instmap.m"
                            /* direct tailcall eliminated */
#line 1060 "instmap.m"
                            {
#line 1060 "instmap.m"
                              MR_Word hlds__instmap__Insts__tmp_copy_9 = hlds__instmap__MoreInsts_20;
#line 1060 "instmap.m"
                              MR_Word hlds__instmap__STATE_VARIABLE_MergedInsts_0__tmp_copy_23 = hlds__instmap__STATE_VARIABLE_MergedInsts_35_35;
#line 1060 "instmap.m"
                              MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_25 = hlds__instmap__STATE_VARIABLE_ModuleInfo_34_34;

#line 1060 "instmap.m"
                              hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_25;
#line 1060 "instmap.m"
                              hlds__instmap__STATE_VARIABLE_MergedInsts_0_23 = hlds__instmap__STATE_VARIABLE_MergedInsts_0__tmp_copy_23;
#line 1060 "instmap.m"
                              hlds__instmap__Insts_9 = hlds__instmap__Insts__tmp_copy_9;
#line 1060 "instmap.m"
                            }
#line 1060 "instmap.m"
                            continue;
#line 1059 "instmap.m"
                          }
#line 1062 "instmap.m"
                        else
#line 1063 "instmap.m"
                          {
#line 1063 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_Error_28 = (MR_Integer) 1;
#line 1063 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
#line 1063 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = hlds__instmap__STATE_VARIABLE_MergedInsts_0_23;
#line 1063 "instmap.m"
                          }
#line 1053 "instmap.m"
                      }
#line 1029 "instmap.m"
                  }
#line 1029 "instmap.m"
              }
#line 1029 "instmap.m"
          }
#line 1029 "instmap.m"
      }
#line 1029 "instmap.m"
      break;
#line 1029 "instmap.m"
    }
#line 1023 "instmap.m"
}

#line 999 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_var_insts_5_p_0(
#line 999 "instmap.m"
  MR_Word hlds__instmap__Insts_6,
#line 999 "instmap.m"
  MR_Word hlds__instmap__MaybeType_7,
#line 999 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_16,
#line 999 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_17,
#line 999 "instmap.m"
  MR_Word * hlds__instmap__MaybeMergedInst_9)
#line 999 "instmap.m"
{
#line 1002 "instmap.m"
  while (MR_TRUE)
#line 1002 "instmap.m"
    {
#line 1002 "instmap.m"
      /* tailcall optimized into a loop */
#line 1002 "instmap.m"
      {
#line 1002 "instmap.m"
        MR_bool hlds__instmap__succeeded;
#line 1002 "instmap.m"
        MR_Word hlds__instmap__MergedInsts_10;
#line 1002 "instmap.m"
        MR_Word hlds__instmap__Error_11;
#line 1002 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19;

#line 1003 "instmap.m"
        {
#line 1003 "instmap.m"
          hlds__instmap__merge_var_insts_pass_8_p_0(hlds__instmap__Insts_6, hlds__instmap__MaybeType_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__instmap__MergedInsts_10, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_16, &hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19, (MR_Integer) 0, &hlds__instmap__Error_11);
        }
#line 1008 "instmap.m"
        if ((hlds__instmap__Error_11 == (MR_Integer) 0))
#line 1009 "instmap.m"
          if ((hlds__instmap__MergedInsts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1011 "instmap.m"
            {
#line 1012 "instmap.m"
              *hlds__instmap__MaybeMergedInst_9 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__instmap_scalar_common_7[0]);
#line 1012 "instmap.m"
              *hlds__instmap__STATE_VARIABLE_ModuleInfo_17 = hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19;
#line 1011 "instmap.m"
            }
#line 1009 "instmap.m"
          else
#line 1013 "instmap.m"
            {
#line 1013 "instmap.m"
              MR_Word hlds__instmap__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MergedInsts_10, (MR_Integer) 1)));
#line 1013 "instmap.m"
              MR_Word hlds__instmap__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MergedInsts_10, (MR_Integer) 0)));

#line 1013 "instmap.m"
              if ((hlds__instmap__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1014 "instmap.m"
                {
#line 1015 "instmap.m"
                  {
#line 1015 "instmap.m"
                    MR_Word base;
#line 1015 "instmap.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "instmap.m"
                    *hlds__instmap__MaybeMergedInst_9 = base;
#line 1015 "instmap.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__V_26_26));
#line 1015 "instmap.m"
                  }
#line 1015 "instmap.m"
                  *hlds__instmap__STATE_VARIABLE_ModuleInfo_17 = hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19;
#line 1014 "instmap.m"
                }
#line 1013 "instmap.m"
              else
#line 1018 "instmap.m"
                {
#line 1018 "instmap.m"
                  /* direct tailcall eliminated */
#line 1018 "instmap.m"
                  {
#line 1018 "instmap.m"
                    MR_Word hlds__instmap__Insts__tmp_copy_6 = hlds__instmap__MergedInsts_10;
#line 1018 "instmap.m"
                    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_16 = hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19;

#line 1018 "instmap.m"
                    hlds__instmap__STATE_VARIABLE_ModuleInfo_0_16 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_16;
#line 1018 "instmap.m"
                    hlds__instmap__Insts_6 = hlds__instmap__Insts__tmp_copy_6;
#line 1018 "instmap.m"
                  }
#line 1018 "instmap.m"
                  continue;
#line 1018 "instmap.m"
                }
#line 1013 "instmap.m"
            }
#line 1008 "instmap.m"
        else
#line 1006 "instmap.m"
          {
#line 1007 "instmap.m"
            *hlds__instmap__MaybeMergedInst_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1007 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_17 = hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19;
#line 1006 "instmap.m"
          }
#line 1002 "instmap.m"
      }
#line 1002 "instmap.m"
      break;
#line 1002 "instmap.m"
    }
#line 999 "instmap.m"
}

#line 967 "instmap.m"
static void MR_CALL 
hlds__instmap__lookup_var_in_arm_instmap_3_p_0(
#line 967 "instmap.m"
  MR_Word hlds__instmap__Var_4,
#line 967 "instmap.m"
  MR_Word hlds__instmap__ArmInstMap_5,
#line 967 "instmap.m"
  MR_Word * hlds__instmap__Inst_6)
#line 967 "instmap.m"
{
#line 970 "instmap.m"
  {
#line 970 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 970 "instmap.m"
    MR_Word hlds__instmap__InstMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmInstMap_5, (MR_Integer) 1)));
#line 971 "instmap.m"
    MR_Word hlds__instmap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmInstMap_5, (MR_Integer) 0)));

#line 972 "instmap.m"
    {
#line 972 "instmap.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_8, hlds__instmap__Var_4, hlds__instmap__Inst_6);
#line 972 "instmap.m"
      return;
    }
#line 970 "instmap.m"
  }
#line 967 "instmap.m"
}

#line 958 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_2(
#line 958 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 958 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 958 "instmap.m"
  MR_Box * hlds__instmap__wrapper_arg_2)
#line 958 "instmap.m"
{
#line 958 "instmap.m"
  {
#line 958 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;
#line 958 "instmap.m"
    MR_Word hlds__instmap__conv1_Context_4;

#line 958 "instmap.m"
    {
#line 958 "instmap.m"
      hlds__instmap__arm_instmap_project_context_2_p_0(((MR_Word) hlds__instmap__wrapper_arg_1), &hlds__instmap__conv1_Context_4);
    }
#line 958 "instmap.m"
    *hlds__instmap__wrapper_arg_2 = ((MR_Box) (hlds__instmap__conv1_Context_4));
#line 958 "instmap.m"
  }
#line 958 "instmap.m"
}

#line 954 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_1(
#line 954 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 954 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 954 "instmap.m"
  MR_Box * hlds__instmap__wrapper_arg_2)
#line 954 "instmap.m"
{
#line 954 "instmap.m"
  {
#line 954 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;
#line 954 "instmap.m"
    MR_Word hlds__instmap__conv0_Inst_6;

#line 954 "instmap.m"
    {
#line 954 "instmap.m"
      hlds__instmap__lookup_var_in_arm_instmap_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) hlds__instmap__wrapper_arg_1), &hlds__instmap__conv0_Inst_6);
    }
#line 954 "instmap.m"
    *hlds__instmap__wrapper_arg_2 = ((MR_Box) (hlds__instmap__conv0_Inst_6));
#line 954 "instmap.m"
  }
#line 954 "instmap.m"
}

#line 944 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0(
#line 944 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 944 "instmap.m"
  MR_Word hlds__instmap__ArmInstMaps_2,
#line 944 "instmap.m"
  MR_Word hlds__instmap__VarTypes_3,
#line 944 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 944 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__5_5,
#line 944 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6,
#line 944 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_7,
#line 944 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__8_8)
#line 944 "instmap.m"
{
#line 948 "instmap.m"
  {
#line 948 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 948 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 948 "instmap.m"
      {
#line 948 "instmap.m"
        *hlds__instmap__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 948 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6;
#line 948 "instmap.m"
        *hlds__instmap__HeadVar__5_5 = hlds__instmap__HeadVar__4_4;
#line 948 "instmap.m"
      }
#line 948 "instmap.m"
    else
#line 950 "instmap.m"
      {
#line 950 "instmap.m"
        MR_Word hlds__instmap__TypeCtorInfo_49_49;
#line 950 "instmap.m"
        MR_Word hlds__instmap__TypeCtorInfo_50_50;
#line 950 "instmap.m"
        MR_Word hlds__instmap__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 950 "instmap.m"
        MR_Word hlds__instmap__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 950 "instmap.m"
        MR_Word hlds__instmap__VarType_24;
#line 950 "instmap.m"
        MR_Word hlds__instmap__InstList_25;
#line 950 "instmap.m"
        MR_Word hlds__instmap__MaybeInst_26;
#line 950 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_35_35;
#line 950 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_36_36;
#line 950 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ErrorList_37_37;
#line 950 "instmap.m"
        MR_Word hlds__instmap__V_38_38;
#line 950 "instmap.m"
        MR_Word hlds__instmap__V_39_39;

#line 951 "instmap.m"
        {
#line 951 "instmap.m"
          hlds__instmap__merge_insts_of_vars_8_p_0(hlds__instmap__Vars_18, hlds__instmap__ArmInstMaps_2, hlds__instmap__VarTypes_3, hlds__instmap__HeadVar__4_4, &hlds__instmap__STATE_VARIABLE_InstMapping_35_35, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6, &hlds__instmap__STATE_VARIABLE_ModuleInfo_36_36, &hlds__instmap__STATE_VARIABLE_ErrorList_37_37);
        }
#line 953 "instmap.m"
        {
#line 953 "instmap.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(hlds__instmap__VarTypes_3, hlds__instmap__Var_17, &hlds__instmap__VarType_24);
        }
#line 954 "instmap.m"
        {
#line 954 "instmap.m"
          hlds__instmap__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 954 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_38_38, 0) = ((MR_Box) (&hlds__instmap_scalar_common_6[0]));
#line 954 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_38_38, 1) = ((MR_Box) (hlds__instmap__merge_insts_of_vars_8_p_0_1));
#line 954 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 954 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_38_38, 3) = ((MR_Box) (hlds__instmap__Var_17));
#line 954 "instmap.m"
        }
#line 3884 "hlds.instmap.c"
        hlds__instmap__TypeCtorInfo_49_49 = (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_arm_instmap_0;
#line 3886 "hlds.instmap.c"
        hlds__instmap__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 954 "instmap.m"
        {
#line 954 "instmap.m"
          mercury__list__map_3_p_0(hlds__instmap__TypeCtorInfo_49_49, hlds__instmap__TypeCtorInfo_50_50, hlds__instmap__V_38_38, hlds__instmap__ArmInstMaps_2, &hlds__instmap__InstList_25);
        }
#line 955 "instmap.m"
        {
#line 955 "instmap.m"
          hlds__instmap__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 955 "instmap.m"
          MR_hl_field(MR_mktag(1), hlds__instmap__V_39_39, 0) = ((MR_Box) (hlds__instmap__VarType_24));
#line 955 "instmap.m"
        }
#line 955 "instmap.m"
        {
#line 955 "instmap.m"
          hlds__instmap__merge_var_insts_5_p_0(hlds__instmap__InstList_25, hlds__instmap__V_39_39, hlds__instmap__STATE_VARIABLE_ModuleInfo_36_36, hlds__instmap__STATE_VARIABLE_ModuleInfo_7, &hlds__instmap__MaybeInst_26);
        }
#line 962 "instmap.m"
        if ((hlds__instmap__MaybeInst_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "instmap.m"
          {
#line 957 "instmap.m"
            MR_Word hlds__instmap__TypeCtorInfo_53_53 = (MR_Word) &mercury__term__term__type_ctor_info_context_0;
#line 957 "instmap.m"
            MR_Word hlds__instmap__Contexts_27;
#line 957 "instmap.m"
            MR_Word hlds__instmap__ContextsInsts_28;
#line 957 "instmap.m"
            MR_Word hlds__instmap__V_44_44;

#line 958 "instmap.m"
            {
#line 958 "instmap.m"
              mercury__list__map_3_p_0(hlds__instmap__TypeCtorInfo_49_49, hlds__instmap__TypeCtorInfo_53_53, (MR_Word) &hlds__instmap_scalar_common_2[4], hlds__instmap__ArmInstMaps_2, &hlds__instmap__Contexts_27);
            }
#line 959 "instmap.m"
            {
#line 959 "instmap.m"
              mercury__assoc_list__from_corresponding_lists_3_p_0(hlds__instmap__TypeCtorInfo_53_53, hlds__instmap__TypeCtorInfo_50_50, hlds__instmap__Contexts_27, hlds__instmap__InstList_25, &hlds__instmap__ContextsInsts_28);
            }
#line 960 "instmap.m"
            {
#line 960 "instmap.m"
              hlds__instmap__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 960 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_44_44, 0) = ((MR_Box) (hlds__instmap__Var_17));
#line 960 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_44_44, 1) = ((MR_Box) (hlds__instmap__ContextsInsts_28));
#line 960 "instmap.m"
            }
#line 960 "instmap.m"
            {
#line 960 "instmap.m"
              MR_Word base;
#line 960 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 960 "instmap.m"
              *hlds__instmap__HeadVar__8_8 = base;
#line 960 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__V_44_44));
#line 960 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_ErrorList_37_37));
#line 960 "instmap.m"
            }
#line 961 "instmap.m"
            {
#line 961 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], hlds__instmap__TypeCtorInfo_50_50, ((MR_Box) (hlds__instmap__Var_17)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), hlds__instmap__STATE_VARIABLE_InstMapping_35_35, hlds__instmap__HeadVar__5_5);
#line 961 "instmap.m"
              return;
            }
#line 957 "instmap.m"
          }
#line 962 "instmap.m"
        else
#line 963 "instmap.m"
          {
#line 963 "instmap.m"
            MR_Word hlds__instmap__Inst_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MaybeInst_26, (MR_Integer) 0)));

#line 964 "instmap.m"
            {
#line 964 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], hlds__instmap__TypeCtorInfo_50_50, ((MR_Box) (hlds__instmap__Var_17)), ((MR_Box) (hlds__instmap__Inst_29)), hlds__instmap__STATE_VARIABLE_InstMapping_35_35, hlds__instmap__HeadVar__5_5);
            }
#line 964 "instmap.m"
            *hlds__instmap__HeadVar__8_8 = hlds__instmap__STATE_VARIABLE_ErrorList_37_37;
#line 963 "instmap.m"
          }
#line 950 "instmap.m"
      }
#line 948 "instmap.m"
  }
#line 944 "instmap.m"
}

#line 910 "instmap.m"
static void MR_CALL 
hlds__instmap__get_reachable_instmaps_2_p_0(
#line 910 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 910 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__2_2)
#line 910 "instmap.m"
{
#line 913 "instmap.m"
  while (MR_TRUE)
#line 913 "instmap.m"
    {
#line 913 "instmap.m"
      /* tailcall optimized into a loop */
#line 913 "instmap.m"
      {
#line 913 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 913 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 913 "instmap.m"
          *hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 913 "instmap.m"
        else
#line 914 "instmap.m"
          {
#line 914 "instmap.m"
            MR_Word hlds__instmap__ArmInstMap_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 914 "instmap.m"
            MR_Word hlds__instmap__ArmInstMaps_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 914 "instmap.m"
            MR_Word hlds__instmap__InstMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmInstMap_3, (MR_Integer) 1)));
#line 915 "instmap.m"
            MR_Word hlds__instmap__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmInstMap_3, (MR_Integer) 0)));

#line 920 "instmap.m"
            if ((hlds__instmap__InstMap_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 922 "instmap.m"
              {
#line 922 "instmap.m"
                /* direct tailcall eliminated */
#line 922 "instmap.m"
                {
#line 922 "instmap.m"
                  MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__ArmInstMaps_4;

#line 922 "instmap.m"
                  hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 922 "instmap.m"
                }
#line 922 "instmap.m"
                continue;
#line 922 "instmap.m"
              }
#line 920 "instmap.m"
            else
#line 917 "instmap.m"
              {
#line 917 "instmap.m"
                MR_Word hlds__instmap__InstMapping_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap_7, (MR_Integer) 0)));
#line 917 "instmap.m"
                MR_Word hlds__instmap__ReachablesTail_9;

#line 918 "instmap.m"
                {
#line 918 "instmap.m"
                  hlds__instmap__get_reachable_instmaps_2_p_0(hlds__instmap__ArmInstMaps_4, &hlds__instmap__ReachablesTail_9);
                }
#line 919 "instmap.m"
                {
#line 919 "instmap.m"
                  MR_Word base;
#line 919 "instmap.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 919 "instmap.m"
                  *hlds__instmap__HeadVar__2_2 = base;
#line 919 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_8));
#line 919 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__ReachablesTail_9));
#line 919 "instmap.m"
                }
#line 917 "instmap.m"
              }
#line 914 "instmap.m"
          }
#line 913 "instmap.m"
      }
#line 913 "instmap.m"
      break;
#line 913 "instmap.m"
    }
#line 910 "instmap.m"
}

#line 766 "instmap.m"
static void MR_CALL 
hlds__instmap__bind_inst_to_functors_others_6_p_0(
#line 766 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 766 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 766 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 766 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4,
#line 766 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5,
#line 766 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_6)
#line 766 "instmap.m"
{
#line 770 "instmap.m"
  {
#line 770 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 770 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 770 "instmap.m"
      {
#line 770 "instmap.m"
        *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 770 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_6 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5;
#line 770 "instmap.m"
      }
#line 770 "instmap.m"
    else
#line 772 "instmap.m"
      {
#line 772 "instmap.m"
        MR_Word hlds__instmap__ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 772 "instmap.m"
        MR_Word hlds__instmap__ConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 772 "instmap.m"
        MR_Word hlds__instmap__FinalInst_16;
#line 772 "instmap.m"
        MR_Word hlds__instmap__FinalInsts_17;
#line 772 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21;
#line 772 "instmap.m"
        MR_Integer hlds__instmap__Arity_31;
#line 772 "instmap.m"
        MR_Word hlds__instmap__ArgLives_32;
#line 772 "instmap.m"
        MR_Word hlds__instmap__ArgInsts_33;
#line 739 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_39;
#line 739 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_40;
#line 735 "instmap.m"
        MR_Word hlds__instmap___Det_34;

#line 731 "instmap.m"
        {
#line 731 "instmap.m"
          hlds__instmap__Arity_31 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5, hlds__instmap__HeadVar__1_1, hlds__instmap__ConsId_13);
        }
#line 732 "instmap.m"
        {
#line 732 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_31, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_32);
        }
#line 733 "instmap.m"
        {
#line 733 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_31, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_33);
        }
#line 735 "instmap.m"
        {
#line 735 "instmap.m"
          hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__HeadVar__3_3, hlds__instmap__ConsId_13, hlds__instmap__ArgInsts_33, hlds__instmap__ArgLives_32, (MR_Integer) 0, hlds__instmap__HeadVar__1_1, &hlds__instmap__STATE_VARIABLE_Inst_23_39, &hlds__instmap___Det_34, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_40);
        }
#line 739 "instmap.m"
        if (hlds__instmap__succeeded)
#line 738 "instmap.m"
          {
#line 738 "instmap.m"
            hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_40;
#line 738 "instmap.m"
            hlds__instmap__FinalInst_16 = hlds__instmap__STATE_VARIABLE_Inst_23_39;
#line 738 "instmap.m"
          }
#line 739 "instmap.m"
        else
#line 740 "instmap.m"
          {
#line 740 "instmap.m"
            {
#line 740 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
#line 740 "instmap.m"
              return;
            }
#line 740 "instmap.m"
          }
#line 774 "instmap.m"
        {
#line 774 "instmap.m"
          hlds__instmap__bind_inst_to_functors_others_6_p_0(hlds__instmap__HeadVar__1_1, hlds__instmap__ConsIds_14, hlds__instmap__HeadVar__3_3, &hlds__instmap__FinalInsts_17, hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21, hlds__instmap__STATE_VARIABLE_ModuleInfo_6);
        }
#line 772 "instmap.m"
        {
#line 772 "instmap.m"
          MR_Word base;
#line 772 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = base;
#line 772 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__FinalInst_16));
#line 772 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__FinalInsts_17));
#line 772 "instmap.m"
        }
#line 772 "instmap.m"
      }
#line 770 "instmap.m"
  }
#line 766 "instmap.m"
}

#line 620 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_same_4_p_0(
#line 620 "instmap.m"
  MR_Word hlds__instmap__Inst_1,
#line 620 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 620 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_3,
#line 620 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_4)
#line 620 "instmap.m"
{
#line 623 "instmap.m"
  while (MR_TRUE)
#line 623 "instmap.m"
    {
#line 623 "instmap.m"
      /* tailcall optimized into a loop */
#line 623 "instmap.m"
      {
#line 623 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 623 "instmap.m"
        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 623 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMapping_4 = hlds__instmap__STATE_VARIABLE_InstMapping_0_3;
#line 623 "instmap.m"
        else
#line 624 "instmap.m"
          {
#line 624 "instmap.m"
            MR_Word hlds__instmap__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 624 "instmap.m"
            MR_Word hlds__instmap__Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 624 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_15_15;

#line 625 "instmap.m"
            {
#line 625 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_10)), ((MR_Box) (hlds__instmap__Inst_1)), hlds__instmap__STATE_VARIABLE_InstMapping_0_3, &hlds__instmap__STATE_VARIABLE_InstMapping_15_15);
            }
#line 626 "instmap.m"
            /* direct tailcall eliminated */
#line 626 "instmap.m"
            {
#line 626 "instmap.m"
              MR_Word hlds__instmap__HeadVar__2__tmp_copy_2 = hlds__instmap__Vars_11;
#line 626 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_3 = hlds__instmap__STATE_VARIABLE_InstMapping_15_15;

#line 626 "instmap.m"
              hlds__instmap__STATE_VARIABLE_InstMapping_0_3 = hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_3;
#line 626 "instmap.m"
              hlds__instmap__HeadVar__2_2 = hlds__instmap__HeadVar__2__tmp_copy_2;
#line 626 "instmap.m"
            }
#line 626 "instmap.m"
            continue;
#line 624 "instmap.m"
          }
#line 623 "instmap.m"
      }
#line 623 "instmap.m"
      break;
#line 623 "instmap.m"
    }
#line 620 "instmap.m"
}

#line 600 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_2(
#line 600 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 600 "instmap.m"
{
#line 600 "instmap.m"
  {
#line 600 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 600 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 600 "instmap.m"
    {
#line 600 "instmap.m"
      return hlds__instmap__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))));
    }
#line 600 "instmap.m"
    return hlds__instmap__succeeded;
#line 600 "instmap.m"
  }
#line 600 "instmap.m"
}

#line 600 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_1(
#line 600 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 600 "instmap.m"
{
#line 600 "instmap.m"
  {
#line 600 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 600 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 600 "instmap.m"
    {
#line 600 "instmap.m"
      return hlds__instmap__succeeded = hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__600__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))));
    }
#line 600 "instmap.m"
    return hlds__instmap__succeeded;
#line 600 "instmap.m"
  }
#line 600 "instmap.m"
}

#line 593 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0(
#line 593 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 593 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 593 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 593 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 593 "instmap.m"
{
#line 597 "instmap.m"
  while (MR_TRUE)
#line 597 "instmap.m"
    {
#line 597 "instmap.m"
      /* tailcall optimized into a loop */
#line 597 "instmap.m"
      {
#line 597 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 597 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 597 "instmap.m"
          if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 597 "instmap.m"
            *hlds__instmap__HeadVar__4_4 = hlds__instmap__HeadVar__3_3;
#line 597 "instmap.m"
          else
#line 605 "instmap.m"
            {
#line 606 "instmap.m"
              {
#line 606 "instmap.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmapping_set_vars_corresponding\'/4", (MR_String) "length mismatch (2)");
#line 606 "instmap.m"
                return;
              }
#line 605 "instmap.m"
            }
#line 597 "instmap.m"
        else
#line 597 "instmap.m"
          {
#line 597 "instmap.m"
            MR_Word hlds__instmap__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 597 "instmap.m"
            MR_Word hlds__instmap__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 597 "instmap.m"
            if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "instmap.m"
              {
#line 604 "instmap.m"
                {
#line 604 "instmap.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmapping_set_vars_corresponding\'/4", (MR_String) "length mismatch (1)");
#line 604 "instmap.m"
                  return;
                }
#line 603 "instmap.m"
              }
#line 597 "instmap.m"
            else
#line 599 "instmap.m"
              {
#line 599 "instmap.m"
                MR_Word hlds__instmap__Inst_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 599 "instmap.m"
                MR_Word hlds__instmap__Insts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 599 "instmap.m"
                MR_Word hlds__instmap__V_15_15;
#line 599 "instmap.m"
                MR_Word hlds__instmap__V_19_19;
#line 599 "instmap.m"
                MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_21_21;

#line 600 "instmap.m"
                {
#line 600 "instmap.m"
                  hlds__instmap__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 600 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_19_19, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
#line 600 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_19_19, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_corresponding_4_p_0_1));
#line 600 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 600 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_19_19, 3) = ((MR_Box) (hlds__instmap__Inst_10));
#line 600 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_19_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 600 "instmap.m"
                }
#line 600 "instmap.m"
                {
#line 600 "instmap.m"
                  hlds__instmap__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 600 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
#line 600 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_corresponding_4_p_0_2));
#line 600 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 600 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 3) = ((MR_Box) (hlds__instmap__V_19_19));
#line 600 "instmap.m"
                }
#line 600 "instmap.m"
                {
#line 600 "instmap.m"
                  mercury__require__expect_4_p_0(hlds__instmap__V_15_15, (MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmapping_set_vars_corresponding\'/4", (MR_String) "not_reached");
                }
#line 601 "instmap.m"
                {
#line 601 "instmap.m"
                  mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__V_43_43)), ((MR_Box) (hlds__instmap__Inst_10)), hlds__instmap__HeadVar__3_3, &hlds__instmap__STATE_VARIABLE_InstMapping_21_21);
                }
#line 602 "instmap.m"
                /* direct tailcall eliminated */
#line 602 "instmap.m"
                {
#line 602 "instmap.m"
                  MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__V_42_42;
#line 602 "instmap.m"
                  MR_Word hlds__instmap__HeadVar__2__tmp_copy_2 = hlds__instmap__Insts_11;
#line 602 "instmap.m"
                  MR_Word hlds__instmap__HeadVar__3__tmp_copy_3 = hlds__instmap__STATE_VARIABLE_InstMapping_21_21;

#line 602 "instmap.m"
                  hlds__instmap__HeadVar__3_3 = hlds__instmap__HeadVar__3__tmp_copy_3;
#line 602 "instmap.m"
                  hlds__instmap__HeadVar__2_2 = hlds__instmap__HeadVar__2__tmp_copy_2;
#line 602 "instmap.m"
                  hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 602 "instmap.m"
                }
#line 602 "instmap.m"
                continue;
#line 599 "instmap.m"
              }
#line 597 "instmap.m"
          }
#line 597 "instmap.m"
      }
#line 597 "instmap.m"
      break;
#line 597 "instmap.m"
    }
#line 593 "instmap.m"
}

#line 578 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_2(
#line 578 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 578 "instmap.m"
{
#line 578 "instmap.m"
  {
#line 578 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 578 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 578 "instmap.m"
    {
#line 578 "instmap.m"
      return hlds__instmap__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))));
    }
#line 578 "instmap.m"
    return hlds__instmap__succeeded;
#line 578 "instmap.m"
  }
#line 578 "instmap.m"
}

#line 578 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_1(
#line 578 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 578 "instmap.m"
{
#line 578 "instmap.m"
  {
#line 578 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 578 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 578 "instmap.m"
    {
#line 578 "instmap.m"
      return hlds__instmap__succeeded = hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__578__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))));
    }
#line 578 "instmap.m"
    return hlds__instmap__succeeded;
#line 578 "instmap.m"
  }
#line 578 "instmap.m"
}

#line 573 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0(
#line 573 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 573 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_2,
#line 573 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_3)
#line 573 "instmap.m"
{
#line 576 "instmap.m"
  while (MR_TRUE)
#line 576 "instmap.m"
    {
#line 576 "instmap.m"
      /* tailcall optimized into a loop */
#line 576 "instmap.m"
      {
#line 576 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 576 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 576 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMapping_3 = hlds__instmap__STATE_VARIABLE_InstMapping_0_2;
#line 576 "instmap.m"
        else
#line 577 "instmap.m"
          {
#line 577 "instmap.m"
            MR_Word hlds__instmap__Var_7;
#line 577 "instmap.m"
            MR_Word hlds__instmap__Inst_8;
#line 577 "instmap.m"
            MR_Word hlds__instmap__VarsInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 577 "instmap.m"
            MR_Word hlds__instmap__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 577 "instmap.m"
            MR_Word hlds__instmap__V_14_14;
#line 577 "instmap.m"
            MR_Word hlds__instmap__V_18_18;
#line 577 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_20_20;

#line 577 "instmap.m"
            hlds__instmap__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_13_13, (MR_Integer) 0)));
#line 577 "instmap.m"
            hlds__instmap__Inst_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_13_13, (MR_Integer) 1)));
#line 578 "instmap.m"
            {
#line 578 "instmap.m"
              hlds__instmap__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 578 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_18_18, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
#line 578 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_18_18, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_3_p_0_1));
#line 578 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 578 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_18_18, 3) = ((MR_Box) (hlds__instmap__Inst_8));
#line 578 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_18_18, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 578 "instmap.m"
            }
#line 578 "instmap.m"
            {
#line 578 "instmap.m"
              hlds__instmap__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 578 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_14_14, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
#line 578 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_14_14, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_3_p_0_2));
#line 578 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 578 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_14_14, 3) = ((MR_Box) (hlds__instmap__V_18_18));
#line 578 "instmap.m"
            }
#line 578 "instmap.m"
            {
#line 578 "instmap.m"
              mercury__require__expect_4_p_0(hlds__instmap__V_14_14, (MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmapping_set_vars\'/3", (MR_String) "not_reached");
            }
#line 579 "instmap.m"
            {
#line 579 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_7)), ((MR_Box) (hlds__instmap__Inst_8)), hlds__instmap__STATE_VARIABLE_InstMapping_0_2, &hlds__instmap__STATE_VARIABLE_InstMapping_20_20);
            }
#line 580 "instmap.m"
            /* direct tailcall eliminated */
#line 580 "instmap.m"
            {
#line 580 "instmap.m"
              MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__VarsInsts_9;
#line 580 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_2 = hlds__instmap__STATE_VARIABLE_InstMapping_20_20;

#line 580 "instmap.m"
              hlds__instmap__STATE_VARIABLE_InstMapping_0_2 = hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_2;
#line 580 "instmap.m"
              hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 580 "instmap.m"
            }
#line 580 "instmap.m"
            continue;
#line 577 "instmap.m"
          }
#line 576 "instmap.m"
      }
#line 576 "instmap.m"
      break;
#line 576 "instmap.m"
    }
#line 573 "instmap.m"
}

#line 506 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_changed_vars_2_6_p_0(
#line 506 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 506 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 506 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 506 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 506 "instmap.m"
  MR_Word hlds__instmap__HeadVar__5_5,
#line 506 "instmap.m"
  MR_Word * hlds__instmap__ChangedVars_6)
#line 506 "instmap.m"
{
#line 510 "instmap.m"
  {
#line 510 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 510 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 510 "instmap.m"
      {
#line 511 "instmap.m"
        {
#line 511 "instmap.m"
          parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__ChangedVars_6);
#line 511 "instmap.m"
          return;
        }
#line 510 "instmap.m"
      }
#line 510 "instmap.m"
    else
#line 513 "instmap.m"
      {
#line 513 "instmap.m"
        MR_Word hlds__instmap__VarB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 513 "instmap.m"
        MR_Word hlds__instmap__VarBs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 513 "instmap.m"
        MR_Word hlds__instmap__ChangedVars0_19;
#line 513 "instmap.m"
        MR_Word hlds__instmap__InitialInst_20;
#line 513 "instmap.m"
        MR_Word hlds__instmap__FinalInst_21;
#line 513 "instmap.m"
        MR_Word hlds__instmap__Type_22;

#line 514 "instmap.m"
        {
#line 514 "instmap.m"
          hlds__instmap__instmap_changed_vars_2_6_p_0(hlds__instmap__VarBs_13, hlds__instmap__HeadVar__2_2, hlds__instmap__HeadVar__3_3, hlds__instmap__HeadVar__4_4, hlds__instmap__HeadVar__5_5, &hlds__instmap__ChangedVars0_19);
        }
#line 517 "instmap.m"
        {
#line 517 "instmap.m"
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__HeadVar__2_2, hlds__instmap__VarB_12, &hlds__instmap__InitialInst_20);
        }
#line 518 "instmap.m"
        {
#line 518 "instmap.m"
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__HeadVar__3_3, hlds__instmap__VarB_12, &hlds__instmap__FinalInst_21);
        }
#line 519 "instmap.m"
        {
#line 519 "instmap.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(hlds__instmap__HeadVar__4_4, hlds__instmap__VarB_12, &hlds__instmap__Type_22);
        }
#line 521 "instmap.m"
        {
#line 521 "instmap.m"
          hlds__instmap__succeeded = check_hlds__inst_match__inst_matches_final_typed_4_p_0(hlds__instmap__InitialInst_20, hlds__instmap__FinalInst_21, hlds__instmap__Type_22, hlds__instmap__HeadVar__5_5);
        }
#line 523 "instmap.m"
        if (hlds__instmap__succeeded)
#line 522 "instmap.m"
          *hlds__instmap__ChangedVars_6 = hlds__instmap__ChangedVars0_19;
#line 523 "instmap.m"
        else
#line 524 "instmap.m"
          {
#line 524 "instmap.m"
            {
#line 524 "instmap.m"
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__VarB_12, hlds__instmap__ChangedVars0_19, hlds__instmap__ChangedVars_6);
#line 524 "instmap.m"
              return;
            }
#line 524 "instmap.m"
          }
#line 513 "instmap.m"
      }
#line 510 "instmap.m"
  }
#line 506 "instmap.m"
}

#line 483 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_bound_vars_2_5_p_0(
#line 483 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 483 "instmap.m"
  MR_Word hlds__instmap__Var_7,
#line 483 "instmap.m"
  MR_Word hlds__instmap__Inst_8,
#line 483 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_BoundVars_0_10,
#line 483 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_BoundVars_11)
#line 483 "instmap.m"
{
#line 489 "instmap.m"
  {
#line 489 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 487 "instmap.m"
    {
#line 487 "instmap.m"
      hlds__instmap__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(hlds__instmap__ModuleInfo_6, hlds__instmap__Inst_8);
    }
#line 489 "instmap.m"
    if (hlds__instmap__succeeded)
#line 488 "instmap.m"
      {
#line 488 "instmap.m"
        {
#line 488 "instmap.m"
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Var_7, hlds__instmap__STATE_VARIABLE_BoundVars_0_10, hlds__instmap__STATE_VARIABLE_BoundVars_11);
#line 488 "instmap.m"
          return;
        }
#line 488 "instmap.m"
      }
#line 489 "instmap.m"
    else
#line 488 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_BoundVars_11 = hlds__instmap__STATE_VARIABLE_BoundVars_0_10;
#line 489 "instmap.m"
  }
#line 483 "instmap.m"
}

#line 464 "instmap.m"
static MR_Word MR_CALL 
hlds__instmap__pair_with_ground_1_f_0(
#line 464 "instmap.m"
  MR_Word hlds__instmap__Var_3)
#line 464 "instmap.m"
{
#line 466 "instmap.m"
  {
#line 466 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 466 "instmap.m"
    MR_Word hlds__instmap__HeadVar__2_2;

#line 466 "instmap.m"
    {
#line 466 "instmap.m"
      hlds__instmap__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 466 "instmap.m"
      MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, 0) = ((MR_Box) (hlds__instmap__Var_3));
#line 466 "instmap.m"
      MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__instmap_scalar_common_2[2])));
#line 466 "instmap.m"
    }
#line 466 "instmap.m"
    return hlds__instmap__HeadVar__2_2;
#line 466 "instmap.m"
  }
#line 464 "instmap.m"
}

#line 431 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_delta_from_mode_list_2_5_p_0(
#line 431 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 431 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 431 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_3,
#line 431 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4,
#line 431 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapDelta_5)
#line 431 "instmap.m"
{
#line 434 "instmap.m"
  while (MR_TRUE)
#line 434 "instmap.m"
    {
#line 434 "instmap.m"
      /* tailcall optimized into a loop */
#line 434 "instmap.m"
      {
#line 434 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 434 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 434 "instmap.m"
          if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 434 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_InstMapDelta_5 = hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4;
#line 434 "instmap.m"
          else
#line 435 "instmap.m"
            {
#line 436 "instmap.m"
              {
#line 436 "instmap.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_delta_from_mode_list_2\'/5", (MR_String) "length mismatch");
#line 436 "instmap.m"
                return;
              }
#line 435 "instmap.m"
            }
#line 434 "instmap.m"
        else
#line 434 "instmap.m"
          {
#line 434 "instmap.m"
            MR_Word hlds__instmap__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 434 "instmap.m"
            MR_Word hlds__instmap__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 434 "instmap.m"
            if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
#line 434 "instmap.m"
            else
#line 440 "instmap.m"
              {
#line 440 "instmap.m"
                MR_Word hlds__instmap__Mode_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 440 "instmap.m"
                MR_Word hlds__instmap__Modes_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 440 "instmap.m"
                MR_Word hlds__instmap__Inst1_34;
#line 440 "instmap.m"
                MR_Word hlds__instmap__Inst2_35;

#line 441 "instmap.m"
                {
#line 441 "instmap.m"
                  check_hlds__mode_util__mode_get_insts_4_p_0(hlds__instmap__ModuleInfo_3, hlds__instmap__Mode_30, &hlds__instmap__Inst1_34, &hlds__instmap__Inst2_35);
                }
#line 442 "instmap.m"
                {
#line 442 "instmap.m"
                  hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst1_34, hlds__instmap__Inst2_35);
                }
#line 444 "instmap.m"
                if (hlds__instmap__succeeded)
#line 443 "instmap.m"
                  {
#line 443 "instmap.m"
                    /* direct tailcall eliminated */
#line 443 "instmap.m"
                    {
#line 443 "instmap.m"
                      MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__V_41_41;
#line 443 "instmap.m"
                      MR_Word hlds__instmap__HeadVar__2__tmp_copy_2 = hlds__instmap__Modes_31;

#line 443 "instmap.m"
                      hlds__instmap__HeadVar__2_2 = hlds__instmap__HeadVar__2__tmp_copy_2;
#line 443 "instmap.m"
                      hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 443 "instmap.m"
                    }
#line 443 "instmap.m"
                    continue;
#line 443 "instmap.m"
                  }
#line 444 "instmap.m"
                else
#line 445 "instmap.m"
                  {
#line 445 "instmap.m"
                    MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_39_39;

#line 445 "instmap.m"
                    {
#line 445 "instmap.m"
                      hlds__instmap__instmap_delta_set_var_4_p_0(hlds__instmap__V_42_42, hlds__instmap__Inst2_35, hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4, &hlds__instmap__STATE_VARIABLE_InstMapDelta_39_39);
                    }
#line 446 "instmap.m"
                    /* direct tailcall eliminated */
#line 446 "instmap.m"
                    {
#line 446 "instmap.m"
                      MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__V_41_41;
#line 446 "instmap.m"
                      MR_Word hlds__instmap__HeadVar__2__tmp_copy_2 = hlds__instmap__Modes_31;
#line 446 "instmap.m"
                      MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_0__tmp_copy_4 = hlds__instmap__STATE_VARIABLE_InstMapDelta_39_39;

#line 446 "instmap.m"
                      hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4 = hlds__instmap__STATE_VARIABLE_InstMapDelta_0__tmp_copy_4;
#line 446 "instmap.m"
                      hlds__instmap__HeadVar__2_2 = hlds__instmap__HeadVar__2__tmp_copy_2;
#line 446 "instmap.m"
                      hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 446 "instmap.m"
                    }
#line 446 "instmap.m"
                    continue;
#line 445 "instmap.m"
                  }
#line 440 "instmap.m"
              }
#line 434 "instmap.m"
          }
#line 434 "instmap.m"
      }
#line 434 "instmap.m"
      break;
#line 434 "instmap.m"
    }
#line 431 "instmap.m"
}

#line 353 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__var_is_bound_in_instmap_delta_4_p_0(
#line 353 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_5,
#line 353 "instmap.m"
  MR_Word hlds__instmap__InstMap_6,
#line 353 "instmap.m"
  MR_Word hlds__instmap__InstMapDelta_7,
#line 353 "instmap.m"
  MR_Word hlds__instmap__Var_8)
#line 353 "instmap.m"
{
#line 1383 "instmap.m"
  {
#line 1383 "instmap.m"
    MR_bool hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__InstMap_6)) == (MR_mktag((MR_Integer) 1)));
#line 1383 "instmap.m"
    MR_Word hlds__instmap__TypeInfo_8_17;
#line 1383 "instmap.m"
    MR_Word hlds__instmap__TypeCtorInfo_9_18;
#line 1383 "instmap.m"
    MR_Word hlds__instmap__OldVarInst_9;
#line 1383 "instmap.m"
    MR_Word hlds__instmap__VarInst_10;
#line 1383 "instmap.m"
    MR_Word hlds__instmap__InstMap_14;
#line 1383 "instmap.m"
    MR_Word hlds__instmap__InstMap_20;
#line 407 "instmap.m"
    MR_Word hlds__instmap__V_12_12;
#line 539 "instmap.m"
    MR_Word hlds__instmap__VarInst_26;
#line 537 "instmap.m"
    MR_Word hlds__instmap__TypeInfo_8_27;
#line 537 "instmap.m"
    MR_Word hlds__instmap__TypeCtorInfo_9_28;
#line 537 "instmap.m"
    MR_Box hlds__instmap__conv0_VarInst_26;
#line 545 "instmap.m"
    MR_Box hlds__instmap__conv1_VarInst_10;

#line 403 "instmap.m"
    if (hlds__instmap__succeeded)
#line 403 "instmap.m"
      {
#line 403 "instmap.m"
        hlds__instmap__InstMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap_6, (MR_Integer) 0)));
#line 407 "instmap.m"
        hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__InstMapDelta_7)) == (MR_mktag((MR_Integer) 1)));
#line 407 "instmap.m"
        if (hlds__instmap__succeeded)
#line 407 "instmap.m"
          {
#line 407 "instmap.m"
            hlds__instmap__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_7, (MR_Integer) 0)));
#line 5053 "hlds.instmap.c"
            hlds__instmap__TypeInfo_8_27 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 5055 "hlds.instmap.c"
            hlds__instmap__TypeCtorInfo_9_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 537 "instmap.m"
            {
#line 537 "instmap.m"
              hlds__instmap__succeeded = mercury__map__search_3_p_0(hlds__instmap__TypeInfo_8_27, hlds__instmap__TypeCtorInfo_9_28, hlds__instmap__InstMap_20, ((MR_Box) (hlds__instmap__Var_8)), &hlds__instmap__conv0_VarInst_26);
            }
#line 537 "instmap.m"
            if (hlds__instmap__succeeded)
#line 537 "instmap.m"
              {
#line 537 "instmap.m"
                hlds__instmap__VarInst_26 = ((MR_Word) hlds__instmap__conv0_VarInst_26);
#line 537 "instmap.m"
                hlds__instmap__succeeded = MR_TRUE;
#line 537 "instmap.m"
              }
#line 539 "instmap.m"
            if (hlds__instmap__succeeded)
#line 538 "instmap.m"
              hlds__instmap__OldVarInst_9 = hlds__instmap__VarInst_26;
#line 539 "instmap.m"
            else
#line 540 "instmap.m"
              hlds__instmap__OldVarInst_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1387 "instmap.m"
            {
#line 1387 "instmap.m"
              hlds__instmap__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(hlds__instmap__ModuleInfo_5, hlds__instmap__OldVarInst_9);
            }
#line 1383 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1383 "instmap.m"
              {
#line 544 "instmap.m"
                hlds__instmap__InstMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_7, (MR_Integer) 0)));
#line 5091 "hlds.instmap.c"
                hlds__instmap__TypeInfo_8_17 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 5093 "hlds.instmap.c"
                hlds__instmap__TypeCtorInfo_9_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 545 "instmap.m"
                {
#line 545 "instmap.m"
                  hlds__instmap__succeeded = mercury__map__search_3_p_0(hlds__instmap__TypeInfo_8_17, hlds__instmap__TypeCtorInfo_9_18, hlds__instmap__InstMap_14, ((MR_Box) (hlds__instmap__Var_8)), &hlds__instmap__conv1_VarInst_10);
                }
#line 545 "instmap.m"
                if (hlds__instmap__succeeded)
#line 545 "instmap.m"
                  {
#line 545 "instmap.m"
                    hlds__instmap__VarInst_10 = ((MR_Word) hlds__instmap__conv1_VarInst_10);
#line 545 "instmap.m"
                    hlds__instmap__succeeded = MR_TRUE;
#line 545 "instmap.m"
                  }
#line 1383 "instmap.m"
                if (hlds__instmap__succeeded)
#line 1389 "instmap.m"
                  {
#line 1389 "instmap.m"
                    return hlds__instmap__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(hlds__instmap__ModuleInfo_5, hlds__instmap__VarInst_10);
                  }
#line 1383 "instmap.m"
              }
#line 407 "instmap.m"
          }
#line 403 "instmap.m"
      }
#line 1383 "instmap.m"
    return hlds__instmap__succeeded;
#line 1383 "instmap.m"
  }
#line 353 "instmap.m"
}

#line 343 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__var_is_any_in_instmap_3_p_0(
#line 343 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_4,
#line 343 "instmap.m"
  MR_Word hlds__instmap__InstMap_5,
#line 343 "instmap.m"
  MR_Word hlds__instmap__Var_6)
#line 343 "instmap.m"
{
#line 1379 "instmap.m"
  {
#line 1379 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 1379 "instmap.m"
    MR_Word hlds__instmap__Inst_7;

#line 1380 "instmap.m"
    {
#line 1380 "instmap.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_5, hlds__instmap__Var_6, &hlds__instmap__Inst_7);
    }
#line 1381 "instmap.m"
    {
#line 1381 "instmap.m"
      return hlds__instmap__succeeded = check_hlds__inst_match__inst_is_any_2_p_0(hlds__instmap__ModuleInfo_4, hlds__instmap__Inst_7);
    }
#line 1379 "instmap.m"
    return hlds__instmap__succeeded;
#line 1379 "instmap.m"
  }
#line 343 "instmap.m"
}

#line 340 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__var_is_ground_in_instmap_3_p_0(
#line 340 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_4,
#line 340 "instmap.m"
  MR_Word hlds__instmap__InstMap_5,
#line 340 "instmap.m"
  MR_Word hlds__instmap__Var_6)
#line 340 "instmap.m"
{
#line 1375 "instmap.m"
  {
#line 1375 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 1375 "instmap.m"
    MR_Word hlds__instmap__Inst_7;

#line 1376 "instmap.m"
    {
#line 1376 "instmap.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_5, hlds__instmap__Var_6, &hlds__instmap__Inst_7);
    }
#line 1377 "instmap.m"
    {
#line 1377 "instmap.m"
      return hlds__instmap__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(hlds__instmap__ModuleInfo_4, hlds__instmap__Inst_7);
    }
#line 1375 "instmap.m"
    return hlds__instmap__succeeded;
#line 1375 "instmap.m"
  }
#line 340 "instmap.m"
}

#line 335 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_map_foldl_5_p_0(
#line 335 "instmap.m"
  MR_Word hlds__instmap__TypeInfo_for_T_17,
#line 335 "instmap.m"
  MR_Word hlds__instmap__P_1,
#line 335 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 335 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3,
#line 335 "instmap.m"
  MR_Box hlds__instmap__STATE_VARIABLE_T_0_4,
#line 335 "instmap.m"
  MR_Box * hlds__instmap__STATE_VARIABLE_T_5)
#line 335 "instmap.m"
{
#line 419 "instmap.m"
  {
#line 419 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 419 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 419 "instmap.m"
      {
#line 419 "instmap.m"
        *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 419 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_T_5 = hlds__instmap__STATE_VARIABLE_T_0_4;
#line 419 "instmap.m"
      }
#line 419 "instmap.m"
    else
#line 421 "instmap.m"
      {
#line 421 "instmap.m"
        MR_Word hlds__instmap__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 421 "instmap.m"
        MR_Word hlds__instmap__Instmapping0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 421 "instmap.m"
        MR_Word hlds__instmap__Instmapping_12;

#line 422 "instmap.m"
        {
#line 422 "instmap.m"
          mercury__map__map_foldl_5_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], hlds__instmap__TypeCtorInfo_19_19, hlds__instmap__TypeCtorInfo_19_19, hlds__instmap__TypeInfo_for_T_17, hlds__instmap__P_1, hlds__instmap__Instmapping0_11, &hlds__instmap__Instmapping_12, hlds__instmap__STATE_VARIABLE_T_0_4, hlds__instmap__STATE_VARIABLE_T_5);
        }
#line 420 "instmap.m"
        {
#line 420 "instmap.m"
          MR_Word base;
#line 420 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 420 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = base;
#line 420 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Instmapping_12));
#line 420 "instmap.m"
        }
#line 421 "instmap.m"
      }
#line 419 "instmap.m"
  }
#line 335 "instmap.m"
}

#line 330 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_to_assoc_list_2_p_0(
#line 330 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 330 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__2_2)
#line 330 "instmap.m"
{
#line 1369 "instmap.m"
  {
#line 1369 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1369 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1369 "instmap.m"
      *hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1369 "instmap.m"
    else
#line 1370 "instmap.m"
      {
#line 1370 "instmap.m"
        MR_Word hlds__instmap__InstMapping_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 1371 "instmap.m"
        {
#line 1371 "instmap.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_3, hlds__instmap__HeadVar__2_2);
#line 1371 "instmap.m"
          return;
        }
#line 1370 "instmap.m"
      }
#line 1369 "instmap.m"
  }
#line 330 "instmap.m"
}

#line 327 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_to_assoc_list_2_p_0(
#line 327 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 327 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__2_2)
#line 327 "instmap.m"
{
#line 1365 "instmap.m"
  {
#line 1365 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1365 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1365 "instmap.m"
      *hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1365 "instmap.m"
    else
#line 1366 "instmap.m"
      {
#line 1366 "instmap.m"
        MR_Word hlds__instmap__InstMapping_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 1367 "instmap.m"
        {
#line 1367 "instmap.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_3, hlds__instmap__HeadVar__2_2);
#line 1367 "instmap.m"
          return;
        }
#line 1366 "instmap.m"
      }
#line 1365 "instmap.m"
  }
#line 327 "instmap.m"
}

#line 322 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_apply_sub_4_p_0(
#line 322 "instmap.m"
  MR_Word hlds__instmap__Must_5,
#line 322 "instmap.m"
  MR_Word hlds__instmap__Renaming_6,
#line 322 "instmap.m"
  MR_Word hlds__instmap__InstMap0_7,
#line 322 "instmap.m"
  MR_Word * hlds__instmap__InstMap_8)
#line 322 "instmap.m"
{
#line 1346 "instmap.m"
  {
#line 1346 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1346 "instmap.m"
    {
#line 1346 "instmap.m"
      hlds__instmap__instmap_delta_apply_sub_4_p_0(hlds__instmap__Must_5, hlds__instmap__Renaming_6, hlds__instmap__InstMap0_7, hlds__instmap__InstMap_8);
#line 1346 "instmap.m"
      return;
    }
#line 1346 "instmap.m"
  }
#line 322 "instmap.m"
}

#line 319 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_apply_sub_4_p_0(
#line 319 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 319 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 319 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 319 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 319 "instmap.m"
{
#line 1338 "instmap.m"
  {
#line 1338 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1338 "instmap.m"
    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1338 "instmap.m"
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1338 "instmap.m"
    else
#line 1340 "instmap.m"
      {
#line 1340 "instmap.m"
        MR_Word hlds__instmap__TypeInfo_13_13 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 1340 "instmap.m"
        MR_Word hlds__instmap__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1340 "instmap.m"
        MR_Word hlds__instmap__OldInstMapping_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));
#line 1340 "instmap.m"
        MR_Word hlds__instmap__InstMapping_10;
#line 1340 "instmap.m"
        MR_Word hlds__instmap__InstMappingAL_11;
#line 1340 "instmap.m"
        MR_Word hlds__instmap__V_12_12;

#line 1341 "instmap.m"
        {
#line 1341 "instmap.m"
          mercury__map__to_assoc_list_2_p_0(hlds__instmap__TypeInfo_13_13, hlds__instmap__TypeCtorInfo_14_14, hlds__instmap__OldInstMapping_9, &hlds__instmap__InstMappingAL_11);
        }
#line 1343 "instmap.m"
        {
#line 1343 "instmap.m"
          hlds__instmap__V_12_12 = mercury__map__init_0_f_0(hlds__instmap__TypeInfo_13_13, hlds__instmap__TypeCtorInfo_14_14);
        }
#line 1342 "instmap.m"
        {
#line 1342 "instmap.m"
          hlds__instmap__instmap_delta_apply_sub_2_5_p_0(hlds__instmap__InstMappingAL_11, hlds__instmap__HeadVar__1_1, hlds__instmap__HeadVar__2_2, hlds__instmap__V_12_12, &hlds__instmap__InstMapping_10);
        }
#line 1340 "instmap.m"
        {
#line 1340 "instmap.m"
          MR_Word base;
#line 1340 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = base;
#line 1340 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_10));
#line 1340 "instmap.m"
        }
#line 1340 "instmap.m"
      }
#line 1338 "instmap.m"
  }
#line 319 "instmap.m"
}

#line 306 "instmap.m"
void MR_CALL 
hlds__instmap__unify_instmap_delta_7_p_0(
#line 306 "instmap.m"
  MR_Word hlds__instmap__InstMap_1,
#line 306 "instmap.m"
  MR_Word hlds__instmap__NonLocals_2,
#line 306 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 306 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 306 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__5_5,
#line 306 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6,
#line 306 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_7)
#line 306 "instmap.m"
{
#line 1277 "instmap.m"
  {
#line 1277 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1277 "instmap.m"
    {
#line 1277 "instmap.m"
      hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_p_0(hlds__instmap__NonLocals_2, hlds__instmap__HeadVar__3_3, hlds__instmap__HeadVar__4_4, hlds__instmap__HeadVar__5_5, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6, hlds__instmap__STATE_VARIABLE_ModuleInfo_7);
#line 1277 "instmap.m"
      return;
    }
#line 1277 "instmap.m"
  }
#line 306 "instmap.m"
}

#line 296 "instmap.m"
void MR_CALL 
hlds__instmap__merge_instmap_deltas_7_p_0(
#line 296 "instmap.m"
  MR_Word hlds__instmap__InstMap_8,
#line 296 "instmap.m"
  MR_Word hlds__instmap__NonLocals_9,
#line 296 "instmap.m"
  MR_Word hlds__instmap__VarTypes_10,
#line 296 "instmap.m"
  MR_Word hlds__instmap__Deltas_11,
#line 296 "instmap.m"
  MR_Word * hlds__instmap__MergedDelta_12,
#line 296 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_18,
#line 296 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_19)
#line 296 "instmap.m"
{
#line 1077 "instmap.m"
  while (MR_TRUE)
#line 1077 "instmap.m"
    {
#line 1077 "instmap.m"
      /* tailcall optimized into a loop */
#line 1077 "instmap.m"
      {
#line 1077 "instmap.m"
        MR_bool hlds__instmap__succeeded;
#line 1077 "instmap.m"
        MR_Word hlds__instmap__MergedDeltas_14;
#line 1077 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21;

#line 1080 "instmap.m"
        {
#line 1080 "instmap.m"
          hlds__instmap__merge_instmap_deltas_2_8_p_0(hlds__instmap__InstMap_8, hlds__instmap__NonLocals_9, hlds__instmap__VarTypes_10, hlds__instmap__Deltas_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__instmap__MergedDeltas_14, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_18, &hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21);
        }
#line 1085 "instmap.m"
        if ((hlds__instmap__MergedDeltas_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1083 "instmap.m"
          {
#line 1084 "instmap.m"
            {
#line 1084 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.merge_instmap_deltas\'/7", (MR_String) "empty instmap_delta list.");
#line 1084 "instmap.m"
              return;
            }
#line 1083 "instmap.m"
          }
#line 1085 "instmap.m"
        else
#line 1085 "instmap.m"
          {
#line 1085 "instmap.m"
            MR_Word hlds__instmap__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MergedDeltas_14, (MR_Integer) 1)));
#line 1085 "instmap.m"
            MR_Word hlds__instmap__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MergedDeltas_14, (MR_Integer) 0)));

#line 1085 "instmap.m"
            if ((hlds__instmap__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1086 "instmap.m"
              {
#line 1086 "instmap.m"
                *hlds__instmap__MergedDelta_12 = hlds__instmap__V_29_29;
#line 1086 "instmap.m"
                *hlds__instmap__STATE_VARIABLE_ModuleInfo_19 = hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21;
#line 1086 "instmap.m"
              }
#line 1085 "instmap.m"
            else
#line 1089 "instmap.m"
              {
#line 1089 "instmap.m"
                /* direct tailcall eliminated */
#line 1089 "instmap.m"
                {
#line 1089 "instmap.m"
                  MR_Word hlds__instmap__Deltas__tmp_copy_11 = hlds__instmap__MergedDeltas_14;
#line 1089 "instmap.m"
                  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_18 = hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21;

#line 1089 "instmap.m"
                  hlds__instmap__STATE_VARIABLE_ModuleInfo_0_18 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_18;
#line 1089 "instmap.m"
                  hlds__instmap__Deltas_11 = hlds__instmap__Deltas__tmp_copy_11;
#line 1089 "instmap.m"
                }
#line 1089 "instmap.m"
                continue;
#line 1089 "instmap.m"
              }
#line 1085 "instmap.m"
          }
#line 1077 "instmap.m"
      }
#line 1077 "instmap.m"
      break;
#line 1077 "instmap.m"
    }
#line 296 "instmap.m"
}

#line 285 "instmap.m"
void MR_CALL 
hlds__instmap__merge_instmap_delta_8_p_0(
#line 285 "instmap.m"
  MR_Word hlds__instmap__InstMap_1,
#line 285 "instmap.m"
  MR_Word hlds__instmap__NonLocals_2,
#line 285 "instmap.m"
  MR_Word hlds__instmap__VarTypes_3,
#line 285 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 285 "instmap.m"
  MR_Word hlds__instmap__HeadVar__5_5,
#line 285 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__6_6,
#line 285 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7,
#line 285 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_8)
#line 285 "instmap.m"
{
#line 1199 "instmap.m"
  {
#line 1199 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1199 "instmap.m"
    if ((hlds__instmap__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1199 "instmap.m"
      {
#line 1199 "instmap.m"
        *hlds__instmap__HeadVar__6_6 = hlds__instmap__HeadVar__5_5;
#line 1200 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
#line 1199 "instmap.m"
      }
#line 1199 "instmap.m"
    else
#line 1199 "instmap.m"
      {
#line 1199 "instmap.m"
        MR_Word hlds__instmap__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__4_4, (MR_Integer) 0)));

#line 1199 "instmap.m"
        if ((hlds__instmap__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1201 "instmap.m"
          {
#line 1202 "instmap.m"
            *hlds__instmap__HeadVar__6_6 = hlds__instmap__HeadVar__4_4;
#line 1202 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
#line 1201 "instmap.m"
          }
#line 1199 "instmap.m"
        else
#line 1204 "instmap.m"
          {
#line 1204 "instmap.m"
            MR_Word hlds__instmap__TypeInfo_26_51 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 1204 "instmap.m"
            MR_Word hlds__instmap__TypeCtorInfo_27_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1204 "instmap.m"
            MR_Word hlds__instmap__TypeCtorInfo_28_53;
#line 1204 "instmap.m"
            MR_Word hlds__instmap__InstMappingB_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__5_5, (MR_Integer) 0)));
#line 1204 "instmap.m"
            MR_Word hlds__instmap__InstMapping_28;
#line 1204 "instmap.m"
            MR_Word hlds__instmap__VarsInA_43;
#line 1204 "instmap.m"
            MR_Word hlds__instmap__VarsInB_44;
#line 1204 "instmap.m"
            MR_Word hlds__instmap__SetofVarsInA_45;
#line 1204 "instmap.m"
            MR_Word hlds__instmap__SetofVars0_46;
#line 1204 "instmap.m"
            MR_Word hlds__instmap__SetofVars_47;
#line 1204 "instmap.m"
            MR_Word hlds__instmap__ListofVars_48;
#line 1204 "instmap.m"
            MR_Word hlds__instmap__V_49_49;

#line 1214 "instmap.m"
            {
#line 1214 "instmap.m"
              mercury__map__keys_2_p_0(hlds__instmap__TypeInfo_26_51, hlds__instmap__TypeCtorInfo_27_52, hlds__instmap__V_33_33, &hlds__instmap__VarsInA_43);
            }
#line 1215 "instmap.m"
            {
#line 1215 "instmap.m"
              mercury__map__keys_2_p_0(hlds__instmap__TypeInfo_26_51, hlds__instmap__TypeCtorInfo_27_52, hlds__instmap__InstMappingB_27, &hlds__instmap__VarsInB_44);
            }
#line 5681 "hlds.instmap.c"
            hlds__instmap__TypeCtorInfo_28_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1216 "instmap.m"
            {
#line 1216 "instmap.m"
              parse_tree__set_of_var__sorted_list_to_set_2_p_0(hlds__instmap__TypeCtorInfo_28_53, hlds__instmap__VarsInA_43, &hlds__instmap__SetofVarsInA_45);
            }
#line 1217 "instmap.m"
            {
#line 1217 "instmap.m"
              parse_tree__set_of_var__insert_list_3_p_0(hlds__instmap__TypeCtorInfo_28_53, hlds__instmap__VarsInB_44, hlds__instmap__SetofVarsInA_45, &hlds__instmap__SetofVars0_46);
            }
#line 1218 "instmap.m"
            {
#line 1218 "instmap.m"
              parse_tree__set_of_var__intersect_3_p_0(hlds__instmap__TypeCtorInfo_28_53, hlds__instmap__SetofVars0_46, hlds__instmap__NonLocals_2, &hlds__instmap__SetofVars_47);
            }
#line 1219 "instmap.m"
            {
#line 1219 "instmap.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__instmap__TypeCtorInfo_28_53, hlds__instmap__SetofVars_47, &hlds__instmap__ListofVars_48);
            }
#line 1221 "instmap.m"
            {
#line 1221 "instmap.m"
              hlds__instmap__V_49_49 = mercury__map__init_0_f_0(hlds__instmap__TypeInfo_26_51, hlds__instmap__TypeCtorInfo_27_52);
            }
#line 1220 "instmap.m"
            {
#line 1220 "instmap.m"
              hlds__instmap__merge_instmapping_delta_2_9_p_0(hlds__instmap__ListofVars_48, hlds__instmap__InstMap_1, hlds__instmap__VarTypes_3, hlds__instmap__V_33_33, hlds__instmap__InstMappingB_27, hlds__instmap__V_49_49, &hlds__instmap__InstMapping_28, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7, hlds__instmap__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1204 "instmap.m"
            {
#line 1204 "instmap.m"
              MR_Word base;
#line 1204 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "instmap.m"
              *hlds__instmap__HeadVar__6_6 = base;
#line 1204 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_28));
#line 1204 "instmap.m"
            }
#line 1204 "instmap.m"
          }
#line 1199 "instmap.m"
      }
#line 1199 "instmap.m"
  }
#line 285 "instmap.m"
}

#line 1162 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_no_output_vars_5_p_0_1(
#line 1162 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 1162 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1)
#line 1162 "instmap.m"
{
#line 1162 "instmap.m"
  {
#line 1162 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 1162 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 1162 "instmap.m"
    {
#line 1162 "instmap.m"
      return hlds__instmap__succeeded = hlds__instmap__var_is_not_output_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 6))), ((MR_Word) hlds__instmap__wrapper_arg_1));
    }
#line 1162 "instmap.m"
    return hlds__instmap__succeeded;
#line 1162 "instmap.m"
  }
#line 1162 "instmap.m"
}

#line 276 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__instmap_delta_no_output_vars_5_p_0(
#line 276 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 276 "instmap.m"
  MR_Word hlds__instmap__VarTypes_7,
#line 276 "instmap.m"
  MR_Word hlds__instmap__InstMap0_8,
#line 276 "instmap.m"
  MR_Word hlds__instmap__InstMapDelta_9,
#line 276 "instmap.m"
  MR_Word hlds__instmap__Vars_10)
#line 276 "instmap.m"
{
#line 1159 "instmap.m"
  {
#line 1159 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1159 "instmap.m"
    if ((hlds__instmap__InstMapDelta_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1159 "instmap.m"
      hlds__instmap__succeeded = MR_TRUE;
#line 1159 "instmap.m"
    else
#line 1161 "instmap.m"
      {
#line 1161 "instmap.m"
        MR_Word hlds__instmap__InstMapDeltaMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_9, (MR_Integer) 0)));
#line 1161 "instmap.m"
        MR_Word hlds__instmap__Test_12;

#line 1162 "instmap.m"
        {
#line 1162 "instmap.m"
          hlds__instmap__Test_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1162 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 0) = ((MR_Box) (&hlds__instmap_scalar_common_4[1]));
#line 1162 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 1) = ((MR_Box) (hlds__instmap__instmap_delta_no_output_vars_5_p_0_1));
#line 1162 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1162 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 3) = ((MR_Box) (hlds__instmap__ModuleInfo_6));
#line 1162 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 4) = ((MR_Box) (hlds__instmap__VarTypes_7));
#line 1162 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 5) = ((MR_Box) (hlds__instmap__InstMap0_8));
#line 1162 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 6) = ((MR_Box) (hlds__instmap__InstMapDeltaMap_11));
#line 1162 "instmap.m"
        }
#line 1164 "instmap.m"
        {
#line 1164 "instmap.m"
          return hlds__instmap__succeeded = parse_tree__set_of_var__all_true_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Test_12, hlds__instmap__Vars_10);
        }
#line 1161 "instmap.m"
      }
#line 1159 "instmap.m"
    return hlds__instmap__succeeded;
#line 1159 "instmap.m"
  }
#line 276 "instmap.m"
}

#line 268 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_delete_vars_3_p_0(
#line 268 "instmap.m"
  MR_Word hlds__instmap__Vars_1,
#line 268 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 268 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 268 "instmap.m"
{
#line 845 "instmap.m"
  {
#line 845 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 845 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 845 "instmap.m"
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 845 "instmap.m"
    else
#line 847 "instmap.m"
      {
#line 847 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 847 "instmap.m"
        MR_Word hlds__instmap__InstMapping_7;

#line 848 "instmap.m"
        {
#line 848 "instmap.m"
          mercury__map__delete_list_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Vars_1, hlds__instmap__InstMapping0_6, &hlds__instmap__InstMapping_7);
        }
#line 847 "instmap.m"
        {
#line 847 "instmap.m"
          MR_Word base;
#line 847 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 847 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = base;
#line 847 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_7));
#line 847 "instmap.m"
        }
#line 847 "instmap.m"
      }
#line 845 "instmap.m"
  }
#line 268 "instmap.m"
}

#line 263 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_restrict_3_p_0(
#line 263 "instmap.m"
  MR_Word hlds__instmap__Vars_1,
#line 263 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 263 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 263 "instmap.m"
{
#line 834 "instmap.m"
  {
#line 834 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 834 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 834 "instmap.m"
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 834 "instmap.m"
    else
#line 835 "instmap.m"
      {
#line 835 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 835 "instmap.m"
        MR_Word hlds__instmap__InstMapping_7;
#line 835 "instmap.m"
        MR_Word hlds__instmap__V_8_8;

#line 836 "instmap.m"
        {
#line 836 "instmap.m"
          hlds__instmap__V_8_8 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Vars_1);
        }
#line 836 "instmap.m"
        {
#line 836 "instmap.m"
          mercury__map__select_sorted_list_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping0_6, hlds__instmap__V_8_8, &hlds__instmap__InstMapping_7);
        }
#line 835 "instmap.m"
        {
#line 835 "instmap.m"
          MR_Word base;
#line 835 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 835 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = base;
#line 835 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_7));
#line 835 "instmap.m"
        }
#line 835 "instmap.m"
      }
#line 834 "instmap.m"
  }
#line 263 "instmap.m"
}

#line 257 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_merge_5_p_0(
#line 257 "instmap.m"
  MR_Word hlds__instmap__NonLocals_6,
#line 257 "instmap.m"
  MR_Word hlds__instmap__ArmInstMaps_7,
#line 257 "instmap.m"
  MR_Word hlds__instmap__MergeContext_8,
#line 257 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModeInfo_0_27,
#line 257 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModeInfo_28)
#line 257 "instmap.m"
{
#line 880 "instmap.m"
  {
#line 880 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 880 "instmap.m"
    MR_Word hlds__instmap__InstMap0_10;
#line 880 "instmap.m"
    MR_Word hlds__instmap__ModuleInfo0_11;
#line 880 "instmap.m"
    MR_Word hlds__instmap__ReachableInstMappingList_12;
#line 880 "instmap.m"
    MR_Word hlds__instmap__InstMap_26;
#line 880 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_ModeInfo_31_31;
#line 905 "instmap.m"
    MR_Word hlds__instmap__InstMapping0_13;
#line 888 "instmap.m"
    MR_Word hlds__instmap__V_14_14;
#line 888 "instmap.m"
    MR_Word hlds__instmap__V_15_15;

#line 881 "instmap.m"
    {
#line 881 "instmap.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(hlds__instmap__STATE_VARIABLE_ModeInfo_0_27, &hlds__instmap__InstMap0_10);
    }
#line 882 "instmap.m"
    {
#line 882 "instmap.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(hlds__instmap__STATE_VARIABLE_ModeInfo_0_27, &hlds__instmap__ModuleInfo0_11);
    }
#line 883 "instmap.m"
    {
#line 883 "instmap.m"
      hlds__instmap__get_reachable_instmaps_2_p_0(hlds__instmap__ArmInstMaps_7, &hlds__instmap__ReachableInstMappingList_12);
    }
#line 888 "instmap.m"
    hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__ReachableInstMappingList_12)) == (MR_mktag((MR_Integer) 1)));
#line 888 "instmap.m"
    if (hlds__instmap__succeeded)
#line 888 "instmap.m"
      {
#line 888 "instmap.m"
        hlds__instmap__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__ReachableInstMappingList_12, (MR_Integer) 0)));
#line 888 "instmap.m"
        hlds__instmap__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__ReachableInstMappingList_12, (MR_Integer) 1)));
#line 887 "instmap.m"
        hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__InstMap0_10)) == (MR_mktag((MR_Integer) 1)));
#line 887 "instmap.m"
        if (hlds__instmap__succeeded)
#line 887 "instmap.m"
          hlds__instmap__InstMapping0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap0_10, (MR_Integer) 0)));
#line 888 "instmap.m"
      }
#line 905 "instmap.m"
    if (hlds__instmap__succeeded)
#line 890 "instmap.m"
      {
#line 890 "instmap.m"
        MR_Word hlds__instmap__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 890 "instmap.m"
        MR_Word hlds__instmap__NonLocalsList_16;
#line 890 "instmap.m"
        MR_Word hlds__instmap__VarTypes_17;
#line 890 "instmap.m"
        MR_Word hlds__instmap__InstMapping_18;
#line 890 "instmap.m"
        MR_Word hlds__instmap__ModuleInfo_19;
#line 890 "instmap.m"
        MR_Word hlds__instmap__ErrorList_20;
#line 890 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModeInfo_29_29;

#line 890 "instmap.m"
        {
#line 890 "instmap.m"
          parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__instmap__TypeCtorInfo_33_33, hlds__instmap__NonLocals_6, &hlds__instmap__NonLocalsList_16);
        }
#line 891 "instmap.m"
        {
#line 891 "instmap.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(hlds__instmap__STATE_VARIABLE_ModeInfo_0_27, &hlds__instmap__VarTypes_17);
        }
#line 892 "instmap.m"
        {
#line 892 "instmap.m"
          hlds__instmap__merge_insts_of_vars_8_p_0(hlds__instmap__NonLocalsList_16, hlds__instmap__ArmInstMaps_7, hlds__instmap__VarTypes_17, hlds__instmap__InstMapping0_13, &hlds__instmap__InstMapping_18, hlds__instmap__ModuleInfo0_11, &hlds__instmap__ModuleInfo_19, &hlds__instmap__ErrorList_20);
        }
#line 894 "instmap.m"
        {
#line 894 "instmap.m"
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(hlds__instmap__ModuleInfo_19, hlds__instmap__STATE_VARIABLE_ModeInfo_0_27, &hlds__instmap__STATE_VARIABLE_ModeInfo_29_29);
        }
#line 901 "instmap.m"
        if ((hlds__instmap__ErrorList_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 902 "instmap.m"
          hlds__instmap__STATE_VARIABLE_ModeInfo_31_31 = hlds__instmap__STATE_VARIABLE_ModeInfo_29_29;
#line 901 "instmap.m"
        else
#line 896 "instmap.m"
          {
#line 896 "instmap.m"
            MR_Word hlds__instmap__FirstError_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__ErrorList_20, (MR_Integer) 0)));
#line 896 "instmap.m"
            MR_Word hlds__instmap__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__FirstError_21, (MR_Integer) 0)));
#line 896 "instmap.m"
            MR_Word hlds__instmap__WaitingVars_25;
#line 896 "instmap.m"
            MR_Word hlds__instmap__V_30_30;
#line 896 "instmap.m"
            MR_Word hlds__instmap__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__ErrorList_20, (MR_Integer) 1)));
#line 897 "instmap.m"
            MR_Word hlds__instmap__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__FirstError_21, (MR_Integer) 1)));

#line 898 "instmap.m"
            {
#line 898 "instmap.m"
              hlds__instmap__WaitingVars_25 = parse_tree__set_of_var__make_singleton_1_f_0(hlds__instmap__TypeCtorInfo_33_33, hlds__instmap__Var_23);
            }
#line 900 "instmap.m"
            {
#line 900 "instmap.m"
              hlds__instmap__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 900 "instmap.m"
              MR_hl_field(MR_mktag(1), hlds__instmap__V_30_30, 0) = ((MR_Box) (hlds__instmap__MergeContext_8));
#line 900 "instmap.m"
              MR_hl_field(MR_mktag(1), hlds__instmap__V_30_30, 1) = ((MR_Box) (hlds__instmap__ErrorList_20));
#line 900 "instmap.m"
            }
#line 899 "instmap.m"
            {
#line 899 "instmap.m"
              check_hlds__mode_info__mode_info_error_4_p_0(hlds__instmap__WaitingVars_25, hlds__instmap__V_30_30, hlds__instmap__STATE_VARIABLE_ModeInfo_29_29, &hlds__instmap__STATE_VARIABLE_ModeInfo_31_31);
            }
#line 896 "instmap.m"
          }
#line 904 "instmap.m"
        {
#line 904 "instmap.m"
          hlds__instmap__InstMap_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 904 "instmap.m"
          MR_hl_field(MR_mktag(1), hlds__instmap__InstMap_26, 0) = ((MR_Box) (hlds__instmap__InstMapping_18));
#line 904 "instmap.m"
        }
#line 890 "instmap.m"
      }
#line 905 "instmap.m"
    else
#line 906 "instmap.m"
      {
#line 906 "instmap.m"
        hlds__instmap__InstMap_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 906 "instmap.m"
        hlds__instmap__STATE_VARIABLE_ModeInfo_31_31 = hlds__instmap__STATE_VARIABLE_ModeInfo_0_27;
#line 906 "instmap.m"
      }
#line 908 "instmap.m"
    {
#line 908 "instmap.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(hlds__instmap__InstMap_26, hlds__instmap__STATE_VARIABLE_ModeInfo_31_31, hlds__instmap__STATE_VARIABLE_ModeInfo_28);
#line 908 "instmap.m"
      return;
    }
#line 880 "instmap.m"
  }
#line 257 "instmap.m"
}

#line 248 "instmap.m"
void MR_CALL 
hlds__instmap__make_arm_instmaps_for_cases_3_p_0(
#line 248 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 248 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 248 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 248 "instmap.m"
{
#line 865 "instmap.m"
  {
#line 865 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 865 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 865 "instmap.m"
      if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 865 "instmap.m"
        *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 865 "instmap.m"
      else
#line 866 "instmap.m"
        {
#line 867 "instmap.m"
          {
#line 867 "instmap.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_cases\'/3", (MR_String) "mismatched lists");
#line 867 "instmap.m"
            return;
          }
#line 866 "instmap.m"
        }
#line 865 "instmap.m"
    else
#line 865 "instmap.m"
      {
#line 865 "instmap.m"
        MR_Word hlds__instmap__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 865 "instmap.m"
        MR_Word hlds__instmap__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 865 "instmap.m"
        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
#line 865 "instmap.m"
        else
#line 871 "instmap.m"
          {
#line 871 "instmap.m"
            MR_Word hlds__instmap__InstMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 871 "instmap.m"
            MR_Word hlds__instmap__InstMaps_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 871 "instmap.m"
            MR_Word hlds__instmap__ArmInfo_20;
#line 871 "instmap.m"
            MR_Word hlds__instmap__ArmInfos_21;
#line 871 "instmap.m"
            MR_Word hlds__instmap__Goal_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_29_29, (MR_Integer) 2)));
#line 871 "instmap.m"
            MR_Word hlds__instmap__GoalInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__Goal_24, (MR_Integer) 1)));
#line 871 "instmap.m"
            MR_Word hlds__instmap__Context_27;
#line 872 "instmap.m"
            MR_Word hlds__instmap__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_29_29, (MR_Integer) 0)));
#line 872 "instmap.m"
            MR_Word hlds__instmap__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_29_29, (MR_Integer) 1)));
#line 873 "instmap.m"
            MR_Word hlds__instmap__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__Goal_24, (MR_Integer) 0)));

#line 874 "instmap.m"
            {
#line 874 "instmap.m"
              hlds__instmap__Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__instmap__GoalInfo_26);
            }
#line 875 "instmap.m"
            {
#line 875 "instmap.m"
              hlds__instmap__ArmInfo_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 875 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__ArmInfo_20, 0) = ((MR_Box) (hlds__instmap__Context_27));
#line 875 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__ArmInfo_20, 1) = ((MR_Box) (hlds__instmap__InstMap_18));
#line 875 "instmap.m"
            }
#line 876 "instmap.m"
            {
#line 876 "instmap.m"
              hlds__instmap__make_arm_instmaps_for_cases_3_p_0(hlds__instmap__V_28_28, hlds__instmap__InstMaps_19, &hlds__instmap__ArmInfos_21);
            }
#line 871 "instmap.m"
            {
#line 871 "instmap.m"
              MR_Word base;
#line 871 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 871 "instmap.m"
              *hlds__instmap__HeadVar__3_3 = base;
#line 871 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__ArmInfo_20));
#line 871 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__ArmInfos_21));
#line 871 "instmap.m"
            }
#line 871 "instmap.m"
          }
#line 865 "instmap.m"
      }
#line 865 "instmap.m"
  }
#line 248 "instmap.m"
}

#line 246 "instmap.m"
void MR_CALL 
hlds__instmap__make_arm_instmaps_for_goals_3_p_0(
#line 246 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 246 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 246 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 246 "instmap.m"
{
#line 853 "instmap.m"
  {
#line 853 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 853 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 853 "instmap.m"
      if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 853 "instmap.m"
        *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 853 "instmap.m"
      else
#line 854 "instmap.m"
        {
#line 855 "instmap.m"
          {
#line 855 "instmap.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_goals\'/3", (MR_String) "mismatched lists");
#line 855 "instmap.m"
            return;
          }
#line 854 "instmap.m"
        }
#line 853 "instmap.m"
    else
#line 853 "instmap.m"
      {
#line 853 "instmap.m"
        MR_Word hlds__instmap__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 853 "instmap.m"
        MR_Word hlds__instmap__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 853 "instmap.m"
        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
#line 853 "instmap.m"
        else
#line 859 "instmap.m"
          {
#line 859 "instmap.m"
            MR_Word hlds__instmap__InstMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 859 "instmap.m"
            MR_Word hlds__instmap__InstMaps_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 859 "instmap.m"
            MR_Word hlds__instmap__ArmInfo_20;
#line 859 "instmap.m"
            MR_Word hlds__instmap__ArmInfos_21;
#line 859 "instmap.m"
            MR_Word hlds__instmap__GoalInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_26_26, (MR_Integer) 1)));
#line 859 "instmap.m"
            MR_Word hlds__instmap__Context_24;
#line 860 "instmap.m"
            MR_Word hlds__instmap__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_26_26, (MR_Integer) 0)));

#line 861 "instmap.m"
            {
#line 861 "instmap.m"
              hlds__instmap__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__instmap__GoalInfo_23);
            }
#line 862 "instmap.m"
            {
#line 862 "instmap.m"
              hlds__instmap__ArmInfo_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 862 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__ArmInfo_20, 0) = ((MR_Box) (hlds__instmap__Context_24));
#line 862 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__ArmInfo_20, 1) = ((MR_Box) (hlds__instmap__InstMap_18));
#line 862 "instmap.m"
            }
#line 863 "instmap.m"
            {
#line 863 "instmap.m"
              hlds__instmap__make_arm_instmaps_for_goals_3_p_0(hlds__instmap__V_25_25, hlds__instmap__InstMaps_19, &hlds__instmap__ArmInfos_21);
            }
#line 859 "instmap.m"
            {
#line 859 "instmap.m"
              MR_Word base;
#line 859 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 859 "instmap.m"
              *hlds__instmap__HeadVar__3_3 = base;
#line 859 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__ArmInfo_20));
#line 859 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__ArmInfos_21));
#line 859 "instmap.m"
            }
#line 859 "instmap.m"
          }
#line 853 "instmap.m"
      }
#line 853 "instmap.m"
  }
#line 246 "instmap.m"
}

#line 234 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_restrict_3_p_0(
#line 234 "instmap.m"
  MR_Word hlds__instmap__Vars_1,
#line 234 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 234 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 234 "instmap.m"
{
#line 839 "instmap.m"
  {
#line 839 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 839 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 839 "instmap.m"
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 839 "instmap.m"
    else
#line 841 "instmap.m"
      {
#line 841 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 841 "instmap.m"
        MR_Word hlds__instmap__InstMapping_7;
#line 841 "instmap.m"
        MR_Word hlds__instmap__V_8_8;

#line 842 "instmap.m"
        {
#line 842 "instmap.m"
          hlds__instmap__V_8_8 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Vars_1);
        }
#line 842 "instmap.m"
        {
#line 842 "instmap.m"
          mercury__map__select_sorted_list_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping0_6, hlds__instmap__V_8_8, &hlds__instmap__InstMapping_7);
        }
#line 841 "instmap.m"
        {
#line 841 "instmap.m"
          MR_Word base;
#line 841 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 841 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = base;
#line 841 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_7));
#line 841 "instmap.m"
        }
#line 841 "instmap.m"
      }
#line 839 "instmap.m"
  }
#line 234 "instmap.m"
}

#line 228 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(
#line 228 "instmap.m"
  MR_Word hlds__instmap__InstMap1_5,
#line 228 "instmap.m"
  MR_Word hlds__instmap__InstMap2_6,
#line 228 "instmap.m"
  MR_Word hlds__instmap__How_7,
#line 228 "instmap.m"
  MR_Word * hlds__instmap__InstMap_8)
#line 228 "instmap.m"
{
#line 798 "instmap.m"
  {
#line 798 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 798 "instmap.m"
    if ((hlds__instmap__InstMap1_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 798 "instmap.m"
      *hlds__instmap__InstMap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 798 "instmap.m"
    else
#line 798 "instmap.m"
      {
#line 798 "instmap.m"
        MR_Word hlds__instmap__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap1_5, (MR_Integer) 0)));

#line 798 "instmap.m"
        if ((hlds__instmap__InstMap2_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 803 "instmap.m"
          *hlds__instmap__InstMap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 798 "instmap.m"
        else
#line 805 "instmap.m"
          {
#line 805 "instmap.m"
            MR_Word hlds__instmap__InstMappingDelta2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap2_6, (MR_Integer) 0)));
#line 805 "instmap.m"
            MR_Word hlds__instmap__InstMappingDelta_12;

#line 811 "instmap.m"
            if ((hlds__instmap__How_7 == (MR_Integer) 0))
#line 808 "instmap.m"
              {
#line 809 "instmap.m"
                {
#line 809 "instmap.m"
                  mercury__map__overlay_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_25_25, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__InstMappingDelta_12);
                }
#line 808 "instmap.m"
              }
#line 811 "instmap.m"
            else
#line 811 "instmap.m"
              if ((hlds__instmap__How_7 == (MR_Integer) 1))
#line 812 "instmap.m"
                {
#line 813 "instmap.m"
                  {
#line 813 "instmap.m"
                    mercury__map__overlay_large_map_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_25_25, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__InstMappingDelta_12);
                  }
#line 812 "instmap.m"
                }
#line 811 "instmap.m"
              else
#line 816 "instmap.m"
                {
#line 818 "instmap.m"
                  MR_Word hlds__instmap__TypeInfo_19_19 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 818 "instmap.m"
                  MR_Word hlds__instmap__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 818 "instmap.m"
                  MR_Integer hlds__instmap__Count1_13;
#line 818 "instmap.m"
                  MR_Integer hlds__instmap__Count2_14;

#line 818 "instmap.m"
                  {
#line 818 "instmap.m"
                    mercury__map__count_2_p_0(hlds__instmap__TypeInfo_19_19, hlds__instmap__TypeCtorInfo_20_20, hlds__instmap__V_25_25, &hlds__instmap__Count1_13);
                  }
#line 819 "instmap.m"
                  {
#line 819 "instmap.m"
                    mercury__map__count_2_p_0(hlds__instmap__TypeInfo_19_19, hlds__instmap__TypeCtorInfo_20_20, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__Count2_14);
                  }
#line 820 "instmap.m"
                  hlds__instmap__succeeded = (hlds__instmap__Count1_13 >= hlds__instmap__Count2_14);
#line 816 "instmap.m"
                  if (hlds__instmap__succeeded)
#line 822 "instmap.m"
                    {
#line 822 "instmap.m"
                      {
#line 822 "instmap.m"
                        mercury__map__overlay_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_25_25, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__InstMappingDelta_12);
                      }
#line 822 "instmap.m"
                    }
#line 816 "instmap.m"
                  else
#line 825 "instmap.m"
                    {
#line 825 "instmap.m"
                      {
#line 825 "instmap.m"
                        mercury__map__overlay_large_map_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_25_25, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__InstMappingDelta_12);
                      }
#line 825 "instmap.m"
                    }
#line 816 "instmap.m"
                }
#line 829 "instmap.m"
            {
#line 829 "instmap.m"
              MR_Word base;
#line 829 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 829 "instmap.m"
              *hlds__instmap__InstMap_8 = base;
#line 829 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMappingDelta_12));
#line 829 "instmap.m"
            }
#line 805 "instmap.m"
          }
#line 798 "instmap.m"
      }
#line 798 "instmap.m"
  }
#line 228 "instmap.m"
}

#line 222 "instmap.m"
void MR_CALL 
hlds__instmap__apply_instmap_delta_sv_3_p_0(
#line 222 "instmap.m"
  MR_Word hlds__instmap__Delta_4,
#line 222 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_Instmap_0_6,
#line 222 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_Instmap_7)
#line 222 "instmap.m"
{
#line 794 "instmap.m"
  {
#line 794 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 794 "instmap.m"
    {
#line 794 "instmap.m"
      hlds__instmap__apply_instmap_delta_3_p_0(hlds__instmap__STATE_VARIABLE_Instmap_0_6, hlds__instmap__Delta_4, hlds__instmap__STATE_VARIABLE_Instmap_7);
#line 794 "instmap.m"
      return;
    }
#line 794 "instmap.m"
  }
#line 222 "instmap.m"
}

#line 216 "instmap.m"
void MR_CALL 
hlds__instmap__apply_instmap_delta_3_p_0(
#line 216 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 216 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 216 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 216 "instmap.m"
{
#line 787 "instmap.m"
  {
#line 787 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 787 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 787 "instmap.m"
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 787 "instmap.m"
    else
#line 787 "instmap.m"
      {
#line 787 "instmap.m"
        MR_Word hlds__instmap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 787 "instmap.m"
        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 788 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 787 "instmap.m"
        else
#line 790 "instmap.m"
          {
#line 790 "instmap.m"
            MR_Word hlds__instmap__InstMappingDelta_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 790 "instmap.m"
            MR_Word hlds__instmap__InstMapping_8;

#line 791 "instmap.m"
            {
#line 791 "instmap.m"
              mercury__map__overlay_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_11_11, hlds__instmap__InstMappingDelta_7, &hlds__instmap__InstMapping_8);
            }
#line 790 "instmap.m"
            {
#line 790 "instmap.m"
              MR_Word base;
#line 790 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 790 "instmap.m"
              *hlds__instmap__HeadVar__3_3 = base;
#line 790 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_8));
#line 790 "instmap.m"
            }
#line 790 "instmap.m"
          }
#line 787 "instmap.m"
      }
#line 787 "instmap.m"
  }
#line 216 "instmap.m"
}

#line 210 "instmap.m"
void MR_CALL 
hlds__instmap__compute_instmap_delta_4_p_0(
#line 210 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 210 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 210 "instmap.m"
  MR_Word hlds__instmap__NonLocals_3,
#line 210 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 210 "instmap.m"
{
#line 1131 "instmap.m"
  {
#line 1131 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1131 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1131 "instmap.m"
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1131 "instmap.m"
    else
#line 1131 "instmap.m"
      {
#line 1131 "instmap.m"
        MR_Word hlds__instmap__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 1131 "instmap.m"
        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1132 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1131 "instmap.m"
        else
#line 1134 "instmap.m"
          {
#line 1134 "instmap.m"
            MR_Word hlds__instmap__InstMapB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 1134 "instmap.m"
            MR_Word hlds__instmap__DeltaInstMap_12;
#line 1134 "instmap.m"
            MR_Word hlds__instmap__NonLocalsList_13;
#line 1134 "instmap.m"
            MR_Word hlds__instmap__AssocList_14;

#line 1135 "instmap.m"
            {
#line 1135 "instmap.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__NonLocals_3, &hlds__instmap__NonLocalsList_13);
            }
#line 1136 "instmap.m"
            {
#line 1136 "instmap.m"
              hlds__instmap__compute_instmap_delta_2_4_p_0(hlds__instmap__NonLocalsList_13, hlds__instmap__V_18_18, hlds__instmap__InstMapB_10, &hlds__instmap__AssocList_14);
            }
#line 1137 "instmap.m"
            {
#line 1137 "instmap.m"
              mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__AssocList_14, &hlds__instmap__DeltaInstMap_12);
            }
#line 1134 "instmap.m"
            {
#line 1134 "instmap.m"
              MR_Word base;
#line 1134 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1134 "instmap.m"
              *hlds__instmap__HeadVar__4_4 = base;
#line 1134 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__DeltaInstMap_12));
#line 1134 "instmap.m"
            }
#line 1134 "instmap.m"
          }
#line 1131 "instmap.m"
      }
#line 1131 "instmap.m"
  }
#line 210 "instmap.m"
}

#line 197 "instmap.m"
void MR_CALL 
hlds__instmap__pre_lambda_update_5_p_0(
#line 197 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 197 "instmap.m"
  MR_Word hlds__instmap__Vars_7,
#line 197 "instmap.m"
  MR_Word hlds__instmap__Modes_8,
#line 197 "instmap.m"
  MR_Word hlds__instmap__InstMap0_9,
#line 197 "instmap.m"
  MR_Word * hlds__instmap__InstMap_10)
#line 197 "instmap.m"
{
#line 779 "instmap.m"
  {
#line 779 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 779 "instmap.m"
    MR_Word hlds__instmap__Insts_11;
#line 779 "instmap.m"
    MR_Word hlds__instmap__VarInsts_12;
#line 779 "instmap.m"
    MR_Word hlds__instmap__InstMapDelta_13;
#line 779 "instmap.m"
    MR_Word hlds__instmap__Instmapping_17;

#line 780 "instmap.m"
    {
#line 780 "instmap.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(hlds__instmap__ModuleInfo_6, hlds__instmap__Modes_8, &hlds__instmap__Insts_11);
    }
#line 781 "instmap.m"
    {
#line 781 "instmap.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Vars_7, hlds__instmap__Insts_11, &hlds__instmap__VarInsts_12);
    }
#line 417 "instmap.m"
    {
#line 417 "instmap.m"
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__VarInsts_12, &hlds__instmap__Instmapping_17);
    }
#line 416 "instmap.m"
    {
#line 416 "instmap.m"
      hlds__instmap__InstMapDelta_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 416 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_13, 0) = ((MR_Box) (hlds__instmap__Instmapping_17));
#line 416 "instmap.m"
    }
#line 783 "instmap.m"
    {
#line 783 "instmap.m"
      hlds__instmap__apply_instmap_delta_3_p_0(hlds__instmap__InstMap0_9, hlds__instmap__InstMapDelta_13, hlds__instmap__InstMap_10);
#line 783 "instmap.m"
      return;
    }
#line 779 "instmap.m"
  }
#line 197 "instmap.m"
}

#line 190 "instmap.m"
void MR_CALL 
hlds__instmap__bind_var_to_functors_8_p_0(
#line 190 "instmap.m"
  MR_Word hlds__instmap__Var_9,
#line 190 "instmap.m"
  MR_Word hlds__instmap__Type_10,
#line 190 "instmap.m"
  MR_Word hlds__instmap__MainConsId_11,
#line 190 "instmap.m"
  MR_Word hlds__instmap__OtherConsIds_12,
#line 190 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_17,
#line 190 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_18,
#line 190 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_19,
#line 190 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_20)
#line 190 "instmap.m"
{
#line 721 "instmap.m"
  {
#line 721 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 721 "instmap.m"
    MR_Word hlds__instmap__Inst0_15;
#line 721 "instmap.m"
    MR_Word hlds__instmap__Inst_16;
#line 721 "instmap.m"
    MR_Word hlds__instmap__MainFinalInst_31;
#line 721 "instmap.m"
    MR_Word hlds__instmap__OtherFinalInsts_32;
#line 721 "instmap.m"
    MR_Word hlds__instmap__MaybeMergedInst_33;
#line 721 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_19_34;
#line 721 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_20_35;
#line 721 "instmap.m"
    MR_Word hlds__instmap__V_36_36;
#line 721 "instmap.m"
    MR_Word hlds__instmap__V_37_37;
#line 721 "instmap.m"
    MR_Integer hlds__instmap__Arity_50;
#line 721 "instmap.m"
    MR_Word hlds__instmap__ArgLives_51;
#line 721 "instmap.m"
    MR_Word hlds__instmap__ArgInsts_52;
#line 739 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_58;
#line 739 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_59;
#line 735 "instmap.m"
    MR_Word hlds__instmap___Det_53;

#line 722 "instmap.m"
    {
#line 722 "instmap.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__STATE_VARIABLE_InstMap_0_17, hlds__instmap__Var_9, &hlds__instmap__Inst0_15);
    }
#line 731 "instmap.m"
    {
#line 731 "instmap.m"
      hlds__instmap__Arity_50 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_19, hlds__instmap__Type_10, hlds__instmap__MainConsId_11);
    }
#line 732 "instmap.m"
    {
#line 732 "instmap.m"
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_50, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_51);
    }
#line 733 "instmap.m"
    {
#line 733 "instmap.m"
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_50, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_52);
    }
#line 735 "instmap.m"
    {
#line 735 "instmap.m"
      hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__Inst0_15, hlds__instmap__MainConsId_11, hlds__instmap__ArgInsts_52, hlds__instmap__ArgLives_51, (MR_Integer) 0, hlds__instmap__Type_10, &hlds__instmap__STATE_VARIABLE_Inst_23_58, &hlds__instmap___Det_53, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_19, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_59);
    }
#line 739 "instmap.m"
    if (hlds__instmap__succeeded)
#line 738 "instmap.m"
      {
#line 738 "instmap.m"
        hlds__instmap__STATE_VARIABLE_ModuleInfo_19_34 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_59;
#line 738 "instmap.m"
        hlds__instmap__MainFinalInst_31 = hlds__instmap__STATE_VARIABLE_Inst_23_58;
#line 738 "instmap.m"
      }
#line 739 "instmap.m"
    else
#line 740 "instmap.m"
      {
#line 740 "instmap.m"
        {
#line 740 "instmap.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
#line 740 "instmap.m"
          return;
        }
#line 740 "instmap.m"
      }
#line 750 "instmap.m"
    {
#line 750 "instmap.m"
      hlds__instmap__bind_inst_to_functors_others_6_p_0(hlds__instmap__Type_10, hlds__instmap__OtherConsIds_12, hlds__instmap__Inst0_15, &hlds__instmap__OtherFinalInsts_32, hlds__instmap__STATE_VARIABLE_ModuleInfo_19_34, &hlds__instmap__STATE_VARIABLE_ModuleInfo_20_35);
    }
#line 752 "instmap.m"
    {
#line 752 "instmap.m"
      hlds__instmap__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__V_36_36, 0) = ((MR_Box) (hlds__instmap__MainFinalInst_31));
#line 752 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__V_36_36, 1) = ((MR_Box) (hlds__instmap__OtherFinalInsts_32));
#line 752 "instmap.m"
    }
#line 752 "instmap.m"
    {
#line 752 "instmap.m"
      hlds__instmap__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 752 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__V_37_37, 0) = ((MR_Box) (hlds__instmap__Type_10));
#line 752 "instmap.m"
    }
#line 752 "instmap.m"
    {
#line 752 "instmap.m"
      hlds__instmap__merge_var_insts_5_p_0(hlds__instmap__V_36_36, hlds__instmap__V_37_37, hlds__instmap__STATE_VARIABLE_ModuleInfo_20_35, hlds__instmap__STATE_VARIABLE_ModuleInfo_20, &hlds__instmap__MaybeMergedInst_33);
    }
#line 756 "instmap.m"
    if ((hlds__instmap__MaybeMergedInst_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 757 "instmap.m"
      {
#line 763 "instmap.m"
        {
#line 763 "instmap.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functors\'/7", (MR_String) "no MaybeMergedInst");
#line 763 "instmap.m"
          return;
        }
#line 757 "instmap.m"
      }
#line 756 "instmap.m"
    else
#line 755 "instmap.m"
      hlds__instmap__Inst_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MaybeMergedInst_33, (MR_Integer) 0)));
#line 559 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 559 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMap_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 559 "instmap.m"
    else
#line 560 "instmap.m"
      {
#line 560 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_17, (MR_Integer) 0)));
#line 560 "instmap.m"
        MR_Word hlds__instmap__InstMapping_72;

#line 561 "instmap.m"
        {
#line 561 "instmap.m"
          mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_9)), ((MR_Box) (hlds__instmap__Inst_16)), hlds__instmap__InstMapping0_71, &hlds__instmap__InstMapping_72);
        }
#line 560 "instmap.m"
        {
#line 560 "instmap.m"
          MR_Word base;
#line 560 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 560 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMap_18 = base;
#line 560 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_72));
#line 560 "instmap.m"
        }
#line 560 "instmap.m"
      }
#line 721 "instmap.m"
  }
#line 190 "instmap.m"
}

#line 187 "instmap.m"
void MR_CALL 
hlds__instmap__bind_var_to_functor_7_p_0(
#line 187 "instmap.m"
  MR_Word hlds__instmap__Var_8,
#line 187 "instmap.m"
  MR_Word hlds__instmap__Type_9,
#line 187 "instmap.m"
  MR_Word hlds__instmap__ConsId_10,
#line 187 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_15,
#line 187 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_16,
#line 187 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_17,
#line 187 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_18)
#line 187 "instmap.m"
{
#line 715 "instmap.m"
  {
#line 715 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 715 "instmap.m"
    MR_Word hlds__instmap__Inst0_13;
#line 715 "instmap.m"
    MR_Word hlds__instmap__Inst_14;
#line 715 "instmap.m"
    MR_Integer hlds__instmap__Arity_29;
#line 715 "instmap.m"
    MR_Word hlds__instmap__ArgLives_30;
#line 715 "instmap.m"
    MR_Word hlds__instmap__ArgInsts_31;
#line 739 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_37;
#line 739 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_38;
#line 735 "instmap.m"
    MR_Word hlds__instmap___Det_32;

#line 716 "instmap.m"
    {
#line 716 "instmap.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__STATE_VARIABLE_InstMap_0_15, hlds__instmap__Var_8, &hlds__instmap__Inst0_13);
    }
#line 731 "instmap.m"
    {
#line 731 "instmap.m"
      hlds__instmap__Arity_29 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_17, hlds__instmap__Type_9, hlds__instmap__ConsId_10);
    }
#line 732 "instmap.m"
    {
#line 732 "instmap.m"
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_29, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_30);
    }
#line 733 "instmap.m"
    {
#line 733 "instmap.m"
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_29, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_31);
    }
#line 735 "instmap.m"
    {
#line 735 "instmap.m"
      hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__Inst0_13, hlds__instmap__ConsId_10, hlds__instmap__ArgInsts_31, hlds__instmap__ArgLives_30, (MR_Integer) 0, hlds__instmap__Type_9, &hlds__instmap__STATE_VARIABLE_Inst_23_37, &hlds__instmap___Det_32, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_17, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_38);
    }
#line 739 "instmap.m"
    if (hlds__instmap__succeeded)
#line 738 "instmap.m"
      {
#line 738 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_18 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_38;
#line 738 "instmap.m"
        hlds__instmap__Inst_14 = hlds__instmap__STATE_VARIABLE_Inst_23_37;
#line 738 "instmap.m"
      }
#line 739 "instmap.m"
    else
#line 740 "instmap.m"
      {
#line 740 "instmap.m"
        {
#line 740 "instmap.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
#line 740 "instmap.m"
          return;
        }
#line 740 "instmap.m"
      }
#line 559 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 559 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMap_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 559 "instmap.m"
    else
#line 560 "instmap.m"
      {
#line 560 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_15, (MR_Integer) 0)));
#line 560 "instmap.m"
        MR_Word hlds__instmap__InstMapping_51;

#line 561 "instmap.m"
        {
#line 561 "instmap.m"
          mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_8)), ((MR_Box) (hlds__instmap__Inst_14)), hlds__instmap__InstMapping0_50, &hlds__instmap__InstMapping_51);
        }
#line 560 "instmap.m"
        {
#line 560 "instmap.m"
          MR_Word base;
#line 560 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 560 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMap_16 = base;
#line 560 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_51));
#line 560 "instmap.m"
        }
#line 560 "instmap.m"
      }
#line 715 "instmap.m"
  }
#line 187 "instmap.m"
}

#line 182 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_bind_var_to_functors_9_p_0(
#line 182 "instmap.m"
  MR_Word hlds__instmap__Var_10,
#line 182 "instmap.m"
  MR_Word hlds__instmap__Type_11,
#line 182 "instmap.m"
  MR_Word hlds__instmap__MainConsId_12,
#line 182 "instmap.m"
  MR_Word hlds__instmap__OtherConsIds_13,
#line 182 "instmap.m"
  MR_Word hlds__instmap__InstMap_14,
#line 182 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22,
#line 182 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstmapDelta_23,
#line 182 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_24,
#line 182 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_25)
#line 182 "instmap.m"
{
#line 690 "instmap.m"
  {
#line 690 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 690 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 690 "instmap.m"
      {
#line 690 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_InstmapDelta_23 = hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22;
#line 690 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_25 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_24;
#line 690 "instmap.m"
      }
#line 690 "instmap.m"
    else
#line 692 "instmap.m"
      {
#line 692 "instmap.m"
        MR_Word hlds__instmap__InstmappingDelta0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22, (MR_Integer) 0)));
#line 692 "instmap.m"
        MR_Word hlds__instmap__OldInst_18;
#line 692 "instmap.m"
        MR_Word hlds__instmap__NewInst1_20;
#line 692 "instmap.m"
        MR_Word hlds__instmap__NewInst_21;
#line 692 "instmap.m"
        MR_Word hlds__instmap__MainFinalInst_39;
#line 692 "instmap.m"
        MR_Word hlds__instmap__OtherFinalInsts_40;
#line 692 "instmap.m"
        MR_Word hlds__instmap__MaybeMergedInst_41;
#line 692 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_19_42;
#line 692 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_20_43;
#line 692 "instmap.m"
        MR_Word hlds__instmap__V_44_44;
#line 692 "instmap.m"
        MR_Word hlds__instmap__V_45_45;
#line 692 "instmap.m"
        MR_Integer hlds__instmap__Arity_58;
#line 692 "instmap.m"
        MR_Word hlds__instmap__ArgLives_59;
#line 692 "instmap.m"
        MR_Word hlds__instmap__ArgInsts_60;
#line 701 "instmap.m"
        MR_Word hlds__instmap__NewInst0_19;
#line 699 "instmap.m"
        MR_Box hlds__instmap__conv0_NewInst0_19;
#line 739 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_66;
#line 739 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_67;
#line 735 "instmap.m"
        MR_Word hlds__instmap___Det_61;

#line 695 "instmap.m"
        {
#line 695 "instmap.m"
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_14, hlds__instmap__Var_10, &hlds__instmap__OldInst_18);
        }
#line 699 "instmap.m"
        {
#line 699 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstmappingDelta0_17, ((MR_Box) (hlds__instmap__Var_10)), &hlds__instmap__conv0_NewInst0_19);
        }
#line 699 "instmap.m"
        if (hlds__instmap__succeeded)
#line 699 "instmap.m"
          {
#line 699 "instmap.m"
            hlds__instmap__NewInst0_19 = ((MR_Word) hlds__instmap__conv0_NewInst0_19);
#line 699 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 699 "instmap.m"
          }
#line 701 "instmap.m"
        if (hlds__instmap__succeeded)
#line 700 "instmap.m"
          hlds__instmap__NewInst1_20 = hlds__instmap__NewInst0_19;
#line 701 "instmap.m"
        else
#line 702 "instmap.m"
          hlds__instmap__NewInst1_20 = hlds__instmap__OldInst_18;
#line 731 "instmap.m"
        {
#line 731 "instmap.m"
          hlds__instmap__Arity_58 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_24, hlds__instmap__Type_11, hlds__instmap__MainConsId_12);
        }
#line 732 "instmap.m"
        {
#line 732 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_58, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_59);
        }
#line 733 "instmap.m"
        {
#line 733 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_58, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_60);
        }
#line 735 "instmap.m"
        {
#line 735 "instmap.m"
          hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__NewInst1_20, hlds__instmap__MainConsId_12, hlds__instmap__ArgInsts_60, hlds__instmap__ArgLives_59, (MR_Integer) 0, hlds__instmap__Type_11, &hlds__instmap__STATE_VARIABLE_Inst_23_66, &hlds__instmap___Det_61, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_24, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_67);
        }
#line 739 "instmap.m"
        if (hlds__instmap__succeeded)
#line 738 "instmap.m"
          {
#line 738 "instmap.m"
            hlds__instmap__STATE_VARIABLE_ModuleInfo_19_42 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_67;
#line 738 "instmap.m"
            hlds__instmap__MainFinalInst_39 = hlds__instmap__STATE_VARIABLE_Inst_23_66;
#line 738 "instmap.m"
          }
#line 739 "instmap.m"
        else
#line 740 "instmap.m"
          {
#line 740 "instmap.m"
            {
#line 740 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
#line 740 "instmap.m"
              return;
            }
#line 740 "instmap.m"
          }
#line 750 "instmap.m"
        {
#line 750 "instmap.m"
          hlds__instmap__bind_inst_to_functors_others_6_p_0(hlds__instmap__Type_11, hlds__instmap__OtherConsIds_13, hlds__instmap__NewInst1_20, &hlds__instmap__OtherFinalInsts_40, hlds__instmap__STATE_VARIABLE_ModuleInfo_19_42, &hlds__instmap__STATE_VARIABLE_ModuleInfo_20_43);
        }
#line 752 "instmap.m"
        {
#line 752 "instmap.m"
          hlds__instmap__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "instmap.m"
          MR_hl_field(MR_mktag(1), hlds__instmap__V_44_44, 0) = ((MR_Box) (hlds__instmap__MainFinalInst_39));
#line 752 "instmap.m"
          MR_hl_field(MR_mktag(1), hlds__instmap__V_44_44, 1) = ((MR_Box) (hlds__instmap__OtherFinalInsts_40));
#line 752 "instmap.m"
        }
#line 752 "instmap.m"
        {
#line 752 "instmap.m"
          hlds__instmap__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 752 "instmap.m"
          MR_hl_field(MR_mktag(1), hlds__instmap__V_45_45, 0) = ((MR_Box) (hlds__instmap__Type_11));
#line 752 "instmap.m"
        }
#line 752 "instmap.m"
        {
#line 752 "instmap.m"
          hlds__instmap__merge_var_insts_5_p_0(hlds__instmap__V_44_44, hlds__instmap__V_45_45, hlds__instmap__STATE_VARIABLE_ModuleInfo_20_43, hlds__instmap__STATE_VARIABLE_ModuleInfo_25, &hlds__instmap__MaybeMergedInst_41);
        }
#line 756 "instmap.m"
        if ((hlds__instmap__MaybeMergedInst_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 757 "instmap.m"
          {
#line 763 "instmap.m"
            {
#line 763 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functors\'/7", (MR_String) "no MaybeMergedInst");
#line 763 "instmap.m"
              return;
            }
#line 757 "instmap.m"
          }
#line 756 "instmap.m"
        else
#line 755 "instmap.m"
          hlds__instmap__NewInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MaybeMergedInst_41, (MR_Integer) 0)));
#line 708 "instmap.m"
        {
#line 708 "instmap.m"
          hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__NewInst_21, hlds__instmap__OldInst_18);
        }
#line 708 "instmap.m"
        hlds__instmap__succeeded = !(hlds__instmap__succeeded);
#line 710 "instmap.m"
        if (hlds__instmap__succeeded)
#line 629 "instmap.m"
          {
#line 629 "instmap.m"
            MR_Word hlds__instmap__InstMapping0_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22, (MR_Integer) 0)));

#line 630 "instmap.m"
            hlds__instmap__succeeded = (hlds__instmap__NewInst_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 632 "instmap.m"
            if (hlds__instmap__succeeded)
#line 631 "instmap.m"
              *hlds__instmap__STATE_VARIABLE_InstmapDelta_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 632 "instmap.m"
            else
#line 633 "instmap.m"
              {
#line 633 "instmap.m"
                MR_Word hlds__instmap__InstMapping_81;

#line 633 "instmap.m"
                {
#line 633 "instmap.m"
                  mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_10)), ((MR_Box) (hlds__instmap__NewInst_21)), hlds__instmap__InstMapping0_79, &hlds__instmap__InstMapping_81);
                }
#line 634 "instmap.m"
                {
#line 634 "instmap.m"
                  MR_Word base;
#line 634 "instmap.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 634 "instmap.m"
                  *hlds__instmap__STATE_VARIABLE_InstmapDelta_23 = base;
#line 634 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_81));
#line 634 "instmap.m"
                }
#line 633 "instmap.m"
              }
#line 629 "instmap.m"
          }
#line 710 "instmap.m"
        else
#line 709 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstmapDelta_23 = hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22;
#line 692 "instmap.m"
      }
#line 690 "instmap.m"
  }
#line 182 "instmap.m"
}

#line 178 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_bind_var_to_functor_8_p_0(
#line 178 "instmap.m"
  MR_Word hlds__instmap__Var_9,
#line 178 "instmap.m"
  MR_Word hlds__instmap__Type_10,
#line 178 "instmap.m"
  MR_Word hlds__instmap__ConsId_11,
#line 178 "instmap.m"
  MR_Word hlds__instmap__InstMap_12,
#line 178 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20,
#line 178 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstmapDelta_21,
#line 178 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_22,
#line 178 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_23)
#line 178 "instmap.m"
{
#line 663 "instmap.m"
  {
#line 663 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 663 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 663 "instmap.m"
      {
#line 663 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_InstmapDelta_21 = hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20;
#line 663 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_23 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_22;
#line 663 "instmap.m"
      }
#line 663 "instmap.m"
    else
#line 665 "instmap.m"
      {
#line 665 "instmap.m"
        MR_Word hlds__instmap__InstmappingDelta0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20, (MR_Integer) 0)));
#line 665 "instmap.m"
        MR_Word hlds__instmap__OldInst_16;
#line 665 "instmap.m"
        MR_Word hlds__instmap__NewInst1_18;
#line 665 "instmap.m"
        MR_Word hlds__instmap__NewInst_19;
#line 665 "instmap.m"
        MR_Integer hlds__instmap__Arity_37;
#line 665 "instmap.m"
        MR_Word hlds__instmap__ArgLives_38;
#line 665 "instmap.m"
        MR_Word hlds__instmap__ArgInsts_39;
#line 674 "instmap.m"
        MR_Word hlds__instmap__NewInst0_17;
#line 672 "instmap.m"
        MR_Box hlds__instmap__conv0_NewInst0_17;
#line 739 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_45;
#line 739 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_46;
#line 735 "instmap.m"
        MR_Word hlds__instmap___Det_40;

#line 668 "instmap.m"
        {
#line 668 "instmap.m"
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_12, hlds__instmap__Var_9, &hlds__instmap__OldInst_16);
        }
#line 672 "instmap.m"
        {
#line 672 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstmappingDelta0_15, ((MR_Box) (hlds__instmap__Var_9)), &hlds__instmap__conv0_NewInst0_17);
        }
#line 672 "instmap.m"
        if (hlds__instmap__succeeded)
#line 672 "instmap.m"
          {
#line 672 "instmap.m"
            hlds__instmap__NewInst0_17 = ((MR_Word) hlds__instmap__conv0_NewInst0_17);
#line 672 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 672 "instmap.m"
          }
#line 674 "instmap.m"
        if (hlds__instmap__succeeded)
#line 673 "instmap.m"
          hlds__instmap__NewInst1_18 = hlds__instmap__NewInst0_17;
#line 674 "instmap.m"
        else
#line 675 "instmap.m"
          hlds__instmap__NewInst1_18 = hlds__instmap__OldInst_16;
#line 731 "instmap.m"
        {
#line 731 "instmap.m"
          hlds__instmap__Arity_37 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_22, hlds__instmap__Type_10, hlds__instmap__ConsId_11);
        }
#line 732 "instmap.m"
        {
#line 732 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_37, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_38);
        }
#line 733 "instmap.m"
        {
#line 733 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_37, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_39);
        }
#line 735 "instmap.m"
        {
#line 735 "instmap.m"
          hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__NewInst1_18, hlds__instmap__ConsId_11, hlds__instmap__ArgInsts_39, hlds__instmap__ArgLives_38, (MR_Integer) 0, hlds__instmap__Type_10, &hlds__instmap__STATE_VARIABLE_Inst_23_45, &hlds__instmap___Det_40, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_22, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_46);
        }
#line 739 "instmap.m"
        if (hlds__instmap__succeeded)
#line 738 "instmap.m"
          {
#line 738 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_23 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_46;
#line 738 "instmap.m"
            hlds__instmap__NewInst_19 = hlds__instmap__STATE_VARIABLE_Inst_23_45;
#line 738 "instmap.m"
          }
#line 739 "instmap.m"
        else
#line 740 "instmap.m"
          {
#line 740 "instmap.m"
            {
#line 740 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
#line 740 "instmap.m"
              return;
            }
#line 740 "instmap.m"
          }
#line 680 "instmap.m"
        {
#line 680 "instmap.m"
          hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__NewInst_19, hlds__instmap__OldInst_16);
        }
#line 680 "instmap.m"
        hlds__instmap__succeeded = !(hlds__instmap__succeeded);
#line 682 "instmap.m"
        if (hlds__instmap__succeeded)
#line 629 "instmap.m"
          {
#line 629 "instmap.m"
            MR_Word hlds__instmap__InstMapping0_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20, (MR_Integer) 0)));

#line 630 "instmap.m"
            hlds__instmap__succeeded = (hlds__instmap__NewInst_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 632 "instmap.m"
            if (hlds__instmap__succeeded)
#line 631 "instmap.m"
              *hlds__instmap__STATE_VARIABLE_InstmapDelta_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 632 "instmap.m"
            else
#line 633 "instmap.m"
              {
#line 633 "instmap.m"
                MR_Word hlds__instmap__InstMapping_60;

#line 633 "instmap.m"
                {
#line 633 "instmap.m"
                  mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_9)), ((MR_Box) (hlds__instmap__NewInst_19)), hlds__instmap__InstMapping0_58, &hlds__instmap__InstMapping_60);
                }
#line 634 "instmap.m"
                {
#line 634 "instmap.m"
                  MR_Word base;
#line 634 "instmap.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 634 "instmap.m"
                  *hlds__instmap__STATE_VARIABLE_InstmapDelta_21 = base;
#line 634 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_60));
#line 634 "instmap.m"
                }
#line 633 "instmap.m"
              }
#line 629 "instmap.m"
          }
#line 682 "instmap.m"
        else
#line 681 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstmapDelta_21 = hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20;
#line 665 "instmap.m"
      }
#line 663 "instmap.m"
  }
#line 178 "instmap.m"
}

#line 643 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_2(
#line 643 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 643 "instmap.m"
{
#line 643 "instmap.m"
  {
#line 643 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 643 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 643 "instmap.m"
    {
#line 643 "instmap.m"
      return hlds__instmap__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))));
    }
#line 643 "instmap.m"
    return hlds__instmap__succeeded;
#line 643 "instmap.m"
  }
#line 643 "instmap.m"
}

#line 643 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_1(
#line 643 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 643 "instmap.m"
{
#line 643 "instmap.m"
  {
#line 643 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 643 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 643 "instmap.m"
    {
#line 643 "instmap.m"
      return hlds__instmap__succeeded = hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__643__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))));
    }
#line 643 "instmap.m"
    return hlds__instmap__succeeded;
#line 643 "instmap.m"
  }
#line 643 "instmap.m"
}

#line 172 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0(
#line 172 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 172 "instmap.m"
  MR_Word hlds__instmap__Vars_6,
#line 172 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_0_10,
#line 172 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapDelta_11)
#line 172 "instmap.m"
{
#line 639 "instmap.m"
  {
#line 639 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 639 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMapDelta_0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 639 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMapDelta_11 = hlds__instmap__STATE_VARIABLE_InstMapDelta_0_10;
#line 639 "instmap.m"
    else
#line 642 "instmap.m"
      {
#line 642 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMapDelta_0_10, (MR_Integer) 0)));
#line 642 "instmap.m"
        MR_Word hlds__instmap__InstMapping_9;
#line 642 "instmap.m"
        MR_Word hlds__instmap__V_12_12;
#line 642 "instmap.m"
        MR_Word hlds__instmap__V_16_16;

#line 643 "instmap.m"
        {
#line 643 "instmap.m"
          hlds__instmap__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 643 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
#line 643 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 1) = ((MR_Box) (hlds__instmap__instmap_delta_set_vars_same_4_p_0_1));
#line 643 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 643 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 3) = ((MR_Box) (hlds__instmap__Inst_5));
#line 643 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 643 "instmap.m"
        }
#line 643 "instmap.m"
        {
#line 643 "instmap.m"
          hlds__instmap__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 643 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
#line 643 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 1) = ((MR_Box) (hlds__instmap__instmap_delta_set_vars_same_4_p_0_2));
#line 643 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 643 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 3) = ((MR_Box) (hlds__instmap__V_16_16));
#line 643 "instmap.m"
        }
#line 643 "instmap.m"
        {
#line 643 "instmap.m"
          mercury__require__expect_4_p_0(hlds__instmap__V_12_12, (MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_delta_set_vars_same\'/4", (MR_String) "not_reached");
        }
#line 645 "instmap.m"
        {
#line 645 "instmap.m"
          hlds__instmap__instmapping_set_vars_same_4_p_0(hlds__instmap__Inst_5, hlds__instmap__Vars_6, hlds__instmap__InstMapping0_8, &hlds__instmap__InstMapping_9);
        }
#line 646 "instmap.m"
        {
#line 646 "instmap.m"
          MR_Word base;
#line 646 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 646 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMapDelta_11 = base;
#line 646 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_9));
#line 646 "instmap.m"
        }
#line 642 "instmap.m"
      }
#line 639 "instmap.m"
  }
#line 172 "instmap.m"
}

#line 169 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_set_var_4_p_0(
#line 169 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 169 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 169 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 169 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 169 "instmap.m"
{
#line 628 "instmap.m"
  {
#line 628 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 628 "instmap.m"
    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 628 "instmap.m"
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 628 "instmap.m"
    else
#line 629 "instmap.m"
      {
#line 629 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));

#line 630 "instmap.m"
        hlds__instmap__succeeded = (hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 632 "instmap.m"
        if (hlds__instmap__succeeded)
#line 631 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 632 "instmap.m"
        else
#line 633 "instmap.m"
          {
#line 633 "instmap.m"
            MR_Word hlds__instmap__InstMapping_11;

#line 633 "instmap.m"
            {
#line 633 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__HeadVar__1_1)), ((MR_Box) (hlds__instmap__HeadVar__2_2)), hlds__instmap__InstMapping0_9, &hlds__instmap__InstMapping_11);
            }
#line 634 "instmap.m"
            {
#line 634 "instmap.m"
              MR_Word base;
#line 634 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 634 "instmap.m"
              *hlds__instmap__HeadVar__4_4 = base;
#line 634 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_11));
#line 634 "instmap.m"
            }
#line 633 "instmap.m"
          }
#line 629 "instmap.m"
      }
#line 628 "instmap.m"
  }
#line 169 "instmap.m"
}

#line 614 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_2(
#line 614 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 614 "instmap.m"
{
#line 614 "instmap.m"
  {
#line 614 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 614 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 614 "instmap.m"
    {
#line 614 "instmap.m"
      return hlds__instmap__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))));
    }
#line 614 "instmap.m"
    return hlds__instmap__succeeded;
#line 614 "instmap.m"
  }
#line 614 "instmap.m"
}

#line 614 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_1(
#line 614 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 614 "instmap.m"
{
#line 614 "instmap.m"
  {
#line 614 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 614 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 614 "instmap.m"
    {
#line 614 "instmap.m"
      return hlds__instmap__succeeded = hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__614__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))));
    }
#line 614 "instmap.m"
    return hlds__instmap__succeeded;
#line 614 "instmap.m"
  }
#line 614 "instmap.m"
}

#line 166 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0(
#line 166 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 166 "instmap.m"
  MR_Word hlds__instmap__Vars_6,
#line 166 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_10,
#line 166 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_11)
#line 166 "instmap.m"
{
#line 610 "instmap.m"
  {
#line 610 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 610 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMap_11 = hlds__instmap__STATE_VARIABLE_InstMap_0_10;
#line 610 "instmap.m"
    else
#line 613 "instmap.m"
      {
#line 613 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_10, (MR_Integer) 0)));
#line 613 "instmap.m"
        MR_Word hlds__instmap__InstMapping_9;
#line 613 "instmap.m"
        MR_Word hlds__instmap__V_12_12;
#line 613 "instmap.m"
        MR_Word hlds__instmap__V_16_16;

#line 614 "instmap.m"
        {
#line 614 "instmap.m"
          hlds__instmap__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 614 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
#line 614 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 1) = ((MR_Box) (hlds__instmap__instmap_set_vars_same_4_p_0_1));
#line 614 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 614 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 3) = ((MR_Box) (hlds__instmap__Inst_5));
#line 614 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 614 "instmap.m"
        }
#line 614 "instmap.m"
        {
#line 614 "instmap.m"
          hlds__instmap__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 614 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
#line 614 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 1) = ((MR_Box) (hlds__instmap__instmap_set_vars_same_4_p_0_2));
#line 614 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 614 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 3) = ((MR_Box) (hlds__instmap__V_16_16));
#line 614 "instmap.m"
        }
#line 614 "instmap.m"
        {
#line 614 "instmap.m"
          mercury__require__expect_4_p_0(hlds__instmap__V_12_12, (MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_set_vars_same\'/4", (MR_String) "not_reached");
        }
#line 616 "instmap.m"
        {
#line 616 "instmap.m"
          hlds__instmap__instmapping_set_vars_same_4_p_0(hlds__instmap__Inst_5, hlds__instmap__Vars_6, hlds__instmap__InstMapping0_8, &hlds__instmap__InstMapping_9);
        }
#line 617 "instmap.m"
        {
#line 617 "instmap.m"
          MR_Word base;
#line 617 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 617 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMap_11 = base;
#line 617 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_9));
#line 617 "instmap.m"
        }
#line 613 "instmap.m"
      }
#line 610 "instmap.m"
  }
#line 166 "instmap.m"
}

#line 164 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_set_vars_corresponding_4_p_0(
#line 164 "instmap.m"
  MR_Word hlds__instmap__Vars_5,
#line 164 "instmap.m"
  MR_Word hlds__instmap__Insts_6,
#line 164 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_10,
#line 164 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_11)
#line 164 "instmap.m"
{
#line 584 "instmap.m"
  {
#line 584 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 584 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 584 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMap_11 = hlds__instmap__STATE_VARIABLE_InstMap_0_10;
#line 584 "instmap.m"
    else
#line 587 "instmap.m"
      {
#line 587 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_10, (MR_Integer) 0)));
#line 587 "instmap.m"
        MR_Word hlds__instmap__InstMapping_9;

#line 588 "instmap.m"
        {
#line 588 "instmap.m"
          hlds__instmap__instmapping_set_vars_corresponding_4_p_0(hlds__instmap__Vars_5, hlds__instmap__Insts_6, hlds__instmap__InstMapping0_8, &hlds__instmap__InstMapping_9);
        }
#line 590 "instmap.m"
        {
#line 590 "instmap.m"
          MR_Word base;
#line 590 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 590 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMap_11 = base;
#line 590 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_9));
#line 590 "instmap.m"
        }
#line 587 "instmap.m"
      }
#line 584 "instmap.m"
  }
#line 164 "instmap.m"
}

#line 162 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_set_vars_3_p_0(
#line 162 "instmap.m"
  MR_Word hlds__instmap__VarsInsts_4,
#line 162 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_8,
#line 162 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_9)
#line 162 "instmap.m"
{
#line 565 "instmap.m"
  {
#line 565 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 565 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 565 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMap_9 = hlds__instmap__STATE_VARIABLE_InstMap_0_8;
#line 565 "instmap.m"
    else
#line 568 "instmap.m"
      {
#line 568 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_8, (MR_Integer) 0)));
#line 568 "instmap.m"
        MR_Word hlds__instmap__InstMapping_7;

#line 569 "instmap.m"
        {
#line 569 "instmap.m"
          hlds__instmap__instmapping_set_vars_3_p_0(hlds__instmap__VarsInsts_4, hlds__instmap__InstMapping0_6, &hlds__instmap__InstMapping_7);
        }
#line 570 "instmap.m"
        {
#line 570 "instmap.m"
          MR_Word base;
#line 570 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 570 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMap_9 = base;
#line 570 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_7));
#line 570 "instmap.m"
        }
#line 568 "instmap.m"
      }
#line 565 "instmap.m"
  }
#line 162 "instmap.m"
}

#line 156 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_set_var_4_p_0(
#line 156 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 156 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 156 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 156 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 156 "instmap.m"
{
#line 559 "instmap.m"
  {
#line 559 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 559 "instmap.m"
    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 559 "instmap.m"
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 559 "instmap.m"
    else
#line 560 "instmap.m"
      {
#line 560 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));
#line 560 "instmap.m"
        MR_Word hlds__instmap__InstMapping_10;

#line 561 "instmap.m"
        {
#line 561 "instmap.m"
          mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__HeadVar__1_1)), ((MR_Box) (hlds__instmap__HeadVar__2_2)), hlds__instmap__InstMapping0_9, &hlds__instmap__InstMapping_10);
        }
#line 560 "instmap.m"
        {
#line 560 "instmap.m"
          MR_Word base;
#line 560 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 560 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = base;
#line 560 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_10));
#line 560 "instmap.m"
        }
#line 560 "instmap.m"
      }
#line 559 "instmap.m"
  }
#line 156 "instmap.m"
}

#line 151 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_insert_var_4_p_0(
#line 151 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 151 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 151 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 151 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 151 "instmap.m"
{
#line 649 "instmap.m"
  {
#line 649 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 649 "instmap.m"
    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 649 "instmap.m"
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 649 "instmap.m"
    else
#line 650 "instmap.m"
      {
#line 650 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));

#line 651 "instmap.m"
        hlds__instmap__succeeded = (hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 653 "instmap.m"
        if (hlds__instmap__succeeded)
#line 652 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 653 "instmap.m"
        else
#line 654 "instmap.m"
          {
#line 654 "instmap.m"
            MR_Word hlds__instmap__InstMapping_11;

#line 654 "instmap.m"
            {
#line 654 "instmap.m"
              mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__HeadVar__1_1)), ((MR_Box) (hlds__instmap__HeadVar__2_2)), hlds__instmap__InstMapping0_9, &hlds__instmap__InstMapping_11);
            }
#line 655 "instmap.m"
            {
#line 655 "instmap.m"
              MR_Word base;
#line 655 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 655 "instmap.m"
              *hlds__instmap__HeadVar__4_4 = base;
#line 655 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_11));
#line 655 "instmap.m"
            }
#line 654 "instmap.m"
          }
#line 650 "instmap.m"
      }
#line 649 "instmap.m"
  }
#line 151 "instmap.m"
}

#line 145 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_lookup_vars_3_p_0(
#line 145 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 145 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 145 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 145 "instmap.m"
{
#line 554 "instmap.m"
  {
#line 554 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 554 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 554 "instmap.m"
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 554 "instmap.m"
    else
#line 555 "instmap.m"
      {
#line 555 "instmap.m"
        MR_Word hlds__instmap__Arg_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 555 "instmap.m"
        MR_Word hlds__instmap__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 555 "instmap.m"
        MR_Word hlds__instmap__Inst_8;
#line 555 "instmap.m"
        MR_Word hlds__instmap__Insts_9;

#line 556 "instmap.m"
        {
#line 556 "instmap.m"
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__HeadVar__1_1, hlds__instmap__Arg_6, &hlds__instmap__Inst_8);
        }
#line 557 "instmap.m"
        {
#line 557 "instmap.m"
          hlds__instmap__instmap_lookup_vars_3_p_0(hlds__instmap__HeadVar__1_1, hlds__instmap__Args_7, &hlds__instmap__Insts_9);
        }
#line 555 "instmap.m"
        {
#line 555 "instmap.m"
          MR_Word base;
#line 555 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = base;
#line 555 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Inst_8));
#line 555 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__Insts_9));
#line 555 "instmap.m"
        }
#line 555 "instmap.m"
      }
#line 554 "instmap.m"
  }
#line 145 "instmap.m"
}

#line 139 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_lookup_var_3_p_0(
#line 139 "instmap.m"
  MR_Word hlds__instmap__InstMapDelta_4,
#line 139 "instmap.m"
  MR_Word hlds__instmap__Var_5,
#line 139 "instmap.m"
  MR_Word * hlds__instmap__Inst_6)
#line 139 "instmap.m"
{
#line 550 "instmap.m"
  {
#line 550 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 550 "instmap.m"
    MR_Word hlds__instmap__InstPrime_7;

#line 543 "instmap.m"
    if ((hlds__instmap__InstMapDelta_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 543 "instmap.m"
      {
#line 543 "instmap.m"
        hlds__instmap__InstPrime_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 543 "instmap.m"
        hlds__instmap__succeeded = MR_TRUE;
#line 543 "instmap.m"
      }
#line 543 "instmap.m"
    else
#line 544 "instmap.m"
      {
#line 544 "instmap.m"
        MR_Word hlds__instmap__InstMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_4, (MR_Integer) 0)));
#line 545 "instmap.m"
        MR_Box hlds__instmap__conv0_InstPrime_7;

#line 545 "instmap.m"
        {
#line 545 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMap_12, ((MR_Box) (hlds__instmap__Var_5)), &hlds__instmap__conv0_InstPrime_7);
        }
#line 545 "instmap.m"
        if (hlds__instmap__succeeded)
#line 545 "instmap.m"
          {
#line 545 "instmap.m"
            hlds__instmap__InstPrime_7 = ((MR_Word) hlds__instmap__conv0_InstPrime_7);
#line 545 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 545 "instmap.m"
          }
#line 544 "instmap.m"
      }
#line 550 "instmap.m"
    if (hlds__instmap__succeeded)
#line 549 "instmap.m"
      *hlds__instmap__Inst_6 = hlds__instmap__InstPrime_7;
#line 550 "instmap.m"
    else
#line 551 "instmap.m"
      {
#line 551 "instmap.m"
        {
#line 551 "instmap.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_delta_lookup_var\'/3", (MR_String) "var not in instmap");
#line 551 "instmap.m"
          return;
        }
#line 551 "instmap.m"
      }
#line 550 "instmap.m"
  }
#line 139 "instmap.m"
}

#line 133 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__instmap_delta_search_var_3_p_0(
#line 133 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 133 "instmap.m"
  MR_Word hlds__instmap__Var_2,
#line 133 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 133 "instmap.m"
{
#line 543 "instmap.m"
  {
#line 543 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 543 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 543 "instmap.m"
      {
#line 543 "instmap.m"
        *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 543 "instmap.m"
        hlds__instmap__succeeded = MR_TRUE;
#line 543 "instmap.m"
      }
#line 543 "instmap.m"
    else
#line 544 "instmap.m"
      {
#line 544 "instmap.m"
        MR_Word hlds__instmap__InstMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 545 "instmap.m"
        MR_Box hlds__instmap__conv0_HeadVar__3_3;

#line 545 "instmap.m"
        {
#line 545 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMap_5, ((MR_Box) (hlds__instmap__Var_2)), &hlds__instmap__conv0_HeadVar__3_3);
        }
#line 545 "instmap.m"
        if (hlds__instmap__succeeded)
#line 545 "instmap.m"
          {
#line 545 "instmap.m"
            *hlds__instmap__HeadVar__3_3 = ((MR_Word) hlds__instmap__conv0_HeadVar__3_3);
#line 545 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 545 "instmap.m"
          }
#line 544 "instmap.m"
      }
#line 543 "instmap.m"
    return hlds__instmap__succeeded;
#line 543 "instmap.m"
  }
#line 133 "instmap.m"
}

#line 128 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_lookup_var_3_p_0(
#line 128 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 128 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 128 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 128 "instmap.m"
{
#line 529 "instmap.m"
  {
#line 529 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 529 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 529 "instmap.m"
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 529 "instmap.m"
    else
#line 530 "instmap.m"
      {
#line 530 "instmap.m"
        MR_Word hlds__instmap__InstMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 539 "instmap.m"
        MR_Word hlds__instmap__VarInst_11;
#line 537 "instmap.m"
        MR_Box hlds__instmap__conv0_VarInst_11;

#line 537 "instmap.m"
        {
#line 537 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMap_5, ((MR_Box) (hlds__instmap__HeadVar__2_2)), &hlds__instmap__conv0_VarInst_11);
        }
#line 537 "instmap.m"
        if (hlds__instmap__succeeded)
#line 537 "instmap.m"
          {
#line 537 "instmap.m"
            hlds__instmap__VarInst_11 = ((MR_Word) hlds__instmap__conv0_VarInst_11);
#line 537 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 537 "instmap.m"
          }
#line 539 "instmap.m"
        if (hlds__instmap__succeeded)
#line 538 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = hlds__instmap__VarInst_11;
#line 539 "instmap.m"
        else
#line 540 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 530 "instmap.m"
      }
#line 529 "instmap.m"
  }
#line 128 "instmap.m"
}

#line 121 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_changed_vars_5_p_0(
#line 121 "instmap.m"
  MR_Word hlds__instmap__InstMapA_6,
#line 121 "instmap.m"
  MR_Word hlds__instmap__InstMapB_7,
#line 121 "instmap.m"
  MR_Word hlds__instmap__VarTypes_8,
#line 121 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_9,
#line 121 "instmap.m"
  MR_Word * hlds__instmap__ChangedVars_10)
#line 121 "instmap.m"
{
#line 8432 "hlds.instmap.c"
  {
#line 8434 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 8437 "hlds.instmap.c"
    if ((hlds__instmap__InstMapB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8439 "hlds.instmap.c"
      {
#line 511 "instmap.m"
        {
#line 511 "instmap.m"
          parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__ChangedVars_10);
#line 511 "instmap.m"
          return;
        }
#line 8448 "hlds.instmap.c"
      }
#line 8450 "hlds.instmap.c"
    else
#line 8452 "hlds.instmap.c"
      {
#line 8454 "hlds.instmap.c"
        MR_Word hlds__instmap__VarsB_11;
#line 8456 "hlds.instmap.c"
        MR_Word hlds__instmap__InstMapping_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapB_7, (MR_Integer) 0)));

#line 476 "instmap.m"
        {
#line 476 "instmap.m"
          mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_12, &hlds__instmap__VarsB_11);
        }
#line 503 "instmap.m"
        {
#line 503 "instmap.m"
          hlds__instmap__instmap_changed_vars_2_6_p_0(hlds__instmap__VarsB_11, hlds__instmap__InstMapA_6, hlds__instmap__InstMapB_7, hlds__instmap__VarTypes_8, hlds__instmap__ModuleInfo_9, hlds__instmap__ChangedVars_10);
#line 503 "instmap.m"
          return;
        }
#line 8471 "hlds.instmap.c"
      }
#line 8473 "hlds.instmap.c"
  }
#line 121 "instmap.m"
}

#line 480 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_bound_vars_3_p_0_1(
#line 480 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 480 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 480 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 480 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_3,
#line 480 "instmap.m"
  MR_Box * hlds__instmap__wrapper_arg_4)
#line 480 "instmap.m"
{
#line 480 "instmap.m"
  {
#line 480 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;
#line 480 "instmap.m"
    MR_Word hlds__instmap__conv0_STATE_VARIABLE_BoundVars_11;

#line 480 "instmap.m"
    {
#line 480 "instmap.m"
      hlds__instmap__instmap_bound_vars_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3), &hlds__instmap__conv0_STATE_VARIABLE_BoundVars_11);
    }
#line 480 "instmap.m"
    *hlds__instmap__wrapper_arg_4 = ((MR_Box) (hlds__instmap__conv0_STATE_VARIABLE_BoundVars_11));
#line 480 "instmap.m"
  }
#line 480 "instmap.m"
}

#line 110 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_bound_vars_3_p_0(
#line 110 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 110 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 110 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 110 "instmap.m"
{
#line 478 "instmap.m"
  {
#line 478 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 478 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 478 "instmap.m"
      {
#line 478 "instmap.m"
        {
#line 478 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 478 "instmap.m"
      }
#line 478 "instmap.m"
    else
#line 479 "instmap.m"
      {
#line 479 "instmap.m"
        MR_Word hlds__instmap__InstMapping_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 479 "instmap.m"
        MR_Word hlds__instmap__V_8_8;
#line 479 "instmap.m"
        MR_Word hlds__instmap__V_9_9;
#line 480 "instmap.m"
        MR_Box hlds__instmap__conv1_HeadVar__3_3;

#line 480 "instmap.m"
        {
#line 480 "instmap.m"
          hlds__instmap__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 480 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_8_8, 0) = ((MR_Box) (&hlds__instmap_scalar_common_4[0]));
#line 480 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_8_8, 1) = ((MR_Box) (hlds__instmap__instmap_bound_vars_3_p_0_1));
#line 480 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 480 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_8_8, 3) = ((MR_Box) (hlds__instmap__HeadVar__2_2));
#line 480 "instmap.m"
        }
#line 481 "instmap.m"
        {
#line 481 "instmap.m"
          hlds__instmap__V_9_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 480 "instmap.m"
        {
#line 480 "instmap.m"
          mercury__map__foldl_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__instmap_scalar_common_1[1], hlds__instmap__V_8_8, hlds__instmap__InstMapping_5, ((MR_Box) (hlds__instmap__V_9_9)), &hlds__instmap__conv1_HeadVar__3_3);
        }
#line 480 "instmap.m"
        *hlds__instmap__HeadVar__3_3 = ((MR_Word) hlds__instmap__conv1_HeadVar__3_3);
#line 479 "instmap.m"
      }
#line 478 "instmap.m"
  }
#line 110 "instmap.m"
}

#line 104 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_changed_vars_2_p_0(
#line 104 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 104 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__2_2)
#line 104 "instmap.m"
{
#line 493 "instmap.m"
  {
#line 493 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 493 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 493 "instmap.m"
      {
#line 494 "instmap.m"
        {
#line 494 "instmap.m"
          parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__HeadVar__2_2);
#line 494 "instmap.m"
          return;
        }
#line 493 "instmap.m"
      }
#line 493 "instmap.m"
    else
#line 495 "instmap.m"
      {
#line 495 "instmap.m"
        MR_Word hlds__instmap__InstMapping_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 495 "instmap.m"
        MR_Word hlds__instmap__ChangedVarsList_6;

#line 496 "instmap.m"
        {
#line 496 "instmap.m"
          mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_4, &hlds__instmap__ChangedVarsList_6);
        }
#line 497 "instmap.m"
        {
#line 497 "instmap.m"
          parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__ChangedVarsList_6, hlds__instmap__HeadVar__2_2);
#line 497 "instmap.m"
          return;
        }
#line 495 "instmap.m"
      }
#line 493 "instmap.m"
  }
#line 104 "instmap.m"
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
#line 474 "instmap.m"
  {
#line 474 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 474 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 474 "instmap.m"
      *hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 474 "instmap.m"
    else
#line 475 "instmap.m"
      {
#line 475 "instmap.m"
        MR_Word hlds__instmap__InstMapping_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 476 "instmap.m"
        {
#line 476 "instmap.m"
          mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_3, hlds__instmap__HeadVar__2_2);
#line 476 "instmap.m"
          return;
        }
#line 475 "instmap.m"
      }
#line 474 "instmap.m"
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
#line 470 "instmap.m"
  {
#line 470 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 470 "instmap.m"
    MR_Word hlds__instmap__VarsList_5;

#line 474 "instmap.m"
    if ((hlds__instmap__Instmap_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 474 "instmap.m"
      hlds__instmap__VarsList_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 474 "instmap.m"
    else
#line 475 "instmap.m"
      {
#line 475 "instmap.m"
        MR_Word hlds__instmap__InstMapping_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Instmap_3, (MR_Integer) 0)));

#line 476 "instmap.m"
        {
#line 476 "instmap.m"
          mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_7, &hlds__instmap__VarsList_5);
        }
#line 475 "instmap.m"
      }
#line 472 "instmap.m"
    {
#line 472 "instmap.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__VarsList_5, hlds__instmap__Vars_4);
#line 472 "instmap.m"
      return;
    }
#line 470 "instmap.m"
  }
#line 95 "instmap.m"
}

#line 462 "instmap.m"
static MR_Box MR_CALL 
hlds__instmap__instmap_delta_bind_vars_1_f_0_1(
#line 462 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 462 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1)
#line 462 "instmap.m"
{
#line 462 "instmap.m"
  {
#line 462 "instmap.m"
    MR_Box hlds__instmap__wrapper_arg_2;
#line 462 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;
#line 462 "instmap.m"
    MR_Word hlds__instmap__conv0_HeadVar__2_2;

#line 462 "instmap.m"
    {
#line 462 "instmap.m"
      hlds__instmap__conv0_HeadVar__2_2 = hlds__instmap__pair_with_ground_1_f_0(((MR_Word) hlds__instmap__wrapper_arg_1));
    }
#line 462 "instmap.m"
    hlds__instmap__wrapper_arg_2 = ((MR_Box) (hlds__instmap__conv0_HeadVar__2_2));
#line 462 "instmap.m"
    return hlds__instmap__wrapper_arg_2;
#line 462 "instmap.m"
  }
#line 462 "instmap.m"
}

#line 89 "instmap.m"
MR_Word MR_CALL 
hlds__instmap__instmap_delta_bind_vars_1_f_0(
#line 89 "instmap.m"
  MR_Word hlds__instmap__Vars_3)
#line 89 "instmap.m"
{
#line 455 "instmap.m"
  {
#line 455 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 455 "instmap.m"
    MR_Word hlds__instmap__InstMapDelta_4;
#line 455 "instmap.m"
    MR_Word hlds__instmap__VarsAndGround_5;
#line 455 "instmap.m"
    MR_Word hlds__instmap__Instmapping_14;

#line 462 "instmap.m"
    {
#line 462 "instmap.m"
      hlds__instmap__VarsAndGround_5 = mercury__list__map_2_f_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &hlds__instmap_scalar_common_2[0], (MR_Word) &hlds__instmap_scalar_common_2[3], hlds__instmap__Vars_3);
    }
#line 417 "instmap.m"
    {
#line 417 "instmap.m"
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__VarsAndGround_5, &hlds__instmap__Instmapping_14);
    }
#line 416 "instmap.m"
    {
#line 416 "instmap.m"
      hlds__instmap__InstMapDelta_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 416 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_4, 0) = ((MR_Box) (hlds__instmap__Instmapping_14));
#line 416 "instmap.m"
    }
#line 455 "instmap.m"
    return hlds__instmap__InstMapDelta_4;
#line 455 "instmap.m"
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
#line 452 "instmap.m"
  {
#line 452 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 452 "instmap.m"
    MR_Word hlds__instmap__InstMapDelta_4;
#line 452 "instmap.m"
    MR_Word hlds__instmap__V_5_5;
#line 452 "instmap.m"
    MR_Word hlds__instmap__V_6_6;
#line 452 "instmap.m"
    MR_Word hlds__instmap__Instmapping_12;

#line 453 "instmap.m"
    {
#line 453 "instmap.m"
      hlds__instmap__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 453 "instmap.m"
      MR_hl_field(MR_mktag(0), hlds__instmap__V_6_6, 0) = ((MR_Box) (hlds__instmap__Var_3));
#line 453 "instmap.m"
      MR_hl_field(MR_mktag(0), hlds__instmap__V_6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__instmap_scalar_common_2[2])));
#line 453 "instmap.m"
    }
#line 453 "instmap.m"
    {
#line 453 "instmap.m"
      hlds__instmap__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__V_5_5, 0) = ((MR_Box) (hlds__instmap__V_6_6));
#line 453 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__V_5_5, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 453 "instmap.m"
    }
#line 417 "instmap.m"
    {
#line 417 "instmap.m"
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_5_5, &hlds__instmap__Instmapping_12);
    }
#line 416 "instmap.m"
    {
#line 416 "instmap.m"
      hlds__instmap__InstMapDelta_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 416 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_4, 0) = ((MR_Box) (hlds__instmap__Instmapping_12));
#line 416 "instmap.m"
    }
#line 452 "instmap.m"
    return hlds__instmap__InstMapDelta_4;
#line 452 "instmap.m"
  }
#line 88 "instmap.m"
}

#line 87 "instmap.m"
MR_Word MR_CALL 
hlds__instmap__instmap_delta_bind_no_var_0_f_0(void)
#line 87 "instmap.m"
{
#line 449 "instmap.m"
  {
#line 449 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 449 "instmap.m"
    MR_Word hlds__instmap__InstMapDelta_2;
#line 449 "instmap.m"
    MR_Word hlds__instmap__Instmapping_5;

#line 417 "instmap.m"
    {
#line 417 "instmap.m"
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__instmap__Instmapping_5);
    }
#line 416 "instmap.m"
    {
#line 416 "instmap.m"
      hlds__instmap__InstMapDelta_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 416 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_2, 0) = ((MR_Box) (hlds__instmap__Instmapping_5));
#line 416 "instmap.m"
    }
#line 449 "instmap.m"
    return hlds__instmap__InstMapDelta_2;
#line 449 "instmap.m"
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
#line 426 "instmap.m"
  {
#line 426 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 426 "instmap.m"
    MR_Word hlds__instmap__InstMapDelta0_9;
#line 426 "instmap.m"
    MR_Word hlds__instmap__InstMapping_10;

#line 397 "instmap.m"
    {
#line 397 "instmap.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &hlds__instmap__InstMapping_10);
    }
#line 396 "instmap.m"
    {
#line 396 "instmap.m"
      hlds__instmap__InstMapDelta0_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 396 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta0_9, 0) = ((MR_Box) (hlds__instmap__InstMapping_10));
#line 396 "instmap.m"
    }
#line 428 "instmap.m"
    {
#line 428 "instmap.m"
      hlds__instmap__instmap_delta_from_mode_list_2_5_p_0(hlds__instmap__Var_5, hlds__instmap__Modes_6, hlds__instmap__ModuleInfo_7, hlds__instmap__InstMapDelta0_9, hlds__instmap__InstMapDelta_8);
#line 428 "instmap.m"
      return;
    }
#line 426 "instmap.m"
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
#line 416 "instmap.m"
  {
#line 416 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 416 "instmap.m"
    MR_Word hlds__instmap__HeadVar__2_2;
#line 416 "instmap.m"
    MR_Word hlds__instmap__Instmapping_4;

#line 417 "instmap.m"
    {
#line 417 "instmap.m"
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__AL_3, &hlds__instmap__Instmapping_4);
    }
#line 416 "instmap.m"
    {
#line 416 "instmap.m"
      hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 416 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, 0) = ((MR_Box) (hlds__instmap__Instmapping_4));
#line 416 "instmap.m"
    }
#line 416 "instmap.m"
    return hlds__instmap__HeadVar__2_2;
#line 416 "instmap.m"
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
#line 413 "instmap.m"
  {
#line 413 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 413 "instmap.m"
    MR_Word hlds__instmap__HeadVar__2_2;
#line 413 "instmap.m"
    MR_Word hlds__instmap__Instmapping_4;

#line 414 "instmap.m"
    {
#line 414 "instmap.m"
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__AL_3, &hlds__instmap__Instmapping_4);
    }
#line 413 "instmap.m"
    {
#line 413 "instmap.m"
      hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 413 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, 0) = ((MR_Box) (hlds__instmap__Instmapping_4));
#line 413 "instmap.m"
    }
#line 413 "instmap.m"
    return hlds__instmap__HeadVar__2_2;
#line 413 "instmap.m"
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
#line 409 "instmap.m"
  {
#line 409 "instmap.m"
    MR_bool hlds__instmap__succeeded = (hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 409 "instmap.m"
    return hlds__instmap__succeeded;
#line 409 "instmap.m"
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
#line 407 "instmap.m"
  {
#line 407 "instmap.m"
    MR_bool hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 407 "instmap.m"
    MR_Word hlds__instmap__V_2_2;

#line 407 "instmap.m"
    if (hlds__instmap__succeeded)
#line 407 "instmap.m"
      hlds__instmap__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 407 "instmap.m"
    return hlds__instmap__succeeded;
#line 407 "instmap.m"
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
#line 405 "instmap.m"
  {
#line 405 "instmap.m"
    MR_bool hlds__instmap__succeeded = (hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 405 "instmap.m"
    return hlds__instmap__succeeded;
#line 405 "instmap.m"
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
#line 403 "instmap.m"
  {
#line 403 "instmap.m"
    MR_bool hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 403 "instmap.m"
    MR_Word hlds__instmap__V_2_2;

#line 403 "instmap.m"
    if (hlds__instmap__succeeded)
#line 403 "instmap.m"
      hlds__instmap__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 403 "instmap.m"
    return hlds__instmap__succeeded;
#line 403 "instmap.m"
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
#line 399 "instmap.m"
  {
#line 399 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 399 "instmap.m"
    *hlds__instmap__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 399 "instmap.m"
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
#line 396 "instmap.m"
  {
#line 396 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 396 "instmap.m"
    MR_Word hlds__instmap__InstMapping_2;

#line 397 "instmap.m"
    {
#line 397 "instmap.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &hlds__instmap__InstMapping_2);
    }
#line 396 "instmap.m"
    {
#line 396 "instmap.m"
      MR_Word base;
#line 396 "instmap.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 396 "instmap.m"
      *hlds__instmap__HeadVar__1_1 = base;
#line 396 "instmap.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_2));
#line 396 "instmap.m"
    }
#line 396 "instmap.m"
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
#line 394 "instmap.m"
  {
#line 394 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 394 "instmap.m"
    *hlds__instmap__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 394 "instmap.m"
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
#line 391 "instmap.m"
  {
#line 391 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 391 "instmap.m"
    MR_Word hlds__instmap__InstMapping_2;

#line 392 "instmap.m"
    {
#line 392 "instmap.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &hlds__instmap__InstMapping_2);
    }
#line 391 "instmap.m"
    {
#line 391 "instmap.m"
      MR_Word base;
#line 391 "instmap.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 391 "instmap.m"
      *hlds__instmap__HeadVar__1_1 = base;
#line 391 "instmap.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_2));
#line 391 "instmap.m"
    }
#line 391 "instmap.m"
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
