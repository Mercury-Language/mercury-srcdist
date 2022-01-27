/*
** Automatically generated from `instmap.m'
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


/* :- module hlds.instmap. */
/* :- implementation. */

/*
INIT mercury__hlds__instmap__init
ENDINIT
*/

#include "hlds.instmap.mih"


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
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_test.mih"
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
#include "std_util.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 149 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 152 "hlds.instmap.c"
static const MR_FA_TypeInfo_Struct1 hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 155 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 158 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 161 "hlds.instmap.c"
static const MR_VA_PseudoTypeInfo_Struct0 hlds__instmap____vpti_pred_0;

#line 164 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 167 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 170 "hlds.instmap.c"
static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_arm_instmap_0_0[2];

#line 173 "hlds.instmap.c"
static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_arm_instmap_0_0;

#line 176 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_arm_instmap_0_0[1];

#line 179 "hlds.instmap.c"
static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_arm_instmap_0[1];

#line 182 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_arm_instmap_0[1];

#line 185 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_arm_instmap_0[1];

#line 188 "hlds.instmap.c"
static const MR_FA_TypeInfo_Struct2 hlds__instmap__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 191 "hlds.instmap.c"
static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_instmap_0_0[1];

#line 194 "hlds.instmap.c"
static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_0;

#line 197 "hlds.instmap.c"
static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_1;

#line 200 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_0[1];

#line 203 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_1[1];

#line 206 "hlds.instmap.c"
static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_instmap_0[2];

#line 209 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_instmap_0[2];

#line 212 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_instmap_0[2];

#line 215 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0;

#line 218 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1;

#line 221 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2;

#line 224 "hlds.instmap.c"
static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_value_ordered_overlay_how_0[3];

#line 227 "hlds.instmap.c"
static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_name_ordered_overlay_how_0[3];

#line 230 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_overlay_how_0[3];

#line 233 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____arm_instmap_0_0_10001(
#line 236 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 238 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2);

#line 241 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____arm_instmap_0_0_10001(
#line 244 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 246 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 248 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3);

#line 251 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_0_0_10001(
#line 254 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 256 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2);

#line 259 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmap_0_0_10001(
#line 262 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 264 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 266 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3);

#line 269 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_delta_0_0_10001(
#line 272 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 274 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2);

#line 277 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmap_delta_0_0_10001(
#line 280 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 282 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 284 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3);

#line 287 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0_10001(
#line 290 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 292 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2);

#line 295 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0_10001(
#line 298 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 300 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 302 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3);

#line 305 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____overlay_how_0_0_10001(
#line 308 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 310 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2);

#line 313 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____overlay_how_0_0_10001(
#line 316 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 318 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 320 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3);

#line 1319 "instmap.m"
static void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_p_0(
#line 1319 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1319 "instmap.m"
  MR_Word hlds__instmap__InstMappingA_3,
#line 1319 "instmap.m"
  MR_Word hlds__instmap__InstMappingB_4,
#line 1319 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_5,
#line 1319 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_6,
#line 1319 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7,
#line 1319 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_8);

#line 606 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__606__1_2_p_0(
#line 606 "instmap.m"
  MR_Word hlds__instmap__Inst_10,
#line 606 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_20);

#line 584 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__584__1_2_p_0(
#line 584 "instmap.m"
  MR_Word hlds__instmap__Inst_8,
#line 584 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_19);

#line 649 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__649__1_2_p_0(
#line 649 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 649 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_17);

#line 620 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__620__1_2_p_0(
#line 620 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 620 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_17);

#line 389 "instmap.m"
static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0(
#line 389 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1,
#line 389 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 389 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3);

#line 389 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0(
#line 389 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 389 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2);

#line 1366 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_delta_apply_sub_2_5_p_0(
#line 1366 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1366 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 1366 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 1366 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_Instmapping_0_4,
#line 1366 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_Instmapping_5);

#line 1241 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_instmapping_delta_2_9_p_0(
#line 1241 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1241 "instmap.m"
  MR_Word hlds__instmap__InstMap_2,
#line 1241 "instmap.m"
  MR_Word hlds__instmap__VarTypes_3,
#line 1241 "instmap.m"
  MR_Word hlds__instmap__InstMappingA_4,
#line 1241 "instmap.m"
  MR_Word hlds__instmap__InstMappingB_5,
#line 1241 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_6,
#line 1241 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_7,
#line 1241 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8,
#line 1241 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_9);

#line 1185 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__var_is_not_output_5_p_0(
#line 1185 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 1185 "instmap.m"
  MR_Word hlds__instmap__VarTypes_7,
#line 1185 "instmap.m"
  MR_Word hlds__instmap__InstMap0_8,
#line 1185 "instmap.m"
  MR_Word hlds__instmap__InstMapDeltaMap_9,
#line 1185 "instmap.m"
  MR_Word hlds__instmap__Var_10);

#line 1155 "instmap.m"
static void MR_CALL 
hlds__instmap__compute_instmap_delta_for_vars_4_p_0(
#line 1155 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1155 "instmap.m"
  MR_Word hlds__instmap__InstMappingA_2,
#line 1155 "instmap.m"
  MR_Word hlds__instmap__InstMappingB_3,
#line 1155 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4);

#line 1099 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_instmap_deltas_2_8_p_0(
#line 1099 "instmap.m"
  MR_Word hlds__instmap__InstMap_9,
#line 1099 "instmap.m"
  MR_Word hlds__instmap__NonLocals_10,
#line 1099 "instmap.m"
  MR_Word hlds__instmap__VarTypes_11,
#line 1099 "instmap.m"
  MR_Word hlds__instmap__Deltas_12,
#line 1099 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24,
#line 1099 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_MergedDeltas_25,
#line 1099 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26,
#line 1099 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_27);

#line 1075 "instmap.m"
static void MR_CALL 
hlds__instmap__arm_instmap_project_context_2_p_0(
#line 1075 "instmap.m"
  MR_Word hlds__instmap__ArmErrorInfo_3,
#line 1075 "instmap.m"
  MR_Word * hlds__instmap__Context_4);

#line 1029 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_var_insts_pass_8_p_0(
#line 1029 "instmap.m"
  MR_Word hlds__instmap__Insts_9,
#line 1029 "instmap.m"
  MR_Word hlds__instmap__MaybeType_10,
#line 1029 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_MergedInsts_0_23,
#line 1029 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_MergedInsts_24,
#line 1029 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25,
#line 1029 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_26,
#line 1029 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_Error_0_27,
#line 1029 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_Error_28);

#line 1005 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_var_insts_5_p_0(
#line 1005 "instmap.m"
  MR_Word hlds__instmap__Insts_6,
#line 1005 "instmap.m"
  MR_Word hlds__instmap__MaybeType_7,
#line 1005 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_16,
#line 1005 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_17,
#line 1005 "instmap.m"
  MR_Word * hlds__instmap__MaybeMergedInst_9);

#line 973 "instmap.m"
static void MR_CALL 
hlds__instmap__lookup_var_in_arm_instmap_3_p_0(
#line 973 "instmap.m"
  MR_Word hlds__instmap__Var_4,
#line 973 "instmap.m"
  MR_Word hlds__instmap__ArmInstMap_5,
#line 973 "instmap.m"
  MR_Word * hlds__instmap__Inst_6);

#line 964 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_2(
#line 964 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 964 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 964 "instmap.m"
  MR_Box * hlds__instmap__wrapper_arg_2);

#line 960 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_1(
#line 960 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 960 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 960 "instmap.m"
  MR_Box * hlds__instmap__wrapper_arg_2);

#line 950 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0(
#line 950 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 950 "instmap.m"
  MR_Word hlds__instmap__ArmInstMaps_2,
#line 950 "instmap.m"
  MR_Word hlds__instmap__VarTypes_3,
#line 950 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 950 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__5_5,
#line 950 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6,
#line 950 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_7,
#line 950 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__8_8);

#line 916 "instmap.m"
static void MR_CALL 
hlds__instmap__get_reachable_instmaps_2_p_0(
#line 916 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 916 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__2_2);

#line 772 "instmap.m"
static void MR_CALL 
hlds__instmap__bind_inst_to_functors_others_6_p_0(
#line 772 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 772 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 772 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 772 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4,
#line 772 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5,
#line 772 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_6);

#line 626 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_same_4_p_0(
#line 626 "instmap.m"
  MR_Word hlds__instmap__Inst_1,
#line 626 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 626 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_3,
#line 626 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_4);

#line 606 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_2(
#line 606 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 606 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_1(
#line 606 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 599 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0(
#line 599 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 599 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 599 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 599 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4);

#line 584 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_2(
#line 584 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 584 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_1(
#line 584 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 579 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0(
#line 579 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 579 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_2,
#line 579 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_3);

#line 510 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_changed_vars_2_6_p_0(
#line 510 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 510 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 510 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 510 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 510 "instmap.m"
  MR_Word hlds__instmap__HeadVar__5_5,
#line 510 "instmap.m"
  MR_Word * hlds__instmap__ChangedVars_6);

#line 487 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_bound_vars_2_5_p_0(
#line 487 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 487 "instmap.m"
  MR_Word hlds__instmap__Var_7,
#line 487 "instmap.m"
  MR_Word hlds__instmap__Inst_8,
#line 487 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_BoundVars_0_10,
#line 487 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_BoundVars_11);

#line 468 "instmap.m"
static MR_Word MR_CALL 
hlds__instmap__pair_with_ground_1_f_0(
#line 468 "instmap.m"
  MR_Word hlds__instmap__Var_3);

#line 435 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_delta_from_mode_list_2_5_p_0(
#line 435 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 435 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 435 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_3,
#line 435 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4,
#line 435 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapDelta_5);

#line 1180 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_no_output_vars_5_p_0_1(
#line 1180 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 1180 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1);

#line 649 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_2(
#line 649 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 649 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_1(
#line 649 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 620 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_2(
#line 620 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 620 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_1(
#line 620 "instmap.m"
  MR_Box hlds__instmap__closure_arg);

#line 484 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_bound_vars_3_p_0_1(
#line 484 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 484 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 484 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 484 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_3,
#line 484 "instmap.m"
  MR_Box * hlds__instmap__wrapper_arg_4);

#line 466 "instmap.m"
static MR_Box MR_CALL 
hlds__instmap__instmap_delta_bind_vars_1_f_0_1(
#line 466 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 466 "instmap.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 909 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 917 "hlds.instmap.c"
static const MR_FA_TypeInfo_Struct1 hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 925 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 934 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 942 "hlds.instmap.c"
static const MR_VA_PseudoTypeInfo_Struct0 hlds__instmap____vpti_pred_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 0,
  { 0 }

};

#line 950 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 959 "hlds.instmap.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 968 "hlds.instmap.c"
static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_arm_instmap_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0
};

#line 974 "hlds.instmap.c"
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

#line 989 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_arm_instmap_0_0[1] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_arm_instmap_0_0
};

#line 994 "hlds.instmap.c"
static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_arm_instmap_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__instmap__hlds__instmap__du_stag_ordered_arm_instmap_0_0
  }
};

#line 1003 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_arm_instmap_0[1] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_arm_instmap_0_0
};

#line 1008 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_arm_instmap_0[1] = {
  (MR_Integer) 0
};

#line 1013 "hlds.instmap.c"
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

#line 1030 "hlds.instmap.c"
static const MR_FA_TypeInfo_Struct2 hlds__instmap__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1039 "hlds.instmap.c"
static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_instmap_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__instmap__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 1044 "hlds.instmap.c"
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

#line 1059 "hlds.instmap.c"
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

#line 1074 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_0[1] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_1
};

#line 1079 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_1[1] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_0
};

#line 1084 "hlds.instmap.c"
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

#line 1098 "hlds.instmap.c"
static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_instmap_0[2] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_0,
  &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_1
};

#line 1104 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_instmap_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1110 "hlds.instmap.c"
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

#line 1127 "hlds.instmap.c"
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

#line 1144 "hlds.instmap.c"
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

#line 1161 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0 = {
  (MR_String) "large_base",
  (MR_Integer) 0
};

#line 1167 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1 = {
  (MR_String) "large_overlay",
  (MR_Integer) 1
};

#line 1173 "hlds.instmap.c"
static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2 = {
  (MR_String) "test_size",
  (MR_Integer) 2
};

#line 1179 "hlds.instmap.c"
static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_value_ordered_overlay_how_0[3] = {
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2
};

#line 1186 "hlds.instmap.c"
static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_name_ordered_overlay_how_0[3] = {
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2
};

#line 1193 "hlds.instmap.c"
static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_overlay_how_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1200 "hlds.instmap.c"
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

#line 1217 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____arm_instmap_0_0_10001(
#line 1220 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 1222 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2)
#line 1224 "hlds.instmap.c"
{
#line 1226 "hlds.instmap.c"
  {
#line 1228 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 1231 "hlds.instmap.c"
    {
#line 1233 "hlds.instmap.c"
      hlds__instmap__succeeded = hlds__instmap____Unify____arm_instmap_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
#line 1236 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 1238 "hlds.instmap.c"
  }
#line 1240 "hlds.instmap.c"
}

#line 1243 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____arm_instmap_0_0_10001(
#line 1246 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 1248 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 1250 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3)
#line 1252 "hlds.instmap.c"
{
#line 1254 "hlds.instmap.c"
  {
#line 1256 "hlds.instmap.c"
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

#line 1259 "hlds.instmap.c"
    {
#line 1261 "hlds.instmap.c"
      hlds__instmap____Compare____arm_instmap_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
#line 1264 "hlds.instmap.c"
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
#line 1266 "hlds.instmap.c"
  }
#line 1268 "hlds.instmap.c"
}

#line 1271 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_0_0_10001(
#line 1274 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 1276 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2)
#line 1278 "hlds.instmap.c"
{
#line 1280 "hlds.instmap.c"
  {
#line 1282 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 1285 "hlds.instmap.c"
    {
#line 1287 "hlds.instmap.c"
      hlds__instmap__succeeded = hlds__instmap____Unify____instmap_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
#line 1290 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 1292 "hlds.instmap.c"
  }
#line 1294 "hlds.instmap.c"
}

#line 1297 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmap_0_0_10001(
#line 1300 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 1302 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 1304 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3)
#line 1306 "hlds.instmap.c"
{
#line 1308 "hlds.instmap.c"
  {
#line 1310 "hlds.instmap.c"
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

#line 1313 "hlds.instmap.c"
    {
#line 1315 "hlds.instmap.c"
      hlds__instmap____Compare____instmap_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
#line 1318 "hlds.instmap.c"
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
#line 1320 "hlds.instmap.c"
  }
#line 1322 "hlds.instmap.c"
}

#line 1325 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_delta_0_0_10001(
#line 1328 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 1330 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2)
#line 1332 "hlds.instmap.c"
{
#line 1334 "hlds.instmap.c"
  {
#line 1336 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 1339 "hlds.instmap.c"
    {
#line 1341 "hlds.instmap.c"
      hlds__instmap__succeeded = hlds__instmap____Unify____instmap_delta_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
#line 1344 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 1346 "hlds.instmap.c"
  }
#line 1348 "hlds.instmap.c"
}

#line 1351 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmap_delta_0_0_10001(
#line 1354 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 1356 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 1358 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3)
#line 1360 "hlds.instmap.c"
{
#line 1362 "hlds.instmap.c"
  {
#line 1364 "hlds.instmap.c"
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

#line 1367 "hlds.instmap.c"
    {
#line 1369 "hlds.instmap.c"
      hlds__instmap____Compare____instmap_delta_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
#line 1372 "hlds.instmap.c"
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
#line 1374 "hlds.instmap.c"
  }
#line 1376 "hlds.instmap.c"
}

#line 1379 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0_10001(
#line 1382 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 1384 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2)
#line 1386 "hlds.instmap.c"
{
#line 1388 "hlds.instmap.c"
  {
#line 1390 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 1393 "hlds.instmap.c"
    {
#line 1395 "hlds.instmap.c"
      hlds__instmap__succeeded = hlds__instmap____Unify____instmapping_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
#line 1398 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 1400 "hlds.instmap.c"
  }
#line 1402 "hlds.instmap.c"
}

#line 1405 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0_10001(
#line 1408 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 1410 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 1412 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3)
#line 1414 "hlds.instmap.c"
{
#line 1416 "hlds.instmap.c"
  {
#line 1418 "hlds.instmap.c"
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

#line 1421 "hlds.instmap.c"
    {
#line 1423 "hlds.instmap.c"
      hlds__instmap____Compare____instmapping_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
#line 1426 "hlds.instmap.c"
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
#line 1428 "hlds.instmap.c"
  }
#line 1430 "hlds.instmap.c"
}

#line 1433 "hlds.instmap.c"
static MR_bool MR_CALL 
hlds__instmap____Unify____overlay_how_0_0_10001(
#line 1436 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 1438 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2)
#line 1440 "hlds.instmap.c"
{
#line 1442 "hlds.instmap.c"
  {
#line 1444 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 1447 "hlds.instmap.c"
    {
#line 1449 "hlds.instmap.c"
      hlds__instmap__succeeded = hlds__instmap____Unify____overlay_how_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
#line 1452 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 1454 "hlds.instmap.c"
  }
#line 1456 "hlds.instmap.c"
}

#line 1459 "hlds.instmap.c"
static void MR_CALL 
hlds__instmap____Compare____overlay_how_0_0_10001(
#line 1462 "hlds.instmap.c"
  MR_Box * hlds__instmap__wrapper_arg_1,
#line 1464 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 1466 "hlds.instmap.c"
  MR_Box hlds__instmap__wrapper_arg_3)
#line 1468 "hlds.instmap.c"
{
#line 1470 "hlds.instmap.c"
  {
#line 1472 "hlds.instmap.c"
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

#line 1475 "hlds.instmap.c"
    {
#line 1477 "hlds.instmap.c"
      hlds__instmap____Compare____overlay_how_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
#line 1480 "hlds.instmap.c"
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
#line 1482 "hlds.instmap.c"
  }
#line 1484 "hlds.instmap.c"
}

#line 1319 "instmap.m"
static void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_p_0(
#line 1319 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1319 "instmap.m"
  MR_Word hlds__instmap__InstMappingA_3,
#line 1319 "instmap.m"
  MR_Word hlds__instmap__InstMappingB_4,
#line 1319 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_5,
#line 1319 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_6,
#line 1319 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7,
#line 1319 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_8)
#line 1319 "instmap.m"
{
#line 1323 "instmap.m"
  while (MR_TRUE)
#line 1323 "instmap.m"
    {
#line 1323 "instmap.m"
      /* tailcall optimized into a loop */
#line 1323 "instmap.m"
      {
#line 1323 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 1323 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1323 "instmap.m"
          {
#line 1323 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
#line 1323 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_InstMapping_6 = hlds__instmap__STATE_VARIABLE_InstMapping_0_5;
#line 1323 "instmap.m"
          }
#line 1323 "instmap.m"
        else
#line 1325 "instmap.m"
          {
#line 1325 "instmap.m"
            MR_Word hlds__instmap__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 1325 "instmap.m"
            MR_Word hlds__instmap__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 1325 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_36_36;
#line 1325 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40;
#line 1326 "instmap.m"
            MR_Word hlds__instmap__InstA_25;
#line 1326 "instmap.m"
            MR_Box hlds__instmap__conv0_InstA_25;

#line 1326 "instmap.m"
            {
#line 1326 "instmap.m"
              hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingA_3, ((MR_Box) (hlds__instmap__Var_18)), &hlds__instmap__conv0_InstA_25);
            }
#line 1326 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1326 "instmap.m"
              {
#line 1326 "instmap.m"
                hlds__instmap__InstA_25 = ((MR_Word) hlds__instmap__conv0_InstA_25);
#line 1326 "instmap.m"
                hlds__instmap__succeeded = MR_TRUE;
#line 1326 "instmap.m"
              }
#line 1326 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1327 "instmap.m"
              {
#line 1327 "instmap.m"
                MR_Word hlds__instmap__InstB_26;
#line 1327 "instmap.m"
                MR_Box hlds__instmap__conv1_InstB_26;

#line 1327 "instmap.m"
                {
#line 1327 "instmap.m"
                  hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingB_4, ((MR_Box) (hlds__instmap__Var_18)), &hlds__instmap__conv1_InstB_26);
                }
#line 1327 "instmap.m"
                if (hlds__instmap__succeeded)
#line 1327 "instmap.m"
                  {
#line 1327 "instmap.m"
                    hlds__instmap__InstB_26 = ((MR_Word) hlds__instmap__conv1_InstB_26);
#line 1327 "instmap.m"
                    hlds__instmap__succeeded = MR_TRUE;
#line 1327 "instmap.m"
                  }
#line 1327 "instmap.m"
                if (hlds__instmap__succeeded)
#line 1328 "instmap.m"
                  {
#line 1328 "instmap.m"
                    MR_Word hlds__instmap__Inst_27;
#line 1328 "instmap.m"
                    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_35_35;
#line 1333 "instmap.m"
                    MR_Word hlds__instmap___Det_28;

#line 1333 "instmap.m"
                    {
#line 1333 "instmap.m"
                      hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 0, hlds__instmap__InstA_25, hlds__instmap__InstB_26, (MR_Integer) 1, &hlds__instmap__Inst_27, &hlds__instmap___Det_28, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7, &hlds__instmap__STATE_VARIABLE_ModuleInfo_35_35);
                    }
#line 1328 "instmap.m"
                    if (hlds__instmap__succeeded)
#line 1336 "instmap.m"
                      {
#line 1336 "instmap.m"
                        hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40 = hlds__instmap__STATE_VARIABLE_ModuleInfo_35_35;
#line 1336 "instmap.m"
                        {
#line 1336 "instmap.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_18)), ((MR_Box) (hlds__instmap__Inst_27)), hlds__instmap__STATE_VARIABLE_InstMapping_0_5, &hlds__instmap__STATE_VARIABLE_InstMapping_36_36);
                        }
#line 1336 "instmap.m"
                      }
#line 1328 "instmap.m"
                    else
#line 1338 "instmap.m"
                      {
#line 1338 "instmap.m"
                        {
#line 1338 "instmap.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.unify_instmapping_delta_2\'/8", (MR_String) "unexpected error");
#line 1338 "instmap.m"
                          return;
                        }
#line 1338 "instmap.m"
                      }
#line 1328 "instmap.m"
                  }
#line 1327 "instmap.m"
                else
#line 1341 "instmap.m"
                  {
#line 1341 "instmap.m"
                    {
#line 1341 "instmap.m"
                      mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_18)), ((MR_Box) (hlds__instmap__InstA_25)), hlds__instmap__STATE_VARIABLE_InstMapping_0_5, &hlds__instmap__STATE_VARIABLE_InstMapping_36_36);
                    }
#line 1341 "instmap.m"
                    hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
#line 1341 "instmap.m"
                  }
#line 1327 "instmap.m"
              }
#line 1326 "instmap.m"
            else
#line 1344 "instmap.m"
              {
#line 1344 "instmap.m"
                MR_Word hlds__instmap__InstB_45;
#line 1344 "instmap.m"
                MR_Box hlds__instmap__conv2_InstB_45;

#line 1344 "instmap.m"
                {
#line 1344 "instmap.m"
                  hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingB_4, ((MR_Box) (hlds__instmap__Var_18)), &hlds__instmap__conv2_InstB_45);
                }
#line 1344 "instmap.m"
                if (hlds__instmap__succeeded)
#line 1344 "instmap.m"
                  {
#line 1344 "instmap.m"
                    hlds__instmap__InstB_45 = ((MR_Word) hlds__instmap__conv2_InstB_45);
#line 1344 "instmap.m"
                    hlds__instmap__succeeded = MR_TRUE;
#line 1344 "instmap.m"
                  }
#line 1344 "instmap.m"
                if (hlds__instmap__succeeded)
#line 1345 "instmap.m"
                  {
#line 1345 "instmap.m"
                    {
#line 1345 "instmap.m"
                      mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_18)), ((MR_Box) (hlds__instmap__InstB_45)), hlds__instmap__STATE_VARIABLE_InstMapping_0_5, &hlds__instmap__STATE_VARIABLE_InstMapping_36_36);
                    }
#line 1345 "instmap.m"
                  }
#line 1344 "instmap.m"
                else
#line 1344 "instmap.m"
                  hlds__instmap__STATE_VARIABLE_InstMapping_36_36 = hlds__instmap__STATE_VARIABLE_InstMapping_0_5;
#line 1344 "instmap.m"
                hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
#line 1344 "instmap.m"
              }
#line 1350 "instmap.m"
            /* direct tailcall eliminated */
#line 1350 "instmap.m"
            {
#line 1350 "instmap.m"
              MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__Vars_19;
#line 1350 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_5 = hlds__instmap__STATE_VARIABLE_InstMapping_36_36;
#line 1350 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40;

#line 1350 "instmap.m"
              hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_7;
#line 1350 "instmap.m"
              hlds__instmap__STATE_VARIABLE_InstMapping_0_5 = hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_5;
#line 1350 "instmap.m"
              hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 1350 "instmap.m"
            }
#line 1350 "instmap.m"
            continue;
#line 1325 "instmap.m"
          }
#line 1323 "instmap.m"
      }
#line 1323 "instmap.m"
      break;
#line 1323 "instmap.m"
    }
#line 1319 "instmap.m"
}

#line 311 "instmap.m"
void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_p_0(
#line 311 "instmap.m"
  MR_Word hlds__instmap__NonLocals_2,
#line 311 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 311 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 311 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__5_5,
#line 311 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6,
#line 311 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_7)
#line 311 "instmap.m"
{
#line 1295 "instmap.m"
  {
#line 1295 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1295 "instmap.m"
    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1295 "instmap.m"
      {
#line 1295 "instmap.m"
        *hlds__instmap__HeadVar__5_5 = hlds__instmap__HeadVar__4_4;
#line 1296 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6;
#line 1295 "instmap.m"
      }
#line 1295 "instmap.m"
    else
#line 1295 "instmap.m"
      {
#line 1295 "instmap.m"
        MR_Word hlds__instmap__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));

#line 1295 "instmap.m"
        if ((hlds__instmap__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1297 "instmap.m"
          {
#line 1298 "instmap.m"
            *hlds__instmap__HeadVar__5_5 = hlds__instmap__HeadVar__3_3;
#line 1298 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6;
#line 1297 "instmap.m"
          }
#line 1295 "instmap.m"
        else
#line 1300 "instmap.m"
          {
#line 1300 "instmap.m"
            MR_Word hlds__instmap__TypeInfo_24_46 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 1300 "instmap.m"
            MR_Word hlds__instmap__TypeCtorInfo_25_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1300 "instmap.m"
            MR_Word hlds__instmap__TypeCtorInfo_26_48;
#line 1300 "instmap.m"
            MR_Word hlds__instmap__InstMappingB_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__4_4, (MR_Integer) 0)));
#line 1300 "instmap.m"
            MR_Word hlds__instmap__InstMapping_24;
#line 1300 "instmap.m"
            MR_Word hlds__instmap__VarsInA_38;
#line 1300 "instmap.m"
            MR_Word hlds__instmap__VarsInB_39;
#line 1300 "instmap.m"
            MR_Word hlds__instmap__SetofVarsInA_40;
#line 1300 "instmap.m"
            MR_Word hlds__instmap__SetofVars0_41;
#line 1300 "instmap.m"
            MR_Word hlds__instmap__SetofVars_42;
#line 1300 "instmap.m"
            MR_Word hlds__instmap__ListofVars_43;
#line 1300 "instmap.m"
            MR_Word hlds__instmap__V_44_44;

#line 1310 "instmap.m"
            {
#line 1310 "instmap.m"
              mercury__map__keys_2_p_0(hlds__instmap__TypeInfo_24_46, hlds__instmap__TypeCtorInfo_25_47, hlds__instmap__V_29_29, &hlds__instmap__VarsInA_38);
            }
#line 1311 "instmap.m"
            {
#line 1311 "instmap.m"
              mercury__map__keys_2_p_0(hlds__instmap__TypeInfo_24_46, hlds__instmap__TypeCtorInfo_25_47, hlds__instmap__InstMappingB_23, &hlds__instmap__VarsInB_39);
            }
#line 1805 "hlds.instmap.c"
            hlds__instmap__TypeCtorInfo_26_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1312 "instmap.m"
            {
#line 1312 "instmap.m"
              parse_tree__set_of_var__sorted_list_to_set_2_p_0(hlds__instmap__TypeCtorInfo_26_48, hlds__instmap__VarsInA_38, &hlds__instmap__SetofVarsInA_40);
            }
#line 1313 "instmap.m"
            {
#line 1313 "instmap.m"
              parse_tree__set_of_var__insert_list_3_p_0(hlds__instmap__TypeCtorInfo_26_48, hlds__instmap__VarsInB_39, hlds__instmap__SetofVarsInA_40, &hlds__instmap__SetofVars0_41);
            }
#line 1314 "instmap.m"
            {
#line 1314 "instmap.m"
              parse_tree__set_of_var__intersect_3_p_0(hlds__instmap__TypeCtorInfo_26_48, hlds__instmap__SetofVars0_41, hlds__instmap__NonLocals_2, &hlds__instmap__SetofVars_42);
            }
#line 1315 "instmap.m"
            {
#line 1315 "instmap.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__instmap__TypeCtorInfo_26_48, hlds__instmap__SetofVars_42, &hlds__instmap__ListofVars_43);
            }
#line 1317 "instmap.m"
            {
#line 1317 "instmap.m"
              hlds__instmap__V_44_44 = mercury__map__init_0_f_0(hlds__instmap__TypeInfo_24_46, hlds__instmap__TypeCtorInfo_25_47);
            }
#line 1316 "instmap.m"
            {
#line 1316 "instmap.m"
              hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_p_0(hlds__instmap__ListofVars_43, hlds__instmap__V_29_29, hlds__instmap__InstMappingB_23, hlds__instmap__V_44_44, &hlds__instmap__InstMapping_24, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6, hlds__instmap__STATE_VARIABLE_ModuleInfo_7);
            }
#line 1300 "instmap.m"
            {
#line 1300 "instmap.m"
              MR_Word base;
#line 1300 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1300 "instmap.m"
              *hlds__instmap__HeadVar__5_5 = base;
#line 1300 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_24));
#line 1300 "instmap.m"
            }
#line 1300 "instmap.m"
          }
#line 1295 "instmap.m"
      }
#line 1295 "instmap.m"
  }
#line 311 "instmap.m"
}

