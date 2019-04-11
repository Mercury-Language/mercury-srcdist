/*
** Automatically generated from `disj_gen.m'
** by the Mercury compiler,
** version rotd-2017-06-12
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


/* :- module ll_backend.disj_gen. */
/* :- implementation. */

/*
INIT mercury__ll_backend__disj_gen__init
ENDINIT
*/

#include "ll_backend.disj_gen.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "hlds.instmap.mih"
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
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.lookup_util.mih"
#include "ll_backend.trace_gen.mih"
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
#include "counter.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__disj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_DuFunctorDesc ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_PseudoTypeInfo ll_backend__disj_gen__ll_backend__disj_gen__field_types_commit_disj_region_cleanup_0_1[2];

static const MR_ConstString ll_backend__disj_gen__ll_backend__disj_gen__field_names_commit_disj_region_cleanup_0_1[2];

static const MR_DuFunctorDesc ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_1;

static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_1[1];

static const MR_DuPtagLayout ll_backend__disj_gen__ll_backend__disj_gen__du_ptag_ordered_commit_disj_region_cleanup_0[2];

static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_name_ordered_commit_disj_region_cleanup_0[2];

static const MR_Integer ll_backend__disj_gen__ll_backend__disj_gen__functor_number_map_commit_disj_region_cleanup_0[2];

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__disj_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__maybe__ti_maybe_1ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__disj_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1list__ti_list_1ll_backend__llds__type_ctor_info_rval_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0;

static const MR_PseudoTypeInfo ll_backend__disj_gen__ll_backend__disj_gen__field_types_lookup_disj_info_0_0[15];

static const MR_ConstString ll_backend__disj_gen__ll_backend__disj_gen__field_names_lookup_disj_info_0_0[15];

static const MR_DuFunctorDesc ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_lookup_disj_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_lookup_disj_info_0_0[1];

static const MR_DuPtagLayout ll_backend__disj_gen__ll_backend__disj_gen__du_ptag_ordered_lookup_disj_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_name_ordered_lookup_disj_info_0[1];

static const MR_Integer ll_backend__disj_gen__ll_backend__disj_gen__functor_number_map_lookup_disj_info_0[1];

static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0_10001(
  MR_Box ll_backend__disj_gen__wrapper_arg_1,
  MR_Box ll_backend__disj_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0_10001(
  MR_Box * ll_backend__disj_gen__wrapper_arg_1,
  MR_Box ll_backend__disj_gen__wrapper_arg_2,
  MR_Box ll_backend__disj_gen__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____lookup_disj_info_0_0_10001(
  MR_Box ll_backend__disj_gen__wrapper_arg_1,
  MR_Box ll_backend__disj_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__disj_gen____Compare____lookup_disj_info_0_0_10001(
  MR_Box * ll_backend__disj_gen__wrapper_arg_1,
  MR_Box ll_backend__disj_gen__wrapper_arg_2,
  MR_Box ll_backend__disj_gen__wrapper_arg_3);

static void MR_CALL 
ll_backend__disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_9_p_0(
  MR_Word ll_backend__disj_gen__DisjRegionOps_10,
  MR_Word * ll_backend__disj_gen__BeforeEnterCode_12,
  MR_Word * ll_backend__disj_gen__LaterCode_13,
  MR_Word * ll_backend__disj_gen__LastCode_14,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_38,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_39,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_40,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_41);

static MR_bool MR_CALL 
ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__556__1_2_p_0(
  MR_Word ll_backend__disj_gen__HpSlot_76,
  MR_Word ll_backend__disj_gen__BranchHpSlot_79);

static MR_bool MR_CALL 
ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__554__1_2_p_0(
  MR_Word ll_backend__disj_gen__HpCodeInstrs_81,
  MR_Word ll_backend__disj_gen__BranchHpCodeInstrs_82);

static void MR_CALL 
ll_backend__disj_gen____Compare____lookup_disj_info_0_0(
  MR_Word * ll_backend__disj_gen__HeadVar__1_1,
  MR_Word ll_backend__disj_gen__HeadVar__2_2,
  MR_Word ll_backend__disj_gen__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____lookup_disj_info_0_0(
  MR_Word ll_backend__disj_gen__HeadVar__1_1,
  MR_Word ll_backend__disj_gen__HeadVar__2_2);

static void MR_CALL 
ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0(
  MR_Word * ll_backend__disj_gen__HeadVar__1_1,
  MR_Word ll_backend__disj_gen__HeadVar__2_2,
  MR_Word ll_backend__disj_gen__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0(
  MR_Word ll_backend__disj_gen__HeadVar__1_1,
  MR_Word ll_backend__disj_gen__HeadVar__2_2);

static void MR_CALL 
ll_backend__disj_gen__disj_alloc_snapshot_regions_8_p_0(
  MR_Word ll_backend__disj_gen__NumLval_1,
  MR_Word ll_backend__disj_gen__AddrLval_2,
  MR_Word ll_backend__disj_gen__EmbeddedStackFrame_3,
  MR_Word ll_backend__disj_gen__HeadVar__4_4,
  MR_Word * ll_backend__disj_gen__HeadVar__5_5,
  MR_Word ll_backend__disj_gen__HeadVar__6_6,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_7,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_8);

static void MR_CALL 
ll_backend__disj_gen__disj_protect_regions_8_p_0(
  MR_Word ll_backend__disj_gen__NumLval_1,
  MR_Word ll_backend__disj_gen__AddrLval_2,
  MR_Word ll_backend__disj_gen__EmbeddedStackFrame_3,
  MR_Word ll_backend__disj_gen__HeadVar__4_4,
  MR_Word * ll_backend__disj_gen__HeadVar__5_5,
  MR_Word ll_backend__disj_gen__HeadVar__6_6,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_7,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_8);

static void MR_CALL 
ll_backend__disj_gen__maybe_create_disj_region_frame_semi_12_p_0(
  MR_Word ll_backend__disj_gen__DisjRegionOps_13,
  MR_Word ll_backend__disj_gen__DisjRemovedRegionVars_14,
  MR_Word ll_backend__disj_gen__DisjAllocRegionVars_15,
  MR_Word * ll_backend__disj_gen__BeforeEnterCode_16,
  MR_Word * ll_backend__disj_gen__LaterCode_17,
  MR_Word * ll_backend__disj_gen__LastCode_18,
  MR_Word * ll_backend__disj_gen__StackVars_19,
  MR_Word * ll_backend__disj_gen__RegionCommitDisjCleanup_20,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_49,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_50,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_51,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_52);

static MR_bool MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0_2(
  MR_Box ll_backend__disj_gen__closure_arg);

static MR_bool MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0_1(
  MR_Box ll_backend__disj_gen__closure_arg);

static void MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0(
  MR_Word ll_backend__disj_gen__HeadVar__1_1,
  MR_Word ll_backend__disj_gen__CodeModel_2,
  MR_Word ll_backend__disj_gen__FullResumeMap_3,
  MR_Word ll_backend__disj_gen__MaybeEntryResumePoint_4,
  MR_Word ll_backend__disj_gen__HijackInfo_5,
  MR_Word ll_backend__disj_gen__DisjGoalInfo_6,
  MR_Word ll_backend__disj_gen__RegionCommitDisjCleanup_7,
  MR_Word ll_backend__disj_gen__EndLabel_8,
  MR_Word ll_backend__disj_gen__ReclaimHeap_9,
  MR_Word ll_backend__disj_gen__MaybeHpSlot0_10,
  MR_Word ll_backend__disj_gen__MaybeTicketSlot_11,
  MR_Word ll_backend__disj_gen__LaterRegionCode_12,
  MR_Word ll_backend__disj_gen__LastRegionCode_13,
  MR_Word ll_backend__disj_gen__BranchStart0_14,
  MR_Word ll_backend__disj_gen__MaybeEnd0_15,
  MR_Word * ll_backend__disj_gen__MaybeEnd_16,
  MR_Word * ll_backend__disj_gen__Code_17,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_18,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_19);

static void MR_CALL 
ll_backend__disj_gen__generate_real_disj_11_p_0(
  MR_Word ll_backend__disj_gen__AddTrailOps_12,
  MR_Word ll_backend__disj_gen__AddRegionOps_13,
  MR_Word ll_backend__disj_gen__CodeModel_14,
  MR_Word ll_backend__disj_gen__ResumeVars_15,
  MR_Word ll_backend__disj_gen__Goals_16,
  MR_Word ll_backend__disj_gen__DisjGoalInfo_17,
  MR_Word * ll_backend__disj_gen__Code_18,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_49,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_50,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_51,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_52);

static void MR_CALL 
ll_backend__disj_gen__generate_lookup_disj_7_p_0(
  MR_Word ll_backend__disj_gen__ResumeVars_8,
  MR_Word ll_backend__disj_gen__LookupDisjInfo_9,
  MR_Word * ll_backend__disj_gen__Code_10,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_61,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_62,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_63,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_64);

static MR_bool MR_CALL 
ll_backend__disj_gen__is_lookup_disj_10_p_0(
  MR_Word ll_backend__disj_gen__AddTrailOps_11,
  MR_Word ll_backend__disj_gen__AddRegionOps_12,
  MR_Word ll_backend__disj_gen__ResumeVars_13,
  MR_Word ll_backend__disj_gen__Disjuncts_14,
  MR_Word ll_backend__disj_gen__DisjGoalInfo_15,
  MR_Word * ll_backend__disj_gen__LookupDisjInfo_16,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_52,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_53,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_54,
  MR_Word * ll_backend__disj_gen__AfterPrepPos_19);


static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_1[13][2];

static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_2[2][3];

static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_3[2][1];

static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_4[2][5];




static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_1[13][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__disj_gen_scalar_common_1[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&ll_backend__disj_gen_scalar_common_1[1]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__disj_gen_scalar_common_1[0]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__disj_gen_scalar_common_3[0])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__disj_gen_scalar_common_3[1]))),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__disj_gen_scalar_common_1[1])),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__disj_gen_scalar_common_1[1])),
    ((MR_Box) (&ll_backend__disj_gen_scalar_common_1[7]))
  },
};

static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "lookup disj"))
  },
};

static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__disj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__disj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__disj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

static const MR_DuFunctorDesc ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_0 = {
  (MR_String) "no_commit_disj_region_cleanup",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

static const MR_PseudoTypeInfo ll_backend__disj_gen__ll_backend__disj_gen__field_types_commit_disj_region_cleanup_0_1[2] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0
};

static const MR_ConstString ll_backend__disj_gen__ll_backend__disj_gen__field_names_commit_disj_region_cleanup_0_1[2] = {
  (MR_String) "cleanup_label",
  (MR_String) "cleanup_code"
};

static const MR_DuFunctorDesc ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_1 = {
  (MR_String) "commit_disj_region_cleanup",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__disj_gen__ll_backend__disj_gen__field_types_commit_disj_region_cleanup_0_1,
  ll_backend__disj_gen__ll_backend__disj_gen__field_names_commit_disj_region_cleanup_0_1,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_0[1] = {
  &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_0
};

static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_1[1] = {
  &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_1
};

static const MR_DuPtagLayout ll_backend__disj_gen__ll_backend__disj_gen__du_ptag_ordered_commit_disj_region_cleanup_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_1
  }
};

static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_name_ordered_commit_disj_region_cleanup_0[2] = {
  &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_1,
  &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_0
};

static const MR_Integer ll_backend__disj_gen__ll_backend__disj_gen__functor_number_map_commit_disj_region_cleanup_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__disj_gen__ll_backend__disj_gen__type_ctor_info_commit_disj_region_cleanup_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0_10001)),
  ((MR_Box) (ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0_10001)),
  (MR_String) "ll_backend.disj_gen",
  (MR_String) "commit_disj_region_cleanup",
  {     ll_backend__disj_gen__ll_backend__disj_gen__du_name_ordered_commit_disj_region_cleanup_0 },
  {     ll_backend__disj_gen__ll_backend__disj_gen__du_ptag_ordered_commit_disj_region_cleanup_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__disj_gen__ll_backend__disj_gen__functor_number_map_commit_disj_region_cleanup_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__disj_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__maybe__ti_maybe_1ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__disj_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &ll_backend__disj_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1list__ti_list_1ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0
  }
};

static const MR_PseudoTypeInfo ll_backend__disj_gen__ll_backend__disj_gen__field_types_lookup_disj_info_0_0[15] = {
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__maybe__ti_maybe_1ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_disj_hijack_info_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__list__ti_list_1list__ti_list_1ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0
};

static const MR_ConstString ll_backend__disj_gen__ll_backend__disj_gen__field_names_lookup_disj_info_0_0[15] = {
  (MR_String) "ldi_variables",
  (MR_String) "ldi_store_map",
  (MR_String) "ldi_branch_end",
  (MR_String) "ldi_liveness",
  (MR_String) "lds_cur_slot",
  (MR_String) "lds_resume_map",
  (MR_String) "lds_flush_code",
  (MR_String) "lds_save_ticket_code",
  (MR_String) "lds_maybe_ticket_slot",
  (MR_String) "lds_save_hp_code",
  (MR_String) "lds_maybe_hp_slot",
  (MR_String) "lds_hijack_info",
  (MR_String) "lds_prepare_hijack_code",
  (MR_String) "ldi_solns",
  (MR_String) "ldi_field_types"
};

static const MR_DuFunctorDesc ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_lookup_disj_info_0_0 = {
  (MR_String) "lookup_disj_info",
  (MR_Integer) 15,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__disj_gen__ll_backend__disj_gen__field_types_lookup_disj_info_0_0,
  ll_backend__disj_gen__ll_backend__disj_gen__field_names_lookup_disj_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_lookup_disj_info_0_0[1] = {
  &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_lookup_disj_info_0_0
};

static const MR_DuPtagLayout ll_backend__disj_gen__ll_backend__disj_gen__du_ptag_ordered_lookup_disj_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_lookup_disj_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_name_ordered_lookup_disj_info_0[1] = {
  &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_lookup_disj_info_0_0
};

static const MR_Integer ll_backend__disj_gen__ll_backend__disj_gen__functor_number_map_lookup_disj_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__disj_gen__ll_backend__disj_gen__type_ctor_info_lookup_disj_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__disj_gen____Unify____lookup_disj_info_0_0_10001)),
  ((MR_Box) (ll_backend__disj_gen____Compare____lookup_disj_info_0_0_10001)),
  (MR_String) "ll_backend.disj_gen",
  (MR_String) "lookup_disj_info",
  {     ll_backend__disj_gen__ll_backend__disj_gen__du_name_ordered_lookup_disj_info_0 },
  {     ll_backend__disj_gen__ll_backend__disj_gen__du_ptag_ordered_lookup_disj_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__disj_gen__ll_backend__disj_gen__functor_number_map_lookup_disj_info_0
};

