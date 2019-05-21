/*
** Automatically generated from `instmap.m'
** by the Mercury compiler,
** version rotd-2017-07-11
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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_VA_PseudoTypeInfo_Struct0 hlds__instmap____vpti_pred_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_arm_instmap_0_0[2];

static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_arm_instmap_0_0;

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_arm_instmap_0_0[1];

static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_arm_instmap_0[1];

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_arm_instmap_0[1];

static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_arm_instmap_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__instmap__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_instmap_0_0[1];

static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_0;

static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_1;

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_0[1];

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_1[1];

static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_instmap_0[2];

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_instmap_0[2];

static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_instmap_0[2];

static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0;

static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1;

static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2;

static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_value_ordered_overlay_how_0[3];

static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_name_ordered_overlay_how_0[3];

static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_overlay_how_0[3];

static MR_bool MR_CALL 
hlds__instmap____Unify____arm_instmap_0_0_10001(
  MR_Box hlds__instmap__wrapper_arg_1,
  MR_Box hlds__instmap__wrapper_arg_2);

static void MR_CALL 
hlds__instmap____Compare____arm_instmap_0_0_10001(
  MR_Box * hlds__instmap__wrapper_arg_1,
  MR_Box hlds__instmap__wrapper_arg_2,
  MR_Box hlds__instmap__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_0_0_10001(
  MR_Box hlds__instmap__wrapper_arg_1,
  MR_Box hlds__instmap__wrapper_arg_2);

static void MR_CALL 
hlds__instmap____Compare____instmap_0_0_10001(
  MR_Box * hlds__instmap__wrapper_arg_1,
  MR_Box hlds__instmap__wrapper_arg_2,
  MR_Box hlds__instmap__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_delta_0_0_10001(
  MR_Box hlds__instmap__wrapper_arg_1,
  MR_Box hlds__instmap__wrapper_arg_2);

static void MR_CALL 
hlds__instmap____Compare____instmap_delta_0_0_10001(
  MR_Box * hlds__instmap__wrapper_arg_1,
  MR_Box hlds__instmap__wrapper_arg_2,
  MR_Box hlds__instmap__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0_10001(
  MR_Box hlds__instmap__wrapper_arg_1,
  MR_Box hlds__instmap__wrapper_arg_2);

static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0_10001(
  MR_Box * hlds__instmap__wrapper_arg_1,
  MR_Box hlds__instmap__wrapper_arg_2,
  MR_Box hlds__instmap__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__instmap____Unify____overlay_how_0_0_10001(
  MR_Box hlds__instmap__wrapper_arg_1,
  MR_Box hlds__instmap__wrapper_arg_2);

static void MR_CALL 
hlds__instmap____Compare____overlay_how_0_0_10001(
  MR_Box * hlds__instmap__wrapper_arg_1,
  MR_Box hlds__instmap__wrapper_arg_2,
  MR_Box hlds__instmap__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__637__1_2_p_0(
  MR_Word hlds__instmap__Inst_10,
  MR_Word hlds__instmap__HeadVar__2_20);

static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__615__1_2_p_0(
  MR_Word hlds__instmap__Inst_8,
  MR_Word hlds__instmap__HeadVar__2_19);

static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__680__1_2_p_0(
  MR_Word hlds__instmap__Inst_5,
  MR_Word hlds__instmap__HeadVar__2_17);

static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__651__1_2_p_0(
  MR_Word hlds__instmap__Inst_5,
  MR_Word hlds__instmap__HeadVar__2_17);

static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0(
  MR_Word * hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2);

static MR_bool MR_CALL 
hlds__instmap__var_is_not_output_5_p_0(
  MR_Word hlds__instmap__ModuleInfo_6,
  MR_Word hlds__instmap__VarTypes_7,
  MR_Word hlds__instmap__InstMap0_8,
  MR_Word hlds__instmap__InstMapDeltaMap_9,
  MR_Word hlds__instmap__Var_10);

static void MR_CALL 
hlds__instmap__arm_instmap_project_context_2_p_0(
  MR_Word hlds__instmap__ArmErrorInfo_3,
  MR_Word * hlds__instmap__Context_4);

static void MR_CALL 
hlds__instmap__lookup_var_in_arm_instmap_3_p_0(
  MR_Word hlds__instmap__Var_4,
  MR_Word hlds__instmap__ArmInstMap_5,
  MR_Word * hlds__instmap__Inst_6);

static void MR_CALL 
hlds__instmap__instmap_bound_vars_2_5_p_0(
  MR_Word hlds__instmap__ModuleInfo_6,
  MR_Word hlds__instmap__Var_7,
  MR_Word hlds__instmap__Inst_8,
  MR_Word hlds__instmap__STATE_VARIABLE_BoundVars_0_10,
  MR_Word * hlds__instmap__STATE_VARIABLE_BoundVars_11);

static MR_Word MR_CALL 
hlds__instmap__pair_with_ground_1_f_0(
  MR_Word hlds__instmap__Var_3);

static void MR_CALL 
hlds__instmap__instmap_delta_apply_sub_2_5_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__HeadVar__3_3,
  MR_Word hlds__instmap__STATE_VARIABLE_Instmapping_0_4,
  MR_Word * hlds__instmap__STATE_VARIABLE_Instmapping_5);

static void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__InstMappingA_3,
  MR_Word hlds__instmap__InstMappingB_4,
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_5,
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_6,
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_8);

static void MR_CALL 
hlds__instmap__merge_instmap_deltas_2_8_p_0(
  MR_Word hlds__instmap__InstMap_9,
  MR_Word hlds__instmap__NonLocals_10,
  MR_Word hlds__instmap__VarTypes_11,
  MR_Word hlds__instmap__Deltas_12,
  MR_Word hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24,
  MR_Word * hlds__instmap__STATE_VARIABLE_MergedDeltas_25,
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_27);

static void MR_CALL 
hlds__instmap__merge_instmapping_delta_2_9_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__InstMap_2,
  MR_Word hlds__instmap__VarTypes_3,
  MR_Word hlds__instmap__InstMappingA_4,
  MR_Word hlds__instmap__InstMappingB_5,
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_6,
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_7,
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_9);

static MR_bool MR_CALL 
hlds__instmap__instmap_delta_no_output_vars_5_p_0_1(
  MR_Box hlds__instmap__closure_arg,
  MR_Box hlds__instmap__wrapper_arg_1);

static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_2(
  MR_Box hlds__instmap__closure_arg,
  MR_Box hlds__instmap__wrapper_arg_1,
  MR_Box * hlds__instmap__wrapper_arg_2);

static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_1(
  MR_Box hlds__instmap__closure_arg,
  MR_Box hlds__instmap__wrapper_arg_1,
  MR_Box * hlds__instmap__wrapper_arg_2);

static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__ArmInstMaps_2,
  MR_Word hlds__instmap__VarTypes_3,
  MR_Word hlds__instmap__HeadVar__4_4,
  MR_Word * hlds__instmap__HeadVar__5_5,
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_7,
  MR_Word * hlds__instmap__HeadVar__8_8);

static void MR_CALL 
hlds__instmap__get_reachable_instmaps_2_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word * hlds__instmap__HeadVar__2_2);

static void MR_CALL 
hlds__instmap__compute_instmap_delta_for_vars_4_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__InstMappingA_2,
  MR_Word hlds__instmap__InstMappingB_3,
  MR_Word * hlds__instmap__HeadVar__4_4);

static void MR_CALL 
hlds__instmap__merge_var_insts_5_p_0(
  MR_Word hlds__instmap__Insts_6,
  MR_Word hlds__instmap__MaybeType_7,
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_17,
  MR_Word * hlds__instmap__MaybeMergedInst_9);

static void MR_CALL 
hlds__instmap__merge_var_insts_pass_8_p_0(
  MR_Word hlds__instmap__Insts_9,
  MR_Word hlds__instmap__MaybeType_10,
  MR_Word hlds__instmap__STATE_VARIABLE_MergedInsts_0_23,
  MR_Word * hlds__instmap__STATE_VARIABLE_MergedInsts_24,
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_26,
  MR_Word hlds__instmap__STATE_VARIABLE_Error_0_27,
  MR_Word * hlds__instmap__STATE_VARIABLE_Error_28);

static void MR_CALL 
hlds__instmap__bind_inst_to_functors_others_6_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__HeadVar__3_3,
  MR_Word * hlds__instmap__HeadVar__4_4,
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_6);

static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_2(
  MR_Box hlds__instmap__closure_arg);

static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_1(
  MR_Box hlds__instmap__closure_arg);

static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_2(
  MR_Box hlds__instmap__closure_arg);

static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_1(
  MR_Box hlds__instmap__closure_arg);

static void MR_CALL 
hlds__instmap__instmapping_set_vars_same_4_p_0(
  MR_Word hlds__instmap__Inst_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_3,
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_4);

static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_2(
  MR_Box hlds__instmap__closure_arg);

static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_1(
  MR_Box hlds__instmap__closure_arg);

static void MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__HeadVar__3_3,
  MR_Word * hlds__instmap__HeadVar__4_4);

static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_2(
  MR_Box hlds__instmap__closure_arg);

static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_1(
  MR_Box hlds__instmap__closure_arg);

static void MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_2,
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_3);

static void MR_CALL 
hlds__instmap__instmap_changed_vars_2_6_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__HeadVar__3_3,
  MR_Word hlds__instmap__HeadVar__4_4,
  MR_Word hlds__instmap__HeadVar__5_5,
  MR_Word * hlds__instmap__ChangedVars_6);

static void MR_CALL 
hlds__instmap__instmap_bound_vars_3_p_0_1(
  MR_Box hlds__instmap__closure_arg,
  MR_Box hlds__instmap__wrapper_arg_1,
  MR_Box hlds__instmap__wrapper_arg_2,
  MR_Box hlds__instmap__wrapper_arg_3,
  MR_Box * hlds__instmap__wrapper_arg_4);

static MR_Box MR_CALL 
hlds__instmap__instmap_delta_bind_vars_1_f_0_1(
  MR_Box hlds__instmap__closure_arg,
  MR_Box hlds__instmap__wrapper_arg_1);

static void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_102_114_111_109_95_102_114_111_109_95_116_111_95_105_110_115_116_115_95_108_105_115_116_95_50_95_95_91_49_93_95_48_5_p_0(
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__HeadVar__3_3,
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4,
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapDelta_5);

static void MR_CALL 
hlds__instmap__instmap_delta_from_mode_list_2_5_p_0(
  MR_Word hlds__instmap__ModuleInfo_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__HeadVar__3_3,
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4,
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapDelta_5);


static /* final */ const MR_Box hlds__instmap_scalar_common_1[2][2];

static /* final */ const MR_Box hlds__instmap_scalar_common_2[5][3];

static /* final */ const MR_Box hlds__instmap_scalar_common_3[3][5];

static /* final */ const MR_Box hlds__instmap_scalar_common_4[2][8];

static /* final */ const MR_Box hlds__instmap_scalar_common_5[1][4];

static /* final */ const MR_Box hlds__instmap_scalar_common_6[2][1];

static /* final */ const MR_Box hlds__instmap_scalar_common_7[1][6];




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

static /* final */ const MR_Box hlds__instmap_scalar_common_6[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box hlds__instmap_scalar_common_7[1][6] = {
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__instmap__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct0 hlds__instmap____vpti_pred_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 0,
  { 0 }

};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__instmap__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_arm_instmap_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_arm_instmap_0_0[1] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_arm_instmap_0_0
};

static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_arm_instmap_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__instmap__hlds__instmap__du_stag_ordered_arm_instmap_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_arm_instmap_0[1] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_arm_instmap_0_0
};

static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_arm_instmap_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__instmap__hlds__instmap__type_ctor_info_arm_instmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_FA_TypeInfo_Struct2 hlds__instmap__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__instmap__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

static const MR_PseudoTypeInfo hlds__instmap__hlds__instmap__field_types_instmap_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__instmap__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_0[1] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_1
};

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_1[1] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_0
};

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

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_name_ordered_instmap_0[2] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_0,
  &hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_1
};

static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_instmap_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__instmap__hlds__instmap__type_ctor_info_instmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

const MR_TypeCtorInfo_Struct hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