#line 606 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__606__1_2_p_0(
#line 606 "instmap.m"
  MR_Word hlds__instmap__Inst_10,
#line 606 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_20)
#line 606 "instmap.m"
{
#line 606 "instmap.m"
  {
#line 606 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 606 "instmap.m"
    {
#line 606 "instmap.m"
      hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst_10, hlds__instmap__HeadVar__2_20);
    }
#line 606 "instmap.m"
    return hlds__instmap__succeeded;
#line 606 "instmap.m"
  }
#line 606 "instmap.m"
}

#line 584 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__584__1_2_p_0(
#line 584 "instmap.m"
  MR_Word hlds__instmap__Inst_8,
#line 584 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_19)
#line 584 "instmap.m"
{
#line 584 "instmap.m"
  {
#line 584 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 584 "instmap.m"
    {
#line 584 "instmap.m"
      hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst_8, hlds__instmap__HeadVar__2_19);
    }
#line 584 "instmap.m"
    return hlds__instmap__succeeded;
#line 584 "instmap.m"
  }
#line 584 "instmap.m"
}

#line 649 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__649__1_2_p_0(
#line 649 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 649 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_17)
#line 649 "instmap.m"
{
#line 649 "instmap.m"
  {
#line 649 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 649 "instmap.m"
    {
#line 649 "instmap.m"
      hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst_5, hlds__instmap__HeadVar__2_17);
    }
#line 649 "instmap.m"
    return hlds__instmap__succeeded;
#line 649 "instmap.m"
  }
#line 649 "instmap.m"
}

#line 620 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__620__1_2_p_0(
#line 620 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 620 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_17)
#line 620 "instmap.m"
{
#line 620 "instmap.m"
  {
#line 620 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 620 "instmap.m"
    {
#line 620 "instmap.m"
      hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst_5, hlds__instmap__HeadVar__2_17);
    }
#line 620 "instmap.m"
    return hlds__instmap__succeeded;
#line 620 "instmap.m"
  }
#line 620 "instmap.m"
}

#line 207 "instmap.m"
void MR_CALL 
hlds__instmap____Compare____overlay_how_0_0(
#line 207 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1,
#line 207 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 207 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3)
#line 207 "instmap.m"
{
#line 207 "instmap.m"
  {
#line 207 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 207 "instmap.m"
    MR_Integer hlds__instmap__Cast_HeadVar1_4 = (MR_Integer) hlds__instmap__HeadVar__2_2;
#line 207 "instmap.m"
    MR_Integer hlds__instmap__Cast_HeadVar2_5 = (MR_Integer) hlds__instmap__HeadVar__3_3;

#line 207 "instmap.m"
    {
#line 207 "instmap.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__instmap__HeadVar__1_1, hlds__instmap__Cast_HeadVar1_4, hlds__instmap__Cast_HeadVar2_5);
    }
#line 207 "instmap.m"
  }
#line 207 "instmap.m"
}

#line 207 "instmap.m"
MR_bool MR_CALL 
hlds__instmap____Unify____overlay_how_0_0(
#line 207 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_1,
#line 207 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2)
#line 207 "instmap.m"
{
#line 2001 "hlds.instmap.c"
  {
#line 2003 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded = (hlds__instmap__HeadVar__2_1 == hlds__instmap__HeadVar__2_2);

#line 2006 "hlds.instmap.c"
    return hlds__instmap__succeeded;
#line 2008 "hlds.instmap.c"
  }
#line 207 "instmap.m"
}

#line 389 "instmap.m"
static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0(
#line 389 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1,
#line 389 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 389 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3)
#line 389 "instmap.m"
{
#line 389 "instmap.m"
  {
#line 389 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 389 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar1_4 = hlds__instmap__HeadVar__2_2;
#line 389 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar2_5 = hlds__instmap__HeadVar__3_3;

#line 389 "instmap.m"
    {
#line 389 "instmap.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__instmap_scalar_common_2[1], hlds__instmap__HeadVar__1_1, ((MR_Box) (hlds__instmap__Cast_HeadVar1_4)), ((MR_Box) (hlds__instmap__Cast_HeadVar2_5)));
    }
#line 389 "instmap.m"
  }
#line 389 "instmap.m"
}

#line 389 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0(
#line 389 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 389 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2)
#line 389 "instmap.m"
{
#line 389 "instmap.m"
  {
#line 389 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 389 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar1_3 = hlds__instmap__HeadVar__1_1;
#line 389 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar2_4 = hlds__instmap__HeadVar__2_2;

#line 389 "instmap.m"
    {
#line 389 "instmap.m"
      hlds__instmap__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__instmap_scalar_common_2[1], ((MR_Box) (hlds__instmap__Cast_HeadVar1_3)), ((MR_Box) (hlds__instmap__Cast_HeadVar2_4)));
    }
#line 389 "instmap.m"
    return hlds__instmap__succeeded;
#line 389 "instmap.m"
  }
#line 389 "instmap.m"
}

#line 383 "instmap.m"
void MR_CALL 
hlds__instmap____Compare____instmap_delta_0_0(
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
    MR_Word hlds__instmap__Cast_HeadVar1_4 = hlds__instmap__HeadVar__2_2;
#line 383 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar2_5 = hlds__instmap__HeadVar__3_3;

#line 383 "instmap.m"
    {
#line 383 "instmap.m"
      hlds__instmap____Compare____instmap_0_0(hlds__instmap__HeadVar__1_1, hlds__instmap__Cast_HeadVar1_4, hlds__instmap__Cast_HeadVar2_5);
    }
#line 383 "instmap.m"
  }
#line 383 "instmap.m"
}

#line 383 "instmap.m"
MR_bool MR_CALL 
hlds__instmap____Unify____instmap_delta_0_0(
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
    MR_Word hlds__instmap__Cast_HeadVar1_3 = hlds__instmap__HeadVar__1_1;
#line 383 "instmap.m"
    MR_Word hlds__instmap__Cast_HeadVar2_4 = hlds__instmap__HeadVar__2_2;

#line 383 "instmap.m"
    {
#line 383 "instmap.m"
      hlds__instmap__succeeded = hlds__instmap____Unify____instmap_0_0(hlds__instmap__Cast_HeadVar1_3, hlds__instmap__Cast_HeadVar2_4);
    }
#line 383 "instmap.m"
    return hlds__instmap__succeeded;
#line 383 "instmap.m"
  }
#line 383 "instmap.m"
}

#line 385 "instmap.m"
void MR_CALL 
hlds__instmap____Compare____instmap_0_0(
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
    MR_Integer hlds__instmap__CastX_8 = (MR_Integer) hlds__instmap__HeadVar__2_2;
#line 385 "instmap.m"
    MR_Integer hlds__instmap__CastY_9 = (MR_Integer) hlds__instmap__HeadVar__3_3;

#line 385 "instmap.m"
    hlds__instmap__succeeded = (hlds__instmap__CastX_8 == hlds__instmap__CastY_9);
#line 385 "instmap.m"
    if (hlds__instmap__succeeded)
#line 2157 "hlds.instmap.c"
      *hlds__instmap__HeadVar__1_1 = (MR_Integer) 0;
#line 385 "instmap.m"
    else
#line 385 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 385 "instmap.m"
      if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 385 "instmap.m"
        *hlds__instmap__HeadVar__1_1 = (MR_Integer) 0;
#line 385 "instmap.m"
      else
#line 2169 "hlds.instmap.c"
        *hlds__instmap__HeadVar__1_1 = (MR_Integer) 2;
#line 385 "instmap.m"
    else
#line 385 "instmap.m"
      {
#line 385 "instmap.m"
        MR_Word hlds__instmap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));

#line 385 "instmap.m"
        if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2180 "hlds.instmap.c"
          *hlds__instmap__HeadVar__1_1 = (MR_Integer) 1;
#line 385 "instmap.m"
        else
#line 385 "instmap.m"
          {
#line 385 "instmap.m"
            MR_Word hlds__instmap__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));

#line 385 "instmap.m"
            {
#line 385 "instmap.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__instmap_scalar_common_2[1], hlds__instmap__HeadVar__1_1, ((MR_Box) (hlds__instmap__V_11_11)), ((MR_Box) (hlds__instmap__V_5_5)));
            }
#line 385 "instmap.m"
          }
#line 385 "instmap.m"
      }
#line 385 "instmap.m"
  }
#line 385 "instmap.m"
}

#line 385 "instmap.m"
MR_bool MR_CALL 
hlds__instmap____Unify____instmap_0_0(
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
    MR_Integer hlds__instmap__CastX_7 = (MR_Integer) hlds__instmap__HeadVar__1_1;
#line 385 "instmap.m"
    MR_Integer hlds__instmap__CastY_8 = (MR_Integer) hlds__instmap__HeadVar__2_2;

#line 385 "instmap.m"
    hlds__instmap__succeeded = (hlds__instmap__CastX_7 == hlds__instmap__CastY_8);
#line 385 "instmap.m"
    if (hlds__instmap__succeeded)
#line 385 "instmap.m"
      hlds__instmap__succeeded = MR_TRUE;
#line 385 "instmap.m"
    else
#line 385 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 385 "instmap.m"
      {
#line 385 "instmap.m"
        MR_Integer hlds__instmap__CastX_5 = (MR_Integer) hlds__instmap__HeadVar__1_1;
#line 385 "instmap.m"
        MR_Integer hlds__instmap__CastY_6 = (MR_Integer) hlds__instmap__HeadVar__2_2;

#line 385 "instmap.m"
        hlds__instmap__succeeded = (hlds__instmap__CastY_6 == hlds__instmap__CastX_5);
#line 385 "instmap.m"
      }
#line 385 "instmap.m"
    else
#line 385 "instmap.m"
      {
#line 385 "instmap.m"
        MR_Word hlds__instmap__TypeInfo_9_9;
#line 385 "instmap.m"
        MR_Word hlds__instmap__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 385 "instmap.m"
        MR_Word hlds__instmap__V_4_4;

#line 385 "instmap.m"
        hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 385 "instmap.m"
        if (hlds__instmap__succeeded)
#line 385 "instmap.m"
          {
#line 385 "instmap.m"
            hlds__instmap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 2261 "hlds.instmap.c"
            hlds__instmap__TypeInfo_9_9 = (MR_Word) &hlds__instmap_scalar_common_2[1];
#line 2263 "hlds.instmap.c"
            {
#line 2265 "hlds.instmap.c"
              hlds__instmap__succeeded = mercury__builtin__unify_2_p_0(hlds__instmap__TypeInfo_9_9, ((MR_Box) (hlds__instmap__V_3_3)), ((MR_Box) (hlds__instmap__V_4_4)));
            }
#line 385 "instmap.m"
          }
#line 385 "instmap.m"
      }
#line 385 "instmap.m"
    return hlds__instmap__succeeded;
#line 385 "instmap.m"
  }
#line 385 "instmap.m"
}

#line 242 "instmap.m"
void MR_CALL 
hlds__instmap____Compare____arm_instmap_0_0(
#line 242 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1,
#line 242 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 242 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3)
#line 242 "instmap.m"
{
#line 242 "instmap.m"
  {
#line 242 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 242 "instmap.m"
    MR_Integer hlds__instmap__CastX_9 = (MR_Integer) hlds__instmap__HeadVar__2_2;
#line 242 "instmap.m"
    MR_Integer hlds__instmap__CastY_10 = (MR_Integer) hlds__instmap__HeadVar__3_3;

#line 242 "instmap.m"
    hlds__instmap__succeeded = (hlds__instmap__CastX_9 == hlds__instmap__CastY_10);
#line 242 "instmap.m"
    if (hlds__instmap__succeeded)
#line 2303 "hlds.instmap.c"
      *hlds__instmap__HeadVar__1_1 = (MR_Integer) 0;
#line 242 "instmap.m"
    else
#line 242 "instmap.m"
      {
#line 242 "instmap.m"
        MR_Word hlds__instmap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 242 "instmap.m"
        MR_Word hlds__instmap__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 242 "instmap.m"
        MR_Word hlds__instmap__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));
#line 242 "instmap.m"
        MR_Word hlds__instmap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__3_3, (MR_Integer) 1)));
#line 242 "instmap.m"
        MR_Word hlds__instmap__V_8_8;

#line 242 "instmap.m"
        {
#line 242 "instmap.m"
          mercury__term____Compare____context_0_0(&hlds__instmap__V_8_8, hlds__instmap__V_4_4, hlds__instmap__V_6_6);
        }
#line 2325 "hlds.instmap.c"
        hlds__instmap__succeeded = (hlds__instmap__V_8_8 == (MR_Integer) 0);
#line 242 "instmap.m"
        hlds__instmap__succeeded = !(hlds__instmap__succeeded);
#line 242 "instmap.m"
        if (hlds__instmap__succeeded)
#line 242 "instmap.m"
          *hlds__instmap__HeadVar__1_1 = hlds__instmap__V_8_8;
#line 242 "instmap.m"
        else
#line 242 "instmap.m"
          {
#line 242 "instmap.m"
            hlds__instmap____Compare____instmap_0_0(hlds__instmap__HeadVar__1_1, hlds__instmap__V_5_5, hlds__instmap__V_7_7);
          }
#line 242 "instmap.m"
      }
#line 242 "instmap.m"
  }
#line 242 "instmap.m"
}

#line 242 "instmap.m"
MR_bool MR_CALL 
hlds__instmap____Unify____arm_instmap_0_0(
#line 242 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 242 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2)
#line 242 "instmap.m"
{
#line 242 "instmap.m"
  {
#line 242 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 242 "instmap.m"
    MR_Integer hlds__instmap__CastX_7 = (MR_Integer) hlds__instmap__HeadVar__1_1;
#line 242 "instmap.m"
    MR_Integer hlds__instmap__CastY_8 = (MR_Integer) hlds__instmap__HeadVar__2_2;

#line 242 "instmap.m"
    hlds__instmap__succeeded = (hlds__instmap__CastX_7 == hlds__instmap__CastY_8);
#line 242 "instmap.m"
    if (hlds__instmap__succeeded)
#line 242 "instmap.m"
      hlds__instmap__succeeded = MR_TRUE;
#line 242 "instmap.m"
    else
#line 242 "instmap.m"
      {
#line 242 "instmap.m"
        MR_Word hlds__instmap__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 242 "instmap.m"
        MR_Word hlds__instmap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 242 "instmap.m"
        MR_Word hlds__instmap__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 242 "instmap.m"
        MR_Word hlds__instmap__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));

#line 2384 "hlds.instmap.c"
        {
#line 2386 "hlds.instmap.c"
          hlds__instmap__succeeded = mercury__term____Unify____context_0_0(hlds__instmap__V_3_3, hlds__instmap__V_5_5);
        }
#line 242 "instmap.m"
        if (hlds__instmap__succeeded)
#line 2391 "hlds.instmap.c"
          {
#line 2393 "hlds.instmap.c"
            hlds__instmap__succeeded = hlds__instmap____Unify____instmap_0_0(hlds__instmap__V_4_4, hlds__instmap__V_6_6);
          }
#line 242 "instmap.m"
      }
#line 242 "instmap.m"
    return hlds__instmap__succeeded;
#line 242 "instmap.m"
  }
#line 242 "instmap.m"
}

#line 1366 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_delta_apply_sub_2_5_p_0(
#line 1366 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1366 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 1366 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 1366 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_Instmapping_0_4,
#line 1366 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_Instmapping_5)
#line 1366 "instmap.m"
{
#line 1370 "instmap.m"
  while (MR_TRUE)
#line 1370 "instmap.m"
    {
#line 1370 "instmap.m"
      /* tailcall optimized into a loop */
#line 1370 "instmap.m"
      {
#line 1370 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 1370 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1370 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_Instmapping_5 = hlds__instmap__STATE_VARIABLE_Instmapping_0_4;
#line 1370 "instmap.m"
        else
#line 1372 "instmap.m"
          {
#line 1372 "instmap.m"
            MR_Word hlds__instmap__Var0_11;
#line 1372 "instmap.m"
            MR_Word hlds__instmap__Inst_12;
#line 1372 "instmap.m"
            MR_Word hlds__instmap__VarInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 1372 "instmap.m"
            MR_Word hlds__instmap__Var_17;
#line 1372 "instmap.m"
            MR_Word hlds__instmap__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 1372 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_Instmapping_21_21;

#line 1371 "instmap.m"
            hlds__instmap__Var0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_20_20, (MR_Integer) 0)));
#line 1371 "instmap.m"
            hlds__instmap__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_20_20, (MR_Integer) 1)));
#line 1373 "instmap.m"
            {
#line 1373 "instmap.m"
              parse_tree__prog_rename__rename_var_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__HeadVar__2_2, hlds__instmap__HeadVar__3_3, hlds__instmap__Var0_11, &hlds__instmap__Var_17);
            }
#line 1378 "instmap.m"
            {
#line 1378 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_17)), ((MR_Box) (hlds__instmap__Inst_12)), hlds__instmap__STATE_VARIABLE_Instmapping_0_4, &hlds__instmap__STATE_VARIABLE_Instmapping_21_21);
            }
#line 1379 "instmap.m"
            /* direct tailcall eliminated */
#line 1379 "instmap.m"
            {
#line 1379 "instmap.m"
              MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__VarInsts0_13;
#line 1379 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_Instmapping_0__tmp_copy_4 = hlds__instmap__STATE_VARIABLE_Instmapping_21_21;

#line 1379 "instmap.m"
              hlds__instmap__STATE_VARIABLE_Instmapping_0_4 = hlds__instmap__STATE_VARIABLE_Instmapping_0__tmp_copy_4;
#line 1379 "instmap.m"
              hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 1379 "instmap.m"
            }
#line 1379 "instmap.m"
            continue;
#line 1372 "instmap.m"
          }
#line 1370 "instmap.m"
      }
#line 1370 "instmap.m"
      break;
#line 1370 "instmap.m"
    }
#line 1366 "instmap.m"
}

#line 1241 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_instmapping_delta_2_9_p_0(
#line 1241 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1241 "instmap.m"
  MR_Word hlds__instmap__InstMap_2,
#line 1241 "instmap.m"
  MR_Word hlds__instmap__VarTypes_3,
#line 1241 "instmap.m"
  MR_Word hlds__instmap__InstMappingA_4,
#line 1241 "instmap.m"
  MR_Word hlds__instmap__InstMappingB_5,
#line 1241 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_6,
#line 1241 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_7,
#line 1241 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8,
#line 1241 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_9)
#line 1241 "instmap.m"
{
#line 1246 "instmap.m"
  while (MR_TRUE)
#line 1246 "instmap.m"
    {
#line 1246 "instmap.m"
      /* tailcall optimized into a loop */
#line 1246 "instmap.m"
      {
#line 1246 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 1246 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1246 "instmap.m"
          {
#line 1246 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_9 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8;
#line 1246 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_InstMapping_7 = hlds__instmap__STATE_VARIABLE_InstMapping_0_6;
#line 1246 "instmap.m"
          }
#line 1246 "instmap.m"
        else
#line 1248 "instmap.m"
          {
#line 1248 "instmap.m"
            MR_Word hlds__instmap__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 1248 "instmap.m"
            MR_Word hlds__instmap__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 1248 "instmap.m"
            MR_Word hlds__instmap__InstA_29;
#line 1248 "instmap.m"
            MR_Word hlds__instmap__InstB_31;
#line 1248 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_43_43;
#line 1248 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50;
#line 1249 "instmap.m"
            MR_Word hlds__instmap__InstInA_28;
#line 1249 "instmap.m"
            MR_Box hlds__instmap__conv0_InstInA_28;
#line 1254 "instmap.m"
            MR_Word hlds__instmap__InstInB_30;
#line 1254 "instmap.m"
            MR_Box hlds__instmap__conv1_InstInB_30;
#line 1259 "instmap.m"
            MR_Word hlds__instmap__Inst1_33;
#line 1259 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_42_42;
#line 1260 "instmap.m"
            MR_Word hlds__instmap__VarType_32;
#line 1260 "instmap.m"
            MR_Word hlds__instmap__V_41_41;

#line 1249 "instmap.m"
            {
#line 1249 "instmap.m"
              hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingA_4, ((MR_Box) (hlds__instmap__Var_20)), &hlds__instmap__conv0_InstInA_28);
            }
#line 1249 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1249 "instmap.m"
              {
#line 1249 "instmap.m"
                hlds__instmap__InstInA_28 = ((MR_Word) hlds__instmap__conv0_InstInA_28);
#line 1249 "instmap.m"
                hlds__instmap__succeeded = MR_TRUE;
#line 1249 "instmap.m"
              }
#line 1249 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1250 "instmap.m"
              hlds__instmap__InstA_29 = hlds__instmap__InstInA_28;
#line 1249 "instmap.m"
            else
#line 1252 "instmap.m"
              {
#line 1252 "instmap.m"
                hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_2, hlds__instmap__Var_20, &hlds__instmap__InstA_29);
              }
#line 1254 "instmap.m"
            {
#line 1254 "instmap.m"
              hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingB_5, ((MR_Box) (hlds__instmap__Var_20)), &hlds__instmap__conv1_InstInB_30);
            }
#line 1254 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1254 "instmap.m"
              {
#line 1254 "instmap.m"
                hlds__instmap__InstInB_30 = ((MR_Word) hlds__instmap__conv1_InstInB_30);
#line 1254 "instmap.m"
                hlds__instmap__succeeded = MR_TRUE;
#line 1254 "instmap.m"
              }
#line 1254 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1255 "instmap.m"
              hlds__instmap__InstB_31 = hlds__instmap__InstInB_30;
#line 1254 "instmap.m"
            else
#line 1257 "instmap.m"
              {
#line 1257 "instmap.m"
                hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_2, hlds__instmap__Var_20, &hlds__instmap__InstB_31);
              }
#line 1260 "instmap.m"
            {
#line 1260 "instmap.m"
              hlds__vartypes__lookup_var_type_3_p_0(hlds__instmap__VarTypes_3, hlds__instmap__Var_20, &hlds__instmap__VarType_32);
            }
#line 1261 "instmap.m"
            {
#line 1261 "instmap.m"
              hlds__instmap__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "instmap.m"
              MR_hl_field(MR_mktag(1), hlds__instmap__V_41_41, 0) = ((MR_Box) (hlds__instmap__VarType_32));
#line 1261 "instmap.m"
            }
#line 1261 "instmap.m"
            {
#line 1261 "instmap.m"
              hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__InstA_29, hlds__instmap__InstB_31, hlds__instmap__V_41_41, &hlds__instmap__Inst1_33, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8, &hlds__instmap__STATE_VARIABLE_ModuleInfo_42_42);
            }
#line 1259 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1279 "instmap.m"
              {
#line 1279 "instmap.m"
                hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50 = hlds__instmap__STATE_VARIABLE_ModuleInfo_42_42;
#line 1280 "instmap.m"
                {
#line 1280 "instmap.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_20)), ((MR_Box) (hlds__instmap__Inst1_33)), hlds__instmap__STATE_VARIABLE_InstMapping_0_6, &hlds__instmap__STATE_VARIABLE_InstMapping_43_43);
                }
#line 1279 "instmap.m"
              }
#line 1259 "instmap.m"
            else
#line 1282 "instmap.m"
              {
#line 1282 "instmap.m"
                MR_Integer hlds__instmap__VarInt_35;
#line 1282 "instmap.m"
                MR_String hlds__instmap__Msg_36;
#line 1282 "instmap.m"
                MR_String hlds__instmap__V_60_60;

#line 1282 "instmap.m"
                {
#line 1282 "instmap.m"
                  mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Var_20, &hlds__instmap__VarInt_35);
                }
#line 1284 "instmap.m"
                {
#line 1284 "instmap.m"
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__instmap_scalar_common_7[1], hlds__instmap__VarInt_35, &hlds__instmap__V_60_60);
                }
#line 1283 "instmap.m"
                {
#line 1283 "instmap.m"
                  hlds__instmap__Msg_36 = mercury__string__f_43_43_2_f_0((MR_String) "merge_instmapping_delta_2: error merging var ", hlds__instmap__V_60_60);
                }
#line 1285 "instmap.m"
                {
#line 1285 "instmap.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.merge_instmapping_delta_2\'/9", hlds__instmap__Msg_36);
#line 1285 "instmap.m"
                  return;
                }
#line 1282 "instmap.m"
              }
#line 1287 "instmap.m"
            /* direct tailcall eliminated */
#line 1287 "instmap.m"
            {
#line 1287 "instmap.m"
              MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__Vars_21;
#line 1287 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_6 = hlds__instmap__STATE_VARIABLE_InstMapping_43_43;
#line 1287 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50;

#line 1287 "instmap.m"
              hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8;
#line 1287 "instmap.m"
              hlds__instmap__STATE_VARIABLE_InstMapping_0_6 = hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_6;
#line 1287 "instmap.m"
              hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 1287 "instmap.m"
            }
#line 1287 "instmap.m"
            continue;
#line 1248 "instmap.m"
          }
#line 1246 "instmap.m"
      }
#line 1246 "instmap.m"
      break;
#line 1246 "instmap.m"
    }
#line 1241 "instmap.m"
}

#line 1185 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__var_is_not_output_5_p_0(
#line 1185 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 1185 "instmap.m"
  MR_Word hlds__instmap__VarTypes_7,
#line 1185 "instmap.m"
  MR_Word hlds__instmap__InstMap0_8,
#line 1185 "instmap.m"
  MR_Word hlds__instmap__InstMapDeltaMap_9,
#line 1185 "instmap.m"
  MR_Word hlds__instmap__Var_10)
#line 1185 "instmap.m"
{
#line 1188 "instmap.m"
  {
#line 1188 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 1188 "instmap.m"
    MR_Word hlds__instmap__OldInst_11;
#line 1190 "instmap.m"
    MR_Word hlds__instmap__NewInst_12;
#line 1190 "instmap.m"
    MR_Box hlds__instmap__conv0_NewInst_12;

#line 1189 "instmap.m"
    {
#line 1189 "instmap.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap0_8, hlds__instmap__Var_10, &hlds__instmap__OldInst_11);
    }
#line 1190 "instmap.m"
    {
#line 1190 "instmap.m"
      hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapDeltaMap_9, ((MR_Box) (hlds__instmap__Var_10)), &hlds__instmap__conv0_NewInst_12);
    }
#line 1190 "instmap.m"
    if (hlds__instmap__succeeded)
#line 1190 "instmap.m"
      {
#line 1190 "instmap.m"
        hlds__instmap__NewInst_12 = ((MR_Word) hlds__instmap__conv0_NewInst_12);
#line 1190 "instmap.m"
        hlds__instmap__succeeded = MR_TRUE;
#line 1190 "instmap.m"
      }
#line 1190 "instmap.m"
    if (hlds__instmap__succeeded)
#line 1206 "instmap.m"
      {
#line 1206 "instmap.m"
        MR_Word hlds__instmap__Type_13;

#line 1206 "instmap.m"
        {
#line 1206 "instmap.m"
          hlds__vartypes__lookup_var_type_3_p_0(hlds__instmap__VarTypes_7, hlds__instmap__Var_10, &hlds__instmap__Type_13);
        }
#line 1207 "instmap.m"
        {
#line 1207 "instmap.m"
          hlds__instmap__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(hlds__instmap__NewInst_12, hlds__instmap__OldInst_11, hlds__instmap__Type_13, hlds__instmap__ModuleInfo_6);
        }
#line 1206 "instmap.m"
      }
#line 1190 "instmap.m"
    else
#line 1211 "instmap.m"
      {
#line 1211 "instmap.m"
        {
#line 1211 "instmap.m"
          hlds__instmap__succeeded = check_hlds__inst_util__inst_contains_any_2_p_0(hlds__instmap__ModuleInfo_6, hlds__instmap__OldInst_11);
        }
#line 1211 "instmap.m"
        hlds__instmap__succeeded = !(hlds__instmap__succeeded);
#line 1211 "instmap.m"
      }
#line 1188 "instmap.m"
    return hlds__instmap__succeeded;
#line 1188 "instmap.m"
  }
#line 1185 "instmap.m"
}