static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0_10001(
  MR_Box ll_backend__disj_gen__wrapper_arg_1,
  MR_Box ll_backend__disj_gen__wrapper_arg_2)
{
  {
    MR_bool ll_backend__disj_gen__succeeded;

    {
      ll_backend__disj_gen__succeeded = ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0(((MR_Word) ll_backend__disj_gen__wrapper_arg_1), ((MR_Word) ll_backend__disj_gen__wrapper_arg_2));
    }
    return ll_backend__disj_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0_10001(
  MR_Box * ll_backend__disj_gen__wrapper_arg_1,
  MR_Box ll_backend__disj_gen__wrapper_arg_2,
  MR_Box ll_backend__disj_gen__wrapper_arg_3)
{
  {
    MR_Word ll_backend__disj_gen__conv0_HeadVar__1_1;

    {
      ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0(&ll_backend__disj_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__disj_gen__wrapper_arg_2), ((MR_Word) ll_backend__disj_gen__wrapper_arg_3));
    }
    *ll_backend__disj_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__disj_gen__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____lookup_disj_info_0_0_10001(
  MR_Box ll_backend__disj_gen__wrapper_arg_1,
  MR_Box ll_backend__disj_gen__wrapper_arg_2)
{
  {
    MR_bool ll_backend__disj_gen__succeeded;

    {
      ll_backend__disj_gen__succeeded = ll_backend__disj_gen____Unify____lookup_disj_info_0_0(((MR_Word) ll_backend__disj_gen__wrapper_arg_1), ((MR_Word) ll_backend__disj_gen__wrapper_arg_2));
    }
    return ll_backend__disj_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__disj_gen____Compare____lookup_disj_info_0_0_10001(
  MR_Box * ll_backend__disj_gen__wrapper_arg_1,
  MR_Box ll_backend__disj_gen__wrapper_arg_2,
  MR_Box ll_backend__disj_gen__wrapper_arg_3)
{
  {
    MR_Word ll_backend__disj_gen__conv0_HeadVar__1_1;

    {
      ll_backend__disj_gen____Compare____lookup_disj_info_0_0(&ll_backend__disj_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__disj_gen__wrapper_arg_2), ((MR_Word) ll_backend__disj_gen__wrapper_arg_3));
    }
    *ll_backend__disj_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__disj_gen__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ll_backend__disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_9_p_0(
  MR_Word ll_backend__disj_gen__DisjRegionOps_10,
  MR_Word * ll_backend__disj_gen__BeforeEnterCode_12,
  MR_Word * ll_backend__disj_gen__LaterCode_13,
  MR_Word * ll_backend__disj_gen__LastCode_14,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_38,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_39,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_40,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_41)
{
  {
    MR_bool ll_backend__disj_gen__succeeded;

    switch (ll_backend__disj_gen__DisjRegionOps_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__disj_gen__TypeCtorInfo_91_91;
          MR_Word ll_backend__disj_gen__ForwardLiveVars_17;
          MR_Word ll_backend__disj_gen__SnapshotRegionVars_19;
          MR_Word ll_backend__disj_gen__SnapshotRegionVarList_20;
          MR_Integer ll_backend__disj_gen__NumSnapshotRegionVars_21;
          MR_Word ll_backend__disj_gen__Globals_22;
          MR_Integer ll_backend__disj_gen__FixedSize_23;
          MR_Integer ll_backend__disj_gen__SnapshotSize_24;
          MR_Integer ll_backend__disj_gen__FrameSize_25;
          MR_Word ll_backend__disj_gen__Items_26;
          MR_Word ll_backend__disj_gen__MainStackId_28;
          MR_Integer ll_backend__disj_gen__FirstSlotNum_29;
          MR_Integer ll_backend__disj_gen__LastSlotNum_30;
          MR_Word ll_backend__disj_gen__EmbeddedStackFrame_31;
          MR_Word ll_backend__disj_gen__FirstNonFixedAddr_32;
          MR_Word ll_backend__disj_gen__SnapshotNumRegLval_33;
          MR_Word ll_backend__disj_gen__AddrRegLval_34;
          MR_Word ll_backend__disj_gen__PushInitCode_35;
          MR_Word ll_backend__disj_gen__SnapshotRegionCode_36;
          MR_Word ll_backend__disj_gen__SetCode_37;
          MR_Integer ll_backend__disj_gen__Var_44;
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_48_48;
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_50_50;
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_52_52;
          MR_Word ll_backend__disj_gen__Var_53;
          MR_Word ll_backend__disj_gen__Var_54;
          MR_Word ll_backend__disj_gen__Var_55;
          MR_Word ll_backend__disj_gen__Var_58;
          MR_Word ll_backend__disj_gen__Var_59;
          MR_Word ll_backend__disj_gen__Var_60;
          MR_Word ll_backend__disj_gen__Var_65;
          MR_Word ll_backend__disj_gen__Var_66;
          MR_Word ll_backend__disj_gen__Var_67;
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_70_70;
          MR_Word ll_backend__disj_gen__Var_71;
          MR_Word ll_backend__disj_gen__Var_72;
          MR_Word ll_backend__disj_gen__Var_74;
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_76_76;
          MR_Word ll_backend__disj_gen__Var_78;
          MR_Word ll_backend__disj_gen__Var_79;
          MR_Word ll_backend__disj_gen__Var_80;
          MR_Word ll_backend__disj_gen__Var_83;
          MR_Word ll_backend__disj_gen__Var_84;
          MR_Word ll_backend__disj_gen___StackVars_27;

          {
            ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CLD_0_40, &ll_backend__disj_gen__ForwardLiveVars_17);
          }
          {
            ll_backend__disj_gen__SnapshotRegionVars_19 = ll_backend__code_info__filter_region_vars_2_f_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_38, ll_backend__disj_gen__ForwardLiveVars_17);
          }
          {
            ll_backend__disj_gen__SnapshotRegionVarList_20 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__disj_gen__SnapshotRegionVars_19);
          }
          {
            mercury__list__length_2_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[1], ll_backend__disj_gen__SnapshotRegionVarList_20, &ll_backend__disj_gen__NumSnapshotRegionVars_21);
          }
          {
            ll_backend__code_info__get_globals_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_38, &ll_backend__disj_gen__Globals_22);
          }
          {
            libs__globals__lookup_int_option_3_p_0(ll_backend__disj_gen__Globals_22, (MR_Integer) 294, &ll_backend__disj_gen__FixedSize_23);
          }
          {
            libs__globals__lookup_int_option_3_p_0(ll_backend__disj_gen__Globals_22, (MR_Integer) 300, &ll_backend__disj_gen__SnapshotSize_24);
          }
          ll_backend__disj_gen__Var_44 = (ll_backend__disj_gen__SnapshotSize_24 * ll_backend__disj_gen__NumSnapshotRegionVars_21);
          ll_backend__disj_gen__FrameSize_25 = (ll_backend__disj_gen__FixedSize_23 + ll_backend__disj_gen__Var_44);
          {
            ll_backend__disj_gen__Items_26 = mercury__list__duplicate_2_f_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0, ll_backend__disj_gen__FrameSize_25, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))));
          }
          {
            ll_backend__code_loc_dep__acquire_several_temp_slots_10_p_0(ll_backend__disj_gen__Items_26, (MR_Integer) 1, &ll_backend__disj_gen___StackVars_27, &ll_backend__disj_gen__MainStackId_28, &ll_backend__disj_gen__FirstSlotNum_29, &ll_backend__disj_gen__LastSlotNum_30, ll_backend__disj_gen__STATE_VARIABLE_CI_0_38, ll_backend__disj_gen__STATE_VARIABLE_CI_39, ll_backend__disj_gen__STATE_VARIABLE_CLD_0_40, &ll_backend__disj_gen__STATE_VARIABLE_CLD_48_48);
          }
          {
            ll_backend__disj_gen__EmbeddedStackFrame_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__EmbeddedStackFrame_31, 0) = ((MR_Box) (ll_backend__disj_gen__MainStackId_28));
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__EmbeddedStackFrame_31, 1) = ((MR_Box) (ll_backend__disj_gen__FirstSlotNum_29));
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__EmbeddedStackFrame_31, 2) = ((MR_Box) (ll_backend__disj_gen__LastSlotNum_30));
          }
          {
            ll_backend__disj_gen__FirstNonFixedAddr_32 = ll_backend__llds__first_nonfixed_embedded_slot_addr_2_f_0(ll_backend__disj_gen__EmbeddedStackFrame_31, ll_backend__disj_gen__FixedSize_23);
          }
          {
            ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__disj_gen__SnapshotNumRegLval_33, ll_backend__disj_gen__STATE_VARIABLE_CLD_48_48, &ll_backend__disj_gen__STATE_VARIABLE_CLD_50_50);
          }
          {
            ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__disj_gen__AddrRegLval_34, ll_backend__disj_gen__STATE_VARIABLE_CLD_50_50, &ll_backend__disj_gen__STATE_VARIABLE_CLD_52_52);
          }
          ll_backend__disj_gen__TypeCtorInfo_91_91 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
          {
            ll_backend__disj_gen__Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_55, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_55, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_31));
          }
          {
            ll_backend__disj_gen__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_54, 0) = ((MR_Box) (ll_backend__disj_gen__Var_55));
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_54, 1) = ((MR_Box) ((MR_String) "Save stack pointer of embedded region nondet stack"));
          }
          {
            ll_backend__disj_gen__Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_60, 1) = ((MR_Box) (ll_backend__disj_gen__SnapshotNumRegLval_33));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_60, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__disj_gen_scalar_common_1[11])));
          }
          {
            ll_backend__disj_gen__Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_59, 0) = ((MR_Box) (ll_backend__disj_gen__Var_60));
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_59, 1) = ((MR_Box) ((MR_String) "Initialize number of snapshot_infos"));
          }
          {
            ll_backend__disj_gen__Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_67, 1) = ((MR_Box) (ll_backend__disj_gen__AddrRegLval_34));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_67, 2) = ((MR_Box) (ll_backend__disj_gen__FirstNonFixedAddr_32));
          }
          {
            ll_backend__disj_gen__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_66, 0) = ((MR_Box) (ll_backend__disj_gen__Var_67));
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_66, 1) = ((MR_Box) ((MR_String) "Initialize pointer to nonfixed part of embedded frame"));
          }
          {
            ll_backend__disj_gen__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_65, 0) = ((MR_Box) (ll_backend__disj_gen__Var_66));
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__disj_gen__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_58, 0) = ((MR_Box) (ll_backend__disj_gen__Var_59));
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_58, 1) = ((MR_Box) (ll_backend__disj_gen__Var_65));
          }
          {
            ll_backend__disj_gen__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_53, 0) = ((MR_Box) (ll_backend__disj_gen__Var_54));
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_53, 1) = ((MR_Box) (ll_backend__disj_gen__Var_58));
          }
          {
            ll_backend__disj_gen__PushInitCode_35 = mercury__cord__from_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_91_91, ll_backend__disj_gen__Var_53);
          }
          {
            ll_backend__disj_gen__disj_alloc_snapshot_regions_8_p_0(ll_backend__disj_gen__SnapshotNumRegLval_33, ll_backend__disj_gen__AddrRegLval_34, ll_backend__disj_gen__EmbeddedStackFrame_31, ll_backend__disj_gen__SnapshotRegionVarList_20, &ll_backend__disj_gen__SnapshotRegionCode_36, *ll_backend__disj_gen__STATE_VARIABLE_CI_39, ll_backend__disj_gen__STATE_VARIABLE_CLD_52_52, &ll_backend__disj_gen__STATE_VARIABLE_CLD_70_70);
          }
          {
            ll_backend__disj_gen__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_74, 0) = ((MR_Box) (ll_backend__disj_gen__SnapshotNumRegLval_33));
          }
          {
            ll_backend__disj_gen__Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_72, 1) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_72, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_31));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_72, 3) = ((MR_Box) (ll_backend__disj_gen__Var_74));
          }
          {
            ll_backend__disj_gen__Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_71, 0) = ((MR_Box) (ll_backend__disj_gen__Var_72));
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_71, 1) = ((MR_Box) ((MR_String) "Store the number of snapshot_infos"));
          }
          {
            ll_backend__disj_gen__SetCode_37 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_91_91, ((MR_Box) (ll_backend__disj_gen__Var_71)));
          }
          {
            ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__disj_gen__SnapshotNumRegLval_33, ll_backend__disj_gen__STATE_VARIABLE_CLD_70_70, &ll_backend__disj_gen__STATE_VARIABLE_CLD_76_76);
          }
          {
            ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__disj_gen__AddrRegLval_34, ll_backend__disj_gen__STATE_VARIABLE_CLD_76_76, ll_backend__disj_gen__STATE_VARIABLE_CLD_41);
          }
          {
            ll_backend__disj_gen__Var_78 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_91_91, ll_backend__disj_gen__SnapshotRegionCode_36, ll_backend__disj_gen__SetCode_37);
          }
          {
            *ll_backend__disj_gen__BeforeEnterCode_12 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_91_91, ll_backend__disj_gen__PushInitCode_35, ll_backend__disj_gen__Var_78);
          }
          {
            ll_backend__disj_gen__Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_80, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_31));
          }
          {
            ll_backend__disj_gen__Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_79, 0) = ((MR_Box) (ll_backend__disj_gen__Var_80));
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_79, 1) = ((MR_Box) ((MR_String) "region enter later disjunct"));
          }
          {
            *ll_backend__disj_gen__LaterCode_13 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_91_91, ((MR_Box) (ll_backend__disj_gen__Var_79)));
          }
          {
            ll_backend__disj_gen__Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_84, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_31));
          }
          {
            ll_backend__disj_gen__Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_83, 0) = ((MR_Box) (ll_backend__disj_gen__Var_84));
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_83, 1) = ((MR_Box) ((MR_String) "region enter last disjunct"));
          }
          {
            *ll_backend__disj_gen__LastCode_14 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_91_91, ((MR_Box) (ll_backend__disj_gen__Var_83)));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__disj_gen__TypeCtorInfo_87_87 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

          {
            *ll_backend__disj_gen__BeforeEnterCode_12 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_87_87);
          }
          {
            *ll_backend__disj_gen__LaterCode_13 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_87_87);
          }
          {
            *ll_backend__disj_gen__LastCode_14 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_87_87);
          }
          *ll_backend__disj_gen__STATE_VARIABLE_CI_39 = ll_backend__disj_gen__STATE_VARIABLE_CI_0_38;
          *ll_backend__disj_gen__STATE_VARIABLE_CLD_41 = ll_backend__disj_gen__STATE_VARIABLE_CLD_0_40;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__556__1_2_p_0(
  MR_Word ll_backend__disj_gen__HpSlot_76,
  MR_Word ll_backend__disj_gen__BranchHpSlot_79)
{
  {
    MR_bool ll_backend__disj_gen__succeeded;

    {
      ll_backend__disj_gen__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__disj_gen__HpSlot_76, ll_backend__disj_gen__BranchHpSlot_79);
    }
    return ll_backend__disj_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__554__1_2_p_0(
  MR_Word ll_backend__disj_gen__HpCodeInstrs_81,
  MR_Word ll_backend__disj_gen__BranchHpCodeInstrs_82)
{
  {
    MR_bool ll_backend__disj_gen__succeeded;

    {
      ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[2], ((MR_Box) (ll_backend__disj_gen__HpCodeInstrs_81)), ((MR_Box) (ll_backend__disj_gen__BranchHpCodeInstrs_82)));
    }
    return ll_backend__disj_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__disj_gen____Compare____lookup_disj_info_0_0(
  MR_Word * ll_backend__disj_gen__HeadVar__1_1,
  MR_Word ll_backend__disj_gen__HeadVar__2_2,
  MR_Word ll_backend__disj_gen__HeadVar__3_3)
{
  {
    MR_bool ll_backend__disj_gen__succeeded;
    MR_Integer ll_backend__disj_gen__CastX_48 = (MR_Integer) ll_backend__disj_gen__HeadVar__2_2;
    MR_Integer ll_backend__disj_gen__CastY_49 = (MR_Integer) ll_backend__disj_gen__HeadVar__3_3;

    ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__CastX_48 == ll_backend__disj_gen__CastY_49);
    if (ll_backend__disj_gen__succeeded)
      *ll_backend__disj_gen__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__disj_gen__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__disj_gen__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__disj_gen__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__disj_gen__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__disj_gen__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ll_backend__disj_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ll_backend__disj_gen__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ll_backend__disj_gen__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word ll_backend__disj_gen__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word ll_backend__disj_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word ll_backend__disj_gen__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word ll_backend__disj_gen__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 11)));
        MR_Word ll_backend__disj_gen__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 12)));
        MR_Word ll_backend__disj_gen__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 13)));
        MR_Word ll_backend__disj_gen__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 14)));
        MR_Word ll_backend__disj_gen__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__disj_gen__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__disj_gen__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__disj_gen__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ll_backend__disj_gen__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ll_backend__disj_gen__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word ll_backend__disj_gen__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word ll_backend__disj_gen__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word ll_backend__disj_gen__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word ll_backend__disj_gen__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 9)));
        MR_Word ll_backend__disj_gen__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 10)));
        MR_Word ll_backend__disj_gen__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 11)));
        MR_Word ll_backend__disj_gen__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 12)));
        MR_Word ll_backend__disj_gen__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 13)));
        MR_Word ll_backend__disj_gen__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 14)));
        MR_Word ll_backend__disj_gen__Var_34;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[4], &ll_backend__disj_gen__Var_34, ((MR_Box) (ll_backend__disj_gen__Var_4)), ((MR_Box) (ll_backend__disj_gen__Var_19)));
        }
        ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__Var_34 == (MR_Integer) 0);
        ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
        if (ll_backend__disj_gen__succeeded)
          *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__Var_34;
        else
          {
            MR_Word ll_backend__disj_gen__Var_35;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_2[0], &ll_backend__disj_gen__Var_35, ((MR_Box) (ll_backend__disj_gen__Var_5)), ((MR_Box) (ll_backend__disj_gen__Var_20)));
            }
            ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__Var_35 == (MR_Integer) 0);
            ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
            if (ll_backend__disj_gen__succeeded)
              *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__Var_35;
            else
              {
                MR_Word ll_backend__disj_gen__Var_36;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[5], &ll_backend__disj_gen__Var_36, ((MR_Box) (ll_backend__disj_gen__Var_6)), ((MR_Box) (ll_backend__disj_gen__Var_21)));
                }
                ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__Var_36 == (MR_Integer) 0);
                ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
                if (ll_backend__disj_gen__succeeded)
                  *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__Var_36;
                else
                  {
                    MR_Word ll_backend__disj_gen__Var_37;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[6], &ll_backend__disj_gen__Var_37, ((MR_Box) (ll_backend__disj_gen__Var_7)), ((MR_Box) (ll_backend__disj_gen__Var_22)));
                    }
                    ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__Var_37 == (MR_Integer) 0);
                    ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
                    if (ll_backend__disj_gen__succeeded)
                      *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__Var_37;
                    else
                      {
                        MR_Word ll_backend__disj_gen__Var_38;

                        {
                          ll_backend__llds____Compare____lval_0_0(&ll_backend__disj_gen__Var_38, ll_backend__disj_gen__Var_8, ll_backend__disj_gen__Var_23);
                        }
                        ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__Var_38 == (MR_Integer) 0);
                        ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
                        if (ll_backend__disj_gen__succeeded)
                          *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__Var_38;
                        else
                          {
                            MR_Word ll_backend__disj_gen__Var_39;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_2[1], &ll_backend__disj_gen__Var_39, ((MR_Box) (ll_backend__disj_gen__Var_9)), ((MR_Box) (ll_backend__disj_gen__Var_24)));
                            }
                            ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__Var_39 == (MR_Integer) 0);
                            ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
                            if (ll_backend__disj_gen__succeeded)
                              *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__Var_39;
                            else
                              {
                                MR_Word ll_backend__disj_gen__Var_40;

                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[3], &ll_backend__disj_gen__Var_40, ((MR_Box) (ll_backend__disj_gen__Var_10)), ((MR_Box) (ll_backend__disj_gen__Var_25)));
                                }
                                ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__Var_40 == (MR_Integer) 0);
                                ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
                                if (ll_backend__disj_gen__succeeded)
                                  *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__Var_40;
                                else
                                  {
                                    MR_Word ll_backend__disj_gen__Var_41;

                                    {
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[3], &ll_backend__disj_gen__Var_41, ((MR_Box) (ll_backend__disj_gen__Var_11)), ((MR_Box) (ll_backend__disj_gen__Var_26)));
                                    }
                                    ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__Var_41 == (MR_Integer) 0);
                                    ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
                                    if (ll_backend__disj_gen__succeeded)
                                      *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__Var_41;
                                    else
                                      {
                                        MR_Word ll_backend__disj_gen__Var_42;

                                        {
                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[8], &ll_backend__disj_gen__Var_42, ((MR_Box) (ll_backend__disj_gen__Var_12)), ((MR_Box) (ll_backend__disj_gen__Var_27)));
                                        }
                                        ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__Var_42 == (MR_Integer) 0);
                                        ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
                                        if (ll_backend__disj_gen__succeeded)
                                          *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__Var_42;
                                        else
                                          {
                                            MR_Word ll_backend__disj_gen__Var_43;

                                            {
                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[3], &ll_backend__disj_gen__Var_43, ((MR_Box) (ll_backend__disj_gen__Var_13)), ((MR_Box) (ll_backend__disj_gen__Var_28)));
                                            }
                                            ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__Var_43 == (MR_Integer) 0);
                                            ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
                                            if (ll_backend__disj_gen__succeeded)
                                              *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__Var_43;
                                            else
                                              {
                                                MR_Word ll_backend__disj_gen__Var_44;

                                                {
                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[8], &ll_backend__disj_gen__Var_44, ((MR_Box) (ll_backend__disj_gen__Var_14)), ((MR_Box) (ll_backend__disj_gen__Var_29)));
                                                }
                                                ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__Var_44 == (MR_Integer) 0);
                                                ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
                                                if (ll_backend__disj_gen__succeeded)
                                                  *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__Var_44;
                                                else
                                                  {
                                                    MR_Word ll_backend__disj_gen__Var_45;

                                                    {
                                                      ll_backend__code_loc_dep____Compare____disj_hijack_info_0_0(&ll_backend__disj_gen__Var_45, ll_backend__disj_gen__Var_15, ll_backend__disj_gen__Var_30);
                                                    }
                                                    ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__Var_45 == (MR_Integer) 0);
                                                    ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
                                                    if (ll_backend__disj_gen__succeeded)
                                                      *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__Var_45;
                                                    else
                                                      {
                                                        MR_Word ll_backend__disj_gen__Var_46;

                                                        {
                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[3], &ll_backend__disj_gen__Var_46, ((MR_Box) (ll_backend__disj_gen__Var_16)), ((MR_Box) (ll_backend__disj_gen__Var_31)));
                                                        }
                                                        ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__Var_46 == (MR_Integer) 0);
                                                        ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
                                                        if (ll_backend__disj_gen__succeeded)
                                                          *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__Var_46;
                                                        else
                                                          {
                                                            MR_Word ll_backend__disj_gen__Var_47;

                                                            {
                                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[9], &ll_backend__disj_gen__Var_47, ((MR_Box) (ll_backend__disj_gen__Var_17)), ((MR_Box) (ll_backend__disj_gen__Var_32)));
                                                            }
                                                            ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__Var_47 == (MR_Integer) 0);
                                                            ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
                                                            if (ll_backend__disj_gen__succeeded)
                                                              *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__Var_47;
                                                            else
                                                              {
                                                                {
                                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[10], ll_backend__disj_gen__HeadVar__1_1, ((MR_Box) (ll_backend__disj_gen__Var_18)), ((MR_Box) (ll_backend__disj_gen__Var_33)));
                                                                }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____lookup_disj_info_0_0(
  MR_Word ll_backend__disj_gen__HeadVar__1_1,
  MR_Word ll_backend__disj_gen__HeadVar__2_2)
{
  {
    MR_bool ll_backend__disj_gen__succeeded;
    MR_Integer ll_backend__disj_gen__CastX_33 = (MR_Integer) ll_backend__disj_gen__HeadVar__1_1;
    MR_Integer ll_backend__disj_gen__CastY_34 = (MR_Integer) ll_backend__disj_gen__HeadVar__2_2;

    ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__CastX_33 == ll_backend__disj_gen__CastY_34);
    if (ll_backend__disj_gen__succeeded)
      ll_backend__disj_gen__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__disj_gen__TypeInfo_36_36;
        MR_Word ll_backend__disj_gen__TypeInfo_37_37;
        MR_Word ll_backend__disj_gen__TypeInfo_38_38;
        MR_Word ll_backend__disj_gen__TypeInfo_40_40;
        MR_Word ll_backend__disj_gen__TypeInfo_41_41;
        MR_Word ll_backend__disj_gen__TypeInfo_42_42;
        MR_Word ll_backend__disj_gen__TypeInfo_43_43;
        MR_Word ll_backend__disj_gen__TypeInfo_44_44;
        MR_Word ll_backend__disj_gen__TypeInfo_45_45;
        MR_Word ll_backend__disj_gen__TypeInfo_47_47;
        MR_Word ll_backend__disj_gen__TypeInfo_48_48;
        MR_Word ll_backend__disj_gen__TypeInfo_49_49;
        MR_Word ll_backend__disj_gen__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__disj_gen__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__disj_gen__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ll_backend__disj_gen__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ll_backend__disj_gen__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ll_backend__disj_gen__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word ll_backend__disj_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word ll_backend__disj_gen__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word ll_backend__disj_gen__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word ll_backend__disj_gen__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 9)));
        MR_Word ll_backend__disj_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 10)));
        MR_Word ll_backend__disj_gen__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 11)));
        MR_Word ll_backend__disj_gen__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 12)));
        MR_Word ll_backend__disj_gen__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 13)));
        MR_Word ll_backend__disj_gen__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 14)));
        MR_Word ll_backend__disj_gen__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__disj_gen__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__disj_gen__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__disj_gen__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__disj_gen__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ll_backend__disj_gen__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ll_backend__disj_gen__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ll_backend__disj_gen__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word ll_backend__disj_gen__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word ll_backend__disj_gen__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word ll_backend__disj_gen__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word ll_backend__disj_gen__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 11)));
        MR_Word ll_backend__disj_gen__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 12)));
        MR_Word ll_backend__disj_gen__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 13)));
        MR_Word ll_backend__disj_gen__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 14)));

        {
          ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[4], ((MR_Box) (ll_backend__disj_gen__Var_3)), ((MR_Box) (ll_backend__disj_gen__Var_18)));
        }
        if (ll_backend__disj_gen__succeeded)
          {
            ll_backend__disj_gen__TypeInfo_36_36 = (MR_Word) &ll_backend__disj_gen_scalar_common_2[0];
            {
              ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_36_36, ((MR_Box) (ll_backend__disj_gen__Var_4)), ((MR_Box) (ll_backend__disj_gen__Var_19)));
            }
            if (ll_backend__disj_gen__succeeded)
              {
                ll_backend__disj_gen__TypeInfo_37_37 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[5];
                {
                  ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_37_37, ((MR_Box) (ll_backend__disj_gen__Var_5)), ((MR_Box) (ll_backend__disj_gen__Var_20)));
                }
                if (ll_backend__disj_gen__succeeded)
                  {
                    ll_backend__disj_gen__TypeInfo_38_38 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[6];
                    {
                      ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_38_38, ((MR_Box) (ll_backend__disj_gen__Var_6)), ((MR_Box) (ll_backend__disj_gen__Var_21)));
                    }
                    if (ll_backend__disj_gen__succeeded)
                      {
                        {
                          ll_backend__disj_gen__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__disj_gen__Var_7, ll_backend__disj_gen__Var_22);
                        }
                        if (ll_backend__disj_gen__succeeded)
                          {
                            ll_backend__disj_gen__TypeInfo_40_40 = (MR_Word) &ll_backend__disj_gen_scalar_common_2[1];
                            {
                              ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_40_40, ((MR_Box) (ll_backend__disj_gen__Var_8)), ((MR_Box) (ll_backend__disj_gen__Var_23)));
                            }
                            if (ll_backend__disj_gen__succeeded)
                              {
                                ll_backend__disj_gen__TypeInfo_41_41 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[3];
                                {
                                  ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_41_41, ((MR_Box) (ll_backend__disj_gen__Var_9)), ((MR_Box) (ll_backend__disj_gen__Var_24)));
                                }
                                if (ll_backend__disj_gen__succeeded)
                                  {
                                    ll_backend__disj_gen__TypeInfo_42_42 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[3];
                                    {
                                      ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_42_42, ((MR_Box) (ll_backend__disj_gen__Var_10)), ((MR_Box) (ll_backend__disj_gen__Var_25)));
                                    }
                                    if (ll_backend__disj_gen__succeeded)
                                      {
                                        ll_backend__disj_gen__TypeInfo_43_43 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[8];
                                        {
                                          ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_43_43, ((MR_Box) (ll_backend__disj_gen__Var_11)), ((MR_Box) (ll_backend__disj_gen__Var_26)));
                                        }
                                        if (ll_backend__disj_gen__succeeded)
                                          {
                                            ll_backend__disj_gen__TypeInfo_44_44 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[3];
                                            {
                                              ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_44_44, ((MR_Box) (ll_backend__disj_gen__Var_12)), ((MR_Box) (ll_backend__disj_gen__Var_27)));
                                            }
                                            if (ll_backend__disj_gen__succeeded)
                                              {
                                                ll_backend__disj_gen__TypeInfo_45_45 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[8];
                                                {
                                                  ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_45_45, ((MR_Box) (ll_backend__disj_gen__Var_13)), ((MR_Box) (ll_backend__disj_gen__Var_28)));
                                                }
                                                if (ll_backend__disj_gen__succeeded)
                                                  {
                                                    {
                                                      ll_backend__disj_gen__succeeded = ll_backend__code_loc_dep____Unify____disj_hijack_info_0_0(ll_backend__disj_gen__Var_14, ll_backend__disj_gen__Var_29);
                                                    }
                                                    if (ll_backend__disj_gen__succeeded)
                                                      {
                                                        ll_backend__disj_gen__TypeInfo_47_47 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[3];
                                                        {
                                                          ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_47_47, ((MR_Box) (ll_backend__disj_gen__Var_15)), ((MR_Box) (ll_backend__disj_gen__Var_30)));
                                                        }
                                                        if (ll_backend__disj_gen__succeeded)
                                                          {
                                                            ll_backend__disj_gen__TypeInfo_48_48 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[9];
                                                            {
                                                              ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_48_48, ((MR_Box) (ll_backend__disj_gen__Var_16)), ((MR_Box) (ll_backend__disj_gen__Var_31)));
                                                            }
                                                            if (ll_backend__disj_gen__succeeded)
                                                              {
                                                                ll_backend__disj_gen__TypeInfo_49_49 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[10];
                                                                {
                                                                  ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_49_49, ((MR_Box) (ll_backend__disj_gen__Var_17)), ((MR_Box) (ll_backend__disj_gen__Var_32)));
                                                                }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return ll_backend__disj_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0(
  MR_Word * ll_backend__disj_gen__HeadVar__1_1,
  MR_Word ll_backend__disj_gen__HeadVar__2_2,
  MR_Word ll_backend__disj_gen__HeadVar__3_3)
{
  {
    MR_bool ll_backend__disj_gen__succeeded;
    MR_Integer ll_backend__disj_gen__CastX_13 = (MR_Integer) ll_backend__disj_gen__HeadVar__2_2;
    MR_Integer ll_backend__disj_gen__CastY_14 = (MR_Integer) ll_backend__disj_gen__HeadVar__3_3;

    ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__CastX_13 == ll_backend__disj_gen__CastY_14);
    if (ll_backend__disj_gen__succeeded)
      *ll_backend__disj_gen__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((ll_backend__disj_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ll_backend__disj_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ll_backend__disj_gen__HeadVar__1_1 = (MR_Integer) 0;
      else
        *ll_backend__disj_gen__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word ll_backend__disj_gen__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__disj_gen__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 0)));

        if ((ll_backend__disj_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__disj_gen__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word ll_backend__disj_gen__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word ll_backend__disj_gen__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word ll_backend__disj_gen__Var_12;

            {
              ll_backend__llds____Compare____label_0_0(&ll_backend__disj_gen__Var_12, ll_backend__disj_gen__Var_18, ll_backend__disj_gen__Var_10);
            }
            ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__Var_12 == (MR_Integer) 0);
            ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
            if (ll_backend__disj_gen__succeeded)
              *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__Var_12;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[3], ll_backend__disj_gen__HeadVar__1_1, ((MR_Box) (ll_backend__disj_gen__Var_17)), ((MR_Box) (ll_backend__disj_gen__Var_11)));
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0(
  MR_Word ll_backend__disj_gen__HeadVar__1_1,
  MR_Word ll_backend__disj_gen__HeadVar__2_2)
{
  {
    MR_bool ll_backend__disj_gen__succeeded;
    MR_Integer ll_backend__disj_gen__CastX_9 = (MR_Integer) ll_backend__disj_gen__HeadVar__1_1;
    MR_Integer ll_backend__disj_gen__CastY_10 = (MR_Integer) ll_backend__disj_gen__HeadVar__2_2;

    ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__CastX_9 == ll_backend__disj_gen__CastY_10);
    if (ll_backend__disj_gen__succeeded)
      ll_backend__disj_gen__succeeded = MR_TRUE;
    else
    if ((ll_backend__disj_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer ll_backend__disj_gen__CastX_3 = (MR_Integer) ll_backend__disj_gen__HeadVar__1_1;
        MR_Integer ll_backend__disj_gen__CastY_4 = (MR_Integer) ll_backend__disj_gen__HeadVar__2_2;

        ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__CastY_4 == ll_backend__disj_gen__CastX_3);
      }
    else
      {
        MR_Word ll_backend__disj_gen__TypeInfo_12_12;
        MR_Word ll_backend__disj_gen__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__disj_gen__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__disj_gen__Var_7;
        MR_Word ll_backend__disj_gen__Var_8;

        ll_backend__disj_gen__succeeded = ((MR_tag((MR_Word) ll_backend__disj_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__disj_gen__succeeded)
          {
            ll_backend__disj_gen__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 0)));
            ll_backend__disj_gen__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 1)));
            {
              ll_backend__disj_gen__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__disj_gen__Var_5, ll_backend__disj_gen__Var_7);
            }
            if (ll_backend__disj_gen__succeeded)
              {
                ll_backend__disj_gen__TypeInfo_12_12 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[3];
                {
                  ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_12_12, ((MR_Box) (ll_backend__disj_gen__Var_6)), ((MR_Box) (ll_backend__disj_gen__Var_8)));
                }
              }
          }
      }
    return ll_backend__disj_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__disj_gen__disj_alloc_snapshot_regions_8_p_0(
  MR_Word ll_backend__disj_gen__NumLval_1,
  MR_Word ll_backend__disj_gen__AddrLval_2,
  MR_Word ll_backend__disj_gen__EmbeddedStackFrame_3,
  MR_Word ll_backend__disj_gen__HeadVar__4_4,
  MR_Word * ll_backend__disj_gen__HeadVar__5_5,
  MR_Word ll_backend__disj_gen__HeadVar__6_6,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_7,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_8)
{
  {
    MR_bool ll_backend__disj_gen__succeeded;

    if ((ll_backend__disj_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *ll_backend__disj_gen__HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        *ll_backend__disj_gen__STATE_VARIABLE_CLD_8 = ll_backend__disj_gen__STATE_VARIABLE_CLD_0_7;
      }
    else
      {
        MR_Word ll_backend__disj_gen__TypeCtorInfo_37_37 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        MR_Word ll_backend__disj_gen__RegionVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word ll_backend__disj_gen__RegionVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word ll_backend__disj_gen__Code_21;
        MR_Word ll_backend__disj_gen__Codes_22;
        MR_Word ll_backend__disj_gen__ProduceVarCode_25;
        MR_Word ll_backend__disj_gen__RegionVarRval_26;
        MR_Word ll_backend__disj_gen__SaveCode_27;
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_30_30;
        MR_Word ll_backend__disj_gen__Var_31;
        MR_Word ll_backend__disj_gen__Var_32;

        {
          ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__disj_gen__RegionVar_19, &ll_backend__disj_gen__ProduceVarCode_25, &ll_backend__disj_gen__RegionVarRval_26, ll_backend__disj_gen__HeadVar__6_6, ll_backend__disj_gen__STATE_VARIABLE_CLD_0_7, &ll_backend__disj_gen__STATE_VARIABLE_CLD_30_30);
        }
        {
          ll_backend__disj_gen__Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_32, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_3));
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_32, 3) = ((MR_Box) (ll_backend__disj_gen__RegionVarRval_26));
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_32, 4) = ((MR_Box) (ll_backend__disj_gen__NumLval_1));
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_32, 5) = ((MR_Box) (ll_backend__disj_gen__AddrLval_2));
        }
        {
          ll_backend__disj_gen__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_31, 0) = ((MR_Box) (ll_backend__disj_gen__Var_32));
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_31, 1) = ((MR_Box) ((MR_String) "take alloc snapshot of the region"));
        }
        {
          ll_backend__disj_gen__SaveCode_27 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_37_37, ((MR_Box) (ll_backend__disj_gen__Var_31)));
        }
        {
          ll_backend__disj_gen__Code_21 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_37_37, ll_backend__disj_gen__ProduceVarCode_25, ll_backend__disj_gen__SaveCode_27);
        }
        {
          ll_backend__disj_gen__disj_alloc_snapshot_regions_8_p_0(ll_backend__disj_gen__NumLval_1, ll_backend__disj_gen__AddrLval_2, ll_backend__disj_gen__EmbeddedStackFrame_3, ll_backend__disj_gen__RegionVars_20, &ll_backend__disj_gen__Codes_22, ll_backend__disj_gen__HeadVar__6_6, ll_backend__disj_gen__STATE_VARIABLE_CLD_30_30, ll_backend__disj_gen__STATE_VARIABLE_CLD_8);
        }
        {
          *ll_backend__disj_gen__HeadVar__5_5 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_37_37, ll_backend__disj_gen__Code_21, ll_backend__disj_gen__Codes_22);
        }
      }
  }
}