const MR_TypeCtorInfo_Struct hlds__instmap__hlds__instmap__type_ctor_info_instmapping_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0 = {
  (MR_String) "large_base",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1 = {
  (MR_String) "large_overlay",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2 = {
  (MR_String) "test_size",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_value_ordered_overlay_how_0[3] = {
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2
};

static const MR_EnumFunctorDescPtr hlds__instmap__hlds__instmap__enum_name_ordered_overlay_how_0[3] = {
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_0,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_1,
  &hlds__instmap__hlds__instmap__enum_functor_desc_overlay_how_0_2
};

static const MR_Integer hlds__instmap__hlds__instmap__functor_number_map_overlay_how_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct hlds__instmap__hlds__instmap__type_ctor_info_overlay_how_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static MR_bool MR_CALL 
hlds__instmap____Unify____arm_instmap_0_0_10001(
  MR_Box hlds__instmap__wrapper_arg_1,
  MR_Box hlds__instmap__wrapper_arg_2)
{
  {
    MR_bool hlds__instmap__succeeded;

    {
      hlds__instmap__succeeded = hlds__instmap____Unify____arm_instmap_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
    return hlds__instmap__succeeded;
  }
}

static void MR_CALL 
hlds__instmap____Compare____arm_instmap_0_0_10001(
  MR_Box * hlds__instmap__wrapper_arg_1,
  MR_Box hlds__instmap__wrapper_arg_2,
  MR_Box hlds__instmap__wrapper_arg_3)
{
  {
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

    {
      hlds__instmap____Compare____arm_instmap_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_0_0_10001(
  MR_Box hlds__instmap__wrapper_arg_1,
  MR_Box hlds__instmap__wrapper_arg_2)
{
  {
    MR_bool hlds__instmap__succeeded;

    {
      hlds__instmap__succeeded = hlds__instmap____Unify____instmap_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
    return hlds__instmap__succeeded;
  }
}

static void MR_CALL 
hlds__instmap____Compare____instmap_0_0_10001(
  MR_Box * hlds__instmap__wrapper_arg_1,
  MR_Box hlds__instmap__wrapper_arg_2,
  MR_Box hlds__instmap__wrapper_arg_3)
{
  {
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

    {
      hlds__instmap____Compare____instmap_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_delta_0_0_10001(
  MR_Box hlds__instmap__wrapper_arg_1,
  MR_Box hlds__instmap__wrapper_arg_2)
{
  {
    MR_bool hlds__instmap__succeeded;

    {
      hlds__instmap__succeeded = hlds__instmap____Unify____instmap_delta_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
    return hlds__instmap__succeeded;
  }
}

static void MR_CALL 
hlds__instmap____Compare____instmap_delta_0_0_10001(
  MR_Box * hlds__instmap__wrapper_arg_1,
  MR_Box hlds__instmap__wrapper_arg_2,
  MR_Box hlds__instmap__wrapper_arg_3)
{
  {
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

    {
      hlds__instmap____Compare____instmap_delta_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0_10001(
  MR_Box hlds__instmap__wrapper_arg_1,
  MR_Box hlds__instmap__wrapper_arg_2)
{
  {
    MR_bool hlds__instmap__succeeded;

    {
      hlds__instmap__succeeded = hlds__instmap____Unify____instmapping_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
    return hlds__instmap__succeeded;
  }
}

static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0_10001(
  MR_Box * hlds__instmap__wrapper_arg_1,
  MR_Box hlds__instmap__wrapper_arg_2,
  MR_Box hlds__instmap__wrapper_arg_3)
{
  {
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

    {
      hlds__instmap____Compare____instmapping_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__instmap____Unify____overlay_how_0_0_10001(
  MR_Box hlds__instmap__wrapper_arg_1,
  MR_Box hlds__instmap__wrapper_arg_2)
{
  {
    MR_bool hlds__instmap__succeeded;

    {
      hlds__instmap__succeeded = hlds__instmap____Unify____overlay_how_0_0(((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2));
    }
    return hlds__instmap__succeeded;
  }
}

static void MR_CALL 
hlds__instmap____Compare____overlay_how_0_0_10001(
  MR_Box * hlds__instmap__wrapper_arg_1,
  MR_Box hlds__instmap__wrapper_arg_2,
  MR_Box hlds__instmap__wrapper_arg_3)
{
  {
    MR_Word hlds__instmap__conv0_HeadVar__1_1;

    {
      hlds__instmap____Compare____overlay_how_0_0(&hlds__instmap__conv0_HeadVar__1_1, ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3));
    }
    *hlds__instmap__wrapper_arg_1 = ((MR_Box) (hlds__instmap__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__637__1_2_p_0(
  MR_Word hlds__instmap__Inst_10,
  MR_Word hlds__instmap__HeadVar__2_20)
{
  {
    MR_bool hlds__instmap__succeeded;

    {
      hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst_10, hlds__instmap__HeadVar__2_20);
    }
    return hlds__instmap__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__615__1_2_p_0(
  MR_Word hlds__instmap__Inst_8,
  MR_Word hlds__instmap__HeadVar__2_19)
{
  {
    MR_bool hlds__instmap__succeeded;

    {
      hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst_8, hlds__instmap__HeadVar__2_19);
    }
    return hlds__instmap__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__680__1_2_p_0(
  MR_Word hlds__instmap__Inst_5,
  MR_Word hlds__instmap__HeadVar__2_17)
{
  {
    MR_bool hlds__instmap__succeeded;

    {
      hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst_5, hlds__instmap__HeadVar__2_17);
    }
    return hlds__instmap__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__651__1_2_p_0(
  MR_Word hlds__instmap__Inst_5,
  MR_Word hlds__instmap__HeadVar__2_17)
{
  {
    MR_bool hlds__instmap__succeeded;

    {
      hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__Inst_5, hlds__instmap__HeadVar__2_17);
    }
    return hlds__instmap__succeeded;
  }
}

void MR_CALL 
hlds__instmap____Compare____overlay_how_0_0(
  MR_Word * hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__HeadVar__3_3)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Integer hlds__instmap__Cast_HeadVar1_4 = (MR_Integer) hlds__instmap__HeadVar__2_2;
    MR_Integer hlds__instmap__Cast_HeadVar2_5 = (MR_Integer) hlds__instmap__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__instmap__HeadVar__1_1, hlds__instmap__Cast_HeadVar1_4, hlds__instmap__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__instmap____Unify____overlay_how_0_0(
  MR_Word hlds__instmap__HeadVar__2_1,
  MR_Word hlds__instmap__HeadVar__2_2)
{
  {
    MR_bool hlds__instmap__succeeded = (hlds__instmap__HeadVar__2_1 == hlds__instmap__HeadVar__2_2);

    return hlds__instmap__succeeded;
  }
}

static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0(
  MR_Word * hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__HeadVar__3_3)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__Cast_HeadVar1_4 = hlds__instmap__HeadVar__2_2;
    MR_Word hlds__instmap__Cast_HeadVar2_5 = hlds__instmap__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__instmap_scalar_common_2[1], hlds__instmap__HeadVar__1_1, ((MR_Box) (hlds__instmap__Cast_HeadVar1_4)), ((MR_Box) (hlds__instmap__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__Cast_HeadVar1_3 = hlds__instmap__HeadVar__1_1;
    MR_Word hlds__instmap__Cast_HeadVar2_4 = hlds__instmap__HeadVar__2_2;

    {
      hlds__instmap__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__instmap_scalar_common_2[1], ((MR_Box) (hlds__instmap__Cast_HeadVar1_3)), ((MR_Box) (hlds__instmap__Cast_HeadVar2_4)));
    }
    return hlds__instmap__succeeded;
  }
}

void MR_CALL 
hlds__instmap____Compare____instmap_delta_0_0(
  MR_Word * hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__HeadVar__3_3)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__Cast_HeadVar1_4 = hlds__instmap__HeadVar__2_2;
    MR_Word hlds__instmap__Cast_HeadVar2_5 = hlds__instmap__HeadVar__3_3;

    {
      hlds__instmap____Compare____instmap_0_0(hlds__instmap__HeadVar__1_1, hlds__instmap__Cast_HeadVar1_4, hlds__instmap__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__instmap____Unify____instmap_delta_0_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__Cast_HeadVar1_3 = hlds__instmap__HeadVar__1_1;
    MR_Word hlds__instmap__Cast_HeadVar2_4 = hlds__instmap__HeadVar__2_2;

    {
      hlds__instmap__succeeded = hlds__instmap____Unify____instmap_0_0(hlds__instmap__Cast_HeadVar1_3, hlds__instmap__Cast_HeadVar2_4);
    }
    return hlds__instmap__succeeded;
  }
}

void MR_CALL 
hlds__instmap____Compare____arm_instmap_0_0(
  MR_Word * hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__HeadVar__3_3)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Integer hlds__instmap__CastX_9 = (MR_Integer) hlds__instmap__HeadVar__2_2;
    MR_Integer hlds__instmap__CastY_10 = (MR_Integer) hlds__instmap__HeadVar__3_3;

    hlds__instmap__succeeded = (hlds__instmap__CastX_9 == hlds__instmap__CastY_10);
    if (hlds__instmap__succeeded)
      *hlds__instmap__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__instmap__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__instmap__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__instmap__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__instmap__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__instmap__Var_8;

        {
          mercury__term____Compare____context_0_0(&hlds__instmap__Var_8, hlds__instmap__ArgX1_4, hlds__instmap__ArgY1_5);
        }
        hlds__instmap__succeeded = (hlds__instmap__Var_8 == (MR_Integer) 0);
        hlds__instmap__succeeded = !(hlds__instmap__succeeded);
        if (hlds__instmap__succeeded)
          *hlds__instmap__HeadVar__1_1 = hlds__instmap__Var_8;
        else
          {
            hlds__instmap____Compare____instmap_0_0(hlds__instmap__HeadVar__1_1, hlds__instmap__ArgX2_6, hlds__instmap__ArgY2_7);
          }
      }
  }
}

void MR_CALL 
hlds__instmap____Compare____instmap_0_0(
  MR_Word * hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__HeadVar__3_3)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Integer hlds__instmap__CastX_8 = (MR_Integer) hlds__instmap__HeadVar__2_2;
    MR_Integer hlds__instmap__CastY_9 = (MR_Integer) hlds__instmap__HeadVar__3_3;

    hlds__instmap__succeeded = (hlds__instmap__CastX_8 == hlds__instmap__CastY_9);
    if (hlds__instmap__succeeded)
      *hlds__instmap__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *hlds__instmap__HeadVar__1_1 = (MR_Integer) 0;
      else
        *hlds__instmap__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_Word hlds__instmap__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));

        if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__instmap__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word hlds__instmap__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__instmap_scalar_common_2[1], hlds__instmap__HeadVar__1_1, ((MR_Box) (hlds__instmap__Var_11)), ((MR_Box) (hlds__instmap__ArgY1_5)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
hlds__instmap____Unify____arm_instmap_0_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Integer hlds__instmap__CastX_7 = (MR_Integer) hlds__instmap__HeadVar__1_1;
    MR_Integer hlds__instmap__CastY_8 = (MR_Integer) hlds__instmap__HeadVar__2_2;

    hlds__instmap__succeeded = (hlds__instmap__CastX_7 == hlds__instmap__CastY_8);
    if (hlds__instmap__succeeded)
      hlds__instmap__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__instmap__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__instmap__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__instmap__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__instmap__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));

        {
          hlds__instmap__succeeded = mercury__term____Unify____context_0_0(hlds__instmap__ArgX1_3, hlds__instmap__ArgY1_4);
        }
        if (hlds__instmap__succeeded)
          {
            hlds__instmap__succeeded = hlds__instmap____Unify____instmap_0_0(hlds__instmap__ArgX2_5, hlds__instmap__ArgY2_6);
          }
      }
    return hlds__instmap__succeeded;
  }
}

MR_bool MR_CALL 
hlds__instmap____Unify____instmap_0_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Integer hlds__instmap__CastX_7 = (MR_Integer) hlds__instmap__HeadVar__1_1;
    MR_Integer hlds__instmap__CastY_8 = (MR_Integer) hlds__instmap__HeadVar__2_2;

    hlds__instmap__succeeded = (hlds__instmap__CastX_7 == hlds__instmap__CastY_8);
    if (hlds__instmap__succeeded)
      hlds__instmap__succeeded = MR_TRUE;
    else
    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer hlds__instmap__CastX_5 = (MR_Integer) hlds__instmap__HeadVar__1_1;
        MR_Integer hlds__instmap__CastY_6 = (MR_Integer) hlds__instmap__HeadVar__2_2;

        hlds__instmap__succeeded = (hlds__instmap__CastY_6 == hlds__instmap__CastX_5);
      }
    else
      {
        MR_Word hlds__instmap__TypeInfo_9_9;
        MR_Word hlds__instmap__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__instmap__ArgY1_4;

        hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__instmap__succeeded)
          {
            hlds__instmap__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
            hlds__instmap__TypeInfo_9_9 = (MR_Word) &hlds__instmap_scalar_common_2[1];
            {
              hlds__instmap__succeeded = mercury__builtin__unify_2_p_0(hlds__instmap__TypeInfo_9_9, ((MR_Box) (hlds__instmap__ArgX1_3)), ((MR_Box) (hlds__instmap__ArgY1_4)));
            }
          }
      }
    return hlds__instmap__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__instmap__var_is_not_output_5_p_0(
  MR_Word hlds__instmap__ModuleInfo_6,
  MR_Word hlds__instmap__VarTypes_7,
  MR_Word hlds__instmap__InstMap0_8,
  MR_Word hlds__instmap__InstMapDeltaMap_9,
  MR_Word hlds__instmap__Var_10)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__OldInst_11;
    MR_Word hlds__instmap__NewInst_12;
    MR_Box hlds__instmap__conv0_NewInst_12;

    {
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap0_8, hlds__instmap__Var_10, &hlds__instmap__OldInst_11);
    }
    {
      hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapDeltaMap_9, ((MR_Box) (hlds__instmap__Var_10)), &hlds__instmap__conv0_NewInst_12);
    }
    if (hlds__instmap__succeeded)
      {
        hlds__instmap__NewInst_12 = ((MR_Word) hlds__instmap__conv0_NewInst_12);
        hlds__instmap__succeeded = MR_TRUE;
      }
    if (hlds__instmap__succeeded)
      {
        MR_Word hlds__instmap__Type_13;

        {
          hlds__vartypes__lookup_var_type_3_p_0(hlds__instmap__VarTypes_7, hlds__instmap__Var_10, &hlds__instmap__Type_13);
        }
        {
          hlds__instmap__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(hlds__instmap__NewInst_12, hlds__instmap__OldInst_11, hlds__instmap__Type_13, hlds__instmap__ModuleInfo_6);
        }
      }
    else
      {
        {
          hlds__instmap__succeeded = check_hlds__inst_util__inst_contains_any_2_p_0(hlds__instmap__ModuleInfo_6, hlds__instmap__OldInst_11);
        }
        hlds__instmap__succeeded = !(hlds__instmap__succeeded);
      }
    return hlds__instmap__succeeded;
  }
}

static void MR_CALL 
hlds__instmap__arm_instmap_project_context_2_p_0(
  MR_Word hlds__instmap__ArmErrorInfo_3,
  MR_Word * hlds__instmap__Context_4)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap___InstMap_5;

    *hlds__instmap__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmErrorInfo_3, (MR_Integer) 0)));
    hlds__instmap___InstMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmErrorInfo_3, (MR_Integer) 1)));
  }
}

static void MR_CALL 
hlds__instmap__lookup_var_in_arm_instmap_3_p_0(
  MR_Word hlds__instmap__Var_4,
  MR_Word hlds__instmap__ArmInstMap_5,
  MR_Word * hlds__instmap__Inst_6)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__InstMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmInstMap_5, (MR_Integer) 1)));
    MR_Word hlds__instmap__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmInstMap_5, (MR_Integer) 0)));

    {
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_8, hlds__instmap__Var_4, hlds__instmap__Inst_6);
    }
  }
}

static void MR_CALL 
hlds__instmap__instmap_bound_vars_2_5_p_0(
  MR_Word hlds__instmap__ModuleInfo_6,
  MR_Word hlds__instmap__Var_7,
  MR_Word hlds__instmap__Inst_8,
  MR_Word hlds__instmap__STATE_VARIABLE_BoundVars_0_10,
  MR_Word * hlds__instmap__STATE_VARIABLE_BoundVars_11)
{
  {
    MR_bool hlds__instmap__succeeded;

    {
      hlds__instmap__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(hlds__instmap__ModuleInfo_6, hlds__instmap__Inst_8);
    }
    if (hlds__instmap__succeeded)
      {
        {
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Var_7, hlds__instmap__STATE_VARIABLE_BoundVars_0_10, hlds__instmap__STATE_VARIABLE_BoundVars_11);
        }
      }
    else
      *hlds__instmap__STATE_VARIABLE_BoundVars_11 = hlds__instmap__STATE_VARIABLE_BoundVars_0_10;
  }
}

static MR_Word MR_CALL 
hlds__instmap__pair_with_ground_1_f_0(
  MR_Word hlds__instmap__Var_3)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__HeadVar__2_2;

    {
      hlds__instmap__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, 0) = ((MR_Box) (hlds__instmap__Var_3));
      MR_hl_field(MR_mktag(0), hlds__instmap__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__instmap_scalar_common_2[2])));
    }
    return hlds__instmap__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
hlds__instmap__var_is_bound_in_instmap_delta_4_p_0(
  MR_Word hlds__instmap__ModuleInfo_5,
  MR_Word hlds__instmap__InstMap_6,
  MR_Word hlds__instmap__InstMapDelta_7,
  MR_Word hlds__instmap__Var_8)
{
  {
    MR_bool hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__InstMap_6)) == (MR_mktag((MR_Integer) 1)));
    MR_Word hlds__instmap__TypeInfo_8_17;
    MR_Word hlds__instmap__TypeCtorInfo_9_18;
    MR_Word hlds__instmap__OldVarInst_9;
    MR_Word hlds__instmap__VarInst_10;
    MR_Word hlds__instmap__InstMap_14;
    MR_Word hlds__instmap__InstMap_20;
    MR_Word hlds__instmap__Var_12;
    MR_Word hlds__instmap__VarInst_26;
    MR_Word hlds__instmap__TypeInfo_8_27;
    MR_Word hlds__instmap__TypeCtorInfo_9_28;
    MR_Box hlds__instmap__conv0_VarInst_26;
    MR_Box hlds__instmap__conv1_VarInst_10;

    if (hlds__instmap__succeeded)
      {
        hlds__instmap__InstMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap_6, (MR_Integer) 0)));
        hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__InstMapDelta_7)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__instmap__succeeded)
          {
            hlds__instmap__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_7, (MR_Integer) 0)));
            hlds__instmap__TypeInfo_8_27 = (MR_Word) &hlds__instmap_scalar_common_1[0];
            hlds__instmap__TypeCtorInfo_9_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
            {
              hlds__instmap__succeeded = mercury__map__search_3_p_0(hlds__instmap__TypeInfo_8_27, hlds__instmap__TypeCtorInfo_9_28, hlds__instmap__InstMap_20, ((MR_Box) (hlds__instmap__Var_8)), &hlds__instmap__conv0_VarInst_26);
            }
            if (hlds__instmap__succeeded)
              {
                hlds__instmap__VarInst_26 = ((MR_Word) hlds__instmap__conv0_VarInst_26);
                hlds__instmap__succeeded = MR_TRUE;
              }
            if (hlds__instmap__succeeded)
              hlds__instmap__OldVarInst_9 = hlds__instmap__VarInst_26;
            else
              hlds__instmap__OldVarInst_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              hlds__instmap__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(hlds__instmap__ModuleInfo_5, hlds__instmap__OldVarInst_9);
            }
            if (hlds__instmap__succeeded)
              {
                hlds__instmap__InstMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_7, (MR_Integer) 0)));
                hlds__instmap__TypeInfo_8_17 = (MR_Word) &hlds__instmap_scalar_common_1[0];
                hlds__instmap__TypeCtorInfo_9_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
                {
                  hlds__instmap__succeeded = mercury__map__search_3_p_0(hlds__instmap__TypeInfo_8_17, hlds__instmap__TypeCtorInfo_9_18, hlds__instmap__InstMap_14, ((MR_Box) (hlds__instmap__Var_8)), &hlds__instmap__conv1_VarInst_10);
                }
                if (hlds__instmap__succeeded)
                  {
                    hlds__instmap__VarInst_10 = ((MR_Word) hlds__instmap__conv1_VarInst_10);
                    hlds__instmap__succeeded = MR_TRUE;
                  }
                if (hlds__instmap__succeeded)
                  {
                    hlds__instmap__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(hlds__instmap__ModuleInfo_5, hlds__instmap__VarInst_10);
                  }
              }
          }
      }
    return hlds__instmap__succeeded;
  }
}

MR_bool MR_CALL 
hlds__instmap__var_is_any_in_instmap_3_p_0(
  MR_Word hlds__instmap__ModuleInfo_4,
  MR_Word hlds__instmap__InstMap_5,
  MR_Word hlds__instmap__Var_6)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__Inst_7;

    {
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_5, hlds__instmap__Var_6, &hlds__instmap__Inst_7);
    }
    {
      hlds__instmap__succeeded = check_hlds__inst_test__inst_is_any_2_p_0(hlds__instmap__ModuleInfo_4, hlds__instmap__Inst_7);
    }
    return hlds__instmap__succeeded;
  }
}

MR_bool MR_CALL 
hlds__instmap__var_is_ground_in_instmap_3_p_0(
  MR_Word hlds__instmap__ModuleInfo_4,
  MR_Word hlds__instmap__InstMap_5,
  MR_Word hlds__instmap__Var_6)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__Inst_7;

    {
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_5, hlds__instmap__Var_6, &hlds__instmap__Inst_7);
    }
    {
      hlds__instmap__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(hlds__instmap__ModuleInfo_4, hlds__instmap__Inst_7);
    }
    return hlds__instmap__succeeded;
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_map_foldl_5_p_0(
  MR_Word hlds__instmap__TypeInfo_for_T_17,
  MR_Word hlds__instmap__P_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word * hlds__instmap__HeadVar__3_3,
  MR_Box hlds__instmap__STATE_VARIABLE_T_0_4,
  MR_Box * hlds__instmap__STATE_VARIABLE_T_5)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__instmap__STATE_VARIABLE_T_5 = hlds__instmap__STATE_VARIABLE_T_0_4;
      }
    else
      {
        MR_Word hlds__instmap__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
        MR_Word hlds__instmap__Instmapping0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__instmap__Instmapping_12;

        {
          mercury__map__map_foldl_5_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], hlds__instmap__TypeCtorInfo_19_19, hlds__instmap__TypeCtorInfo_19_19, hlds__instmap__TypeInfo_for_T_17, hlds__instmap__P_1, hlds__instmap__Instmapping0_11, &hlds__instmap__Instmapping_12, hlds__instmap__STATE_VARIABLE_T_0_4, hlds__instmap__STATE_VARIABLE_T_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *hlds__instmap__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Instmapping_12));
        }
      }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_to_assoc_list_2_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word * hlds__instmap__HeadVar__2_2)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__instmap__InstMapping_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

        {
          mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_3, hlds__instmap__HeadVar__2_2);
        }
      }
  }
}

void MR_CALL 
hlds__instmap__instmap_to_assoc_list_2_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word * hlds__instmap__HeadVar__2_2)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__instmap__InstMapping_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

        {
          mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_3, hlds__instmap__HeadVar__2_2);
        }
      }
  }
}

void MR_CALL 
hlds__instmap__instmap_apply_sub_4_p_0(
  MR_Word hlds__instmap__Must_5,
  MR_Word hlds__instmap__Renaming_6,
  MR_Word hlds__instmap__InstMap0_7,
  MR_Word * hlds__instmap__InstMap_8)
{
  {
    MR_bool hlds__instmap__succeeded;

    {
      hlds__instmap__instmap_delta_apply_sub_4_p_0(hlds__instmap__Must_5, hlds__instmap__Renaming_6, hlds__instmap__InstMap0_7, hlds__instmap__InstMap_8);
    }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_apply_sub_4_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__HeadVar__3_3,
  MR_Word * hlds__instmap__HeadVar__4_4)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__instmap__TypeInfo_13_13 = (MR_Word) &hlds__instmap_scalar_common_1[0];
        MR_Word hlds__instmap__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
        MR_Word hlds__instmap__OldInstMapping_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__instmap__InstMapping_10;
        MR_Word hlds__instmap__InstMappingAL_11;
        MR_Word hlds__instmap__Var_12;

        {
          mercury__map__to_assoc_list_2_p_0(hlds__instmap__TypeInfo_13_13, hlds__instmap__TypeCtorInfo_14_14, hlds__instmap__OldInstMapping_9, &hlds__instmap__InstMappingAL_11);
        }
        {
          hlds__instmap__Var_12 = mercury__map__init_0_f_0(hlds__instmap__TypeInfo_13_13, hlds__instmap__TypeCtorInfo_14_14);
        }
        {
          hlds__instmap__instmap_delta_apply_sub_2_5_p_0(hlds__instmap__InstMappingAL_11, hlds__instmap__HeadVar__1_1, hlds__instmap__HeadVar__2_2, hlds__instmap__Var_12, &hlds__instmap__InstMapping_10);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *hlds__instmap__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_10));
        }
      }
  }
}