#line 1155 "instmap.m"
static void MR_CALL 
hlds__instmap__compute_instmap_delta_for_vars_4_p_0(
#line 1155 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 1155 "instmap.m"
  MR_Word hlds__instmap__InstMappingA_2,
#line 1155 "instmap.m"
  MR_Word hlds__instmap__InstMappingB_3,
#line 1155 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 1155 "instmap.m"
{
#line 1158 "instmap.m"
  {
#line 1158 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1158 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1158 "instmap.m"
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1158 "instmap.m"
    else
#line 1160 "instmap.m"
      {
#line 1160 "instmap.m"
        MR_Word hlds__instmap__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 1160 "instmap.m"
        MR_Word hlds__instmap__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 1160 "instmap.m"
        MR_Word hlds__instmap__AssocListTail_12;
#line 1160 "instmap.m"
        MR_Word hlds__instmap__InstA_13;
#line 1160 "instmap.m"
        MR_Word hlds__instmap__InstB_14;
#line 543 "instmap.m"
        MR_Word hlds__instmap__VarInst_20;
#line 543 "instmap.m"
        MR_Box hlds__instmap__conv0_VarInst_20;
#line 543 "instmap.m"
        MR_Word hlds__instmap__VarInst_26;
#line 543 "instmap.m"
        MR_Box hlds__instmap__conv1_VarInst_26;

#line 1161 "instmap.m"
        {
#line 1161 "instmap.m"
          hlds__instmap__compute_instmap_delta_for_vars_4_p_0(hlds__instmap__Vars_8, hlds__instmap__InstMappingA_2, hlds__instmap__InstMappingB_3, &hlds__instmap__AssocListTail_12);
        }
#line 543 "instmap.m"
        {
#line 543 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingA_2, ((MR_Box) (hlds__instmap__Var_7)), &hlds__instmap__conv0_VarInst_20);
        }
#line 543 "instmap.m"
        if (hlds__instmap__succeeded)
#line 543 "instmap.m"
          {
#line 543 "instmap.m"
            hlds__instmap__VarInst_20 = ((MR_Word) hlds__instmap__conv0_VarInst_20);
#line 543 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 543 "instmap.m"
          }
#line 543 "instmap.m"
        if (hlds__instmap__succeeded)
#line 544 "instmap.m"
          hlds__instmap__InstA_13 = hlds__instmap__VarInst_20;
#line 543 "instmap.m"
        else
#line 546 "instmap.m"
          hlds__instmap__InstA_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 543 "instmap.m"
        {
#line 543 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingB_3, ((MR_Box) (hlds__instmap__Var_7)), &hlds__instmap__conv1_VarInst_26);
        }
#line 543 "instmap.m"
        if (hlds__instmap__succeeded)
#line 543 "instmap.m"
          {
#line 543 "instmap.m"
            hlds__instmap__VarInst_26 = ((MR_Word) hlds__instmap__conv1_VarInst_26);
#line 543 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 543 "instmap.m"
          }
#line 543 "instmap.m"
        if (hlds__instmap__succeeded)
#line 544 "instmap.m"
          hlds__instmap__InstB_14 = hlds__instmap__VarInst_26;
#line 543 "instmap.m"
        else
#line 546 "instmap.m"
          hlds__instmap__InstB_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1165 "instmap.m"
        {
#line 1165 "instmap.m"
          hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__InstA_13, hlds__instmap__InstB_14);
        }
#line 1165 "instmap.m"
        if (hlds__instmap__succeeded)
#line 1166 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = hlds__instmap__AssocListTail_12;
#line 1165 "instmap.m"
        else
#line 1168 "instmap.m"
          {
#line 1168 "instmap.m"
            MR_Word hlds__instmap__V_15_15;

#line 1168 "instmap.m"
            {
#line 1168 "instmap.m"
              hlds__instmap__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1168 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 0) = ((MR_Box) (hlds__instmap__Var_7));
#line 1168 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 1) = ((MR_Box) (hlds__instmap__InstB_14));
#line 1168 "instmap.m"
            }
#line 1168 "instmap.m"
            {
#line 1168 "instmap.m"
              MR_Word base;
#line 1168 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1168 "instmap.m"
              *hlds__instmap__HeadVar__4_4 = base;
#line 1168 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__V_15_15));
#line 1168 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__AssocListTail_12));
#line 1168 "instmap.m"
            }
#line 1168 "instmap.m"
          }
#line 1160 "instmap.m"
      }
#line 1158 "instmap.m"
  }
#line 1155 "instmap.m"
}

#line 1099 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_instmap_deltas_2_8_p_0(
#line 1099 "instmap.m"
  MR_Word hlds__instmap__InstMap_9,
#line 1099 "instmap.m"
  MR_Word hlds__instmap__NonLocals_10,
#line 1099 "instmap.m"
  MR_Word hlds__instmap__VarTypes_11,
#line 1099 "instmap.m"
  MR_Word hlds__instmap__Deltas_12,
#line 1099 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24,
#line 1099 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_MergedDeltas_25,
#line 1099 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26,
#line 1099 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_27)
#line 1099 "instmap.m"
{
#line 1106 "instmap.m"
  while (MR_TRUE)
#line 1106 "instmap.m"
    {
#line 1106 "instmap.m"
      /* tailcall optimized into a loop */
#line 1106 "instmap.m"
      {
#line 1106 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 1106 "instmap.m"
        if ((hlds__instmap__Deltas_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1106 "instmap.m"
          {
#line 1106 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_MergedDeltas_25 = hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24;
#line 1106 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_27 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26;
#line 1106 "instmap.m"
          }
#line 1106 "instmap.m"
        else
#line 1106 "instmap.m"
          {
#line 1106 "instmap.m"
            MR_Word hlds__instmap__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Deltas_12, (MR_Integer) 1)));
#line 1106 "instmap.m"
            MR_Word hlds__instmap__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Deltas_12, (MR_Integer) 0)));

#line 1106 "instmap.m"
            if ((hlds__instmap__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1108 "instmap.m"
              {
#line 1109 "instmap.m"
                {
#line 1109 "instmap.m"
                  MR_Word base;
#line 1109 "instmap.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "instmap.m"
                  *hlds__instmap__STATE_VARIABLE_MergedDeltas_25 = base;
#line 1109 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__V_58_58));
#line 1109 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24));
#line 1109 "instmap.m"
                }
#line 1108 "instmap.m"
                *hlds__instmap__STATE_VARIABLE_ModuleInfo_27 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26;
#line 1108 "instmap.m"
              }
#line 1106 "instmap.m"
            else
#line 1106 "instmap.m"
              {
#line 1106 "instmap.m"
                MR_Word hlds__instmap__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_57_57, (MR_Integer) 1)));
#line 1106 "instmap.m"
                MR_Word hlds__instmap__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_57_57, (MR_Integer) 0)));

#line 1106 "instmap.m"
                if ((hlds__instmap__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1111 "instmap.m"
                  {
#line 1111 "instmap.m"
                    MR_Word hlds__instmap__Delta12_17;

#line 1112 "instmap.m"
                    {
#line 1112 "instmap.m"
                      hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__V_58_58, hlds__instmap__V_60_60, &hlds__instmap__Delta12_17, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26, hlds__instmap__STATE_VARIABLE_ModuleInfo_27);
                    }
#line 1114 "instmap.m"
                    {
#line 1114 "instmap.m"
                      MR_Word base;
#line 1114 "instmap.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1114 "instmap.m"
                      *hlds__instmap__STATE_VARIABLE_MergedDeltas_25 = base;
#line 1114 "instmap.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Delta12_17));
#line 1114 "instmap.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24));
#line 1114 "instmap.m"
                    }
#line 1111 "instmap.m"
                  }
#line 1106 "instmap.m"
                else
#line 1106 "instmap.m"
                  {
#line 1106 "instmap.m"
                    MR_Word hlds__instmap__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_59_59, (MR_Integer) 1)));
#line 1106 "instmap.m"
                    MR_Word hlds__instmap__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_59_59, (MR_Integer) 0)));

#line 1106 "instmap.m"
                    if ((hlds__instmap__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1116 "instmap.m"
                      {
#line 1116 "instmap.m"
                        MR_Word hlds__instmap__Delta123_19;
#line 1116 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40;
#line 1116 "instmap.m"
                        MR_Word hlds__instmap__Delta12_52;

#line 1117 "instmap.m"
                        {
#line 1117 "instmap.m"
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__V_58_58, hlds__instmap__V_60_60, &hlds__instmap__Delta12_52, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26, &hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40);
                        }
#line 1119 "instmap.m"
                        {
#line 1119 "instmap.m"
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__Delta12_52, hlds__instmap__V_62_62, &hlds__instmap__Delta123_19, hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40, hlds__instmap__STATE_VARIABLE_ModuleInfo_27);
                        }
#line 1121 "instmap.m"
                        {
#line 1121 "instmap.m"
                          MR_Word base;
#line 1121 "instmap.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1121 "instmap.m"
                          *hlds__instmap__STATE_VARIABLE_MergedDeltas_25 = base;
#line 1121 "instmap.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Delta123_19));
#line 1121 "instmap.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24));
#line 1121 "instmap.m"
                        }
#line 1116 "instmap.m"
                      }
#line 1106 "instmap.m"
                    else
#line 1123 "instmap.m"
                      {
#line 1123 "instmap.m"
                        MR_Word hlds__instmap__Delta4_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_61_61, (MR_Integer) 0)));
#line 1123 "instmap.m"
                        MR_Word hlds__instmap__MoreDeltas_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_61_61, (MR_Integer) 1)));
#line 1123 "instmap.m"
                        MR_Word hlds__instmap__Delta34_22;
#line 1123 "instmap.m"
                        MR_Word hlds__instmap__Delta1234_23;
#line 1123 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_31_31;
#line 1123 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32;
#line 1123 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33;
#line 1123 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34;
#line 1123 "instmap.m"
                        MR_Word hlds__instmap__Delta12_55;

#line 1124 "instmap.m"
                        {
#line 1124 "instmap.m"
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__V_58_58, hlds__instmap__V_60_60, &hlds__instmap__Delta12_55, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26, &hlds__instmap__STATE_VARIABLE_ModuleInfo_31_31);
                        }
#line 1126 "instmap.m"
                        {
#line 1126 "instmap.m"
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__V_62_62, hlds__instmap__Delta4_20, &hlds__instmap__Delta34_22, hlds__instmap__STATE_VARIABLE_ModuleInfo_31_31, &hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32);
                        }
#line 1128 "instmap.m"
                        {
#line 1128 "instmap.m"
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__Delta12_55, hlds__instmap__Delta34_22, &hlds__instmap__Delta1234_23, hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32, &hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33);
                        }
#line 1130 "instmap.m"
                        {
#line 1130 "instmap.m"
                          hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "instmap.m"
                          MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34, 0) = ((MR_Box) (hlds__instmap__Delta1234_23));
#line 1130 "instmap.m"
                          MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24));
#line 1130 "instmap.m"
                        }
#line 1131 "instmap.m"
                        /* direct tailcall eliminated */
#line 1131 "instmap.m"
                        {
#line 1131 "instmap.m"
                          MR_Word hlds__instmap__Deltas__tmp_copy_12 = hlds__instmap__MoreDeltas_21;
#line 1131 "instmap.m"
                          MR_Word hlds__instmap__STATE_VARIABLE_MergedDeltas_0__tmp_copy_24 = hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34;
#line 1131 "instmap.m"
                          MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33;

#line 1131 "instmap.m"
                          hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_26;
#line 1131 "instmap.m"
                          hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24 = hlds__instmap__STATE_VARIABLE_MergedDeltas_0__tmp_copy_24;
#line 1131 "instmap.m"
                          hlds__instmap__Deltas_12 = hlds__instmap__Deltas__tmp_copy_12;
#line 1131 "instmap.m"
                        }
#line 1131 "instmap.m"
                        continue;
#line 1123 "instmap.m"
                      }
#line 1106 "instmap.m"
                  }
#line 1106 "instmap.m"
              }
#line 1106 "instmap.m"
          }
#line 1106 "instmap.m"
      }
#line 1106 "instmap.m"
      break;
#line 1106 "instmap.m"
    }
#line 1099 "instmap.m"
}

#line 1075 "instmap.m"
static void MR_CALL 
hlds__instmap__arm_instmap_project_context_2_p_0(
#line 1075 "instmap.m"
  MR_Word hlds__instmap__ArmErrorInfo_3,
#line 1075 "instmap.m"
  MR_Word * hlds__instmap__Context_4)
#line 1075 "instmap.m"
{
#line 1078 "instmap.m"
  {
#line 1078 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 1078 "instmap.m"
    MR_Word hlds__instmap___InstMap_5;

#line 1078 "instmap.m"
    *hlds__instmap__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmErrorInfo_3, (MR_Integer) 0)));
#line 1078 "instmap.m"
    hlds__instmap___InstMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmErrorInfo_3, (MR_Integer) 1)));
#line 1078 "instmap.m"
  }
#line 1075 "instmap.m"
}

#line 1029 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_var_insts_pass_8_p_0(
#line 1029 "instmap.m"
  MR_Word hlds__instmap__Insts_9,
#line 1029 "instmap.m"
  MR_Word hlds__instmap__MaybeType_10,
#line 1029 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_MergedInsts_0_23,
#line 1029 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_MergedInsts_24,
#line 1029 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25,
#line 1029 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_26,
#line 1029 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_Error_0_27,
#line 1029 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_Error_28)
#line 1029 "instmap.m"
{
#line 1035 "instmap.m"
  while (MR_TRUE)
#line 1035 "instmap.m"
    {
#line 1035 "instmap.m"
      /* tailcall optimized into a loop */
#line 1035 "instmap.m"
      {
#line 1035 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 1035 "instmap.m"
        if ((hlds__instmap__Insts_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1035 "instmap.m"
          {
#line 1035 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = hlds__instmap__STATE_VARIABLE_MergedInsts_0_23;
#line 1035 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
#line 1035 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_Error_28 = hlds__instmap__STATE_VARIABLE_Error_0_27;
#line 1035 "instmap.m"
          }
#line 1035 "instmap.m"
        else
#line 1035 "instmap.m"
          {
#line 1035 "instmap.m"
            MR_Word hlds__instmap__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Insts_9, (MR_Integer) 1)));
#line 1035 "instmap.m"
            MR_Word hlds__instmap__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Insts_9, (MR_Integer) 0)));

#line 1035 "instmap.m"
            if ((hlds__instmap__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1037 "instmap.m"
              {
#line 1038 "instmap.m"
                {
#line 1038 "instmap.m"
                  MR_Word base;
#line 1038 "instmap.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1038 "instmap.m"
                  *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = base;
#line 1038 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__V_69_69));
#line 1038 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedInsts_0_23));
#line 1038 "instmap.m"
                }
#line 1037 "instmap.m"
                *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
#line 1037 "instmap.m"
                *hlds__instmap__STATE_VARIABLE_Error_28 = hlds__instmap__STATE_VARIABLE_Error_0_27;
#line 1037 "instmap.m"
              }
#line 1035 "instmap.m"
            else
#line 1035 "instmap.m"
              {
#line 1035 "instmap.m"
                MR_Word hlds__instmap__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_68_68, (MR_Integer) 1)));
#line 1035 "instmap.m"
                MR_Word hlds__instmap__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_68_68, (MR_Integer) 0)));

#line 1035 "instmap.m"
                if ((hlds__instmap__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1041 "instmap.m"
                  {
#line 1041 "instmap.m"
                    MR_Word hlds__instmap__Inst12_16;
#line 1041 "instmap.m"
                    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50;

#line 1042 "instmap.m"
                    {
#line 1042 "instmap.m"
                      hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__V_69_69, hlds__instmap__V_71_71, hlds__instmap__MaybeType_10, &hlds__instmap__Inst12_16, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25, &hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50);
                    }
#line 1041 "instmap.m"
                    if (hlds__instmap__succeeded)
#line 1044 "instmap.m"
                      {
#line 1044 "instmap.m"
                        *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50;
#line 1044 "instmap.m"
                        {
#line 1044 "instmap.m"
                          MR_Word base;
#line 1044 "instmap.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1044 "instmap.m"
                          *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = base;
#line 1044 "instmap.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Inst12_16));
#line 1044 "instmap.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedInsts_0_23));
#line 1044 "instmap.m"
                        }
#line 1044 "instmap.m"
                        *hlds__instmap__STATE_VARIABLE_Error_28 = hlds__instmap__STATE_VARIABLE_Error_0_27;
#line 1044 "instmap.m"
                      }
#line 1041 "instmap.m"
                    else
#line 1046 "instmap.m"
                      {
#line 1046 "instmap.m"
                        *hlds__instmap__STATE_VARIABLE_Error_28 = (MR_Integer) 1;
#line 1046 "instmap.m"
                        *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
#line 1046 "instmap.m"
                        *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = hlds__instmap__STATE_VARIABLE_MergedInsts_0_23;
#line 1046 "instmap.m"
                      }
#line 1041 "instmap.m"
                  }
#line 1035 "instmap.m"
                else
#line 1035 "instmap.m"
                  {
#line 1035 "instmap.m"
                    MR_Word hlds__instmap__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_70_70, (MR_Integer) 1)));
#line 1035 "instmap.m"
                    MR_Word hlds__instmap__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_70_70, (MR_Integer) 0)));

#line 1035 "instmap.m"
                    if ((hlds__instmap__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1050 "instmap.m"
                      {
#line 1050 "instmap.m"
                        MR_Word hlds__instmap__Inst123_18;
#line 1050 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_44_44;
#line 1051 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_43_43;
#line 1051 "instmap.m"
                        MR_Word hlds__instmap__Inst12_57;

#line 1051 "instmap.m"
                        {
#line 1051 "instmap.m"
                          hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__V_69_69, hlds__instmap__V_71_71, hlds__instmap__MaybeType_10, &hlds__instmap__Inst12_57, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25, &hlds__instmap__STATE_VARIABLE_ModuleInfo_43_43);
                        }
#line 1051 "instmap.m"
                        if (hlds__instmap__succeeded)
#line 1052 "instmap.m"
                          {
#line 1052 "instmap.m"
                            hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__Inst12_57, hlds__instmap__V_73_73, hlds__instmap__MaybeType_10, &hlds__instmap__Inst123_18, hlds__instmap__STATE_VARIABLE_ModuleInfo_43_43, &hlds__instmap__STATE_VARIABLE_ModuleInfo_44_44);
                          }
#line 1050 "instmap.m"
                        if (hlds__instmap__succeeded)
#line 1054 "instmap.m"
                          {
#line 1054 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_44_44;
#line 1054 "instmap.m"
                            {
#line 1054 "instmap.m"
                              MR_Word base;
#line 1054 "instmap.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1054 "instmap.m"
                              *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = base;
#line 1054 "instmap.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Inst123_18));
#line 1054 "instmap.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedInsts_0_23));
#line 1054 "instmap.m"
                            }
#line 1054 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_Error_28 = hlds__instmap__STATE_VARIABLE_Error_0_27;
#line 1054 "instmap.m"
                          }
#line 1050 "instmap.m"
                        else
#line 1056 "instmap.m"
                          {
#line 1056 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_Error_28 = (MR_Integer) 1;
#line 1056 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
#line 1056 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = hlds__instmap__STATE_VARIABLE_MergedInsts_0_23;
#line 1056 "instmap.m"
                          }
#line 1050 "instmap.m"
                      }
#line 1035 "instmap.m"
                    else
#line 1059 "instmap.m"
                      {
#line 1059 "instmap.m"
                        MR_Word hlds__instmap__Inst4_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_72_72, (MR_Integer) 0)));
#line 1059 "instmap.m"
                        MR_Word hlds__instmap__MoreInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__V_72_72, (MR_Integer) 1)));
#line 1060 "instmap.m"
                        MR_Word hlds__instmap__Inst1234_22;
#line 1060 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_34_34;
#line 1061 "instmap.m"
                        MR_Word hlds__instmap__Inst34_21;
#line 1061 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32;
#line 1061 "instmap.m"
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33;
#line 1061 "instmap.m"
                        MR_Word hlds__instmap__Inst12_62;

#line 1061 "instmap.m"
                        {
#line 1061 "instmap.m"
                          hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__V_69_69, hlds__instmap__V_71_71, hlds__instmap__MaybeType_10, &hlds__instmap__Inst12_62, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25, &hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32);
                        }
#line 1061 "instmap.m"
                        if (hlds__instmap__succeeded)
#line 1061 "instmap.m"
                          {
#line 1062 "instmap.m"
                            {
#line 1062 "instmap.m"
                              hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__V_73_73, hlds__instmap__Inst4_19, hlds__instmap__MaybeType_10, &hlds__instmap__Inst34_21, hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32, &hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33);
                            }
#line 1061 "instmap.m"
                            if (hlds__instmap__succeeded)
#line 1063 "instmap.m"
                              {
#line 1063 "instmap.m"
                                hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__Inst12_62, hlds__instmap__Inst34_21, hlds__instmap__MaybeType_10, &hlds__instmap__Inst1234_22, hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33, &hlds__instmap__STATE_VARIABLE_ModuleInfo_34_34);
                              }
#line 1061 "instmap.m"
                          }
#line 1060 "instmap.m"
                        if (hlds__instmap__succeeded)
#line 1065 "instmap.m"
                          {
#line 1065 "instmap.m"
                            MR_Word hlds__instmap__STATE_VARIABLE_MergedInsts_35_35;

#line 1065 "instmap.m"
                            {
#line 1065 "instmap.m"
                              hlds__instmap__STATE_VARIABLE_MergedInsts_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "instmap.m"
                              MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_MergedInsts_35_35, 0) = ((MR_Box) (hlds__instmap__Inst1234_22));
#line 1065 "instmap.m"
                              MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_MergedInsts_35_35, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedInsts_0_23));
#line 1065 "instmap.m"
                            }
#line 1066 "instmap.m"
                            /* direct tailcall eliminated */
#line 1066 "instmap.m"
                            {
#line 1066 "instmap.m"
                              MR_Word hlds__instmap__Insts__tmp_copy_9 = hlds__instmap__MoreInsts_20;
#line 1066 "instmap.m"
                              MR_Word hlds__instmap__STATE_VARIABLE_MergedInsts_0__tmp_copy_23 = hlds__instmap__STATE_VARIABLE_MergedInsts_35_35;
#line 1066 "instmap.m"
                              MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_25 = hlds__instmap__STATE_VARIABLE_ModuleInfo_34_34;

#line 1066 "instmap.m"
                              hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_25;
#line 1066 "instmap.m"
                              hlds__instmap__STATE_VARIABLE_MergedInsts_0_23 = hlds__instmap__STATE_VARIABLE_MergedInsts_0__tmp_copy_23;
#line 1066 "instmap.m"
                              hlds__instmap__Insts_9 = hlds__instmap__Insts__tmp_copy_9;
#line 1066 "instmap.m"
                            }
#line 1066 "instmap.m"
                            continue;
#line 1065 "instmap.m"
                          }
#line 1060 "instmap.m"
                        else
#line 1069 "instmap.m"
                          {
#line 1069 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_Error_28 = (MR_Integer) 1;
#line 1069 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
#line 1069 "instmap.m"
                            *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = hlds__instmap__STATE_VARIABLE_MergedInsts_0_23;
#line 1069 "instmap.m"
                          }
#line 1059 "instmap.m"
                      }
#line 1035 "instmap.m"
                  }
#line 1035 "instmap.m"
              }
#line 1035 "instmap.m"
          }
#line 1035 "instmap.m"
      }
#line 1035 "instmap.m"
      break;
#line 1035 "instmap.m"
    }
#line 1029 "instmap.m"
}

#line 1005 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_var_insts_5_p_0(
#line 1005 "instmap.m"
  MR_Word hlds__instmap__Insts_6,
#line 1005 "instmap.m"
  MR_Word hlds__instmap__MaybeType_7,
#line 1005 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_16,
#line 1005 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_17,
#line 1005 "instmap.m"
  MR_Word * hlds__instmap__MaybeMergedInst_9)
#line 1005 "instmap.m"
{
#line 1008 "instmap.m"
  while (MR_TRUE)
#line 1008 "instmap.m"
    {
#line 1008 "instmap.m"
      /* tailcall optimized into a loop */
#line 1008 "instmap.m"
      {
#line 1008 "instmap.m"
        MR_bool hlds__instmap__succeeded;
#line 1008 "instmap.m"
        MR_Word hlds__instmap__MergedInsts_10;
#line 1008 "instmap.m"
        MR_Word hlds__instmap__Error_11;
#line 1008 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19;

#line 1009 "instmap.m"
        {
#line 1009 "instmap.m"
          hlds__instmap__merge_var_insts_pass_8_p_0(hlds__instmap__Insts_6, hlds__instmap__MaybeType_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__instmap__MergedInsts_10, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_16, &hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19, (MR_Integer) 0, &hlds__instmap__Error_11);
        }
#line 1014 "instmap.m"
#line 1014 "instmap.m"
        switch (hlds__instmap__Error_11) {
#line 1014 "instmap.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1014 "instmap.m"
          case (MR_Integer) 0:
#line 1015 "instmap.m"
            if ((hlds__instmap__MergedInsts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1017 "instmap.m"
              {
#line 1018 "instmap.m"
                *hlds__instmap__MaybeMergedInst_9 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__instmap_scalar_common_7[0]);
#line 1017 "instmap.m"
                *hlds__instmap__STATE_VARIABLE_ModuleInfo_17 = hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19;
#line 1017 "instmap.m"
              }
#line 1015 "instmap.m"
            else
#line 1019 "instmap.m"
              {
#line 1019 "instmap.m"
                MR_Word hlds__instmap__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MergedInsts_10, (MR_Integer) 1)));
#line 1019 "instmap.m"
                MR_Word hlds__instmap__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MergedInsts_10, (MR_Integer) 0)));

#line 1019 "instmap.m"
                if ((hlds__instmap__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1020 "instmap.m"
                  {
#line 1021 "instmap.m"
                    {
#line 1021 "instmap.m"
                      MR_Word base;
#line 1021 "instmap.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "instmap.m"
                      *hlds__instmap__MaybeMergedInst_9 = base;
#line 1021 "instmap.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__V_26_26));
#line 1021 "instmap.m"
                    }
#line 1020 "instmap.m"
                    *hlds__instmap__STATE_VARIABLE_ModuleInfo_17 = hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19;
#line 1020 "instmap.m"
                  }
#line 1019 "instmap.m"
                else
#line 1024 "instmap.m"
                  {
#line 1024 "instmap.m"
                    /* direct tailcall eliminated */
#line 1024 "instmap.m"
                    {
#line 1024 "instmap.m"
                      MR_Word hlds__instmap__Insts__tmp_copy_6 = hlds__instmap__MergedInsts_10;
#line 1024 "instmap.m"
                      MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_16 = hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19;

#line 1024 "instmap.m"
                      hlds__instmap__STATE_VARIABLE_ModuleInfo_0_16 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_16;
#line 1024 "instmap.m"
                      hlds__instmap__Insts_6 = hlds__instmap__Insts__tmp_copy_6;
#line 1024 "instmap.m"
                    }
#line 1024 "instmap.m"
                    continue;
#line 1024 "instmap.m"
                  }
#line 1019 "instmap.m"
              }
#line 1014 "instmap.m"
            break;
#line 1014 "instmap.m"
          case (MR_Integer) 1:
#line 1012 "instmap.m"
            {
#line 1013 "instmap.m"
              *hlds__instmap__MaybeMergedInst_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1012 "instmap.m"
              *hlds__instmap__STATE_VARIABLE_ModuleInfo_17 = hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19;
#line 1012 "instmap.m"
            }
#line 1014 "instmap.m"
            break;
#line 1014 "instmap.m"
        }
#line 1008 "instmap.m"
      }
#line 1008 "instmap.m"
      break;
#line 1008 "instmap.m"
    }
#line 1005 "instmap.m"
}

#line 973 "instmap.m"
static void MR_CALL 
hlds__instmap__lookup_var_in_arm_instmap_3_p_0(
#line 973 "instmap.m"
  MR_Word hlds__instmap__Var_4,
#line 973 "instmap.m"
  MR_Word hlds__instmap__ArmInstMap_5,
#line 973 "instmap.m"
  MR_Word * hlds__instmap__Inst_6)
#line 973 "instmap.m"
{
#line 976 "instmap.m"
  {
#line 976 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 976 "instmap.m"
    MR_Word hlds__instmap__InstMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmInstMap_5, (MR_Integer) 1)));
#line 977 "instmap.m"
    MR_Word hlds__instmap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmInstMap_5, (MR_Integer) 0)));

#line 978 "instmap.m"
    {
#line 978 "instmap.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_8, hlds__instmap__Var_4, hlds__instmap__Inst_6);
    }
#line 976 "instmap.m"
  }
#line 973 "instmap.m"
}

#line 964 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_2(
#line 964 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 964 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 964 "instmap.m"
  MR_Box * hlds__instmap__wrapper_arg_2)
#line 964 "instmap.m"
{
#line 964 "instmap.m"
  {
#line 964 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;
#line 964 "instmap.m"
    MR_Word hlds__instmap__conv1_Context_4;

#line 964 "instmap.m"
    {
#line 964 "instmap.m"
      hlds__instmap__arm_instmap_project_context_2_p_0(((MR_Word) hlds__instmap__wrapper_arg_1), &hlds__instmap__conv1_Context_4);
    }
#line 964 "instmap.m"
    *hlds__instmap__wrapper_arg_2 = ((MR_Box) (hlds__instmap__conv1_Context_4));
#line 964 "instmap.m"
  }
#line 964 "instmap.m"
}

#line 960 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_1(
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
    MR_Word hlds__instmap__conv0_Inst_6;

#line 960 "instmap.m"
    {
#line 960 "instmap.m"
      hlds__instmap__lookup_var_in_arm_instmap_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) hlds__instmap__wrapper_arg_1), &hlds__instmap__conv0_Inst_6);
    }
#line 960 "instmap.m"
    *hlds__instmap__wrapper_arg_2 = ((MR_Box) (hlds__instmap__conv0_Inst_6));
#line 960 "instmap.m"
  }
#line 960 "instmap.m"
}