static void MR_CALL 
ll_backend__disj_gen__disj_protect_regions_8_p_0(
  MR_Word ll_backend__disj_gen__NumLval_1,
  MR_Word ll_backend__disj_gen__AddrLval_2,
  MR_Word ll_backend__disj_gen__EmbeddedStackFrame_3,
  MR_Word ll_backend__disj_gen__HeadVar__4_4,
  MR_Word * ll_backend__disj_gen__HeadVar__5_5,
  MR_Word ll_backend__disj_gen__HeadVar__6_6,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_7,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_8)
{
  {
    MR_bool ll_backend__disj_gen__succeeded;

    if ((ll_backend__disj_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *ll_backend__disj_gen__HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        *ll_backend__disj_gen__STATE_VARIABLE_CLD_8 = ll_backend__disj_gen__STATE_VARIABLE_CLD_0_7;
      }
    else
      {
        MR_Word ll_backend__disj_gen__TypeCtorInfo_37_37 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        MR_Word ll_backend__disj_gen__RegionVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word ll_backend__disj_gen__RegionVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word ll_backend__disj_gen__Code_21;
        MR_Word ll_backend__disj_gen__Codes_22;
        MR_Word ll_backend__disj_gen__ProduceVarCode_25;
        MR_Word ll_backend__disj_gen__RegionVarRval_26;
        MR_Word ll_backend__disj_gen__SaveCode_27;
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_30_30;
        MR_Word ll_backend__disj_gen__Var_31;
        MR_Word ll_backend__disj_gen__Var_32;

        {
          ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__disj_gen__RegionVar_19, &ll_backend__disj_gen__ProduceVarCode_25, &ll_backend__disj_gen__RegionVarRval_26, ll_backend__disj_gen__HeadVar__6_6, ll_backend__disj_gen__STATE_VARIABLE_CLD_0_7, &ll_backend__disj_gen__STATE_VARIABLE_CLD_30_30);
        }
        {
          ll_backend__disj_gen__Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_32, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_3));
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_32, 3) = ((MR_Box) (ll_backend__disj_gen__RegionVarRval_26));
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_32, 4) = ((MR_Box) (ll_backend__disj_gen__NumLval_1));
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_32, 5) = ((MR_Box) (ll_backend__disj_gen__AddrLval_2));
        }
        {
          ll_backend__disj_gen__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_31, 0) = ((MR_Box) (ll_backend__disj_gen__Var_32));
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_31, 1) = ((MR_Box) ((MR_String) "disj protect the region if needed"));
        }
        {
          ll_backend__disj_gen__SaveCode_27 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_37_37, ((MR_Box) (ll_backend__disj_gen__Var_31)));
        }
        {
          ll_backend__disj_gen__Code_21 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_37_37, ll_backend__disj_gen__ProduceVarCode_25, ll_backend__disj_gen__SaveCode_27);
        }
        {
          ll_backend__disj_gen__disj_protect_regions_8_p_0(ll_backend__disj_gen__NumLval_1, ll_backend__disj_gen__AddrLval_2, ll_backend__disj_gen__EmbeddedStackFrame_3, ll_backend__disj_gen__RegionVars_20, &ll_backend__disj_gen__Codes_22, ll_backend__disj_gen__HeadVar__6_6, ll_backend__disj_gen__STATE_VARIABLE_CLD_30_30, ll_backend__disj_gen__STATE_VARIABLE_CLD_8);
        }
        {
          *ll_backend__disj_gen__HeadVar__5_5 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_37_37, ll_backend__disj_gen__Code_21, ll_backend__disj_gen__Codes_22);
        }
      }
  }
}