static void MR_CALL 
hlds__instmap__instmap_delta_apply_sub_2_5_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__HeadVar__3_3,
  MR_Word hlds__instmap__STATE_VARIABLE_Instmapping_0_4,
  MR_Word * hlds__instmap__STATE_VARIABLE_Instmapping_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__instmap__succeeded;

        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__instmap__STATE_VARIABLE_Instmapping_5 = hlds__instmap__STATE_VARIABLE_Instmapping_0_4;
        else
          {
            MR_Word hlds__instmap__Var0_11;
            MR_Word hlds__instmap__Inst_12;
            MR_Word hlds__instmap__VarInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__instmap__Var_17;
            MR_Word hlds__instmap__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__instmap__STATE_VARIABLE_Instmapping_21_21;

            hlds__instmap__Var0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__Var_20, (MR_Integer) 0)));
            hlds__instmap__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__Var_20, (MR_Integer) 1)));
            {
              parse_tree__prog_rename__rename_var_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__HeadVar__2_2, hlds__instmap__HeadVar__3_3, hlds__instmap__Var0_11, &hlds__instmap__Var_17);
            }
            {
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_17)), ((MR_Box) (hlds__instmap__Inst_12)), hlds__instmap__STATE_VARIABLE_Instmapping_0_4, &hlds__instmap__STATE_VARIABLE_Instmapping_21_21);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__instmap__next_value_of_HeadVar__1_1 = hlds__instmap__VarInsts0_13;
              MR_Word hlds__instmap__next_value_of_STATE_VARIABLE_Instmapping_0_4 = hlds__instmap__STATE_VARIABLE_Instmapping_21_21;

              hlds__instmap__STATE_VARIABLE_Instmapping_0_4 = hlds__instmap__next_value_of_STATE_VARIABLE_Instmapping_0_4;
              hlds__instmap__HeadVar__1_1 = hlds__instmap__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
hlds__instmap__unify_instmap_delta_7_p_0(
  MR_Word hlds__instmap__InstMap_1,
  MR_Word hlds__instmap__NonLocals_2,
  MR_Word hlds__instmap__HeadVar__3_3,
  MR_Word hlds__instmap__HeadVar__4_4,
  MR_Word * hlds__instmap__HeadVar__5_5,
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_7)
{
  {
    MR_bool hlds__instmap__succeeded;

    {
      hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_p_0(hlds__instmap__NonLocals_2, hlds__instmap__HeadVar__3_3, hlds__instmap__HeadVar__4_4, hlds__instmap__HeadVar__5_5, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6, hlds__instmap__STATE_VARIABLE_ModuleInfo_7);
    }
  }
}

void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_p_0(
  MR_Word hlds__instmap__NonLocals_2,
  MR_Word hlds__instmap__HeadVar__3_3,
  MR_Word hlds__instmap__HeadVar__4_4,
  MR_Word * hlds__instmap__HeadVar__5_5,
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_7)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__instmap__HeadVar__5_5 = hlds__instmap__HeadVar__4_4;
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6;
      }
    else
      {
        MR_Word hlds__instmap__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));

        if ((hlds__instmap__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__instmap__HeadVar__5_5 = hlds__instmap__HeadVar__3_3;
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6;
          }
        else
          {
            MR_Word hlds__instmap__TypeInfo_24_46 = (MR_Word) &hlds__instmap_scalar_common_1[0];
            MR_Word hlds__instmap__TypeCtorInfo_25_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
            MR_Word hlds__instmap__TypeCtorInfo_26_48;
            MR_Word hlds__instmap__InstMappingB_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word hlds__instmap__InstMapping_24;
            MR_Word hlds__instmap__VarsInA_38;
            MR_Word hlds__instmap__VarsInB_39;
            MR_Word hlds__instmap__SetofVarsInA_40;
            MR_Word hlds__instmap__SetofVars0_41;
            MR_Word hlds__instmap__SetofVars_42;
            MR_Word hlds__instmap__ListofVars_43;
            MR_Word hlds__instmap__Var_44;

            {
              mercury__map__keys_2_p_0(hlds__instmap__TypeInfo_24_46, hlds__instmap__TypeCtorInfo_25_47, hlds__instmap__Var_29, &hlds__instmap__VarsInA_38);
            }
            {
              mercury__map__keys_2_p_0(hlds__instmap__TypeInfo_24_46, hlds__instmap__TypeCtorInfo_25_47, hlds__instmap__InstMappingB_23, &hlds__instmap__VarsInB_39);
            }
            hlds__instmap__TypeCtorInfo_26_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              parse_tree__set_of_var__sorted_list_to_set_2_p_0(hlds__instmap__TypeCtorInfo_26_48, hlds__instmap__VarsInA_38, &hlds__instmap__SetofVarsInA_40);
            }
            {
              parse_tree__set_of_var__insert_list_3_p_0(hlds__instmap__TypeCtorInfo_26_48, hlds__instmap__VarsInB_39, hlds__instmap__SetofVarsInA_40, &hlds__instmap__SetofVars0_41);
            }
            {
              parse_tree__set_of_var__intersect_3_p_0(hlds__instmap__TypeCtorInfo_26_48, hlds__instmap__SetofVars0_41, hlds__instmap__NonLocals_2, &hlds__instmap__SetofVars_42);
            }
            {
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__instmap__TypeCtorInfo_26_48, hlds__instmap__SetofVars_42, &hlds__instmap__ListofVars_43);
            }
            {
              hlds__instmap__Var_44 = mercury__map__init_0_f_0(hlds__instmap__TypeInfo_24_46, hlds__instmap__TypeCtorInfo_25_47);
            }
            {
              hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_p_0(hlds__instmap__ListofVars_43, hlds__instmap__Var_29, hlds__instmap__InstMappingB_23, hlds__instmap__Var_44, &hlds__instmap__InstMapping_24, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6, hlds__instmap__STATE_VARIABLE_ModuleInfo_7);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *hlds__instmap__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_24));
            }
          }
      }
  }
}

static void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__InstMappingA_3,
  MR_Word hlds__instmap__InstMappingB_4,
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_5,
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_6,
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__instmap__succeeded;

        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
            *hlds__instmap__STATE_VARIABLE_InstMapping_6 = hlds__instmap__STATE_VARIABLE_InstMapping_0_5;
          }
        else
          {
            MR_Word hlds__instmap__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__instmap__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_36_36;
            MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40;
            MR_Word hlds__instmap__InstA_25;
            MR_Box hlds__instmap__conv0_InstA_25;

            {
              hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingA_3, ((MR_Box) (hlds__instmap__Var_18)), &hlds__instmap__conv0_InstA_25);
            }
            if (hlds__instmap__succeeded)
              {
                hlds__instmap__InstA_25 = ((MR_Word) hlds__instmap__conv0_InstA_25);
                hlds__instmap__succeeded = MR_TRUE;
              }
            if (hlds__instmap__succeeded)
              {
                MR_Word hlds__instmap__InstB_26;
                MR_Box hlds__instmap__conv1_InstB_26;

                {
                  hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingB_4, ((MR_Box) (hlds__instmap__Var_18)), &hlds__instmap__conv1_InstB_26);
                }
                if (hlds__instmap__succeeded)
                  {
                    hlds__instmap__InstB_26 = ((MR_Word) hlds__instmap__conv1_InstB_26);
                    hlds__instmap__succeeded = MR_TRUE;
                  }
                if (hlds__instmap__succeeded)
                  {
                    MR_Word hlds__instmap__Inst_27;
                    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_35_35;
                    MR_Word hlds__instmap___Det_28;

                    {
                      hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 0, hlds__instmap__InstA_25, hlds__instmap__InstB_26, (MR_Integer) 1, &hlds__instmap__Inst_27, &hlds__instmap___Det_28, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7, &hlds__instmap__STATE_VARIABLE_ModuleInfo_35_35);
                    }
                    if (hlds__instmap__succeeded)
                      {
                        hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40 = hlds__instmap__STATE_VARIABLE_ModuleInfo_35_35;
                        {
                          mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_18)), ((MR_Box) (hlds__instmap__Inst_27)), hlds__instmap__STATE_VARIABLE_InstMapping_0_5, &hlds__instmap__STATE_VARIABLE_InstMapping_36_36);
                        }
                      }
                    else
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.unify_instmapping_delta_2\'/8", (MR_String) "unexpected error");
                          return;
                        }
                      }
                  }
                else
                  {
                    {
                      mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_18)), ((MR_Box) (hlds__instmap__InstA_25)), hlds__instmap__STATE_VARIABLE_InstMapping_0_5, &hlds__instmap__STATE_VARIABLE_InstMapping_36_36);
                    }
                    hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
                  }
              }
            else
              {
                MR_Word hlds__instmap__InstB_45;
                MR_Box hlds__instmap__conv2_InstB_45;

                {
                  hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingB_4, ((MR_Box) (hlds__instmap__Var_18)), &hlds__instmap__conv2_InstB_45);
                }
                if (hlds__instmap__succeeded)
                  {
                    hlds__instmap__InstB_45 = ((MR_Word) hlds__instmap__conv2_InstB_45);
                    hlds__instmap__succeeded = MR_TRUE;
                  }
                if (hlds__instmap__succeeded)
                  {
                    {
                      mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_18)), ((MR_Box) (hlds__instmap__InstB_45)), hlds__instmap__STATE_VARIABLE_InstMapping_0_5, &hlds__instmap__STATE_VARIABLE_InstMapping_36_36);
                    }
                  }
                else
                  hlds__instmap__STATE_VARIABLE_InstMapping_36_36 = hlds__instmap__STATE_VARIABLE_InstMapping_0_5;
                hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
              }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__instmap__next_value_of_HeadVar__1_1 = hlds__instmap__Vars_19;
              MR_Word hlds__instmap__next_value_of_STATE_VARIABLE_InstMapping_0_5 = hlds__instmap__STATE_VARIABLE_InstMapping_36_36;
              MR_Word hlds__instmap__next_value_of_STATE_VARIABLE_ModuleInfo_0_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40;

              hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7 = hlds__instmap__next_value_of_STATE_VARIABLE_ModuleInfo_0_7;
              hlds__instmap__STATE_VARIABLE_InstMapping_0_5 = hlds__instmap__next_value_of_STATE_VARIABLE_InstMapping_0_5;
              hlds__instmap__HeadVar__1_1 = hlds__instmap__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
hlds__instmap__merge_instmap_deltas_7_p_0(
  MR_Word hlds__instmap__InstMap_8,
  MR_Word hlds__instmap__NonLocals_9,
  MR_Word hlds__instmap__VarTypes_10,
  MR_Word hlds__instmap__Deltas_11,
  MR_Word * hlds__instmap__MergedDelta_12,
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_19)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__instmap__succeeded;
        MR_Word hlds__instmap__MergedDeltas_14;
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21;

        {
          hlds__instmap__merge_instmap_deltas_2_8_p_0(hlds__instmap__InstMap_8, hlds__instmap__NonLocals_9, hlds__instmap__VarTypes_10, hlds__instmap__Deltas_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__instmap__MergedDeltas_14, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_18, &hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21);
        }
        if ((hlds__instmap__MergedDeltas_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.merge_instmap_deltas\'/7", (MR_String) "empty instmap_delta list.");
              return;
            }
          }
        else
          {
            MR_Word hlds__instmap__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MergedDeltas_14, (MR_Integer) 1)));
            MR_Word hlds__instmap__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MergedDeltas_14, (MR_Integer) 0)));

            if ((hlds__instmap__Var_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *hlds__instmap__MergedDelta_12 = hlds__instmap__Var_29;
                *hlds__instmap__STATE_VARIABLE_ModuleInfo_19 = hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__instmap__next_value_of_Deltas_11 = hlds__instmap__MergedDeltas_14;
                  MR_Word hlds__instmap__next_value_of_STATE_VARIABLE_ModuleInfo_0_18 = hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21;

                  hlds__instmap__STATE_VARIABLE_ModuleInfo_0_18 = hlds__instmap__next_value_of_STATE_VARIABLE_ModuleInfo_0_18;
                  hlds__instmap__Deltas_11 = hlds__instmap__next_value_of_Deltas_11;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__instmap__merge_instmap_deltas_2_8_p_0(
  MR_Word hlds__instmap__InstMap_9,
  MR_Word hlds__instmap__NonLocals_10,
  MR_Word hlds__instmap__VarTypes_11,
  MR_Word hlds__instmap__Deltas_12,
  MR_Word hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24,
  MR_Word * hlds__instmap__STATE_VARIABLE_MergedDeltas_25,
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_27)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__instmap__succeeded;

        if ((hlds__instmap__Deltas_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__instmap__STATE_VARIABLE_MergedDeltas_25 = hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24;
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_27 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26;
          }
        else
          {
            MR_Word hlds__instmap__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Deltas_12, (MR_Integer) 1)));
            MR_Word hlds__instmap__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Deltas_12, (MR_Integer) 0)));

            if ((hlds__instmap__Var_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__instmap__STATE_VARIABLE_MergedDeltas_25 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Var_58));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24));
                }
                *hlds__instmap__STATE_VARIABLE_ModuleInfo_27 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26;
              }
            else
              {
                MR_Word hlds__instmap__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Var_57, (MR_Integer) 1)));
                MR_Word hlds__instmap__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Var_57, (MR_Integer) 0)));

                if ((hlds__instmap__Var_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word hlds__instmap__Delta12_17;

                    {
                      hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__Var_58, hlds__instmap__Var_60, &hlds__instmap__Delta12_17, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26, hlds__instmap__STATE_VARIABLE_ModuleInfo_27);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__instmap__STATE_VARIABLE_MergedDeltas_25 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Delta12_17));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24));
                    }
                  }
                else
                  {
                    MR_Word hlds__instmap__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Var_59, (MR_Integer) 1)));
                    MR_Word hlds__instmap__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Var_59, (MR_Integer) 0)));

                    if ((hlds__instmap__Var_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word hlds__instmap__Delta123_19;
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40;
                        MR_Word hlds__instmap__Delta12_52;

                        {
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__Var_58, hlds__instmap__Var_60, &hlds__instmap__Delta12_52, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26, &hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40);
                        }
                        {
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__Delta12_52, hlds__instmap__Var_62, &hlds__instmap__Delta123_19, hlds__instmap__STATE_VARIABLE_ModuleInfo_40_40, hlds__instmap__STATE_VARIABLE_ModuleInfo_27);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__instmap__STATE_VARIABLE_MergedDeltas_25 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Delta123_19));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24));
                        }
                      }
                    else
                      {
                        MR_Word hlds__instmap__Delta4_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Var_61, (MR_Integer) 0)));
                        MR_Word hlds__instmap__MoreDeltas_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Var_61, (MR_Integer) 1)));
                        MR_Word hlds__instmap__Delta34_22;
                        MR_Word hlds__instmap__Delta1234_23;
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_31_31;
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32;
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33;
                        MR_Word hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34;
                        MR_Word hlds__instmap__Delta12_55;

                        {
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__Var_58, hlds__instmap__Var_60, &hlds__instmap__Delta12_55, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26, &hlds__instmap__STATE_VARIABLE_ModuleInfo_31_31);
                        }
                        {
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__Var_62, hlds__instmap__Delta4_20, &hlds__instmap__Delta34_22, hlds__instmap__STATE_VARIABLE_ModuleInfo_31_31, &hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32);
                        }
                        {
                          hlds__instmap__merge_instmap_delta_8_p_0(hlds__instmap__InstMap_9, hlds__instmap__NonLocals_10, hlds__instmap__VarTypes_11, hlds__instmap__Delta12_55, hlds__instmap__Delta34_22, &hlds__instmap__Delta1234_23, hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32, &hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33);
                        }
                        {
                          hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34, 0) = ((MR_Box) (hlds__instmap__Delta1234_23));
                          MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24));
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__instmap__next_value_of_Deltas_12 = hlds__instmap__MoreDeltas_21;
                          MR_Word hlds__instmap__next_value_of_STATE_VARIABLE_MergedDeltas_0_24 = hlds__instmap__STATE_VARIABLE_MergedDeltas_34_34;
                          MR_Word hlds__instmap__next_value_of_STATE_VARIABLE_ModuleInfo_0_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33;

                          hlds__instmap__STATE_VARIABLE_ModuleInfo_0_26 = hlds__instmap__next_value_of_STATE_VARIABLE_ModuleInfo_0_26;
                          hlds__instmap__STATE_VARIABLE_MergedDeltas_0_24 = hlds__instmap__next_value_of_STATE_VARIABLE_MergedDeltas_0_24;
                          hlds__instmap__Deltas_12 = hlds__instmap__next_value_of_Deltas_12;
                        }
                        continue;
                      }
                  }
              }
          }
      }
      break;
    }
}

void MR_CALL 
hlds__instmap__merge_instmap_delta_8_p_0(
  MR_Word hlds__instmap__InstMap_1,
  MR_Word hlds__instmap__NonLocals_2,
  MR_Word hlds__instmap__VarTypes_3,
  MR_Word hlds__instmap__HeadVar__4_4,
  MR_Word hlds__instmap__HeadVar__5_5,
  MR_Word * hlds__instmap__HeadVar__6_6,
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_8)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__instmap__HeadVar__6_6 = hlds__instmap__HeadVar__5_5;
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
      }
    else
      {
        MR_Word hlds__instmap__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__4_4, (MR_Integer) 0)));

        if ((hlds__instmap__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__instmap__HeadVar__6_6 = hlds__instmap__HeadVar__4_4;
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7;
          }
        else
          {
            MR_Word hlds__instmap__TypeInfo_26_51 = (MR_Word) &hlds__instmap_scalar_common_1[0];
            MR_Word hlds__instmap__TypeCtorInfo_27_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
            MR_Word hlds__instmap__TypeCtorInfo_28_53;
            MR_Word hlds__instmap__InstMappingB_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__5_5, (MR_Integer) 0)));
            MR_Word hlds__instmap__InstMapping_28;
            MR_Word hlds__instmap__VarsInA_43;
            MR_Word hlds__instmap__VarsInB_44;
            MR_Word hlds__instmap__SetofVarsInA_45;
            MR_Word hlds__instmap__SetofVars0_46;
            MR_Word hlds__instmap__SetofVars_47;
            MR_Word hlds__instmap__ListofVars_48;
            MR_Word hlds__instmap__Var_49;

            {
              mercury__map__keys_2_p_0(hlds__instmap__TypeInfo_26_51, hlds__instmap__TypeCtorInfo_27_52, hlds__instmap__Var_33, &hlds__instmap__VarsInA_43);
            }
            {
              mercury__map__keys_2_p_0(hlds__instmap__TypeInfo_26_51, hlds__instmap__TypeCtorInfo_27_52, hlds__instmap__InstMappingB_27, &hlds__instmap__VarsInB_44);
            }
            hlds__instmap__TypeCtorInfo_28_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              parse_tree__set_of_var__sorted_list_to_set_2_p_0(hlds__instmap__TypeCtorInfo_28_53, hlds__instmap__VarsInA_43, &hlds__instmap__SetofVarsInA_45);
            }
            {
              parse_tree__set_of_var__insert_list_3_p_0(hlds__instmap__TypeCtorInfo_28_53, hlds__instmap__VarsInB_44, hlds__instmap__SetofVarsInA_45, &hlds__instmap__SetofVars0_46);
            }
            {
              parse_tree__set_of_var__intersect_3_p_0(hlds__instmap__TypeCtorInfo_28_53, hlds__instmap__SetofVars0_46, hlds__instmap__NonLocals_2, &hlds__instmap__SetofVars_47);
            }
            {
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__instmap__TypeCtorInfo_28_53, hlds__instmap__SetofVars_47, &hlds__instmap__ListofVars_48);
            }
            {
              hlds__instmap__Var_49 = mercury__map__init_0_f_0(hlds__instmap__TypeInfo_26_51, hlds__instmap__TypeCtorInfo_27_52);
            }
            {
              hlds__instmap__merge_instmapping_delta_2_9_p_0(hlds__instmap__ListofVars_48, hlds__instmap__InstMap_1, hlds__instmap__VarTypes_3, hlds__instmap__Var_33, hlds__instmap__InstMappingB_27, hlds__instmap__Var_49, &hlds__instmap__InstMapping_28, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_7, hlds__instmap__STATE_VARIABLE_ModuleInfo_8);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *hlds__instmap__HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_28));
            }
          }
      }
  }
}