#line 950 "instmap.m"
static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0(
#line 950 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 950 "instmap.m"
  MR_Word hlds__instmap__ArmInstMaps_2,
#line 950 "instmap.m"
  MR_Word hlds__instmap__VarTypes_3,
#line 950 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 950 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__5_5,
#line 950 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6,
#line 950 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_7,
#line 950 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__8_8)
#line 950 "instmap.m"
{
#line 954 "instmap.m"
  {
#line 954 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 954 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 954 "instmap.m"
      {
#line 954 "instmap.m"
        *hlds__instmap__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 954 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6;
#line 954 "instmap.m"
        *hlds__instmap__HeadVar__5_5 = hlds__instmap__HeadVar__4_4;
#line 954 "instmap.m"
      }
#line 954 "instmap.m"
    else
#line 956 "instmap.m"
      {
#line 956 "instmap.m"
        MR_Word hlds__instmap__TypeCtorInfo_49_49;
#line 956 "instmap.m"
        MR_Word hlds__instmap__TypeCtorInfo_50_50;
#line 956 "instmap.m"
        MR_Word hlds__instmap__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 956 "instmap.m"
        MR_Word hlds__instmap__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 956 "instmap.m"
        MR_Word hlds__instmap__VarType_24;
#line 956 "instmap.m"
        MR_Word hlds__instmap__InstList_25;
#line 956 "instmap.m"
        MR_Word hlds__instmap__MaybeInst_26;
#line 956 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_35_35;
#line 956 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_36_36;
#line 956 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ErrorList_37_37;
#line 956 "instmap.m"
        MR_Word hlds__instmap__V_38_38;
#line 956 "instmap.m"
        MR_Word hlds__instmap__V_39_39;

#line 957 "instmap.m"
        {
#line 957 "instmap.m"
          hlds__instmap__merge_insts_of_vars_8_p_0(hlds__instmap__Vars_18, hlds__instmap__ArmInstMaps_2, hlds__instmap__VarTypes_3, hlds__instmap__HeadVar__4_4, &hlds__instmap__STATE_VARIABLE_InstMapping_35_35, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6, &hlds__instmap__STATE_VARIABLE_ModuleInfo_36_36, &hlds__instmap__STATE_VARIABLE_ErrorList_37_37);
        }
#line 959 "instmap.m"
        {
#line 959 "instmap.m"
          hlds__vartypes__lookup_var_type_3_p_0(hlds__instmap__VarTypes_3, hlds__instmap__Var_17, &hlds__instmap__VarType_24);
        }
#line 960 "instmap.m"
        {
#line 960 "instmap.m"
          hlds__instmap__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 960 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_38_38, 0) = ((MR_Box) (&hlds__instmap_scalar_common_6[0]));
#line 960 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_38_38, 1) = ((MR_Box) (hlds__instmap__merge_insts_of_vars_8_p_0_1));
#line 960 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 960 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_38_38, 3) = ((MR_Box) (hlds__instmap__Var_17));
#line 960 "instmap.m"
        }
#line 3855 "hlds.instmap.c"
        hlds__instmap__TypeCtorInfo_49_49 = (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_arm_instmap_0;
#line 3857 "hlds.instmap.c"
        hlds__instmap__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 960 "instmap.m"
        {
#line 960 "instmap.m"
          mercury__list__map_3_p_0(hlds__instmap__TypeCtorInfo_49_49, hlds__instmap__TypeCtorInfo_50_50, hlds__instmap__V_38_38, hlds__instmap__ArmInstMaps_2, &hlds__instmap__InstList_25);
        }
#line 961 "instmap.m"
        {
#line 961 "instmap.m"
          hlds__instmap__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 961 "instmap.m"
          MR_hl_field(MR_mktag(1), hlds__instmap__V_39_39, 0) = ((MR_Box) (hlds__instmap__VarType_24));
#line 961 "instmap.m"
        }
#line 961 "instmap.m"
        {
#line 961 "instmap.m"
          hlds__instmap__merge_var_insts_5_p_0(hlds__instmap__InstList_25, hlds__instmap__V_39_39, hlds__instmap__STATE_VARIABLE_ModuleInfo_36_36, hlds__instmap__STATE_VARIABLE_ModuleInfo_7, &hlds__instmap__MaybeInst_26);
        }
#line 968 "instmap.m"
        if ((hlds__instmap__MaybeInst_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 963 "instmap.m"
          {
#line 963 "instmap.m"
            MR_Word hlds__instmap__TypeCtorInfo_53_53 = (MR_Word) &mercury__term__term__type_ctor_info_context_0;
#line 963 "instmap.m"
            MR_Word hlds__instmap__Contexts_27;
#line 963 "instmap.m"
            MR_Word hlds__instmap__ContextsInsts_28;
#line 963 "instmap.m"
            MR_Word hlds__instmap__V_44_44;

#line 964 "instmap.m"
            {
#line 964 "instmap.m"
              mercury__list__map_3_p_0(hlds__instmap__TypeCtorInfo_49_49, hlds__instmap__TypeCtorInfo_53_53, (MR_Word) &hlds__instmap_scalar_common_2[4], hlds__instmap__ArmInstMaps_2, &hlds__instmap__Contexts_27);
            }
#line 965 "instmap.m"
            {
#line 965 "instmap.m"
              mercury__assoc_list__from_corresponding_lists_3_p_0(hlds__instmap__TypeCtorInfo_53_53, hlds__instmap__TypeCtorInfo_50_50, hlds__instmap__Contexts_27, hlds__instmap__InstList_25, &hlds__instmap__ContextsInsts_28);
            }
#line 966 "instmap.m"
            {
#line 966 "instmap.m"
              hlds__instmap__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 966 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_44_44, 0) = ((MR_Box) (hlds__instmap__Var_17));
#line 966 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_44_44, 1) = ((MR_Box) (hlds__instmap__ContextsInsts_28));
#line 966 "instmap.m"
            }
#line 966 "instmap.m"
            {
#line 966 "instmap.m"
              MR_Word base;
#line 966 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 966 "instmap.m"
              *hlds__instmap__HeadVar__8_8 = base;
#line 966 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__V_44_44));
#line 966 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_ErrorList_37_37));
#line 966 "instmap.m"
            }
#line 967 "instmap.m"
            {
#line 967 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], hlds__instmap__TypeCtorInfo_50_50, ((MR_Box) (hlds__instmap__Var_17)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), hlds__instmap__STATE_VARIABLE_InstMapping_35_35, hlds__instmap__HeadVar__5_5);
            }
#line 963 "instmap.m"
          }
#line 968 "instmap.m"
        else
#line 969 "instmap.m"
          {
#line 969 "instmap.m"
            MR_Word hlds__instmap__Inst_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MaybeInst_26, (MR_Integer) 0)));

#line 970 "instmap.m"
            {
#line 970 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], hlds__instmap__TypeCtorInfo_50_50, ((MR_Box) (hlds__instmap__Var_17)), ((MR_Box) (hlds__instmap__Inst_29)), hlds__instmap__STATE_VARIABLE_InstMapping_35_35, hlds__instmap__HeadVar__5_5);
            }
#line 969 "instmap.m"
            *hlds__instmap__HeadVar__8_8 = hlds__instmap__STATE_VARIABLE_ErrorList_37_37;
#line 969 "instmap.m"
          }
#line 956 "instmap.m"
      }
#line 954 "instmap.m"
  }
#line 950 "instmap.m"
}

#line 916 "instmap.m"
static void MR_CALL 
hlds__instmap__get_reachable_instmaps_2_p_0(
#line 916 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 916 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__2_2)
#line 916 "instmap.m"
{
#line 919 "instmap.m"
  while (MR_TRUE)
#line 919 "instmap.m"
    {
#line 919 "instmap.m"
      /* tailcall optimized into a loop */
#line 919 "instmap.m"
      {
#line 919 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 919 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 919 "instmap.m"
          *hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 919 "instmap.m"
        else
#line 920 "instmap.m"
          {
#line 920 "instmap.m"
            MR_Word hlds__instmap__ArmInstMap_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 920 "instmap.m"
            MR_Word hlds__instmap__ArmInstMaps_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 920 "instmap.m"
            MR_Word hlds__instmap__InstMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmInstMap_3, (MR_Integer) 1)));
#line 921 "instmap.m"
            MR_Word hlds__instmap__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmInstMap_3, (MR_Integer) 0)));

#line 926 "instmap.m"
            if ((hlds__instmap__InstMap_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 928 "instmap.m"
              {
#line 928 "instmap.m"
                /* direct tailcall eliminated */
#line 928 "instmap.m"
                {
#line 928 "instmap.m"
                  MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__ArmInstMaps_4;

#line 928 "instmap.m"
                  hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 928 "instmap.m"
                }
#line 928 "instmap.m"
                continue;
#line 928 "instmap.m"
              }
#line 926 "instmap.m"
            else
#line 923 "instmap.m"
              {
#line 923 "instmap.m"
                MR_Word hlds__instmap__InstMapping_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap_7, (MR_Integer) 0)));
#line 923 "instmap.m"
                MR_Word hlds__instmap__ReachablesTail_9;

#line 924 "instmap.m"
                {
#line 924 "instmap.m"
                  hlds__instmap__get_reachable_instmaps_2_p_0(hlds__instmap__ArmInstMaps_4, &hlds__instmap__ReachablesTail_9);
                }
#line 925 "instmap.m"
                {
#line 925 "instmap.m"
                  MR_Word base;
#line 925 "instmap.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 925 "instmap.m"
                  *hlds__instmap__HeadVar__2_2 = base;
#line 925 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_8));
#line 925 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__ReachablesTail_9));
#line 925 "instmap.m"
                }
#line 923 "instmap.m"
              }
#line 920 "instmap.m"
          }
#line 919 "instmap.m"
      }
#line 919 "instmap.m"
      break;
#line 919 "instmap.m"
    }
#line 916 "instmap.m"
}

#line 772 "instmap.m"
static void MR_CALL 
hlds__instmap__bind_inst_to_functors_others_6_p_0(
#line 772 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 772 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 772 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 772 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4,
#line 772 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5,
#line 772 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_6)
#line 772 "instmap.m"
{
#line 776 "instmap.m"
  {
#line 776 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 776 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 776 "instmap.m"
      {
#line 776 "instmap.m"
        *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 776 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_6 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5;
#line 776 "instmap.m"
      }
#line 776 "instmap.m"
    else
#line 778 "instmap.m"
      {
#line 778 "instmap.m"
        MR_Word hlds__instmap__ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 778 "instmap.m"
        MR_Word hlds__instmap__ConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 778 "instmap.m"
        MR_Word hlds__instmap__FinalInst_16;
#line 778 "instmap.m"
        MR_Word hlds__instmap__FinalInsts_17;
#line 778 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21;
#line 778 "instmap.m"
        MR_Integer hlds__instmap__Arity_31;
#line 778 "instmap.m"
        MR_Word hlds__instmap__ArgLives_32;
#line 778 "instmap.m"
        MR_Word hlds__instmap__ArgInsts_33;
#line 740 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_39;
#line 740 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_40;
#line 741 "instmap.m"
        MR_Word hlds__instmap___Det_34;

#line 737 "instmap.m"
        {
#line 737 "instmap.m"
          hlds__instmap__Arity_31 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5, hlds__instmap__HeadVar__1_1, hlds__instmap__ConsId_13);
        }
#line 738 "instmap.m"
        {
#line 738 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_31, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_32);
        }
#line 739 "instmap.m"
        {
#line 739 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_31, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_33);
        }
#line 741 "instmap.m"
        {
#line 741 "instmap.m"
          hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__HeadVar__3_3, hlds__instmap__ConsId_13, hlds__instmap__ArgInsts_33, hlds__instmap__ArgLives_32, (MR_Integer) 0, hlds__instmap__HeadVar__1_1, &hlds__instmap__STATE_VARIABLE_Inst_23_39, &hlds__instmap___Det_34, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_40);
        }
#line 740 "instmap.m"
        if (hlds__instmap__succeeded)
#line 744 "instmap.m"
          {
#line 744 "instmap.m"
            hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_40;
#line 744 "instmap.m"
            hlds__instmap__FinalInst_16 = hlds__instmap__STATE_VARIABLE_Inst_23_39;
#line 744 "instmap.m"
          }
#line 740 "instmap.m"
        else
#line 746 "instmap.m"
          {
#line 746 "instmap.m"
            {
#line 746 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
#line 746 "instmap.m"
              return;
            }
#line 746 "instmap.m"
          }
#line 780 "instmap.m"
        {
#line 780 "instmap.m"
          hlds__instmap__bind_inst_to_functors_others_6_p_0(hlds__instmap__HeadVar__1_1, hlds__instmap__ConsIds_14, hlds__instmap__HeadVar__3_3, &hlds__instmap__FinalInsts_17, hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21, hlds__instmap__STATE_VARIABLE_ModuleInfo_6);
        }
#line 778 "instmap.m"
        {
#line 778 "instmap.m"
          MR_Word base;
#line 778 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = base;
#line 778 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__FinalInst_16));
#line 778 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__FinalInsts_17));
#line 778 "instmap.m"
        }
#line 778 "instmap.m"
      }
#line 776 "instmap.m"
  }
#line 772 "instmap.m"
}

#line 626 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_same_4_p_0(
#line 626 "instmap.m"
  MR_Word hlds__instmap__Inst_1,
#line 626 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 626 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_3,
#line 626 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_4)
#line 626 "instmap.m"
{
#line 629 "instmap.m"
  while (MR_TRUE)
#line 629 "instmap.m"
    {
#line 629 "instmap.m"
      /* tailcall optimized into a loop */
#line 629 "instmap.m"
      {
#line 629 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 629 "instmap.m"
        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 629 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMapping_4 = hlds__instmap__STATE_VARIABLE_InstMapping_0_3;
#line 629 "instmap.m"
        else
#line 630 "instmap.m"
          {
#line 630 "instmap.m"
            MR_Word hlds__instmap__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 630 "instmap.m"
            MR_Word hlds__instmap__Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 630 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_15_15;

#line 631 "instmap.m"
            {
#line 631 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_10)), ((MR_Box) (hlds__instmap__Inst_1)), hlds__instmap__STATE_VARIABLE_InstMapping_0_3, &hlds__instmap__STATE_VARIABLE_InstMapping_15_15);
            }
#line 632 "instmap.m"
            /* direct tailcall eliminated */
#line 632 "instmap.m"
            {
#line 632 "instmap.m"
              MR_Word hlds__instmap__HeadVar__2__tmp_copy_2 = hlds__instmap__Vars_11;
#line 632 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_3 = hlds__instmap__STATE_VARIABLE_InstMapping_15_15;

#line 632 "instmap.m"
              hlds__instmap__STATE_VARIABLE_InstMapping_0_3 = hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_3;
#line 632 "instmap.m"
              hlds__instmap__HeadVar__2_2 = hlds__instmap__HeadVar__2__tmp_copy_2;
#line 632 "instmap.m"
            }
#line 632 "instmap.m"
            continue;
#line 630 "instmap.m"
          }
#line 629 "instmap.m"
      }
#line 629 "instmap.m"
      break;
#line 629 "instmap.m"
    }
#line 626 "instmap.m"
}

#line 606 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_2(
#line 606 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 606 "instmap.m"
{
#line 606 "instmap.m"
  {
#line 606 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 606 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 606 "instmap.m"
    {
#line 606 "instmap.m"
      hlds__instmap__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))));
    }
#line 606 "instmap.m"
    return hlds__instmap__succeeded;
#line 606 "instmap.m"
  }
#line 606 "instmap.m"
}

#line 606 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_1(
#line 606 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 606 "instmap.m"
{
#line 606 "instmap.m"
  {
#line 606 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 606 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 606 "instmap.m"
    {
#line 606 "instmap.m"
      hlds__instmap__succeeded = hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__606__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))));
    }
#line 606 "instmap.m"
    return hlds__instmap__succeeded;
#line 606 "instmap.m"
  }
#line 606 "instmap.m"
}

#line 599 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0(
#line 599 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 599 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 599 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 599 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 599 "instmap.m"
{
#line 603 "instmap.m"
  while (MR_TRUE)
#line 603 "instmap.m"
    {
#line 603 "instmap.m"
      /* tailcall optimized into a loop */
#line 603 "instmap.m"
      {
#line 603 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 603 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "instmap.m"
          if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "instmap.m"
            *hlds__instmap__HeadVar__4_4 = hlds__instmap__HeadVar__3_3;
#line 603 "instmap.m"
          else
#line 611 "instmap.m"
            {
#line 612 "instmap.m"
              {
#line 612 "instmap.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmapping_set_vars_corresponding\'/4", (MR_String) "length mismatch (2)");
#line 612 "instmap.m"
                return;
              }
#line 611 "instmap.m"
            }
#line 603 "instmap.m"
        else
#line 603 "instmap.m"
          {
#line 603 "instmap.m"
            MR_Word hlds__instmap__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 603 "instmap.m"
            MR_Word hlds__instmap__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 603 "instmap.m"
            if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 609 "instmap.m"
              {
#line 610 "instmap.m"
                {
#line 610 "instmap.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmapping_set_vars_corresponding\'/4", (MR_String) "length mismatch (1)");
#line 610 "instmap.m"
                  return;
                }
#line 609 "instmap.m"
              }
#line 603 "instmap.m"
            else
#line 605 "instmap.m"
              {
#line 605 "instmap.m"
                MR_Word hlds__instmap__Inst_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 605 "instmap.m"
                MR_Word hlds__instmap__Insts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 605 "instmap.m"
                MR_Word hlds__instmap__V_15_15;
#line 605 "instmap.m"
                MR_Word hlds__instmap__V_19_19;
#line 605 "instmap.m"
                MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_21_21;

#line 606 "instmap.m"
                {
#line 606 "instmap.m"
                  hlds__instmap__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 606 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_19_19, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
#line 606 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_19_19, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_corresponding_4_p_0_1));
#line 606 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 606 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_19_19, 3) = ((MR_Box) (hlds__instmap__Inst_10));
#line 606 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_19_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 606 "instmap.m"
                }
#line 606 "instmap.m"
                {
#line 606 "instmap.m"
                  hlds__instmap__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 606 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
#line 606 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_corresponding_4_p_0_2));
#line 606 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 606 "instmap.m"
                  MR_hl_field(MR_mktag(0), hlds__instmap__V_15_15, 3) = ((MR_Box) (hlds__instmap__V_19_19));
#line 606 "instmap.m"
                }
#line 606 "instmap.m"
                {
#line 606 "instmap.m"
                  mercury__require__expect_4_p_0(hlds__instmap__V_15_15, (MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmapping_set_vars_corresponding\'/4", (MR_String) "not_reached");
                }
#line 607 "instmap.m"
                {
#line 607 "instmap.m"
                  mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__V_43_43)), ((MR_Box) (hlds__instmap__Inst_10)), hlds__instmap__HeadVar__3_3, &hlds__instmap__STATE_VARIABLE_InstMapping_21_21);
                }
#line 608 "instmap.m"
                /* direct tailcall eliminated */
#line 608 "instmap.m"
                {
#line 608 "instmap.m"
                  MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__V_42_42;
#line 608 "instmap.m"
                  MR_Word hlds__instmap__HeadVar__2__tmp_copy_2 = hlds__instmap__Insts_11;
#line 608 "instmap.m"
                  MR_Word hlds__instmap__HeadVar__3__tmp_copy_3 = hlds__instmap__STATE_VARIABLE_InstMapping_21_21;

#line 608 "instmap.m"
                  hlds__instmap__HeadVar__3_3 = hlds__instmap__HeadVar__3__tmp_copy_3;
#line 608 "instmap.m"
                  hlds__instmap__HeadVar__2_2 = hlds__instmap__HeadVar__2__tmp_copy_2;
#line 608 "instmap.m"
                  hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 608 "instmap.m"
                }
#line 608 "instmap.m"
                continue;
#line 605 "instmap.m"
              }
#line 603 "instmap.m"
          }
#line 603 "instmap.m"
      }
#line 603 "instmap.m"
      break;
#line 603 "instmap.m"
    }
#line 599 "instmap.m"
}

#line 584 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_2(
#line 584 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 584 "instmap.m"
{
#line 584 "instmap.m"
  {
#line 584 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 584 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 584 "instmap.m"
    {
#line 584 "instmap.m"
      hlds__instmap__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))));
    }
#line 584 "instmap.m"
    return hlds__instmap__succeeded;
#line 584 "instmap.m"
  }
#line 584 "instmap.m"
}

#line 584 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_1(
#line 584 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 584 "instmap.m"
{
#line 584 "instmap.m"
  {
#line 584 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 584 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 584 "instmap.m"
    {
#line 584 "instmap.m"
      hlds__instmap__succeeded = hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__584__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))));
    }
#line 584 "instmap.m"
    return hlds__instmap__succeeded;
#line 584 "instmap.m"
  }
#line 584 "instmap.m"
}

#line 579 "instmap.m"
static void MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0(
#line 579 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 579 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_2,
#line 579 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_3)
#line 579 "instmap.m"
{
#line 582 "instmap.m"
  while (MR_TRUE)
#line 582 "instmap.m"
    {
#line 582 "instmap.m"
      /* tailcall optimized into a loop */
#line 582 "instmap.m"
      {
#line 582 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 582 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 582 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMapping_3 = hlds__instmap__STATE_VARIABLE_InstMapping_0_2;
#line 582 "instmap.m"
        else
#line 583 "instmap.m"
          {
#line 583 "instmap.m"
            MR_Word hlds__instmap__Var_7;
#line 583 "instmap.m"
            MR_Word hlds__instmap__Inst_8;
#line 583 "instmap.m"
            MR_Word hlds__instmap__VarsInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 583 "instmap.m"
            MR_Word hlds__instmap__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 583 "instmap.m"
            MR_Word hlds__instmap__V_14_14;
#line 583 "instmap.m"
            MR_Word hlds__instmap__V_18_18;
#line 583 "instmap.m"
            MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_20_20;

#line 583 "instmap.m"
            hlds__instmap__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_13_13, (MR_Integer) 0)));
#line 583 "instmap.m"
            hlds__instmap__Inst_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_13_13, (MR_Integer) 1)));
#line 584 "instmap.m"
            {
#line 584 "instmap.m"
              hlds__instmap__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 584 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_18_18, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
#line 584 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_18_18, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_3_p_0_1));
#line 584 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 584 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_18_18, 3) = ((MR_Box) (hlds__instmap__Inst_8));
#line 584 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_18_18, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 584 "instmap.m"
            }
#line 584 "instmap.m"
            {
#line 584 "instmap.m"
              hlds__instmap__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 584 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_14_14, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
#line 584 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_14_14, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_3_p_0_2));
#line 584 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 584 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__V_14_14, 3) = ((MR_Box) (hlds__instmap__V_18_18));
#line 584 "instmap.m"
            }
#line 584 "instmap.m"
            {
#line 584 "instmap.m"
              mercury__require__expect_4_p_0(hlds__instmap__V_14_14, (MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmapping_set_vars\'/3", (MR_String) "not_reached");
            }
#line 585 "instmap.m"
            {
#line 585 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_7)), ((MR_Box) (hlds__instmap__Inst_8)), hlds__instmap__STATE_VARIABLE_InstMapping_0_2, &hlds__instmap__STATE_VARIABLE_InstMapping_20_20);
            }
#line 586 "instmap.m"
            /* direct tailcall eliminated */
#line 586 "instmap.m"
            {
#line 586 "instmap.m"
              MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__VarsInsts_9;
#line 586 "instmap.m"
              MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_2 = hlds__instmap__STATE_VARIABLE_InstMapping_20_20;

#line 586 "instmap.m"
              hlds__instmap__STATE_VARIABLE_InstMapping_0_2 = hlds__instmap__STATE_VARIABLE_InstMapping_0__tmp_copy_2;
#line 586 "instmap.m"
              hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 586 "instmap.m"
            }
#line 586 "instmap.m"
            continue;
#line 583 "instmap.m"
          }
#line 582 "instmap.m"
      }
#line 582 "instmap.m"
      break;
#line 582 "instmap.m"
    }
#line 579 "instmap.m"
}

#line 510 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_changed_vars_2_6_p_0(
#line 510 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 510 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 510 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 510 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 510 "instmap.m"
  MR_Word hlds__instmap__HeadVar__5_5,
#line 510 "instmap.m"
  MR_Word * hlds__instmap__ChangedVars_6)
#line 510 "instmap.m"
{
#line 514 "instmap.m"
  {
#line 514 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 514 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 514 "instmap.m"
      {
#line 515 "instmap.m"
        {
#line 515 "instmap.m"
          parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__ChangedVars_6);
        }
#line 514 "instmap.m"
      }
#line 514 "instmap.m"
    else
#line 517 "instmap.m"
      {
#line 517 "instmap.m"
        MR_Word hlds__instmap__VarB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 517 "instmap.m"
        MR_Word hlds__instmap__VarBs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 517 "instmap.m"
        MR_Word hlds__instmap__ChangedVars0_19;
#line 517 "instmap.m"
        MR_Word hlds__instmap__InitialInst_20;
#line 517 "instmap.m"
        MR_Word hlds__instmap__FinalInst_21;
#line 517 "instmap.m"
        MR_Word hlds__instmap__Type_22;

#line 518 "instmap.m"
        {
#line 518 "instmap.m"
          hlds__instmap__instmap_changed_vars_2_6_p_0(hlds__instmap__VarBs_13, hlds__instmap__HeadVar__2_2, hlds__instmap__HeadVar__3_3, hlds__instmap__HeadVar__4_4, hlds__instmap__HeadVar__5_5, &hlds__instmap__ChangedVars0_19);
        }
#line 521 "instmap.m"
        {
#line 521 "instmap.m"
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__HeadVar__2_2, hlds__instmap__VarB_12, &hlds__instmap__InitialInst_20);
        }
#line 522 "instmap.m"
        {
#line 522 "instmap.m"
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__HeadVar__3_3, hlds__instmap__VarB_12, &hlds__instmap__FinalInst_21);
        }
#line 523 "instmap.m"
        {
#line 523 "instmap.m"
          hlds__vartypes__lookup_var_type_3_p_0(hlds__instmap__HeadVar__4_4, hlds__instmap__VarB_12, &hlds__instmap__Type_22);
        }
#line 526 "instmap.m"
        {
#line 526 "instmap.m"
          hlds__instmap__succeeded = check_hlds__inst_match__inst_matches_final_typed_4_p_0(hlds__instmap__InitialInst_20, hlds__instmap__FinalInst_21, hlds__instmap__Type_22, hlds__instmap__HeadVar__5_5);
        }
#line 525 "instmap.m"
        if (hlds__instmap__succeeded)
#line 528 "instmap.m"
          *hlds__instmap__ChangedVars_6 = hlds__instmap__ChangedVars0_19;
#line 525 "instmap.m"
        else
#line 530 "instmap.m"
          {
#line 530 "instmap.m"
            {
#line 530 "instmap.m"
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__VarB_12, hlds__instmap__ChangedVars0_19, hlds__instmap__ChangedVars_6);
            }
#line 530 "instmap.m"
          }
#line 517 "instmap.m"
      }
#line 514 "instmap.m"
  }
#line 510 "instmap.m"
}

#line 487 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_bound_vars_2_5_p_0(
#line 487 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 487 "instmap.m"
  MR_Word hlds__instmap__Var_7,
#line 487 "instmap.m"
  MR_Word hlds__instmap__Inst_8,
#line 487 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_BoundVars_0_10,
#line 487 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_BoundVars_11)
#line 487 "instmap.m"
{
#line 491 "instmap.m"
  {
#line 491 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 491 "instmap.m"
    {
#line 491 "instmap.m"
      hlds__instmap__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(hlds__instmap__ModuleInfo_6, hlds__instmap__Inst_8);
    }
#line 491 "instmap.m"
    if (hlds__instmap__succeeded)
#line 492 "instmap.m"
      {
#line 492 "instmap.m"
        {
#line 492 "instmap.m"
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Var_7, hlds__instmap__STATE_VARIABLE_BoundVars_0_10, hlds__instmap__STATE_VARIABLE_BoundVars_11);
        }
#line 492 "instmap.m"
      }
#line 491 "instmap.m"
    else
#line 491 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_BoundVars_11 = hlds__instmap__STATE_VARIABLE_BoundVars_0_10;
#line 491 "instmap.m"
  }
#line 487 "instmap.m"
}

#line 468 "instmap.m"
static MR_Word MR_CALL 
hlds__instmap__pair_with_ground_1_f_0(
#line 468 "instmap.m"
  MR_Word hlds__instmap__Var_3)
#line 468 "instmap.m"
{
#line 470 "instmap.m"
  {
#line 470 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 470 "instmap.m"
    MR_Word hlds__instmap__HeadVar__2_2;

#line 470 "instmap.m"
    {
#line 470 "instmap.m"
      hlds__instmap__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 470 "instmap.m"
      MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, 0) = ((MR_Box) (hlds__instmap__Var_3));
#line 470 "instmap.m"
      MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__instmap_scalar_common_2[2])));
#line 470 "instmap.m"
    }
#line 470 "instmap.m"
    return hlds__instmap__HeadVar__2_2;
#line 470 "instmap.m"
  }
#line 468 "instmap.m"
}