static void MR_CALL 
ll_backend__disj_gen__maybe_create_disj_region_frame_semi_12_p_0(
  MR_Word ll_backend__disj_gen__DisjRegionOps_13,
  MR_Word ll_backend__disj_gen__DisjRemovedRegionVars_14,
  MR_Word ll_backend__disj_gen__DisjAllocRegionVars_15,
  MR_Word * ll_backend__disj_gen__BeforeEnterCode_16,
  MR_Word * ll_backend__disj_gen__LaterCode_17,
  MR_Word * ll_backend__disj_gen__LastCode_18,
  MR_Word * ll_backend__disj_gen__StackVars_19,
  MR_Word * ll_backend__disj_gen__RegionCommitDisjCleanup_20,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_49,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_50,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_51,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_52)
{
  {
    MR_bool ll_backend__disj_gen__succeeded;

    switch (ll_backend__disj_gen__DisjRegionOps_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__disj_gen__TypeCtorInfo_127_127 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          MR_Word ll_backend__disj_gen__TypeInfo_128_128;
          MR_Word ll_backend__disj_gen__TypeCtorInfo_130_130;
          MR_Word ll_backend__disj_gen__ProtectRegionVarList_25;
          MR_Word ll_backend__disj_gen__SnapshotRegionVarList_26;
          MR_Integer ll_backend__disj_gen__NumProtectRegionVars_27;
          MR_Integer ll_backend__disj_gen__NumSnapshotRegionVars_28;
          MR_Word ll_backend__disj_gen__Globals_29;
          MR_Integer ll_backend__disj_gen__FixedSize_30;
          MR_Integer ll_backend__disj_gen__ProtectSize_31;
          MR_Integer ll_backend__disj_gen__SnapshotSize_32;
          MR_Integer ll_backend__disj_gen__FrameSize_33;
          MR_Word ll_backend__disj_gen__Items_34;
          MR_Word ll_backend__disj_gen__MainStackId_35;
          MR_Integer ll_backend__disj_gen__FirstSlotNum_36;
          MR_Integer ll_backend__disj_gen__LastSlotNum_37;
          MR_Word ll_backend__disj_gen__EmbeddedStackFrame_38;
          MR_Word ll_backend__disj_gen__FirstNonFixedAddr_39;
          MR_Word ll_backend__disj_gen__ProtectNumRegLval_40;
          MR_Word ll_backend__disj_gen__SnapshotNumRegLval_41;
          MR_Word ll_backend__disj_gen__AddrRegLval_42;
          MR_Word ll_backend__disj_gen__PushInitCode_43;
          MR_Word ll_backend__disj_gen__ProtectRegionCode_44;
          MR_Word ll_backend__disj_gen__SnapshotRegionCode_45;
          MR_Word ll_backend__disj_gen__SetCode_46;
          MR_Word ll_backend__disj_gen__CleanupLabel_47;
          MR_Word ll_backend__disj_gen__CleanupCode_48;
          MR_Integer ll_backend__disj_gen__Var_56;
          MR_Integer ll_backend__disj_gen__Var_57;
          MR_Integer ll_backend__disj_gen__Var_58;
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_61_61;
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_62_62;
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_64_64;
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_66_66;
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_68_68;
          MR_Word ll_backend__disj_gen__Var_69;
          MR_Word ll_backend__disj_gen__Var_70;
          MR_Word ll_backend__disj_gen__Var_71;
          MR_Word ll_backend__disj_gen__Var_74;
          MR_Word ll_backend__disj_gen__Var_75;
          MR_Word ll_backend__disj_gen__Var_76;
          MR_Word ll_backend__disj_gen__Var_77;
          MR_Word ll_backend__disj_gen__Var_81;
          MR_Word ll_backend__disj_gen__Var_82;
          MR_Word ll_backend__disj_gen__Var_83;
          MR_Word ll_backend__disj_gen__Var_88;
          MR_Word ll_backend__disj_gen__Var_89;
          MR_Word ll_backend__disj_gen__Var_90;
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_93_93;
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_94_94;
          MR_Word ll_backend__disj_gen__Var_95;
          MR_Word ll_backend__disj_gen__Var_96;
          MR_Word ll_backend__disj_gen__Var_97;
          MR_Word ll_backend__disj_gen__Var_99;
          MR_Word ll_backend__disj_gen__Var_101;
          MR_Word ll_backend__disj_gen__Var_102;
          MR_Word ll_backend__disj_gen__Var_103;
          MR_Word ll_backend__disj_gen__Var_105;
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_108_108;
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_109_109;
          MR_Word ll_backend__disj_gen__Var_111;
          MR_Word ll_backend__disj_gen__Var_112;
          MR_Word ll_backend__disj_gen__Var_113;
          MR_Word ll_backend__disj_gen__Var_114;
          MR_Word ll_backend__disj_gen__Var_117;
          MR_Word ll_backend__disj_gen__Var_118;
          MR_Word ll_backend__disj_gen__Var_122;
          MR_Word ll_backend__disj_gen__Var_123;

          {
            ll_backend__disj_gen__ProtectRegionVarList_25 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_127_127, ll_backend__disj_gen__DisjRemovedRegionVars_14);
          }
          {
            ll_backend__disj_gen__SnapshotRegionVarList_26 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_127_127, ll_backend__disj_gen__DisjAllocRegionVars_15);
          }
          ll_backend__disj_gen__TypeInfo_128_128 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[1];
          {
            mercury__list__length_2_p_0(ll_backend__disj_gen__TypeInfo_128_128, ll_backend__disj_gen__ProtectRegionVarList_25, &ll_backend__disj_gen__NumProtectRegionVars_27);
          }
          {
            mercury__list__length_2_p_0(ll_backend__disj_gen__TypeInfo_128_128, ll_backend__disj_gen__SnapshotRegionVarList_26, &ll_backend__disj_gen__NumSnapshotRegionVars_28);
          }
          {
            ll_backend__code_info__get_globals_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_49, &ll_backend__disj_gen__Globals_29);
          }
          {
            libs__globals__lookup_int_option_3_p_0(ll_backend__disj_gen__Globals_29, (MR_Integer) 294, &ll_backend__disj_gen__FixedSize_30);
          }
          {
            libs__globals__lookup_int_option_3_p_0(ll_backend__disj_gen__Globals_29, (MR_Integer) 299, &ll_backend__disj_gen__ProtectSize_31);
          }
          {
            libs__globals__lookup_int_option_3_p_0(ll_backend__disj_gen__Globals_29, (MR_Integer) 300, &ll_backend__disj_gen__SnapshotSize_32);
          }
          ll_backend__disj_gen__Var_57 = (ll_backend__disj_gen__ProtectSize_31 * ll_backend__disj_gen__NumProtectRegionVars_27);
          ll_backend__disj_gen__Var_56 = (ll_backend__disj_gen__FixedSize_30 + ll_backend__disj_gen__Var_57);
          ll_backend__disj_gen__Var_58 = (ll_backend__disj_gen__SnapshotSize_32 * ll_backend__disj_gen__NumSnapshotRegionVars_28);
          ll_backend__disj_gen__FrameSize_33 = (ll_backend__disj_gen__Var_56 + ll_backend__disj_gen__Var_58);
          {
            ll_backend__disj_gen__Items_34 = mercury__list__duplicate_2_f_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0, ll_backend__disj_gen__FrameSize_33, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))));
          }
          {
            ll_backend__code_loc_dep__acquire_several_temp_slots_10_p_0(ll_backend__disj_gen__Items_34, (MR_Integer) 1, ll_backend__disj_gen__StackVars_19, &ll_backend__disj_gen__MainStackId_35, &ll_backend__disj_gen__FirstSlotNum_36, &ll_backend__disj_gen__LastSlotNum_37, ll_backend__disj_gen__STATE_VARIABLE_CI_0_49, &ll_backend__disj_gen__STATE_VARIABLE_CI_61_61, ll_backend__disj_gen__STATE_VARIABLE_CLD_0_51, &ll_backend__disj_gen__STATE_VARIABLE_CLD_62_62);
          }
          {
            ll_backend__disj_gen__EmbeddedStackFrame_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__EmbeddedStackFrame_38, 0) = ((MR_Box) (ll_backend__disj_gen__MainStackId_35));
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__EmbeddedStackFrame_38, 1) = ((MR_Box) (ll_backend__disj_gen__FirstSlotNum_36));
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__EmbeddedStackFrame_38, 2) = ((MR_Box) (ll_backend__disj_gen__LastSlotNum_37));
          }
          {
            ll_backend__disj_gen__FirstNonFixedAddr_39 = ll_backend__llds__first_nonfixed_embedded_slot_addr_2_f_0(ll_backend__disj_gen__EmbeddedStackFrame_38, ll_backend__disj_gen__FixedSize_30);
          }
          {
            ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__disj_gen__ProtectNumRegLval_40, ll_backend__disj_gen__STATE_VARIABLE_CLD_62_62, &ll_backend__disj_gen__STATE_VARIABLE_CLD_64_64);
          }
          {
            ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__disj_gen__SnapshotNumRegLval_41, ll_backend__disj_gen__STATE_VARIABLE_CLD_64_64, &ll_backend__disj_gen__STATE_VARIABLE_CLD_66_66);
          }
          {
            ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__disj_gen__AddrRegLval_42, ll_backend__disj_gen__STATE_VARIABLE_CLD_66_66, &ll_backend__disj_gen__STATE_VARIABLE_CLD_68_68);
          }
          ll_backend__disj_gen__TypeCtorInfo_130_130 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
          {
            ll_backend__disj_gen__Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_71, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_71, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_38));
          }
          {
            ll_backend__disj_gen__Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_70, 0) = ((MR_Box) (ll_backend__disj_gen__Var_71));
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_70, 1) = ((MR_Box) ((MR_String) "Save stack pointer of embedded region nondet stack"));
          }
          ll_backend__disj_gen__Var_77 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__disj_gen_scalar_common_1[11]);
          {
            ll_backend__disj_gen__Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_76, 1) = ((MR_Box) (ll_backend__disj_gen__ProtectNumRegLval_40));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_76, 2) = ((MR_Box) (ll_backend__disj_gen__Var_77));
          }
          {
            ll_backend__disj_gen__Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_75, 0) = ((MR_Box) (ll_backend__disj_gen__Var_76));
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_75, 1) = ((MR_Box) ((MR_String) "Initialize number of protect_infos"));
          }
          {
            ll_backend__disj_gen__Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_83, 1) = ((MR_Box) (ll_backend__disj_gen__SnapshotNumRegLval_41));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_83, 2) = ((MR_Box) (ll_backend__disj_gen__Var_77));
          }
          {
            ll_backend__disj_gen__Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_82, 0) = ((MR_Box) (ll_backend__disj_gen__Var_83));
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_82, 1) = ((MR_Box) ((MR_String) "Initialize number of snapshot_infos"));
          }
          {
            ll_backend__disj_gen__Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_90, 1) = ((MR_Box) (ll_backend__disj_gen__AddrRegLval_42));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_90, 2) = ((MR_Box) (ll_backend__disj_gen__FirstNonFixedAddr_39));
          }
          {
            ll_backend__disj_gen__Var_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_89, 0) = ((MR_Box) (ll_backend__disj_gen__Var_90));
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_89, 1) = ((MR_Box) ((MR_String) "Initialize pointer to nonfixed part of embedded frame"));
          }
          {
            ll_backend__disj_gen__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_88, 0) = ((MR_Box) (ll_backend__disj_gen__Var_89));
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__disj_gen__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_81, 0) = ((MR_Box) (ll_backend__disj_gen__Var_82));
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_81, 1) = ((MR_Box) (ll_backend__disj_gen__Var_88));
          }
          {
            ll_backend__disj_gen__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_74, 0) = ((MR_Box) (ll_backend__disj_gen__Var_75));
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_74, 1) = ((MR_Box) (ll_backend__disj_gen__Var_81));
          }
          {
            ll_backend__disj_gen__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_69, 0) = ((MR_Box) (ll_backend__disj_gen__Var_70));
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_69, 1) = ((MR_Box) (ll_backend__disj_gen__Var_74));
          }
          {
            ll_backend__disj_gen__PushInitCode_43 = mercury__cord__from_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_130_130, ll_backend__disj_gen__Var_69);
          }
          {
            ll_backend__disj_gen__disj_protect_regions_8_p_0(ll_backend__disj_gen__ProtectNumRegLval_40, ll_backend__disj_gen__AddrRegLval_42, ll_backend__disj_gen__EmbeddedStackFrame_38, ll_backend__disj_gen__ProtectRegionVarList_25, &ll_backend__disj_gen__ProtectRegionCode_44, ll_backend__disj_gen__STATE_VARIABLE_CI_61_61, ll_backend__disj_gen__STATE_VARIABLE_CLD_68_68, &ll_backend__disj_gen__STATE_VARIABLE_CLD_93_93);
          }
          {
            ll_backend__disj_gen__disj_alloc_snapshot_regions_8_p_0(ll_backend__disj_gen__SnapshotNumRegLval_41, ll_backend__disj_gen__AddrRegLval_42, ll_backend__disj_gen__EmbeddedStackFrame_38, ll_backend__disj_gen__SnapshotRegionVarList_26, &ll_backend__disj_gen__SnapshotRegionCode_45, ll_backend__disj_gen__STATE_VARIABLE_CI_61_61, ll_backend__disj_gen__STATE_VARIABLE_CLD_93_93, &ll_backend__disj_gen__STATE_VARIABLE_CLD_94_94);
          }
          {
            ll_backend__disj_gen__Var_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_99, 0) = ((MR_Box) (ll_backend__disj_gen__ProtectNumRegLval_40));
          }
          {
            ll_backend__disj_gen__Var_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_97, 1) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_97, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_38));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_97, 3) = ((MR_Box) (ll_backend__disj_gen__Var_99));
          }
          {
            ll_backend__disj_gen__Var_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_96, 0) = ((MR_Box) (ll_backend__disj_gen__Var_97));
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_96, 1) = ((MR_Box) ((MR_String) "Store the number of protect_infos"));
          }
          {
            ll_backend__disj_gen__Var_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_105, 0) = ((MR_Box) (ll_backend__disj_gen__SnapshotNumRegLval_41));
          }
          {
            ll_backend__disj_gen__Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_103, 1) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_103, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_38));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_103, 3) = ((MR_Box) (ll_backend__disj_gen__Var_105));
          }
          {
            ll_backend__disj_gen__Var_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_102, 0) = ((MR_Box) (ll_backend__disj_gen__Var_103));
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_102, 1) = ((MR_Box) ((MR_String) "Store the number of snapshot_infos"));
          }
          {
            ll_backend__disj_gen__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_101, 0) = ((MR_Box) (ll_backend__disj_gen__Var_102));
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__disj_gen__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_95, 0) = ((MR_Box) (ll_backend__disj_gen__Var_96));
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_95, 1) = ((MR_Box) (ll_backend__disj_gen__Var_101));
          }
          {
            ll_backend__disj_gen__SetCode_46 = mercury__cord__from_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_130_130, ll_backend__disj_gen__Var_95);
          }
          {
            ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__disj_gen__ProtectNumRegLval_40, ll_backend__disj_gen__STATE_VARIABLE_CLD_94_94, &ll_backend__disj_gen__STATE_VARIABLE_CLD_108_108);
          }
          {
            ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__disj_gen__SnapshotNumRegLval_41, ll_backend__disj_gen__STATE_VARIABLE_CLD_108_108, &ll_backend__disj_gen__STATE_VARIABLE_CLD_109_109);
          }
          {
            ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__disj_gen__AddrRegLval_42, ll_backend__disj_gen__STATE_VARIABLE_CLD_109_109, ll_backend__disj_gen__STATE_VARIABLE_CLD_52);
          }
          {
            ll_backend__disj_gen__Var_112 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_130_130, ll_backend__disj_gen__SnapshotRegionCode_45, ll_backend__disj_gen__SetCode_46);
          }
          {
            ll_backend__disj_gen__Var_111 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_130_130, ll_backend__disj_gen__ProtectRegionCode_44, ll_backend__disj_gen__Var_112);
          }
          {
            *ll_backend__disj_gen__BeforeEnterCode_16 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_130_130, ll_backend__disj_gen__PushInitCode_43, ll_backend__disj_gen__Var_111);
          }
          {
            ll_backend__disj_gen__Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_114, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_38));
          }
          {
            ll_backend__disj_gen__Var_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_113, 0) = ((MR_Box) (ll_backend__disj_gen__Var_114));
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_113, 1) = ((MR_Box) ((MR_String) "region enter later disjunct"));
          }
          {
            *ll_backend__disj_gen__LaterCode_17 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_130_130, ((MR_Box) (ll_backend__disj_gen__Var_113)));
          }
          {
            ll_backend__disj_gen__Var_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_118, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_38));
          }
          {
            ll_backend__disj_gen__Var_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_117, 0) = ((MR_Box) (ll_backend__disj_gen__Var_118));
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_117, 1) = ((MR_Box) ((MR_String) "region enter last disjunct"));
          }
          {
            *ll_backend__disj_gen__LastCode_18 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_130_130, ((MR_Box) (ll_backend__disj_gen__Var_117)));
          }
          {
            ll_backend__code_info__get_next_label_3_p_0(&ll_backend__disj_gen__CleanupLabel_47, ll_backend__disj_gen__STATE_VARIABLE_CI_61_61, ll_backend__disj_gen__STATE_VARIABLE_CI_50);
          }
          {
            ll_backend__disj_gen__Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_123, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_38));
          }
          {
            ll_backend__disj_gen__Var_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_122, 0) = ((MR_Box) (ll_backend__disj_gen__Var_123));
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_122, 1) = ((MR_Box) ((MR_String) "region cleanup commit for nonlast disjunct"));
          }
          {
            ll_backend__disj_gen__CleanupCode_48 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_130_130, ((MR_Box) (ll_backend__disj_gen__Var_122)));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__disj_gen__RegionCommitDisjCleanup_20 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__disj_gen__CleanupLabel_47));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__disj_gen__CleanupCode_48));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__disj_gen__TypeCtorInfo_126_126 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

          {
            *ll_backend__disj_gen__BeforeEnterCode_16 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_126_126);
          }
          {
            *ll_backend__disj_gen__LaterCode_17 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_126_126);
          }
          {
            *ll_backend__disj_gen__LastCode_18 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_126_126);
          }
          *ll_backend__disj_gen__StackVars_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ll_backend__disj_gen__RegionCommitDisjCleanup_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ll_backend__disj_gen__STATE_VARIABLE_CI_50 = ll_backend__disj_gen__STATE_VARIABLE_CI_0_49;
          *ll_backend__disj_gen__STATE_VARIABLE_CLD_52 = ll_backend__disj_gen__STATE_VARIABLE_CLD_0_51;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0_2(
  MR_Box ll_backend__disj_gen__closure_arg)
{
  {
    MR_bool ll_backend__disj_gen__succeeded;
    MR_Box ll_backend__disj_gen__closure = ll_backend__disj_gen__closure_arg;

    {
      ll_backend__disj_gen__succeeded = ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__556__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__disj_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0_1(
  MR_Box ll_backend__disj_gen__closure_arg)
{
  {
    MR_bool ll_backend__disj_gen__succeeded;
    MR_Box ll_backend__disj_gen__closure = ll_backend__disj_gen__closure_arg;

    {
      ll_backend__disj_gen__succeeded = ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__554__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__disj_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0(
  MR_Word ll_backend__disj_gen__HeadVar__1_1,
  MR_Word ll_backend__disj_gen__CodeModel_2,
  MR_Word ll_backend__disj_gen__FullResumeMap_3,
  MR_Word ll_backend__disj_gen__MaybeEntryResumePoint_4,
  MR_Word ll_backend__disj_gen__HijackInfo_5,
  MR_Word ll_backend__disj_gen__DisjGoalInfo_6,
  MR_Word ll_backend__disj_gen__RegionCommitDisjCleanup_7,
  MR_Word ll_backend__disj_gen__EndLabel_8,
  MR_Word ll_backend__disj_gen__ReclaimHeap_9,
  MR_Word ll_backend__disj_gen__MaybeHpSlot0_10,
  MR_Word ll_backend__disj_gen__MaybeTicketSlot_11,
  MR_Word ll_backend__disj_gen__LaterRegionCode_12,
  MR_Word ll_backend__disj_gen__LastRegionCode_13,
  MR_Word ll_backend__disj_gen__BranchStart0_14,
  MR_Word ll_backend__disj_gen__MaybeEnd0_15,
  MR_Word * ll_backend__disj_gen__MaybeEnd_16,
  MR_Word * ll_backend__disj_gen__Code_17,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_18,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_19)
{
  {
    MR_bool ll_backend__disj_gen__succeeded;

    if ((ll_backend__disj_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.disj_gen", (MR_String) "predicate \140ll_backend.disj_gen.generate_disjuncts\'/19", (MR_String) "empty disjunction");
          return;
        }
      }
    else
      {
        MR_Word ll_backend__disj_gen__Goal0_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__disj_gen__Goals_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__disj_gen__EntryResumePointCode_63;
        MR_Word ll_backend__disj_gen__GoalExpr0_64;
        MR_Word ll_backend__disj_gen__GoalInfo0_65;
        MR_Word ll_backend__disj_gen__Resume_66;
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_105_105;
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_106_106;
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_107_107;

        {
          ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__disj_gen__BranchStart0_14, ll_backend__disj_gen__STATE_VARIABLE_CI_0_18, &ll_backend__disj_gen__STATE_VARIABLE_CLD_105_105);
        }
        if ((ll_backend__disj_gen__MaybeEntryResumePoint_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              ll_backend__disj_gen__EntryResumePointCode_63 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
            ll_backend__disj_gen__STATE_VARIABLE_CI_106_106 = ll_backend__disj_gen__STATE_VARIABLE_CI_0_18;
            ll_backend__disj_gen__STATE_VARIABLE_CLD_107_107 = ll_backend__disj_gen__STATE_VARIABLE_CLD_105_105;
          }
        else
          {
            MR_Word ll_backend__disj_gen__EntryResumePoint_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__MaybeEntryResumePoint_4, (MR_Integer) 0)));

            {
              ll_backend__code_loc_dep__generate_resume_point_6_p_0(ll_backend__disj_gen__EntryResumePoint_62, &ll_backend__disj_gen__EntryResumePointCode_63, ll_backend__disj_gen__STATE_VARIABLE_CI_0_18, &ll_backend__disj_gen__STATE_VARIABLE_CI_106_106, ll_backend__disj_gen__STATE_VARIABLE_CLD_105_105, &ll_backend__disj_gen__STATE_VARIABLE_CLD_107_107);
            }
          }
        ll_backend__disj_gen__GoalExpr0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Goal0_42, (MR_Integer) 0)));
        ll_backend__disj_gen__GoalInfo0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Goal0_42, (MR_Integer) 1)));
        {
          hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__disj_gen__GoalInfo0_65, &ll_backend__disj_gen__Resume_66);
        }
        if ((ll_backend__disj_gen__Resume_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word ll_backend__disj_gen__TypeCtorInfo_214_214;
            MR_Word ll_backend__disj_gen__UndoCode_98;
            MR_Word ll_backend__disj_gen__RegionCleanupCode_99;
            MR_Word ll_backend__disj_gen__EndLabelCode_102;
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_108_108;
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_109_109;
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_111_111;
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_112_112;
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_113_113;
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_114_114;
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_115_115;
            MR_Word ll_backend__disj_gen__Var_128;
            MR_Word ll_backend__disj_gen__Var_129;
            MR_Word ll_backend__disj_gen__Var_131;
            MR_Word ll_backend__disj_gen__Var_132;
            MR_Word ll_backend__disj_gen__Var_133;
            MR_Word ll_backend__disj_gen__Var_134;
            MR_Word ll_backend__disj_gen__Var_135;
            MR_Word ll_backend__disj_gen__Var_136;
            MR_Word ll_backend__disj_gen__Var_137;
            MR_Word ll_backend__disj_gen__Var_138;
            MR_Word ll_backend__disj_gen__RestoreHpCode_192;
            MR_Word ll_backend__disj_gen__RestoreTicketCode_193;
            MR_Word ll_backend__disj_gen__TraceCode_194;
            MR_Word ll_backend__disj_gen__GoalCode_195;
            MR_Word ll_backend__disj_gen__StoreMap_196;
            MR_Word ll_backend__disj_gen__SaveCode_197;
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_168_199;

            {
              ll_backend__code_loc_dep__maybe_restore_and_release_hp_6_p_0(ll_backend__disj_gen__MaybeHpSlot0_10, &ll_backend__disj_gen__RestoreHpCode_192, ll_backend__disj_gen__STATE_VARIABLE_CI_106_106, &ll_backend__disj_gen__STATE_VARIABLE_CI_108_108, ll_backend__disj_gen__STATE_VARIABLE_CLD_107_107, &ll_backend__disj_gen__STATE_VARIABLE_CLD_109_109);
            }
            {
              ll_backend__code_loc_dep__maybe_reset_discard_and_release_ticket_7_p_0(ll_backend__disj_gen__MaybeTicketSlot_11, (MR_Integer) 0, &ll_backend__disj_gen__RestoreTicketCode_193, ll_backend__disj_gen__STATE_VARIABLE_CI_108_108, &ll_backend__disj_gen__STATE_VARIABLE_CI_111_111, ll_backend__disj_gen__STATE_VARIABLE_CLD_109_109, &ll_backend__disj_gen__STATE_VARIABLE_CLD_112_112);
            }
            {
              ll_backend__code_loc_dep__undo_disj_hijack_4_p_0(ll_backend__disj_gen__HijackInfo_5, &ll_backend__disj_gen__UndoCode_98, ll_backend__disj_gen__STATE_VARIABLE_CLD_112_112, &ll_backend__disj_gen__STATE_VARIABLE_CLD_113_113);
            }
            {
              ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(ll_backend__disj_gen__Goal0_42, ll_backend__disj_gen__DisjGoalInfo_6, &ll_backend__disj_gen__TraceCode_194, ll_backend__disj_gen__STATE_VARIABLE_CI_111_111, &ll_backend__disj_gen__STATE_VARIABLE_CI_114_114, ll_backend__disj_gen__STATE_VARIABLE_CLD_113_113, &ll_backend__disj_gen__STATE_VARIABLE_CLD_115_115);
            }
            {
              ll_backend__code_gen__generate_goal_7_p_0(ll_backend__disj_gen__CodeModel_2, ll_backend__disj_gen__Goal0_42, &ll_backend__disj_gen__GoalCode_195, ll_backend__disj_gen__STATE_VARIABLE_CI_114_114, ll_backend__disj_gen__STATE_VARIABLE_CI_19, ll_backend__disj_gen__STATE_VARIABLE_CLD_115_115, &ll_backend__disj_gen__STATE_VARIABLE_CLD_168_199);
            }
            {
              hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__disj_gen__DisjGoalInfo_6, &ll_backend__disj_gen__StoreMap_196);
            }
            {
              ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__disj_gen__StoreMap_196, ll_backend__disj_gen__MaybeEnd0_15, ll_backend__disj_gen__MaybeEnd_16, &ll_backend__disj_gen__SaveCode_197, *ll_backend__disj_gen__STATE_VARIABLE_CI_19, ll_backend__disj_gen__STATE_VARIABLE_CLD_168_199);
            }
            if ((ll_backend__disj_gen__RegionCommitDisjCleanup_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  ll_backend__disj_gen__RegionCleanupCode_99 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
              }
            else
              {
                MR_Word ll_backend__disj_gen__TypeCtorInfo_213_213 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                MR_Word ll_backend__disj_gen__CleanupCode_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__RegionCommitDisjCleanup_7, (MR_Integer) 1)));
                MR_Word ll_backend__disj_gen__RegionCleanupStartCode_101;
                MR_Word ll_backend__disj_gen__Var_118;
                MR_Word ll_backend__disj_gen__Var_119;
                MR_Word ll_backend__disj_gen__Var_120;
                MR_Word ll_backend__disj_gen__Var_121;
                MR_Word ll_backend__disj_gen__Var_123;
                MR_Word ll_backend__disj_gen__Var_124;
                MR_Word ll_backend__disj_gen__Var_125;
                MR_Word ll_backend__disj_gen__CleanupLabel_190 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__RegionCommitDisjCleanup_7, (MR_Integer) 0)));

                {
                  ll_backend__disj_gen__Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_121, 0) = ((MR_Box) (ll_backend__disj_gen__EndLabel_8));
                }
                {
                  ll_backend__disj_gen__Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_120, 1) = ((MR_Box) (ll_backend__disj_gen__Var_121));
                }
                {
                  ll_backend__disj_gen__Var_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_119, 0) = ((MR_Box) (ll_backend__disj_gen__Var_120));
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_119, 1) = ((MR_Box) ((MR_String) "Skip over cleanup code at end of disjunction"));
                }
                {
                  ll_backend__disj_gen__Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_125, 1) = ((MR_Box) (ll_backend__disj_gen__CleanupLabel_190));
                }
                {
                  ll_backend__disj_gen__Var_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_124, 0) = ((MR_Box) (ll_backend__disj_gen__Var_125));
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_124, 1) = ((MR_Box) ((MR_String) "Cleanup at end of disjunction"));
                }
                {
                  ll_backend__disj_gen__Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_123, 0) = ((MR_Box) (ll_backend__disj_gen__Var_124));
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  ll_backend__disj_gen__Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_118, 0) = ((MR_Box) (ll_backend__disj_gen__Var_119));
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_118, 1) = ((MR_Box) (ll_backend__disj_gen__Var_123));
                }
                {
                  ll_backend__disj_gen__RegionCleanupStartCode_101 = mercury__cord__from_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_213_213, ll_backend__disj_gen__Var_118);
                }
                {
                  ll_backend__disj_gen__RegionCleanupCode_99 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_213_213, ll_backend__disj_gen__RegionCleanupStartCode_101, ll_backend__disj_gen__CleanupCode_100);
                }
              }
            ll_backend__disj_gen__TypeCtorInfo_214_214 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
            {
              ll_backend__disj_gen__Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_129, 1) = ((MR_Box) (ll_backend__disj_gen__EndLabel_8));
            }
            {
              ll_backend__disj_gen__Var_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_128, 0) = ((MR_Box) (ll_backend__disj_gen__Var_129));
              MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_128, 1) = ((MR_Box) ((MR_String) "End of disjunction"));
            }
            {
              ll_backend__disj_gen__EndLabelCode_102 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_214_214, ((MR_Box) (ll_backend__disj_gen__Var_128)));
            }
            {
              ll_backend__disj_gen__Var_138 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_214_214, ll_backend__disj_gen__RegionCleanupCode_99, ll_backend__disj_gen__EndLabelCode_102);
            }
            {
              ll_backend__disj_gen__Var_137 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_214_214, ll_backend__disj_gen__SaveCode_197, ll_backend__disj_gen__Var_138);
            }
            {
              ll_backend__disj_gen__Var_136 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_214_214, ll_backend__disj_gen__GoalCode_195, ll_backend__disj_gen__Var_137);
            }
            {
              ll_backend__disj_gen__Var_135 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_214_214, ll_backend__disj_gen__UndoCode_98, ll_backend__disj_gen__Var_136);
            }
            {
              ll_backend__disj_gen__Var_134 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_214_214, ll_backend__disj_gen__LastRegionCode_13, ll_backend__disj_gen__Var_135);
            }
            {
              ll_backend__disj_gen__Var_133 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_214_214, ll_backend__disj_gen__RestoreTicketCode_193, ll_backend__disj_gen__Var_134);
            }
            {
              ll_backend__disj_gen__Var_132 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_214_214, ll_backend__disj_gen__RestoreHpCode_192, ll_backend__disj_gen__Var_133);
            }
            {
              ll_backend__disj_gen__Var_131 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_214_214, ll_backend__disj_gen__TraceCode_194, ll_backend__disj_gen__Var_132);
            }
            {
              *ll_backend__disj_gen__Code_17 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_214_214, ll_backend__disj_gen__EntryResumePointCode_63, ll_backend__disj_gen__Var_131);
            }
          }
        else
          {
            MR_Word ll_backend__disj_gen__TypeCtorInfo_211_211;
            MR_Word ll_backend__disj_gen__ResumeVars_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Resume_66, (MR_Integer) 0)));
            MR_Word ll_backend__disj_gen__ResumeLocs_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Resume_66, (MR_Integer) 1)));
            MR_Word ll_backend__disj_gen__RestoreHpCode_70;
            MR_Word ll_backend__disj_gen__RestoreTicketCode_71;
            MR_Word ll_backend__disj_gen__ThisDisjunctRegionCode_72;
            MR_Word ll_backend__disj_gen__GoalInfo_73;
            MR_Word ll_backend__disj_gen__Goal_74;
            MR_Word ll_backend__disj_gen__SaveHpCode_75;
            MR_Word ll_backend__disj_gen__MaybeHpSlot_77;
            MR_Word ll_backend__disj_gen__BranchStart_80;
            MR_Word ll_backend__disj_gen__NextResumePoint_83;
            MR_Word ll_backend__disj_gen__ModContCode_84;
            MR_Word ll_backend__disj_gen__TraceCode_85;
            MR_Word ll_backend__disj_gen__GoalCodeModel_86;
            MR_Word ll_backend__disj_gen__GoalCode_87;
            MR_Word ll_backend__disj_gen__ResumeVarsCode_88;
            MR_Word ll_backend__disj_gen__PruneTicketCode_89;
            MR_Word ll_backend__disj_gen__Zombies_90;
            MR_Word ll_backend__disj_gen__StoreMap_91;
            MR_Word ll_backend__disj_gen__MaybeEnd1_92;
            MR_Word ll_backend__disj_gen__SaveCode_93;
            MR_Word ll_backend__disj_gen__BranchCode_94;
            MR_Word ll_backend__disj_gen__RestCode_97;
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_142_142;
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_143_143;
            MR_Word ll_backend__disj_gen__Var_152;
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_153_153;
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_154_154;
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_155_155;
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_156_156;
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_157_157;
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_158_158;
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_162_162;
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_165_165;
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_166_166;
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_167_167;
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_168_168;
            MR_Word ll_backend__disj_gen__Var_177;
            MR_Word ll_backend__disj_gen__Var_179;
            MR_Word ll_backend__disj_gen__Var_180;
            MR_Word ll_backend__disj_gen__Var_181;
            MR_Word ll_backend__disj_gen__Var_182;
            MR_Word ll_backend__disj_gen__Var_183;
            MR_Word ll_backend__disj_gen__Var_184;
            MR_Word ll_backend__disj_gen__Var_185;
            MR_Word ll_backend__disj_gen__Var_186;
            MR_Word ll_backend__disj_gen__Var_187;
            MR_Word ll_backend__disj_gen__Var_188;
            MR_Word ll_backend__disj_gen__Var_189;

            if ((ll_backend__disj_gen__MaybeEntryResumePoint_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word ll_backend__disj_gen__TypeCtorInfo_201_201 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

                {
                  ll_backend__disj_gen__RestoreHpCode_70 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_201_201);
                }
                {
                  ll_backend__disj_gen__RestoreTicketCode_71 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_201_201);
                }
                {
                  ll_backend__disj_gen__ThisDisjunctRegionCode_72 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_201_201);
                }
              }
            else
              {
                {
                  ll_backend__code_loc_dep__maybe_restore_hp_2_p_0(ll_backend__disj_gen__MaybeHpSlot0_10, &ll_backend__disj_gen__RestoreHpCode_70);
                }
                {
                  ll_backend__code_loc_dep__maybe_reset_ticket_3_p_0(ll_backend__disj_gen__MaybeTicketSlot_11, (MR_Integer) 0, &ll_backend__disj_gen__RestoreTicketCode_71);
                }
                ll_backend__disj_gen__ThisDisjunctRegionCode_72 = ll_backend__disj_gen__LaterRegionCode_12;
              }
            {
              hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__disj_gen__GoalInfo0_65, &ll_backend__disj_gen__GoalInfo_73);
            }
            {
              ll_backend__disj_gen__Goal_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Goal_74, 0) = ((MR_Box) (ll_backend__disj_gen__GoalExpr0_64));
              MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Goal_74, 1) = ((MR_Box) (ll_backend__disj_gen__GoalInfo_73));
            }
            ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__ReclaimHeap_9 == (MR_Integer) 1);
            if (ll_backend__disj_gen__succeeded)
              {
                {
                  ll_backend__disj_gen__succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(ll_backend__disj_gen__Goal_74);
                }
                if (ll_backend__disj_gen__succeeded)
                  ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__MaybeHpSlot0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            if (ll_backend__disj_gen__succeeded)
              {
                MR_Word ll_backend__disj_gen__TypeCtorInfo_202_202;
                MR_Word ll_backend__disj_gen__HpSlot_76;
                MR_Word ll_backend__disj_gen__BranchSaveHpCode_78;
                MR_Word ll_backend__disj_gen__BranchHpSlot_79;
                MR_Word ll_backend__disj_gen__HpCodeInstrs_81;
                MR_Word ll_backend__disj_gen__BranchHpCodeInstrs_82;
                MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_141_141;
                MR_Word ll_backend__disj_gen__Var_144;
                MR_Word ll_backend__disj_gen__Var_148;

                {
                  ll_backend__code_loc_dep__save_hp_6_p_0(&ll_backend__disj_gen__SaveHpCode_75, &ll_backend__disj_gen__HpSlot_76, ll_backend__disj_gen__STATE_VARIABLE_CI_106_106, &ll_backend__disj_gen__STATE_VARIABLE_CI_141_141, ll_backend__disj_gen__STATE_VARIABLE_CLD_107_107, &ll_backend__disj_gen__STATE_VARIABLE_CLD_142_142);
                }
                {
                  ll_backend__disj_gen__MaybeHpSlot_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__MaybeHpSlot_77, 0) = ((MR_Box) (ll_backend__disj_gen__HpSlot_76));
                }
                {
                  ll_backend__code_loc_dep__save_hp_in_branch_6_p_0(&ll_backend__disj_gen__BranchSaveHpCode_78, &ll_backend__disj_gen__BranchHpSlot_79, ll_backend__disj_gen__BranchStart0_14, &ll_backend__disj_gen__BranchStart_80, ll_backend__disj_gen__STATE_VARIABLE_CI_141_141, &ll_backend__disj_gen__STATE_VARIABLE_CI_143_143);
                }
                ll_backend__disj_gen__TypeCtorInfo_202_202 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                {
                  ll_backend__disj_gen__HpCodeInstrs_81 = mercury__cord__list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_202_202, ll_backend__disj_gen__SaveHpCode_75);
                }
                {
                  ll_backend__disj_gen__BranchHpCodeInstrs_82 = mercury__cord__list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_202_202, ll_backend__disj_gen__BranchSaveHpCode_78);
                }
                {
                  ll_backend__disj_gen__Var_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_144, 0) = ((MR_Box) (&ll_backend__disj_gen_scalar_common_4[0]));
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_144, 1) = ((MR_Box) (ll_backend__disj_gen__generate_disjuncts_19_p_0_1));
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_144, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_144, 3) = ((MR_Box) (ll_backend__disj_gen__HpCodeInstrs_81));
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_144, 4) = ((MR_Box) (ll_backend__disj_gen__BranchHpCodeInstrs_82));
                }
                {
                  mercury__require__expect_4_p_0(ll_backend__disj_gen__Var_144, (MR_String) "ll_backend.disj_gen", (MR_String) "predicate \140ll_backend.disj_gen.generate_disjuncts\'/19", (MR_String) "cannot use same code for saving hp");
                }
                {
                  ll_backend__disj_gen__Var_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_148, 0) = ((MR_Box) (&ll_backend__disj_gen_scalar_common_4[1]));
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_148, 1) = ((MR_Box) (ll_backend__disj_gen__generate_disjuncts_19_p_0_2));
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_148, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_148, 3) = ((MR_Box) (ll_backend__disj_gen__HpSlot_76));
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_148, 4) = ((MR_Box) (ll_backend__disj_gen__BranchHpSlot_79));
                }
                {
                  mercury__require__expect_4_p_0(ll_backend__disj_gen__Var_148, (MR_String) "ll_backend.disj_gen", (MR_String) "predicate \140ll_backend.disj_gen.generate_disjuncts\'/19", (MR_String) "cannot allocate same slot for saved hp");
                }
              }
            else
              {
                {
                  ll_backend__disj_gen__SaveHpCode_75 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
                ll_backend__disj_gen__MaybeHpSlot_77 = ll_backend__disj_gen__MaybeHpSlot0_10;
                ll_backend__disj_gen__BranchStart_80 = ll_backend__disj_gen__BranchStart0_14;
                ll_backend__disj_gen__STATE_VARIABLE_CLD_142_142 = ll_backend__disj_gen__STATE_VARIABLE_CLD_107_107;
                ll_backend__disj_gen__STATE_VARIABLE_CI_143_143 = ll_backend__disj_gen__STATE_VARIABLE_CI_106_106;
              }
            {
              ll_backend__disj_gen__Var_152 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__disj_gen__ResumeVars_67);
            }
            {
              ll_backend__code_loc_dep__make_resume_point_6_p_0(ll_backend__disj_gen__Var_152, ll_backend__disj_gen__ResumeLocs_68, ll_backend__disj_gen__FullResumeMap_3, &ll_backend__disj_gen__NextResumePoint_83, ll_backend__disj_gen__STATE_VARIABLE_CI_143_143, &ll_backend__disj_gen__STATE_VARIABLE_CI_153_153);
            }
            {
              ll_backend__code_loc_dep__effect_resume_point_5_p_0(ll_backend__disj_gen__NextResumePoint_83, ll_backend__disj_gen__CodeModel_2, &ll_backend__disj_gen__ModContCode_84, ll_backend__disj_gen__STATE_VARIABLE_CLD_142_142, &ll_backend__disj_gen__STATE_VARIABLE_CLD_154_154);
            }
            {
              ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(ll_backend__disj_gen__Goal_74, ll_backend__disj_gen__DisjGoalInfo_6, &ll_backend__disj_gen__TraceCode_85, ll_backend__disj_gen__STATE_VARIABLE_CI_153_153, &ll_backend__disj_gen__STATE_VARIABLE_CI_155_155, ll_backend__disj_gen__STATE_VARIABLE_CLD_154_154, &ll_backend__disj_gen__STATE_VARIABLE_CLD_156_156);
            }
            {
              ll_backend__disj_gen__GoalCodeModel_86 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__disj_gen__GoalInfo_73);
            }
            {
              ll_backend__code_gen__generate_goal_7_p_0(ll_backend__disj_gen__GoalCodeModel_86, ll_backend__disj_gen__Goal_74, &ll_backend__disj_gen__GoalCode_87, ll_backend__disj_gen__STATE_VARIABLE_CI_155_155, &ll_backend__disj_gen__STATE_VARIABLE_CI_157_157, ll_backend__disj_gen__STATE_VARIABLE_CLD_156_156, &ll_backend__disj_gen__STATE_VARIABLE_CLD_158_158);
            }
            switch (ll_backend__disj_gen__CodeModel_2) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_159_159;
                  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_160_160;
                  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_163_163;

                  {
                    ll_backend__disj_gen__ResumeVarsCode_88 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
                  {
                    ll_backend__code_loc_dep__maybe_release_hp_5_p_0(ll_backend__disj_gen__MaybeHpSlot_77, ll_backend__disj_gen__STATE_VARIABLE_CI_157_157, &ll_backend__disj_gen__STATE_VARIABLE_CI_159_159, ll_backend__disj_gen__STATE_VARIABLE_CLD_158_158, &ll_backend__disj_gen__STATE_VARIABLE_CLD_160_160);
                  }
                  {
                    ll_backend__code_loc_dep__maybe_reset_prune_and_release_ticket_7_p_0(ll_backend__disj_gen__MaybeTicketSlot_11, (MR_Integer) 1, &ll_backend__disj_gen__PruneTicketCode_89, ll_backend__disj_gen__STATE_VARIABLE_CI_159_159, &ll_backend__disj_gen__STATE_VARIABLE_CI_162_162, ll_backend__disj_gen__STATE_VARIABLE_CLD_160_160, &ll_backend__disj_gen__STATE_VARIABLE_CLD_163_163);
                  }
                  {
                    ll_backend__code_loc_dep__reset_resume_known_3_p_0(ll_backend__disj_gen__BranchStart_80, ll_backend__disj_gen__STATE_VARIABLE_CLD_163_163, &ll_backend__disj_gen__STATE_VARIABLE_CLD_165_165);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    ll_backend__code_loc_dep__flush_resume_vars_to_stack_4_p_0(&ll_backend__disj_gen__ResumeVarsCode_88, ll_backend__disj_gen__STATE_VARIABLE_CI_157_157, ll_backend__disj_gen__STATE_VARIABLE_CLD_158_158, &ll_backend__disj_gen__STATE_VARIABLE_CLD_165_165);
                  }
                  {
                    ll_backend__disj_gen__PruneTicketCode_89 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
                  ll_backend__disj_gen__STATE_VARIABLE_CI_162_162 = ll_backend__disj_gen__STATE_VARIABLE_CI_157_157;
                }
                break;
            }
            {
              ll_backend__code_loc_dep__pop_resume_point_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CLD_165_165, &ll_backend__disj_gen__STATE_VARIABLE_CLD_166_166);
            }
            {
              ll_backend__code_loc_dep__pickup_zombies_3_p_0(&ll_backend__disj_gen__Zombies_90, ll_backend__disj_gen__STATE_VARIABLE_CLD_166_166, &ll_backend__disj_gen__STATE_VARIABLE_CLD_167_167);
            }
            {
              ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ll_backend__disj_gen__Zombies_90, ll_backend__disj_gen__STATE_VARIABLE_CLD_167_167, &ll_backend__disj_gen__STATE_VARIABLE_CLD_168_168);
            }
            {
              hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__disj_gen__DisjGoalInfo_6, &ll_backend__disj_gen__StoreMap_91);
            }
            {
              ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__disj_gen__StoreMap_91, ll_backend__disj_gen__MaybeEnd0_15, &ll_backend__disj_gen__MaybeEnd1_92, &ll_backend__disj_gen__SaveCode_93, ll_backend__disj_gen__STATE_VARIABLE_CI_162_162, ll_backend__disj_gen__STATE_VARIABLE_CLD_168_168);
            }
            if ((ll_backend__disj_gen__RegionCommitDisjCleanup_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word ll_backend__disj_gen__Var_173;
                MR_Word ll_backend__disj_gen__Var_174;
                MR_Word ll_backend__disj_gen__Var_175;

                {
                  ll_backend__disj_gen__Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_175, 0) = ((MR_Box) (ll_backend__disj_gen__EndLabel_8));
                }
                {
                  ll_backend__disj_gen__Var_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_174, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_174, 1) = ((MR_Box) (ll_backend__disj_gen__Var_175));
                }
                {
                  ll_backend__disj_gen__Var_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_173, 0) = ((MR_Box) (ll_backend__disj_gen__Var_174));
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_173, 1) = ((MR_Box) ((MR_String) "skip to end of disjunction"));
                }
                {
                  ll_backend__disj_gen__BranchCode_94 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__disj_gen__Var_173)));
                }
              }
            else
              {
                MR_Word ll_backend__disj_gen__CleanupLabel_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__RegionCommitDisjCleanup_7, (MR_Integer) 0)));
                MR_Word ll_backend__disj_gen__Var_169;
                MR_Word ll_backend__disj_gen__Var_170;
                MR_Word ll_backend__disj_gen__Var_171;
                MR_Word ll_backend__disj_gen___CleanupCode_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__RegionCommitDisjCleanup_7, (MR_Integer) 1)));

                {
                  ll_backend__disj_gen__Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_171, 0) = ((MR_Box) (ll_backend__disj_gen__CleanupLabel_95));
                }
                {
                  ll_backend__disj_gen__Var_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_170, 1) = ((MR_Box) (ll_backend__disj_gen__Var_171));
                }
                {
                  ll_backend__disj_gen__Var_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_169, 0) = ((MR_Box) (ll_backend__disj_gen__Var_170));
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_169, 1) = ((MR_Box) ((MR_String) "skip to end of disjunction with region cleanup"));
                }
                {
                  ll_backend__disj_gen__BranchCode_94 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__disj_gen__Var_169)));
                }
              }
            {
              ll_backend__disj_gen__Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_177, 0) = ((MR_Box) (ll_backend__disj_gen__NextResumePoint_83));
            }
            {
              ll_backend__disj_gen__generate_disjuncts_19_p_0(ll_backend__disj_gen__Goals_43, ll_backend__disj_gen__CodeModel_2, ll_backend__disj_gen__FullResumeMap_3, ll_backend__disj_gen__Var_177, ll_backend__disj_gen__HijackInfo_5, ll_backend__disj_gen__DisjGoalInfo_6, ll_backend__disj_gen__RegionCommitDisjCleanup_7, ll_backend__disj_gen__EndLabel_8, ll_backend__disj_gen__ReclaimHeap_9, ll_backend__disj_gen__MaybeHpSlot_77, ll_backend__disj_gen__MaybeTicketSlot_11, ll_backend__disj_gen__LaterRegionCode_12, ll_backend__disj_gen__LastRegionCode_13, ll_backend__disj_gen__BranchStart_80, ll_backend__disj_gen__MaybeEnd1_92, ll_backend__disj_gen__MaybeEnd_16, &ll_backend__disj_gen__RestCode_97, ll_backend__disj_gen__STATE_VARIABLE_CI_162_162, ll_backend__disj_gen__STATE_VARIABLE_CI_19);
            }
            ll_backend__disj_gen__TypeCtorInfo_211_211 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
            {
              ll_backend__disj_gen__Var_189 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__BranchCode_94, ll_backend__disj_gen__RestCode_97);
            }
            {
              ll_backend__disj_gen__Var_188 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__SaveCode_93, ll_backend__disj_gen__Var_189);
            }
            {
              ll_backend__disj_gen__Var_187 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__PruneTicketCode_89, ll_backend__disj_gen__Var_188);
            }
            {
              ll_backend__disj_gen__Var_186 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__ResumeVarsCode_88, ll_backend__disj_gen__Var_187);
            }
            {
              ll_backend__disj_gen__Var_185 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__GoalCode_87, ll_backend__disj_gen__Var_186);
            }
            {
              ll_backend__disj_gen__Var_184 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__TraceCode_85, ll_backend__disj_gen__Var_185);
            }
            {
              ll_backend__disj_gen__Var_183 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__ModContCode_84, ll_backend__disj_gen__Var_184);
            }
            {
              ll_backend__disj_gen__Var_182 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__ThisDisjunctRegionCode_72, ll_backend__disj_gen__Var_183);
            }
            {
              ll_backend__disj_gen__Var_181 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__SaveHpCode_75, ll_backend__disj_gen__Var_182);
            }
            {
              ll_backend__disj_gen__Var_180 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__RestoreTicketCode_71, ll_backend__disj_gen__Var_181);
            }
            {
              ll_backend__disj_gen__Var_179 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__RestoreHpCode_70, ll_backend__disj_gen__Var_180);
            }
            {
              *ll_backend__disj_gen__Code_17 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__EntryResumePointCode_63, ll_backend__disj_gen__Var_179);
            }
          }
      }
  }
}