static void MR_CALL 
hlds__instmap__merge_instmapping_delta_2_9_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__InstMap_2,
  MR_Word hlds__instmap__VarTypes_3,
  MR_Word hlds__instmap__InstMappingA_4,
  MR_Word hlds__instmap__InstMappingB_5,
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_6,
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_7,
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__instmap__succeeded;

        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_9 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8;
            *hlds__instmap__STATE_VARIABLE_InstMapping_7 = hlds__instmap__STATE_VARIABLE_InstMapping_0_6;
          }
        else
          {
            MR_Word hlds__instmap__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__instmap__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__instmap__InstA_29;
            MR_Word hlds__instmap__InstB_31;
            MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_43_43;
            MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50;
            MR_Word hlds__instmap__InstInA_28;
            MR_Box hlds__instmap__conv0_InstInA_28;
            MR_Word hlds__instmap__InstInB_30;
            MR_Box hlds__instmap__conv1_InstInB_30;
            MR_Word hlds__instmap__Inst1_33;
            MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_42_42;
            MR_Word hlds__instmap__VarType_32;
            MR_Word hlds__instmap__Var_41;

            {
              hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingA_4, ((MR_Box) (hlds__instmap__Var_20)), &hlds__instmap__conv0_InstInA_28);
            }
            if (hlds__instmap__succeeded)
              {
                hlds__instmap__InstInA_28 = ((MR_Word) hlds__instmap__conv0_InstInA_28);
                hlds__instmap__succeeded = MR_TRUE;
              }
            if (hlds__instmap__succeeded)
              hlds__instmap__InstA_29 = hlds__instmap__InstInA_28;
            else
              {
                hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_2, hlds__instmap__Var_20, &hlds__instmap__InstA_29);
              }
            {
              hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingB_5, ((MR_Box) (hlds__instmap__Var_20)), &hlds__instmap__conv1_InstInB_30);
            }
            if (hlds__instmap__succeeded)
              {
                hlds__instmap__InstInB_30 = ((MR_Word) hlds__instmap__conv1_InstInB_30);
                hlds__instmap__succeeded = MR_TRUE;
              }
            if (hlds__instmap__succeeded)
              hlds__instmap__InstB_31 = hlds__instmap__InstInB_30;
            else
              {
                hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_2, hlds__instmap__Var_20, &hlds__instmap__InstB_31);
              }
            {
              hlds__vartypes__lookup_var_type_3_p_0(hlds__instmap__VarTypes_3, hlds__instmap__Var_20, &hlds__instmap__VarType_32);
            }
            {
              hlds__instmap__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__instmap__Var_41, 0) = ((MR_Box) (hlds__instmap__VarType_32));
            }
            {
              hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__InstA_29, hlds__instmap__InstB_31, hlds__instmap__Var_41, &hlds__instmap__Inst1_33, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8, &hlds__instmap__STATE_VARIABLE_ModuleInfo_42_42);
            }
            if (hlds__instmap__succeeded)
              {
                hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50 = hlds__instmap__STATE_VARIABLE_ModuleInfo_42_42;
                {
                  mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_20)), ((MR_Box) (hlds__instmap__Inst1_33)), hlds__instmap__STATE_VARIABLE_InstMapping_0_6, &hlds__instmap__STATE_VARIABLE_InstMapping_43_43);
                }
              }
            else
              {
                MR_Integer hlds__instmap__VarInt_35;
                MR_String hlds__instmap__Msg_36;
                MR_String hlds__instmap__Var_60;

                {
                  mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Var_20, &hlds__instmap__VarInt_35);
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__instmap_scalar_common_6[1], hlds__instmap__VarInt_35, &hlds__instmap__Var_60);
                }
                {
                  hlds__instmap__Msg_36 = mercury__string__f_43_43_2_f_0((MR_String) "merge_instmapping_delta_2: error merging var ", hlds__instmap__Var_60);
                }
                {
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.merge_instmapping_delta_2\'/9", hlds__instmap__Msg_36);
                  return;
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__instmap__next_value_of_HeadVar__1_1 = hlds__instmap__Vars_21;
              MR_Word hlds__instmap__next_value_of_STATE_VARIABLE_InstMapping_0_6 = hlds__instmap__STATE_VARIABLE_InstMapping_43_43;
              MR_Word hlds__instmap__next_value_of_STATE_VARIABLE_ModuleInfo_0_8 = hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50;

              hlds__instmap__STATE_VARIABLE_ModuleInfo_0_8 = hlds__instmap__next_value_of_STATE_VARIABLE_ModuleInfo_0_8;
              hlds__instmap__STATE_VARIABLE_InstMapping_0_6 = hlds__instmap__next_value_of_STATE_VARIABLE_InstMapping_0_6;
              hlds__instmap__HeadVar__1_1 = hlds__instmap__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
hlds__instmap__instmap_delta_no_output_vars_5_p_0_1(
  MR_Box hlds__instmap__closure_arg,
  MR_Box hlds__instmap__wrapper_arg_1)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

    {
      hlds__instmap__succeeded = hlds__instmap__var_is_not_output_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 6))), ((MR_Word) hlds__instmap__wrapper_arg_1));
    }
    return hlds__instmap__succeeded;
  }
}

MR_bool MR_CALL 
hlds__instmap__instmap_delta_no_output_vars_5_p_0(
  MR_Word hlds__instmap__ModuleInfo_6,
  MR_Word hlds__instmap__VarTypes_7,
  MR_Word hlds__instmap__InstMap0_8,
  MR_Word hlds__instmap__InstMapDelta_9,
  MR_Word hlds__instmap__Vars_10)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__InstMapDelta_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__instmap__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__instmap__InstMapDeltaMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_9, (MR_Integer) 0)));
        MR_Word hlds__instmap__Test_12;

        {
          hlds__instmap__Test_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 0) = ((MR_Box) (&hlds__instmap_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 1) = ((MR_Box) (hlds__instmap__instmap_delta_no_output_vars_5_p_0_1));
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 3) = ((MR_Box) (hlds__instmap__ModuleInfo_6));
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 4) = ((MR_Box) (hlds__instmap__VarTypes_7));
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 5) = ((MR_Box) (hlds__instmap__InstMap0_8));
          MR_hl_field(MR_mktag(0), hlds__instmap__Test_12, 6) = ((MR_Box) (hlds__instmap__InstMapDeltaMap_11));
        }
        {
          hlds__instmap__succeeded = parse_tree__set_of_var__all_true_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Test_12, hlds__instmap__Vars_10);
        }
      }
    return hlds__instmap__succeeded;
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_delete_vars_3_p_0(
  MR_Word hlds__instmap__Vars_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word * hlds__instmap__HeadVar__3_3)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__instmap__InstMapping0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__instmap__InstMapping_7;

        {
          mercury__map__delete_list_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Vars_1, hlds__instmap__InstMapping0_6, &hlds__instmap__InstMapping_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *hlds__instmap__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_7));
        }
      }
  }
}

void MR_CALL 
hlds__instmap__instmap_restrict_3_p_0(
  MR_Word hlds__instmap__Vars_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word * hlds__instmap__HeadVar__3_3)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__instmap__InstMapping0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__instmap__InstMapping_7;
        MR_Word hlds__instmap__Var_8;

        {
          hlds__instmap__Var_8 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Vars_1);
        }
        {
          mercury__map__select_sorted_list_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping0_6, hlds__instmap__Var_8, &hlds__instmap__InstMapping_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *hlds__instmap__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_7));
        }
      }
  }
}

void MR_CALL 
hlds__instmap__instmap_merge_5_p_0(
  MR_Word hlds__instmap__NonLocals_6,
  MR_Word hlds__instmap__ArmInstMaps_7,
  MR_Word hlds__instmap__MergeContext_8,
  MR_Word hlds__instmap__STATE_VARIABLE_ModeInfo_0_27,
  MR_Word * hlds__instmap__STATE_VARIABLE_ModeInfo_28)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__InstMap0_10;
    MR_Word hlds__instmap__ModuleInfo0_11;
    MR_Word hlds__instmap__ReachableInstMappingList_12;
    MR_Word hlds__instmap__InstMap_26;
    MR_Word hlds__instmap__STATE_VARIABLE_ModeInfo_31_31;
    MR_Word hlds__instmap__InstMapping0_13;
    MR_Word hlds__instmap__Var_14;
    MR_Word hlds__instmap__Var_15;

    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(hlds__instmap__STATE_VARIABLE_ModeInfo_0_27, &hlds__instmap__InstMap0_10);
    }
    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(hlds__instmap__STATE_VARIABLE_ModeInfo_0_27, &hlds__instmap__ModuleInfo0_11);
    }
    {
      hlds__instmap__get_reachable_instmaps_2_p_0(hlds__instmap__ArmInstMaps_7, &hlds__instmap__ReachableInstMappingList_12);
    }
    hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__ReachableInstMappingList_12)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__instmap__succeeded)
      {
        hlds__instmap__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__ReachableInstMappingList_12, (MR_Integer) 0)));
        hlds__instmap__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__ReachableInstMappingList_12, (MR_Integer) 1)));
        hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__InstMap0_10)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__instmap__succeeded)
          hlds__instmap__InstMapping0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap0_10, (MR_Integer) 0)));
      }
    if (hlds__instmap__succeeded)
      {
        MR_Word hlds__instmap__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        MR_Word hlds__instmap__NonLocalsList_16;
        MR_Word hlds__instmap__VarTypes_17;
        MR_Word hlds__instmap__InstMapping_18;
        MR_Word hlds__instmap__ModuleInfo_19;
        MR_Word hlds__instmap__ErrorList_20;
        MR_Word hlds__instmap__STATE_VARIABLE_ModeInfo_29_29;

        {
          parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__instmap__TypeCtorInfo_33_33, hlds__instmap__NonLocals_6, &hlds__instmap__NonLocalsList_16);
        }
        {
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(hlds__instmap__STATE_VARIABLE_ModeInfo_0_27, &hlds__instmap__VarTypes_17);
        }
        {
          hlds__instmap__merge_insts_of_vars_8_p_0(hlds__instmap__NonLocalsList_16, hlds__instmap__ArmInstMaps_7, hlds__instmap__VarTypes_17, hlds__instmap__InstMapping0_13, &hlds__instmap__InstMapping_18, hlds__instmap__ModuleInfo0_11, &hlds__instmap__ModuleInfo_19, &hlds__instmap__ErrorList_20);
        }
        {
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(hlds__instmap__ModuleInfo_19, hlds__instmap__STATE_VARIABLE_ModeInfo_0_27, &hlds__instmap__STATE_VARIABLE_ModeInfo_29_29);
        }
        if ((hlds__instmap__ErrorList_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          hlds__instmap__STATE_VARIABLE_ModeInfo_31_31 = hlds__instmap__STATE_VARIABLE_ModeInfo_29_29;
        else
          {
            MR_Word hlds__instmap__FirstError_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__ErrorList_20, (MR_Integer) 0)));
            MR_Word hlds__instmap__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__FirstError_21, (MR_Integer) 0)));
            MR_Word hlds__instmap__WaitingVars_25;
            MR_Word hlds__instmap__Var_30;
            MR_Word hlds__instmap__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__ErrorList_20, (MR_Integer) 1)));
            MR_Word hlds__instmap__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__FirstError_21, (MR_Integer) 1)));

            {
              hlds__instmap__WaitingVars_25 = parse_tree__set_of_var__make_singleton_1_f_0(hlds__instmap__TypeCtorInfo_33_33, hlds__instmap__Var_23);
            }
            {
              hlds__instmap__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__instmap__Var_30, 0) = ((MR_Box) (hlds__instmap__MergeContext_8));
              MR_hl_field(MR_mktag(1), hlds__instmap__Var_30, 1) = ((MR_Box) (hlds__instmap__ErrorList_20));
            }
            {
              check_hlds__mode_info__mode_info_error_4_p_0(hlds__instmap__WaitingVars_25, hlds__instmap__Var_30, hlds__instmap__STATE_VARIABLE_ModeInfo_29_29, &hlds__instmap__STATE_VARIABLE_ModeInfo_31_31);
            }
          }
        {
          hlds__instmap__InstMap_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__instmap__InstMap_26, 0) = ((MR_Box) (hlds__instmap__InstMapping_18));
        }
      }
    else
      {
        hlds__instmap__InstMap_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        hlds__instmap__STATE_VARIABLE_ModeInfo_31_31 = hlds__instmap__STATE_VARIABLE_ModeInfo_0_27;
      }
    {
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(hlds__instmap__InstMap_26, hlds__instmap__STATE_VARIABLE_ModeInfo_31_31, hlds__instmap__STATE_VARIABLE_ModeInfo_28);
    }
  }
}

static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_2(
  MR_Box hlds__instmap__closure_arg,
  MR_Box hlds__instmap__wrapper_arg_1,
  MR_Box * hlds__instmap__wrapper_arg_2)
{
  {
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;
    MR_Word hlds__instmap__conv1_Context_4;

    {
      hlds__instmap__arm_instmap_project_context_2_p_0(((MR_Word) hlds__instmap__wrapper_arg_1), &hlds__instmap__conv1_Context_4);
    }
    *hlds__instmap__wrapper_arg_2 = ((MR_Box) (hlds__instmap__conv1_Context_4));
  }
}

static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_1(
  MR_Box hlds__instmap__closure_arg,
  MR_Box hlds__instmap__wrapper_arg_1,
  MR_Box * hlds__instmap__wrapper_arg_2)
{
  {
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;
    MR_Word hlds__instmap__conv0_Inst_6;

    {
      hlds__instmap__lookup_var_in_arm_instmap_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) hlds__instmap__wrapper_arg_1), &hlds__instmap__conv0_Inst_6);
    }
    *hlds__instmap__wrapper_arg_2 = ((MR_Box) (hlds__instmap__conv0_Inst_6));
  }
}

static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__ArmInstMaps_2,
  MR_Word hlds__instmap__VarTypes_3,
  MR_Word hlds__instmap__HeadVar__4_4,
  MR_Word * hlds__instmap__HeadVar__5_5,
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_7,
  MR_Word * hlds__instmap__HeadVar__8_8)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__instmap__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_7 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6;
        *hlds__instmap__HeadVar__5_5 = hlds__instmap__HeadVar__4_4;
      }
    else
      {
        MR_Word hlds__instmap__TypeCtorInfo_49_49;
        MR_Word hlds__instmap__TypeCtorInfo_50_50;
        MR_Word hlds__instmap__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__instmap__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__instmap__VarType_24;
        MR_Word hlds__instmap__InstList_25;
        MR_Word hlds__instmap__MaybeInst_26;
        MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_35_35;
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_36_36;
        MR_Word hlds__instmap__STATE_VARIABLE_ErrorList_37_37;
        MR_Word hlds__instmap__Var_38;
        MR_Word hlds__instmap__Var_39;

        {
          hlds__instmap__merge_insts_of_vars_8_p_0(hlds__instmap__Vars_18, hlds__instmap__ArmInstMaps_2, hlds__instmap__VarTypes_3, hlds__instmap__HeadVar__4_4, &hlds__instmap__STATE_VARIABLE_InstMapping_35_35, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_6, &hlds__instmap__STATE_VARIABLE_ModuleInfo_36_36, &hlds__instmap__STATE_VARIABLE_ErrorList_37_37);
        }
        {
          hlds__vartypes__lookup_var_type_3_p_0(hlds__instmap__VarTypes_3, hlds__instmap__Var_17, &hlds__instmap__VarType_24);
        }
        {
          hlds__instmap__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_38, 0) = ((MR_Box) (&hlds__instmap_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_38, 1) = ((MR_Box) (hlds__instmap__merge_insts_of_vars_8_p_0_1));
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_38, 3) = ((MR_Box) (hlds__instmap__Var_17));
        }
        hlds__instmap__TypeCtorInfo_49_49 = (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_arm_instmap_0;
        hlds__instmap__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
        {
          mercury__list__map_3_p_0(hlds__instmap__TypeCtorInfo_49_49, hlds__instmap__TypeCtorInfo_50_50, hlds__instmap__Var_38, hlds__instmap__ArmInstMaps_2, &hlds__instmap__InstList_25);
        }
        {
          hlds__instmap__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__instmap__Var_39, 0) = ((MR_Box) (hlds__instmap__VarType_24));
        }
        {
          hlds__instmap__merge_var_insts_5_p_0(hlds__instmap__InstList_25, hlds__instmap__Var_39, hlds__instmap__STATE_VARIABLE_ModuleInfo_36_36, hlds__instmap__STATE_VARIABLE_ModuleInfo_7, &hlds__instmap__MaybeInst_26);
        }
        if ((hlds__instmap__MaybeInst_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__instmap__TypeCtorInfo_53_53 = (MR_Word) &mercury__term__term__type_ctor_info_context_0;
            MR_Word hlds__instmap__Contexts_27;
            MR_Word hlds__instmap__ContextsInsts_28;
            MR_Word hlds__instmap__Var_44;

            {
              mercury__list__map_3_p_0(hlds__instmap__TypeCtorInfo_49_49, hlds__instmap__TypeCtorInfo_53_53, (MR_Word) &hlds__instmap_scalar_common_2[4], hlds__instmap__ArmInstMaps_2, &hlds__instmap__Contexts_27);
            }
            {
              mercury__assoc_list__from_corresponding_lists_3_p_0(hlds__instmap__TypeCtorInfo_53_53, hlds__instmap__TypeCtorInfo_50_50, hlds__instmap__Contexts_27, hlds__instmap__InstList_25, &hlds__instmap__ContextsInsts_28);
            }
            {
              hlds__instmap__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__instmap__Var_44, 0) = ((MR_Box) (hlds__instmap__Var_17));
              MR_hl_field(MR_mktag(0), hlds__instmap__Var_44, 1) = ((MR_Box) (hlds__instmap__ContextsInsts_28));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__instmap__HeadVar__8_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Var_44));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_ErrorList_37_37));
            }
            {
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], hlds__instmap__TypeCtorInfo_50_50, ((MR_Box) (hlds__instmap__Var_17)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), hlds__instmap__STATE_VARIABLE_InstMapping_35_35, hlds__instmap__HeadVar__5_5);
            }
          }
        else
          {
            MR_Word hlds__instmap__Inst_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MaybeInst_26, (MR_Integer) 0)));

            {
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], hlds__instmap__TypeCtorInfo_50_50, ((MR_Box) (hlds__instmap__Var_17)), ((MR_Box) (hlds__instmap__Inst_29)), hlds__instmap__STATE_VARIABLE_InstMapping_35_35, hlds__instmap__HeadVar__5_5);
            }
            *hlds__instmap__HeadVar__8_8 = hlds__instmap__STATE_VARIABLE_ErrorList_37_37;
          }
      }
  }
}