#line 435 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_delta_from_mode_list_2_5_p_0(
#line 435 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 435 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 435 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_3,
#line 435 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4,
#line 435 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapDelta_5)
#line 435 "instmap.m"
{
#line 438 "instmap.m"
  while (MR_TRUE)
#line 438 "instmap.m"
    {
#line 438 "instmap.m"
      /* tailcall optimized into a loop */
#line 438 "instmap.m"
      {
#line 438 "instmap.m"
        MR_bool hlds__instmap__succeeded;

#line 438 "instmap.m"
        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 438 "instmap.m"
          if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 438 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_InstMapDelta_5 = hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4;
#line 438 "instmap.m"
          else
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
#line 438 "instmap.m"
        else
#line 438 "instmap.m"
          {
#line 438 "instmap.m"
            MR_Word hlds__instmap__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 438 "instmap.m"
            MR_Word hlds__instmap__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 438 "instmap.m"
            if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 441 "instmap.m"
              {
#line 442 "instmap.m"
                {
#line 442 "instmap.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_delta_from_mode_list_2\'/5", (MR_String) "length mismatch");
#line 442 "instmap.m"
                  return;
                }
#line 441 "instmap.m"
              }
#line 438 "instmap.m"
            else
#line 444 "instmap.m"
              {
#line 444 "instmap.m"
                MR_Word hlds__instmap__Mode_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 444 "instmap.m"
                MR_Word hlds__instmap__Modes_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 444 "instmap.m"
                MR_Word hlds__instmap__Inst1_34;
#line 444 "instmap.m"
                MR_Word hlds__instmap__Inst2_35;

#line 445 "instmap.m"
                {
#line 445 "instmap.m"
                  check_hlds__mode_util__mode_get_insts_4_p_0(hlds__instmap__ModuleInfo_3, hlds__instmap__Mode_30, &hlds__instmap__Inst1_34, &hlds__instmap__Inst2_35);
                }
#line 446 "instmap.m"
                {
#line 446 "instmap.m"
                  hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst1_34, hlds__instmap__Inst2_35);
                }
#line 446 "instmap.m"
                if (hlds__instmap__succeeded)
#line 447 "instmap.m"
                  {
#line 447 "instmap.m"
                    /* direct tailcall eliminated */
#line 447 "instmap.m"
                    {
#line 447 "instmap.m"
                      MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__V_41_41;
#line 447 "instmap.m"
                      MR_Word hlds__instmap__HeadVar__2__tmp_copy_2 = hlds__instmap__Modes_31;

#line 447 "instmap.m"
                      hlds__instmap__HeadVar__2_2 = hlds__instmap__HeadVar__2__tmp_copy_2;
#line 447 "instmap.m"
                      hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 447 "instmap.m"
                    }
#line 447 "instmap.m"
                    continue;
#line 447 "instmap.m"
                  }
#line 446 "instmap.m"
                else
#line 449 "instmap.m"
                  {
#line 449 "instmap.m"
                    MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_39_39;

#line 449 "instmap.m"
                    {
#line 449 "instmap.m"
                      hlds__instmap__instmap_delta_set_var_4_p_0(hlds__instmap__V_42_42, hlds__instmap__Inst2_35, hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4, &hlds__instmap__STATE_VARIABLE_InstMapDelta_39_39);
                    }
#line 450 "instmap.m"
                    /* direct tailcall eliminated */
#line 450 "instmap.m"
                    {
#line 450 "instmap.m"
                      MR_Word hlds__instmap__HeadVar__1__tmp_copy_1 = hlds__instmap__V_41_41;
#line 450 "instmap.m"
                      MR_Word hlds__instmap__HeadVar__2__tmp_copy_2 = hlds__instmap__Modes_31;
#line 450 "instmap.m"
                      MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_0__tmp_copy_4 = hlds__instmap__STATE_VARIABLE_InstMapDelta_39_39;

#line 450 "instmap.m"
                      hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4 = hlds__instmap__STATE_VARIABLE_InstMapDelta_0__tmp_copy_4;
#line 450 "instmap.m"
                      hlds__instmap__HeadVar__2_2 = hlds__instmap__HeadVar__2__tmp_copy_2;
#line 450 "instmap.m"
                      hlds__instmap__HeadVar__1_1 = hlds__instmap__HeadVar__1__tmp_copy_1;
#line 450 "instmap.m"
                    }
#line 450 "instmap.m"
                    continue;
#line 449 "instmap.m"
                  }
#line 444 "instmap.m"
              }
#line 438 "instmap.m"
          }
#line 438 "instmap.m"
      }
#line 438 "instmap.m"
      break;
#line 438 "instmap.m"
    }
#line 435 "instmap.m"
}

#line 358 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__var_is_bound_in_instmap_delta_4_p_0(
#line 358 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_5,
#line 358 "instmap.m"
  MR_Word hlds__instmap__InstMap_6,
#line 358 "instmap.m"
  MR_Word hlds__instmap__InstMapDelta_7,
#line 358 "instmap.m"
  MR_Word hlds__instmap__Var_8)
#line 358 "instmap.m"
{
#line 1401 "instmap.m"
  {
#line 1401 "instmap.m"
    MR_bool hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__InstMap_6)) == (MR_mktag((MR_Integer) 1)));
#line 1401 "instmap.m"
    MR_Word hlds__instmap__TypeInfo_8_17;
#line 1401 "instmap.m"
    MR_Word hlds__instmap__TypeCtorInfo_9_18;
#line 1401 "instmap.m"
    MR_Word hlds__instmap__OldVarInst_9;
#line 1401 "instmap.m"
    MR_Word hlds__instmap__VarInst_10;
#line 1401 "instmap.m"
    MR_Word hlds__instmap__InstMap_14;
#line 1401 "instmap.m"
    MR_Word hlds__instmap__InstMap_20;
#line 411 "instmap.m"
    MR_Word hlds__instmap__V_12_12;
#line 543 "instmap.m"
    MR_Word hlds__instmap__VarInst_26;
#line 543 "instmap.m"
    MR_Word hlds__instmap__TypeInfo_8_27;
#line 543 "instmap.m"
    MR_Word hlds__instmap__TypeCtorInfo_9_28;
#line 543 "instmap.m"
    MR_Box hlds__instmap__conv0_VarInst_26;
#line 551 "instmap.m"
    MR_Box hlds__instmap__conv1_VarInst_10;

#line 407 "instmap.m"
    if (hlds__instmap__succeeded)
#line 407 "instmap.m"
      {
#line 407 "instmap.m"
        hlds__instmap__InstMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap_6, (MR_Integer) 0)));
#line 411 "instmap.m"
        hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__InstMapDelta_7)) == (MR_mktag((MR_Integer) 1)));
#line 411 "instmap.m"
        if (hlds__instmap__succeeded)
#line 411 "instmap.m"
          {
#line 411 "instmap.m"
            hlds__instmap__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_7, (MR_Integer) 0)));
#line 5016 "hlds.instmap.c"
            hlds__instmap__TypeInfo_8_27 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 5018 "hlds.instmap.c"
            hlds__instmap__TypeCtorInfo_9_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 543 "instmap.m"
            {
#line 543 "instmap.m"
              hlds__instmap__succeeded = mercury__map__search_3_p_0(hlds__instmap__TypeInfo_8_27, hlds__instmap__TypeCtorInfo_9_28, hlds__instmap__InstMap_20, ((MR_Box) (hlds__instmap__Var_8)), &hlds__instmap__conv0_VarInst_26);
            }
#line 543 "instmap.m"
            if (hlds__instmap__succeeded)
#line 543 "instmap.m"
              {
#line 543 "instmap.m"
                hlds__instmap__VarInst_26 = ((MR_Word) hlds__instmap__conv0_VarInst_26);
#line 543 "instmap.m"
                hlds__instmap__succeeded = MR_TRUE;
#line 543 "instmap.m"
              }
#line 543 "instmap.m"
            if (hlds__instmap__succeeded)
#line 544 "instmap.m"
              hlds__instmap__OldVarInst_9 = hlds__instmap__VarInst_26;
#line 543 "instmap.m"
            else
#line 546 "instmap.m"
              hlds__instmap__OldVarInst_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1405 "instmap.m"
            {
#line 1405 "instmap.m"
              hlds__instmap__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(hlds__instmap__ModuleInfo_5, hlds__instmap__OldVarInst_9);
            }
#line 1401 "instmap.m"
            if (hlds__instmap__succeeded)
#line 1401 "instmap.m"
              {
#line 550 "instmap.m"
                hlds__instmap__InstMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_7, (MR_Integer) 0)));
#line 5054 "hlds.instmap.c"
                hlds__instmap__TypeInfo_8_17 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 5056 "hlds.instmap.c"
                hlds__instmap__TypeCtorInfo_9_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 551 "instmap.m"
                {
#line 551 "instmap.m"
                  hlds__instmap__succeeded = mercury__map__search_3_p_0(hlds__instmap__TypeInfo_8_17, hlds__instmap__TypeCtorInfo_9_18, hlds__instmap__InstMap_14, ((MR_Box) (hlds__instmap__Var_8)), &hlds__instmap__conv1_VarInst_10);
                }
#line 551 "instmap.m"
                if (hlds__instmap__succeeded)
#line 551 "instmap.m"
                  {
#line 551 "instmap.m"
                    hlds__instmap__VarInst_10 = ((MR_Word) hlds__instmap__conv1_VarInst_10);
#line 551 "instmap.m"
                    hlds__instmap__succeeded = MR_TRUE;
#line 551 "instmap.m"
                  }
#line 1401 "instmap.m"
                if (hlds__instmap__succeeded)
#line 1407 "instmap.m"
                  {
#line 1407 "instmap.m"
                    hlds__instmap__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(hlds__instmap__ModuleInfo_5, hlds__instmap__VarInst_10);
                  }
#line 1401 "instmap.m"
              }
#line 411 "instmap.m"
          }
#line 407 "instmap.m"
      }
#line 1401 "instmap.m"
    return hlds__instmap__succeeded;
#line 1401 "instmap.m"
  }
#line 358 "instmap.m"
}

#line 348 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__var_is_any_in_instmap_3_p_0(
#line 348 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_4,
#line 348 "instmap.m"
  MR_Word hlds__instmap__InstMap_5,
#line 348 "instmap.m"
  MR_Word hlds__instmap__Var_6)
#line 348 "instmap.m"
{
#line 1397 "instmap.m"
  {
#line 1397 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 1397 "instmap.m"
    MR_Word hlds__instmap__Inst_7;

#line 1398 "instmap.m"
    {
#line 1398 "instmap.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_5, hlds__instmap__Var_6, &hlds__instmap__Inst_7);
    }
#line 1399 "instmap.m"
    {
#line 1399 "instmap.m"
      hlds__instmap__succeeded = check_hlds__inst_test__inst_is_any_2_p_0(hlds__instmap__ModuleInfo_4, hlds__instmap__Inst_7);
    }
#line 1397 "instmap.m"
    return hlds__instmap__succeeded;
#line 1397 "instmap.m"
  }
#line 348 "instmap.m"
}

#line 345 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__var_is_ground_in_instmap_3_p_0(
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
      hlds__instmap__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(hlds__instmap__ModuleInfo_4, hlds__instmap__Inst_7);
    }
#line 1393 "instmap.m"
    return hlds__instmap__succeeded;
#line 1393 "instmap.m"
  }
#line 345 "instmap.m"
}

#line 340 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_map_foldl_5_p_0(
#line 340 "instmap.m"
  MR_Word hlds__instmap__TypeInfo_for_T_17,
#line 340 "instmap.m"
  MR_Word hlds__instmap__P_1,
#line 340 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 340 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3,
#line 340 "instmap.m"
  MR_Box hlds__instmap__STATE_VARIABLE_T_0_4,
#line 340 "instmap.m"
  MR_Box * hlds__instmap__STATE_VARIABLE_T_5)
#line 340 "instmap.m"
{
#line 423 "instmap.m"
  {
#line 423 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 423 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 423 "instmap.m"
      {
#line 423 "instmap.m"
        *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 423 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_T_5 = hlds__instmap__STATE_VARIABLE_T_0_4;
#line 423 "instmap.m"
      }
#line 423 "instmap.m"
    else
#line 425 "instmap.m"
      {
#line 425 "instmap.m"
        MR_Word hlds__instmap__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 425 "instmap.m"
        MR_Word hlds__instmap__Instmapping0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 425 "instmap.m"
        MR_Word hlds__instmap__Instmapping_12;

#line 426 "instmap.m"
        {
#line 426 "instmap.m"
          mercury__map__map_foldl_5_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], hlds__instmap__TypeCtorInfo_19_19, hlds__instmap__TypeCtorInfo_19_19, hlds__instmap__TypeInfo_for_T_17, hlds__instmap__P_1, hlds__instmap__Instmapping0_11, &hlds__instmap__Instmapping_12, hlds__instmap__STATE_VARIABLE_T_0_4, hlds__instmap__STATE_VARIABLE_T_5);
        }
#line 424 "instmap.m"
        {
#line 424 "instmap.m"
          MR_Word base;
#line 424 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 424 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = base;
#line 424 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Instmapping_12));
#line 424 "instmap.m"
        }
#line 425 "instmap.m"
      }
#line 423 "instmap.m"
  }
#line 340 "instmap.m"
}

#line 335 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_to_assoc_list_2_p_0(
#line 335 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 335 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__2_2)
#line 335 "instmap.m"
{
#line 1387 "instmap.m"
  {
#line 1387 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1387 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1387 "instmap.m"
      *hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1387 "instmap.m"
    else
#line 1388 "instmap.m"
      {
#line 1388 "instmap.m"
        MR_Word hlds__instmap__InstMapping_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 1389 "instmap.m"
        {
#line 1389 "instmap.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_3, hlds__instmap__HeadVar__2_2);
        }
#line 1388 "instmap.m"
      }
#line 1387 "instmap.m"
  }
#line 335 "instmap.m"
}

#line 332 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_to_assoc_list_2_p_0(
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
        }
#line 1384 "instmap.m"
      }
#line 1383 "instmap.m"
  }
#line 332 "instmap.m"
}

#line 327 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_apply_sub_4_p_0(
#line 327 "instmap.m"
  MR_Word hlds__instmap__Must_5,
#line 327 "instmap.m"
  MR_Word hlds__instmap__Renaming_6,
#line 327 "instmap.m"
  MR_Word hlds__instmap__InstMap0_7,
#line 327 "instmap.m"
  MR_Word * hlds__instmap__InstMap_8)
#line 327 "instmap.m"
{
#line 1364 "instmap.m"
  {
#line 1364 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1364 "instmap.m"
    {
#line 1364 "instmap.m"
      hlds__instmap__instmap_delta_apply_sub_4_p_0(hlds__instmap__Must_5, hlds__instmap__Renaming_6, hlds__instmap__InstMap0_7, hlds__instmap__InstMap_8);
    }
#line 1364 "instmap.m"
  }
#line 327 "instmap.m"
}

#line 324 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_apply_sub_4_p_0(
#line 324 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 324 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 324 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 324 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 324 "instmap.m"
{
#line 1356 "instmap.m"
  {
#line 1356 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1356 "instmap.m"
    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1356 "instmap.m"
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1356 "instmap.m"
    else
#line 1358 "instmap.m"
      {
#line 1358 "instmap.m"
        MR_Word hlds__instmap__TypeInfo_13_13 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 1358 "instmap.m"
        MR_Word hlds__instmap__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1358 "instmap.m"
        MR_Word hlds__instmap__OldInstMapping_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));
#line 1358 "instmap.m"
        MR_Word hlds__instmap__InstMapping_10;
#line 1358 "instmap.m"
        MR_Word hlds__instmap__InstMappingAL_11;
#line 1358 "instmap.m"
        MR_Word hlds__instmap__V_12_12;

#line 1359 "instmap.m"
        {
#line 1359 "instmap.m"
          mercury__map__to_assoc_list_2_p_0(hlds__instmap__TypeInfo_13_13, hlds__instmap__TypeCtorInfo_14_14, hlds__instmap__OldInstMapping_9, &hlds__instmap__InstMappingAL_11);
        }
#line 1361 "instmap.m"
        {
#line 1361 "instmap.m"
          hlds__instmap__V_12_12 = mercury__map__init_0_f_0(hlds__instmap__TypeInfo_13_13, hlds__instmap__TypeCtorInfo_14_14);
        }
#line 1360 "instmap.m"
        {
#line 1360 "instmap.m"
          hlds__instmap__instmap_delta_apply_sub_2_5_p_0(hlds__instmap__InstMappingAL_11, hlds__instmap__HeadVar__1_1, hlds__instmap__HeadVar__2_2, hlds__instmap__V_12_12, &hlds__instmap__InstMapping_10);
        }
#line 1358 "instmap.m"
        {
#line 1358 "instmap.m"
          MR_Word base;
#line 1358 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1358 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = base;
#line 1358 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_10));
#line 1358 "instmap.m"
        }
#line 1358 "instmap.m"
      }
#line 1356 "instmap.m"
  }
#line 324 "instmap.m"
}

#line 311 "instmap.m"
void MR_CALL 
hlds__instmap__unify_instmap_delta_7_p_0(
#line 311 "instmap.m"
  MR_Word hlds__instmap__InstMap_1,
#line 311 "instmap.m"
  MR_Word hlds__instmap__NonLocals_2,
#line 311 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 311 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 311 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__5_5,
#line 311 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6,
#line 311 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_7)
#line 311 "instmap.m"
{
#line 1295 "instmap.m"
  {
#line 1295 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1295 "instmap.m"
    {
#line 1295 "instmap.m"
      hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_p_0(hlds__instmap__NonLocals_2, hlds__instmap__HeadVar__3_3, hlds__instmap__HeadVar__4_4, hlds__instmap__HeadVar__5_5, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6, hlds__instmap__STATE_VARIABLE_ModuleInfo_7);
    }
#line 1295 "instmap.m"
  }
#line 311 "instmap.m"
}

#line 301 "instmap.m"
void MR_CALL 
hlds__instmap__merge_instmap_deltas_7_p_0(
#line 301 "instmap.m"
  MR_Word hlds__instmap__InstMap_8,
#line 301 "instmap.m"
  MR_Word hlds__instmap__NonLocals_9,
#line 301 "instmap.m"
  MR_Word hlds__instmap__VarTypes_10,
#line 301 "instmap.m"
  MR_Word hlds__instmap__Deltas_11,
#line 301 "instmap.m"
  MR_Word * hlds__instmap__MergedDelta_12,
#line 301 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_18,
#line 301 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_19)
#line 301 "instmap.m"
{
#line 1083 "instmap.m"
  while (MR_TRUE)
#line 1083 "instmap.m"
    {
#line 1083 "instmap.m"
      /* tailcall optimized into a loop */
#line 1083 "instmap.m"
      {
#line 1083 "instmap.m"
        MR_bool hlds__instmap__succeeded;
#line 1083 "instmap.m"
        MR_Word hlds__instmap__MergedDeltas_14;
#line 1083 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21;

#line 1086 "instmap.m"
        {
#line 1086 "instmap.m"
          hlds__instmap__merge_instmap_deltas_2_8_p_0(hlds__instmap__InstMap_8, hlds__instmap__NonLocals_9, hlds__instmap__VarTypes_10, hlds__instmap__Deltas_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__instmap__MergedDeltas_14, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_18, &hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21);
        }
#line 1091 "instmap.m"
        if ((hlds__instmap__MergedDeltas_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1089 "instmap.m"
          {
#line 1090 "instmap.m"
            {
#line 1090 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.merge_instmap_deltas\'/7", (MR_String) "empty instmap_delta list.");
#line 1090 "instmap.m"
              return;
            }
#line 1089 "instmap.m"
          }
#line 1091 "instmap.m"
        else
#line 1091 "instmap.m"
          {
#line 1091 "instmap.m"
            MR_Word hlds__instmap__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MergedDeltas_14, (MR_Integer) 1)));
#line 1091 "instmap.m"
            MR_Word hlds__instmap__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MergedDeltas_14, (MR_Integer) 0)));

#line 1091 "instmap.m"
            if ((hlds__instmap__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1092 "instmap.m"
              {
#line 1092 "instmap.m"
                *hlds__instmap__MergedDelta_12 = hlds__instmap__V_29_29;
#line 1092 "instmap.m"
                *hlds__instmap__STATE_VARIABLE_ModuleInfo_19 = hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21;
#line 1092 "instmap.m"
              }
#line 1091 "instmap.m"
            else
#line 1095 "instmap.m"
              {
#line 1095 "instmap.m"
                /* direct tailcall eliminated */
#line 1095 "instmap.m"
                {
#line 1095 "instmap.m"
                  MR_Word hlds__instmap__Deltas__tmp_copy_11 = hlds__instmap__MergedDeltas_14;
#line 1095 "instmap.m"
                  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_18 = hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21;

#line 1095 "instmap.m"
                  hlds__instmap__STATE_VARIABLE_ModuleInfo_0_18 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0__tmp_copy_18;
#line 1095 "instmap.m"
                  hlds__instmap__Deltas_11 = hlds__instmap__Deltas__tmp_copy_11;
#line 1095 "instmap.m"
                }
#line 1095 "instmap.m"
                continue;
#line 1095 "instmap.m"
              }
#line 1091 "instmap.m"
          }
#line 1083 "instmap.m"
      }
#line 1083 "instmap.m"
      break;
#line 1083 "instmap.m"
    }
#line 301 "instmap.m"
}

#line 290 "instmap.m"
void MR_CALL 
hlds__instmap__merge_instmap_delta_8_p_0(
#line 290 "instmap.m"
  MR_Word hlds__instmap__InstMap_1,
#line 290 "instmap.m"
  MR_Word hlds__instmap__NonLocals_2,
#line 290 "instmap.m"
  MR_Word hlds__instmap__VarTypes_3,
#line 290 "instmap.m"
  MR_Word hlds__instmap__HeadVar__4_4,
#line 290 "instmap.m"
  MR_Word hlds__instmap__HeadVar__5_5,
#line 290 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__6_6,
#line 290 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7,
#line 290 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_8)
#line 290 "instmap.m"
{
#line 1217 "instmap.m"
  {
#line 1217 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1217 "instmap.m"
    if ((hlds__instmap__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1217 "instmap.m"
      {
#line 1217 "instmap.m"
        *hlds__instmap__HeadVar__6_6 = hlds__instmap__HeadVar__5_5;
#line 1218 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
#line 1217 "instmap.m"
      }
#line 1217 "instmap.m"
    else
#line 1217 "instmap.m"
      {
#line 1217 "instmap.m"
        MR_Word hlds__instmap__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__4_4, (MR_Integer) 0)));

#line 1217 "instmap.m"
        if ((hlds__instmap__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1219 "instmap.m"
          {
#line 1220 "instmap.m"
            *hlds__instmap__HeadVar__6_6 = hlds__instmap__HeadVar__4_4;
#line 1220 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
#line 1219 "instmap.m"
          }
#line 1217 "instmap.m"
        else
#line 1222 "instmap.m"
          {
#line 1222 "instmap.m"
            MR_Word hlds__instmap__TypeInfo_26_51 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 1222 "instmap.m"
            MR_Word hlds__instmap__TypeCtorInfo_27_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1222 "instmap.m"
            MR_Word hlds__instmap__TypeCtorInfo_28_53;
#line 1222 "instmap.m"
            MR_Word hlds__instmap__InstMappingB_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__5_5, (MR_Integer) 0)));
#line 1222 "instmap.m"
            MR_Word hlds__instmap__InstMapping_28;
#line 1222 "instmap.m"
            MR_Word hlds__instmap__VarsInA_43;
#line 1222 "instmap.m"
            MR_Word hlds__instmap__VarsInB_44;
#line 1222 "instmap.m"
            MR_Word hlds__instmap__SetofVarsInA_45;
#line 1222 "instmap.m"
            MR_Word hlds__instmap__SetofVars0_46;
#line 1222 "instmap.m"
            MR_Word hlds__instmap__SetofVars_47;
#line 1222 "instmap.m"
            MR_Word hlds__instmap__ListofVars_48;
#line 1222 "instmap.m"
            MR_Word hlds__instmap__V_49_49;

#line 1232 "instmap.m"
            {
#line 1232 "instmap.m"
              mercury__map__keys_2_p_0(hlds__instmap__TypeInfo_26_51, hlds__instmap__TypeCtorInfo_27_52, hlds__instmap__V_33_33, &hlds__instmap__VarsInA_43);
            }
#line 1233 "instmap.m"
            {
#line 1233 "instmap.m"
              mercury__map__keys_2_p_0(hlds__instmap__TypeInfo_26_51, hlds__instmap__TypeCtorInfo_27_52, hlds__instmap__InstMappingB_27, &hlds__instmap__VarsInB_44);
            }
#line 5636 "hlds.instmap.c"
            hlds__instmap__TypeCtorInfo_28_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1234 "instmap.m"
            {
#line 1234 "instmap.m"
              parse_tree__set_of_var__sorted_list_to_set_2_p_0(hlds__instmap__TypeCtorInfo_28_53, hlds__instmap__VarsInA_43, &hlds__instmap__SetofVarsInA_45);
            }
#line 1235 "instmap.m"
            {
#line 1235 "instmap.m"
              parse_tree__set_of_var__insert_list_3_p_0(hlds__instmap__TypeCtorInfo_28_53, hlds__instmap__VarsInB_44, hlds__instmap__SetofVarsInA_45, &hlds__instmap__SetofVars0_46);
            }
#line 1236 "instmap.m"
            {
#line 1236 "instmap.m"
              parse_tree__set_of_var__intersect_3_p_0(hlds__instmap__TypeCtorInfo_28_53, hlds__instmap__SetofVars0_46, hlds__instmap__NonLocals_2, &hlds__instmap__SetofVars_47);
            }
#line 1237 "instmap.m"
            {
#line 1237 "instmap.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__instmap__TypeCtorInfo_28_53, hlds__instmap__SetofVars_47, &hlds__instmap__ListofVars_48);
            }
#line 1239 "instmap.m"
            {
#line 1239 "instmap.m"
              hlds__instmap__V_49_49 = mercury__map__init_0_f_0(hlds__instmap__TypeInfo_26_51, hlds__instmap__TypeCtorInfo_27_52);
            }
#line 1238 "instmap.m"
            {
#line 1238 "instmap.m"
              hlds__instmap__merge_instmapping_delta_2_9_p_0(hlds__instmap__ListofVars_48, hlds__instmap__InstMap_1, hlds__instmap__VarTypes_3, hlds__instmap__V_33_33, hlds__instmap__InstMappingB_27, hlds__instmap__V_49_49, &hlds__instmap__InstMapping_28, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7, hlds__instmap__STATE_VARIABLE_ModuleInfo_8);
            }
#line 1222 "instmap.m"
            {
#line 1222 "instmap.m"
              MR_Word base;
#line 1222 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "instmap.m"
              *hlds__instmap__HeadVar__6_6 = base;
#line 1222 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_28));
#line 1222 "instmap.m"
            }
#line 1222 "instmap.m"
          }
#line 1217 "instmap.m"
      }
#line 1217 "instmap.m"
  }
#line 290 "instmap.m"
}

#line 1180 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_no_output_vars_5_p_0_1(
#line 1180 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 1180 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1)
#line 1180 "instmap.m"
{
#line 1180 "instmap.m"
  {
#line 1180 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 1180 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 1180 "instmap.m"
    {
#line 1180 "instmap.m"
      hlds__instmap__succeeded = hlds__instmap__var_is_not_output_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 6))), ((MR_Word) hlds__instmap__wrapper_arg_1));
    }
#line 1180 "instmap.m"
    return hlds__instmap__succeeded;
#line 1180 "instmap.m"
  }
#line 1180 "instmap.m"
}

#line 281 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__instmap_delta_no_output_vars_5_p_0(
#line 281 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 281 "instmap.m"
  MR_Word hlds__instmap__VarTypes_7,
#line 281 "instmap.m"
  MR_Word hlds__instmap__InstMap0_8,
#line 281 "instmap.m"
  MR_Word hlds__instmap__InstMapDelta_9,
#line 281 "instmap.m"
  MR_Word hlds__instmap__Vars_10)
#line 281 "instmap.m"
{
#line 1177 "instmap.m"
  {
#line 1177 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1177 "instmap.m"
    if ((hlds__instmap__InstMapDelta_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1177 "instmap.m"
      hlds__instmap__succeeded = MR_TRUE;
#line 1177 "instmap.m"
    else
#line 1179 "instmap.m"
      {
#line 1179 "instmap.m"
        MR_Word hlds__instmap__InstMapDeltaMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_9, (MR_Integer) 0)));
#line 1179 "instmap.m"
        MR_Word hlds__instmap__Test_12;

#line 1180 "instmap.m"
        {
#line 1180 "instmap.m"
          hlds__instmap__Test_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1180 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 0) = ((MR_Box) (&hlds__instmap_scalar_common_4[1]));
#line 1180 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 1) = ((MR_Box) (hlds__instmap__instmap_delta_no_output_vars_5_p_0_1));
#line 1180 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1180 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 3) = ((MR_Box) (hlds__instmap__ModuleInfo_6));
#line 1180 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 4) = ((MR_Box) (hlds__instmap__VarTypes_7));
#line 1180 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 5) = ((MR_Box) (hlds__instmap__InstMap0_8));
#line 1180 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 6) = ((MR_Box) (hlds__instmap__InstMapDeltaMap_11));
#line 1180 "instmap.m"
        }
#line 1182 "instmap.m"
        {
#line 1182 "instmap.m"
          hlds__instmap__succeeded = parse_tree__set_of_var__all_true_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Test_12, hlds__instmap__Vars_10);
        }
#line 1179 "instmap.m"
      }
#line 1177 "instmap.m"
    return hlds__instmap__succeeded;
#line 1177 "instmap.m"
  }
#line 281 "instmap.m"
}

#line 273 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_delete_vars_3_p_0(
#line 273 "instmap.m"
  MR_Word hlds__instmap__Vars_1,
#line 273 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 273 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 273 "instmap.m"
{
#line 851 "instmap.m"
  {
#line 851 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 851 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 851 "instmap.m"
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 851 "instmap.m"
    else
#line 853 "instmap.m"
      {
#line 853 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 853 "instmap.m"
        MR_Word hlds__instmap__InstMapping_7;

#line 854 "instmap.m"
        {
#line 854 "instmap.m"
          mercury__map__delete_list_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Vars_1, hlds__instmap__InstMapping0_6, &hlds__instmap__InstMapping_7);
        }
#line 853 "instmap.m"
        {
#line 853 "instmap.m"
          MR_Word base;
#line 853 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 853 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = base;
#line 853 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_7));
#line 853 "instmap.m"
        }
#line 853 "instmap.m"
      }
#line 851 "instmap.m"
  }
