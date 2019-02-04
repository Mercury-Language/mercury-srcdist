/*
** Automatically generated from `instmap.m'
** by the Mercury compiler,
** version rotd-2018-05-15
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module hlds.instmap.
// :- implementation.

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
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
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
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__637__1_2_p_0(
  MR_Word Inst_10,
  MR_Word HeadVar__2_19);

static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__615__1_2_p_0(
  MR_Word Inst_8,
  MR_Word HeadVar__2_18);

static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__680__1_2_p_0(
  MR_Word Inst_5,
  MR_Word HeadVar__2_16);

static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__651__1_2_p_0(
  MR_Word Inst_5,
  MR_Word HeadVar__2_16);

static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
hlds__instmap__var_is_not_output_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTypes_7,
  MR_Word InstMap0_8,
  MR_Word InstMapDeltaMap_9,
  MR_Word Var_10);

static void MR_CALL 
hlds__instmap__arm_instmap_project_context_2_p_0(
  MR_Word ArmErrorInfo_3,
  MR_Word * Context_4);

static void MR_CALL 
hlds__instmap__lookup_var_in_arm_instmap_3_p_0(
  MR_Word Var_4,
  MR_Word ArmInstMap_5,
  MR_Word * Inst_6);

static void MR_CALL 
hlds__instmap__instmap_bound_vars_2_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Var_7,
  MR_Word Inst_8,
  MR_Word STATE_VARIABLE_BoundVars_0_10,
  MR_Word * STATE_VARIABLE_BoundVars_11);

static MR_Word MR_CALL 
hlds__instmap__pair_with_ground_1_f_0(
  MR_Word Var_3);

static void MR_CALL 
hlds__instmap__instmap_delta_apply_sub_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Instmapping_0_4,
  MR_Word * STATE_VARIABLE_Instmapping_5);

static void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMappingA_3,
  MR_Word InstMappingB_4,
  MR_Word STATE_VARIABLE_InstMapping_0_5,
  MR_Word * STATE_VARIABLE_InstMapping_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8);

static void MR_CALL 
hlds__instmap__merge_instmap_deltas_2_8_p_0(
  MR_Word InstMap_9,
  MR_Word NonLocals_10,
  MR_Word VarTypes_11,
  MR_Word Deltas_12,
  MR_Word STATE_VARIABLE_MergedDeltas_0_24,
  MR_Word * STATE_VARIABLE_MergedDeltas_25,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27);

static void MR_CALL 
hlds__instmap__merge_instmapping_delta_2_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMap_2,
  MR_Word VarTypes_3,
  MR_Word InstMappingA_4,
  MR_Word InstMappingB_5,
  MR_Word STATE_VARIABLE_InstMapping_0_6,
  MR_Word * STATE_VARIABLE_InstMapping_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static MR_bool MR_CALL 
hlds__instmap__instmap_delta_no_output_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArmInstMaps_2,
  MR_Word VarTypes_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7,
  MR_Word * HeadVar__8_8);

static void MR_CALL 
hlds__instmap__get_reachable_instmaps_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
hlds__instmap__compute_instmap_delta_for_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMappingA_2,
  MR_Word InstMappingB_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__instmap__merge_var_insts_5_p_0(
  MR_Word Insts_6,
  MR_Word MaybeType_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word * MaybeMergedInst_9);

static void MR_CALL 
hlds__instmap__merge_var_insts_pass_8_p_0(
  MR_Word Insts_9,
  MR_Word MaybeType_10,
  MR_Word STATE_VARIABLE_MergedInsts_0_23,
  MR_Word * STATE_VARIABLE_MergedInsts_24,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26,
  MR_Word STATE_VARIABLE_Error_0_27,
  MR_Word * STATE_VARIABLE_Error_28);

static void MR_CALL 
hlds__instmap__bind_inst_to_functors_others_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6);

static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__instmap__instmapping_set_vars_same_4_p_0(
  MR_Word Inst_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_InstMapping_0_3,
  MR_Word * STATE_VARIABLE_InstMapping_4);

static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InstMapping_0_2,
  MR_Word * STATE_VARIABLE_InstMapping_3);

static void MR_CALL 
hlds__instmap__instmap_changed_vars_2_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * ChangedVars_6);

static void MR_CALL 
hlds__instmap__instmap_bound_vars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
hlds__instmap__instmap_delta_bind_vars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_102_114_111_109_95_102_114_111_109_95_116_111_95_105_110_115_116_115_95_108_105_115_116_95_50_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_InstMapDelta_0_4,
  MR_Word * STATE_VARIABLE_InstMapDelta_5);

static void MR_CALL 
hlds__instmap__instmap_delta_from_mode_list_2_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_InstMapDelta_0_4,
  MR_Word * STATE_VARIABLE_InstMapDelta_5);

static MR_bool MR_CALL 
hlds__instmap____Unify____arm_instmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__instmap____Compare____arm_instmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__instmap____Compare____instmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_delta_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__instmap____Compare____instmap_delta_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__instmap____Unify____overlay_how_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__instmap____Compare____overlay_how_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__instmap__hlds__instmap__field_types_arm_instmap_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__instmap__hlds__instmap__du_stag_ordered_arm_instmap_0_0[1] = {
  &hlds__instmap__hlds__instmap__du_functor_desc_arm_instmap_0_0
};

static const MR_DuPtagLayout hlds__instmap__hlds__instmap__du_ptag_ordered_arm_instmap_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  MR_TYPECTOR_REP_DU,
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
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__instmap__hlds__instmap__field_types_instmap_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__instmap__hlds__instmap__du_functor_desc_instmap_0_1 = {
  (MR_String) "unreachable",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_LOCAL,
    hlds__instmap__hlds__instmap__du_stag_ordered_instmap_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  MR_TYPECTOR_REP_DU,
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
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  MR_TYPECTOR_REP_ENUM,
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
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__637__1_2_p_0(
  MR_Word Inst_10,
  MR_Word HeadVar__2_19)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Inst_10, HeadVar__2_19);
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__615__1_2_p_0(
  MR_Word Inst_8,
  MR_Word HeadVar__2_18)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Inst_8, HeadVar__2_18);
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__680__1_2_p_0(
  MR_Word Inst_5,
  MR_Word HeadVar__2_16)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Inst_5, HeadVar__2_16);
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__651__1_2_p_0(
  MR_Word Inst_5,
  MR_Word HeadVar__2_16)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Inst_5, HeadVar__2_16);
    return succeeded;
  }
}

void MR_CALL 
hlds__instmap____Compare____overlay_how_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__instmap____Unify____overlay_how_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &hlds__instmap_scalar_common_2[1], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__instmap_scalar_common_2[1], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__instmap____Compare____instmap_delta_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    hlds__instmap____Compare____instmap_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__instmap____Unify____instmap_delta_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = hlds__instmap____Unify____instmap_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
hlds__instmap____Compare____arm_instmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      mercury__term____Compare____context_0_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        hlds__instmap____Compare____instmap_0_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

void MR_CALL 
hlds__instmap____Compare____instmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_9 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      if ((HeadVar__3_3 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        mercury__builtin__compare_3_p_0((MR_Word) &hlds__instmap_scalar_common_2[1], HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_5)));
      }
    }
  }
}

MR_bool MR_CALL 
hlds__instmap____Unify____arm_instmap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = mercury__term____Unify____context_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = hlds__instmap____Unify____instmap_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__instmap____Unify____instmap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
      MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

      succeeded = (CastY_6 == CastX_5);
    }
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        TypeInfo_9_9 = (MR_Word) &hlds__instmap_scalar_common_2[1];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__instmap__var_is_not_output_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTypes_7,
  MR_Word InstMap0_8,
  MR_Word InstMapDeltaMap_9,
  MR_Word Var_10)
{
  {
    MR_bool succeeded;
    MR_Word OldInst_11;
    MR_Word NewInst_12;
    MR_Box conv0_NewInst_12;

    hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_8, Var_10, &OldInst_11);
    succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstMapDeltaMap_9, ((MR_Box) (Var_10)), &conv0_NewInst_12);
    if (succeeded)
    {
      NewInst_12 = ((MR_Word) conv0_NewInst_12);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Type_13;

      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_7, Var_10, &Type_13);
      succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(NewInst_12, OldInst_11, Type_13, ModuleInfo_6);
    }
    else
    {
      succeeded = check_hlds__inst_util__inst_contains_any_2_p_0(ModuleInfo_6, OldInst_11);
      succeeded = !(succeeded);
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__instmap__arm_instmap_project_context_2_p_0(
  MR_Word ArmErrorInfo_3,
  MR_Word * Context_4)
{
  {
    MR_Word _InstMap_5;

    *Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArmErrorInfo_3, (MR_Integer) 0)));
    _InstMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArmErrorInfo_3, (MR_Integer) 1)));
  }
}

static void MR_CALL 
hlds__instmap__lookup_var_in_arm_instmap_3_p_0(
  MR_Word Var_4,
  MR_Word ArmInstMap_5,
  MR_Word * Inst_6)
{
  {
    MR_Word InstMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArmInstMap_5, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArmInstMap_5, (MR_Integer) 0)));

    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_8, Var_4, Inst_6);
  }
}

static void MR_CALL 
hlds__instmap__instmap_bound_vars_2_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Var_7,
  MR_Word Inst_8,
  MR_Word STATE_VARIABLE_BoundVars_0_10,
  MR_Word * STATE_VARIABLE_BoundVars_11)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_6, Inst_8);
    if (succeeded)
    {
      parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_7, STATE_VARIABLE_BoundVars_0_10, STATE_VARIABLE_BoundVars_11);
    }
    else
      *STATE_VARIABLE_BoundVars_11 = STATE_VARIABLE_BoundVars_0_10;
  }
}

static MR_Word MR_CALL 
hlds__instmap__pair_with_ground_1_f_0(
  MR_Word Var_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_3));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__instmap_scalar_common_2[2])));
    }
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
hlds__instmap__var_is_bound_in_instmap_delta_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word InstMap_6,
  MR_Word InstMapDelta_7,
  MR_Word Var_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) InstMap_6)) == (MR_mktag((MR_Integer) 1)));
    MR_Word TypeInfo_8_17;
    MR_Word TypeCtorInfo_9_18;
    MR_Word OldVarInst_9;
    MR_Word VarInst_10;
    MR_Word InstMap_14;
    MR_Word InstMap_20;
    MR_Word Var_12;
    MR_Word VarInst_26;
    MR_Word TypeInfo_8_27;
    MR_Word TypeCtorInfo_9_28;
    MR_Box conv0_VarInst_26;
    MR_Box conv1_VarInst_10;

    if (succeeded)
    {
      InstMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstMap_6, (MR_Integer) 0)));
      succeeded = ((MR_tag((MR_Word) InstMapDelta_7)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstMapDelta_7, (MR_Integer) 0)));
        TypeInfo_8_27 = (MR_Word) &hlds__instmap_scalar_common_1[0];
        TypeCtorInfo_9_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
        succeeded = mercury__map__search_3_p_0(TypeInfo_8_27, TypeCtorInfo_9_28, InstMap_20, ((MR_Box) (Var_8)), &conv0_VarInst_26);
        if (succeeded)
        {
          VarInst_26 = ((MR_Word) conv0_VarInst_26);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          OldVarInst_9 = VarInst_26;
        else
          OldVarInst_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_5, OldVarInst_9);
        if (succeeded)
        {
          InstMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstMapDelta_7, (MR_Integer) 0)));
          TypeInfo_8_17 = (MR_Word) &hlds__instmap_scalar_common_1[0];
          TypeCtorInfo_9_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
          succeeded = mercury__map__search_3_p_0(TypeInfo_8_17, TypeCtorInfo_9_18, InstMap_14, ((MR_Box) (Var_8)), &conv1_VarInst_10);
          if (succeeded)
          {
            VarInst_10 = ((MR_Word) conv1_VarInst_10);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_5, VarInst_10);
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__instmap__var_is_any_in_instmap_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word InstMap_5,
  MR_Word Var_6)
{
  {
    MR_bool succeeded;
    MR_Word Inst_7;

    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_5, Var_6, &Inst_7);
    succeeded = check_hlds__inst_test__inst_is_any_2_p_0(ModuleInfo_4, Inst_7);
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__instmap__var_is_ground_in_instmap_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word InstMap_5,
  MR_Word Var_6)
{
  {
    MR_bool succeeded;
    MR_Word Inst_7;

    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_5, Var_6, &Inst_7);
    succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_4, Inst_7);
    return succeeded;
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_map_foldl_5_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_T_0_4,
  MR_Box * STATE_VARIABLE_T_5)
{
  if ((HeadVar__2_2 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  {
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_T_5 = STATE_VARIABLE_T_0_4;
  }
  else
  {
    MR_Word Instmapping0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Instmapping_12;

    mercury__map__map_foldl_5_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, TypeInfo_for_T_17, P_1, Instmapping0_11, &Instmapping_12, STATE_VARIABLE_T_0_4, STATE_VARIABLE_T_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instmapping_12));
    }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_to_assoc_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word InstMapping_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

    mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstMapping_3, HeadVar__2_2);
  }
}

void MR_CALL 
hlds__instmap__instmap_to_assoc_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word InstMapping_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

    mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstMapping_3, HeadVar__2_2);
  }
}

void MR_CALL 
hlds__instmap__instmap_apply_sub_4_p_0(
  MR_Word Must_5,
  MR_Word Renaming_6,
  MR_Word InstMap0_7,
  MR_Word * InstMap_8)
{
  hlds__instmap__instmap_delta_apply_sub_4_p_0(Must_5, Renaming_6, InstMap0_7, InstMap_8);
}

void MR_CALL 
hlds__instmap__instmap_delta_apply_sub_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word OldInstMapping_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word InstMapping_10;
    MR_Word InstMappingAL_11;
    MR_Word Var_12;

    mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, OldInstMapping_9, &InstMappingAL_11);
    Var_12 = mercury__map__init_0_f_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    hlds__instmap__instmap_delta_apply_sub_2_5_p_0(InstMappingAL_11, HeadVar__1_1, HeadVar__2_2, Var_12, &InstMapping_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapping_10));
    }
  }
}

static void MR_CALL 
hlds__instmap__instmap_delta_apply_sub_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Instmapping_0_4,
  MR_Word * STATE_VARIABLE_Instmapping_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      *STATE_VARIABLE_Instmapping_5 = STATE_VARIABLE_Instmapping_0_4;
    else
    {
      MR_Word Var0_11;
      MR_Word Inst_12;
      MR_Word VarInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_17;
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word STATE_VARIABLE_Instmapping_21_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Instmapping_0_4;

      Var0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0)));
      Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1)));
      parse_tree__prog_rename__rename_var_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, HeadVar__2_2, HeadVar__3_3, Var0_11, &Var_17);
      mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (Var_17)), ((MR_Box) (Inst_12)), STATE_VARIABLE_Instmapping_0_4, &STATE_VARIABLE_Instmapping_21_21);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = VarInsts0_13;
      next_value_of_STATE_VARIABLE_Instmapping_0_4 = STATE_VARIABLE_Instmapping_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Instmapping_0_4 = next_value_of_STATE_VARIABLE_Instmapping_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__instmap__unify_instmap_delta_7_p_0(
  MR_Word InstMap_1,
  MR_Word NonLocals_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7)
{
  hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_p_0(NonLocals_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, STATE_VARIABLE_ModuleInfo_0_6, STATE_VARIABLE_ModuleInfo_7);
}

void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_95_91_49_93_95_48_7_p_0(
  MR_Word NonLocals_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7)
{
  if ((HeadVar__3_3 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  {
    *HeadVar__5_5 = HeadVar__4_4;
    *STATE_VARIABLE_ModuleInfo_7 = STATE_VARIABLE_ModuleInfo_0_6;
  }
  else
  {
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

    if ((HeadVar__4_4 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      *HeadVar__5_5 = HeadVar__3_3;
      *STATE_VARIABLE_ModuleInfo_7 = STATE_VARIABLE_ModuleInfo_0_6;
    }
    else
    {
      MR_Word InstMappingB_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      MR_Word InstMapping_24;
      MR_Word VarsInA_38;
      MR_Word VarsInB_39;
      MR_Word SetofVarsInA_40;
      MR_Word SetofVars0_41;
      MR_Word SetofVars_42;
      MR_Word ListofVars_43;
      MR_Word Var_44;

      mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, Var_29, &VarsInA_38);
      mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstMappingB_23, &VarsInB_39);
      parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarsInA_38, &SetofVarsInA_40);
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarsInB_39, SetofVarsInA_40, &SetofVars0_41);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, SetofVars0_41, NonLocals_2, &SetofVars_42);
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, SetofVars_42, &ListofVars_43);
      Var_44 = mercury__map__init_0_f_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
      hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_p_0(ListofVars_43, Var_29, InstMappingB_23, Var_44, &InstMapping_24, STATE_VARIABLE_ModuleInfo_0_6, STATE_VARIABLE_ModuleInfo_7);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapping_24));
      }
    }
  }
}

static void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_105_110_115_116_109_97_112_112_105_110_103_95_100_101_108_116_97_95_50_95_95_91_50_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMappingA_3,
  MR_Word InstMappingB_4,
  MR_Word STATE_VARIABLE_InstMapping_0_5,
  MR_Word * STATE_VARIABLE_InstMapping_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
      *STATE_VARIABLE_InstMapping_6 = STATE_VARIABLE_InstMapping_0_5;
    }
    else
    {
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_InstMapping_36_36;
      MR_Word STATE_VARIABLE_ModuleInfo_39_39;
      MR_Word InstA_25;
      MR_Box conv0_InstA_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_InstMapping_0_5;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_7;

      succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstMappingA_3, ((MR_Box) (Var_18)), &conv0_InstA_25);
      if (succeeded)
      {
        InstA_25 = ((MR_Word) conv0_InstA_25);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word InstB_26;
        MR_Box conv1_InstB_26;

        succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstMappingB_4, ((MR_Box) (Var_18)), &conv1_InstB_26);
        if (succeeded)
        {
          InstB_26 = ((MR_Word) conv1_InstB_26);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Inst_27;
          MR_Word STATE_VARIABLE_ModuleInfo_35_35;
          MR_Word _Det_28;

          succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 0, InstA_25, InstB_26, (MR_Integer) 1, &Inst_27, &_Det_28, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_35_35);
          if (succeeded)
          {
            STATE_VARIABLE_ModuleInfo_39_39 = STATE_VARIABLE_ModuleInfo_35_35;
            mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (Var_18)), ((MR_Box) (Inst_27)), STATE_VARIABLE_InstMapping_0_5, &STATE_VARIABLE_InstMapping_36_36);
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.unify_instmapping_delta_2\'/8", (MR_String) "unexpected error");
              return;
            }
          }
        }
        else
        {
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (Var_18)), ((MR_Box) (InstA_25)), STATE_VARIABLE_InstMapping_0_5, &STATE_VARIABLE_InstMapping_36_36);
          STATE_VARIABLE_ModuleInfo_39_39 = STATE_VARIABLE_ModuleInfo_0_7;
        }
      }
      else
      {
        MR_Word InstB_44;
        MR_Box conv2_InstB_44;

        succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstMappingB_4, ((MR_Box) (Var_18)), &conv2_InstB_44);
        if (succeeded)
        {
          InstB_44 = ((MR_Word) conv2_InstB_44);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (Var_18)), ((MR_Box) (InstB_44)), STATE_VARIABLE_InstMapping_0_5, &STATE_VARIABLE_InstMapping_36_36);
        }
        else
          STATE_VARIABLE_InstMapping_36_36 = STATE_VARIABLE_InstMapping_0_5;
        STATE_VARIABLE_ModuleInfo_39_39 = STATE_VARIABLE_ModuleInfo_0_7;
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Vars_19;
      next_value_of_STATE_VARIABLE_InstMapping_0_5 = STATE_VARIABLE_InstMapping_36_36;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_7 = STATE_VARIABLE_ModuleInfo_39_39;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_InstMapping_0_5 = next_value_of_STATE_VARIABLE_InstMapping_0_5;
      STATE_VARIABLE_ModuleInfo_0_7 = next_value_of_STATE_VARIABLE_ModuleInfo_0_7;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__instmap__merge_instmap_deltas_7_p_0(
  MR_Word InstMap_8,
  MR_Word NonLocals_9,
  MR_Word VarTypes_10,
  MR_Word Deltas_11,
  MR_Word * MergedDelta_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19)
{
  while (MR_TRUE)
  {
    MR_Word MergedDeltas_14;
    MR_Word STATE_VARIABLE_ModuleInfo_21_21;

    // setup for model_det tailcalls optimized into a loop
    hlds__instmap__merge_instmap_deltas_2_8_p_0(InstMap_8, NonLocals_9, VarTypes_10, Deltas_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &MergedDeltas_14, STATE_VARIABLE_ModuleInfo_0_18, &STATE_VARIABLE_ModuleInfo_21_21);
    if ((MergedDeltas_14 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.merge_instmap_deltas\'/7", (MR_String) "empty instmap_delta list.");
        return;
      }
    }
    else
    {
      MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), MergedDeltas_14, (MR_Integer) 1)));
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), MergedDeltas_14, (MR_Integer) 0)));

      if ((Var_27 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      {
        *MergedDelta_12 = Var_28;
        *STATE_VARIABLE_ModuleInfo_19 = STATE_VARIABLE_ModuleInfo_21_21;
      }
      else
      {
        MR_Word next_value_of_Deltas_11 = MergedDeltas_14;
        MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_18 = STATE_VARIABLE_ModuleInfo_21_21;

        // direct tailcall eliminated
        Deltas_11 = next_value_of_Deltas_11;
        STATE_VARIABLE_ModuleInfo_0_18 = next_value_of_STATE_VARIABLE_ModuleInfo_0_18;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__instmap__merge_instmap_deltas_2_8_p_0(
  MR_Word InstMap_9,
  MR_Word NonLocals_10,
  MR_Word VarTypes_11,
  MR_Word Deltas_12,
  MR_Word STATE_VARIABLE_MergedDeltas_0_24,
  MR_Word * STATE_VARIABLE_MergedDeltas_25,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((Deltas_12 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      *STATE_VARIABLE_MergedDeltas_25 = STATE_VARIABLE_MergedDeltas_0_24;
      *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
    }
    else
    {
      MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), Deltas_12, (MR_Integer) 1)));
      MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), Deltas_12, (MR_Integer) 0)));

      if ((Var_57 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_MergedDeltas_25 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_MergedDeltas_0_24));
        }
        *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
      }
      else
      {
        MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_57, (MR_Integer) 1)));
        MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_57, (MR_Integer) 0)));

        if ((Var_59 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
        {
          MR_Word Delta12_17;

          hlds__instmap__merge_instmap_delta_8_p_0(InstMap_9, NonLocals_10, VarTypes_11, Var_58, Var_60, &Delta12_17, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_MergedDeltas_25 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Delta12_17));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_MergedDeltas_0_24));
          }
        }
        else
        {
          MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_59, (MR_Integer) 1)));
          MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_59, (MR_Integer) 0)));

          if ((Var_61 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
          {
            MR_Word Delta123_19;
            MR_Word STATE_VARIABLE_ModuleInfo_40_40;
            MR_Word Delta12_52;

            hlds__instmap__merge_instmap_delta_8_p_0(InstMap_9, NonLocals_10, VarTypes_11, Var_58, Var_60, &Delta12_52, STATE_VARIABLE_ModuleInfo_0_26, &STATE_VARIABLE_ModuleInfo_40_40);
            hlds__instmap__merge_instmap_delta_8_p_0(InstMap_9, NonLocals_10, VarTypes_11, Delta12_52, Var_62, &Delta123_19, STATE_VARIABLE_ModuleInfo_40_40, STATE_VARIABLE_ModuleInfo_27);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_MergedDeltas_25 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Delta123_19));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_MergedDeltas_0_24));
            }
          }
          else
          {
            MR_Word Delta4_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_61, (MR_Integer) 0)));
            MR_Word MoreDeltas_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_61, (MR_Integer) 1)));
            MR_Word Delta34_22;
            MR_Word Delta1234_23;
            MR_Word STATE_VARIABLE_ModuleInfo_31_31;
            MR_Word STATE_VARIABLE_ModuleInfo_32_32;
            MR_Word STATE_VARIABLE_ModuleInfo_33_33;
            MR_Word STATE_VARIABLE_MergedDeltas_34_34;
            MR_Word Delta12_55;
            MR_Word next_value_of_Deltas_12;
            MR_Word next_value_of_STATE_VARIABLE_MergedDeltas_0_24;
            MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_26;

            hlds__instmap__merge_instmap_delta_8_p_0(InstMap_9, NonLocals_10, VarTypes_11, Var_58, Var_60, &Delta12_55, STATE_VARIABLE_ModuleInfo_0_26, &STATE_VARIABLE_ModuleInfo_31_31);
            hlds__instmap__merge_instmap_delta_8_p_0(InstMap_9, NonLocals_10, VarTypes_11, Var_62, Delta4_20, &Delta34_22, STATE_VARIABLE_ModuleInfo_31_31, &STATE_VARIABLE_ModuleInfo_32_32);
            hlds__instmap__merge_instmap_delta_8_p_0(InstMap_9, NonLocals_10, VarTypes_11, Delta12_55, Delta34_22, &Delta1234_23, STATE_VARIABLE_ModuleInfo_32_32, &STATE_VARIABLE_ModuleInfo_33_33);
            {
              STATE_VARIABLE_MergedDeltas_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_MergedDeltas_34_34, 0) = ((MR_Box) (Delta1234_23));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_MergedDeltas_34_34, 1) = ((MR_Box) (STATE_VARIABLE_MergedDeltas_0_24));
            }
            // direct tailcall eliminated
            next_value_of_Deltas_12 = MoreDeltas_21;
            next_value_of_STATE_VARIABLE_MergedDeltas_0_24 = STATE_VARIABLE_MergedDeltas_34_34;
            next_value_of_STATE_VARIABLE_ModuleInfo_0_26 = STATE_VARIABLE_ModuleInfo_33_33;
            Deltas_12 = next_value_of_Deltas_12;
            STATE_VARIABLE_MergedDeltas_0_24 = next_value_of_STATE_VARIABLE_MergedDeltas_0_24;
            STATE_VARIABLE_ModuleInfo_0_26 = next_value_of_STATE_VARIABLE_ModuleInfo_0_26;
            continue;
          }
        }
      }
    }
    break;
  }
}

void MR_CALL 
hlds__instmap__merge_instmap_delta_8_p_0(
  MR_Word InstMap_1,
  MR_Word NonLocals_2,
  MR_Word VarTypes_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  if ((HeadVar__4_4 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  {
    *HeadVar__6_6 = HeadVar__5_5;
    *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
  }
  else
  {
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));

    if ((HeadVar__5_5 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      *HeadVar__6_6 = HeadVar__4_4;
      *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
    }
    else
    {
      MR_Word InstMappingB_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0)));
      MR_Word InstMapping_28;
      MR_Word VarsInA_43;
      MR_Word VarsInB_44;
      MR_Word SetofVarsInA_45;
      MR_Word SetofVars0_46;
      MR_Word SetofVars_47;
      MR_Word ListofVars_48;
      MR_Word Var_49;

      mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, Var_33, &VarsInA_43);
      mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstMappingB_27, &VarsInB_44);
      parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarsInA_43, &SetofVarsInA_45);
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarsInB_44, SetofVarsInA_45, &SetofVars0_46);
      parse_tree__set_of_var__intersect_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, SetofVars0_46, NonLocals_2, &SetofVars_47);
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, SetofVars_47, &ListofVars_48);
      Var_49 = mercury__map__init_0_f_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
      hlds__instmap__merge_instmapping_delta_2_9_p_0(ListofVars_48, InstMap_1, VarTypes_3, Var_33, InstMappingB_27, Var_49, &InstMapping_28, STATE_VARIABLE_ModuleInfo_0_7, STATE_VARIABLE_ModuleInfo_8);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapping_28));
      }
    }
  }
}

static void MR_CALL 
hlds__instmap__merge_instmapping_delta_2_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMap_2,
  MR_Word VarTypes_3,
  MR_Word InstMappingA_4,
  MR_Word InstMappingB_5,
  MR_Word STATE_VARIABLE_InstMapping_0_6,
  MR_Word * STATE_VARIABLE_InstMapping_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      *STATE_VARIABLE_ModuleInfo_9 = STATE_VARIABLE_ModuleInfo_0_8;
      *STATE_VARIABLE_InstMapping_7 = STATE_VARIABLE_InstMapping_0_6;
    }
    else
    {
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word InstA_29;
      MR_Word InstB_31;
      MR_Word STATE_VARIABLE_InstMapping_43_43;
      MR_Word STATE_VARIABLE_ModuleInfo_49_49;
      MR_Word InstInA_28;
      MR_Box conv0_InstInA_28;
      MR_Word InstInB_30;
      MR_Box conv1_InstInB_30;
      MR_Word Inst1_33;
      MR_Word STATE_VARIABLE_ModuleInfo_42_42;
      MR_Word VarType_32;
      MR_Word Var_41;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_InstMapping_0_6;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_8;

      succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstMappingA_4, ((MR_Box) (Var_20)), &conv0_InstInA_28);
      if (succeeded)
      {
        InstInA_28 = ((MR_Word) conv0_InstInA_28);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        InstA_29 = InstInA_28;
      else
        hlds__instmap__instmap_lookup_var_3_p_0(InstMap_2, Var_20, &InstA_29);
      succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstMappingB_5, ((MR_Box) (Var_20)), &conv1_InstInB_30);
      if (succeeded)
      {
        InstInB_30 = ((MR_Word) conv1_InstInB_30);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        InstB_31 = InstInB_30;
      else
        hlds__instmap__instmap_lookup_var_3_p_0(InstMap_2, Var_20, &InstB_31);
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_3, Var_20, &VarType_32);
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (VarType_32));
      }
      succeeded = check_hlds__inst_util__inst_merge_6_p_0(InstA_29, InstB_31, Var_41, &Inst1_33, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_42_42);
      if (succeeded)
      {
        STATE_VARIABLE_ModuleInfo_49_49 = STATE_VARIABLE_ModuleInfo_42_42;
        mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (Var_20)), ((MR_Box) (Inst1_33)), STATE_VARIABLE_InstMapping_0_6, &STATE_VARIABLE_InstMapping_43_43);
      }
      else
      {
        MR_Integer VarInt_35;
        MR_String Msg_36;
        MR_String Var_59;

        mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_20, &VarInt_35);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__instmap_scalar_common_6[1], VarInt_35, &Var_59);
        Msg_36 = mercury__string__f_43_43_2_f_0((MR_String) "merge_instmapping_delta_2: error merging var ", Var_59);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.merge_instmapping_delta_2\'/9", Msg_36);
          return;
        }
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Vars_21;
      next_value_of_STATE_VARIABLE_InstMapping_0_6 = STATE_VARIABLE_InstMapping_43_43;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_8 = STATE_VARIABLE_ModuleInfo_49_49;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_InstMapping_0_6 = next_value_of_STATE_VARIABLE_InstMapping_0_6;
      STATE_VARIABLE_ModuleInfo_0_8 = next_value_of_STATE_VARIABLE_ModuleInfo_0_8;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__instmap__instmap_delta_no_output_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__instmap__var_is_not_output_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__instmap__instmap_delta_no_output_vars_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTypes_7,
  MR_Word InstMap0_8,
  MR_Word InstMapDelta_9,
  MR_Word Vars_10)
{
  {
    MR_bool succeeded;

    if ((InstMapDelta_9 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      succeeded = MR_TRUE;
    else
    {
      MR_Word InstMapDeltaMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstMapDelta_9, (MR_Integer) 0)));
      MR_Word Test_12;

      {
        Test_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Test_12, 0) = ((MR_Box) (&hlds__instmap_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Test_12, 1) = ((MR_Box) (hlds__instmap__instmap_delta_no_output_vars_5_p_0_1));
        MR_hl_field(MR_mktag(0), Test_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Test_12, 3) = ((MR_Box) (ModuleInfo_6));
        MR_hl_field(MR_mktag(0), Test_12, 4) = ((MR_Box) (VarTypes_7));
        MR_hl_field(MR_mktag(0), Test_12, 5) = ((MR_Box) (InstMap0_8));
        MR_hl_field(MR_mktag(0), Test_12, 6) = ((MR_Box) (InstMapDeltaMap_11));
      }
      succeeded = parse_tree__set_of_var__all_true_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Test_12, Vars_10);
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_delete_vars_3_p_0(
  MR_Word Vars_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word InstMapping0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word InstMapping_7;

    mercury__map__delete_list_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, Vars_1, InstMapping0_6, &InstMapping_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapping_7));
    }
  }
}

void MR_CALL 
hlds__instmap__instmap_restrict_3_p_0(
  MR_Word Vars_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word InstMapping0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word InstMapping_7;
    MR_Word Var_8;

    Var_8 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Vars_1);
    mercury__map__select_sorted_list_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstMapping0_6, Var_8, &InstMapping_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapping_7));
    }
  }
}

void MR_CALL 
hlds__instmap__instmap_merge_5_p_0(
  MR_Word NonLocals_6,
  MR_Word ArmInstMaps_7,
  MR_Word MergeContext_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_27,
  MR_Word * STATE_VARIABLE_ModeInfo_28)
{
  {
    MR_bool succeeded;
    MR_Word InstMap0_10;
    MR_Word ModuleInfo0_11;
    MR_Word ReachableInstMappingList_12;
    MR_Word InstMap_26;
    MR_Word STATE_VARIABLE_ModeInfo_31_31;
    MR_Word InstMapping0_13;
    MR_Word Var_14;
    MR_Word Var_15;

    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_27, &InstMap0_10);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_27, &ModuleInfo0_11);
    hlds__instmap__get_reachable_instmaps_2_p_0(ArmInstMaps_7, &ReachableInstMappingList_12);
    succeeded = ((MR_tag((MR_Word) ReachableInstMappingList_12)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ReachableInstMappingList_12, (MR_Integer) 0)));
      Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ReachableInstMappingList_12, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) InstMap0_10)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
        InstMapping0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstMap0_10, (MR_Integer) 0)));
    }
    if (succeeded)
    {
      MR_Word NonLocalsList_16;
      MR_Word VarTypes_17;
      MR_Word InstMapping_18;
      MR_Word ModuleInfo_19;
      MR_Word ErrorList_20;
      MR_Word STATE_VARIABLE_ModeInfo_29_29;

      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocals_6, &NonLocalsList_16);
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(STATE_VARIABLE_ModeInfo_0_27, &VarTypes_17);
      hlds__instmap__merge_insts_of_vars_8_p_0(NonLocalsList_16, ArmInstMaps_7, VarTypes_17, InstMapping0_13, &InstMapping_18, ModuleInfo0_11, &ModuleInfo_19, &ErrorList_20);
      check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_19, STATE_VARIABLE_ModeInfo_0_27, &STATE_VARIABLE_ModeInfo_29_29);
      if ((ErrorList_20 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
        STATE_VARIABLE_ModeInfo_31_31 = STATE_VARIABLE_ModeInfo_29_29;
      else
      {
        MR_Word FirstError_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ErrorList_20, (MR_Integer) 0)));
        MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstError_21, (MR_Integer) 0)));
        MR_Word WaitingVars_25;
        MR_Word Var_30;
        MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ErrorList_20, (MR_Integer) 1)));
        MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstError_21, (MR_Integer) 1)));

        WaitingVars_25 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_23);
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MergeContext_8));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (ErrorList_20));
        }
        check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_25, Var_30, STATE_VARIABLE_ModeInfo_29_29, &STATE_VARIABLE_ModeInfo_31_31);
      }
      {
        InstMap_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), InstMap_26, 0) = ((MR_Box) (InstMapping_18));
      }
    }
    else
    {
      InstMap_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      STATE_VARIABLE_ModeInfo_31_31 = STATE_VARIABLE_ModeInfo_0_27;
    }
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_26, STATE_VARIABLE_ModeInfo_31_31, STATE_VARIABLE_ModeInfo_28);
  }
}

static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Context_4;

    hlds__instmap__arm_instmap_project_context_2_p_0(((MR_Word) wrapper_arg_1), &conv1_Context_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_Context_4));
  }
}

static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Inst_6;

    hlds__instmap__lookup_var_in_arm_instmap_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_Inst_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Inst_6));
  }
}

static void MR_CALL 
hlds__instmap__merge_insts_of_vars_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArmInstMaps_2,
  MR_Word VarTypes_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7,
  MR_Word * HeadVar__8_8)
{
  if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  {
    *HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_ModuleInfo_7 = STATE_VARIABLE_ModuleInfo_0_6;
    *HeadVar__5_5 = HeadVar__4_4;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word VarType_24;
    MR_Word InstList_25;
    MR_Word MaybeInst_26;
    MR_Word STATE_VARIABLE_InstMapping_35_35;
    MR_Word STATE_VARIABLE_ModuleInfo_36_36;
    MR_Word STATE_VARIABLE_ErrorList_37_37;
    MR_Word Var_38;
    MR_Word Var_39;

    hlds__instmap__merge_insts_of_vars_8_p_0(Vars_18, ArmInstMaps_2, VarTypes_3, HeadVar__4_4, &STATE_VARIABLE_InstMapping_35_35, STATE_VARIABLE_ModuleInfo_0_6, &STATE_VARIABLE_ModuleInfo_36_36, &STATE_VARIABLE_ErrorList_37_37);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_3, Var_17, &VarType_24);
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&hlds__instmap_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (hlds__instmap__merge_insts_of_vars_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Var_17));
    }
    mercury__list__map_3_p_0((MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_arm_instmap_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, Var_38, ArmInstMaps_2, &InstList_25);
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (VarType_24));
    }
    hlds__instmap__merge_var_insts_5_p_0(InstList_25, Var_39, STATE_VARIABLE_ModuleInfo_36_36, STATE_VARIABLE_ModuleInfo_7, &MaybeInst_26);
    if ((MaybeInst_26 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      MR_Word Contexts_27;
      MR_Word ContextsInsts_28;
      MR_Word Var_44;

      mercury__list__map_3_p_0((MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_arm_instmap_0, (MR_Word) &mercury__term__term__type_ctor_info_context_0, (MR_Word) &hlds__instmap_scalar_common_2[4], ArmInstMaps_2, &Contexts_27);
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_context_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, Contexts_27, InstList_25, &ContextsInsts_28);
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (ContextsInsts_28));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__8_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ErrorList_37_37));
      }
      mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (Var_17)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), STATE_VARIABLE_InstMapping_35_35, HeadVar__5_5);
    }
    else
    {
      MR_Word Inst_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInst_26, (MR_Integer) 0)));

      mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (Var_17)), ((MR_Box) (Inst_29)), STATE_VARIABLE_InstMapping_35_35, HeadVar__5_5);
      *HeadVar__8_8 = STATE_VARIABLE_ErrorList_37_37;
    }
  }
}

static void MR_CALL 
hlds__instmap__get_reachable_instmaps_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word ArmInstMap_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArmInstMaps_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word InstMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArmInstMap_3, (MR_Integer) 1)));
      MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArmInstMap_3, (MR_Integer) 0)));

      if ((InstMap_7 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      {
        MR_Word next_value_of_HeadVar__1_1 = ArmInstMaps_4;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
      {
        MR_Word InstMapping_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstMap_7, (MR_Integer) 0)));
        MR_Word ReachablesTail_9;

        hlds__instmap__get_reachable_instmaps_2_p_0(ArmInstMaps_4, &ReachablesTail_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapping_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ReachablesTail_9));
        }
      }
    }
    break;
  }
}

void MR_CALL 
hlds__instmap__make_arm_instmaps_for_cases_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    if ((HeadVar__2_2 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_cases\'/3", (MR_String) "mismatched lists");
        return;
      }
    }
  else
  {
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

    if ((HeadVar__2_2 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_cases\'/3", (MR_String) "mismatched lists");
        return;
      }
    }
    else
    {
      MR_Word InstMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word InstMaps_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArmInfo_18;
      MR_Word ArmInfos_19;
      MR_Word Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 2)));
      MR_Word GoalInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_22, (MR_Integer) 1)));
      MR_Word Context_25;
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0)));
      MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 1)));
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_22, (MR_Integer) 0)));

      Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_24);
      {
        ArmInfo_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ArmInfo_18, 0) = ((MR_Box) (Context_25));
        MR_hl_field(MR_mktag(0), ArmInfo_18, 1) = ((MR_Box) (InstMap_16));
      }
      hlds__instmap__make_arm_instmaps_for_cases_3_p_0(Var_26, InstMaps_17, &ArmInfos_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArmInfo_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArmInfos_19));
      }
    }
  }
}

void MR_CALL 
hlds__instmap__make_arm_instmaps_for_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    if ((HeadVar__2_2 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_goals\'/3", (MR_String) "mismatched lists");
        return;
      }
    }
  else
  {
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

    if ((HeadVar__2_2 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.make_arm_instmaps_for_goals\'/3", (MR_String) "mismatched lists");
        return;
      }
    }
    else
    {
      MR_Word InstMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word InstMaps_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArmInfo_18;
      MR_Word ArmInfos_19;
      MR_Word GoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1)));
      MR_Word Context_22;
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0)));

      Context_22 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_21);
      {
        ArmInfo_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ArmInfo_18, 0) = ((MR_Box) (Context_22));
        MR_hl_field(MR_mktag(0), ArmInfo_18, 1) = ((MR_Box) (InstMap_16));
      }
      hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Var_23, InstMaps_17, &ArmInfos_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArmInfo_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArmInfos_19));
      }
    }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_restrict_3_p_0(
  MR_Word Vars_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word InstMapping0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word InstMapping_7;
    MR_Word Var_8;

    Var_8 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Vars_1);
    mercury__map__select_sorted_list_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstMapping0_6, Var_8, &InstMapping_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapping_7));
    }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(
  MR_Word InstMap1_5,
  MR_Word InstMap2_6,
  MR_Word How_7,
  MR_Word * InstMap_8)
{
  {
    MR_bool succeeded;

    if ((InstMap1_5 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      *InstMap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstMap1_5, (MR_Integer) 0)));

      if ((InstMap2_6 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
        *InstMap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word InstMappingDelta2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstMap2_6, (MR_Integer) 0)));
        MR_Word InstMappingDelta_12;

        switch (How_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__map__overlay_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, Var_25, InstMappingDelta2_11, &InstMappingDelta_12);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__map__overlay_large_map_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, Var_25, InstMappingDelta2_11, &InstMappingDelta_12);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer Count1_13;
              MR_Integer Count2_14;

              mercury__map__count_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, Var_25, &Count1_13);
              mercury__map__count_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstMappingDelta2_11, &Count2_14);
              succeeded = (Count1_13 >= Count2_14);
              if (succeeded)
              {
                mercury__map__overlay_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, Var_25, InstMappingDelta2_11, &InstMappingDelta_12);
              }
              else
              {
                mercury__map__overlay_large_map_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, Var_25, InstMappingDelta2_11, &InstMappingDelta_12);
              }
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *InstMap_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMappingDelta_12));
        }
      }
    }
  }
}

void MR_CALL 
hlds__instmap__apply_instmap_delta_sv_3_p_0(
  MR_Word Delta_4,
  MR_Word STATE_VARIABLE_Instmap_0_6,
  MR_Word * STATE_VARIABLE_Instmap_7)
{
  hlds__instmap__apply_instmap_delta_3_p_0(STATE_VARIABLE_Instmap_0_6, Delta_4, STATE_VARIABLE_Instmap_7);
}

void MR_CALL 
hlds__instmap__compute_instmap_delta_4_p_0(
  MR_Word InstMapA_5,
  MR_Word InstMapB_6,
  MR_Word NonLocals_7,
  MR_Word * InstMap_8)
{
  if ((InstMapA_5 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    *InstMap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstMapA_5, (MR_Integer) 0)));

    if ((InstMapB_6 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      *InstMap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word InstMappingB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstMapB_6, (MR_Integer) 0)));
      MR_Word NonLocalsList_12;
      MR_Word AssocList_13;
      MR_Word DeltaInstMap_14;

      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocals_7, &NonLocalsList_12);
      hlds__instmap__compute_instmap_delta_for_vars_4_p_0(NonLocalsList_12, Var_18, InstMappingB_11, &AssocList_13);
      mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, AssocList_13, &DeltaInstMap_14);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *InstMap_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DeltaInstMap_14));
      }
    }
  }
}

static void MR_CALL 
hlds__instmap__compute_instmap_delta_for_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMappingA_2,
  MR_Word InstMappingB_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word AssocListTail_12;
      MR_Word InstA_13;
      MR_Word InstB_14;
      MR_Word VarInst_20;
      MR_Box conv0_VarInst_20;
      MR_Word VarInst_26;
      MR_Box conv1_VarInst_26;

      hlds__instmap__compute_instmap_delta_for_vars_4_p_0(Vars_8, InstMappingA_2, InstMappingB_3, &AssocListTail_12);
      succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstMappingA_2, ((MR_Box) (Var_7)), &conv0_VarInst_20);
      if (succeeded)
      {
        VarInst_20 = ((MR_Word) conv0_VarInst_20);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        InstA_13 = VarInst_20;
      else
        InstA_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstMappingB_3, ((MR_Box) (Var_7)), &conv1_VarInst_26);
      if (succeeded)
      {
        VarInst_26 = ((MR_Word) conv1_VarInst_26);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        InstB_14 = VarInst_26;
      else
        InstB_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(InstA_13, InstB_14);
      if (succeeded)
        *HeadVar__4_4 = AssocListTail_12;
      else
      {
        MR_Word Var_15;

        {
          Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (Var_7));
          MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (InstB_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (AssocListTail_12));
        }
      }
    }
  }
}

void MR_CALL 
hlds__instmap__pre_lambda_update_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Vars_7,
  MR_Word Modes_8,
  MR_Word InstMap0_9,
  MR_Word * InstMap_10)
{
  {
    MR_Word Insts_11;
    MR_Word VarInsts_12;
    MR_Word InstMapDelta_13;
    MR_Word Instmapping_17;

    check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_6, Modes_8, &Insts_11);
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, Vars_7, Insts_11, &VarInsts_12);
    mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, VarInsts_12, &Instmapping_17);
    {
      InstMapDelta_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InstMapDelta_13, 0) = ((MR_Box) (Instmapping_17));
    }
    hlds__instmap__apply_instmap_delta_3_p_0(InstMap0_9, InstMapDelta_13, InstMap_10);
  }
}

void MR_CALL 
hlds__instmap__apply_instmap_delta_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

    if ((HeadVar__2_2 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word InstMappingDelta_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word InstMapping_8;

      mercury__map__overlay_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, Var_11, InstMappingDelta_7, &InstMapping_8);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapping_8));
      }
    }
  }
}

void MR_CALL 
hlds__instmap__bind_var_to_functors_8_p_0(
  MR_Word Var_9,
  MR_Word Type_10,
  MR_Word MainConsId_11,
  MR_Word OtherConsIds_12,
  MR_Word STATE_VARIABLE_InstMap_0_17,
  MR_Word * STATE_VARIABLE_InstMap_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20)
{
  {
    MR_bool succeeded;
    MR_Word Inst0_15;
    MR_Word Inst_16;
    MR_Word MainFinalInst_31;
    MR_Word OtherFinalInsts_32;
    MR_Word MaybeMergedInst_33;
    MR_Word STATE_VARIABLE_ModuleInfo_19_34;
    MR_Word STATE_VARIABLE_ModuleInfo_20_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Integer Arity_49;
    MR_Word ArgLives_50;
    MR_Word ArgInsts_51;
    MR_Word STATE_VARIABLE_Inst_23_57;
    MR_Word STATE_VARIABLE_ModuleInfo_24_58;
    MR_Word _Det_52;

    hlds__instmap__instmap_lookup_var_3_p_0(STATE_VARIABLE_InstMap_0_17, Var_9, &Inst0_15);
    Arity_49 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(STATE_VARIABLE_ModuleInfo_0_19, Type_10, MainConsId_11);
    mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, Arity_49, ((MR_Box) ((MR_Integer) 1)), &ArgLives_50);
    mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, Arity_49, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ArgInsts_51);
    succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, Inst0_15, MainConsId_11, ArgInsts_51, ArgLives_50, (MR_Integer) 0, Type_10, &STATE_VARIABLE_Inst_23_57, &_Det_52, STATE_VARIABLE_ModuleInfo_0_19, &STATE_VARIABLE_ModuleInfo_24_58);
    if (succeeded)
    {
      STATE_VARIABLE_ModuleInfo_19_34 = STATE_VARIABLE_ModuleInfo_24_58;
      MainFinalInst_31 = STATE_VARIABLE_Inst_23_57;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
        return;
      }
    }
    hlds__instmap__bind_inst_to_functors_others_6_p_0(Type_10, OtherConsIds_12, Inst0_15, &OtherFinalInsts_32, STATE_VARIABLE_ModuleInfo_19_34, &STATE_VARIABLE_ModuleInfo_20_35);
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MainFinalInst_31));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (OtherFinalInsts_32));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Type_10));
    }
    hlds__instmap__merge_var_insts_5_p_0(Var_36, Var_37, STATE_VARIABLE_ModuleInfo_20_35, STATE_VARIABLE_ModuleInfo_20, &MaybeMergedInst_33);
    if ((MaybeMergedInst_33 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.bind_inst_to_functors\'/7", (MR_String) "no MaybeMergedInst");
        return;
      }
    }
    else
      Inst_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeMergedInst_33, (MR_Integer) 0)));
    if ((STATE_VARIABLE_InstMap_0_17 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      *STATE_VARIABLE_InstMap_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word InstMapping0_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstMap_0_17, (MR_Integer) 0)));
      MR_Word InstMapping_70;

      mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (Var_9)), ((MR_Box) (Inst_16)), InstMapping0_69, &InstMapping_70);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_InstMap_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapping_70));
      }
    }
  }
}

void MR_CALL 
hlds__instmap__bind_var_to_functor_7_p_0(
  MR_Word Var_8,
  MR_Word Type_9,
  MR_Word ConsId_10,
  MR_Word STATE_VARIABLE_InstMap_0_15,
  MR_Word * STATE_VARIABLE_InstMap_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18)
{
  {
    MR_bool succeeded;
    MR_Word Inst0_13;
    MR_Word Inst_14;
    MR_Integer Arity_29;
    MR_Word ArgLives_30;
    MR_Word ArgInsts_31;
    MR_Word STATE_VARIABLE_Inst_23_37;
    MR_Word STATE_VARIABLE_ModuleInfo_24_38;
    MR_Word _Det_32;

    hlds__instmap__instmap_lookup_var_3_p_0(STATE_VARIABLE_InstMap_0_15, Var_8, &Inst0_13);
    Arity_29 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(STATE_VARIABLE_ModuleInfo_0_17, Type_9, ConsId_10);
    mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, Arity_29, ((MR_Box) ((MR_Integer) 1)), &ArgLives_30);
    mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, Arity_29, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ArgInsts_31);
    succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, Inst0_13, ConsId_10, ArgInsts_31, ArgLives_30, (MR_Integer) 0, Type_9, &STATE_VARIABLE_Inst_23_37, &_Det_32, STATE_VARIABLE_ModuleInfo_0_17, &STATE_VARIABLE_ModuleInfo_24_38);
    if (succeeded)
    {
      *STATE_VARIABLE_ModuleInfo_18 = STATE_VARIABLE_ModuleInfo_24_38;
      Inst_14 = STATE_VARIABLE_Inst_23_37;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
        return;
      }
    }
    if ((STATE_VARIABLE_InstMap_0_15 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      *STATE_VARIABLE_InstMap_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word InstMapping0_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstMap_0_15, (MR_Integer) 0)));
      MR_Word InstMapping_50;

      mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (Var_8)), ((MR_Box) (Inst_14)), InstMapping0_49, &InstMapping_50);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_InstMap_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapping_50));
      }
    }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_bind_var_to_functors_9_p_0(
  MR_Word Var_10,
  MR_Word Type_11,
  MR_Word MainConsId_12,
  MR_Word OtherConsIds_13,
  MR_Word InstMap_14,
  MR_Word STATE_VARIABLE_InstmapDelta_0_22,
  MR_Word * STATE_VARIABLE_InstmapDelta_23,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25)
{
  {
    MR_bool succeeded;

    if ((STATE_VARIABLE_InstmapDelta_0_22 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      *STATE_VARIABLE_InstmapDelta_23 = STATE_VARIABLE_InstmapDelta_0_22;
      *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
    }
    else
    {
      MR_Word InstmappingDelta0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstmapDelta_0_22, (MR_Integer) 0)));
      MR_Word OldInst_18;
      MR_Word NewInst1_20;
      MR_Word NewInst_21;
      MR_Word MainFinalInst_39;
      MR_Word OtherFinalInsts_40;
      MR_Word MaybeMergedInst_41;
      MR_Word STATE_VARIABLE_ModuleInfo_19_42;
      MR_Word STATE_VARIABLE_ModuleInfo_20_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Integer Arity_57;
      MR_Word ArgLives_58;
      MR_Word ArgInsts_59;
      MR_Word NewInst0_19;
      MR_Box conv0_NewInst0_19;
      MR_Word STATE_VARIABLE_Inst_23_65;
      MR_Word STATE_VARIABLE_ModuleInfo_24_66;
      MR_Word _Det_60;

      hlds__instmap__instmap_lookup_var_3_p_0(InstMap_14, Var_10, &OldInst_18);
      succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstmappingDelta0_17, ((MR_Box) (Var_10)), &conv0_NewInst0_19);
      if (succeeded)
      {
        NewInst0_19 = ((MR_Word) conv0_NewInst0_19);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        NewInst1_20 = NewInst0_19;
      else
        NewInst1_20 = OldInst_18;
      Arity_57 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(STATE_VARIABLE_ModuleInfo_0_24, Type_11, MainConsId_12);
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, Arity_57, ((MR_Box) ((MR_Integer) 1)), &ArgLives_58);
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, Arity_57, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ArgInsts_59);
      succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, NewInst1_20, MainConsId_12, ArgInsts_59, ArgLives_58, (MR_Integer) 0, Type_11, &STATE_VARIABLE_Inst_23_65, &_Det_60, STATE_VARIABLE_ModuleInfo_0_24, &STATE_VARIABLE_ModuleInfo_24_66);
      if (succeeded)
      {
        STATE_VARIABLE_ModuleInfo_19_42 = STATE_VARIABLE_ModuleInfo_24_66;
        MainFinalInst_39 = STATE_VARIABLE_Inst_23_65;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
          return;
        }
      }
      hlds__instmap__bind_inst_to_functors_others_6_p_0(Type_11, OtherConsIds_13, NewInst1_20, &OtherFinalInsts_40, STATE_VARIABLE_ModuleInfo_19_42, &STATE_VARIABLE_ModuleInfo_20_43);
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MainFinalInst_39));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (OtherFinalInsts_40));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Type_11));
      }
      hlds__instmap__merge_var_insts_5_p_0(Var_44, Var_45, STATE_VARIABLE_ModuleInfo_20_43, STATE_VARIABLE_ModuleInfo_25, &MaybeMergedInst_41);
      if ((MaybeMergedInst_41 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.bind_inst_to_functors\'/7", (MR_String) "no MaybeMergedInst");
          return;
        }
      }
      else
        NewInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeMergedInst_41, (MR_Integer) 0)));
      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(NewInst_21, OldInst_18);
      if (succeeded)
        *STATE_VARIABLE_InstmapDelta_23 = STATE_VARIABLE_InstmapDelta_0_22;
      else
      {
        MR_Word InstMapping0_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstmapDelta_0_22, (MR_Integer) 0)));

        succeeded = (NewInst_21 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
        if (succeeded)
          *STATE_VARIABLE_InstmapDelta_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
        {
          MR_Word InstMapping_79;

          mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (Var_10)), ((MR_Box) (NewInst_21)), InstMapping0_77, &InstMapping_79);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_InstmapDelta_23 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapping_79));
          }
        }
      }
    }
  }
}

static void MR_CALL 
hlds__instmap__merge_var_insts_5_p_0(
  MR_Word Insts_6,
  MR_Word MaybeType_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word * MaybeMergedInst_9)
{
  while (MR_TRUE)
  {
    MR_Word MergedInsts_10;
    MR_Word Error_11;
    MR_Word STATE_VARIABLE_ModuleInfo_19_19;

    // setup for model_det tailcalls optimized into a loop
    hlds__instmap__merge_var_insts_pass_8_p_0(Insts_6, MaybeType_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &MergedInsts_10, STATE_VARIABLE_ModuleInfo_0_16, &STATE_VARIABLE_ModuleInfo_19_19, (MR_Integer) 0, &Error_11);
    switch (Error_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        if ((MergedInsts_10 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
        {
          *MaybeMergedInst_9 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__instmap_scalar_common_6[0]);
          *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_19_19;
        }
        else
        {
          MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), MergedInsts_10, (MR_Integer) 1)));
          MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), MergedInsts_10, (MR_Integer) 0)));

          if ((Var_25 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeMergedInst_9 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_26));
            }
            *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_19_19;
          }
          else
          {
            MR_Word next_value_of_Insts_6 = MergedInsts_10;
            MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_16 = STATE_VARIABLE_ModuleInfo_19_19;

            // direct tailcall eliminated
            Insts_6 = next_value_of_Insts_6;
            STATE_VARIABLE_ModuleInfo_0_16 = next_value_of_STATE_VARIABLE_ModuleInfo_0_16;
            continue;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *MaybeMergedInst_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_19_19;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__instmap__merge_var_insts_pass_8_p_0(
  MR_Word Insts_9,
  MR_Word MaybeType_10,
  MR_Word STATE_VARIABLE_MergedInsts_0_23,
  MR_Word * STATE_VARIABLE_MergedInsts_24,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26,
  MR_Word STATE_VARIABLE_Error_0_27,
  MR_Word * STATE_VARIABLE_Error_28)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((Insts_9 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      *STATE_VARIABLE_MergedInsts_24 = STATE_VARIABLE_MergedInsts_0_23;
      *STATE_VARIABLE_ModuleInfo_26 = STATE_VARIABLE_ModuleInfo_0_25;
      *STATE_VARIABLE_Error_28 = STATE_VARIABLE_Error_0_27;
    }
    else
    {
      MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), Insts_9, (MR_Integer) 1)));
      MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), Insts_9, (MR_Integer) 0)));

      if ((Var_68 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_MergedInsts_24 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_MergedInsts_0_23));
        }
        *STATE_VARIABLE_ModuleInfo_26 = STATE_VARIABLE_ModuleInfo_0_25;
        *STATE_VARIABLE_Error_28 = STATE_VARIABLE_Error_0_27;
      }
      else
      {
        MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 1)));
        MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 0)));

        if ((Var_70 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
        {
          MR_Word Inst12_16;
          MR_Word STATE_VARIABLE_ModuleInfo_50_50;

          succeeded = check_hlds__inst_util__inst_merge_6_p_0(Var_69, Var_71, MaybeType_10, &Inst12_16, STATE_VARIABLE_ModuleInfo_0_25, &STATE_VARIABLE_ModuleInfo_50_50);
          if (succeeded)
          {
            *STATE_VARIABLE_ModuleInfo_26 = STATE_VARIABLE_ModuleInfo_50_50;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_MergedInsts_24 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst12_16));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_MergedInsts_0_23));
            }
            *STATE_VARIABLE_Error_28 = STATE_VARIABLE_Error_0_27;
          }
          else
          {
            *STATE_VARIABLE_Error_28 = (MR_Integer) 1;
            *STATE_VARIABLE_ModuleInfo_26 = STATE_VARIABLE_ModuleInfo_0_25;
            *STATE_VARIABLE_MergedInsts_24 = STATE_VARIABLE_MergedInsts_0_23;
          }
        }
        else
        {
          MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_70, (MR_Integer) 1)));
          MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_70, (MR_Integer) 0)));

          if ((Var_72 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
          {
            MR_Word Inst123_18;
            MR_Word STATE_VARIABLE_ModuleInfo_44_44;
            MR_Word STATE_VARIABLE_ModuleInfo_43_43;
            MR_Word Inst12_57;

            succeeded = check_hlds__inst_util__inst_merge_6_p_0(Var_69, Var_71, MaybeType_10, &Inst12_57, STATE_VARIABLE_ModuleInfo_0_25, &STATE_VARIABLE_ModuleInfo_43_43);
            if (succeeded)
              succeeded = check_hlds__inst_util__inst_merge_6_p_0(Inst12_57, Var_73, MaybeType_10, &Inst123_18, STATE_VARIABLE_ModuleInfo_43_43, &STATE_VARIABLE_ModuleInfo_44_44);
            if (succeeded)
            {
              *STATE_VARIABLE_ModuleInfo_26 = STATE_VARIABLE_ModuleInfo_44_44;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_MergedInsts_24 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst123_18));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_MergedInsts_0_23));
              }
              *STATE_VARIABLE_Error_28 = STATE_VARIABLE_Error_0_27;
            }
            else
            {
              *STATE_VARIABLE_Error_28 = (MR_Integer) 1;
              *STATE_VARIABLE_ModuleInfo_26 = STATE_VARIABLE_ModuleInfo_0_25;
              *STATE_VARIABLE_MergedInsts_24 = STATE_VARIABLE_MergedInsts_0_23;
            }
          }
          else
          {
            MR_Word Inst4_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 0)));
            MR_Word MoreInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 1)));
            MR_Word Inst1234_22;
            MR_Word STATE_VARIABLE_ModuleInfo_34_34;
            MR_Word Inst34_21;
            MR_Word STATE_VARIABLE_ModuleInfo_32_32;
            MR_Word STATE_VARIABLE_ModuleInfo_33_33;
            MR_Word Inst12_62;

            succeeded = check_hlds__inst_util__inst_merge_6_p_0(Var_69, Var_71, MaybeType_10, &Inst12_62, STATE_VARIABLE_ModuleInfo_0_25, &STATE_VARIABLE_ModuleInfo_32_32);
            if (succeeded)
            {
              succeeded = check_hlds__inst_util__inst_merge_6_p_0(Var_73, Inst4_19, MaybeType_10, &Inst34_21, STATE_VARIABLE_ModuleInfo_32_32, &STATE_VARIABLE_ModuleInfo_33_33);
              if (succeeded)
                succeeded = check_hlds__inst_util__inst_merge_6_p_0(Inst12_62, Inst34_21, MaybeType_10, &Inst1234_22, STATE_VARIABLE_ModuleInfo_33_33, &STATE_VARIABLE_ModuleInfo_34_34);
            }
            if (succeeded)
            {
              MR_Word STATE_VARIABLE_MergedInsts_35_35;
              MR_Word next_value_of_Insts_9;
              MR_Word next_value_of_STATE_VARIABLE_MergedInsts_0_23;
              MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_25;

              {
                STATE_VARIABLE_MergedInsts_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_MergedInsts_35_35, 0) = ((MR_Box) (Inst1234_22));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_MergedInsts_35_35, 1) = ((MR_Box) (STATE_VARIABLE_MergedInsts_0_23));
              }
              // direct tailcall eliminated
              next_value_of_Insts_9 = MoreInsts_20;
              next_value_of_STATE_VARIABLE_MergedInsts_0_23 = STATE_VARIABLE_MergedInsts_35_35;
              next_value_of_STATE_VARIABLE_ModuleInfo_0_25 = STATE_VARIABLE_ModuleInfo_34_34;
              Insts_9 = next_value_of_Insts_9;
              STATE_VARIABLE_MergedInsts_0_23 = next_value_of_STATE_VARIABLE_MergedInsts_0_23;
              STATE_VARIABLE_ModuleInfo_0_25 = next_value_of_STATE_VARIABLE_ModuleInfo_0_25;
              continue;
            }
            else
            {
              *STATE_VARIABLE_Error_28 = (MR_Integer) 1;
              *STATE_VARIABLE_ModuleInfo_26 = STATE_VARIABLE_ModuleInfo_0_25;
              *STATE_VARIABLE_MergedInsts_24 = STATE_VARIABLE_MergedInsts_0_23;
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_ModuleInfo_6 = STATE_VARIABLE_ModuleInfo_0_5;
    }
    else
    {
      MR_Word ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word FinalInst_16;
      MR_Word FinalInsts_17;
      MR_Word STATE_VARIABLE_ModuleInfo_21_21;
      MR_Integer Arity_31;
      MR_Word ArgLives_32;
      MR_Word ArgInsts_33;
      MR_Word STATE_VARIABLE_Inst_23_39;
      MR_Word STATE_VARIABLE_ModuleInfo_24_40;
      MR_Word _Det_34;

      Arity_31 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(STATE_VARIABLE_ModuleInfo_0_5, HeadVar__1_1, ConsId_13);
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, Arity_31, ((MR_Box) ((MR_Integer) 1)), &ArgLives_32);
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, Arity_31, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ArgInsts_33);
      succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, HeadVar__3_3, ConsId_13, ArgInsts_33, ArgLives_32, (MR_Integer) 0, HeadVar__1_1, &STATE_VARIABLE_Inst_23_39, &_Det_34, STATE_VARIABLE_ModuleInfo_0_5, &STATE_VARIABLE_ModuleInfo_24_40);
      if (succeeded)
      {
        STATE_VARIABLE_ModuleInfo_21_21 = STATE_VARIABLE_ModuleInfo_24_40;
        FinalInst_16 = STATE_VARIABLE_Inst_23_39;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
          return;
        }
      }
      hlds__instmap__bind_inst_to_functors_others_6_p_0(HeadVar__1_1, ConsIds_14, HeadVar__3_3, &FinalInsts_17, STATE_VARIABLE_ModuleInfo_21_21, STATE_VARIABLE_ModuleInfo_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FinalInst_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FinalInsts_17));
      }
    }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_bind_var_to_functor_8_p_0(
  MR_Word Var_9,
  MR_Word Type_10,
  MR_Word ConsId_11,
  MR_Word InstMap_12,
  MR_Word STATE_VARIABLE_InstmapDelta_0_20,
  MR_Word * STATE_VARIABLE_InstmapDelta_21,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23)
{
  {
    MR_bool succeeded;

    if ((STATE_VARIABLE_InstmapDelta_0_20 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      *STATE_VARIABLE_InstmapDelta_21 = STATE_VARIABLE_InstmapDelta_0_20;
      *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_0_22;
    }
    else
    {
      MR_Word InstmappingDelta0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstmapDelta_0_20, (MR_Integer) 0)));
      MR_Word OldInst_16;
      MR_Word NewInst1_18;
      MR_Word NewInst_19;
      MR_Integer Arity_37;
      MR_Word ArgLives_38;
      MR_Word ArgInsts_39;
      MR_Word NewInst0_17;
      MR_Box conv0_NewInst0_17;
      MR_Word STATE_VARIABLE_Inst_23_45;
      MR_Word STATE_VARIABLE_ModuleInfo_24_46;
      MR_Word _Det_40;

      hlds__instmap__instmap_lookup_var_3_p_0(InstMap_12, Var_9, &OldInst_16);
      succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstmappingDelta0_15, ((MR_Box) (Var_9)), &conv0_NewInst0_17);
      if (succeeded)
      {
        NewInst0_17 = ((MR_Word) conv0_NewInst0_17);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        NewInst1_18 = NewInst0_17;
      else
        NewInst1_18 = OldInst_16;
      Arity_37 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(STATE_VARIABLE_ModuleInfo_0_22, Type_10, ConsId_11);
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_is_live_0, Arity_37, ((MR_Box) ((MR_Integer) 1)), &ArgLives_38);
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, Arity_37, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ArgInsts_39);
      succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0((MR_Integer) 1, NewInst1_18, ConsId_11, ArgInsts_39, ArgLives_38, (MR_Integer) 0, Type_10, &STATE_VARIABLE_Inst_23_45, &_Det_40, STATE_VARIABLE_ModuleInfo_0_22, &STATE_VARIABLE_ModuleInfo_24_46);
      if (succeeded)
      {
        *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_24_46;
        NewInst_19 = STATE_VARIABLE_Inst_23_45;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.bind_inst_to_functor\'/6", (MR_String) "mode error");
          return;
        }
      }
      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(NewInst_19, OldInst_16);
      if (succeeded)
        *STATE_VARIABLE_InstmapDelta_21 = STATE_VARIABLE_InstmapDelta_0_20;
      else
      {
        MR_Word InstMapping0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstmapDelta_0_20, (MR_Integer) 0)));

        succeeded = (NewInst_19 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
        if (succeeded)
          *STATE_VARIABLE_InstmapDelta_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
        {
          MR_Word InstMapping_59;

          mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (Var_9)), ((MR_Box) (NewInst_19)), InstMapping0_57, &InstMapping_59);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_InstmapDelta_21 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapping_59));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__instmap__IntroducedFrom__pred__instmap_delta_set_vars_same__680__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_set_vars_same_4_p_0(
  MR_Word Inst_5,
  MR_Word Vars_6,
  MR_Word STATE_VARIABLE_InstMapDelta_0_10,
  MR_Word * STATE_VARIABLE_InstMapDelta_11)
{
  {
    MR_bool succeeded;

    if ((STATE_VARIABLE_InstMapDelta_0_10 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      *STATE_VARIABLE_InstMapDelta_11 = STATE_VARIABLE_InstMapDelta_0_10;
    else
    {
      MR_Word InstMapping0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstMapDelta_0_10, (MR_Integer) 0)));
      MR_Word InstMapping_9;
      MR_Word Var_12;
      MR_Word Var_15;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (hlds__instmap__instmap_delta_set_vars_same_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Inst_5));
        MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      }
      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (hlds__instmap__instmap_delta_set_vars_same_4_p_0_2));
        MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Var_15));
      }
      mercury__require__expect_3_p_0(Var_12, (MR_String) "predicate \140hlds.instmap.instmap_delta_set_vars_same\'/4", (MR_String) "not_reached");
      hlds__instmap__instmapping_set_vars_same_4_p_0(Inst_5, Vars_6, InstMapping0_8, &InstMapping_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_InstMapDelta_11 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapping_9));
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__instmap__IntroducedFrom__pred__instmap_set_vars_same__651__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

void MR_CALL 
hlds__instmap__instmap_set_vars_same_4_p_0(
  MR_Word Inst_5,
  MR_Word Vars_6,
  MR_Word STATE_VARIABLE_InstMap_0_10,
  MR_Word * STATE_VARIABLE_InstMap_11)
{
  {
    MR_bool succeeded;

    if ((STATE_VARIABLE_InstMap_0_10 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      *STATE_VARIABLE_InstMap_11 = STATE_VARIABLE_InstMap_0_10;
    else
    {
      MR_Word InstMapping0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstMap_0_10, (MR_Integer) 0)));
      MR_Word InstMapping_9;
      MR_Word Var_12;
      MR_Word Var_15;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (hlds__instmap__instmap_set_vars_same_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Inst_5));
        MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      }
      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (hlds__instmap__instmap_set_vars_same_4_p_0_2));
        MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Var_15));
      }
      mercury__require__expect_3_p_0(Var_12, (MR_String) "predicate \140hlds.instmap.instmap_set_vars_same\'/4", (MR_String) "not_reached");
      hlds__instmap__instmapping_set_vars_same_4_p_0(Inst_5, Vars_6, InstMapping0_8, &InstMapping_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_InstMap_11 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapping_9));
      }
    }
  }
}

static void MR_CALL 
hlds__instmap__instmapping_set_vars_same_4_p_0(
  MR_Word Inst_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_InstMapping_0_3,
  MR_Word * STATE_VARIABLE_InstMapping_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      *STATE_VARIABLE_InstMapping_4 = STATE_VARIABLE_InstMapping_0_3;
    else
    {
      MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_InstMapping_15_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_InstMapping_0_3;

      mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (Var_10)), ((MR_Box) (Inst_1)), STATE_VARIABLE_InstMapping_0_3, &STATE_VARIABLE_InstMapping_15_15);
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = Vars_11;
      next_value_of_STATE_VARIABLE_InstMapping_0_3 = STATE_VARIABLE_InstMapping_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_InstMapping_0_3 = next_value_of_STATE_VARIABLE_InstMapping_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__instmap__instmap_set_vars_corresponding_4_p_0(
  MR_Word Vars_5,
  MR_Word Insts_6,
  MR_Word STATE_VARIABLE_InstMap_0_10,
  MR_Word * STATE_VARIABLE_InstMap_11)
{
  if ((STATE_VARIABLE_InstMap_0_10 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    *STATE_VARIABLE_InstMap_11 = STATE_VARIABLE_InstMap_0_10;
  else
  {
    MR_Word InstMapping0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstMap_0_10, (MR_Integer) 0)));
    MR_Word InstMapping_9;

    hlds__instmap__instmapping_set_vars_corresponding_4_p_0(Vars_5, Insts_6, InstMapping0_8, &InstMapping_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_InstMap_11 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapping_9));
    }
  }
}

static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__instmap__IntroducedFrom__pred__instmapping_set_vars_corresponding__637__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__instmap__instmapping_set_vars_corresponding_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      if ((HeadVar__2_2 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
        *HeadVar__4_4 = HeadVar__3_3;
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.instmapping_set_vars_corresponding\'/4", (MR_String) "length mismatch (2)");
          return;
        }
      }
    else
    {
      MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

      if ((HeadVar__2_2 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.instmapping_set_vars_corresponding\'/4", (MR_String) "length mismatch (1)");
          return;
        }
      }
      else
      {
        MR_Word Inst_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        MR_Word Insts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        MR_Word Var_15;
        MR_Word Var_18;
        MR_Word STATE_VARIABLE_InstMapping_20_20;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;

        {
          Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
          MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_corresponding_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Inst_10));
          MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        }
        {
          Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_corresponding_4_p_0_2));
          MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Var_18));
        }
        mercury__require__expect_3_p_0(Var_15, (MR_String) "predicate \140hlds.instmap.instmapping_set_vars_corresponding\'/4", (MR_String) "not_reached");
        mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (Var_40)), ((MR_Box) (Inst_10)), HeadVar__3_3, &STATE_VARIABLE_InstMapping_20_20);
        // direct tailcall eliminated
        next_value_of_HeadVar__1_1 = Var_39;
        next_value_of_HeadVar__2_2 = Insts_11;
        next_value_of_HeadVar__3_3 = STATE_VARIABLE_InstMapping_20_20;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
hlds__instmap__instmap_set_vars_3_p_0(
  MR_Word VarsInsts_4,
  MR_Word STATE_VARIABLE_InstMap_0_8,
  MR_Word * STATE_VARIABLE_InstMap_9)
{
  if ((STATE_VARIABLE_InstMap_0_8 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    *STATE_VARIABLE_InstMap_9 = STATE_VARIABLE_InstMap_0_8;
  else
  {
    MR_Word InstMapping0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_InstMap_0_8, (MR_Integer) 0)));
    MR_Word InstMapping_7;

    hlds__instmap__instmapping_set_vars_3_p_0(VarsInsts_4, InstMapping0_6, &InstMapping_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_InstMap_9 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapping_7));
    }
  }
}

static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__std_util__negate_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__instmap__IntroducedFrom__pred__instmapping_set_vars__615__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__instmap__instmapping_set_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InstMapping_0_2,
  MR_Word * STATE_VARIABLE_InstMapping_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      *STATE_VARIABLE_InstMapping_3 = STATE_VARIABLE_InstMapping_0_2;
    else
    {
      MR_Word Var_7;
      MR_Word Inst_8;
      MR_Word VarsInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Var_14;
      MR_Word Var_17;
      MR_Word STATE_VARIABLE_InstMapping_19_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_InstMapping_0_2;

      Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0)));
      Inst_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1)));
      {
        Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&hlds__instmap_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_3_p_0_1));
        MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Inst_8));
        MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      }
      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&hlds__instmap_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (hlds__instmap__instmapping_set_vars_3_p_0_2));
        MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Var_17));
      }
      mercury__require__expect_3_p_0(Var_14, (MR_String) "predicate \140hlds.instmap.instmapping_set_vars\'/3", (MR_String) "not_reached");
      mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (Var_7)), ((MR_Box) (Inst_8)), STATE_VARIABLE_InstMapping_0_2, &STATE_VARIABLE_InstMapping_19_19);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = VarsInsts_9;
      next_value_of_STATE_VARIABLE_InstMapping_0_2 = STATE_VARIABLE_InstMapping_19_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_InstMapping_0_2 = next_value_of_STATE_VARIABLE_InstMapping_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__instmap__instmap_set_var_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word InstMapping0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word InstMapping_10;

    mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), InstMapping0_9, &InstMapping_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapping_10));
    }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_insert_var_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word InstMapping0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

      succeeded = (HeadVar__2_2 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
      if (succeeded)
        *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word InstMapping_11;

        mercury__map__det_insert_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), InstMapping0_9, &InstMapping_11);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapping_11));
        }
      }
    }
  }
}

void MR_CALL 
hlds__instmap__instmap_lookup_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word Arg_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Inst_8;
    MR_Word Insts_9;

    hlds__instmap__instmap_lookup_var_3_p_0(HeadVar__1_1, Arg_6, &Inst_8);
    hlds__instmap__instmap_lookup_vars_3_p_0(HeadVar__1_1, Args_7, &Insts_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_9));
    }
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_lookup_var_3_p_0(
  MR_Word InstMapDelta_4,
  MR_Word Var_5,
  MR_Word * Inst_6)
{
  {
    MR_bool succeeded;
    MR_Word InstPrime_7;

    if ((InstMapDelta_4 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      InstPrime_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word InstMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstMapDelta_4, (MR_Integer) 0)));
      MR_Box conv0_InstPrime_7;

      succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstMap_11, ((MR_Box) (Var_5)), &conv0_InstPrime_7);
      if (succeeded)
      {
        InstPrime_7 = ((MR_Word) conv0_InstPrime_7);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *Inst_6 = InstPrime_7;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.instmap_delta_lookup_var\'/3", (MR_String) "var not in instmap");
        return;
      }
    }
  }
}

MR_bool MR_CALL 
hlds__instmap__instmap_delta_search_var_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Var_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word InstMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Box conv0_HeadVar__3_3;

      succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstMap_5, ((MR_Box) (Var_2)), &conv0_HeadVar__3_3);
      if (succeeded)
      {
        *HeadVar__3_3 = ((MR_Word) conv0_HeadVar__3_3);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__instmap__instmap_changed_vars_5_p_0(
  MR_Word InstMapA_6,
  MR_Word InstMapB_7,
  MR_Word VarTypes_8,
  MR_Word ModuleInfo_9,
  MR_Word * ChangedVars_10)
{
  if ((InstMapB_7 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  {
    parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ChangedVars_10);
  }
  else
  {
    MR_Word VarsB_11;
    MR_Word InstMapping_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstMapB_7, (MR_Integer) 0)));

    mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstMapping_12, &VarsB_11);
    hlds__instmap__instmap_changed_vars_2_6_p_0(VarsB_11, InstMapA_6, InstMapB_7, VarTypes_8, ModuleInfo_9, ChangedVars_10);
  }
}

static void MR_CALL 
hlds__instmap__instmap_changed_vars_2_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * ChangedVars_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ChangedVars_6);
    }
    else
    {
      MR_Word VarB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word VarBs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ChangedVars0_19;
      MR_Word InitialInst_20;
      MR_Word FinalInst_21;
      MR_Word Type_22;

      hlds__instmap__instmap_changed_vars_2_6_p_0(VarBs_13, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, &ChangedVars0_19);
      hlds__instmap__instmap_lookup_var_3_p_0(HeadVar__2_2, VarB_12, &InitialInst_20);
      hlds__instmap__instmap_lookup_var_3_p_0(HeadVar__3_3, VarB_12, &FinalInst_21);
      hlds__vartypes__lookup_var_type_3_p_0(HeadVar__4_4, VarB_12, &Type_22);
      succeeded = check_hlds__inst_match__inst_matches_final_typed_4_p_0(InitialInst_20, FinalInst_21, Type_22, HeadVar__5_5);
      if (succeeded)
        *ChangedVars_6 = ChangedVars0_19;
      else
      {
        parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarB_12, ChangedVars0_19, ChangedVars_6);
      }
    }
  }
}

void MR_CALL 
hlds__instmap__instmap_lookup_var_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
    else
    {
      MR_Word InstMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word VarInst_11;
      MR_Box conv0_VarInst_11;

      succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstMap_5, ((MR_Box) (HeadVar__2_2)), &conv0_VarInst_11);
      if (succeeded)
      {
        VarInst_11 = ((MR_Word) conv0_VarInst_11);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        *HeadVar__3_3 = VarInst_11;
      else
        *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
  }
}

static void MR_CALL 
hlds__instmap__instmap_bound_vars_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_BoundVars_11;

    hlds__instmap__instmap_bound_vars_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_BoundVars_11);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_BoundVars_11));
  }
}

void MR_CALL 
hlds__instmap__instmap_bound_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  {
    *HeadVar__3_3 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
  }
  else
  {
    MR_Word InstMapping_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Box conv1_HeadVar__3_3;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&hlds__instmap_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (hlds__instmap__instmap_bound_vars_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (HeadVar__2_2));
    }
    Var_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    mercury__map__foldl_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__instmap_scalar_common_1[1], Var_8, InstMapping_5, ((MR_Box) (Var_9)), &conv1_HeadVar__3_3);
    *HeadVar__3_3 = ((MR_Word) conv1_HeadVar__3_3);
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_changed_vars_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  {
    parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, HeadVar__2_2);
  }
  else
  {
    MR_Word InstMapping_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ChangedVarsList_6;

    mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstMapping_4, &ChangedVarsList_6);
    parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ChangedVarsList_6, HeadVar__2_2);
  }
}

void MR_CALL 
hlds__instmap__instmap_vars_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word InstMapping_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

    mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstMapping_3, HeadVar__2_2);
  }
}

void MR_CALL 
hlds__instmap__instmap_vars_2_p_0(
  MR_Word Instmap_3,
  MR_Word * Vars_4)
{
  {
    MR_Word VarsList_5;

    if ((Instmap_3 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      VarsList_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word InstMapping_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Instmap_3, (MR_Integer) 0)));

      mercury__map__keys_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, InstMapping_7, &VarsList_5);
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarsList_5, Vars_4);
  }
}

static MR_Box MR_CALL 
hlds__instmap__instmap_delta_bind_vars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__instmap__pair_with_ground_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
hlds__instmap__instmap_delta_bind_vars_1_f_0(
  MR_Word Vars_3)
{
  {
    MR_Word InstMapDelta_4;
    MR_Word VarsAndGround_5;
    MR_Word Instmapping_14;

    VarsAndGround_5 = mercury__list__map_2_f_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &hlds__instmap_scalar_common_2[0], (MR_Word) &hlds__instmap_scalar_common_2[3], Vars_3);
    mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, VarsAndGround_5, &Instmapping_14);
    {
      InstMapDelta_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InstMapDelta_4, 0) = ((MR_Box) (Instmapping_14));
    }
    return InstMapDelta_4;
  }
}

MR_Word MR_CALL 
hlds__instmap__instmap_delta_bind_var_1_f_0(
  MR_Word Var_3)
{
  {
    MR_Word InstMapDelta_4;
    MR_Word Var_5;
    MR_Word Var_6;
    MR_Word Instmapping_13;

    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (Var_3));
      MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__instmap_scalar_common_2[2])));
    }
    {
      Var_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_5, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(1), Var_5, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, Var_5, &Instmapping_13);
    {
      InstMapDelta_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InstMapDelta_4, 0) = ((MR_Box) (Instmapping_13));
    }
    return InstMapDelta_4;
  }
}

MR_Word MR_CALL 
hlds__instmap__instmap_delta_bind_no_var_0_f_0(void)
{
  {
    MR_Word InstMapDelta_2;
    MR_Word Instmapping_5;

    mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Instmapping_5);
    {
      InstMapDelta_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InstMapDelta_2, 0) = ((MR_Box) (Instmapping_5));
    }
    return InstMapDelta_2;
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_from_from_to_insts_list_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Var_6,
  MR_Word FromToInsts_7,
  MR_Word * InstMapDelta_8)
{
  hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_102_114_111_109_95_102_114_111_109_95_116_111_95_105_110_115_116_115_95_108_105_115_116_95_95_91_49_93_95_48_4_p_0(Var_6, FromToInsts_7, InstMapDelta_8);
}

void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_102_114_111_109_95_102_114_111_109_95_116_111_95_105_110_115_116_115_95_108_105_115_116_95_95_91_49_93_95_48_4_p_0(
  MR_Word Var_6,
  MR_Word FromToInsts_7,
  MR_Word * InstMapDelta_8)
{
  {
    MR_Word InstMapDelta0_9;
    MR_Word InstMapping_10;

    mercury__map__init_1_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &InstMapping_10);
    {
      InstMapDelta0_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InstMapDelta0_9, 0) = ((MR_Box) (InstMapping_10));
    }
    hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_102_114_111_109_95_102_114_111_109_95_116_111_95_105_110_115_116_115_95_108_105_115_116_95_50_95_95_91_49_93_95_48_5_p_0(Var_6, FromToInsts_7, InstMapDelta0_9, InstMapDelta_8);
  }
}

static void MR_CALL 
hlds__instmap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_102_114_111_109_95_102_114_111_109_95_116_111_95_105_110_115_116_115_95_108_105_115_116_95_50_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_InstMapDelta_0_4,
  MR_Word * STATE_VARIABLE_InstMapDelta_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      if ((HeadVar__3_3 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
        *STATE_VARIABLE_InstMapDelta_5 = STATE_VARIABLE_InstMapDelta_0_4;
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.instmap_delta_from_from_to_insts_list_2\'/5", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.instmap_delta_from_from_to_insts_list_2\'/5", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word FromToInst_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word FromToInsts_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word InitInst_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), FromToInst_29, (MR_Integer) 0)));
        MR_Word FinalInst_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), FromToInst_29, (MR_Integer) 1)));
        MR_Word STATE_VARIABLE_InstMapDelta_36_36;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_InstMapDelta_0_4;

        succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(InitInst_32, FinalInst_33);
        if (succeeded)
          STATE_VARIABLE_InstMapDelta_36_36 = STATE_VARIABLE_InstMapDelta_0_4;
        else
          hlds__instmap__instmap_delta_set_var_4_p_0(Var_39, FinalInst_33, STATE_VARIABLE_InstMapDelta_0_4, &STATE_VARIABLE_InstMapDelta_36_36);
        // direct tailcall eliminated
        next_value_of_HeadVar__2_2 = Var_38;
        next_value_of_HeadVar__3_3 = FromToInsts_30;
        next_value_of_STATE_VARIABLE_InstMapDelta_0_4 = STATE_VARIABLE_InstMapDelta_36_36;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_InstMapDelta_0_4 = next_value_of_STATE_VARIABLE_InstMapDelta_0_4;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_from_mode_list_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Var_6,
  MR_Word Modes_7,
  MR_Word * InstMapDelta_8)
{
  {
    MR_Word InstMapDelta0_9;
    MR_Word InstMapping_10;

    mercury__map__init_1_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &InstMapping_10);
    {
      InstMapDelta0_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InstMapDelta0_9, 0) = ((MR_Box) (InstMapping_10));
    }
    hlds__instmap__instmap_delta_from_mode_list_2_5_p_0(ModuleInfo_5, Var_6, Modes_7, InstMapDelta0_9, InstMapDelta_8);
  }
}

static void MR_CALL 
hlds__instmap__instmap_delta_from_mode_list_2_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_InstMapDelta_0_4,
  MR_Word * STATE_VARIABLE_InstMapDelta_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      if ((HeadVar__3_3 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
        *STATE_VARIABLE_InstMapDelta_5 = STATE_VARIABLE_InstMapDelta_0_4;
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.instmap_delta_from_mode_list_2\'/5", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.instmap.instmap_delta_from_mode_list_2\'/5", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Mode_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word Modes_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word InitInst_32;
        MR_Word FinalInst_33;
        MR_Word STATE_VARIABLE_InstMapDelta_36_36;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_InstMapDelta_0_4;

        check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_1, Mode_29, &InitInst_32, &FinalInst_33);
        succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(InitInst_32, FinalInst_33);
        if (succeeded)
          STATE_VARIABLE_InstMapDelta_36_36 = STATE_VARIABLE_InstMapDelta_0_4;
        else
          hlds__instmap__instmap_delta_set_var_4_p_0(Var_39, FinalInst_33, STATE_VARIABLE_InstMapDelta_0_4, &STATE_VARIABLE_InstMapDelta_36_36);
        // direct tailcall eliminated
        next_value_of_HeadVar__2_2 = Var_38;
        next_value_of_HeadVar__3_3 = Modes_30;
        next_value_of_STATE_VARIABLE_InstMapDelta_0_4 = STATE_VARIABLE_InstMapDelta_36_36;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_InstMapDelta_0_4 = next_value_of_STATE_VARIABLE_InstMapDelta_0_4;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_set_var_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word InstMapping0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

      succeeded = (HeadVar__2_2 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
      if (succeeded)
        *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word InstMapping_11;

        mercury__map__set_4_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), InstMapping0_9, &InstMapping_11);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapping_11));
        }
      }
    }
  }
}

MR_Word MR_CALL 
hlds__instmap__instmap_delta_from_assoc_list_1_f_0(
  MR_Word AL_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Instmapping_4;

    mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, AL_3, &Instmapping_4);
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Instmapping_4));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__instmap__instmap_from_assoc_list_1_f_0(
  MR_Word AL_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Instmapping_4;

    mercury__map__from_assoc_list_2_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, AL_3, &Instmapping_4);
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Instmapping_4));
    }
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
hlds__instmap__instmap_delta_is_unreachable_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = (HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));

    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__instmap__instmap_delta_is_reachable_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Var_2;

    if (succeeded)
      Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__instmap__instmap_is_unreachable_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = (HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));

    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__instmap__instmap_is_reachable_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Var_2;

    if (succeeded)
      Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    return succeeded;
  }
}

void MR_CALL 
hlds__instmap__instmap_delta_init_unreachable_1_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
}

void MR_CALL 
hlds__instmap__instmap_delta_init_reachable_1_p_0(
  MR_Word * HeadVar__1_1)
{
  {
    MR_Word InstMapping_2;

    mercury__map__init_1_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &InstMapping_2);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__1_1 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapping_2));
    }
  }
}

void MR_CALL 
hlds__instmap__init_unreachable_1_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
}

void MR_CALL 
hlds__instmap__init_reachable_1_p_0(
  MR_Word * HeadVar__1_1)
{
  {
    MR_Word InstMapping_2;

    mercury__map__init_1_p_0((MR_Word) &hlds__instmap_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &InstMapping_2);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__1_1 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMapping_2));
    }
  }
}

static MR_bool MR_CALL 
hlds__instmap____Unify____arm_instmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__instmap____Unify____arm_instmap_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__instmap____Compare____arm_instmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__instmap____Compare____arm_instmap_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__instmap____Unify____instmap_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__instmap____Compare____instmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__instmap____Compare____instmap_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__instmap____Unify____instmap_delta_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__instmap____Unify____instmap_delta_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__instmap____Compare____instmap_delta_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__instmap____Compare____instmap_delta_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__instmap____Unify____instmapping_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__instmap____Unify____instmapping_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__instmap____Compare____instmapping_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__instmap____Compare____instmapping_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__instmap____Unify____overlay_how_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__instmap____Unify____overlay_how_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__instmap____Compare____overlay_how_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__instmap____Compare____overlay_how_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module hlds.instmap.