static void MR_CALL 
hlds__instmap__get_reachable_instmaps_2_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word * hlds__instmap__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__instmap__succeeded;

        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word hlds__instmap__ArmInstMap_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__instmap__ArmInstMaps_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__instmap__InstMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmInstMap_3, (MR_Integer) 1)));
            MR_Word hlds__instmap__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__ArmInstMap_3, (MR_Integer) 0)));

            if ((hlds__instmap__InstMap_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__instmap__next_value_of_HeadVar__1_1 = hlds__instmap__ArmInstMaps_4;

                  hlds__instmap__HeadVar__1_1 = hlds__instmap__next_value_of_HeadVar__1_1;
                }
                continue;
              }
            else
              {
                MR_Word hlds__instmap__InstMapping_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap_7, (MR_Integer) 0)));
                MR_Word hlds__instmap__ReachablesTail_9;

                {
                  hlds__instmap__get_reachable_instmaps_2_p_0(hlds__instmap__ArmInstMaps_4, &hlds__instmap__ReachablesTail_9);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__instmap__HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_8));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__ReachablesTail_9));
                }
              }
          }
      }
      break;
    }
}

void MR_CALL 
hlds__instmap__make_arm_instmaps_for_cases_3_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word * hlds__instmap__HeadVar__3_3)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_cases\'/3", (MR_String) "mismatched lists");
            return;
          }
        }
    else
      {
        MR_Word hlds__instmap__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__instmap__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_cases\'/3", (MR_String) "mismatched lists");
              return;
            }
          }
        else
          {
            MR_Word hlds__instmap__InstMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__instmap__InstMaps_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__instmap__ArmInfo_20;
            MR_Word hlds__instmap__ArmInfos_21;
            MR_Word hlds__instmap__Goal_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__Var_29, (MR_Integer) 2)));
            MR_Word hlds__instmap__GoalInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__Goal_24, (MR_Integer) 1)));
            MR_Word hlds__instmap__Context_27;
            MR_Word hlds__instmap__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__Var_29, (MR_Integer) 0)));
            MR_Word hlds__instmap__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__Var_29, (MR_Integer) 1)));
            MR_Word hlds__instmap__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__Goal_24, (MR_Integer) 0)));

            {
              hlds__instmap__Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__instmap__GoalInfo_26);
            }
            {
              hlds__instmap__ArmInfo_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__instmap__ArmInfo_20, 0) = ((MR_Box) (hlds__instmap__Context_27));
              MR_hl_field(MR_mktag(0), hlds__instmap__ArmInfo_20, 1) = ((MR_Box) (hlds__instmap__InstMap_18));
            }
            {
              hlds__instmap__make_arm_instmaps_for_cases_3_p_0(hlds__instmap__Var_28, hlds__instmap__InstMaps_19, &hlds__instmap__ArmInfos_21);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__instmap__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__ArmInfo_20));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__ArmInfos_21));
            }
          }
      }
  }
}

void MR_CALL 
hlds__instmap__make_arm_instmaps_for_goals_3_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word * hlds__instmap__HeadVar__3_3)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_goals\'/3", (MR_String) "mismatched lists");
            return;
          }
        }
    else
      {
        MR_Word hlds__instmap__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__instmap__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_goals\'/3", (MR_String) "mismatched lists");
              return;
            }
          }
        else
          {
            MR_Word hlds__instmap__InstMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__instmap__InstMaps_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__instmap__ArmInfo_20;
            MR_Word hlds__instmap__ArmInfos_21;
            MR_Word hlds__instmap__GoalInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__Var_26, (MR_Integer) 1)));
            MR_Word hlds__instmap__Context_24;
            MR_Word hlds__instmap__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__Var_26, (MR_Integer) 0)));

            {
              hlds__instmap__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__instmap__GoalInfo_23);
            }
            {
              hlds__instmap__ArmInfo_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__instmap__ArmInfo_20, 0) = ((MR_Box) (hlds__instmap__Context_24));
              MR_hl_field(MR_mktag(0), hlds__instmap__ArmInfo_20, 1) = ((MR_Box) (hlds__instmap__InstMap_18));
            }
            {
              hlds__instmap__make_arm_instmaps_for_goals_3_p_0(hlds__instmap__Var_25, hlds__instmap__InstMaps_19, &hlds__instmap__ArmInfos_21);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__instmap__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__ArmInfo_20));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__ArmInfos_21));
            }
          }
      }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_restrict_3_p_0(
  MR_Word hlds__instmap__Vars_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word * hlds__instmap__HeadVar__3_3)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__instmap__InstMapping0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__instmap__InstMapping_7;
        MR_Word hlds__instmap__Var_8;

        {
          hlds__instmap__Var_8 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__Vars_1);
        }
        {
          mercury__map__select_sorted_list_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping0_6, hlds__instmap__Var_8, &hlds__instmap__InstMapping_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *hlds__instmap__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_7));
        }
      }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(
  MR_Word hlds__instmap__InstMap1_5,
  MR_Word hlds__instmap__InstMap2_6,
  MR_Word hlds__instmap__How_7,
  MR_Word * hlds__instmap__InstMap_8)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__InstMap1_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__instmap__InstMap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__instmap__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap1_5, (MR_Integer) 0)));

        if ((hlds__instmap__InstMap2_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__instmap__InstMap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word hlds__instmap__InstMappingDelta2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMap2_6, (MR_Integer) 0)));
            MR_Word hlds__instmap__InstMappingDelta_12;

            switch (hlds__instmap__How_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__map__overlay_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Var_25, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__InstMappingDelta_12);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__map__overlay_large_map_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Var_25, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__InstMappingDelta_12);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__instmap__TypeInfo_19_19 = (MR_Word) &hlds__instmap_scalar_common_1[0];
                  MR_Word hlds__instmap__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
                  MR_Integer hlds__instmap__Count1_13;
                  MR_Integer hlds__instmap__Count2_14;

                  {
                    mercury__map__count_2_p_0(hlds__instmap__TypeInfo_19_19, hlds__instmap__TypeCtorInfo_20_20, hlds__instmap__Var_25, &hlds__instmap__Count1_13);
                  }
                  {
                    mercury__map__count_2_p_0(hlds__instmap__TypeInfo_19_19, hlds__instmap__TypeCtorInfo_20_20, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__Count2_14);
                  }
                  hlds__instmap__succeeded = (hlds__instmap__Count1_13 >= hlds__instmap__Count2_14);
                  if (hlds__instmap__succeeded)
                    {
                      {
                        mercury__map__overlay_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Var_25, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__InstMappingDelta_12);
                      }
                    }
                  else
                    {
                      {
                        mercury__map__overlay_large_map_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Var_25, hlds__instmap__InstMappingDelta2_11, &hlds__instmap__InstMappingDelta_12);
                      }
                    }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *hlds__instmap__InstMap_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMappingDelta_12));
            }
          }
      }
  }
}

void MR_CALL 
hlds__instmap__apply_instmap_delta_sv_3_p_0(
  MR_Word hlds__instmap__Delta_4,
  MR_Word hlds__instmap__STATE_VARIABLE_Instmap_0_6,
  MR_Word * hlds__instmap__STATE_VARIABLE_Instmap_7)
{
  {
    MR_bool hlds__instmap__succeeded;

    {
      hlds__instmap__apply_instmap_delta_3_p_0(hlds__instmap__STATE_VARIABLE_Instmap_0_6, hlds__instmap__Delta_4, hlds__instmap__STATE_VARIABLE_Instmap_7);
    }
  }
}

void MR_CALL 
hlds__instmap__compute_instmap_delta_4_p_0(
  MR_Word hlds__instmap__InstMapA_5,
  MR_Word hlds__instmap__InstMapB_6,
  MR_Word hlds__instmap__NonLocals_7,
  MR_Word * hlds__instmap__InstMap_8)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__InstMapA_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__instmap__InstMap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__instmap__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapA_5, (MR_Integer) 0)));

        if ((hlds__instmap__InstMapB_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__instmap__InstMap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word hlds__instmap__InstMappingB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapB_6, (MR_Integer) 0)));
            MR_Word hlds__instmap__NonLocalsList_12;
            MR_Word hlds__instmap__AssocList_13;
            MR_Word hlds__instmap__DeltaInstMap_14;

            {
              parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__NonLocals_7, &hlds__instmap__NonLocalsList_12);
            }
            {
              hlds__instmap__compute_instmap_delta_for_vars_4_p_0(hlds__instmap__NonLocalsList_12, hlds__instmap__Var_18, hlds__instmap__InstMappingB_11, &hlds__instmap__AssocList_13);
            }
            {
              mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__AssocList_13, &hlds__instmap__DeltaInstMap_14);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *hlds__instmap__InstMap_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__DeltaInstMap_14));
            }
          }
      }
  }
}

static void MR_CALL 
hlds__instmap__compute_instmap_delta_for_vars_4_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__InstMappingA_2,
  MR_Word hlds__instmap__InstMappingB_3,
  MR_Word * hlds__instmap__HeadVar__4_4)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__instmap__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__instmap__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__instmap__AssocListTail_12;
        MR_Word hlds__instmap__InstA_13;
        MR_Word hlds__instmap__InstB_14;
        MR_Word hlds__instmap__VarInst_20;
        MR_Box hlds__instmap__conv0_VarInst_20;
        MR_Word hlds__instmap__VarInst_26;
        MR_Box hlds__instmap__conv1_VarInst_26;

        {
          hlds__instmap__compute_instmap_delta_for_vars_4_p_0(hlds__instmap__Vars_8, hlds__instmap__InstMappingA_2, hlds__instmap__InstMappingB_3, &hlds__instmap__AssocListTail_12);
        }
        {
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingA_2, ((MR_Box) (hlds__instmap__Var_7)), &hlds__instmap__conv0_VarInst_20);
        }
        if (hlds__instmap__succeeded)
          {
            hlds__instmap__VarInst_20 = ((MR_Word) hlds__instmap__conv0_VarInst_20);
            hlds__instmap__succeeded = MR_TRUE;
          }
        if (hlds__instmap__succeeded)
          hlds__instmap__InstA_13 = hlds__instmap__VarInst_20;
        else
          hlds__instmap__InstA_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMappingB_3, ((MR_Box) (hlds__instmap__Var_7)), &hlds__instmap__conv1_VarInst_26);
        }
        if (hlds__instmap__succeeded)
          {
            hlds__instmap__VarInst_26 = ((MR_Word) hlds__instmap__conv1_VarInst_26);
            hlds__instmap__succeeded = MR_TRUE;
          }
        if (hlds__instmap__succeeded)
          hlds__instmap__InstB_14 = hlds__instmap__VarInst_26;
        else
          hlds__instmap__InstB_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__InstA_13, hlds__instmap__InstB_14);
        }
        if (hlds__instmap__succeeded)
          *hlds__instmap__HeadVar__4_4 = hlds__instmap__AssocListTail_12;
        else
          {
            MR_Word hlds__instmap__Var_15;

            {
              hlds__instmap__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__instmap__Var_15, 0) = ((MR_Box) (hlds__instmap__Var_7));
              MR_hl_field(MR_mktag(0), hlds__instmap__Var_15, 1) = ((MR_Box) (hlds__instmap__InstB_14));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__instmap__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Var_15));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__AssocListTail_12));
            }
          }
      }
  }
}

void MR_CALL 
hlds__instmap__pre_lambda_update_5_p_0(
  MR_Word hlds__instmap__ModuleInfo_6,
  MR_Word hlds__instmap__Vars_7,
  MR_Word hlds__instmap__Modes_8,
  MR_Word hlds__instmap__InstMap0_9,
  MR_Word * hlds__instmap__InstMap_10)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__Insts_11;
    MR_Word hlds__instmap__VarInsts_12;
    MR_Word hlds__instmap__InstMapDelta_13;
    MR_Word hlds__instmap__Instmapping_17;

    {
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(hlds__instmap__ModuleInfo_6, hlds__instmap__Modes_8, &hlds__instmap__Insts_11);
    }
    {
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Vars_7, hlds__instmap__Insts_11, &hlds__instmap__VarInsts_12);
    }
    {
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__VarInsts_12, &hlds__instmap__Instmapping_17);
    }
    {
      hlds__instmap__InstMapDelta_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_13, 0) = ((MR_Box) (hlds__instmap__Instmapping_17));
    }
    {
      hlds__instmap__apply_instmap_delta_3_p_0(hlds__instmap__InstMap0_9, hlds__instmap__InstMapDelta_13, hlds__instmap__InstMap_10);
    }
  }
}

void MR_CALL 
hlds__instmap__apply_instmap_delta_3_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word * hlds__instmap__HeadVar__3_3)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__instmap__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word hlds__instmap__InstMappingDelta_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__instmap__InstMapping_8;

            {
              mercury__map__overlay_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Var_11, hlds__instmap__InstMappingDelta_7, &hlds__instmap__InstMapping_8);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *hlds__instmap__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_8));
            }
          }
      }
  }
}

void MR_CALL 
hlds__instmap__bind_var_to_functors_8_p_0(
  MR_Word hlds__instmap__Var_9,
  MR_Word hlds__instmap__Type_10,
  MR_Word hlds__instmap__MainConsId_11,
  MR_Word hlds__instmap__OtherConsIds_12,
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_17,
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_18,
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_20)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__Inst0_15;
    MR_Word hlds__instmap__Inst_16;
    MR_Word hlds__instmap__MainFinalInst_31;
    MR_Word hlds__instmap__OtherFinalInsts_32;
    MR_Word hlds__instmap__MaybeMergedInst_33;
    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_19_34;
    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_20_35;
    MR_Word hlds__instmap__Var_36;
    MR_Word hlds__instmap__Var_37;
    MR_Integer hlds__instmap__Arity_50;
    MR_Word hlds__instmap__ArgLives_51;
    MR_Word hlds__instmap__ArgInsts_52;
    MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_58;
    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_59;
    MR_Word hlds__instmap___Det_53;

    {
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__STATE_VARIABLE_InstMap_0_17, hlds__instmap__Var_9, &hlds__instmap__Inst0_15);
    }
    {
      hlds__instmap__Arity_50 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_19, hlds__instmap__Type_10, hlds__instmap__MainConsId_11);
    }
    {
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_50, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_51);
    }
    {
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_50, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_52);
    }
    {
      hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__Inst0_15, hlds__instmap__MainConsId_11, hlds__instmap__ArgInsts_52, hlds__instmap__ArgLives_51, (MR_Integer) 0, hlds__instmap__Type_10, &hlds__instmap__STATE_VARIABLE_Inst_23_58, &hlds__instmap___Det_53, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_19, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_59);
    }
    if (hlds__instmap__succeeded)
      {
        hlds__instmap__STATE_VARIABLE_ModuleInfo_19_34 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_59;
        hlds__instmap__MainFinalInst_31 = hlds__instmap__STATE_VARIABLE_Inst_23_58;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
          return;
        }
      }
    {
      hlds__instmap__bind_inst_to_functors_others_6_p_0(hlds__instmap__Type_10, hlds__instmap__OtherConsIds_12, hlds__instmap__Inst0_15, &hlds__instmap__OtherFinalInsts_32, hlds__instmap__STATE_VARIABLE_ModuleInfo_19_34, &hlds__instmap__STATE_VARIABLE_ModuleInfo_20_35);
    }
    {
      hlds__instmap__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__instmap__Var_36, 0) = ((MR_Box) (hlds__instmap__MainFinalInst_31));
      MR_hl_field(MR_mktag(1), hlds__instmap__Var_36, 1) = ((MR_Box) (hlds__instmap__OtherFinalInsts_32));
    }
    {
      hlds__instmap__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__instmap__Var_37, 0) = ((MR_Box) (hlds__instmap__Type_10));
    }
    {
      hlds__instmap__merge_var_insts_5_p_0(hlds__instmap__Var_36, hlds__instmap__Var_37, hlds__instmap__STATE_VARIABLE_ModuleInfo_20_35, hlds__instmap__STATE_VARIABLE_ModuleInfo_20, &hlds__instmap__MaybeMergedInst_33);
    }
    if ((hlds__instmap__MaybeMergedInst_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functors\'/7", (MR_String) "no MaybeMergedInst");
          return;
        }
      }
    else
      hlds__instmap__Inst_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MaybeMergedInst_33, (MR_Integer) 0)));
    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__instmap__STATE_VARIABLE_InstMap_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__instmap__InstMapping0_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_17, (MR_Integer) 0)));
        MR_Word hlds__instmap__InstMapping_72;

        {
          mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_9)), ((MR_Box) (hlds__instmap__Inst_16)), hlds__instmap__InstMapping0_71, &hlds__instmap__InstMapping_72);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *hlds__instmap__STATE_VARIABLE_InstMap_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_72));
        }
      }
  }
}