#line 273 "instmap.m"
}

#line 268 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_restrict_3_p_0(
#line 268 "instmap.m"
  MR_Word hlds__instmap__Vars_1,
#line 268 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 268 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 268 "instmap.m"
{
#line 840 "instmap.m"
  {
#line 840 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 840 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 840 "instmap.m"
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 840 "instmap.m"
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
#line 840 "instmap.m"
  }
#line 268 "instmap.m"
}

#line 262 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_merge_5_p_0(
#line 262 "instmap.m"
  MR_Word hlds__instmap__NonLocals_6,
#line 262 "instmap.m"
  MR_Word hlds__instmap__ArmInstMaps_7,
#line 262 "instmap.m"
  MR_Word hlds__instmap__MergeContext_8,
#line 262 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModeInfo_0_27,
#line 262 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModeInfo_28)
#line 262 "instmap.m"
{
#line 886 "instmap.m"
  {
#line 886 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 886 "instmap.m"
    MR_Word hlds__instmap__InstMap0_10;
#line 886 "instmap.m"
    MR_Word hlds__instmap__ModuleInfo0_11;
#line 886 "instmap.m"
    MR_Word hlds__instmap__ReachableInstMappingList_12;
#line 886 "instmap.m"
    MR_Word hlds__instmap__InstMap_26;
#line 886 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_ModeInfo_31_31;
#line 890 "instmap.m"
    MR_Word hlds__instmap__InstMapping0_13;
#line 894 "instmap.m"
    MR_Word hlds__instmap__V_14_14;
#line 894 "instmap.m"
    MR_Word hlds__instmap__V_15_15;

#line 887 "instmap.m"
    {
#line 887 "instmap.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(hlds__instmap__STATE_VARIABLE_ModeInfo_0_27, &hlds__instmap__InstMap0_10);
    }
#line 888 "instmap.m"
    {
#line 888 "instmap.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(hlds__instmap__STATE_VARIABLE_ModeInfo_0_27, &hlds__instmap__ModuleInfo0_11);
    }
#line 889 "instmap.m"
    {
#line 889 "instmap.m"
      hlds__instmap__get_reachable_instmaps_2_p_0(hlds__instmap__ArmInstMaps_7, &hlds__instmap__ReachableInstMappingList_12);
    }
#line 894 "instmap.m"
    hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__ReachableInstMappingList_12)) == (MR_mktag((MR_Integer) 1)));
#line 894 "instmap.m"
    if (hlds__instmap__succeeded)
#line 894 "instmap.m"
      {
#line 894 "instmap.m"
        hlds__instmap__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__ReachableInstMappingList_12, (MR_Integer) 0)));
#line 894 "instmap.m"
        hlds__instmap__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__ReachableInstMappingList_12, (MR_Integer) 1)));
#line 893 "instmap.m"
        hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__InstMap0_10)) == (MR_mktag((MR_Integer) 1)));
#line 893 "instmap.m"
        if (hlds__instmap__succeeded)
#line 893 "instmap.m"
          hlds__instmap__InstMapping0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap0_10, (MR_Integer) 0)));
#line 894 "instmap.m"
      }
#line 890 "instmap.m"
    if (hlds__instmap__succeeded)
#line 896 "instmap.m"
      {
#line 896 "instmap.m"
        MR_Word hlds__instmap__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 896 "instmap.m"
        MR_Word hlds__instmap__NonLocalsList_16;
#line 896 "instmap.m"
        MR_Word hlds__instmap__VarTypes_17;
#line 896 "instmap.m"
        MR_Word hlds__instmap__InstMapping_18;
#line 896 "instmap.m"
        MR_Word hlds__instmap__ModuleInfo_19;
#line 896 "instmap.m"
        MR_Word hlds__instmap__ErrorList_20;
#line 896 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModeInfo_29_29;

#line 896 "instmap.m"
        {
#line 896 "instmap.m"
          parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__instmap__TypeCtorInfo_33_33, hlds__instmap__NonLocals_6, &hlds__instmap__NonLocalsList_16);
        }
#line 897 "instmap.m"
        {
#line 897 "instmap.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(hlds__instmap__STATE_VARIABLE_ModeInfo_0_27, &hlds__instmap__VarTypes_17);
        }
#line 898 "instmap.m"
        {
#line 898 "instmap.m"
          hlds__instmap__merge_insts_of_vars_8_p_0(hlds__instmap__NonLocalsList_16, hlds__instmap__ArmInstMaps_7, hlds__instmap__VarTypes_17, hlds__instmap__InstMapping0_13, &hlds__instmap__InstMapping_18, hlds__instmap__ModuleInfo0_11, &hlds__instmap__ModuleInfo_19, &hlds__instmap__ErrorList_20);
        }
#line 900 "instmap.m"
        {
#line 900 "instmap.m"
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(hlds__instmap__ModuleInfo_19, hlds__instmap__STATE_VARIABLE_ModeInfo_0_27, &hlds__instmap__STATE_VARIABLE_ModeInfo_29_29);
        }
#line 907 "instmap.m"
        if ((hlds__instmap__ErrorList_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 908 "instmap.m"
          hlds__instmap__STATE_VARIABLE_ModeInfo_31_31 = hlds__instmap__STATE_VARIABLE_ModeInfo_29_29;
#line 907 "instmap.m"
        else
#line 902 "instmap.m"
          {
#line 902 "instmap.m"
            MR_Word hlds__instmap__FirstError_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__ErrorList_20, (MR_Integer) 0)));
#line 902 "instmap.m"
            MR_Word hlds__instmap__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__FirstError_21, (MR_Integer) 0)));
#line 902 "instmap.m"
            MR_Word hlds__instmap__WaitingVars_25;
#line 902 "instmap.m"
            MR_Word hlds__instmap__V_30_30;
#line 902 "instmap.m"
            MR_Word hlds__instmap__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__ErrorList_20, (MR_Integer) 1)));
#line 903 "instmap.m"
            MR_Word hlds__instmap__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__FirstError_21, (MR_Integer) 1)));

#line 904 "instmap.m"
            {
#line 904 "instmap.m"
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
#line 905 "instmap.m"
            {
#line 905 "instmap.m"
              check_hlds__mode_info__mode_info_error_4_p_0(hlds__instmap__WaitingVars_25, hlds__instmap__V_30_30, hlds__instmap__STATE_VARIABLE_ModeInfo_29_29, &hlds__instmap__STATE_VARIABLE_ModeInfo_31_31);
            }
#line 902 "instmap.m"
          }
#line 910 "instmap.m"
        {
#line 910 "instmap.m"
          hlds__instmap__InstMap_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 910 "instmap.m"
          MR_hl_field(MR_mktag(1), hlds__instmap__InstMap_26, 0) = ((MR_Box) (hlds__instmap__InstMapping_18));
#line 910 "instmap.m"
        }
#line 896 "instmap.m"
      }
#line 890 "instmap.m"
    else
#line 912 "instmap.m"
      {
#line 912 "instmap.m"
        hlds__instmap__InstMap_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 912 "instmap.m"
        hlds__instmap__STATE_VARIABLE_ModeInfo_31_31 = hlds__instmap__STATE_VARIABLE_ModeInfo_0_27;
#line 912 "instmap.m"
      }
#line 914 "instmap.m"
    {
#line 914 "instmap.m"
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(hlds__instmap__InstMap_26, hlds__instmap__STATE_VARIABLE_ModeInfo_31_31, hlds__instmap__STATE_VARIABLE_ModeInfo_28);
    }
#line 886 "instmap.m"
  }
#line 262 "instmap.m"
}

#line 253 "instmap.m"
void MR_CALL 
hlds__instmap__make_arm_instmaps_for_cases_3_p_0(
#line 253 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 253 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 253 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 253 "instmap.m"
{
#line 871 "instmap.m"
  {
#line 871 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 871 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 871 "instmap.m"
      if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 871 "instmap.m"
        *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 871 "instmap.m"
      else
#line 872 "instmap.m"
        {
#line 873 "instmap.m"
          {
#line 873 "instmap.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_cases\'/3", (MR_String) "mismatched lists");
#line 873 "instmap.m"
            return;
          }
#line 872 "instmap.m"
        }
#line 871 "instmap.m"
    else
#line 871 "instmap.m"
      {
#line 871 "instmap.m"
        MR_Word hlds__instmap__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 871 "instmap.m"
        MR_Word hlds__instmap__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 871 "instmap.m"
        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 874 "instmap.m"
          {
#line 875 "instmap.m"
            {
#line 875 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_cases\'/3", (MR_String) "mismatched lists");
#line 875 "instmap.m"
              return;
            }
#line 874 "instmap.m"
          }
#line 871 "instmap.m"
        else
#line 877 "instmap.m"
          {
#line 877 "instmap.m"
            MR_Word hlds__instmap__InstMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 877 "instmap.m"
            MR_Word hlds__instmap__InstMaps_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 877 "instmap.m"
            MR_Word hlds__instmap__ArmInfo_20;
#line 877 "instmap.m"
            MR_Word hlds__instmap__ArmInfos_21;
#line 877 "instmap.m"
            MR_Word hlds__instmap__Goal_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_29_29, (MR_Integer) 2)));
#line 877 "instmap.m"
            MR_Word hlds__instmap__GoalInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__Goal_24, (MR_Integer) 1)));
#line 877 "instmap.m"
            MR_Word hlds__instmap__Context_27;
#line 878 "instmap.m"
            MR_Word hlds__instmap__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_29_29, (MR_Integer) 0)));
#line 878 "instmap.m"
            MR_Word hlds__instmap__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_29_29, (MR_Integer) 1)));
#line 879 "instmap.m"
            MR_Word hlds__instmap__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__Goal_24, (MR_Integer) 0)));

#line 880 "instmap.m"
            {
#line 880 "instmap.m"
              hlds__instmap__Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__instmap__GoalInfo_26);
            }
#line 881 "instmap.m"
            {
#line 881 "instmap.m"
              hlds__instmap__ArmInfo_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 881 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__ArmInfo_20, 0) = ((MR_Box) (hlds__instmap__Context_27));
#line 881 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__ArmInfo_20, 1) = ((MR_Box) (hlds__instmap__InstMap_18));
#line 881 "instmap.m"
            }
#line 882 "instmap.m"
            {
#line 882 "instmap.m"
              hlds__instmap__make_arm_instmaps_for_cases_3_p_0(hlds__instmap__V_28_28, hlds__instmap__InstMaps_19, &hlds__instmap__ArmInfos_21);
            }
#line 877 "instmap.m"
            {
#line 877 "instmap.m"
              MR_Word base;
#line 877 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 877 "instmap.m"
              *hlds__instmap__HeadVar__3_3 = base;
#line 877 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__ArmInfo_20));
#line 877 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__ArmInfos_21));
#line 877 "instmap.m"
            }
#line 877 "instmap.m"
          }
#line 871 "instmap.m"
      }
#line 871 "instmap.m"
  }
#line 253 "instmap.m"
}

#line 251 "instmap.m"
void MR_CALL 
hlds__instmap__make_arm_instmaps_for_goals_3_p_0(
#line 251 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 251 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 251 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 251 "instmap.m"
{
#line 859 "instmap.m"
  {
#line 859 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 859 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 859 "instmap.m"
      if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 859 "instmap.m"
        *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 859 "instmap.m"
      else
#line 860 "instmap.m"
        {
#line 861 "instmap.m"
          {
#line 861 "instmap.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_goals\'/3", (MR_String) "mismatched lists");
#line 861 "instmap.m"
            return;
          }
#line 860 "instmap.m"
        }
#line 859 "instmap.m"
    else
#line 859 "instmap.m"
      {
#line 859 "instmap.m"
        MR_Word hlds__instmap__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
#line 859 "instmap.m"
        MR_Word hlds__instmap__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 859 "instmap.m"
        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 862 "instmap.m"
          {
#line 863 "instmap.m"
            {
#line 863 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_goals\'/3", (MR_String) "mismatched lists");
#line 863 "instmap.m"
              return;
            }
#line 862 "instmap.m"
          }
#line 859 "instmap.m"
        else
#line 865 "instmap.m"
          {
#line 865 "instmap.m"
            MR_Word hlds__instmap__InstMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 865 "instmap.m"
            MR_Word hlds__instmap__InstMaps_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 865 "instmap.m"
            MR_Word hlds__instmap__ArmInfo_20;
#line 865 "instmap.m"
            MR_Word hlds__instmap__ArmInfos_21;
#line 865 "instmap.m"
            MR_Word hlds__instmap__GoalInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_26_26, (MR_Integer) 1)));
#line 865 "instmap.m"
            MR_Word hlds__instmap__Context_24;
#line 866 "instmap.m"
            MR_Word hlds__instmap__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__V_26_26, (MR_Integer) 0)));

#line 867 "instmap.m"
            {
#line 867 "instmap.m"
              hlds__instmap__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__instmap__GoalInfo_23);
            }
#line 868 "instmap.m"
            {
#line 868 "instmap.m"
              hlds__instmap__ArmInfo_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 868 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__ArmInfo_20, 0) = ((MR_Box) (hlds__instmap__Context_24));
#line 868 "instmap.m"
              MR_hl_field(MR_mktag(0), hlds__instmap__ArmInfo_20, 1) = ((MR_Box) (hlds__instmap__InstMap_18));
#line 868 "instmap.m"
            }
#line 869 "instmap.m"
            {
#line 869 "instmap.m"
              hlds__instmap__make_arm_instmaps_for_goals_3_p_0(hlds__instmap__V_25_25, hlds__instmap__InstMaps_19, &hlds__instmap__ArmInfos_21);
            }
#line 865 "instmap.m"
            {
#line 865 "instmap.m"
              MR_Word base;
#line 865 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 865 "instmap.m"
              *hlds__instmap__HeadVar__3_3 = base;
#line 865 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__ArmInfo_20));
#line 865 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__ArmInfos_21));
#line 865 "instmap.m"
            }
#line 865 "instmap.m"
          }
#line 859 "instmap.m"
      }
#line 859 "instmap.m"
  }
#line 251 "instmap.m"
}

#line 239 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_restrict_3_p_0(
#line 239 "instmap.m"
  MR_Word hlds__instmap__Vars_1,
#line 239 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 239 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 239 "instmap.m"
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
#line 847 "instmap.m"
        MR_Word hlds__instmap__V_8_8;

#line 848 "instmap.m"
        {
#line 848 "instmap.m"
          hlds__instmap__V_8_8 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Vars_1);
        }
#line 848 "instmap.m"
        {
#line 848 "instmap.m"
          mercury__map__select_sorted_list_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping0_6, hlds__instmap__V_8_8, &hlds__instmap__InstMapping_7);
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
#line 239 "instmap.m"
}

#line 233 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(
#line 233 "instmap.m"
  MR_Word hlds__instmap__InstMap1_5,
#line 233 "instmap.m"
  MR_Word hlds__instmap__InstMap2_6,
#line 233 "instmap.m"
  MR_Word hlds__instmap__How_7,
#line 233 "instmap.m"
  MR_Word * hlds__instmap__InstMap_8)
#line 233 "instmap.m"
{
#line 804 "instmap.m"
  {
#line 804 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 804 "instmap.m"
    if ((hlds__instmap__InstMap1_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 804 "instmap.m"
      *hlds__instmap__InstMap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 804 "instmap.m"
    else
#line 804 "instmap.m"
      {
#line 804 "instmap.m"
        MR_Word hlds__instmap__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap1_5, (MR_Integer) 0)));

#line 804 "instmap.m"
        if ((hlds__instmap__InstMap2_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 809 "instmap.m"
          *hlds__instmap__InstMap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 804 "instmap.m"
        else
#line 811 "instmap.m"
          {
#line 811 "instmap.m"
            MR_Word hlds__instmap__InstMappingDelta2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap2_6, (MR_Integer) 0)));
#line 811 "instmap.m"
            MR_Word hlds__instmap__InstMappingDelta_12;

#line 817 "instmap.m"
#line 817 "instmap.m"
            switch (hlds__instmap__How_7) {
#line 817 "instmap.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 817 "instmap.m"
              case (MR_Integer) 0:
#line 814 "instmap.m"
                {
#line 815 "instmap.m"
                  {
#line 815 "instmap.m"
                    mercury__map__overlay_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_25_25, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__InstMappingDelta_12);
                  }
#line 814 "instmap.m"
                }
#line 817 "instmap.m"
                break;
#line 817 "instmap.m"
              case (MR_Integer) 1:
#line 818 "instmap.m"
                {
#line 819 "instmap.m"
                  {
#line 819 "instmap.m"
                    mercury__map__overlay_large_map_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_25_25, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__InstMappingDelta_12);
                  }
#line 818 "instmap.m"
                }
#line 817 "instmap.m"
                break;
#line 817 "instmap.m"
              case (MR_Integer) 2:
#line 822 "instmap.m"
                {
#line 824 "instmap.m"
                  MR_Word hlds__instmap__TypeInfo_19_19 = (MR_Word) &hlds__instmap_scalar_common_1[0];
#line 824 "instmap.m"
                  MR_Word hlds__instmap__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 824 "instmap.m"
                  MR_Integer hlds__instmap__Count1_13;
#line 824 "instmap.m"
                  MR_Integer hlds__instmap__Count2_14;

#line 824 "instmap.m"
                  {
#line 824 "instmap.m"
                    mercury__map__count_2_p_0(hlds__instmap__TypeInfo_19_19, hlds__instmap__TypeCtorInfo_20_20, hlds__instmap__V_25_25, &hlds__instmap__Count1_13);
                  }
#line 825 "instmap.m"
                  {
#line 825 "instmap.m"
                    mercury__map__count_2_p_0(hlds__instmap__TypeInfo_19_19, hlds__instmap__TypeCtorInfo_20_20, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__Count2_14);
                  }
#line 826 "instmap.m"
                  hlds__instmap__succeeded = (hlds__instmap__Count1_13 >= hlds__instmap__Count2_14);
#line 822 "instmap.m"
                  if (hlds__instmap__succeeded)
#line 828 "instmap.m"
                    {
#line 828 "instmap.m"
                      {
#line 828 "instmap.m"
                        mercury__map__overlay_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_25_25, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__InstMappingDelta_12);
                      }
#line 828 "instmap.m"
                    }
#line 822 "instmap.m"
                  else
#line 831 "instmap.m"
                    {
#line 831 "instmap.m"
                      {
#line 831 "instmap.m"
                        mercury__map__overlay_large_map_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_25_25, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__InstMappingDelta_12);
                      }
#line 831 "instmap.m"
                    }
#line 822 "instmap.m"
                }
#line 817 "instmap.m"
                break;
#line 817 "instmap.m"
            }
#line 835 "instmap.m"
            {
#line 835 "instmap.m"
              MR_Word base;
#line 835 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 835 "instmap.m"
              *hlds__instmap__InstMap_8 = base;
#line 835 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMappingDelta_12));
#line 835 "instmap.m"
            }
#line 811 "instmap.m"
          }
#line 804 "instmap.m"
      }
#line 804 "instmap.m"
  }
#line 233 "instmap.m"
}

#line 227 "instmap.m"
void MR_CALL 
hlds__instmap__apply_instmap_delta_sv_3_p_0(
#line 227 "instmap.m"
  MR_Word hlds__instmap__Delta_4,
#line 227 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_Instmap_0_6,
#line 227 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_Instmap_7)
#line 227 "instmap.m"
{
#line 800 "instmap.m"
  {
#line 800 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 800 "instmap.m"
    {
#line 800 "instmap.m"
      hlds__instmap__apply_instmap_delta_3_p_0(hlds__instmap__STATE_VARIABLE_Instmap_0_6, hlds__instmap__Delta_4, hlds__instmap__STATE_VARIABLE_Instmap_7);
    }
#line 800 "instmap.m"
  }
#line 227 "instmap.m"
}

#line 221 "instmap.m"
void MR_CALL 
hlds__instmap__apply_instmap_delta_3_p_0(
#line 221 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 221 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 221 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 221 "instmap.m"
{
#line 793 "instmap.m"
  {
#line 793 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 793 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 793 "instmap.m"
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 793 "instmap.m"
    else
#line 793 "instmap.m"
      {
#line 793 "instmap.m"
        MR_Word hlds__instmap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 793 "instmap.m"
        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 794 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 793 "instmap.m"
        else
#line 796 "instmap.m"
          {
#line 796 "instmap.m"
            MR_Word hlds__instmap__InstMappingDelta_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 796 "instmap.m"
            MR_Word hlds__instmap__InstMapping_8;

#line 797 "instmap.m"
            {
#line 797 "instmap.m"
              mercury__map__overlay_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_11_11, hlds__instmap__InstMappingDelta_7, &hlds__instmap__InstMapping_8);
            }
#line 796 "instmap.m"
            {
#line 796 "instmap.m"
              MR_Word base;
#line 796 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 796 "instmap.m"
              *hlds__instmap__HeadVar__3_3 = base;
#line 796 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_8));
#line 796 "instmap.m"
            }
#line 796 "instmap.m"
          }
#line 793 "instmap.m"
      }
#line 793 "instmap.m"
  }
#line 221 "instmap.m"
}

#line 215 "instmap.m"
void MR_CALL 
hlds__instmap__compute_instmap_delta_4_p_0(
#line 215 "instmap.m"
  MR_Word hlds__instmap__InstMapA_5,
#line 215 "instmap.m"
  MR_Word hlds__instmap__InstMapB_6,
#line 215 "instmap.m"
  MR_Word hlds__instmap__NonLocals_7,
#line 215 "instmap.m"
  MR_Word * hlds__instmap__InstMap_8)
#line 215 "instmap.m"
{
#line 1139 "instmap.m"
  {
#line 1139 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 1139 "instmap.m"
    if ((hlds__instmap__InstMapA_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1139 "instmap.m"
      *hlds__instmap__InstMap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1139 "instmap.m"
    else
#line 1139 "instmap.m"
      {
#line 1139 "instmap.m"
        MR_Word hlds__instmap__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapA_5, (MR_Integer) 0)));

#line 1139 "instmap.m"
        if ((hlds__instmap__InstMapB_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1144 "instmap.m"
          *hlds__instmap__InstMap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1139 "instmap.m"
        else
#line 1146 "instmap.m"
          {
#line 1146 "instmap.m"
            MR_Word hlds__instmap__InstMappingB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapB_6, (MR_Integer) 0)));
#line 1146 "instmap.m"
            MR_Word hlds__instmap__NonLocalsList_12;
#line 1146 "instmap.m"
            MR_Word hlds__instmap__AssocList_13;
#line 1146 "instmap.m"
            MR_Word hlds__instmap__DeltaInstMap_14;

#line 1148 "instmap.m"
            {
#line 1148 "instmap.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__NonLocals_7, &hlds__instmap__NonLocalsList_12);
            }
#line 1149 "instmap.m"
            {
#line 1149 "instmap.m"
              hlds__instmap__compute_instmap_delta_for_vars_4_p_0(hlds__instmap__NonLocalsList_12, hlds__instmap__V_18_18, hlds__instmap__InstMappingB_11, &hlds__instmap__AssocList_13);
            }
#line 1151 "instmap.m"
            {
#line 1151 "instmap.m"
              mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__AssocList_13, &hlds__instmap__DeltaInstMap_14);
            }
#line 1152 "instmap.m"
            {
#line 1152 "instmap.m"
              MR_Word base;
#line 1152 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "instmap.m"
              *hlds__instmap__InstMap_8 = base;
#line 1152 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__DeltaInstMap_14));
#line 1152 "instmap.m"
            }
#line 1146 "instmap.m"
          }
#line 1139 "instmap.m"
      }
#line 1139 "instmap.m"
  }
#line 215 "instmap.m"
}

#line 202 "instmap.m"
void MR_CALL 
hlds__instmap__pre_lambda_update_5_p_0(
#line 202 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_6,
#line 202 "instmap.m"
  MR_Word hlds__instmap__Vars_7,
#line 202 "instmap.m"
  MR_Word hlds__instmap__Modes_8,
#line 202 "instmap.m"
  MR_Word hlds__instmap__InstMap0_9,
#line 202 "instmap.m"
  MR_Word * hlds__instmap__InstMap_10)
#line 202 "instmap.m"
{
#line 785 "instmap.m"
  {
#line 785 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 785 "instmap.m"
    MR_Word hlds__instmap__Insts_11;
#line 785 "instmap.m"
    MR_Word hlds__instmap__VarInsts_12;
#line 785 "instmap.m"
    MR_Word hlds__instmap__InstMapDelta_13;
#line 785 "instmap.m"
    MR_Word hlds__instmap__Instmapping_17;

#line 786 "instmap.m"
    {
#line 786 "instmap.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(hlds__instmap__ModuleInfo_6, hlds__instmap__Modes_8, &hlds__instmap__Insts_11);
    }
#line 787 "instmap.m"
    {
#line 787 "instmap.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Vars_7, hlds__instmap__Insts_11, &hlds__instmap__VarInsts_12);
    }
#line 421 "instmap.m"
    {
#line 421 "instmap.m"
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__VarInsts_12, &hlds__instmap__Instmapping_17);
    }
#line 420 "instmap.m"
    {
#line 420 "instmap.m"
      hlds__instmap__InstMapDelta_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 420 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_13, 0) = ((MR_Box) (hlds__instmap__Instmapping_17));
#line 420 "instmap.m"
    }
#line 789 "instmap.m"
    {
#line 789 "instmap.m"
      hlds__instmap__apply_instmap_delta_3_p_0(hlds__instmap__InstMap0_9, hlds__instmap__InstMapDelta_13, hlds__instmap__InstMap_10);
    }
#line 785 "instmap.m"
  }
#line 202 "instmap.m"
}

#line 195 "instmap.m"
void MR_CALL 
hlds__instmap__bind_var_to_functors_8_p_0(
#line 195 "instmap.m"
  MR_Word hlds__instmap__Var_9,
#line 195 "instmap.m"
  MR_Word hlds__instmap__Type_10,
#line 195 "instmap.m"
  MR_Word hlds__instmap__MainConsId_11,
#line 195 "instmap.m"
  MR_Word hlds__instmap__OtherConsIds_12,
#line 195 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_17,
#line 195 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_18,
#line 195 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_19,
#line 195 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_20)
#line 195 "instmap.m"
{
#line 727 "instmap.m"
  {
#line 727 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 727 "instmap.m"
    MR_Word hlds__instmap__Inst0_15;
#line 727 "instmap.m"
    MR_Word hlds__instmap__Inst_16;
#line 727 "instmap.m"
    MR_Word hlds__instmap__MainFinalInst_31;
#line 727 "instmap.m"
    MR_Word hlds__instmap__OtherFinalInsts_32;
#line 727 "instmap.m"
    MR_Word hlds__instmap__MaybeMergedInst_33;
#line 727 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_19_34;
#line 727 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_20_35;
#line 727 "instmap.m"
    MR_Word hlds__instmap__V_36_36;
#line 727 "instmap.m"
    MR_Word hlds__instmap__V_37_37;
#line 727 "instmap.m"
    MR_Integer hlds__instmap__Arity_50;
#line 727 "instmap.m"
    MR_Word hlds__instmap__ArgLives_51;
#line 727 "instmap.m"
    MR_Word hlds__instmap__ArgInsts_52;
#line 740 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_58;
#line 740 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_59;
#line 741 "instmap.m"
    MR_Word hlds__instmap___Det_53;

#line 728 "instmap.m"
    {
#line 728 "instmap.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__STATE_VARIABLE_InstMap_0_17, hlds__instmap__Var_9, &hlds__instmap__Inst0_15);
    }
#line 737 "instmap.m"
    {
#line 737 "instmap.m"
      hlds__instmap__Arity_50 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_19, hlds__instmap__Type_10, hlds__instmap__MainConsId_11);
    }
#line 738 "instmap.m"
    {
#line 738 "instmap.m"
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_50, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_51);
    }
#line 739 "instmap.m"
    {
#line 739 "instmap.m"
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_50, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_52);
    }
#line 741 "instmap.m"
    {
#line 741 "instmap.m"
      hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__Inst0_15, hlds__instmap__MainConsId_11, hlds__instmap__ArgInsts_52, hlds__instmap__ArgLives_51, (MR_Integer) 0, hlds__instmap__Type_10, &hlds__instmap__STATE_VARIABLE_Inst_23_58, &hlds__instmap___Det_53, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_19, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_59);
    }
#line 740 "instmap.m"
    if (hlds__instmap__succeeded)
#line 744 "instmap.m"
      {
#line 744 "instmap.m"
        hlds__instmap__STATE_VARIABLE_ModuleInfo_19_34 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_59;
#line 744 "instmap.m"
        hlds__instmap__MainFinalInst_31 = hlds__instmap__STATE_VARIABLE_Inst_23_58;
#line 744 "instmap.m"
      }
#line 740 "instmap.m"
    else
#line 746 "instmap.m"
      {
#line 746 "instmap.m"
        {
#line 746 "instmap.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
#line 746 "instmap.m"
          return;
        }
#line 746 "instmap.m"
      }
#line 756 "instmap.m"
    {
#line 756 "instmap.m"
      hlds__instmap__bind_inst_to_functors_others_6_p_0(hlds__instmap__Type_10, hlds__instmap__OtherConsIds_12, hlds__instmap__Inst0_15, &hlds__instmap__OtherFinalInsts_32, hlds__instmap__STATE_VARIABLE_ModuleInfo_19_34, &hlds__instmap__STATE_VARIABLE_ModuleInfo_20_35);
    }
#line 758 "instmap.m"
    {
#line 758 "instmap.m"
      hlds__instmap__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__V_36_36, 0) = ((MR_Box) (hlds__instmap__MainFinalInst_31));