static void MR_CALL 
ll_backend__disj_gen__generate_real_disj_11_p_0(
  MR_Word ll_backend__disj_gen__AddTrailOps_12,
  MR_Word ll_backend__disj_gen__AddRegionOps_13,
  MR_Word ll_backend__disj_gen__CodeModel_14,
  MR_Word ll_backend__disj_gen__ResumeVars_15,
  MR_Word ll_backend__disj_gen__Goals_16,
  MR_Word ll_backend__disj_gen__DisjGoalInfo_17,
  MR_Word * ll_backend__disj_gen__Code_18,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_49,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_50,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_51,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_52)
{
  {
    MR_bool ll_backend__disj_gen__succeeded;
    MR_Word ll_backend__disj_gen__TypeCtorInfo_82_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word ll_backend__disj_gen__TypeCtorInfo_85_85;
    MR_Word ll_backend__disj_gen__ResumeMap_21;
    MR_Word ll_backend__disj_gen__FlushCode_22;
    MR_Word ll_backend__disj_gen__Globals_23;
    MR_Word ll_backend__disj_gen__SaveTicketCode_24;
    MR_Word ll_backend__disj_gen__MaybeTicketSlot_25;
    MR_Word ll_backend__disj_gen__ReclaimHeap_26;
    MR_Word ll_backend__disj_gen__SaveHpCode_27;
    MR_Word ll_backend__disj_gen__MaybeHpSlot_28;
    MR_Word ll_backend__disj_gen__BeforeEnterRegionCode_29;
    MR_Word ll_backend__disj_gen__LaterRegionCode_30;
    MR_Word ll_backend__disj_gen__LastRegionCode_31;
    MR_Word ll_backend__disj_gen__RegionStackVarsToRelease_32;
    MR_Word ll_backend__disj_gen__RegionCommitDisjCleanup_33;
    MR_Word ll_backend__disj_gen__HijackInfo_42;
    MR_Word ll_backend__disj_gen__PrepareHijackCode_43;
    MR_Word ll_backend__disj_gen__EndLabel_44;
    MR_Word ll_backend__disj_gen__BranchStart_45;
    MR_Word ll_backend__disj_gen__MaybeEnd_46;
    MR_Word ll_backend__disj_gen__GoalsCode_47;
    MR_Word ll_backend__disj_gen__StoreMap_48;
    MR_Word ll_backend__disj_gen__Var_53;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_54_54;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_55_55;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_56_56;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_65_65;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_66_66;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_67_67;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_68_68;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_69_69;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_72_72;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_73_73;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_76_76;
    MR_Word ll_backend__disj_gen__Var_78;
    MR_Word ll_backend__disj_gen__Var_79;
    MR_Word ll_backend__disj_gen__Var_80;
    MR_Word ll_backend__disj_gen__Var_81;

    {
      ll_backend__disj_gen__Var_53 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_82_82, ll_backend__disj_gen__ResumeVars_15);
    }
    {
      ll_backend__code_loc_dep__produce_vars_6_p_0(ll_backend__disj_gen__Var_53, &ll_backend__disj_gen__ResumeMap_21, &ll_backend__disj_gen__FlushCode_22, ll_backend__disj_gen__STATE_VARIABLE_CI_0_49, ll_backend__disj_gen__STATE_VARIABLE_CLD_0_51, &ll_backend__disj_gen__STATE_VARIABLE_CLD_54_54);
    }
    {
      ll_backend__code_info__get_globals_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_49, &ll_backend__disj_gen__Globals_23);
    }
    {
      ll_backend__code_loc_dep__maybe_save_ticket_7_p_0(ll_backend__disj_gen__AddTrailOps_12, &ll_backend__disj_gen__SaveTicketCode_24, &ll_backend__disj_gen__MaybeTicketSlot_25, ll_backend__disj_gen__STATE_VARIABLE_CI_0_49, &ll_backend__disj_gen__STATE_VARIABLE_CI_55_55, ll_backend__disj_gen__STATE_VARIABLE_CLD_54_54, &ll_backend__disj_gen__STATE_VARIABLE_CLD_56_56);
    }
    switch (ll_backend__disj_gen__CodeModel_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__disj_gen__TypeCtorInfo_83_83;
          MR_Word ll_backend__disj_gen__MaybeRbmmInfo_34;

          {
            libs__globals__lookup_bool_option_3_p_0(ll_backend__disj_gen__Globals_23, (MR_Integer) 310, &ll_backend__disj_gen__ReclaimHeap_26);
          }
          ll_backend__disj_gen__TypeCtorInfo_83_83 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
          {
            ll_backend__disj_gen__SaveHpCode_27 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_83_83);
          }
          ll_backend__disj_gen__MaybeHpSlot_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            ll_backend__disj_gen__MaybeRbmmInfo_34 = hlds__hlds_goal__goal_info_get_maybe_rbmm_1_f_0(ll_backend__disj_gen__DisjGoalInfo_17);
          }
          if ((ll_backend__disj_gen__MaybeRbmmInfo_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                ll_backend__disj_gen__BeforeEnterRegionCode_29 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_83_83);
              }
              {
                ll_backend__disj_gen__LaterRegionCode_30 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_83_83);
              }
              {
                ll_backend__disj_gen__LastRegionCode_31 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_83_83);
              }
              ll_backend__disj_gen__RegionStackVarsToRelease_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              ll_backend__disj_gen__RegionCommitDisjCleanup_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              ll_backend__disj_gen__STATE_VARIABLE_CI_65_65 = ll_backend__disj_gen__STATE_VARIABLE_CI_55_55;
              ll_backend__disj_gen__STATE_VARIABLE_CLD_66_66 = ll_backend__disj_gen__STATE_VARIABLE_CLD_56_56;
            }
          else
            {
              MR_Word ll_backend__disj_gen__RbmmInfo_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__MaybeRbmmInfo_34, (MR_Integer) 0)));
              MR_Word ll_backend__disj_gen__DisjCreatedRegionVars_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__RbmmInfo_35, (MR_Integer) 0)));
              MR_Word ll_backend__disj_gen__DisjRemovedRegionVars_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__RbmmInfo_35, (MR_Integer) 1)));
              MR_Word ll_backend__disj_gen__DisjAllocRegionVars_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__RbmmInfo_35, (MR_Integer) 3)));
              MR_Word ll_backend__disj_gen___DisjCarriedRegionVars_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__RbmmInfo_35, (MR_Integer) 2)));
              MR_Word ll_backend__disj_gen___DisjUsedRegionVars_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__RbmmInfo_35, (MR_Integer) 4)));
              MR_Word ll_backend__disj_gen__TypeInfo_84_84 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[1];

              {
                ll_backend__disj_gen__succeeded = mercury__set__is_empty_1_p_0(ll_backend__disj_gen__TypeInfo_84_84, ll_backend__disj_gen__DisjCreatedRegionVars_36);
              }
              if (ll_backend__disj_gen__succeeded)
                {
                  {
                    ll_backend__disj_gen__succeeded = mercury__set__is_empty_1_p_0(ll_backend__disj_gen__TypeInfo_84_84, ll_backend__disj_gen__DisjRemovedRegionVars_37);
                  }
                  if (ll_backend__disj_gen__succeeded)
                    {
                      ll_backend__disj_gen__succeeded = mercury__set__is_empty_1_p_0(ll_backend__disj_gen__TypeInfo_84_84, ll_backend__disj_gen__DisjAllocRegionVars_39);
                    }
                }
              if (ll_backend__disj_gen__succeeded)
                {
                  {
                    ll_backend__disj_gen__BeforeEnterRegionCode_29 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_83_83);
                  }
                  {
                    ll_backend__disj_gen__LaterRegionCode_30 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_83_83);
                  }
                  {
                    ll_backend__disj_gen__LastRegionCode_31 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_83_83);
                  }
                  ll_backend__disj_gen__RegionStackVarsToRelease_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  ll_backend__disj_gen__RegionCommitDisjCleanup_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  ll_backend__disj_gen__STATE_VARIABLE_CLD_66_66 = ll_backend__disj_gen__STATE_VARIABLE_CLD_56_56;
                  ll_backend__disj_gen__STATE_VARIABLE_CI_65_65 = ll_backend__disj_gen__STATE_VARIABLE_CI_55_55;
                }
              else
                {
                  MR_Word ll_backend__disj_gen__Var_58;
                  MR_Word ll_backend__disj_gen__Var_59;

                  {
                    ll_backend__disj_gen__Var_58 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__disj_gen__TypeCtorInfo_82_82, ll_backend__disj_gen__DisjRemovedRegionVars_37);
                  }
                  {
                    ll_backend__disj_gen__Var_59 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__disj_gen__TypeCtorInfo_82_82, ll_backend__disj_gen__DisjAllocRegionVars_39);
                  }
                  {
                    ll_backend__disj_gen__maybe_create_disj_region_frame_semi_12_p_0(ll_backend__disj_gen__AddRegionOps_13, ll_backend__disj_gen__Var_58, ll_backend__disj_gen__Var_59, &ll_backend__disj_gen__BeforeEnterRegionCode_29, &ll_backend__disj_gen__LaterRegionCode_30, &ll_backend__disj_gen__LastRegionCode_31, &ll_backend__disj_gen__RegionStackVarsToRelease_32, &ll_backend__disj_gen__RegionCommitDisjCleanup_33, ll_backend__disj_gen__STATE_VARIABLE_CI_55_55, &ll_backend__disj_gen__STATE_VARIABLE_CI_65_65, ll_backend__disj_gen__STATE_VARIABLE_CLD_56_56, &ll_backend__disj_gen__STATE_VARIABLE_CLD_66_66);
                  }
                }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_63_63;
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_64_64;

          {
            libs__globals__lookup_bool_option_3_p_0(ll_backend__disj_gen__Globals_23, (MR_Integer) 311, &ll_backend__disj_gen__ReclaimHeap_26);
          }
          {
            ll_backend__code_loc_dep__maybe_save_hp_7_p_0(ll_backend__disj_gen__ReclaimHeap_26, &ll_backend__disj_gen__SaveHpCode_27, &ll_backend__disj_gen__MaybeHpSlot_28, ll_backend__disj_gen__STATE_VARIABLE_CI_55_55, &ll_backend__disj_gen__STATE_VARIABLE_CI_63_63, ll_backend__disj_gen__STATE_VARIABLE_CLD_56_56, &ll_backend__disj_gen__STATE_VARIABLE_CLD_64_64);
          }
          {
            ll_backend__disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_9_p_0(ll_backend__disj_gen__AddRegionOps_13, &ll_backend__disj_gen__BeforeEnterRegionCode_29, &ll_backend__disj_gen__LaterRegionCode_30, &ll_backend__disj_gen__LastRegionCode_31, ll_backend__disj_gen__STATE_VARIABLE_CI_63_63, &ll_backend__disj_gen__STATE_VARIABLE_CI_65_65, ll_backend__disj_gen__STATE_VARIABLE_CLD_64_64, &ll_backend__disj_gen__STATE_VARIABLE_CLD_66_66);
          }
          ll_backend__disj_gen__RegionStackVarsToRelease_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ll_backend__disj_gen__RegionCommitDisjCleanup_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
    }
    {
      ll_backend__code_loc_dep__prepare_for_disj_hijack_7_p_0(ll_backend__disj_gen__CodeModel_14, &ll_backend__disj_gen__HijackInfo_42, &ll_backend__disj_gen__PrepareHijackCode_43, ll_backend__disj_gen__STATE_VARIABLE_CI_65_65, &ll_backend__disj_gen__STATE_VARIABLE_CI_67_67, ll_backend__disj_gen__STATE_VARIABLE_CLD_66_66, &ll_backend__disj_gen__STATE_VARIABLE_CLD_68_68);
    }
    {
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__disj_gen__EndLabel_44, ll_backend__disj_gen__STATE_VARIABLE_CI_67_67, &ll_backend__disj_gen__STATE_VARIABLE_CI_69_69);
    }
    {
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CLD_68_68, &ll_backend__disj_gen__BranchStart_45);
    }
    {
      ll_backend__disj_gen__generate_disjuncts_19_p_0(ll_backend__disj_gen__Goals_16, ll_backend__disj_gen__CodeModel_14, ll_backend__disj_gen__ResumeMap_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__disj_gen__HijackInfo_42, ll_backend__disj_gen__DisjGoalInfo_17, ll_backend__disj_gen__RegionCommitDisjCleanup_33, ll_backend__disj_gen__EndLabel_44, ll_backend__disj_gen__ReclaimHeap_26, ll_backend__disj_gen__MaybeHpSlot_28, ll_backend__disj_gen__MaybeTicketSlot_25, ll_backend__disj_gen__LaterRegionCode_30, ll_backend__disj_gen__LastRegionCode_31, ll_backend__disj_gen__BranchStart_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__disj_gen__MaybeEnd_46, &ll_backend__disj_gen__GoalsCode_47, ll_backend__disj_gen__STATE_VARIABLE_CI_69_69, &ll_backend__disj_gen__STATE_VARIABLE_CI_72_72);
    }
    {
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__disj_gen__DisjGoalInfo_17, &ll_backend__disj_gen__StoreMap_48);
    }
    {
      ll_backend__code_loc_dep__after_all_branches_4_p_0(ll_backend__disj_gen__StoreMap_48, ll_backend__disj_gen__MaybeEnd_46, ll_backend__disj_gen__STATE_VARIABLE_CI_72_72, &ll_backend__disj_gen__STATE_VARIABLE_CLD_73_73);
    }
    {
      ll_backend__code_loc_dep__release_several_temp_slots_6_p_0(ll_backend__disj_gen__RegionStackVarsToRelease_32, (MR_Integer) 1, ll_backend__disj_gen__STATE_VARIABLE_CI_72_72, ll_backend__disj_gen__STATE_VARIABLE_CI_50, ll_backend__disj_gen__STATE_VARIABLE_CLD_73_73, &ll_backend__disj_gen__STATE_VARIABLE_CLD_76_76);
    }
    switch (ll_backend__disj_gen__CodeModel_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ll_backend__disj_gen__STATE_VARIABLE_CLD_52 = ll_backend__disj_gen__STATE_VARIABLE_CLD_76_76;
        break;
      case (MR_Integer) 2:
        {
          ll_backend__code_loc_dep__set_resume_point_to_unknown_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CLD_76_76, ll_backend__disj_gen__STATE_VARIABLE_CLD_52);
        }
        break;
      case (MR_Integer) 1:
        *ll_backend__disj_gen__STATE_VARIABLE_CLD_52 = ll_backend__disj_gen__STATE_VARIABLE_CLD_76_76;
        break;
    }
    ll_backend__disj_gen__TypeCtorInfo_85_85 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__disj_gen__Var_81 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_85_85, ll_backend__disj_gen__PrepareHijackCode_43, ll_backend__disj_gen__GoalsCode_47);
    }
    {
      ll_backend__disj_gen__Var_80 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_85_85, ll_backend__disj_gen__BeforeEnterRegionCode_29, ll_backend__disj_gen__Var_81);
    }
    {
      ll_backend__disj_gen__Var_79 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_85_85, ll_backend__disj_gen__SaveHpCode_27, ll_backend__disj_gen__Var_80);
    }
    {
      ll_backend__disj_gen__Var_78 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_85_85, ll_backend__disj_gen__SaveTicketCode_24, ll_backend__disj_gen__Var_79);
    }
    {
      *ll_backend__disj_gen__Code_18 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_85_85, ll_backend__disj_gen__FlushCode_22, ll_backend__disj_gen__Var_78);
    }
  }
}