void MR_CALL 
hlds__instmap__bind_var_to_functor_7_p_0(
  MR_Word hlds__instmap__Var_8,
  MR_Word hlds__instmap__Type_9,
  MR_Word hlds__instmap__ConsId_10,
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_15,
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_16,
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_18)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__Inst0_13;
    MR_Word hlds__instmap__Inst_14;
    MR_Integer hlds__instmap__Arity_29;
    MR_Word hlds__instmap__ArgLives_30;
    MR_Word hlds__instmap__ArgInsts_31;
    MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_37;
    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_38;
    MR_Word hlds__instmap___Det_32;

    {
      hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__STATE_VARIABLE_InstMap_0_15, hlds__instmap__Var_8, &hlds__instmap__Inst0_13);
    }
    {
      hlds__instmap__Arity_29 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_17, hlds__instmap__Type_9, hlds__instmap__ConsId_10);
    }
    {
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_29, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_30);
    }
    {
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_29, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_31);
    }
    {
      hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__Inst0_13, hlds__instmap__ConsId_10, hlds__instmap__ArgInsts_31, hlds__instmap__ArgLives_30, (MR_Integer) 0, hlds__instmap__Type_9, &hlds__instmap__STATE_VARIABLE_Inst_23_37, &hlds__instmap___Det_32, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_17, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_38);
    }
    if (hlds__instmap__succeeded)
      {
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_18 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_38;
        hlds__instmap__Inst_14 = hlds__instmap__STATE_VARIABLE_Inst_23_37;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
          return;
        }
      }
    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__instmap__STATE_VARIABLE_InstMap_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__instmap__InstMapping0_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_15, (MR_Integer) 0)));
        MR_Word hlds__instmap__InstMapping_51;

        {
          mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_8)), ((MR_Box) (hlds__instmap__Inst_14)), hlds__instmap__InstMapping0_50, &hlds__instmap__InstMapping_51);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *hlds__instmap__STATE_VARIABLE_InstMap_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_51));
        }
      }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_bind_var_to_functors_9_p_0(
  MR_Word hlds__instmap__Var_10,
  MR_Word hlds__instmap__Type_11,
  MR_Word hlds__instmap__MainConsId_12,
  MR_Word hlds__instmap__OtherConsIds_13,
  MR_Word hlds__instmap__InstMap_14,
  MR_Word hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22,
  MR_Word * hlds__instmap__STATE_VARIABLE_InstmapDelta_23,
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_25)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__instmap__STATE_VARIABLE_InstmapDelta_23 = hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22;
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_25 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_24;
      }
    else
      {
        MR_Word hlds__instmap__InstmappingDelta0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22, (MR_Integer) 0)));
        MR_Word hlds__instmap__OldInst_18;
        MR_Word hlds__instmap__NewInst1_20;
        MR_Word hlds__instmap__NewInst_21;
        MR_Word hlds__instmap__MainFinalInst_39;
        MR_Word hlds__instmap__OtherFinalInsts_40;
        MR_Word hlds__instmap__MaybeMergedInst_41;
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_19_42;
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_20_43;
        MR_Word hlds__instmap__Var_44;
        MR_Word hlds__instmap__Var_45;
        MR_Integer hlds__instmap__Arity_58;
        MR_Word hlds__instmap__ArgLives_59;
        MR_Word hlds__instmap__ArgInsts_60;
        MR_Word hlds__instmap__NewInst0_19;
        MR_Box hlds__instmap__conv0_NewInst0_19;
        MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_66;
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_67;
        MR_Word hlds__instmap___Det_61;

        {
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_14, hlds__instmap__Var_10, &hlds__instmap__OldInst_18);
        }
        {
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstmappingDelta0_17, ((MR_Box) (hlds__instmap__Var_10)), &hlds__instmap__conv0_NewInst0_19);
        }
        if (hlds__instmap__succeeded)
          {
            hlds__instmap__NewInst0_19 = ((MR_Word) hlds__instmap__conv0_NewInst0_19);
            hlds__instmap__succeeded = MR_TRUE;
          }
        if (hlds__instmap__succeeded)
          hlds__instmap__NewInst1_20 = hlds__instmap__NewInst0_19;
        else
          hlds__instmap__NewInst1_20 = hlds__instmap__OldInst_18;
        {
          hlds__instmap__Arity_58 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_24, hlds__instmap__Type_11, hlds__instmap__MainConsId_12);
        }
        {
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_58, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_59);
        }
        {
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_58, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_60);
        }
        {
          hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__NewInst1_20, hlds__instmap__MainConsId_12, hlds__instmap__ArgInsts_60, hlds__instmap__ArgLives_59, (MR_Integer) 0, hlds__instmap__Type_11, &hlds__instmap__STATE_VARIABLE_Inst_23_66, &hlds__instmap___Det_61, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_24, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_67);
        }
        if (hlds__instmap__succeeded)
          {
            hlds__instmap__STATE_VARIABLE_ModuleInfo_19_42 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_67;
            hlds__instmap__MainFinalInst_39 = hlds__instmap__STATE_VARIABLE_Inst_23_66;
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
              return;
            }
          }
        {
          hlds__instmap__bind_inst_to_functors_others_6_p_0(hlds__instmap__Type_11, hlds__instmap__OtherConsIds_13, hlds__instmap__NewInst1_20, &hlds__instmap__OtherFinalInsts_40, hlds__instmap__STATE_VARIABLE_ModuleInfo_19_42, &hlds__instmap__STATE_VARIABLE_ModuleInfo_20_43);
        }
        {
          hlds__instmap__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__instmap__Var_44, 0) = ((MR_Box) (hlds__instmap__MainFinalInst_39));
          MR_hl_field(MR_mktag(1), hlds__instmap__Var_44, 1) = ((MR_Box) (hlds__instmap__OtherFinalInsts_40));
        }
        {
          hlds__instmap__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__instmap__Var_45, 0) = ((MR_Box) (hlds__instmap__Type_11));
        }
        {
          hlds__instmap__merge_var_insts_5_p_0(hlds__instmap__Var_44, hlds__instmap__Var_45, hlds__instmap__STATE_VARIABLE_ModuleInfo_20_43, hlds__instmap__STATE_VARIABLE_ModuleInfo_25, &hlds__instmap__MaybeMergedInst_41);
        }
        if ((hlds__instmap__MaybeMergedInst_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functors\'/7", (MR_String) "no MaybeMergedInst");
              return;
            }
          }
        else
          hlds__instmap__NewInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MaybeMergedInst_41, (MR_Integer) 0)));
        {
          hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__NewInst_21, hlds__instmap__OldInst_18);
        }
        if (hlds__instmap__succeeded)
          *hlds__instmap__STATE_VARIABLE_InstmapDelta_23 = hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22;
        else
          {
            MR_Word hlds__instmap__InstMapping0_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstmapDelta_0_22, (MR_Integer) 0)));

            hlds__instmap__succeeded = (hlds__instmap__NewInst_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            if (hlds__instmap__succeeded)
              *hlds__instmap__STATE_VARIABLE_InstmapDelta_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Word hlds__instmap__InstMapping_81;

                {
                  mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_10)), ((MR_Box) (hlds__instmap__NewInst_21)), hlds__instmap__InstMapping0_79, &hlds__instmap__InstMapping_81);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__instmap__STATE_VARIABLE_InstmapDelta_23 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_81));
                }
              }
          }
      }
  }
}

static void MR_CALL 
hlds__instmap__merge_var_insts_5_p_0(
  MR_Word hlds__instmap__Insts_6,
  MR_Word hlds__instmap__MaybeType_7,
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_17,
  MR_Word * hlds__instmap__MaybeMergedInst_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__instmap__succeeded;
        MR_Word hlds__instmap__MergedInsts_10;
        MR_Word hlds__instmap__Error_11;
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19;

        {
          hlds__instmap__merge_var_insts_pass_8_p_0(hlds__instmap__Insts_6, hlds__instmap__MaybeType_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__instmap__MergedInsts_10, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_16, &hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19, (MR_Integer) 0, &hlds__instmap__Error_11);
        }
        switch (hlds__instmap__Error_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if ((hlds__instmap__MergedInsts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *hlds__instmap__MaybeMergedInst_9 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__instmap_scalar_common_6[0]);
                *hlds__instmap__STATE_VARIABLE_ModuleInfo_17 = hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19;
              }
            else
              {
                MR_Word hlds__instmap__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MergedInsts_10, (MR_Integer) 1)));
                MR_Word hlds__instmap__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__MergedInsts_10, (MR_Integer) 0)));

                if ((hlds__instmap__Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__instmap__MaybeMergedInst_9 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Var_26));
                    }
                    *hlds__instmap__STATE_VARIABLE_ModuleInfo_17 = hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19;
                  }
                else
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word hlds__instmap__next_value_of_Insts_6 = hlds__instmap__MergedInsts_10;
                      MR_Word hlds__instmap__next_value_of_STATE_VARIABLE_ModuleInfo_0_16 = hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19;

                      hlds__instmap__STATE_VARIABLE_ModuleInfo_0_16 = hlds__instmap__next_value_of_STATE_VARIABLE_ModuleInfo_0_16;
                      hlds__instmap__Insts_6 = hlds__instmap__next_value_of_Insts_6;
                    }
                    continue;
                  }
              }
            break;
          case (MR_Integer) 1:
            {
              *hlds__instmap__MaybeMergedInst_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *hlds__instmap__STATE_VARIABLE_ModuleInfo_17 = hlds__instmap__STATE_VARIABLE_ModuleInfo_19_19;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
hlds__instmap__merge_var_insts_pass_8_p_0(
  MR_Word hlds__instmap__Insts_9,
  MR_Word hlds__instmap__MaybeType_10,
  MR_Word hlds__instmap__STATE_VARIABLE_MergedInsts_0_23,
  MR_Word * hlds__instmap__STATE_VARIABLE_MergedInsts_24,
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_26,
  MR_Word hlds__instmap__STATE_VARIABLE_Error_0_27,
  MR_Word * hlds__instmap__STATE_VARIABLE_Error_28)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__instmap__succeeded;

        if ((hlds__instmap__Insts_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = hlds__instmap__STATE_VARIABLE_MergedInsts_0_23;
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
            *hlds__instmap__STATE_VARIABLE_Error_28 = hlds__instmap__STATE_VARIABLE_Error_0_27;
          }
        else
          {
            MR_Word hlds__instmap__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Insts_9, (MR_Integer) 1)));
            MR_Word hlds__instmap__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Insts_9, (MR_Integer) 0)));

            if ((hlds__instmap__Var_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Var_69));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedInsts_0_23));
                }
                *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
                *hlds__instmap__STATE_VARIABLE_Error_28 = hlds__instmap__STATE_VARIABLE_Error_0_27;
              }
            else
              {
                MR_Word hlds__instmap__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Var_68, (MR_Integer) 1)));
                MR_Word hlds__instmap__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Var_68, (MR_Integer) 0)));

                if ((hlds__instmap__Var_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word hlds__instmap__Inst12_16;
                    MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50;

                    {
                      hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__Var_69, hlds__instmap__Var_71, hlds__instmap__MaybeType_10, &hlds__instmap__Inst12_16, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25, &hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50);
                    }
                    if (hlds__instmap__succeeded)
                      {
                        *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_50_50;
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Inst12_16));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedInsts_0_23));
                        }
                        *hlds__instmap__STATE_VARIABLE_Error_28 = hlds__instmap__STATE_VARIABLE_Error_0_27;
                      }
                    else
                      {
                        *hlds__instmap__STATE_VARIABLE_Error_28 = (MR_Integer) 1;
                        *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
                        *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = hlds__instmap__STATE_VARIABLE_MergedInsts_0_23;
                      }
                  }
                else
                  {
                    MR_Word hlds__instmap__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Var_70, (MR_Integer) 1)));
                    MR_Word hlds__instmap__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Var_70, (MR_Integer) 0)));

                    if ((hlds__instmap__Var_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word hlds__instmap__Inst123_18;
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_44_44;
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_43_43;
                        MR_Word hlds__instmap__Inst12_57;

                        {
                          hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__Var_69, hlds__instmap__Var_71, hlds__instmap__MaybeType_10, &hlds__instmap__Inst12_57, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25, &hlds__instmap__STATE_VARIABLE_ModuleInfo_43_43);
                        }
                        if (hlds__instmap__succeeded)
                          {
                            hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__Inst12_57, hlds__instmap__Var_73, hlds__instmap__MaybeType_10, &hlds__instmap__Inst123_18, hlds__instmap__STATE_VARIABLE_ModuleInfo_43_43, &hlds__instmap__STATE_VARIABLE_ModuleInfo_44_44);
                          }
                        if (hlds__instmap__succeeded)
                          {
                            *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_44_44;
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Inst123_18));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedInsts_0_23));
                            }
                            *hlds__instmap__STATE_VARIABLE_Error_28 = hlds__instmap__STATE_VARIABLE_Error_0_27;
                          }
                        else
                          {
                            *hlds__instmap__STATE_VARIABLE_Error_28 = (MR_Integer) 1;
                            *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
                            *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = hlds__instmap__STATE_VARIABLE_MergedInsts_0_23;
                          }
                      }
                    else
                      {
                        MR_Word hlds__instmap__Inst4_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Var_72, (MR_Integer) 0)));
                        MR_Word hlds__instmap__MoreInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Var_72, (MR_Integer) 1)));
                        MR_Word hlds__instmap__Inst1234_22;
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_34_34;
                        MR_Word hlds__instmap__Inst34_21;
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32;
                        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33;
                        MR_Word hlds__instmap__Inst12_62;

                        {
                          hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__Var_69, hlds__instmap__Var_71, hlds__instmap__MaybeType_10, &hlds__instmap__Inst12_62, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25, &hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32);
                        }
                        if (hlds__instmap__succeeded)
                          {
                            {
                              hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__Var_73, hlds__instmap__Inst4_19, hlds__instmap__MaybeType_10, &hlds__instmap__Inst34_21, hlds__instmap__STATE_VARIABLE_ModuleInfo_32_32, &hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33);
                            }
                            if (hlds__instmap__succeeded)
                              {
                                hlds__instmap__succeeded = check_hlds__inst_util__inst_merge_6_p_0(hlds__instmap__Inst12_62, hlds__instmap__Inst34_21, hlds__instmap__MaybeType_10, &hlds__instmap__Inst1234_22, hlds__instmap__STATE_VARIABLE_ModuleInfo_33_33, &hlds__instmap__STATE_VARIABLE_ModuleInfo_34_34);
                              }
                          }
                        if (hlds__instmap__succeeded)
                          {
                            MR_Word hlds__instmap__STATE_VARIABLE_MergedInsts_35_35;

                            {
                              hlds__instmap__STATE_VARIABLE_MergedInsts_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_MergedInsts_35_35, 0) = ((MR_Box) (hlds__instmap__Inst1234_22));
                              MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_MergedInsts_35_35, 1) = ((MR_Box) (hlds__instmap__STATE_VARIABLE_MergedInsts_0_23));
                            }
                            /* direct tailcall eliminated */
                            {
                              MR_Word hlds__instmap__next_value_of_Insts_9 = hlds__instmap__MoreInsts_20;
                              MR_Word hlds__instmap__next_value_of_STATE_VARIABLE_MergedInsts_0_23 = hlds__instmap__STATE_VARIABLE_MergedInsts_35_35;
                              MR_Word hlds__instmap__next_value_of_STATE_VARIABLE_ModuleInfo_0_25 = hlds__instmap__STATE_VARIABLE_ModuleInfo_34_34;

                              hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25 = hlds__instmap__next_value_of_STATE_VARIABLE_ModuleInfo_0_25;
                              hlds__instmap__STATE_VARIABLE_MergedInsts_0_23 = hlds__instmap__next_value_of_STATE_VARIABLE_MergedInsts_0_23;
                              hlds__instmap__Insts_9 = hlds__instmap__next_value_of_Insts_9;
                            }
                            continue;
                          }
                        else
                          {
                            *hlds__instmap__STATE_VARIABLE_Error_28 = (MR_Integer) 1;
                            *hlds__instmap__STATE_VARIABLE_ModuleInfo_26 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_25;
                            *hlds__instmap__STATE_VARIABLE_MergedInsts_24 = hlds__instmap__STATE_VARIABLE_MergedInsts_0_23;
                          }
                      }
                  }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__instmap__bind_inst_to_functors_others_6_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__HeadVar__3_3,
  MR_Word * hlds__instmap__HeadVar__4_4,
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_6)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_6 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5;
      }
    else
      {
        MR_Word hlds__instmap__ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__instmap__ConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__instmap__FinalInst_16;
        MR_Word hlds__instmap__FinalInsts_17;
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21;
        MR_Integer hlds__instmap__Arity_31;
        MR_Word hlds__instmap__ArgLives_32;
        MR_Word hlds__instmap__ArgInsts_33;
        MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_39;
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_40;
        MR_Word hlds__instmap___Det_34;

        {
          hlds__instmap__Arity_31 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5, hlds__instmap__HeadVar__1_1, hlds__instmap__ConsId_13);
        }
        {
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_31, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_32);
        }
        {
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_31, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_33);
        }
        {
          hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__HeadVar__3_3, hlds__instmap__ConsId_13, hlds__instmap__ArgInsts_33, hlds__instmap__ArgLives_32, (MR_Integer) 0, hlds__instmap__HeadVar__1_1, &hlds__instmap__STATE_VARIABLE_Inst_23_39, &hlds__instmap___Det_34, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_5, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_40);
        }
        if (hlds__instmap__succeeded)
          {
            hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_40;
            hlds__instmap__FinalInst_16 = hlds__instmap__STATE_VARIABLE_Inst_23_39;
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
              return;
            }
          }
        {
          hlds__instmap__bind_inst_to_functors_others_6_p_0(hlds__instmap__HeadVar__1_1, hlds__instmap__ConsIds_14, hlds__instmap__HeadVar__3_3, &hlds__instmap__FinalInsts_17, hlds__instmap__STATE_VARIABLE_ModuleInfo_21_21, hlds__instmap__STATE_VARIABLE_ModuleInfo_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__instmap__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__FinalInst_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__FinalInsts_17));
        }
      }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_bind_var_to_functor_8_p_0(
  MR_Word hlds__instmap__Var_9,
  MR_Word hlds__instmap__Type_10,
  MR_Word hlds__instmap__ConsId_11,
  MR_Word hlds__instmap__InstMap_12,
  MR_Word hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20,
  MR_Word * hlds__instmap__STATE_VARIABLE_InstmapDelta_21,
  MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * hlds__instmap__STATE_VARIABLE_ModuleInfo_23)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__instmap__STATE_VARIABLE_InstmapDelta_21 = hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20;
        *hlds__instmap__STATE_VARIABLE_ModuleInfo_23 = hlds__instmap__STATE_VARIABLE_ModuleInfo_0_22;
      }
    else
      {
        MR_Word hlds__instmap__InstmappingDelta0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20, (MR_Integer) 0)));
        MR_Word hlds__instmap__OldInst_16;
        MR_Word hlds__instmap__NewInst1_18;
        MR_Word hlds__instmap__NewInst_19;
        MR_Integer hlds__instmap__Arity_37;
        MR_Word hlds__instmap__ArgLives_38;
        MR_Word hlds__instmap__ArgInsts_39;
        MR_Word hlds__instmap__NewInst0_17;
        MR_Box hlds__instmap__conv0_NewInst0_17;
        MR_Word hlds__instmap__STATE_VARIABLE_Inst_23_45;
        MR_Word hlds__instmap__STATE_VARIABLE_ModuleInfo_24_46;
        MR_Word hlds__instmap___Det_40;

        {
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__InstMap_12, hlds__instmap__Var_9, &hlds__instmap__OldInst_16);
        }
        {
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstmappingDelta0_15, ((MR_Box) (hlds__instmap__Var_9)), &hlds__instmap__conv0_NewInst0_17);
        }
        if (hlds__instmap__succeeded)
          {
            hlds__instmap__NewInst0_17 = ((MR_Word) hlds__instmap__conv0_NewInst0_17);
            hlds__instmap__succeeded = MR_TRUE;
          }
        if (hlds__instmap__succeeded)
          hlds__instmap__NewInst1_18 = hlds__instmap__NewInst0_17;
        else
          hlds__instmap__NewInst1_18 = hlds__instmap__OldInst_16;
        {
          hlds__instmap__Arity_37 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(hlds__instmap__STATE_VARIABLE_ModuleInfo_0_22, hlds__instmap__Type_10, hlds__instmap__ConsId_11);
        }
        {
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, hlds__instmap__Arity_37, ((MR_Box) ((MR_Integer) 1)), &hlds__instmap__ArgLives_38);
        }
        {
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Arity_37, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__instmap__ArgInsts_39);
        }
        {
          hlds__instmap__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, hlds__instmap__NewInst1_18, hlds__instmap__ConsId_11, hlds__instmap__ArgInsts_39, hlds__instmap__ArgLives_38, (MR_Integer) 0, hlds__instmap__Type_10, &hlds__instmap__STATE_VARIABLE_Inst_23_45, &hlds__instmap___Det_40, hlds__instmap__STATE_VARIABLE_ModuleInfo_0_22, &hlds__instmap__STATE_VARIABLE_ModuleInfo_24_46);
        }
        if (hlds__instmap__succeeded)
          {
            *hlds__instmap__STATE_VARIABLE_ModuleInfo_23 = hlds__instmap__STATE_VARIABLE_ModuleInfo_24_46;
            hlds__instmap__NewInst_19 = hlds__instmap__STATE_VARIABLE_Inst_23_45;
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
              return;
            }
          }
        {
          hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__NewInst_19, hlds__instmap__OldInst_16);
        }
        if (hlds__instmap__succeeded)
          *hlds__instmap__STATE_VARIABLE_InstmapDelta_21 = hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20;
        else
          {
            MR_Word hlds__instmap__InstMapping0_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstmapDelta_0_20, (MR_Integer) 0)));

            hlds__instmap__succeeded = (hlds__instmap__NewInst_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            if (hlds__instmap__succeeded)
              *hlds__instmap__STATE_VARIABLE_InstmapDelta_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Word hlds__instmap__InstMapping_60;

                {
                  mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_9)), ((MR_Box) (hlds__instmap__NewInst_19)), hlds__instmap__InstMapping0_58, &hlds__instmap__InstMapping_60);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__instmap__STATE_VARIABLE_InstmapDelta_21 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_60));
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_2(
  MR_Box hlds__instmap__closure_arg)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

    {
      hlds__instmap__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))));
    }
    return hlds__instmap__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_1(
  MR_Box hlds__instmap__closure_arg)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

    {
      hlds__instmap__succeeded = hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__680__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))));
    }
    return hlds__instmap__succeeded;
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0(
  MR_Word hlds__instmap__Inst_5,
  MR_Word hlds__instmap__Vars_6,
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_0_10,
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapDelta_11)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__STATE_VARIABLE_InstMapDelta_0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__instmap__STATE_VARIABLE_InstMapDelta_11 = hlds__instmap__STATE_VARIABLE_InstMapDelta_0_10;
    else
      {
        MR_Word hlds__instmap__InstMapping0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMapDelta_0_10, (MR_Integer) 0)));
        MR_Word hlds__instmap__InstMapping_9;
        MR_Word hlds__instmap__Var_12;
        MR_Word hlds__instmap__Var_16;

        {
          hlds__instmap__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_16, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_16, 1) = ((MR_Box) (hlds__instmap__instmap_delta_set_vars_same_4_p_0_1));
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_16, 3) = ((MR_Box) (hlds__instmap__Inst_5));
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        }
        {
          hlds__instmap__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_12, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_12, 1) = ((MR_Box) (hlds__instmap__instmap_delta_set_vars_same_4_p_0_2));
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_12, 3) = ((MR_Box) (hlds__instmap__Var_16));
        }
        {
          mercury__require__expect_4_p_0(hlds__instmap__Var_12, (MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_delta_set_vars_same\'/4", (MR_String) "not_reached");
        }
        {
          hlds__instmap__instmapping_set_vars_same_4_p_0(hlds__instmap__Inst_5, hlds__instmap__Vars_6, hlds__instmap__InstMapping0_8, &hlds__instmap__InstMapping_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *hlds__instmap__STATE_VARIABLE_InstMapDelta_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_9));
        }
      }
  }
}