#line 758 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__V_36_36, 1) = ((MR_Box) (hlds__instmap__OtherFinalInsts_32));
#line 758 "instmap.m"
    }
#line 758 "instmap.m"
    {
#line 758 "instmap.m"
      hlds__instmap__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 758 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__V_37_37, 0) = ((MR_Box) (hlds__instmap__Type_10));
#line 758 "instmap.m"
    }
#line 758 "instmap.m"
    {
#line 758 "instmap.m"
      hlds__instmap__merge_var_insts_5_p_0(hlds__instmap__V_36_36, hlds__instmap__V_37_37, hlds__instmap__STATE_VARIABLE_ModuleInfo_20_35, hlds__instmap__STATE_VARIABLE_ModuleInfo_20, &hlds__instmap__MaybeMergedInst_33);
    }
#line 762 "instmap.m"
    if ((hlds__instmap__MaybeMergedInst_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 763 "instmap.m"
      {
#line 769 "instmap.m"
        {
#line 769 "instmap.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functors\'/7", (MR_String) "no MaybeMergedInst");
#line 769 "instmap.m"
          return;
        }
#line 763 "instmap.m"
      }
#line 762 "instmap.m"
    else
#line 761 "instmap.m"
      hlds__instmap__Inst_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MaybeMergedInst_33, (MR_Integer) 0)));
#line 565 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 565 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMap_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 565 "instmap.m"
    else
#line 566 "instmap.m"
      {
#line 566 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_17, (MR_Integer) 0)));
#line 566 "instmap.m"
        MR_Word hlds__instmap__InstMapping_72;

#line 567 "instmap.m"
        {
#line 567 "instmap.m"
          mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_9)), ((MR_Box) (hlds__instmap__Inst_16)), hlds__instmap__InstMapping0_71, &hlds__instmap__InstMapping_72);
        }
#line 566 "instmap.m"
        {
#line 566 "instmap.m"
          MR_Word base;
#line 566 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 566 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMap_18 = base;
#line 566 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_72));
#line 566 "instmap.m"
        }
#line 566 "instmap.m"
      }
#line 727 "instmap.m"
  }
#line 195 "instmap.m"
}

#line 192 "instmap.m"
void MR_CALL 
hlds__instmap__bind_var_to_functor_7_p_0(
#line 192 "instmap.m"
  MR_Word hlds__instmap__Var_8,
#line 192 "instmap.m"
  MR_Word hlds__instmap__Type_9,
#line 192 "instmap.m"
  MR_Word hlds__instmap__ConsId_10,
#line 192 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_15,
#line 192 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_16,
#line 192 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_17,
#line 192 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_18)
#line 192 "instmap.m"
{
#line 721 "instmap.m"
  {
#line 721 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 721 "instmap.m"
    MR_Word hlds__instmap__Inst0_13;
#line 721 "instmap.m"
    MR_Word hlds__instmap__Inst_14;
#line 721 "instmap.m"
    MR_Integer hlds__instmap__Arity_29;
#line 721 "instmap.m"
    MR_Word hlds__instmap__ArgLives_30;
#line 721 "instmap.m"
    MR_Word hlds__instmap__ArgInsts_31;
#line 740 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_37;
#line 740 "instmap.m"
    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_38;
#line 741 "instmap.m"
    MR_Word hlds__instmap___Det_32;

#line 722 "instmap.m"
    {
#line 722 "instmap.m"
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__STATE_VARIABLE_InstMap_0_15, hlds__instmap__Var_8, &hlds__instmap__Inst0_13);
    }
#line 737 "instmap.m"
    {
#line 737 "instmap.m"
      hlds__instmap__Arity_29 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_17, hlds__instmap__Type_9, hlds__instmap__ConsId_10);
    }
#line 738 "instmap.m"
    {
#line 738 "instmap.m"
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_29, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_30);
    }
#line 739 "instmap.m"
    {
#line 739 "instmap.m"
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_29, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_31);
    }
#line 741 "instmap.m"
    {
#line 741 "instmap.m"
      hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__Inst0_13, hlds__instmap__ConsId_10, hlds__instmap__ArgInsts_31, hlds__instmap__ArgLives_30, (MR_Integer) 0, hlds__instmap__Type_9, &hlds__instmap__STATE_VARIABLE_Inst_23_37, &hlds__instmap___Det_32, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_17, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_38);
    }
#line 740 "instmap.m"
    if (hlds__instmap__succeeded)
#line 744 "instmap.m"
      {
#line 744 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_18 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_38;
#line 744 "instmap.m"
        hlds__instmap__Inst_14 = hlds__instmap__STATE_VARIABLE_Inst_23_37;
#line 744 "instmap.m"
      }
#line 740 "instmap.m"
    else
#line 746 "instmap.m"
      {
#line 746 "instmap.m"
        {
#line 746 "instmap.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
#line 746 "instmap.m"
          return;
        }
#line 746 "instmap.m"
      }
#line 565 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 565 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMap_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 565 "instmap.m"
    else
#line 566 "instmap.m"
      {
#line 566 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_15, (MR_Integer) 0)));
#line 566 "instmap.m"
        MR_Word hlds__instmap__InstMapping_51;

#line 567 "instmap.m"
        {
#line 567 "instmap.m"
          mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_8)), ((MR_Box) (hlds__instmap__Inst_14)), hlds__instmap__InstMapping0_50, &hlds__instmap__InstMapping_51);
        }
#line 566 "instmap.m"
        {
#line 566 "instmap.m"
          MR_Word base;
#line 566 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 566 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMap_16 = base;
#line 566 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_51));
#line 566 "instmap.m"
        }
#line 566 "instmap.m"
      }
#line 721 "instmap.m"
  }
#line 192 "instmap.m"
}

#line 187 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_bind_var_to_functors_9_p_0(
#line 187 "instmap.m"
  MR_Word hlds__instmap__Var_10,
#line 187 "instmap.m"
  MR_Word hlds__instmap__Type_11,
#line 187 "instmap.m"
  MR_Word hlds__instmap__MainConsId_12,
#line 187 "instmap.m"
  MR_Word hlds__instmap__OtherConsIds_13,
#line 187 "instmap.m"
  MR_Word hlds__instmap__InstMap_14,
#line 187 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22,
#line 187 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstmapDelta_23,
#line 187 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_24,
#line 187 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_25)
#line 187 "instmap.m"
{
#line 696 "instmap.m"
  {
#line 696 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 696 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "instmap.m"
      {
#line 696 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_InstmapDelta_23 = hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22;
#line 696 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_25 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_24;
#line 696 "instmap.m"
      }
#line 696 "instmap.m"
    else
#line 698 "instmap.m"
      {
#line 698 "instmap.m"
        MR_Word hlds__instmap__InstmappingDelta0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22, (MR_Integer) 0)));
#line 698 "instmap.m"
        MR_Word hlds__instmap__OldInst_18;
#line 698 "instmap.m"
        MR_Word hlds__instmap__NewInst1_20;
#line 698 "instmap.m"
        MR_Word hlds__instmap__NewInst_21;
#line 698 "instmap.m"
        MR_Word hlds__instmap__MainFinalInst_39;
#line 698 "instmap.m"
        MR_Word hlds__instmap__OtherFinalInsts_40;
#line 698 "instmap.m"
        MR_Word hlds__instmap__MaybeMergedInst_41;
#line 698 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_19_42;
#line 698 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_20_43;
#line 698 "instmap.m"
        MR_Word hlds__instmap__V_44_44;
#line 698 "instmap.m"
        MR_Word hlds__instmap__V_45_45;
#line 698 "instmap.m"
        MR_Integer hlds__instmap__Arity_58;
#line 698 "instmap.m"
        MR_Word hlds__instmap__ArgLives_59;
#line 698 "instmap.m"
        MR_Word hlds__instmap__ArgInsts_60;
#line 705 "instmap.m"
        MR_Word hlds__instmap__NewInst0_19;
#line 705 "instmap.m"
        MR_Box hlds__instmap__conv0_NewInst0_19;
#line 740 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_66;
#line 740 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_67;
#line 741 "instmap.m"
        MR_Word hlds__instmap___Det_61;

#line 701 "instmap.m"
        {
#line 701 "instmap.m"
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_14, hlds__instmap__Var_10, &hlds__instmap__OldInst_18);
        }
#line 705 "instmap.m"
        {
#line 705 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstmappingDelta0_17, ((MR_Box) (hlds__instmap__Var_10)), &hlds__instmap__conv0_NewInst0_19);
        }
#line 705 "instmap.m"
        if (hlds__instmap__succeeded)
#line 705 "instmap.m"
          {
#line 705 "instmap.m"
            hlds__instmap__NewInst0_19 = ((MR_Word) hlds__instmap__conv0_NewInst0_19);
#line 705 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 705 "instmap.m"
          }
#line 705 "instmap.m"
        if (hlds__instmap__succeeded)
#line 706 "instmap.m"
          hlds__instmap__NewInst1_20 = hlds__instmap__NewInst0_19;
#line 705 "instmap.m"
        else
#line 708 "instmap.m"
          hlds__instmap__NewInst1_20 = hlds__instmap__OldInst_18;
#line 737 "instmap.m"
        {
#line 737 "instmap.m"
          hlds__instmap__Arity_58 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_24, hlds__instmap__Type_11, hlds__instmap__MainConsId_12);
        }
#line 738 "instmap.m"
        {
#line 738 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_58, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_59);
        }
#line 739 "instmap.m"
        {
#line 739 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_58, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_60);
        }
#line 741 "instmap.m"
        {
#line 741 "instmap.m"
          hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__NewInst1_20, hlds__instmap__MainConsId_12, hlds__instmap__ArgInsts_60, hlds__instmap__ArgLives_59, (MR_Integer) 0, hlds__instmap__Type_11, &hlds__instmap__STATE_VARIABLE_Inst_23_66, &hlds__instmap___Det_61, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_24, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_67);
        }
#line 740 "instmap.m"
        if (hlds__instmap__succeeded)
#line 744 "instmap.m"
          {
#line 744 "instmap.m"
            hlds__instmap__STATE_VARIABLE_ModuleInfo_19_42 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_67;
#line 744 "instmap.m"
            hlds__instmap__MainFinalInst_39 = hlds__instmap__STATE_VARIABLE_Inst_23_66;
#line 744 "instmap.m"
          }
#line 740 "instmap.m"
        else
#line 746 "instmap.m"
          {
#line 746 "instmap.m"
            {
#line 746 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
#line 746 "instmap.m"
              return;
            }
#line 746 "instmap.m"
          }
#line 756 "instmap.m"
        {
#line 756 "instmap.m"
          hlds__instmap__bind_inst_to_functors_others_6_p_0(hlds__instmap__Type_11, hlds__instmap__OtherConsIds_13, hlds__instmap__NewInst1_20, &hlds__instmap__OtherFinalInsts_40, hlds__instmap__STATE_VARIABLE_ModuleInfo_19_42, &hlds__instmap__STATE_VARIABLE_ModuleInfo_20_43);
        }
#line 758 "instmap.m"
        {
#line 758 "instmap.m"
          hlds__instmap__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "instmap.m"
          MR_hl_field(MR_mktag(1), hlds__instmap__V_44_44, 0) = ((MR_Box) (hlds__instmap__MainFinalInst_39));
#line 758 "instmap.m"
          MR_hl_field(MR_mktag(1), hlds__instmap__V_44_44, 1) = ((MR_Box) (hlds__instmap__OtherFinalInsts_40));
#line 758 "instmap.m"
        }
#line 758 "instmap.m"
        {
#line 758 "instmap.m"
          hlds__instmap__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 758 "instmap.m"
          MR_hl_field(MR_mktag(1), hlds__instmap__V_45_45, 0) = ((MR_Box) (hlds__instmap__Type_11));
#line 758 "instmap.m"
        }
#line 758 "instmap.m"
        {
#line 758 "instmap.m"
          hlds__instmap__merge_var_insts_5_p_0(hlds__instmap__V_44_44, hlds__instmap__V_45_45, hlds__instmap__STATE_VARIABLE_ModuleInfo_20_43, hlds__instmap__STATE_VARIABLE_ModuleInfo_25, &hlds__instmap__MaybeMergedInst_41);
        }
#line 762 "instmap.m"
        if ((hlds__instmap__MaybeMergedInst_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 763 "instmap.m"
          {
#line 769 "instmap.m"
            {
#line 769 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functors\'/7", (MR_String) "no MaybeMergedInst");
#line 769 "instmap.m"
              return;
            }
#line 763 "instmap.m"
          }
#line 762 "instmap.m"
        else
#line 761 "instmap.m"
          hlds__instmap__NewInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MaybeMergedInst_41, (MR_Integer) 0)));
#line 714 "instmap.m"
        {
#line 714 "instmap.m"
          hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__NewInst_21, hlds__instmap__OldInst_18);
        }
#line 714 "instmap.m"
        if (hlds__instmap__succeeded)
#line 714 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstmapDelta_23 = hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22;
#line 714 "instmap.m"
        else
#line 635 "instmap.m"
          {
#line 635 "instmap.m"
            MR_Word hlds__instmap__InstMapping0_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22, (MR_Integer) 0)));

#line 636 "instmap.m"
            hlds__instmap__succeeded = (hlds__instmap__NewInst_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 636 "instmap.m"
            if (hlds__instmap__succeeded)
#line 637 "instmap.m"
              *hlds__instmap__STATE_VARIABLE_InstmapDelta_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 636 "instmap.m"
            else
#line 639 "instmap.m"
              {
#line 639 "instmap.m"
                MR_Word hlds__instmap__InstMapping_81;

#line 639 "instmap.m"
                {
#line 639 "instmap.m"
                  mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_10)), ((MR_Box) (hlds__instmap__NewInst_21)), hlds__instmap__InstMapping0_79, &hlds__instmap__InstMapping_81);
                }
#line 640 "instmap.m"
                {
#line 640 "instmap.m"
                  MR_Word base;
#line 640 "instmap.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 640 "instmap.m"
                  *hlds__instmap__STATE_VARIABLE_InstmapDelta_23 = base;
#line 640 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_81));
#line 640 "instmap.m"
                }
#line 639 "instmap.m"
              }
#line 635 "instmap.m"
          }
#line 698 "instmap.m"
      }
#line 696 "instmap.m"
  }
#line 187 "instmap.m"
}

#line 183 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_bind_var_to_functor_8_p_0(
#line 183 "instmap.m"
  MR_Word hlds__instmap__Var_9,
#line 183 "instmap.m"
  MR_Word hlds__instmap__Type_10,
#line 183 "instmap.m"
  MR_Word hlds__instmap__ConsId_11,
#line 183 "instmap.m"
  MR_Word hlds__instmap__InstMap_12,
#line 183 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20,
#line 183 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstmapDelta_21,
#line 183 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_22,
#line 183 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_23)
#line 183 "instmap.m"
{
#line 669 "instmap.m"
  {
#line 669 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 669 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 669 "instmap.m"
      {
#line 669 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_InstmapDelta_21 = hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20;
#line 669 "instmap.m"
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_23 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_22;
#line 669 "instmap.m"
      }
#line 669 "instmap.m"
    else
#line 671 "instmap.m"
      {
#line 671 "instmap.m"
        MR_Word hlds__instmap__InstmappingDelta0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20, (MR_Integer) 0)));
#line 671 "instmap.m"
        MR_Word hlds__instmap__OldInst_16;
#line 671 "instmap.m"
        MR_Word hlds__instmap__NewInst1_18;
#line 671 "instmap.m"
        MR_Word hlds__instmap__NewInst_19;
#line 671 "instmap.m"
        MR_Integer hlds__instmap__Arity_37;
#line 671 "instmap.m"
        MR_Word hlds__instmap__ArgLives_38;
#line 671 "instmap.m"
        MR_Word hlds__instmap__ArgInsts_39;
#line 678 "instmap.m"
        MR_Word hlds__instmap__NewInst0_17;
#line 678 "instmap.m"
        MR_Box hlds__instmap__conv0_NewInst0_17;
#line 740 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_45;
#line 740 "instmap.m"
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_46;
#line 741 "instmap.m"
        MR_Word hlds__instmap___Det_40;

#line 674 "instmap.m"
        {
#line 674 "instmap.m"
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_12, hlds__instmap__Var_9, &hlds__instmap__OldInst_16);
        }
#line 678 "instmap.m"
        {
#line 678 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstmappingDelta0_15, ((MR_Box) (hlds__instmap__Var_9)), &hlds__instmap__conv0_NewInst0_17);
        }
#line 678 "instmap.m"
        if (hlds__instmap__succeeded)
#line 678 "instmap.m"
          {
#line 678 "instmap.m"
            hlds__instmap__NewInst0_17 = ((MR_Word) hlds__instmap__conv0_NewInst0_17);
#line 678 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 678 "instmap.m"
          }
#line 678 "instmap.m"
        if (hlds__instmap__succeeded)
#line 679 "instmap.m"
          hlds__instmap__NewInst1_18 = hlds__instmap__NewInst0_17;
#line 678 "instmap.m"
        else
#line 681 "instmap.m"
          hlds__instmap__NewInst1_18 = hlds__instmap__OldInst_16;
#line 737 "instmap.m"
        {
#line 737 "instmap.m"
          hlds__instmap__Arity_37 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_22, hlds__instmap__Type_10, hlds__instmap__ConsId_11);
        }
#line 738 "instmap.m"
        {
#line 738 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_37, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_38);
        }
#line 739 "instmap.m"
        {
#line 739 "instmap.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_37, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_39);
        }
#line 741 "instmap.m"
        {
#line 741 "instmap.m"
          hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__NewInst1_18, hlds__instmap__ConsId_11, hlds__instmap__ArgInsts_39, hlds__instmap__ArgLives_38, (MR_Integer) 0, hlds__instmap__Type_10, &hlds__instmap__STATE_VARIABLE_Inst_23_45, &hlds__instmap___Det_40, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_22, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_46);
        }
#line 740 "instmap.m"
        if (hlds__instmap__succeeded)
#line 744 "instmap.m"
          {
#line 744 "instmap.m"
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_23 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_46;
#line 744 "instmap.m"
            hlds__instmap__NewInst_19 = hlds__instmap__STATE_VARIABLE_Inst_23_45;
#line 744 "instmap.m"
          }
#line 740 "instmap.m"
        else
#line 746 "instmap.m"
          {
#line 746 "instmap.m"
            {
#line 746 "instmap.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
#line 746 "instmap.m"
              return;
            }
#line 746 "instmap.m"
          }
#line 686 "instmap.m"
        {
#line 686 "instmap.m"
          hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__NewInst_19, hlds__instmap__OldInst_16);
        }
#line 686 "instmap.m"
        if (hlds__instmap__succeeded)
#line 686 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstmapDelta_21 = hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20;
#line 686 "instmap.m"
        else
#line 635 "instmap.m"
          {
#line 635 "instmap.m"
            MR_Word hlds__instmap__InstMapping0_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20, (MR_Integer) 0)));

#line 636 "instmap.m"
            hlds__instmap__succeeded = (hlds__instmap__NewInst_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 636 "instmap.m"
            if (hlds__instmap__succeeded)
#line 637 "instmap.m"
              *hlds__instmap__STATE_VARIABLE_InstmapDelta_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 636 "instmap.m"
            else
#line 639 "instmap.m"
              {
#line 639 "instmap.m"
                MR_Word hlds__instmap__InstMapping_60;

#line 639 "instmap.m"
                {
#line 639 "instmap.m"
                  mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_9)), ((MR_Box) (hlds__instmap__NewInst_19)), hlds__instmap__InstMapping0_58, &hlds__instmap__InstMapping_60);
                }
#line 640 "instmap.m"
                {
#line 640 "instmap.m"
                  MR_Word base;
#line 640 "instmap.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 640 "instmap.m"
                  *hlds__instmap__STATE_VARIABLE_InstmapDelta_21 = base;
#line 640 "instmap.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_60));
#line 640 "instmap.m"
                }
#line 639 "instmap.m"
              }
#line 635 "instmap.m"
          }
#line 671 "instmap.m"
      }
#line 669 "instmap.m"
  }
#line 183 "instmap.m"
}

#line 649 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_2(
#line 649 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 649 "instmap.m"
{
#line 649 "instmap.m"
  {
#line 649 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 649 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 649 "instmap.m"
    {
#line 649 "instmap.m"
      hlds__instmap__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))));
    }
#line 649 "instmap.m"
    return hlds__instmap__succeeded;
#line 649 "instmap.m"
  }
#line 649 "instmap.m"
}

#line 649 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_1(
#line 649 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 649 "instmap.m"
{
#line 649 "instmap.m"
  {
#line 649 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 649 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 649 "instmap.m"
    {
#line 649 "instmap.m"
      hlds__instmap__succeeded = hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__649__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))));
    }
#line 649 "instmap.m"
    return hlds__instmap__succeeded;
#line 649 "instmap.m"
  }
#line 649 "instmap.m"
}

#line 177 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0(
#line 177 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 177 "instmap.m"
  MR_Word hlds__instmap__Vars_6,
#line 177 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_0_10,
#line 177 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapDelta_11)
#line 177 "instmap.m"
{
#line 645 "instmap.m"
  {
#line 645 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 645 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMapDelta_0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 645 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMapDelta_11 = hlds__instmap__STATE_VARIABLE_InstMapDelta_0_10;
#line 645 "instmap.m"
    else
#line 648 "instmap.m"
      {
#line 648 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMapDelta_0_10, (MR_Integer) 0)));
#line 648 "instmap.m"
        MR_Word hlds__instmap__InstMapping_9;
#line 648 "instmap.m"
        MR_Word hlds__instmap__V_12_12;
#line 648 "instmap.m"
        MR_Word hlds__instmap__V_16_16;

#line 649 "instmap.m"
        {
#line 649 "instmap.m"
          hlds__instmap__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 649 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
#line 649 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 1) = ((MR_Box) (hlds__instmap__instmap_delta_set_vars_same_4_p_0_1));
#line 649 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 649 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 3) = ((MR_Box) (hlds__instmap__Inst_5));
#line 649 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 649 "instmap.m"
        }
#line 649 "instmap.m"
        {
#line 649 "instmap.m"
          hlds__instmap__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 649 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
#line 649 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 1) = ((MR_Box) (hlds__instmap__instmap_delta_set_vars_same_4_p_0_2));
#line 649 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 649 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 3) = ((MR_Box) (hlds__instmap__V_16_16));
#line 649 "instmap.m"
        }
#line 649 "instmap.m"
        {
#line 649 "instmap.m"
          mercury__require__expect_4_p_0(hlds__instmap__V_12_12, (MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_delta_set_vars_same\'/4", (MR_String) "not_reached");
        }
#line 651 "instmap.m"
        {
#line 651 "instmap.m"
          hlds__instmap__instmapping_set_vars_same_4_p_0(hlds__instmap__Inst_5, hlds__instmap__Vars_6, hlds__instmap__InstMapping0_8, &hlds__instmap__InstMapping_9);
        }
#line 652 "instmap.m"
        {
#line 652 "instmap.m"
          MR_Word base;
#line 652 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 652 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMapDelta_11 = base;
#line 652 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_9));
#line 652 "instmap.m"
        }
#line 648 "instmap.m"
      }
#line 645 "instmap.m"
  }
#line 177 "instmap.m"
}

#line 174 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_set_var_4_p_0(
#line 174 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 174 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 174 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 174 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 174 "instmap.m"
{
#line 634 "instmap.m"
  {
#line 634 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 634 "instmap.m"
    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 634 "instmap.m"
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 634 "instmap.m"
    else
#line 635 "instmap.m"
      {
#line 635 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));

#line 636 "instmap.m"
        hlds__instmap__succeeded = (hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 636 "instmap.m"
        if (hlds__instmap__succeeded)
#line 637 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 636 "instmap.m"
        else
#line 639 "instmap.m"
          {
#line 639 "instmap.m"
            MR_Word hlds__instmap__InstMapping_11;

#line 639 "instmap.m"
            {
#line 639 "instmap.m"
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__HeadVar__1_1)), ((MR_Box) (hlds__instmap__HeadVar__2_2)), hlds__instmap__InstMapping0_9, &hlds__instmap__InstMapping_11);
            }
#line 640 "instmap.m"
            {
#line 640 "instmap.m"
              MR_Word base;
#line 640 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 640 "instmap.m"
              *hlds__instmap__HeadVar__4_4 = base;
#line 640 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_11));
#line 640 "instmap.m"
            }
#line 639 "instmap.m"
          }
#line 635 "instmap.m"
      }
#line 634 "instmap.m"
  }
#line 174 "instmap.m"
}

#line 620 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_2(
#line 620 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 620 "instmap.m"
{
#line 620 "instmap.m"
  {
#line 620 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 620 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 620 "instmap.m"
    {
#line 620 "instmap.m"
      hlds__instmap__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))));
    }
#line 620 "instmap.m"
    return hlds__instmap__succeeded;
#line 620 "instmap.m"
  }
#line 620 "instmap.m"
}

#line 620 "instmap.m"
static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_1(
#line 620 "instmap.m"
  MR_Box hlds__instmap__closure_arg)
#line 620 "instmap.m"
{
#line 620 "instmap.m"
  {
#line 620 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 620 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

#line 620 "instmap.m"
    {
#line 620 "instmap.m"
      hlds__instmap__succeeded = hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__620__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))));
    }
#line 620 "instmap.m"
    return hlds__instmap__succeeded;
#line 620 "instmap.m"
  }
#line 620 "instmap.m"
}

#line 171 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0(
#line 171 "instmap.m"
  MR_Word hlds__instmap__Inst_5,
#line 171 "instmap.m"
  MR_Word hlds__instmap__Vars_6,
#line 171 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_10,
#line 171 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_11)
#line 171 "instmap.m"
{
#line 616 "instmap.m"
  {
#line 616 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 616 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 616 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMap_11 = hlds__instmap__STATE_VARIABLE_InstMap_0_10;
#line 616 "instmap.m"
    else
#line 619 "instmap.m"
      {
#line 619 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_10, (MR_Integer) 0)));
#line 619 "instmap.m"
        MR_Word hlds__instmap__InstMapping_9;
#line 619 "instmap.m"
        MR_Word hlds__instmap__V_12_12;
#line 619 "instmap.m"
        MR_Word hlds__instmap__V_16_16;

#line 620 "instmap.m"
        {
#line 620 "instmap.m"
          hlds__instmap__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 620 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
#line 620 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 1) = ((MR_Box) (hlds__instmap__instmap_set_vars_same_4_p_0_1));
#line 620 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 620 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 3) = ((MR_Box) (hlds__instmap__Inst_5));
#line 620 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_16_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 620 "instmap.m"
        }
#line 620 "instmap.m"
        {
#line 620 "instmap.m"
          hlds__instmap__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 620 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
#line 620 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 1) = ((MR_Box) (hlds__instmap__instmap_set_vars_same_4_p_0_2));
#line 620 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 620 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_12_12, 3) = ((MR_Box) (hlds__instmap__V_16_16));
#line 620 "instmap.m"
        }
#line 620 "instmap.m"
        {
#line 620 "instmap.m"
          mercury__require__expect_4_p_0(hlds__instmap__V_12_12, (MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_set_vars_same\'/4", (MR_String) "not_reached");
        }
#line 622 "instmap.m"
        {
#line 622 "instmap.m"
          hlds__instmap__instmapping_set_vars_same_4_p_0(hlds__instmap__Inst_5, hlds__instmap__Vars_6, hlds__instmap__InstMapping0_8, &hlds__instmap__InstMapping_9);
        }
#line 623 "instmap.m"
        {
#line 623 "instmap.m"
          MR_Word base;
#line 623 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 623 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMap_11 = base;
#line 623 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_9));
#line 623 "instmap.m"
        }
#line 619 "instmap.m"
      }
#line 616 "instmap.m"
  }
#line 171 "instmap.m"
}

#line 169 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_set_vars_corresponding_4_p_0(
#line 169 "instmap.m"
  MR_Word hlds__instmap__Vars_5,
#line 169 "instmap.m"
  MR_Word hlds__instmap__Insts_6,
#line 169 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_10,
#line 169 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_11)
#line 169 "instmap.m"
{
#line 590 "instmap.m"
  {
#line 590 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 590 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 590 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMap_11 = hlds__instmap__STATE_VARIABLE_InstMap_0_10;
#line 590 "instmap.m"
    else
#line 593 "instmap.m"
      {
#line 593 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_10, (MR_Integer) 0)));
#line 593 "instmap.m"
        MR_Word hlds__instmap__InstMapping_9;

#line 594 "instmap.m"
        {
#line 594 "instmap.m"
          hlds__instmap__instmapping_set_vars_corresponding_4_p_0(hlds__instmap__Vars_5, hlds__instmap__Insts_6, hlds__instmap__InstMapping0_8, &hlds__instmap__InstMapping_9);
        }
#line 596 "instmap.m"
        {
#line 596 "instmap.m"
          MR_Word base;
#line 596 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 596 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMap_11 = base;
#line 596 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_9));
#line 596 "instmap.m"
        }
#line 593 "instmap.m"
      }
#line 590 "instmap.m"
  }
#line 169 "instmap.m"
}

#line 167 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_set_vars_3_p_0(
#line 167 "instmap.m"
  MR_Word hlds__instmap__VarsInsts_4,
#line 167 "instmap.m"
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_8,
#line 167 "instmap.m"
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_9)
#line 167 "instmap.m"
{
#line 571 "instmap.m"
  {
#line 571 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 571 "instmap.m"
    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 571 "instmap.m"
      *hlds__instmap__STATE_VARIABLE_InstMap_9 = hlds__instmap__STATE_VARIABLE_InstMap_0_8;
#line 571 "instmap.m"
    else
#line 574 "instmap.m"
      {
#line 574 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_8, (MR_Integer) 0)));
#line 574 "instmap.m"
        MR_Word hlds__instmap__InstMapping_7;

#line 575 "instmap.m"
        {
#line 575 "instmap.m"
          hlds__instmap__instmapping_set_vars_3_p_0(hlds__instmap__VarsInsts_4, hlds__instmap__InstMapping0_6, &hlds__instmap__InstMapping_7);
        }
#line 576 "instmap.m"
        {
#line 576 "instmap.m"
          MR_Word base;
#line 576 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 576 "instmap.m"
          *hlds__instmap__STATE_VARIABLE_InstMap_9 = base;
#line 576 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_7));
#line 576 "instmap.m"
        }
#line 574 "instmap.m"
      }
#line 571 "instmap.m"
  }
#line 167 "instmap.m"
}

#line 161 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_set_var_4_p_0(
#line 161 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 161 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 161 "instmap.m"
  MR_Word hlds__instmap__HeadVar__3_3,
#line 161 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__4_4)
#line 161 "instmap.m"
{
#line 565 "instmap.m"
  {
#line 565 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 565 "instmap.m"
    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 565 "instmap.m"
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 565 "instmap.m"
    else
#line 566 "instmap.m"
      {
#line 566 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));
#line 566 "instmap.m"
        MR_Word hlds__instmap__InstMapping_10;

#line 567 "instmap.m"
        {
#line 567 "instmap.m"
          mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__HeadVar__1_1)), ((MR_Box) (hlds__instmap__HeadVar__2_2)), hlds__instmap__InstMapping0_9, &hlds__instmap__InstMapping_10);
        }
#line 566 "instmap.m"
        {
#line 566 "instmap.m"
          MR_Word base;
#line 566 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 566 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = base;
#line 566 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_10));
#line 566 "instmap.m"
        }
#line 566 "instmap.m"
      }