static void MR_CALL 
ll_backend__disj_gen__generate_lookup_disj_7_p_0(
  MR_Word ll_backend__disj_gen__ResumeVars_8,
  MR_Word ll_backend__disj_gen__LookupDisjInfo_9,
  MR_Word * ll_backend__disj_gen__Code_10,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_61,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_62,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_63,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_64)
{
  {
    MR_bool ll_backend__disj_gen__succeeded;
    MR_Word ll_backend__disj_gen__TypeCtorInfo_196_196;
    MR_Word ll_backend__disj_gen__OutVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 0)));
    MR_Word ll_backend__disj_gen__StoreMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 1)));
    MR_Word ll_backend__disj_gen__MaybeEnd0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 2)));
    MR_Word ll_backend__disj_gen__Liveness_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 3)));
    MR_Word ll_backend__disj_gen__CurSlot_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 4)));
    MR_Word ll_backend__disj_gen__ResumeMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 5)));
    MR_Word ll_backend__disj_gen__FlushCode_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 6)));
    MR_Word ll_backend__disj_gen__SaveTicketCode_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 7)));
    MR_Word ll_backend__disj_gen__MaybeTicketSlot_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 8)));
    MR_Word ll_backend__disj_gen__SaveHpCode_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 9)));
    MR_Word ll_backend__disj_gen__MaybeHpSlot_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 10)));
    MR_Word ll_backend__disj_gen__HijackInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 11)));
    MR_Word ll_backend__disj_gen__PrepareHijackCode_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 12)));
    MR_Word ll_backend__disj_gen__Solns_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 13)));
    MR_Word ll_backend__disj_gen__LLDSTypes_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 14)));
    MR_Integer ll_backend__disj_gen__NumSolns_28;
    MR_Integer ll_backend__disj_gen__NumOutVars_29;
    MR_Word ll_backend__disj_gen__SolnVectorAddr_30;
    MR_Word ll_backend__disj_gen__SolnVectorAddrRval_31;
    MR_Word ll_backend__disj_gen__EndLabel_32;
    MR_Word ll_backend__disj_gen__BaseReg_33;
    MR_Word ll_backend__disj_gen__BaseRegInitCode_34;
    MR_Word ll_backend__disj_gen__SaveSlotCode_35;
    MR_Word ll_backend__disj_gen__DisjEntry_36;
    MR_Word ll_backend__disj_gen__ResumePoint_37;
    MR_Word ll_backend__disj_gen__UpdateRedoipCode_38;
    MR_Word ll_backend__disj_gen__FirstFlushResumeVarsCode_39;
    MR_Word ll_backend__disj_gen__FirstZombies_40;
    MR_Word ll_backend__disj_gen__MaybeEnd1_41;
    MR_Word ll_backend__disj_gen__FirstBranchEndCode_42;
    MR_Word ll_backend__disj_gen__GotoEndCode_43;
    MR_Word ll_backend__disj_gen__ResumePointCode_44;
    MR_Word ll_backend__disj_gen__RestoreTicketCode_45;
    MR_Word ll_backend__disj_gen__RestoreHpCode_46;
    MR_Word ll_backend__disj_gen__LaterBaseReg_47;
    MR_Word ll_backend__disj_gen__UndoLabel_48;
    MR_Word ll_backend__disj_gen__AfterUndoLabel_49;
    MR_Integer ll_backend__disj_gen__MaxSlot_50;
    MR_Word ll_backend__disj_gen__TestMoreSolnsCode_51;
    MR_Word ll_backend__disj_gen__UndoHijackCode_52;
    MR_Word ll_backend__disj_gen__AfterUndoLabelCode_53;
    MR_Word ll_backend__disj_gen__LaterFlushResumeVarsCode_55;
    MR_Word ll_backend__disj_gen__LaterZombies_56;
    MR_Word ll_backend__disj_gen__MaybeEnd_57;
    MR_Word ll_backend__disj_gen__LaterBranchEndCode_58;
    MR_Word ll_backend__disj_gen__EndLabelCode_59;
    MR_Word ll_backend__disj_gen__Comment_60;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_65_65;
    MR_Word ll_backend__disj_gen__Var_66;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_68_68;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_70_70;
    MR_Word ll_backend__disj_gen__Var_71;
    MR_Word ll_backend__disj_gen__Var_72;
    MR_Word ll_backend__disj_gen__Var_73;
    MR_Word ll_backend__disj_gen__Var_74;
    MR_Word ll_backend__disj_gen__Var_75;
    MR_Word ll_backend__disj_gen__Var_81;
    MR_Word ll_backend__disj_gen__Var_82;
    MR_Word ll_backend__disj_gen__Var_83;
    MR_Word ll_backend__disj_gen__Var_84;
    MR_Word ll_backend__disj_gen__Var_86;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_88_88;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_90_90;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_92_92;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_93_93;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_94_94;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_95_95;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_96_96;
    MR_Word ll_backend__disj_gen__Var_97;
    MR_Word ll_backend__disj_gen__Var_98;
    MR_Word ll_backend__disj_gen__Var_99;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_101_101;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_102_102;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_103_103;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_106_106;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_107_107;
    MR_Integer ll_backend__disj_gen__Var_109;
    MR_Word ll_backend__disj_gen__Var_111;
    MR_Word ll_backend__disj_gen__Var_112;
    MR_Word ll_backend__disj_gen__Var_113;
    MR_Word ll_backend__disj_gen__Var_114;
    MR_Word ll_backend__disj_gen__Var_116;
    MR_Word ll_backend__disj_gen__Var_117;
    MR_Word ll_backend__disj_gen__Var_118;
    MR_Word ll_backend__disj_gen__Var_119;
    MR_Word ll_backend__disj_gen__Var_121;
    MR_Word ll_backend__disj_gen__Var_122;
    MR_Word ll_backend__disj_gen__Var_123;
    MR_Word ll_backend__disj_gen__Var_124;
    MR_Word ll_backend__disj_gen__Var_126;
    MR_Word ll_backend__disj_gen__Var_127;
    MR_Word ll_backend__disj_gen__Var_128;
    MR_Word ll_backend__disj_gen__Var_129;
    MR_Word ll_backend__disj_gen__Var_135;
    MR_Word ll_backend__disj_gen__Var_136;
    MR_Word ll_backend__disj_gen__Var_137;
    MR_Word ll_backend__disj_gen__Var_138;
    MR_Word ll_backend__disj_gen__Var_140;
    MR_Word ll_backend__disj_gen__Var_141;
    MR_Word ll_backend__disj_gen__Var_142;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_145_145;
    MR_Word ll_backend__disj_gen__Var_146;
    MR_Word ll_backend__disj_gen__Var_147;
    MR_Word ll_backend__disj_gen__Var_148;
    MR_Word ll_backend__disj_gen__Var_150;
    MR_Word ll_backend__disj_gen__Var_151;
    MR_Word ll_backend__disj_gen__Var_152;
    MR_Word ll_backend__disj_gen__Var_153;
    MR_Word ll_backend__disj_gen__Var_154;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_161_161;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_163_163;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_164_164;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_165_165;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_166_166;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_167_167;
    MR_Word ll_backend__disj_gen__Var_169;
    MR_Word ll_backend__disj_gen__Var_170;
    MR_Word ll_backend__disj_gen__Var_176;
    MR_Word ll_backend__disj_gen__Var_177;
    MR_Word ll_backend__disj_gen__Var_178;
    MR_Word ll_backend__disj_gen__Var_179;
    MR_Word ll_backend__disj_gen__Var_180;
    MR_Word ll_backend__disj_gen__Var_181;
    MR_Word ll_backend__disj_gen__Var_182;
    MR_Word ll_backend__disj_gen__Var_183;
    MR_Word ll_backend__disj_gen__Var_184;
    MR_Word ll_backend__disj_gen__Var_185;
    MR_Word ll_backend__disj_gen__Var_186;
    MR_Word ll_backend__disj_gen__Var_187;
    MR_Word ll_backend__disj_gen__Var_188;
    MR_Word ll_backend__disj_gen__Var_189;
    MR_Word ll_backend__disj_gen__Var_190;
    MR_Word ll_backend__disj_gen__Var_191;
    MR_Word ll_backend__disj_gen__Var_192;
    MR_Word ll_backend__disj_gen__Var_193;
    MR_Word ll_backend__disj_gen___LaterUpdateRedoipCode_54;

    {
      mercury__list__length_2_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[0], ll_backend__disj_gen__Solns_26, &ll_backend__disj_gen__NumSolns_28);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[1], ll_backend__disj_gen__OutVars_13, &ll_backend__disj_gen__NumOutVars_29);
    }
    {
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__disj_gen__LLDSTypes_27, ll_backend__disj_gen__Solns_26, &ll_backend__disj_gen__SolnVectorAddr_30, ll_backend__disj_gen__STATE_VARIABLE_CI_0_61, &ll_backend__disj_gen__STATE_VARIABLE_CI_65_65);
    }
    {
      ll_backend__disj_gen__Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_66, 1) = ((MR_Box) (ll_backend__disj_gen__SolnVectorAddr_30));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_66, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__disj_gen__SolnVectorAddrRval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__SolnVectorAddrRval_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__SolnVectorAddrRval_31, 1) = ((MR_Box) (ll_backend__disj_gen__Var_66));
    }
    {
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__disj_gen__EndLabel_32, ll_backend__disj_gen__STATE_VARIABLE_CI_65_65, &ll_backend__disj_gen__STATE_VARIABLE_CI_68_68);
    }
    {
      ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(ll_backend__disj_gen__StoreMap_14, (MR_Integer) 0, &ll_backend__disj_gen__BaseReg_33, ll_backend__disj_gen__STATE_VARIABLE_CLD_0_63, &ll_backend__disj_gen__STATE_VARIABLE_CLD_70_70);
    }
    ll_backend__disj_gen__TypeCtorInfo_196_196 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    ll_backend__disj_gen__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__disj_gen_scalar_common_3[0]);
    {
      ll_backend__disj_gen__Var_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ll_backend__disj_gen__Var_74, 0) = ((MR_Box) (ll_backend__disj_gen__SolnVectorAddrRval_31));
      MR_hl_field(MR_mktag(2), ll_backend__disj_gen__Var_74, 1) = ((MR_Box) (ll_backend__disj_gen__Var_75));
      MR_hl_field(MR_mktag(2), ll_backend__disj_gen__Var_74, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__disj_gen_scalar_common_1[11])));
    }
    {
      ll_backend__disj_gen__Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_73, 1) = ((MR_Box) (ll_backend__disj_gen__Var_74));
    }
    {
      ll_backend__disj_gen__Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_72, 1) = ((MR_Box) (ll_backend__disj_gen__BaseReg_33));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_72, 2) = ((MR_Box) (ll_backend__disj_gen__Var_73));
    }
    {
      ll_backend__disj_gen__Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_71, 0) = ((MR_Box) (ll_backend__disj_gen__Var_72));
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_71, 1) = ((MR_Box) ((MR_String) "Compute base address for this case"));
    }
    {
      ll_backend__disj_gen__BaseRegInitCode_34 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ((MR_Box) (ll_backend__disj_gen__Var_71)));
    }
    {
      ll_backend__disj_gen__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_84, 0) = ((MR_Box) (ll_backend__disj_gen__NumOutVars_29));
    }
    {
      ll_backend__disj_gen__Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_83, 1) = ((MR_Box) (ll_backend__disj_gen__Var_84));
    }
    {
      ll_backend__disj_gen__Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_82, 1) = ((MR_Box) (ll_backend__disj_gen__CurSlot_17));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_82, 2) = ((MR_Box) (ll_backend__disj_gen__Var_83));
    }
    {
      ll_backend__disj_gen__Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_81, 0) = ((MR_Box) (ll_backend__disj_gen__Var_82));
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_81, 1) = ((MR_Box) ((MR_String) "Setup current slot in the solution array"));
    }
    {
      ll_backend__disj_gen__SaveSlotCode_35 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ((MR_Box) (ll_backend__disj_gen__Var_81)));
    }
    {
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CLD_70_70, &ll_backend__disj_gen__DisjEntry_36);
    }
    {
      ll_backend__disj_gen__Var_86 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__disj_gen__ResumeVars_8);
    }
    {
      ll_backend__code_loc_dep__make_resume_point_6_p_0(ll_backend__disj_gen__Var_86, (MR_Integer) 1, ll_backend__disj_gen__ResumeMap_18, &ll_backend__disj_gen__ResumePoint_37, ll_backend__disj_gen__STATE_VARIABLE_CI_68_68, &ll_backend__disj_gen__STATE_VARIABLE_CI_88_88);
    }
    {
      ll_backend__code_loc_dep__effect_resume_point_5_p_0(ll_backend__disj_gen__ResumePoint_37, (MR_Integer) 2, &ll_backend__disj_gen__UpdateRedoipCode_38, ll_backend__disj_gen__STATE_VARIABLE_CLD_70_70, &ll_backend__disj_gen__STATE_VARIABLE_CLD_90_90);
    }
    {
      ll_backend__lookup_util__generate_offset_assigns_6_p_0(ll_backend__disj_gen__OutVars_13, (MR_Integer) 0, ll_backend__disj_gen__BaseReg_33, ll_backend__disj_gen__STATE_VARIABLE_CI_88_88, ll_backend__disj_gen__STATE_VARIABLE_CLD_90_90, &ll_backend__disj_gen__STATE_VARIABLE_CLD_92_92);
    }
    {
      ll_backend__code_loc_dep__flush_resume_vars_to_stack_4_p_0(&ll_backend__disj_gen__FirstFlushResumeVarsCode_39, ll_backend__disj_gen__STATE_VARIABLE_CI_88_88, ll_backend__disj_gen__STATE_VARIABLE_CLD_92_92, &ll_backend__disj_gen__STATE_VARIABLE_CLD_93_93);
    }
    {
      ll_backend__code_loc_dep__pop_resume_point_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CLD_93_93, &ll_backend__disj_gen__STATE_VARIABLE_CLD_94_94);
    }
    {
      ll_backend__code_loc_dep__pickup_zombies_3_p_0(&ll_backend__disj_gen__FirstZombies_40, ll_backend__disj_gen__STATE_VARIABLE_CLD_94_94, &ll_backend__disj_gen__STATE_VARIABLE_CLD_95_95);
    }
    {
      ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ll_backend__disj_gen__FirstZombies_40, ll_backend__disj_gen__STATE_VARIABLE_CLD_95_95, &ll_backend__disj_gen__STATE_VARIABLE_CLD_96_96);
    }
    {
      ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__disj_gen__StoreMap_14, ll_backend__disj_gen__Liveness_16, ll_backend__disj_gen__MaybeEnd0_15, &ll_backend__disj_gen__MaybeEnd1_41, &ll_backend__disj_gen__FirstBranchEndCode_42, ll_backend__disj_gen__STATE_VARIABLE_CI_88_88, ll_backend__disj_gen__STATE_VARIABLE_CLD_96_96);
    }
    {
      ll_backend__disj_gen__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_99, 0) = ((MR_Box) (ll_backend__disj_gen__EndLabel_32));
    }
    {
      ll_backend__disj_gen__Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_98, 1) = ((MR_Box) (ll_backend__disj_gen__Var_99));
    }
    {
      ll_backend__disj_gen__Var_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_97, 0) = ((MR_Box) (ll_backend__disj_gen__Var_98));
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_97, 1) = ((MR_Box) ((MR_String) "goto end of lookup disj"));
    }
    {
      ll_backend__disj_gen__GotoEndCode_43 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ((MR_Box) (ll_backend__disj_gen__Var_97)));
    }
    {
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__disj_gen__DisjEntry_36, ll_backend__disj_gen__STATE_VARIABLE_CI_88_88, &ll_backend__disj_gen__STATE_VARIABLE_CLD_101_101);
    }
    {
      ll_backend__code_loc_dep__generate_resume_point_6_p_0(ll_backend__disj_gen__ResumePoint_37, &ll_backend__disj_gen__ResumePointCode_44, ll_backend__disj_gen__STATE_VARIABLE_CI_88_88, &ll_backend__disj_gen__STATE_VARIABLE_CI_102_102, ll_backend__disj_gen__STATE_VARIABLE_CLD_101_101, &ll_backend__disj_gen__STATE_VARIABLE_CLD_103_103);
    }
    {
      ll_backend__code_loc_dep__maybe_reset_ticket_3_p_0(ll_backend__disj_gen__MaybeTicketSlot_21, (MR_Integer) 0, &ll_backend__disj_gen__RestoreTicketCode_45);
    }
    {
      ll_backend__code_loc_dep__maybe_restore_hp_2_p_0(ll_backend__disj_gen__MaybeHpSlot_23, &ll_backend__disj_gen__RestoreHpCode_46);
    }
    {
      ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(ll_backend__disj_gen__StoreMap_14, (MR_Integer) 0, &ll_backend__disj_gen__LaterBaseReg_47, ll_backend__disj_gen__STATE_VARIABLE_CLD_103_103, &ll_backend__disj_gen__STATE_VARIABLE_CLD_106_106);
    }
    {
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__disj_gen__UndoLabel_48, ll_backend__disj_gen__STATE_VARIABLE_CI_102_102, &ll_backend__disj_gen__STATE_VARIABLE_CI_107_107);
    }
    {
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__disj_gen__AfterUndoLabel_49, ll_backend__disj_gen__STATE_VARIABLE_CI_107_107, ll_backend__disj_gen__STATE_VARIABLE_CI_62);
    }
    ll_backend__disj_gen__Var_109 = (ll_backend__disj_gen__NumSolns_28 - (MR_Integer) 1);
    ll_backend__disj_gen__MaxSlot_50 = (ll_backend__disj_gen__Var_109 * ll_backend__disj_gen__NumOutVars_29);
    {
      ll_backend__disj_gen__Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_114, 0) = ((MR_Box) (ll_backend__disj_gen__CurSlot_17));
    }
    {
      ll_backend__disj_gen__Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_113, 1) = ((MR_Box) (ll_backend__disj_gen__LaterBaseReg_47));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_113, 2) = ((MR_Box) (ll_backend__disj_gen__Var_114));
    }
    {
      ll_backend__disj_gen__Var_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_112, 0) = ((MR_Box) (ll_backend__disj_gen__Var_113));
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_112, 1) = ((MR_Box) ((MR_String) "Init later base register"));
    }
    {
      ll_backend__disj_gen__Var_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_121, 0) = ((MR_Box) (ll_backend__disj_gen__LaterBaseReg_47));
    }
    {
      ll_backend__disj_gen__Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_123, 0) = ((MR_Box) (ll_backend__disj_gen__MaxSlot_50));
    }
    {
      ll_backend__disj_gen__Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_122, 1) = ((MR_Box) (ll_backend__disj_gen__Var_123));
    }
    {
      ll_backend__disj_gen__Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26))));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_119, 2) = ((MR_Box) (ll_backend__disj_gen__Var_121));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_119, 3) = ((MR_Box) (ll_backend__disj_gen__Var_122));
    }
    {
      ll_backend__disj_gen__Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_124, 0) = ((MR_Box) (ll_backend__disj_gen__UndoLabel_48));
    }
    {
      ll_backend__disj_gen__Var_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_118, 1) = ((MR_Box) (ll_backend__disj_gen__Var_119));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_118, 2) = ((MR_Box) (ll_backend__disj_gen__Var_124));
    }
    {
      ll_backend__disj_gen__Var_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_117, 0) = ((MR_Box) (ll_backend__disj_gen__Var_118));
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_117, 1) = ((MR_Box) ((MR_String) "Jump to undo hijack code if there are no more solutions"));
    }
    {
      ll_backend__disj_gen__Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_129, 2) = ((MR_Box) (ll_backend__disj_gen__Var_114));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_129, 3) = ((MR_Box) (ll_backend__disj_gen__Var_83));
    }
    {
      ll_backend__disj_gen__Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_128, 1) = ((MR_Box) (ll_backend__disj_gen__CurSlot_17));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_128, 2) = ((MR_Box) (ll_backend__disj_gen__Var_129));
    }
    {
      ll_backend__disj_gen__Var_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_127, 0) = ((MR_Box) (ll_backend__disj_gen__Var_128));
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_127, 1) = ((MR_Box) ((MR_String) "Update current slot"));
    }
    {
      ll_backend__disj_gen__Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_138, 0) = ((MR_Box) (ll_backend__disj_gen__AfterUndoLabel_49));
    }
    {
      ll_backend__disj_gen__Var_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_137, 1) = ((MR_Box) (ll_backend__disj_gen__Var_138));
    }
    {
      ll_backend__disj_gen__Var_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_136, 0) = ((MR_Box) (ll_backend__disj_gen__Var_137));
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_136, 1) = ((MR_Box) ((MR_String) "Jump around undo hijack code"));
    }
    {
      ll_backend__disj_gen__Var_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_142, 1) = ((MR_Box) (ll_backend__disj_gen__UndoLabel_48));
    }
    {
      ll_backend__disj_gen__Var_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_141, 0) = ((MR_Box) (ll_backend__disj_gen__Var_142));
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_141, 1) = ((MR_Box) ((MR_String) "Undo hijack code"));
    }
    {
      ll_backend__disj_gen__Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_140, 0) = ((MR_Box) (ll_backend__disj_gen__Var_141));
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__disj_gen__Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_135, 0) = ((MR_Box) (ll_backend__disj_gen__Var_136));
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_135, 1) = ((MR_Box) (ll_backend__disj_gen__Var_140));
    }
    {
      ll_backend__disj_gen__Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_126, 0) = ((MR_Box) (ll_backend__disj_gen__Var_127));
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_126, 1) = ((MR_Box) (ll_backend__disj_gen__Var_135));
    }
    {
      ll_backend__disj_gen__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_116, 0) = ((MR_Box) (ll_backend__disj_gen__Var_117));
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_116, 1) = ((MR_Box) (ll_backend__disj_gen__Var_126));
    }
    {
      ll_backend__disj_gen__Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_111, 0) = ((MR_Box) (ll_backend__disj_gen__Var_112));
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_111, 1) = ((MR_Box) (ll_backend__disj_gen__Var_116));
    }
    {
      ll_backend__disj_gen__TestMoreSolnsCode_51 = mercury__cord__from_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__Var_111);
    }
    {
      ll_backend__code_loc_dep__undo_disj_hijack_4_p_0(ll_backend__disj_gen__HijackInfo_24, &ll_backend__disj_gen__UndoHijackCode_52, ll_backend__disj_gen__STATE_VARIABLE_CLD_106_106, &ll_backend__disj_gen__STATE_VARIABLE_CLD_145_145);
    }
    {
      ll_backend__disj_gen__Var_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_148, 1) = ((MR_Box) (ll_backend__disj_gen__AfterUndoLabel_49));
    }
    {
      ll_backend__disj_gen__Var_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_147, 0) = ((MR_Box) (ll_backend__disj_gen__Var_148));
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_147, 1) = ((MR_Box) ((MR_String) "Return later answer code"));
    }
    {
      ll_backend__disj_gen__Var_154 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ll_backend__disj_gen__Var_154, 0) = ((MR_Box) (ll_backend__disj_gen__SolnVectorAddrRval_31));
      MR_hl_field(MR_mktag(2), ll_backend__disj_gen__Var_154, 1) = ((MR_Box) (ll_backend__disj_gen__Var_75));
      MR_hl_field(MR_mktag(2), ll_backend__disj_gen__Var_154, 2) = ((MR_Box) (ll_backend__disj_gen__Var_121));
    }
    {
      ll_backend__disj_gen__Var_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_153, 1) = ((MR_Box) (ll_backend__disj_gen__Var_154));
    }
    {
      ll_backend__disj_gen__Var_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_152, 1) = ((MR_Box) (ll_backend__disj_gen__LaterBaseReg_47));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_152, 2) = ((MR_Box) (ll_backend__disj_gen__Var_153));
    }
    {
      ll_backend__disj_gen__Var_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_151, 0) = ((MR_Box) (ll_backend__disj_gen__Var_152));
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_151, 1) = ((MR_Box) ((MR_String) "Compute base address in later array for this solution"));
    }
    {
      ll_backend__disj_gen__Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_150, 0) = ((MR_Box) (ll_backend__disj_gen__Var_151));
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__disj_gen__Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_146, 0) = ((MR_Box) (ll_backend__disj_gen__Var_147));
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_146, 1) = ((MR_Box) (ll_backend__disj_gen__Var_150));
    }
    {
      ll_backend__disj_gen__AfterUndoLabelCode_53 = mercury__cord__from_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__Var_146);
    }
    {
      ll_backend__code_loc_dep__effect_resume_point_5_p_0(ll_backend__disj_gen__ResumePoint_37, (MR_Integer) 2, &ll_backend__disj_gen___LaterUpdateRedoipCode_54, ll_backend__disj_gen__STATE_VARIABLE_CLD_145_145, &ll_backend__disj_gen__STATE_VARIABLE_CLD_161_161);
    }
    {
      ll_backend__lookup_util__generate_offset_assigns_6_p_0(ll_backend__disj_gen__OutVars_13, (MR_Integer) 0, ll_backend__disj_gen__LaterBaseReg_47, *ll_backend__disj_gen__STATE_VARIABLE_CI_62, ll_backend__disj_gen__STATE_VARIABLE_CLD_161_161, &ll_backend__disj_gen__STATE_VARIABLE_CLD_163_163);
    }
    {
      ll_backend__code_loc_dep__flush_resume_vars_to_stack_4_p_0(&ll_backend__disj_gen__LaterFlushResumeVarsCode_55, *ll_backend__disj_gen__STATE_VARIABLE_CI_62, ll_backend__disj_gen__STATE_VARIABLE_CLD_163_163, &ll_backend__disj_gen__STATE_VARIABLE_CLD_164_164);
    }
    {
      ll_backend__code_loc_dep__pop_resume_point_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CLD_164_164, &ll_backend__disj_gen__STATE_VARIABLE_CLD_165_165);
    }
    {
      ll_backend__code_loc_dep__pickup_zombies_3_p_0(&ll_backend__disj_gen__LaterZombies_56, ll_backend__disj_gen__STATE_VARIABLE_CLD_165_165, &ll_backend__disj_gen__STATE_VARIABLE_CLD_166_166);
    }
    {
      ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ll_backend__disj_gen__LaterZombies_56, ll_backend__disj_gen__STATE_VARIABLE_CLD_166_166, &ll_backend__disj_gen__STATE_VARIABLE_CLD_167_167);
    }
    {
      ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__disj_gen__StoreMap_14, ll_backend__disj_gen__Liveness_16, ll_backend__disj_gen__MaybeEnd1_41, &ll_backend__disj_gen__MaybeEnd_57, &ll_backend__disj_gen__LaterBranchEndCode_58, *ll_backend__disj_gen__STATE_VARIABLE_CI_62, ll_backend__disj_gen__STATE_VARIABLE_CLD_167_167);
    }
    {
      ll_backend__code_loc_dep__after_all_branches_4_p_0(ll_backend__disj_gen__StoreMap_14, ll_backend__disj_gen__MaybeEnd_57, *ll_backend__disj_gen__STATE_VARIABLE_CI_62, ll_backend__disj_gen__STATE_VARIABLE_CLD_64);
    }
    {
      ll_backend__disj_gen__Var_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__Var_170, 1) = ((MR_Box) (ll_backend__disj_gen__EndLabel_32));
    }
    {
      ll_backend__disj_gen__Var_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_169, 0) = ((MR_Box) (ll_backend__disj_gen__Var_170));
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Var_169, 1) = ((MR_Box) ((MR_String) "end of lookup disj"));
    }
    {
      ll_backend__disj_gen__EndLabelCode_59 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ((MR_Box) (ll_backend__disj_gen__Var_169)));
    }
    {
      ll_backend__disj_gen__Comment_60 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ((MR_Box) (&ll_backend__disj_gen_scalar_common_1[12])));
    }
    {
      ll_backend__disj_gen__Var_193 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__LaterBranchEndCode_58, ll_backend__disj_gen__EndLabelCode_59);
    }
    {
      ll_backend__disj_gen__Var_192 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__LaterFlushResumeVarsCode_55, ll_backend__disj_gen__Var_193);
    }
    {
      ll_backend__disj_gen__Var_191 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__AfterUndoLabelCode_53, ll_backend__disj_gen__Var_192);
    }
    {
      ll_backend__disj_gen__Var_190 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__UndoHijackCode_52, ll_backend__disj_gen__Var_191);
    }
    {
      ll_backend__disj_gen__Var_189 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__TestMoreSolnsCode_51, ll_backend__disj_gen__Var_190);
    }
    {
      ll_backend__disj_gen__Var_188 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__RestoreHpCode_46, ll_backend__disj_gen__Var_189);
    }
    {
      ll_backend__disj_gen__Var_187 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__RestoreTicketCode_45, ll_backend__disj_gen__Var_188);
    }
    {
      ll_backend__disj_gen__Var_186 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__ResumePointCode_44, ll_backend__disj_gen__Var_187);
    }
    {
      ll_backend__disj_gen__Var_185 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__GotoEndCode_43, ll_backend__disj_gen__Var_186);
    }
    {
      ll_backend__disj_gen__Var_184 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__FirstBranchEndCode_42, ll_backend__disj_gen__Var_185);
    }
    {
      ll_backend__disj_gen__Var_183 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__FirstFlushResumeVarsCode_39, ll_backend__disj_gen__Var_184);
    }
    {
      ll_backend__disj_gen__Var_182 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__UpdateRedoipCode_38, ll_backend__disj_gen__Var_183);
    }
    {
      ll_backend__disj_gen__Var_181 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__PrepareHijackCode_25, ll_backend__disj_gen__Var_182);
    }
    {
      ll_backend__disj_gen__Var_180 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__SaveHpCode_22, ll_backend__disj_gen__Var_181);
    }
    {
      ll_backend__disj_gen__Var_179 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__SaveTicketCode_20, ll_backend__disj_gen__Var_180);
    }
    {
      ll_backend__disj_gen__Var_178 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__SaveSlotCode_35, ll_backend__disj_gen__Var_179);
    }
    {
      ll_backend__disj_gen__Var_177 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__BaseRegInitCode_34, ll_backend__disj_gen__Var_178);
    }
    {
      ll_backend__disj_gen__Var_176 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__FlushCode_19, ll_backend__disj_gen__Var_177);
    }
    {
      *ll_backend__disj_gen__Code_10 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__Comment_60, ll_backend__disj_gen__Var_176);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__disj_gen__is_lookup_disj_10_p_0(
  MR_Word ll_backend__disj_gen__AddTrailOps_11,
  MR_Word ll_backend__disj_gen__AddRegionOps_12,
  MR_Word ll_backend__disj_gen__ResumeVars_13,
  MR_Word ll_backend__disj_gen__Disjuncts_14,
  MR_Word ll_backend__disj_gen__DisjGoalInfo_15,
  MR_Word * ll_backend__disj_gen__LookupDisjInfo_16,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_52,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_53,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_54,
  MR_Word * ll_backend__disj_gen__AfterPrepPos_19)
{
  {
    MR_bool ll_backend__disj_gen__succeeded = ((MR_tag((MR_Word) ll_backend__disj_gen__Disjuncts_14)) == (MR_mktag((MR_Integer) 1)));
    MR_Word ll_backend__disj_gen__TypeCtorInfo_75_75;
    MR_Word ll_backend__disj_gen__FirstDisjunct_20;
    MR_Word ll_backend__disj_gen__LaterDisjuncts_21;
    MR_Word ll_backend__disj_gen__DisjNonLocals_25;
    MR_Word ll_backend__disj_gen__MaybeTraceInfo_26;
    MR_Word ll_backend__disj_gen__Globals_27;
    MR_Word ll_backend__disj_gen__OutVars_28;
    MR_Word ll_backend__disj_gen__VarTypes_29;
    MR_Word ll_backend__disj_gen__OutTypes_30;
    MR_Word ll_backend__disj_gen__ResumeMap_31;
    MR_Word ll_backend__disj_gen__FlushCode_32;
    MR_Word ll_backend__disj_gen__CurSlot_33;
    MR_Word ll_backend__disj_gen__SaveTicketCode_34;
    MR_Word ll_backend__disj_gen__MaybeTicketSlot_35;
    MR_Word ll_backend__disj_gen__ReclaimHeap_36;
    MR_Word ll_backend__disj_gen__SaveHpCode_37;
    MR_Word ll_backend__disj_gen__MaybeHpSlot_38;
    MR_Word ll_backend__disj_gen__HijackInfo_39;
    MR_Word ll_backend__disj_gen__PrepareHijackCode_40;
    MR_Word ll_backend__disj_gen__StoreMap_41;
    MR_Word ll_backend__disj_gen__DisjStart_42;
    MR_Word ll_backend__disj_gen__FirstSoln_43;
    MR_Word ll_backend__disj_gen__MaybeEnd1_44;
    MR_Word ll_backend__disj_gen__Liveness_45;
    MR_Word ll_backend__disj_gen__LaterSolns_46;
    MR_Word ll_backend__disj_gen__MaybeEnd_47;
    MR_Word ll_backend__disj_gen__Solns_48;
    MR_Word ll_backend__disj_gen__ExprnOpts_49;
    MR_Word ll_backend__disj_gen__UnboxFloats_50;
    MR_Word ll_backend__disj_gen__LLDSTypes_51;
    MR_Word ll_backend__disj_gen__Var_55;
    MR_Word ll_backend__disj_gen__Var_56;
    MR_Word ll_backend__disj_gen__Var_57;
    MR_Word ll_backend__disj_gen__Var_58;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_59_59;
    MR_Word ll_backend__disj_gen__Var_60;
    MR_Word ll_backend__disj_gen__Var_61;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_62_62;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_63_63;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_64_64;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_65_65;
    MR_Word ll_backend__disj_gen__Var_66;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_67_67;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_68_68;
    MR_Word ll_backend__disj_gen__Var_69;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_70_70;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_71_71;
    MR_Word ll_backend__disj_gen__Var_72;
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_73_73;
    MR_Word ll_backend__disj_gen__Var_76;
    MR_Word ll_backend__disj_gen__Var_22;
    MR_Word ll_backend__disj_gen__Var_23;
    MR_Word ll_backend__disj_gen__Var_24;

    if (ll_backend__disj_gen__succeeded)
      {
        ll_backend__disj_gen__FirstDisjunct_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Disjuncts_14, (MR_Integer) 0)));
        ll_backend__disj_gen__LaterDisjuncts_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Disjuncts_14, (MR_Integer) 1)));
        ll_backend__disj_gen__succeeded = ((MR_tag((MR_Word) ll_backend__disj_gen__LaterDisjuncts_21)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__disj_gen__succeeded)
          {
            ll_backend__disj_gen__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__LaterDisjuncts_21, (MR_Integer) 0)));
            ll_backend__disj_gen__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__LaterDisjuncts_21, (MR_Integer) 1)));
            ll_backend__disj_gen__succeeded = ((MR_tag((MR_Word) ll_backend__disj_gen__Var_55)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__disj_gen__succeeded)
              {
                ll_backend__disj_gen__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_55, (MR_Integer) 0)));
                ll_backend__disj_gen__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Var_55, (MR_Integer) 1)));
                {
                  ll_backend__disj_gen__DisjNonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ll_backend__disj_gen__DisjGoalInfo_15);
                }
                {
                  ll_backend__disj_gen__succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(ll_backend__disj_gen__DisjNonLocals_25, ll_backend__disj_gen__FirstDisjunct_20);
                }
                if (ll_backend__disj_gen__succeeded)
                  {
                    {
                      ll_backend__disj_gen__succeeded = hlds__goal_form__all_disjuncts_are_conj_of_unify_2_p_0(ll_backend__disj_gen__DisjNonLocals_25, ll_backend__disj_gen__LaterDisjuncts_21);
                    }
                    if (ll_backend__disj_gen__succeeded)
                      {
                        {
                          ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_52, &ll_backend__disj_gen__MaybeTraceInfo_26);
                        }
                        ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__MaybeTraceInfo_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (ll_backend__disj_gen__succeeded)
                          {
                            {
                              ll_backend__code_info__get_globals_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_52, &ll_backend__disj_gen__Globals_27);
                            }
                            ll_backend__disj_gen__Var_56 = (MR_Integer) 455;
                            ll_backend__disj_gen__Var_57 = (MR_Integer) 1;
                            {
                              ll_backend__disj_gen__succeeded = libs__globals__lookup_bool_option_3_p_1(ll_backend__disj_gen__Globals_27, ll_backend__disj_gen__Var_56, ll_backend__disj_gen__Var_57);
                            }
                            if (ll_backend__disj_gen__succeeded)
                              {
                                ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__AddRegionOps_12 == (MR_Integer) 1);
                                if (ll_backend__disj_gen__succeeded)
                                  {
                                    {
                                      ll_backend__lookup_util__figure_out_output_vars_4_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_52, ll_backend__disj_gen__STATE_VARIABLE_CLD_0_54, ll_backend__disj_gen__DisjGoalInfo_15, &ll_backend__disj_gen__OutVars_28);
                                    }
                                    {
                                      ll_backend__code_info__get_vartypes_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_52, &ll_backend__disj_gen__VarTypes_29);
                                    }
                                    {
                                      hlds__vartypes__lookup_var_types_3_p_0(ll_backend__disj_gen__VarTypes_29, ll_backend__disj_gen__OutVars_28, &ll_backend__disj_gen__OutTypes_30);
                                    }
                                    ll_backend__disj_gen__TypeCtorInfo_75_75 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                                    {
                                      ll_backend__disj_gen__Var_58 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_75_75, ll_backend__disj_gen__ResumeVars_13);
                                    }
                                    {
                                      ll_backend__code_loc_dep__produce_vars_6_p_0(ll_backend__disj_gen__Var_58, &ll_backend__disj_gen__ResumeMap_31, &ll_backend__disj_gen__FlushCode_32, ll_backend__disj_gen__STATE_VARIABLE_CI_0_52, ll_backend__disj_gen__STATE_VARIABLE_CLD_0_54, &ll_backend__disj_gen__STATE_VARIABLE_CLD_59_59);
                                    }
                                    ll_backend__disj_gen__Var_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
                                    ll_backend__disj_gen__Var_61 = (MR_Integer) 1;
                                    {
                                      ll_backend__code_loc_dep__acquire_temp_slot_7_p_0(ll_backend__disj_gen__Var_60, ll_backend__disj_gen__Var_61, &ll_backend__disj_gen__CurSlot_33, ll_backend__disj_gen__STATE_VARIABLE_CI_0_52, &ll_backend__disj_gen__STATE_VARIABLE_CI_62_62, ll_backend__disj_gen__STATE_VARIABLE_CLD_59_59, &ll_backend__disj_gen__STATE_VARIABLE_CLD_63_63);
                                    }
                                    {
                                      ll_backend__code_loc_dep__maybe_save_ticket_7_p_0(ll_backend__disj_gen__AddTrailOps_11, &ll_backend__disj_gen__SaveTicketCode_34, &ll_backend__disj_gen__MaybeTicketSlot_35, ll_backend__disj_gen__STATE_VARIABLE_CI_62_62, &ll_backend__disj_gen__STATE_VARIABLE_CI_64_64, ll_backend__disj_gen__STATE_VARIABLE_CLD_63_63, &ll_backend__disj_gen__STATE_VARIABLE_CLD_65_65);
                                    }
                                    {
                                      ll_backend__code_info__get_globals_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_64_64, &ll_backend__disj_gen__Var_76);
                                    }
                                    {
                                      ll_backend__disj_gen__succeeded = libs__globals____Unify____globals_0_0(ll_backend__disj_gen__Globals_27, ll_backend__disj_gen__Var_76);
                                    }
                                    if (ll_backend__disj_gen__succeeded)
                                      {
                                        ll_backend__disj_gen__Var_66 = (MR_Integer) 311;
                                        {
                                          libs__globals__lookup_bool_option_3_p_0(ll_backend__disj_gen__Globals_27, ll_backend__disj_gen__Var_66, &ll_backend__disj_gen__ReclaimHeap_36);
                                        }
                                        {
                                          ll_backend__code_loc_dep__maybe_save_hp_7_p_0(ll_backend__disj_gen__ReclaimHeap_36, &ll_backend__disj_gen__SaveHpCode_37, &ll_backend__disj_gen__MaybeHpSlot_38, ll_backend__disj_gen__STATE_VARIABLE_CI_64_64, &ll_backend__disj_gen__STATE_VARIABLE_CI_67_67, ll_backend__disj_gen__STATE_VARIABLE_CLD_65_65, &ll_backend__disj_gen__STATE_VARIABLE_CLD_68_68);
                                        }
                                        ll_backend__disj_gen__Var_69 = (MR_Integer) 2;
                                        {
                                          ll_backend__code_loc_dep__prepare_for_disj_hijack_7_p_0(ll_backend__disj_gen__Var_69, &ll_backend__disj_gen__HijackInfo_39, &ll_backend__disj_gen__PrepareHijackCode_40, ll_backend__disj_gen__STATE_VARIABLE_CI_67_67, &ll_backend__disj_gen__STATE_VARIABLE_CI_70_70, ll_backend__disj_gen__STATE_VARIABLE_CLD_68_68, &ll_backend__disj_gen__STATE_VARIABLE_CLD_71_71);
                                        }
                                        {
                                          ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CLD_71_71, ll_backend__disj_gen__AfterPrepPos_19);
                                        }
                                        {
                                          hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__disj_gen__DisjGoalInfo_15, &ll_backend__disj_gen__StoreMap_41);
                                        }
                                        {
                                          ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CLD_71_71, &ll_backend__disj_gen__DisjStart_42);
                                        }
                                        ll_backend__disj_gen__Var_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                        {
                                          ll_backend__disj_gen__succeeded = ll_backend__lookup_util__generate_constants_for_disjunct_10_p_0(ll_backend__disj_gen__DisjStart_42, ll_backend__disj_gen__FirstDisjunct_20, ll_backend__disj_gen__OutVars_28, ll_backend__disj_gen__StoreMap_41, &ll_backend__disj_gen__FirstSoln_43, ll_backend__disj_gen__Var_72, &ll_backend__disj_gen__MaybeEnd1_44, &ll_backend__disj_gen__Liveness_45, ll_backend__disj_gen__STATE_VARIABLE_CI_70_70, &ll_backend__disj_gen__STATE_VARIABLE_CI_73_73);
                                        }
                                        if (ll_backend__disj_gen__succeeded)
                                          {
                                            {
                                              ll_backend__disj_gen__succeeded = ll_backend__lookup_util__generate_constants_for_disjuncts_9_p_0(ll_backend__disj_gen__DisjStart_42, ll_backend__disj_gen__LaterDisjuncts_21, ll_backend__disj_gen__OutVars_28, ll_backend__disj_gen__StoreMap_41, &ll_backend__disj_gen__LaterSolns_46, ll_backend__disj_gen__MaybeEnd1_44, &ll_backend__disj_gen__MaybeEnd_47, ll_backend__disj_gen__STATE_VARIABLE_CI_73_73, ll_backend__disj_gen__STATE_VARIABLE_CI_53);
                                            }
                                            if (ll_backend__disj_gen__succeeded)
                                              {
                                                {
                                                  ll_backend__disj_gen__Solns_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Solns_48, 0) = ((MR_Box) (ll_backend__disj_gen__FirstSoln_43));
                                                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Solns_48, 1) = ((MR_Box) (ll_backend__disj_gen__LaterSolns_46));
                                                }
                                                {
                                                  ll_backend__code_info__get_exprn_opts_2_p_0(*ll_backend__disj_gen__STATE_VARIABLE_CI_53, &ll_backend__disj_gen__ExprnOpts_49);
                                                }
                                                {
                                                  ll_backend__disj_gen__UnboxFloats_50 = ll_backend__llds__get_unboxed_floats_1_f_0(ll_backend__disj_gen__ExprnOpts_49);
                                                }
                                                {
                                                  ll_backend__disj_gen__succeeded = ll_backend__global_data__find_general_llds_types_4_p_0(ll_backend__disj_gen__UnboxFloats_50, ll_backend__disj_gen__OutTypes_30, ll_backend__disj_gen__Solns_48, &ll_backend__disj_gen__LLDSTypes_51);
                                                }
                                                if (ll_backend__disj_gen__succeeded)
                                                  {
                                                    {
                                                      MR_Word base;
                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
                                                      *ll_backend__disj_gen__LookupDisjInfo_16 = base;
                                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__disj_gen__OutVars_28));
                                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__disj_gen__StoreMap_41));
                                                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__disj_gen__MaybeEnd_47));
                                                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__disj_gen__Liveness_45));
                                                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__disj_gen__CurSlot_33));
                                                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__disj_gen__ResumeMap_31));
                                                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__disj_gen__FlushCode_32));
                                                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__disj_gen__SaveTicketCode_34));
                                                      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__disj_gen__MaybeTicketSlot_35));
                                                      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__disj_gen__SaveHpCode_37));
                                                      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ll_backend__disj_gen__MaybeHpSlot_38));
                                                      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ll_backend__disj_gen__HijackInfo_39));
                                                      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ll_backend__disj_gen__PrepareHijackCode_40));
                                                      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ll_backend__disj_gen__Solns_48));
                                                      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (ll_backend__disj_gen__LLDSTypes_51));
                                                    }
                                                    ll_backend__disj_gen__succeeded = MR_TRUE;
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return ll_backend__disj_gen__succeeded;
  }
}