static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_2(
  MR_Box hlds__instmap__closure_arg)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

    {
      hlds__instmap__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))));
    }
    return hlds__instmap__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_1(
  MR_Box hlds__instmap__closure_arg)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

    {
      hlds__instmap__succeeded = hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__651__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))));
    }
    return hlds__instmap__succeeded;
  }
}

void MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0(
  MR_Word hlds__instmap__Inst_5,
  MR_Word hlds__instmap__Vars_6,
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_10,
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_11)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__instmap__STATE_VARIABLE_InstMap_11 = hlds__instmap__STATE_VARIABLE_InstMap_0_10;
    else
      {
        MR_Word hlds__instmap__InstMapping0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_10, (MR_Integer) 0)));
        MR_Word hlds__instmap__InstMapping_9;
        MR_Word hlds__instmap__Var_12;
        MR_Word hlds__instmap__Var_16;

        {
          hlds__instmap__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_16, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_16, 1) = ((MR_Box) (hlds__instmap__instmap_set_vars_same_4_p_0_1));
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_16, 3) = ((MR_Box) (hlds__instmap__Inst_5));
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        }
        {
          hlds__instmap__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_12, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_12, 1) = ((MR_Box) (hlds__instmap__instmap_set_vars_same_4_p_0_2));
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_12, 3) = ((MR_Box) (hlds__instmap__Var_16));
        }
        {
          mercury__require__expect_4_p_0(hlds__instmap__Var_12, (MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_set_vars_same\'/4", (MR_String) "not_reached");
        }
        {
          hlds__instmap__instmapping_set_vars_same_4_p_0(hlds__instmap__Inst_5, hlds__instmap__Vars_6, hlds__instmap__InstMapping0_8, &hlds__instmap__InstMapping_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *hlds__instmap__STATE_VARIABLE_InstMap_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_9));
        }
      }
  }
}

static void MR_CALL 
hlds__instmap__instmapping_set_vars_same_4_p_0(
  MR_Word hlds__instmap__Inst_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_3,
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__instmap__succeeded;

        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__instmap__STATE_VARIABLE_InstMapping_4 = hlds__instmap__STATE_VARIABLE_InstMapping_0_3;
        else
          {
            MR_Word hlds__instmap__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__instmap__Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_15_15;

            {
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_10)), ((MR_Box) (hlds__instmap__Inst_1)), hlds__instmap__STATE_VARIABLE_InstMapping_0_3, &hlds__instmap__STATE_VARIABLE_InstMapping_15_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__instmap__next_value_of_HeadVar__2_2 = hlds__instmap__Vars_11;
              MR_Word hlds__instmap__next_value_of_STATE_VARIABLE_InstMapping_0_3 = hlds__instmap__STATE_VARIABLE_InstMapping_15_15;

              hlds__instmap__STATE_VARIABLE_InstMapping_0_3 = hlds__instmap__next_value_of_STATE_VARIABLE_InstMapping_0_3;
              hlds__instmap__HeadVar__2_2 = hlds__instmap__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
hlds__instmap__instmap_set_vars_corresponding_4_p_0(
  MR_Word hlds__instmap__Vars_5,
  MR_Word hlds__instmap__Insts_6,
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_10,
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_11)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__instmap__STATE_VARIABLE_InstMap_11 = hlds__instmap__STATE_VARIABLE_InstMap_0_10;
    else
      {
        MR_Word hlds__instmap__InstMapping0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_10, (MR_Integer) 0)));
        MR_Word hlds__instmap__InstMapping_9;

        {
          hlds__instmap__instmapping_set_vars_corresponding_4_p_0(hlds__instmap__Vars_5, hlds__instmap__Insts_6, hlds__instmap__InstMapping0_8, &hlds__instmap__InstMapping_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *hlds__instmap__STATE_VARIABLE_InstMap_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_9));
        }
      }
  }
}

static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_2(
  MR_Box hlds__instmap__closure_arg)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

    {
      hlds__instmap__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))));
    }
    return hlds__instmap__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_1(
  MR_Box hlds__instmap__closure_arg)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

    {
      hlds__instmap__succeeded = hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__637__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))));
    }
    return hlds__instmap__succeeded;
  }
}

static void MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__HeadVar__3_3,
  MR_Word * hlds__instmap__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__instmap__succeeded;

        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *hlds__instmap__HeadVar__4_4 = hlds__instmap__HeadVar__3_3;
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmapping_set_vars_corresponding\'/4", (MR_String) "length mismatch (2)");
                return;
              }
            }
        else
          {
            MR_Word hlds__instmap__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__instmap__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

            if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmapping_set_vars_corresponding\'/4", (MR_String) "length mismatch (1)");
                  return;
                }
              }
            else
              {
                MR_Word hlds__instmap__Inst_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word hlds__instmap__Insts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word hlds__instmap__Var_15;
                MR_Word hlds__instmap__Var_19;
                MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_21_21;

                {
                  hlds__instmap__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__instmap__Var_19, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
                  MR_hl_field(MR_mktag(0), hlds__instmap__Var_19, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_corresponding_4_p_0_1));
                  MR_hl_field(MR_mktag(0), hlds__instmap__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), hlds__instmap__Var_19, 3) = ((MR_Box) (hlds__instmap__Inst_10));
                  MR_hl_field(MR_mktag(0), hlds__instmap__Var_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                }
                {
                  hlds__instmap__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__instmap__Var_15, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
                  MR_hl_field(MR_mktag(0), hlds__instmap__Var_15, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_corresponding_4_p_0_2));
                  MR_hl_field(MR_mktag(0), hlds__instmap__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), hlds__instmap__Var_15, 3) = ((MR_Box) (hlds__instmap__Var_19));
                }
                {
                  mercury__require__expect_4_p_0(hlds__instmap__Var_15, (MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmapping_set_vars_corresponding\'/4", (MR_String) "not_reached");
                }
                {
                  mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_43)), ((MR_Box) (hlds__instmap__Inst_10)), hlds__instmap__HeadVar__3_3, &hlds__instmap__STATE_VARIABLE_InstMapping_21_21);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__instmap__next_value_of_HeadVar__1_1 = hlds__instmap__Var_42;
                  MR_Word hlds__instmap__next_value_of_HeadVar__2_2 = hlds__instmap__Insts_11;
                  MR_Word hlds__instmap__next_value_of_HeadVar__3_3 = hlds__instmap__STATE_VARIABLE_InstMapping_21_21;

                  hlds__instmap__HeadVar__3_3 = hlds__instmap__next_value_of_HeadVar__3_3;
                  hlds__instmap__HeadVar__2_2 = hlds__instmap__next_value_of_HeadVar__2_2;
                  hlds__instmap__HeadVar__1_1 = hlds__instmap__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

void MR_CALL 
hlds__instmap__instmap_set_vars_3_p_0(
  MR_Word hlds__instmap__VarsInsts_4,
  MR_Word hlds__instmap__STATE_VARIABLE_InstMap_0_8,
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMap_9)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__STATE_VARIABLE_InstMap_0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__instmap__STATE_VARIABLE_InstMap_9 = hlds__instmap__STATE_VARIABLE_InstMap_0_8;
    else
      {
        MR_Word hlds__instmap__InstMapping0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__STATE_VARIABLE_InstMap_0_8, (MR_Integer) 0)));
        MR_Word hlds__instmap__InstMapping_7;

        {
          hlds__instmap__instmapping_set_vars_3_p_0(hlds__instmap__VarsInsts_4, hlds__instmap__InstMapping0_6, &hlds__instmap__InstMapping_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *hlds__instmap__STATE_VARIABLE_InstMap_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_7));
        }
      }
  }
}

static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_2(
  MR_Box hlds__instmap__closure_arg)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

    {
      hlds__instmap__succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))));
    }
    return hlds__instmap__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_1(
  MR_Box hlds__instmap__closure_arg)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;

    {
      hlds__instmap__succeeded = hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__615__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 4))));
    }
    return hlds__instmap__succeeded;
  }
}

static void MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_0_2,
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapping_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__instmap__succeeded;

        if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__instmap__STATE_VARIABLE_InstMapping_3 = hlds__instmap__STATE_VARIABLE_InstMapping_0_2;
        else
          {
            MR_Word hlds__instmap__Var_7;
            MR_Word hlds__instmap__Inst_8;
            MR_Word hlds__instmap__VarsInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__instmap__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__instmap__Var_14;
            MR_Word hlds__instmap__Var_18;
            MR_Word hlds__instmap__STATE_VARIABLE_InstMapping_20_20;

            hlds__instmap__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__Var_13, (MR_Integer) 0)));
            hlds__instmap__Inst_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__Var_13, (MR_Integer) 1)));
            {
              hlds__instmap__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__instmap__Var_18, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
              MR_hl_field(MR_mktag(0), hlds__instmap__Var_18, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_3_p_0_1));
              MR_hl_field(MR_mktag(0), hlds__instmap__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), hlds__instmap__Var_18, 3) = ((MR_Box) (hlds__instmap__Inst_8));
              MR_hl_field(MR_mktag(0), hlds__instmap__Var_18, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            }
            {
              hlds__instmap__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__instmap__Var_14, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), hlds__instmap__Var_14, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_3_p_0_2));
              MR_hl_field(MR_mktag(0), hlds__instmap__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), hlds__instmap__Var_14, 3) = ((MR_Box) (hlds__instmap__Var_18));
            }
            {
              mercury__require__expect_4_p_0(hlds__instmap__Var_14, (MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmapping_set_vars\'/3", (MR_String) "not_reached");
            }
            {
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__Var_7)), ((MR_Box) (hlds__instmap__Inst_8)), hlds__instmap__STATE_VARIABLE_InstMapping_0_2, &hlds__instmap__STATE_VARIABLE_InstMapping_20_20);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__instmap__next_value_of_HeadVar__1_1 = hlds__instmap__VarsInsts_9;
              MR_Word hlds__instmap__next_value_of_STATE_VARIABLE_InstMapping_0_2 = hlds__instmap__STATE_VARIABLE_InstMapping_20_20;

              hlds__instmap__STATE_VARIABLE_InstMapping_0_2 = hlds__instmap__next_value_of_STATE_VARIABLE_InstMapping_0_2;
              hlds__instmap__HeadVar__1_1 = hlds__instmap__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
hlds__instmap__instmap_set_var_4_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__HeadVar__3_3,
  MR_Word * hlds__instmap__HeadVar__4_4)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__instmap__InstMapping0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__instmap__InstMapping_10;

        {
          mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__HeadVar__1_1)), ((MR_Box) (hlds__instmap__HeadVar__2_2)), hlds__instmap__InstMapping0_9, &hlds__instmap__InstMapping_10);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *hlds__instmap__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_10));
        }
      }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_insert_var_4_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__HeadVar__3_3,
  MR_Word * hlds__instmap__HeadVar__4_4)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__instmap__InstMapping0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));

        hlds__instmap__succeeded = (hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        if (hlds__instmap__succeeded)
          *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word hlds__instmap__InstMapping_11;

            {
              mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__HeadVar__1_1)), ((MR_Box) (hlds__instmap__HeadVar__2_2)), hlds__instmap__InstMapping0_9, &hlds__instmap__InstMapping_11);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *hlds__instmap__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_11));
            }
          }
      }
  }
}

void MR_CALL 
hlds__instmap__instmap_lookup_vars_3_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word * hlds__instmap__HeadVar__3_3)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__instmap__Arg_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__instmap__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__instmap__Inst_8;
        MR_Word hlds__instmap__Insts_9;

        {
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__HeadVar__1_1, hlds__instmap__Arg_6, &hlds__instmap__Inst_8);
        }
        {
          hlds__instmap__instmap_lookup_vars_3_p_0(hlds__instmap__HeadVar__1_1, hlds__instmap__Args_7, &hlds__instmap__Insts_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__instmap__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__Inst_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__instmap__Insts_9));
        }
      }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_lookup_var_3_p_0(
  MR_Word hlds__instmap__InstMapDelta_4,
  MR_Word hlds__instmap__Var_5,
  MR_Word * hlds__instmap__Inst_6)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__InstPrime_7;

    if ((hlds__instmap__InstMapDelta_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__instmap__InstPrime_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        hlds__instmap__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word hlds__instmap__InstMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_4, (MR_Integer) 0)));
        MR_Box hlds__instmap__conv0_InstPrime_7;

        {
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMap_12, ((MR_Box) (hlds__instmap__Var_5)), &hlds__instmap__conv0_InstPrime_7);
        }
        if (hlds__instmap__succeeded)
          {
            hlds__instmap__InstPrime_7 = ((MR_Word) hlds__instmap__conv0_InstPrime_7);
            hlds__instmap__succeeded = MR_TRUE;
          }
      }
    if (hlds__instmap__succeeded)
      *hlds__instmap__Inst_6 = hlds__instmap__InstPrime_7;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_delta_lookup_var\'/3", (MR_String) "var not in instmap");
          return;
        }
      }
  }
}

MR_bool MR_CALL 
hlds__instmap__instmap_delta_search_var_3_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__Var_2,
  MR_Word * hlds__instmap__HeadVar__3_3)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        hlds__instmap__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word hlds__instmap__InstMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
        MR_Box hlds__instmap__conv0_HeadVar__3_3;

        {
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMap_5, ((MR_Box) (hlds__instmap__Var_2)), &hlds__instmap__conv0_HeadVar__3_3);
        }
        if (hlds__instmap__succeeded)
          {
            *hlds__instmap__HeadVar__3_3 = ((MR_Word) hlds__instmap__conv0_HeadVar__3_3);
            hlds__instmap__succeeded = MR_TRUE;
          }
      }
    return hlds__instmap__succeeded;
  }
}

void MR_CALL 
hlds__instmap__instmap_changed_vars_5_p_0(
  MR_Word hlds__instmap__InstMapA_6,
  MR_Word hlds__instmap__InstMapB_7,
  MR_Word hlds__instmap__VarTypes_8,
  MR_Word hlds__instmap__ModuleInfo_9,
  MR_Word * hlds__instmap__ChangedVars_10)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__InstMapB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__ChangedVars_10);
        }
      }
    else
      {
        MR_Word hlds__instmap__VarsB_11;
        MR_Word hlds__instmap__InstMapping_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__InstMapB_7, (MR_Integer) 0)));

        {
          mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_12, &hlds__instmap__VarsB_11);
        }
        {
          hlds__instmap__instmap_changed_vars_2_6_p_0(hlds__instmap__VarsB_11, hlds__instmap__InstMapA_6, hlds__instmap__InstMapB_7, hlds__instmap__VarTypes_8, hlds__instmap__ModuleInfo_9, hlds__instmap__ChangedVars_10);
        }
      }
  }
}

static void MR_CALL 
hlds__instmap__instmap_changed_vars_2_6_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__HeadVar__3_3,
  MR_Word hlds__instmap__HeadVar__4_4,
  MR_Word hlds__instmap__HeadVar__5_5,
  MR_Word * hlds__instmap__ChangedVars_6)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__ChangedVars_6);
        }
      }
    else
      {
        MR_Word hlds__instmap__VarB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__instmap__VarBs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__instmap__ChangedVars0_19;
        MR_Word hlds__instmap__InitialInst_20;
        MR_Word hlds__instmap__FinalInst_21;
        MR_Word hlds__instmap__Type_22;

        {
          hlds__instmap__instmap_changed_vars_2_6_p_0(hlds__instmap__VarBs_13, hlds__instmap__HeadVar__2_2, hlds__instmap__HeadVar__3_3, hlds__instmap__HeadVar__4_4, hlds__instmap__HeadVar__5_5, &hlds__instmap__ChangedVars0_19);
        }
        {
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__HeadVar__2_2, hlds__instmap__VarB_12, &hlds__instmap__InitialInst_20);
        }
        {
          hlds__instmap__instmap_lookup_var_3_p_0(hlds__instmap__HeadVar__3_3, hlds__instmap__VarB_12, &hlds__instmap__FinalInst_21);
        }
        {
          hlds__vartypes__lookup_var_type_3_p_0(hlds__instmap__HeadVar__4_4, hlds__instmap__VarB_12, &hlds__instmap__Type_22);
        }
        {
          hlds__instmap__succeeded = check_hlds__inst_match__inst_matches_final_typed_4_p_0(hlds__instmap__InitialInst_20, hlds__instmap__FinalInst_21, hlds__instmap__Type_22, hlds__instmap__HeadVar__5_5);
        }
        if (hlds__instmap__succeeded)
          *hlds__instmap__ChangedVars_6 = hlds__instmap__ChangedVars0_19;
        else
          {
            {
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__VarB_12, hlds__instmap__ChangedVars0_19, hlds__instmap__ChangedVars_6);
            }
          }
      }
  }
}