#line 565 "instmap.m"
  }
#line 161 "instmap.m"
}

#line 156 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_insert_var_4_p_0(
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
#line 655 "instmap.m"
  {
#line 655 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 655 "instmap.m"
    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 655 "instmap.m"
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 655 "instmap.m"
    else
#line 656 "instmap.m"
      {
#line 656 "instmap.m"
        MR_Word hlds__instmap__InstMapping0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));

#line 657 "instmap.m"
        hlds__instmap__succeeded = (hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 657 "instmap.m"
        if (hlds__instmap__succeeded)
#line 658 "instmap.m"
          *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 657 "instmap.m"
        else
#line 660 "instmap.m"
          {
#line 660 "instmap.m"
            MR_Word hlds__instmap__InstMapping_11;

#line 660 "instmap.m"
            {
#line 660 "instmap.m"
              mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__HeadVar__1_1)), ((MR_Box) (hlds__instmap__HeadVar__2_2)), hlds__instmap__InstMapping0_9, &hlds__instmap__InstMapping_11);
            }
#line 661 "instmap.m"
            {
#line 661 "instmap.m"
              MR_Word base;
#line 661 "instmap.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 661 "instmap.m"
              *hlds__instmap__HeadVar__4_4 = base;
#line 661 "instmap.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_11));
#line 661 "instmap.m"
            }
#line 660 "instmap.m"
          }
#line 656 "instmap.m"
      }
#line 655 "instmap.m"
  }
#line 156 "instmap.m"
}

#line 150 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_lookup_vars_3_p_0(
#line 150 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 150 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 150 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 150 "instmap.m"
{
#line 560 "instmap.m"
  {
#line 560 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 560 "instmap.m"
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 560 "instmap.m"
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 560 "instmap.m"
    else
#line 561 "instmap.m"
      {
#line 561 "instmap.m"
        MR_Word hlds__instmap__Arg_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
#line 561 "instmap.m"
        MR_Word hlds__instmap__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
#line 561 "instmap.m"
        MR_Word hlds__instmap__Inst_8;
#line 561 "instmap.m"
        MR_Word hlds__instmap__Insts_9;

#line 562 "instmap.m"
        {
#line 562 "instmap.m"
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__HeadVar__1_1, hlds__instmap__Arg_6, &hlds__instmap__Inst_8);
        }
#line 563 "instmap.m"
        {
#line 563 "instmap.m"
          hlds__instmap__instmap_lookup_vars_3_p_0(hlds__instmap__HeadVar__1_1, hlds__instmap__Args_7, &hlds__instmap__Insts_9);
        }
#line 561 "instmap.m"
        {
#line 561 "instmap.m"
          MR_Word base;
#line 561 "instmap.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 561 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = base;
#line 561 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Inst_8));
#line 561 "instmap.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__Insts_9));
#line 561 "instmap.m"
        }
#line 561 "instmap.m"
      }
#line 560 "instmap.m"
  }
#line 150 "instmap.m"
}

#line 144 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_lookup_var_3_p_0(
#line 144 "instmap.m"
  MR_Word hlds__instmap__InstMapDelta_4,
#line 144 "instmap.m"
  MR_Word hlds__instmap__Var_5,
#line 144 "instmap.m"
  MR_Word * hlds__instmap__Inst_6)
#line 144 "instmap.m"
{
#line 554 "instmap.m"
  {
#line 554 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 554 "instmap.m"
    MR_Word hlds__instmap__InstPrime_7;

#line 549 "instmap.m"
    if ((hlds__instmap__InstMapDelta_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 549 "instmap.m"
      {
#line 549 "instmap.m"
        hlds__instmap__InstPrime_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 549 "instmap.m"
        hlds__instmap__succeeded = MR_TRUE;
#line 549 "instmap.m"
      }
#line 549 "instmap.m"
    else
#line 550 "instmap.m"
      {
#line 550 "instmap.m"
        MR_Word hlds__instmap__InstMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_4, (MR_Integer) 0)));
#line 551 "instmap.m"
        MR_Box hlds__instmap__conv0_InstPrime_7;

#line 551 "instmap.m"
        {
#line 551 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMap_12, ((MR_Box) (hlds__instmap__Var_5)), &hlds__instmap__conv0_InstPrime_7);
        }
#line 551 "instmap.m"
        if (hlds__instmap__succeeded)
#line 551 "instmap.m"
          {
#line 551 "instmap.m"
            hlds__instmap__InstPrime_7 = ((MR_Word) hlds__instmap__conv0_InstPrime_7);
#line 551 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 551 "instmap.m"
          }
#line 550 "instmap.m"
      }
#line 554 "instmap.m"
    if (hlds__instmap__succeeded)
#line 555 "instmap.m"
      *hlds__instmap__Inst_6 = hlds__instmap__InstPrime_7;
#line 554 "instmap.m"
    else
#line 557 "instmap.m"
      {
#line 557 "instmap.m"
        {
#line 557 "instmap.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_delta_lookup_var\'/3", (MR_String) "var not in instmap");
#line 557 "instmap.m"
          return;
        }
#line 557 "instmap.m"
      }
#line 554 "instmap.m"
  }
#line 144 "instmap.m"
}

#line 138 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__instmap_delta_search_var_3_p_0(
#line 138 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 138 "instmap.m"
  MR_Word hlds__instmap__Var_2,
#line 138 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 138 "instmap.m"
{
#line 549 "instmap.m"
  {
#line 549 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 549 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 549 "instmap.m"
      {
#line 549 "instmap.m"
        *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 549 "instmap.m"
        hlds__instmap__succeeded = MR_TRUE;
#line 549 "instmap.m"
      }
#line 549 "instmap.m"
    else
#line 550 "instmap.m"
      {
#line 550 "instmap.m"
        MR_Word hlds__instmap__InstMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 551 "instmap.m"
        MR_Box hlds__instmap__conv0_HeadVar__3_3;

#line 551 "instmap.m"
        {
#line 551 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMap_5, ((MR_Box) (hlds__instmap__Var_2)), &hlds__instmap__conv0_HeadVar__3_3);
        }
#line 551 "instmap.m"
        if (hlds__instmap__succeeded)
#line 551 "instmap.m"
          {
#line 551 "instmap.m"
            *hlds__instmap__HeadVar__3_3 = ((MR_Word) hlds__instmap__conv0_HeadVar__3_3);
#line 551 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 551 "instmap.m"
          }
#line 550 "instmap.m"
      }
#line 549 "instmap.m"
    return hlds__instmap__succeeded;
#line 549 "instmap.m"
  }
#line 138 "instmap.m"
}

#line 133 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_lookup_var_3_p_0(
#line 133 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 133 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 133 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 133 "instmap.m"
{
#line 535 "instmap.m"
  {
#line 535 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 535 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 535 "instmap.m"
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 535 "instmap.m"
    else
#line 536 "instmap.m"
      {
#line 536 "instmap.m"
        MR_Word hlds__instmap__InstMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 543 "instmap.m"
        MR_Word hlds__instmap__VarInst_11;
#line 543 "instmap.m"
        MR_Box hlds__instmap__conv0_VarInst_11;

#line 543 "instmap.m"
        {
#line 543 "instmap.m"
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMap_5, ((MR_Box) (hlds__instmap__HeadVar__2_2)), &hlds__instmap__conv0_VarInst_11);
        }
#line 543 "instmap.m"
        if (hlds__instmap__succeeded)
#line 543 "instmap.m"
          {
#line 543 "instmap.m"
            hlds__instmap__VarInst_11 = ((MR_Word) hlds__instmap__conv0_VarInst_11);
#line 543 "instmap.m"
            hlds__instmap__succeeded = MR_TRUE;
#line 543 "instmap.m"
          }
#line 543 "instmap.m"
        if (hlds__instmap__succeeded)
#line 544 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = hlds__instmap__VarInst_11;
#line 543 "instmap.m"
        else
#line 546 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 536 "instmap.m"
      }
#line 535 "instmap.m"
  }
#line 133 "instmap.m"
}

#line 126 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_changed_vars_5_p_0(
#line 126 "instmap.m"
  MR_Word hlds__instmap__InstMapA_6,
#line 126 "instmap.m"
  MR_Word hlds__instmap__InstMapB_7,
#line 126 "instmap.m"
  MR_Word hlds__instmap__VarTypes_8,
#line 126 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_9,
#line 126 "instmap.m"
  MR_Word * hlds__instmap__ChangedVars_10)
#line 126 "instmap.m"
{
#line 8388 "hlds.instmap.c"
  {
#line 8390 "hlds.instmap.c"
    MR_bool hlds__instmap__succeeded;

#line 8393 "hlds.instmap.c"
    if ((hlds__instmap__InstMapB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8395 "hlds.instmap.c"
      {
#line 515 "instmap.m"
        {
#line 515 "instmap.m"
          parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__ChangedVars_10);
        }
#line 8402 "hlds.instmap.c"
      }
#line 8404 "hlds.instmap.c"
    else
#line 8406 "hlds.instmap.c"
      {
#line 8408 "hlds.instmap.c"
        MR_Word hlds__instmap__VarsB_11;
#line 8410 "hlds.instmap.c"
        MR_Word hlds__instmap__InstMapping_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapB_7, (MR_Integer) 0)));

#line 480 "instmap.m"
        {
#line 480 "instmap.m"
          mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_12, &hlds__instmap__VarsB_11);
        }
#line 507 "instmap.m"
        {
#line 507 "instmap.m"
          hlds__instmap__instmap_changed_vars_2_6_p_0(hlds__instmap__VarsB_11, hlds__instmap__InstMapA_6, hlds__instmap__InstMapB_7, hlds__instmap__VarTypes_8, hlds__instmap__ModuleInfo_9, hlds__instmap__ChangedVars_10);
        }
#line 8423 "hlds.instmap.c"
      }
#line 8425 "hlds.instmap.c"
  }
#line 126 "instmap.m"
}

#line 484 "instmap.m"
static void MR_CALL 
hlds__instmap__instmap_bound_vars_3_p_0_1(
#line 484 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 484 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1,
#line 484 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_2,
#line 484 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_3,
#line 484 "instmap.m"
  MR_Box * hlds__instmap__wrapper_arg_4)
#line 484 "instmap.m"
{
#line 484 "instmap.m"
  {
#line 484 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;
#line 484 "instmap.m"
    MR_Word hlds__instmap__conv0_STATE_VARIABLE_BoundVars_11;

#line 484 "instmap.m"
    {
#line 484 "instmap.m"
      hlds__instmap__instmap_bound_vars_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3), &hlds__instmap__conv0_STATE_VARIABLE_BoundVars_11);
    }
#line 484 "instmap.m"
    *hlds__instmap__wrapper_arg_4 = ((MR_Box) (hlds__instmap__conv0_STATE_VARIABLE_BoundVars_11));
#line 484 "instmap.m"
  }
#line 484 "instmap.m"
}

#line 115 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_bound_vars_3_p_0(
#line 115 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 115 "instmap.m"
  MR_Word hlds__instmap__HeadVar__2_2,
#line 115 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__3_3)
#line 115 "instmap.m"
{
#line 482 "instmap.m"
  {
#line 482 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 482 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 482 "instmap.m"
      {
#line 482 "instmap.m"
        {
#line 482 "instmap.m"
          *hlds__instmap__HeadVar__3_3 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 482 "instmap.m"
      }
#line 482 "instmap.m"
    else
#line 483 "instmap.m"
      {
#line 483 "instmap.m"
        MR_Word hlds__instmap__InstMapping_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 483 "instmap.m"
        MR_Word hlds__instmap__V_8_8;
#line 483 "instmap.m"
        MR_Word hlds__instmap__V_9_9;
#line 484 "instmap.m"
        MR_Box hlds__instmap__conv1_HeadVar__3_3;

#line 484 "instmap.m"
        {
#line 484 "instmap.m"
          hlds__instmap__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 484 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_8_8, 0) = ((MR_Box) (&hlds__instmap_scalar_common_4[0]));
#line 484 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_8_8, 1) = ((MR_Box) (hlds__instmap__instmap_bound_vars_3_p_0_1));
#line 484 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 484 "instmap.m"
          MR_hl_field(MR_mktag(0), hlds__instmap__V_8_8, 3) = ((MR_Box) (hlds__instmap__HeadVar__2_2));
#line 484 "instmap.m"
        }
#line 485 "instmap.m"
        {
#line 485 "instmap.m"
          hlds__instmap__V_9_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 484 "instmap.m"
        {
#line 484 "instmap.m"
          mercury__map__foldl_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__instmap_scalar_common_1[1], hlds__instmap__V_8_8, hlds__instmap__InstMapping_5, ((MR_Box) (hlds__instmap__V_9_9)), &hlds__instmap__conv1_HeadVar__3_3);
        }
#line 484 "instmap.m"
        *hlds__instmap__HeadVar__3_3 = ((MR_Word) hlds__instmap__conv1_HeadVar__3_3);
#line 483 "instmap.m"
      }
#line 482 "instmap.m"
  }
#line 115 "instmap.m"
}

#line 109 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_changed_vars_2_p_0(
#line 109 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 109 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__2_2)
#line 109 "instmap.m"
{
#line 497 "instmap.m"
  {
#line 497 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 497 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 497 "instmap.m"
      {
#line 498 "instmap.m"
        {
#line 498 "instmap.m"
          parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__HeadVar__2_2);
        }
#line 497 "instmap.m"
      }
#line 497 "instmap.m"
    else
#line 499 "instmap.m"
      {
#line 499 "instmap.m"
        MR_Word hlds__instmap__InstMapping_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 499 "instmap.m"
        MR_Word hlds__instmap__ChangedVarsList_6;

#line 500 "instmap.m"
        {
#line 500 "instmap.m"
          mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_4, &hlds__instmap__ChangedVarsList_6);
        }
#line 501 "instmap.m"
        {
#line 501 "instmap.m"
          parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__ChangedVarsList_6, hlds__instmap__HeadVar__2_2);
        }
#line 499 "instmap.m"
      }
#line 497 "instmap.m"
  }
#line 109 "instmap.m"
}

#line 104 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_vars_list_2_p_0(
#line 104 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1,
#line 104 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__2_2)
#line 104 "instmap.m"
{
#line 478 "instmap.m"
  {
#line 478 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 478 "instmap.m"
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 478 "instmap.m"
      *hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 478 "instmap.m"
    else
#line 479 "instmap.m"
      {
#line 479 "instmap.m"
        MR_Word hlds__instmap__InstMapping_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

#line 480 "instmap.m"
        {
#line 480 "instmap.m"
          mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_3, hlds__instmap__HeadVar__2_2);
        }
#line 479 "instmap.m"
      }
#line 478 "instmap.m"
  }
#line 104 "instmap.m"
}

#line 100 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_vars_2_p_0(
#line 100 "instmap.m"
  MR_Word hlds__instmap__Instmap_3,
#line 100 "instmap.m"
  MR_Word * hlds__instmap__Vars_4)
#line 100 "instmap.m"
{
#line 474 "instmap.m"
  {
#line 474 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 474 "instmap.m"
    MR_Word hlds__instmap__VarsList_5;

#line 478 "instmap.m"
    if ((hlds__instmap__Instmap_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 478 "instmap.m"
      hlds__instmap__VarsList_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 478 "instmap.m"
    else
#line 479 "instmap.m"
      {
#line 479 "instmap.m"
        MR_Word hlds__instmap__InstMapping_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Instmap_3, (MR_Integer) 0)));

#line 480 "instmap.m"
        {
#line 480 "instmap.m"
          mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_7, &hlds__instmap__VarsList_5);
        }
#line 479 "instmap.m"
      }
#line 476 "instmap.m"
    {
#line 476 "instmap.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__VarsList_5, hlds__instmap__Vars_4);
    }
#line 474 "instmap.m"
  }
#line 100 "instmap.m"
}

#line 466 "instmap.m"
static MR_Box MR_CALL 
hlds__instmap__instmap_delta_bind_vars_1_f_0_1(
#line 466 "instmap.m"
  MR_Box hlds__instmap__closure_arg,
#line 466 "instmap.m"
  MR_Box hlds__instmap__wrapper_arg_1)
#line 466 "instmap.m"
{
#line 466 "instmap.m"
  {
#line 466 "instmap.m"
    MR_Box hlds__instmap__wrapper_arg_2;
#line 466 "instmap.m"
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;
#line 466 "instmap.m"
    MR_Word hlds__instmap__conv0_HeadVar__2_2;

#line 466 "instmap.m"
    {
#line 466 "instmap.m"
      hlds__instmap__conv0_HeadVar__2_2 = hlds__instmap__pair_with_ground_1_f_0(((MR_Word) hlds__instmap__wrapper_arg_1));
    }
#line 466 "instmap.m"
    hlds__instmap__wrapper_arg_2 = ((MR_Box) (hlds__instmap__conv0_HeadVar__2_2));
#line 466 "instmap.m"
    return hlds__instmap__wrapper_arg_2;
#line 466 "instmap.m"
  }
#line 466 "instmap.m"
}

#line 94 "instmap.m"
MR_Word MR_CALL 
hlds__instmap__instmap_delta_bind_vars_1_f_0(
#line 94 "instmap.m"
  MR_Word hlds__instmap__Vars_3)
#line 94 "instmap.m"
{
#line 459 "instmap.m"
  {
#line 459 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 459 "instmap.m"
    MR_Word hlds__instmap__InstMapDelta_4;
#line 459 "instmap.m"
    MR_Word hlds__instmap__VarsAndGround_5;
#line 459 "instmap.m"
    MR_Word hlds__instmap__Instmapping_14;

#line 466 "instmap.m"
    {
#line 466 "instmap.m"
      hlds__instmap__VarsAndGround_5 = mercury__list__map_2_f_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &hlds__instmap_scalar_common_2[0], (MR_Word) &hlds__instmap_scalar_common_2[3], hlds__instmap__Vars_3);
    }
#line 421 "instmap.m"
    {
#line 421 "instmap.m"
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__VarsAndGround_5, &hlds__instmap__Instmapping_14);
    }
#line 420 "instmap.m"
    {
#line 420 "instmap.m"
      hlds__instmap__InstMapDelta_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 420 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_4, 0) = ((MR_Box) (hlds__instmap__Instmapping_14));
#line 420 "instmap.m"
    }
#line 459 "instmap.m"
    return hlds__instmap__InstMapDelta_4;
#line 459 "instmap.m"
  }
#line 94 "instmap.m"
}

#line 93 "instmap.m"
MR_Word MR_CALL 
hlds__instmap__instmap_delta_bind_var_1_f_0(
#line 93 "instmap.m"
  MR_Word hlds__instmap__Var_3)
#line 93 "instmap.m"
{
#line 456 "instmap.m"
  {
#line 456 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 456 "instmap.m"
    MR_Word hlds__instmap__InstMapDelta_4;
#line 456 "instmap.m"
    MR_Word hlds__instmap__V_5_5;
#line 456 "instmap.m"
    MR_Word hlds__instmap__V_6_6;
#line 456 "instmap.m"
    MR_Word hlds__instmap__Instmapping_13;

#line 470 "instmap.m"
    {
#line 470 "instmap.m"
      hlds__instmap__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 470 "instmap.m"
      MR_hl_field(MR_mktag(0), hlds__instmap__V_6_6, 0) = ((MR_Box) (hlds__instmap__Var_3));
#line 470 "instmap.m"
      MR_hl_field(MR_mktag(0), hlds__instmap__V_6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__instmap_scalar_common_2[2])));
#line 470 "instmap.m"
    }
#line 457 "instmap.m"
    {
#line 457 "instmap.m"
      hlds__instmap__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 457 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__V_5_5, 0) = ((MR_Box) (hlds__instmap__V_6_6));
#line 457 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__V_5_5, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 457 "instmap.m"
    }
#line 421 "instmap.m"
    {
#line 421 "instmap.m"
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__V_5_5, &hlds__instmap__Instmapping_13);
    }
#line 420 "instmap.m"
    {
#line 420 "instmap.m"
      hlds__instmap__InstMapDelta_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 420 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_4, 0) = ((MR_Box) (hlds__instmap__Instmapping_13));
#line 420 "instmap.m"
    }
#line 456 "instmap.m"
    return hlds__instmap__InstMapDelta_4;
#line 456 "instmap.m"
  }
#line 93 "instmap.m"
}

#line 92 "instmap.m"
MR_Word MR_CALL 
hlds__instmap__instmap_delta_bind_no_var_0_f_0(void)
#line 92 "instmap.m"
{
#line 453 "instmap.m"
  {
#line 453 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 453 "instmap.m"
    MR_Word hlds__instmap__InstMapDelta_2;
#line 453 "instmap.m"
    MR_Word hlds__instmap__Instmapping_5;

#line 421 "instmap.m"
    {
#line 421 "instmap.m"
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__instmap__Instmapping_5);
    }
#line 420 "instmap.m"
    {
#line 420 "instmap.m"
      hlds__instmap__InstMapDelta_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 420 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_2, 0) = ((MR_Box) (hlds__instmap__Instmapping_5));
#line 420 "instmap.m"
    }
#line 453 "instmap.m"
    return hlds__instmap__InstMapDelta_2;
#line 453 "instmap.m"
  }
#line 92 "instmap.m"
}

#line 89 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_from_mode_list_4_p_0(
#line 89 "instmap.m"
  MR_Word hlds__instmap__Var_5,
#line 89 "instmap.m"
  MR_Word hlds__instmap__Modes_6,
#line 89 "instmap.m"
  MR_Word hlds__instmap__ModuleInfo_7,
#line 89 "instmap.m"
  MR_Word * hlds__instmap__InstMapDelta_8)
#line 89 "instmap.m"
{
#line 430 "instmap.m"
  {
#line 430 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 430 "instmap.m"
    MR_Word hlds__instmap__InstMapDelta0_9;
#line 430 "instmap.m"
    MR_Word hlds__instmap__InstMapping_10;

#line 401 "instmap.m"
    {
#line 401 "instmap.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &hlds__instmap__InstMapping_10);
    }
#line 400 "instmap.m"
    {
#line 400 "instmap.m"
      hlds__instmap__InstMapDelta0_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 400 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta0_9, 0) = ((MR_Box) (hlds__instmap__InstMapping_10));
#line 400 "instmap.m"
    }
#line 432 "instmap.m"
    {
#line 432 "instmap.m"
      hlds__instmap__instmap_delta_from_mode_list_2_5_p_0(hlds__instmap__Var_5, hlds__instmap__Modes_6, hlds__instmap__ModuleInfo_7, hlds__instmap__InstMapDelta0_9, hlds__instmap__InstMapDelta_8);
    }
#line 430 "instmap.m"
  }
#line 89 "instmap.m"
}

#line 86 "instmap.m"
MR_Word MR_CALL 
hlds__instmap__instmap_delta_from_assoc_list_1_f_0(
#line 86 "instmap.m"
  MR_Word hlds__instmap__AL_3)
#line 86 "instmap.m"
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
#line 86 "instmap.m"
}

#line 83 "instmap.m"
MR_Word MR_CALL 
hlds__instmap__instmap_from_assoc_list_1_f_0(
#line 83 "instmap.m"
  MR_Word hlds__instmap__AL_3)
#line 83 "instmap.m"
{
#line 417 "instmap.m"
  {
#line 417 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 417 "instmap.m"
    MR_Word hlds__instmap__HeadVar__2_2;
#line 417 "instmap.m"
    MR_Word hlds__instmap__Instmapping_4;

#line 418 "instmap.m"
    {
#line 418 "instmap.m"
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__AL_3, &hlds__instmap__Instmapping_4);
    }
#line 417 "instmap.m"
    {
#line 417 "instmap.m"
      hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 417 "instmap.m"
      MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, 0) = ((MR_Box) (hlds__instmap__Instmapping_4));
#line 417 "instmap.m"
    }
#line 417 "instmap.m"
    return hlds__instmap__HeadVar__2_2;
#line 417 "instmap.m"
  }
#line 83 "instmap.m"
}

#line 81 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__instmap_delta_is_unreachable_1_p_0(
#line 81 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1)
#line 81 "instmap.m"
{
#line 413 "instmap.m"
  {
#line 413 "instmap.m"
    MR_bool hlds__instmap__succeeded = (hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 413 "instmap.m"
    return hlds__instmap__succeeded;
#line 413 "instmap.m"
  }
#line 81 "instmap.m"
}

#line 77 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__instmap_delta_is_reachable_1_p_0(
#line 77 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1)
#line 77 "instmap.m"
{
#line 411 "instmap.m"
  {
#line 411 "instmap.m"
    MR_bool hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 411 "instmap.m"
    MR_Word hlds__instmap__V_2_2;

#line 411 "instmap.m"
    if (hlds__instmap__succeeded)
#line 411 "instmap.m"
      hlds__instmap__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
#line 411 "instmap.m"
    return hlds__instmap__succeeded;
#line 411 "instmap.m"
  }
#line 77 "instmap.m"
}

#line 69 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__instmap_is_unreachable_1_p_0(
#line 69 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1)
#line 69 "instmap.m"
{
#line 409 "instmap.m"
  {
#line 409 "instmap.m"
    MR_bool hlds__instmap__succeeded = (hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 409 "instmap.m"
    return hlds__instmap__succeeded;
#line 409 "instmap.m"
  }
#line 69 "instmap.m"
}

#line 65 "instmap.m"
MR_bool MR_CALL 
hlds__instmap__instmap_is_reachable_1_p_0(
#line 65 "instmap.m"
  MR_Word hlds__instmap__HeadVar__1_1)
#line 65 "instmap.m"
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
#line 65 "instmap.m"
}

#line 57 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_init_unreachable_1_p_0(
#line 57 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1)
#line 57 "instmap.m"
{
#line 403 "instmap.m"
  {
#line 403 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 403 "instmap.m"
    *hlds__instmap__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 403 "instmap.m"
  }
#line 57 "instmap.m"
}

#line 53 "instmap.m"
void MR_CALL 
hlds__instmap__instmap_delta_init_reachable_1_p_0(
#line 53 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1)
#line 53 "instmap.m"
{
#line 400 "instmap.m"
  {
#line 400 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 400 "instmap.m"
    MR_Word hlds__instmap__InstMapping_2;

#line 401 "instmap.m"
    {
#line 401 "instmap.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &hlds__instmap__InstMapping_2);
    }
#line 400 "instmap.m"
    {
#line 400 "instmap.m"
      MR_Word base;
#line 400 "instmap.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 400 "instmap.m"
      *hlds__instmap__HeadVar__1_1 = base;
#line 400 "instmap.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_2));
#line 400 "instmap.m"
    }
#line 400 "instmap.m"
  }
#line 53 "instmap.m"
}

#line 49 "instmap.m"
void MR_CALL 
hlds__instmap__init_unreachable_1_p_0(
#line 49 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1)
#line 49 "instmap.m"
{
#line 398 "instmap.m"
  {
#line 398 "instmap.m"
    MR_bool hlds__instmap__succeeded;

#line 398 "instmap.m"
    *hlds__instmap__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 398 "instmap.m"
  }
#line 49 "instmap.m"
}

#line 45 "instmap.m"
void MR_CALL 
hlds__instmap__init_reachable_1_p_0(
#line 45 "instmap.m"
  MR_Word * hlds__instmap__HeadVar__1_1)
#line 45 "instmap.m"
{
#line 395 "instmap.m"
  {
#line 395 "instmap.m"
    MR_bool hlds__instmap__succeeded;
#line 395 "instmap.m"
    MR_Word hlds__instmap__InstMapping_2;

#line 396 "instmap.m"
    {
#line 396 "instmap.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &hlds__instmap__InstMapping_2);
    }
#line 395 "instmap.m"
    {
#line 395 "instmap.m"
      MR_Word base;
#line 395 "instmap.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 395 "instmap.m"
      *hlds__instmap__HeadVar__1_1 = base;
#line 395 "instmap.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_2));
#line 395 "instmap.m"
    }
#line 395 "instmap.m"
  }
#line 45 "instmap.m"
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