void MR_CALL 
ll_backend__disj_gen__generate_disj_8_p_0(
  MR_Word ll_backend__disj_gen__CodeModel_9,
  MR_Word ll_backend__disj_gen__Goals_10,
  MR_Word ll_backend__disj_gen__DisjGoalInfo_11,
  MR_Word * ll_backend__disj_gen__Code_12,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_28,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_29,
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_30,
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_31)
{
  {
    MR_bool ll_backend__disj_gen__succeeded;

    if ((ll_backend__disj_gen__Goals_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      switch (ll_backend__disj_gen__CodeModel_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.disj_gen", (MR_String) "predicate \140ll_backend.disj_gen.generate_disj\'/8", (MR_String) "empty disjunction");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ll_backend__disj_gen__BeforeFailure_15;

            {
              ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CLD_0_30, &ll_backend__disj_gen__BeforeFailure_15);
            }
            {
              ll_backend__code_loc_dep__generate_failure_4_p_0(ll_backend__disj_gen__Code_12, ll_backend__disj_gen__STATE_VARIABLE_CI_0_28, ll_backend__disj_gen__STATE_VARIABLE_CI_29, ll_backend__disj_gen__STATE_VARIABLE_CLD_0_30);
            }
            {
              ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__disj_gen__BeforeFailure_15, *ll_backend__disj_gen__STATE_VARIABLE_CI_29, ll_backend__disj_gen__STATE_VARIABLE_CLD_31);
            }
          }
          break;
      }
    else
      {
        MR_Word ll_backend__disj_gen__Goal_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Goals_10, (MR_Integer) 0)));
        MR_Word ll_backend__disj_gen__GoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Goal_16, (MR_Integer) 1)));
        MR_Word ll_backend__disj_gen__Resume_20;
        MR_Word ll_backend__disj_gen__ResumeVars_23;
        MR_Word ll_backend__disj_gen__AddTrailOps_24;
        MR_Word ll_backend__disj_gen__AddRegionOps_25;
        MR_Word ll_backend__disj_gen__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Goals_10, (MR_Integer) 1)));
        MR_Word ll_backend__disj_gen__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Goal_16, (MR_Integer) 0)));
        MR_Word ll_backend__disj_gen__LookupDisjInfo_26;
        MR_Word ll_backend__disj_gen__AfterPrepPos_27;
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_32_32;

        {
          hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__disj_gen__GoalInfo_19, &ll_backend__disj_gen__Resume_20);
        }
        if ((ll_backend__disj_gen__Resume_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              ll_backend__disj_gen__ResumeVars_23 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            }
          }
        else
          {
            MR_Word ll_backend__disj_gen__Var_22;

            ll_backend__disj_gen__ResumeVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Resume_20, (MR_Integer) 0)));
            ll_backend__disj_gen__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Resume_20, (MR_Integer) 1)));
          }
        {
          ll_backend__disj_gen__AddTrailOps_24 = ll_backend__code_info__should_add_trail_ops_2_f_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_28, ll_backend__disj_gen__GoalInfo_19);
        }
        {
          ll_backend__disj_gen__AddRegionOps_25 = ll_backend__code_info__should_add_region_ops_2_f_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_28, ll_backend__disj_gen__GoalInfo_19);
        }
        ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__CodeModel_9 == (MR_Integer) 2);
        if (ll_backend__disj_gen__succeeded)
          {
            ll_backend__disj_gen__succeeded = ll_backend__disj_gen__is_lookup_disj_10_p_0(ll_backend__disj_gen__AddTrailOps_24, ll_backend__disj_gen__AddRegionOps_25, ll_backend__disj_gen__ResumeVars_23, ll_backend__disj_gen__Goals_10, ll_backend__disj_gen__DisjGoalInfo_11, &ll_backend__disj_gen__LookupDisjInfo_26, ll_backend__disj_gen__STATE_VARIABLE_CI_0_28, &ll_backend__disj_gen__STATE_VARIABLE_CI_32_32, ll_backend__disj_gen__STATE_VARIABLE_CLD_0_30, &ll_backend__disj_gen__AfterPrepPos_27);
          }
        if (ll_backend__disj_gen__succeeded)
          {
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_33_33;

            {
              ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__disj_gen__AfterPrepPos_27, ll_backend__disj_gen__STATE_VARIABLE_CI_32_32, &ll_backend__disj_gen__STATE_VARIABLE_CLD_33_33);
            }
            {
              ll_backend__disj_gen__generate_lookup_disj_7_p_0(ll_backend__disj_gen__ResumeVars_23, ll_backend__disj_gen__LookupDisjInfo_26, ll_backend__disj_gen__Code_12, ll_backend__disj_gen__STATE_VARIABLE_CI_32_32, ll_backend__disj_gen__STATE_VARIABLE_CI_29, ll_backend__disj_gen__STATE_VARIABLE_CLD_33_33, ll_backend__disj_gen__STATE_VARIABLE_CLD_31);
            }
          }
        else
          {
            ll_backend__disj_gen__generate_real_disj_11_p_0(ll_backend__disj_gen__AddTrailOps_24, ll_backend__disj_gen__AddRegionOps_25, ll_backend__disj_gen__CodeModel_9, ll_backend__disj_gen__ResumeVars_23, ll_backend__disj_gen__Goals_10, ll_backend__disj_gen__DisjGoalInfo_11, ll_backend__disj_gen__Code_12, ll_backend__disj_gen__STATE_VARIABLE_CI_0_28, ll_backend__disj_gen__STATE_VARIABLE_CI_29, ll_backend__disj_gen__STATE_VARIABLE_CLD_0_30, ll_backend__disj_gen__STATE_VARIABLE_CLD_31);
          }
      }
  }
}

void mercury__ll_backend__disj_gen__init(void)
{
}

void mercury__ll_backend__disj_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__disj_gen__ll_backend__disj_gen__type_ctor_info_commit_disj_region_cleanup_0);
	MR_register_type_ctor_info(&ll_backend__disj_gen__ll_backend__disj_gen__type_ctor_info_lookup_disj_info_0);
}

void mercury__ll_backend__disj_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__disj_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.disj_gen. */