void MR_CALL 
hlds__instmap__instmap_lookup_var_3_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word * hlds__instmap__HeadVar__3_3)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
    else
      {
        MR_Word hlds__instmap__InstMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__instmap__VarInst_11;
        MR_Box hlds__instmap__conv0_VarInst_11;

        {
          hlds__instmap__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMap_5, ((MR_Box) (hlds__instmap__HeadVar__2_2)), &hlds__instmap__conv0_VarInst_11);
        }
        if (hlds__instmap__succeeded)
          {
            hlds__instmap__VarInst_11 = ((MR_Word) hlds__instmap__conv0_VarInst_11);
            hlds__instmap__succeeded = MR_TRUE;
          }
        if (hlds__instmap__succeeded)
          *hlds__instmap__HeadVar__3_3 = hlds__instmap__VarInst_11;
        else
          *hlds__instmap__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
  }
}

static void MR_CALL 
hlds__instmap__instmap_bound_vars_3_p_0_1(
  MR_Box hlds__instmap__closure_arg,
  MR_Box hlds__instmap__wrapper_arg_1,
  MR_Box hlds__instmap__wrapper_arg_2,
  MR_Box hlds__instmap__wrapper_arg_3,
  MR_Box * hlds__instmap__wrapper_arg_4)
{
  {
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;
    MR_Word hlds__instmap__conv0_STATE_VARIABLE_BoundVars_11;

    {
      hlds__instmap__instmap_bound_vars_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__closure, (MR_Integer) 3))), ((MR_Word) hlds__instmap__wrapper_arg_1), ((MR_Word) hlds__instmap__wrapper_arg_2), ((MR_Word) hlds__instmap__wrapper_arg_3), &hlds__instmap__conv0_STATE_VARIABLE_BoundVars_11);
    }
    *hlds__instmap__wrapper_arg_4 = ((MR_Box) (hlds__instmap__conv0_STATE_VARIABLE_BoundVars_11));
  }
}

void MR_CALL 
hlds__instmap__instmap_bound_vars_3_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word * hlds__instmap__HeadVar__3_3)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *hlds__instmap__HeadVar__3_3 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
      }
    else
      {
        MR_Word hlds__instmap__InstMapping_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__instmap__Var_8;
        MR_Word hlds__instmap__Var_9;
        MR_Box hlds__instmap__conv1_HeadVar__3_3;

        {
          hlds__instmap__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_8, 0) = ((MR_Box) (&hlds__instmap_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_8, 1) = ((MR_Box) (hlds__instmap__instmap_bound_vars_3_p_0_1));
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), hlds__instmap__Var_8, 3) = ((MR_Box) (hlds__instmap__HeadVar__2_2));
        }
        {
          hlds__instmap__Var_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
        {
          mercury__map__foldl_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__instmap_scalar_common_1[1], hlds__instmap__Var_8, hlds__instmap__InstMapping_5, ((MR_Box) (hlds__instmap__Var_9)), &hlds__instmap__conv1_HeadVar__3_3);
        }
        *hlds__instmap__HeadVar__3_3 = ((MR_Word) hlds__instmap__conv1_HeadVar__3_3);
      }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_changed_vars_2_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word * hlds__instmap__HeadVar__2_2)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__HeadVar__2_2);
        }
      }
    else
      {
        MR_Word hlds__instmap__InstMapping_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__instmap__ChangedVarsList_6;

        {
          mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_4, &hlds__instmap__ChangedVarsList_6);
        }
        {
          parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__ChangedVarsList_6, hlds__instmap__HeadVar__2_2);
        }
      }
  }
}

void MR_CALL 
hlds__instmap__instmap_vars_list_2_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word * hlds__instmap__HeadVar__2_2)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__instmap__InstMapping_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));

        {
          mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_3, hlds__instmap__HeadVar__2_2);
        }
      }
  }
}

void MR_CALL 
hlds__instmap__instmap_vars_2_p_0(
  MR_Word hlds__instmap__Instmap_3,
  MR_Word * hlds__instmap__Vars_4)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__VarsList_5;

    if ((hlds__instmap__Instmap_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__instmap__VarsList_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__instmap__InstMapping_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__Instmap_3, (MR_Integer) 0)));

        {
          mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__InstMapping_7, &hlds__instmap__VarsList_5);
        }
      }
    {
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__instmap__VarsList_5, hlds__instmap__Vars_4);
    }
  }
}

static MR_Box MR_CALL 
hlds__instmap__instmap_delta_bind_vars_1_f_0_1(
  MR_Box hlds__instmap__closure_arg,
  MR_Box hlds__instmap__wrapper_arg_1)
{
  {
    MR_Box hlds__instmap__wrapper_arg_2;
    MR_Box hlds__instmap__closure = hlds__instmap__closure_arg;
    MR_Word hlds__instmap__conv0_HeadVar__2_2;

    {
      hlds__instmap__conv0_HeadVar__2_2 = hlds__instmap__pair_with_ground_1_f_0(((MR_Word) hlds__instmap__wrapper_arg_1));
    }
    hlds__instmap__wrapper_arg_2 = ((MR_Box) (hlds__instmap__conv0_HeadVar__2_2));
    return hlds__instmap__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
hlds__instmap__instmap_delta_bind_vars_1_f_0(
  MR_Word hlds__instmap__Vars_3)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__InstMapDelta_4;
    MR_Word hlds__instmap__VarsAndGround_5;
    MR_Word hlds__instmap__Instmapping_14;

    {
      hlds__instmap__VarsAndGround_5 = mercury__list__map_2_f_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &hlds__instmap_scalar_common_2[0], (MR_Word) &hlds__instmap_scalar_common_2[3], hlds__instmap__Vars_3);
    }
    {
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__VarsAndGround_5, &hlds__instmap__Instmapping_14);
    }
    {
      hlds__instmap__InstMapDelta_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_4, 0) = ((MR_Box) (hlds__instmap__Instmapping_14));
    }
    return hlds__instmap__InstMapDelta_4;
  }
}

MR_Word MR_CALL 
hlds__instmap__instmap_delta_bind_var_1_f_0(
  MR_Word hlds__instmap__Var_3)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__InstMapDelta_4;
    MR_Word hlds__instmap__Var_5;
    MR_Word hlds__instmap__Var_6;
    MR_Word hlds__instmap__Instmapping_13;

    {
      hlds__instmap__Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__instmap__Var_6, 0) = ((MR_Box) (hlds__instmap__Var_3));
      MR_hl_field(MR_mktag(0), hlds__instmap__Var_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__instmap_scalar_common_2[2])));
    }
    {
      hlds__instmap__Var_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__instmap__Var_5, 0) = ((MR_Box) (hlds__instmap__Var_6));
      MR_hl_field(MR_mktag(1), hlds__instmap__Var_5, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__Var_5, &hlds__instmap__Instmapping_13);
    }
    {
      hlds__instmap__InstMapDelta_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_4, 0) = ((MR_Box) (hlds__instmap__Instmapping_13));
    }
    return hlds__instmap__InstMapDelta_4;
  }
}

MR_Word MR_CALL 
hlds__instmap__instmap_delta_bind_no_var_0_f_0(void)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__InstMapDelta_2;
    MR_Word hlds__instmap__Instmapping_5;

    {
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__instmap__Instmapping_5);
    }
    {
      hlds__instmap__InstMapDelta_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta_2, 0) = ((MR_Box) (hlds__instmap__Instmapping_5));
    }
    return hlds__instmap__InstMapDelta_2;
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_from_from_to_insts_list_4_p_0(
  MR_Word hlds__instmap__ModuleInfo_5,
  MR_Word hlds__instmap__Var_6,
  MR_Word hlds__instmap__FromToInsts_7,
  MR_Word * hlds__instmap__InstMapDelta_8)
{
  {
    MR_bool hlds__instmap__succeeded;

    {
      hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_102_114_111_109_95_102_114_111_109_95_116_111_95_105_110_115_116_115_95_108_105_115_116_95_95_91_49_93_95_48_4_p_0(hlds__instmap__Var_6, hlds__instmap__FromToInsts_7, hlds__instmap__InstMapDelta_8);
    }
  }
}

void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_102_114_111_109_95_102_114_111_109_95_116_111_95_105_110_115_116_115_95_108_105_115_116_95_95_91_49_93_95_48_4_p_0(
  MR_Word hlds__instmap__Var_6,
  MR_Word hlds__instmap__FromToInsts_7,
  MR_Word * hlds__instmap__InstMapDelta_8)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__InstMapDelta0_9;
    MR_Word hlds__instmap__InstMapping_10;

    {
      mercury__map__init_1_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &hlds__instmap__InstMapping_10);
    }
    {
      hlds__instmap__InstMapDelta0_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta0_9, 0) = ((MR_Box) (hlds__instmap__InstMapping_10));
    }
    {
      hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_102_114_111_109_95_102_114_111_109_95_116_111_95_105_110_115_116_115_95_108_105_115_116_95_50_95_95_91_49_93_95_48_5_p_0(hlds__instmap__Var_6, hlds__instmap__FromToInsts_7, hlds__instmap__InstMapDelta0_9, hlds__instmap__InstMapDelta_8);
    }
  }
}

static void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_102_114_111_109_95_102_114_111_109_95_116_111_95_105_110_115_116_115_95_108_105_115_116_95_50_95_95_91_49_93_95_48_5_p_0(
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__HeadVar__3_3,
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4,
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapDelta_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__instmap__succeeded;

        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *hlds__instmap__STATE_VARIABLE_InstMapDelta_5 = hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4;
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_delta_from_from_to_insts_list_2\'/5", (MR_String) "length mismatch");
                return;
              }
            }
        else
          {
            MR_Word hlds__instmap__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__instmap__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));

            if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_delta_from_from_to_insts_list_2\'/5", (MR_String) "length mismatch");
                  return;
                }
              }
            else
              {
                MR_Word hlds__instmap__FromToInst_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));
                MR_Word hlds__instmap__FromToInsts_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 1)));
                MR_Word hlds__instmap__InitInst_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__FromToInst_31, (MR_Integer) 0)));
                MR_Word hlds__instmap__FinalInst_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__instmap__FromToInst_31, (MR_Integer) 1)));
                MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_38_38;

                {
                  hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__InitInst_34, hlds__instmap__FinalInst_35);
                }
                if (hlds__instmap__succeeded)
                  hlds__instmap__STATE_VARIABLE_InstMapDelta_38_38 = hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4;
                else
                  {
                    hlds__instmap__instmap_delta_set_var_4_p_0(hlds__instmap__Var_41, hlds__instmap__FinalInst_35, hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4, &hlds__instmap__STATE_VARIABLE_InstMapDelta_38_38);
                  }
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__instmap__next_value_of_HeadVar__2_2 = hlds__instmap__Var_40;
                  MR_Word hlds__instmap__next_value_of_HeadVar__3_3 = hlds__instmap__FromToInsts_32;
                  MR_Word hlds__instmap__next_value_of_STATE_VARIABLE_InstMapDelta_0_4 = hlds__instmap__STATE_VARIABLE_InstMapDelta_38_38;

                  hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4 = hlds__instmap__next_value_of_STATE_VARIABLE_InstMapDelta_0_4;
                  hlds__instmap__HeadVar__3_3 = hlds__instmap__next_value_of_HeadVar__3_3;
                  hlds__instmap__HeadVar__2_2 = hlds__instmap__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

void MR_CALL 
hlds__instmap__instmap_delta_from_mode_list_4_p_0(
  MR_Word hlds__instmap__ModuleInfo_5,
  MR_Word hlds__instmap__Var_6,
  MR_Word hlds__instmap__Modes_7,
  MR_Word * hlds__instmap__InstMapDelta_8)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__InstMapDelta0_9;
    MR_Word hlds__instmap__InstMapping_10;

    {
      mercury__map__init_1_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &hlds__instmap__InstMapping_10);
    }
    {
      hlds__instmap__InstMapDelta0_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__instmap__InstMapDelta0_9, 0) = ((MR_Box) (hlds__instmap__InstMapping_10));
    }
    {
      hlds__instmap__instmap_delta_from_mode_list_2_5_p_0(hlds__instmap__ModuleInfo_5, hlds__instmap__Var_6, hlds__instmap__Modes_7, hlds__instmap__InstMapDelta0_9, hlds__instmap__InstMapDelta_8);
    }
  }
}

static void MR_CALL 
hlds__instmap__instmap_delta_from_mode_list_2_5_p_0(
  MR_Word hlds__instmap__ModuleInfo_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__HeadVar__3_3,
  MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4,
  MR_Word * hlds__instmap__STATE_VARIABLE_InstMapDelta_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__instmap__succeeded;

        if ((hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *hlds__instmap__STATE_VARIABLE_InstMapDelta_5 = hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4;
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_delta_from_mode_list_2\'/5", (MR_String) "length mismatch");
                return;
              }
            }
        else
          {
            MR_Word hlds__instmap__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__instmap__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, (MR_Integer) 0)));

            if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.instmap", (MR_String) "predicate \140hlds.instmap.instmap_delta_from_mode_list_2\'/5", (MR_String) "length mismatch");
                  return;
                }
              }
            else
              {
                MR_Word hlds__instmap__Mode_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));
                MR_Word hlds__instmap__Modes_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 1)));
                MR_Word hlds__instmap__InitInst_34;
                MR_Word hlds__instmap__FinalInst_35;
                MR_Word hlds__instmap__STATE_VARIABLE_InstMapDelta_38_38;

                {
                  check_hlds__mode_util__mode_get_insts_4_p_0(hlds__instmap__ModuleInfo_1, hlds__instmap__Mode_31, &hlds__instmap__InitInst_34, &hlds__instmap__FinalInst_35);
                }
                {
                  hlds__instmap__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(hlds__instmap__InitInst_34, hlds__instmap__FinalInst_35);
                }
                if (hlds__instmap__succeeded)
                  hlds__instmap__STATE_VARIABLE_InstMapDelta_38_38 = hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4;
                else
                  {
                    hlds__instmap__instmap_delta_set_var_4_p_0(hlds__instmap__Var_41, hlds__instmap__FinalInst_35, hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4, &hlds__instmap__STATE_VARIABLE_InstMapDelta_38_38);
                  }
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__instmap__next_value_of_HeadVar__2_2 = hlds__instmap__Var_40;
                  MR_Word hlds__instmap__next_value_of_HeadVar__3_3 = hlds__instmap__Modes_32;
                  MR_Word hlds__instmap__next_value_of_STATE_VARIABLE_InstMapDelta_0_4 = hlds__instmap__STATE_VARIABLE_InstMapDelta_38_38;

                  hlds__instmap__STATE_VARIABLE_InstMapDelta_0_4 = hlds__instmap__next_value_of_STATE_VARIABLE_InstMapDelta_0_4;
                  hlds__instmap__HeadVar__3_3 = hlds__instmap__next_value_of_HeadVar__3_3;
                  hlds__instmap__HeadVar__2_2 = hlds__instmap__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

void MR_CALL 
hlds__instmap__instmap_delta_set_var_4_p_0(
  MR_Word hlds__instmap__HeadVar__1_1,
  MR_Word hlds__instmap__HeadVar__2_2,
  MR_Word hlds__instmap__HeadVar__3_3,
  MR_Word * hlds__instmap__HeadVar__4_4)
{
  {
    MR_bool hlds__instmap__succeeded;

    if ((hlds__instmap__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__instmap__InstMapping0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__3_3, (MR_Integer) 0)));

        hlds__instmap__succeeded = (hlds__instmap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        if (hlds__instmap__succeeded)
          *hlds__instmap__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word hlds__instmap__InstMapping_11;

            {
              mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (hlds__instmap__HeadVar__1_1)), ((MR_Box) (hlds__instmap__HeadVar__2_2)), hlds__instmap__InstMapping0_9, &hlds__instmap__InstMapping_11);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *hlds__instmap__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_11));
            }
          }
      }
  }
}

MR_Word MR_CALL 
hlds__instmap__instmap_delta_from_assoc_list_1_f_0(
  MR_Word hlds__instmap__AL_3)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__HeadVar__2_2;
    MR_Word hlds__instmap__Instmapping_4;

    {
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__AL_3, &hlds__instmap__Instmapping_4);
    }
    {
      hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, 0) = ((MR_Box) (hlds__instmap__Instmapping_4));
    }
    return hlds__instmap__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__instmap__instmap_from_assoc_list_1_f_0(
  MR_Word hlds__instmap__AL_3)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__HeadVar__2_2;
    MR_Word hlds__instmap__Instmapping_4;

    {
      mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__instmap__AL_3, &hlds__instmap__Instmapping_4);
    }
    {
      hlds__instmap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__2_2, 0) = ((MR_Box) (hlds__instmap__Instmapping_4));
    }
    return hlds__instmap__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
hlds__instmap__instmap_delta_is_unreachable_1_p_0(
  MR_Word hlds__instmap__HeadVar__1_1)
{
  {
    MR_bool hlds__instmap__succeeded = (hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    return hlds__instmap__succeeded;
  }
}

MR_bool MR_CALL 
hlds__instmap__instmap_delta_is_reachable_1_p_0(
  MR_Word hlds__instmap__HeadVar__1_1)
{
  {
    MR_bool hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word hlds__instmap__Var_2;

    if (hlds__instmap__succeeded)
      hlds__instmap__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
    return hlds__instmap__succeeded;
  }
}

MR_bool MR_CALL 
hlds__instmap__instmap_is_unreachable_1_p_0(
  MR_Word hlds__instmap__HeadVar__1_1)
{
  {
    MR_bool hlds__instmap__succeeded = (hlds__instmap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    return hlds__instmap__succeeded;
  }
}

MR_bool MR_CALL 
hlds__instmap__instmap_is_reachable_1_p_0(
  MR_Word hlds__instmap__HeadVar__1_1)
{
  {
    MR_bool hlds__instmap__succeeded = ((MR_tag((MR_Word) hlds__instmap__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word hlds__instmap__Var_2;

    if (hlds__instmap__succeeded)
      hlds__instmap__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__instmap__HeadVar__1_1, (MR_Integer) 0)));
    return hlds__instmap__succeeded;
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_init_unreachable_1_p_0(
  MR_Word * hlds__instmap__HeadVar__1_1)
{
  {
    MR_bool hlds__instmap__succeeded;

    *hlds__instmap__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_init_reachable_1_p_0(
  MR_Word * hlds__instmap__HeadVar__1_1)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__InstMapping_2;

    {
      mercury__map__init_1_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &hlds__instmap__InstMapping_2);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *hlds__instmap__HeadVar__1_1 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_2));
    }
  }
}

void MR_CALL 
hlds__instmap__init_unreachable_1_p_0(
  MR_Word * hlds__instmap__HeadVar__1_1)
{
  {
    MR_bool hlds__instmap__succeeded;

    *hlds__instmap__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

void MR_CALL 
hlds__instmap__init_reachable_1_p_0(
  MR_Word * hlds__instmap__HeadVar__1_1)
{
  {
    MR_bool hlds__instmap__succeeded;
    MR_Word hlds__instmap__InstMapping_2;

    {
      mercury__map__init_1_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &hlds__instmap__InstMapping_2);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *hlds__instmap__HeadVar__1_1 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__instmap__InstMapping_2));
    }
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__instmap__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.instmap. */
