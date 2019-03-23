/*
** Automatically generated from `disj_gen.m'
** by the Mercury compiler,
** version rotd-2019-03-22
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


// :- module ll_backend.disj_gen.
// :- implementation.

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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
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
ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__560__1_2_p_0(
  MR_Word HpSlot_75,
  MR_Word BranchHpSlot_78);

static MR_bool MR_CALL 
ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__558__1_2_p_0(
  MR_Word HpCodeInstrs_80,
  MR_Word BranchHpCodeInstrs_81);

static void MR_CALL 
ll_backend__disj_gen____Compare____lookup_disj_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____lookup_disj_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__disj_gen__generate_real_disj_11_p_0(
  MR_Word AddTrailOps_12,
  MR_Word AddRegionOps_13,
  MR_Word CodeModel_14,
  MR_Word ResumeVars_15,
  MR_Word Goals_16,
  MR_Word DisjGoalInfo_17,
  MR_Word * Code_18,
  MR_Word STATE_VARIABLE_CI_0_49,
  MR_Word * STATE_VARIABLE_CI_50,
  MR_Word STATE_VARIABLE_CLD_0_51,
  MR_Word * STATE_VARIABLE_CLD_52);

static void MR_CALL 
ll_backend__disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_9_p_0(
  MR_Word DisjRegionOps_10,
  MR_Word * BeforeEnterCode_12,
  MR_Word * LaterCode_13,
  MR_Word * LastCode_14,
  MR_Word STATE_VARIABLE_CI_0_38,
  MR_Word * STATE_VARIABLE_CI_39,
  MR_Word STATE_VARIABLE_CLD_0_40,
  MR_Word * STATE_VARIABLE_CLD_41);

static void MR_CALL 
ll_backend__disj_gen__maybe_create_disj_region_frame_semi_12_p_0(
  MR_Word DisjRegionOps_13,
  MR_Word DisjRemovedRegionVars_14,
  MR_Word DisjAllocRegionVars_15,
  MR_Word * BeforeEnterCode_16,
  MR_Word * LaterCode_17,
  MR_Word * LastCode_18,
  MR_Word * StackVars_19,
  MR_Word * RegionCommitDisjCleanup_20,
  MR_Word STATE_VARIABLE_CI_0_49,
  MR_Word * STATE_VARIABLE_CI_50,
  MR_Word STATE_VARIABLE_CLD_0_51,
  MR_Word * STATE_VARIABLE_CLD_52);

static void MR_CALL 
ll_backend__disj_gen__disj_alloc_snapshot_regions_8_p_0(
  MR_Word NumLval_1,
  MR_Word AddrLval_2,
  MR_Word EmbeddedStackFrame_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_CLD_0_7,
  MR_Word * STATE_VARIABLE_CLD_8);

static void MR_CALL 
ll_backend__disj_gen__disj_protect_regions_8_p_0(
  MR_Word NumLval_1,
  MR_Word AddrLval_2,
  MR_Word EmbeddedStackFrame_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_CLD_0_7,
  MR_Word * STATE_VARIABLE_CLD_8);

static MR_bool MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CodeModel_2,
  MR_Word FullResumeMap_3,
  MR_Word MaybeEntryResumePoint_4,
  MR_Word HijackInfo_5,
  MR_Word DisjGoalInfo_6,
  MR_Word RegionCommitDisjCleanup_7,
  MR_Word EndLabel_8,
  MR_Word ReclaimHeap_9,
  MR_Word MaybeHpSlot0_10,
  MR_Word MaybeTicketSlot_11,
  MR_Word LaterRegionCode_12,
  MR_Word LastRegionCode_13,
  MR_Word BranchStart0_14,
  MR_Word MaybeEnd0_15,
  MR_Word * MaybeEnd_16,
  MR_Word * Code_17,
  MR_Word STATE_VARIABLE_CI_0_18,
  MR_Word * STATE_VARIABLE_CI_19);

static void MR_CALL 
ll_backend__disj_gen__generate_lookup_disj_7_p_0(
  MR_Word ResumeVars_8,
  MR_Word LookupDisjInfo_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_CI_0_61,
  MR_Word * STATE_VARIABLE_CI_62,
  MR_Word STATE_VARIABLE_CLD_0_63,
  MR_Word * STATE_VARIABLE_CLD_64);

static MR_bool MR_CALL 
ll_backend__disj_gen__is_lookup_disj_10_p_0(
  MR_Word AddTrailOps_11,
  MR_Word AddRegionOps_12,
  MR_Word ResumeVars_13,
  MR_Word Disjuncts_14,
  MR_Word DisjGoalInfo_15,
  MR_Word * LookupDisjInfo_16,
  MR_Word STATE_VARIABLE_CI_0_53,
  MR_Word * STATE_VARIABLE_CI_54,
  MR_Word STATE_VARIABLE_CLD_0_55,
  MR_Word * AfterPrepPos_19);

static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____lookup_disj_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__disj_gen____Compare____lookup_disj_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_1[13][2];

static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_2[1][3];

static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_3[4][1];

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
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__disj_gen_scalar_common_1[0]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__disj_gen_scalar_common_3[1])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Unsigned) 15U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__disj_gen_scalar_common_3[3]))),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__disj_gen_scalar_common_1[1])),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0))
  },
};

static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0)))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "lookup disj"))
  },
};

static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__disj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__disj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
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
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)
  }
};

static const MR_DuFunctorDesc ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_0 = {
  (MR_String) "no_commit_disj_region_cleanup",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__disj_gen__ll_backend__disj_gen__field_types_commit_disj_region_cleanup_0_1[2] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__disj_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0)
};

static const MR_ConstString ll_backend__disj_gen__ll_backend__disj_gen__field_names_commit_disj_region_cleanup_0_1[2] = {
  (MR_String) "cleanup_label",
  (MR_String) "cleanup_code"
};

static const MR_DuFunctorDesc ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_1 = {
  (MR_String) "commit_disj_region_cleanup",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__disj_gen__ll_backend__disj_gen__field_types_commit_disj_region_cleanup_0_1,
  ll_backend__disj_gen__ll_backend__disj_gen__field_names_commit_disj_region_cleanup_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_0[1] = {
  &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_0
};

static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_1[1] = {
  &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_1
};

static const MR_DuPtagLayout ll_backend__disj_gen__ll_backend__disj_gen__du_ptag_ordered_commit_disj_region_cleanup_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0_10001)),
  ((MR_Box) (ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0_10001)),
  (MR_String) "ll_backend.disj_gen",
  (MR_String) "commit_disj_region_cleanup",
  {     ll_backend__disj_gen__ll_backend__disj_gen__du_name_ordered_commit_disj_region_cleanup_0 },
  {     ll_backend__disj_gen__ll_backend__disj_gen__du_ptag_ordered_commit_disj_region_cleanup_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ll_backend__disj_gen__ll_backend__disj_gen__functor_number_map_commit_disj_region_cleanup_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__disj_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__maybe__ti_maybe_1ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__disj_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&ll_backend__disj_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1list__ti_list_1ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__disj_gen__ll_backend__disj_gen__field_types_lookup_disj_info_0_0[15] = {
  (MR_PseudoTypeInfo) (&ll_backend__disj_gen__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__disj_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0),
  (MR_PseudoTypeInfo) (&ll_backend__disj_gen__maybe__ti_maybe_1ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__disj_gen__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__disj_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__disj_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__disj_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__disj_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__disj_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__disj_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_disj_hijack_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__disj_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__disj_gen__list__ti_list_1list__ti_list_1ll_backend__llds__type_ctor_info_rval_0),
  (MR_PseudoTypeInfo) (&ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0)
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
  INT16_C(15),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__disj_gen__ll_backend__disj_gen__field_types_lookup_disj_info_0_0,
  ll_backend__disj_gen__ll_backend__disj_gen__field_names_lookup_disj_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_lookup_disj_info_0_0[1] = {
  &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_lookup_disj_info_0_0
};

static const MR_DuPtagLayout ll_backend__disj_gen__ll_backend__disj_gen__du_ptag_ordered_lookup_disj_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_lookup_disj_info_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__disj_gen____Unify____lookup_disj_info_0_0_10001)),
  ((MR_Box) (ll_backend__disj_gen____Compare____lookup_disj_info_0_0_10001)),
  (MR_String) "ll_backend.disj_gen",
  (MR_String) "lookup_disj_info",
  {     ll_backend__disj_gen__ll_backend__disj_gen__du_name_ordered_lookup_disj_info_0 },
  {     ll_backend__disj_gen__ll_backend__disj_gen__du_ptag_ordered_lookup_disj_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__disj_gen__ll_backend__disj_gen__functor_number_map_lookup_disj_info_0
};

static MR_bool MR_CALL 
ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__560__1_2_p_0(
  MR_Word HpSlot_75,
  MR_Word BranchHpSlot_78)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__llds____Unify____lval_0_0(HpSlot_75, BranchHpSlot_78);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__558__1_2_p_0(
  MR_Word HpCodeInstrs_80,
  MR_Word BranchHpCodeInstrs_81)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[2]), ((MR_Box) (HpCodeInstrs_80)), ((MR_Box) (BranchHpCodeInstrs_81)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__disj_gen____Compare____lookup_disj_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_48 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_49 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_48 == CastY_49);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
      MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))));
      MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 11))));
      MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
      MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 12))));
      MR_Word ArgX14_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))));
      MR_Word ArgY14_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 13))));
      MR_Word ArgX15_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))));
      MR_Word ArgY15_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_2[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[5]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[6]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              ll_backend__llds____Compare____lval_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_map_0), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[3]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;

                    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[3]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                    succeeded = (SubResult8_27 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;

                      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[7]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                      succeeded = (SubResult9_30 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                      {
                        MR_Word SubResult10_33;

                        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[3]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                        succeeded = (SubResult10_33 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult10_33;
                        else
                        {
                          MR_Word SubResult11_36;

                          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[7]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                          succeeded = (SubResult11_36 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult11_36;
                          else
                          {
                            MR_Word SubResult12_39;

                            ll_backend__code_loc_dep____Compare____disj_hijack_info_0_0(&SubResult12_39, ArgX12_37, ArgY12_38);
                            succeeded = (SubResult12_39 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult12_39;
                            else
                            {
                              MR_Word SubResult13_42;

                              mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[3]), &SubResult13_42, ((MR_Box) (ArgX13_40)), ((MR_Box) (ArgY13_41)));
                              succeeded = (SubResult13_42 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult13_42;
                              else
                              {
                                MR_Word SubResult14_45;

                                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[8]), &SubResult14_45, ((MR_Box) (ArgX14_43)), ((MR_Box) (ArgY14_44)));
                                succeeded = (SubResult14_45 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult14_45;
                                else
                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (ArgX15_46)), ((MR_Box) (ArgY15_47)));
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_33 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_34 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_33 == CastY_34);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_36_36;
      MR_Word TypeInfo_37_37;
      MR_Word TypeInfo_38_38;
      MR_Word TypeCtorInfo_40_40;
      MR_Word TypeInfo_41_41;
      MR_Word TypeInfo_42_42;
      MR_Word TypeInfo_43_43;
      MR_Word TypeInfo_44_44;
      MR_Word TypeInfo_45_45;
      MR_Word TypeInfo_47_47;
      MR_Word TypeInfo_48_48;
      MR_Word TypeInfo_49_49;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
      MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))));
      MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 11))));
      MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 12))));
      MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
      MR_Word ArgX14_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 13))));
      MR_Word ArgY14_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))));
      MR_Word ArgX15_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14))));
      MR_Word ArgY15_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_36_36 = (MR_Word) (&ll_backend__disj_gen_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_36, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_37_37 = (MR_Word) (&ll_backend__disj_gen_scalar_common_1[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_37_37, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_38_38 = (MR_Word) (&ll_backend__disj_gen_scalar_common_1[6]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_38, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              succeeded = ll_backend__llds____Unify____lval_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                TypeCtorInfo_40_40 = (MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_map_0);
                succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_40_40, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_41_41 = (MR_Word) (&ll_backend__disj_gen_scalar_common_1[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_41, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_42_42 = (MR_Word) (&ll_backend__disj_gen_scalar_common_1[3]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_42, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      TypeInfo_43_43 = (MR_Word) (&ll_backend__disj_gen_scalar_common_1[7]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_43_43, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                      if (succeeded)
                      {
                        TypeInfo_44_44 = (MR_Word) (&ll_backend__disj_gen_scalar_common_1[3]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                        if (succeeded)
                        {
                          TypeInfo_45_45 = (MR_Word) (&ll_backend__disj_gen_scalar_common_1[7]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                          if (succeeded)
                          {
                            succeeded = ll_backend__code_loc_dep____Unify____disj_hijack_info_0_0(ArgX12_25, ArgY12_26);
                            if (succeeded)
                            {
                              TypeInfo_47_47 = (MR_Word) (&ll_backend__disj_gen_scalar_common_1[3]);
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (ArgX13_27)), ((MR_Box) (ArgY13_28)));
                              if (succeeded)
                              {
                                TypeInfo_48_48 = (MR_Word) (&ll_backend__disj_gen_scalar_common_1[8]);
                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_48_48, ((MR_Box) (ArgX14_29)), ((MR_Box) (ArgY14_30)));
                                if (succeeded)
                                {
                                  TypeInfo_49_49 = (MR_Word) (&ll_backend__disj_gen_scalar_common_1[9]);
                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_49_49, ((MR_Box) (ArgX15_31)), ((MR_Box) (ArgY15_32)));
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
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_10;

        ll_backend__llds____Compare____label_0_0(&SubResult1_10, Var_18, ArgY1_9);
        succeeded = (SubResult1_10 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_10;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY2_12)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = ll_backend__llds____Unify____label_0_0(ArgX1_5, ArgY1_6);
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) (&ll_backend__disj_gen_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__disj_gen__generate_disj_8_p_0(
  MR_Word CodeModel_9,
  MR_Word Goals_10,
  MR_Word DisjGoalInfo_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_CI_0_28,
  MR_Word * STATE_VARIABLE_CI_29,
  MR_Word STATE_VARIABLE_CLD_0_30,
  MR_Word * STATE_VARIABLE_CLD_31)
{
  {
    MR_bool succeeded;

    if ((Goals_10 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (CodeModel_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.disj_gen.generate_disj\'/8", (MR_String) "empty disjunction");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word BeforeFailure_15;

            ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_0_30, &BeforeFailure_15);
            ll_backend__code_loc_dep__generate_failure_4_p_0(Code_12, STATE_VARIABLE_CI_0_28, STATE_VARIABLE_CI_29, STATE_VARIABLE_CLD_0_30);
            ll_backend__code_loc_dep__reset_to_position_3_p_0(BeforeFailure_15, *STATE_VARIABLE_CI_29, STATE_VARIABLE_CLD_31);
          }
          break;
      }
    else
    {
      MR_Word Goal_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_10, (MR_Integer) 0))));
      MR_Word GoalInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_16, (MR_Integer) 1))));
      MR_Word Resume_20;
      MR_Word ResumeVars_23;
      MR_Word AddTrailOps_24;
      MR_Word AddRegionOps_25;
      MR_Word LookupDisjInfo_26;
      MR_Word AfterPrepPos_27;
      MR_Word STATE_VARIABLE_CI_32_32;

      hlds__hlds_llds__goal_info_get_resume_point_2_p_0(GoalInfo_19, &Resume_20);
      if ((Resume_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        ResumeVars_23 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      }
      else
        ResumeVars_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Resume_20, (MR_Integer) 0))));
      AddTrailOps_24 = ll_backend__code_info__should_add_trail_ops_2_f_0(STATE_VARIABLE_CI_0_28, GoalInfo_19);
      AddRegionOps_25 = ll_backend__code_info__should_add_region_ops_2_f_0(STATE_VARIABLE_CI_0_28, GoalInfo_19);
      succeeded = (CodeModel_9 == (MR_Integer) 2);
      if (succeeded)
        succeeded = ll_backend__disj_gen__is_lookup_disj_10_p_0(AddTrailOps_24, AddRegionOps_25, ResumeVars_23, Goals_10, DisjGoalInfo_11, &LookupDisjInfo_26, STATE_VARIABLE_CI_0_28, &STATE_VARIABLE_CI_32_32, STATE_VARIABLE_CLD_0_30, &AfterPrepPos_27);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_CLD_33_33;

        ll_backend__code_loc_dep__reset_to_position_3_p_0(AfterPrepPos_27, STATE_VARIABLE_CI_32_32, &STATE_VARIABLE_CLD_33_33);
        ll_backend__disj_gen__generate_lookup_disj_7_p_0(ResumeVars_23, LookupDisjInfo_26, Code_12, STATE_VARIABLE_CI_32_32, STATE_VARIABLE_CI_29, STATE_VARIABLE_CLD_33_33, STATE_VARIABLE_CLD_31);
      }
      else
        ll_backend__disj_gen__generate_real_disj_11_p_0(AddTrailOps_24, AddRegionOps_25, CodeModel_9, ResumeVars_23, Goals_10, DisjGoalInfo_11, Code_12, STATE_VARIABLE_CI_0_28, STATE_VARIABLE_CI_29, STATE_VARIABLE_CLD_0_30, STATE_VARIABLE_CLD_31);
    }
  }
}

static void MR_CALL 
ll_backend__disj_gen__generate_real_disj_11_p_0(
  MR_Word AddTrailOps_12,
  MR_Word AddRegionOps_13,
  MR_Word CodeModel_14,
  MR_Word ResumeVars_15,
  MR_Word Goals_16,
  MR_Word DisjGoalInfo_17,
  MR_Word * Code_18,
  MR_Word STATE_VARIABLE_CI_0_49,
  MR_Word * STATE_VARIABLE_CI_50,
  MR_Word STATE_VARIABLE_CLD_0_51,
  MR_Word * STATE_VARIABLE_CLD_52)
{
  {
    MR_bool succeeded;
    MR_Word ResumeMap_21;
    MR_Word FlushCode_22;
    MR_Word Globals_23;
    MR_Word SaveTicketCode_24;
    MR_Word MaybeTicketSlot_25;
    MR_Word ReclaimHeap_26;
    MR_Word SaveHpCode_27;
    MR_Word MaybeHpSlot_28;
    MR_Word BeforeEnterRegionCode_29;
    MR_Word LaterRegionCode_30;
    MR_Word LastRegionCode_31;
    MR_Word RegionStackVarsToRelease_32;
    MR_Word RegionCommitDisjCleanup_33;
    MR_Word HijackInfo_42;
    MR_Word PrepareHijackCode_43;
    MR_Word EndLabel_44;
    MR_Word BranchStart_45;
    MR_Word MaybeEnd_46;
    MR_Word GoalsCode_47;
    MR_Word StoreMap_48;
    MR_Word Var_53;
    MR_Word STATE_VARIABLE_CLD_54_54;
    MR_Word STATE_VARIABLE_CI_55_55;
    MR_Word STATE_VARIABLE_CLD_56_56;
    MR_Word STATE_VARIABLE_CI_65_65;
    MR_Word STATE_VARIABLE_CLD_66_66;
    MR_Word STATE_VARIABLE_CI_67_67;
    MR_Word STATE_VARIABLE_CLD_68_68;
    MR_Word STATE_VARIABLE_CI_69_69;
    MR_Word STATE_VARIABLE_CI_72_72;
    MR_Word STATE_VARIABLE_CLD_73_73;
    MR_Word STATE_VARIABLE_CLD_76_76;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;

    Var_53 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars_15);
    ll_backend__code_loc_dep__produce_vars_6_p_0(Var_53, &ResumeMap_21, &FlushCode_22, STATE_VARIABLE_CI_0_49, STATE_VARIABLE_CLD_0_51, &STATE_VARIABLE_CLD_54_54);
    ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_49, &Globals_23);
    ll_backend__code_loc_dep__maybe_save_ticket_7_p_0(AddTrailOps_12, &SaveTicketCode_24, &MaybeTicketSlot_25, STATE_VARIABLE_CI_0_49, &STATE_VARIABLE_CI_55_55, STATE_VARIABLE_CLD_54_54, &STATE_VARIABLE_CLD_56_56);
    switch (CodeModel_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word MaybeRbmmInfo_34;

          libs__globals__lookup_bool_option_3_p_0(Globals_23, (MR_Integer) 326, &ReclaimHeap_26);
          SaveHpCode_27 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          MaybeHpSlot_28 = (MR_Word) ((MR_Unsigned) 0U);
          MaybeRbmmInfo_34 = hlds__hlds_goal__goal_info_get_maybe_rbmm_1_f_0(DisjGoalInfo_17);
          if ((MaybeRbmmInfo_34 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            BeforeEnterRegionCode_29 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            LaterRegionCode_30 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            LastRegionCode_31 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            RegionStackVarsToRelease_32 = (MR_Word) ((MR_Unsigned) 0U);
            RegionCommitDisjCleanup_33 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_CI_65_65 = STATE_VARIABLE_CI_55_55;
            STATE_VARIABLE_CLD_66_66 = STATE_VARIABLE_CLD_56_56;
          }
          else
          {
            MR_Word RbmmInfo_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRbmmInfo_34, (MR_Integer) 0))));
            MR_Word DisjCreatedRegionVars_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RbmmInfo_35, (MR_Integer) 0))));
            MR_Word DisjRemovedRegionVars_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RbmmInfo_35, (MR_Integer) 1))));
            MR_Word DisjAllocRegionVars_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RbmmInfo_35, (MR_Integer) 3))));

            succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[1]), DisjCreatedRegionVars_36);
            if (succeeded)
            {
              succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[1]), DisjRemovedRegionVars_37);
              if (succeeded)
                succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[1]), DisjAllocRegionVars_39);
            }
            if (succeeded)
            {
              BeforeEnterRegionCode_29 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              LaterRegionCode_30 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              LastRegionCode_31 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              RegionStackVarsToRelease_32 = (MR_Word) ((MR_Unsigned) 0U);
              RegionCommitDisjCleanup_33 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_CLD_66_66 = STATE_VARIABLE_CLD_56_56;
              STATE_VARIABLE_CI_65_65 = STATE_VARIABLE_CI_55_55;
            }
            else
            {
              MR_Word Var_58;
              MR_Word Var_59;

              Var_58 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DisjRemovedRegionVars_37);
              Var_59 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DisjAllocRegionVars_39);
              ll_backend__disj_gen__maybe_create_disj_region_frame_semi_12_p_0(AddRegionOps_13, Var_58, Var_59, &BeforeEnterRegionCode_29, &LaterRegionCode_30, &LastRegionCode_31, &RegionStackVarsToRelease_32, &RegionCommitDisjCleanup_33, STATE_VARIABLE_CI_55_55, &STATE_VARIABLE_CI_65_65, STATE_VARIABLE_CLD_56_56, &STATE_VARIABLE_CLD_66_66);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word STATE_VARIABLE_CI_63_63;
          MR_Word STATE_VARIABLE_CLD_64_64;

          libs__globals__lookup_bool_option_3_p_0(Globals_23, (MR_Integer) 327, &ReclaimHeap_26);
          ll_backend__code_loc_dep__maybe_save_hp_7_p_0(ReclaimHeap_26, &SaveHpCode_27, &MaybeHpSlot_28, STATE_VARIABLE_CI_55_55, &STATE_VARIABLE_CI_63_63, STATE_VARIABLE_CLD_56_56, &STATE_VARIABLE_CLD_64_64);
          ll_backend__disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_9_p_0(AddRegionOps_13, &BeforeEnterRegionCode_29, &LaterRegionCode_30, &LastRegionCode_31, STATE_VARIABLE_CI_63_63, &STATE_VARIABLE_CI_65_65, STATE_VARIABLE_CLD_64_64, &STATE_VARIABLE_CLD_66_66);
          RegionStackVarsToRelease_32 = (MR_Word) ((MR_Unsigned) 0U);
          RegionCommitDisjCleanup_33 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
    ll_backend__code_loc_dep__prepare_for_disj_hijack_7_p_0(CodeModel_14, &HijackInfo_42, &PrepareHijackCode_43, STATE_VARIABLE_CI_65_65, &STATE_VARIABLE_CI_67_67, STATE_VARIABLE_CLD_66_66, &STATE_VARIABLE_CLD_68_68);
    ll_backend__code_info__get_next_label_3_p_0(&EndLabel_44, STATE_VARIABLE_CI_67_67, &STATE_VARIABLE_CI_69_69);
    ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_68_68, &BranchStart_45);
    ll_backend__disj_gen__generate_disjuncts_19_p_0(Goals_16, CodeModel_14, ResumeMap_21, (MR_Word) ((MR_Unsigned) 0U), HijackInfo_42, DisjGoalInfo_17, RegionCommitDisjCleanup_33, EndLabel_44, ReclaimHeap_26, MaybeHpSlot_28, MaybeTicketSlot_25, LaterRegionCode_30, LastRegionCode_31, BranchStart_45, (MR_Word) ((MR_Unsigned) 0U), &MaybeEnd_46, &GoalsCode_47, STATE_VARIABLE_CI_69_69, &STATE_VARIABLE_CI_72_72);
    hlds__hlds_llds__goal_info_get_store_map_2_p_0(DisjGoalInfo_17, &StoreMap_48);
    ll_backend__code_loc_dep__after_all_branches_4_p_0(StoreMap_48, MaybeEnd_46, STATE_VARIABLE_CI_72_72, &STATE_VARIABLE_CLD_73_73);
    ll_backend__code_loc_dep__release_several_temp_slots_6_p_0(RegionStackVarsToRelease_32, (MR_Integer) 1, STATE_VARIABLE_CI_72_72, STATE_VARIABLE_CI_50, STATE_VARIABLE_CLD_73_73, &STATE_VARIABLE_CLD_76_76);
    switch (CodeModel_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_CLD_52 = STATE_VARIABLE_CLD_76_76;
        break;
      case (MR_Integer) 2:
        ll_backend__code_loc_dep__set_resume_point_to_unknown_2_p_0(STATE_VARIABLE_CLD_76_76, STATE_VARIABLE_CLD_52);
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_CLD_52 = STATE_VARIABLE_CLD_76_76;
        break;
    }
    Var_81 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PrepareHijackCode_43, GoalsCode_47);
    Var_80 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BeforeEnterRegionCode_29, Var_81);
    Var_79 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveHpCode_27, Var_80);
    Var_78 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveTicketCode_24, Var_79);
    *Code_18 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FlushCode_22, Var_78);
  }
}

static void MR_CALL 
ll_backend__disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_9_p_0(
  MR_Word DisjRegionOps_10,
  MR_Word * BeforeEnterCode_12,
  MR_Word * LaterCode_13,
  MR_Word * LastCode_14,
  MR_Word STATE_VARIABLE_CI_0_38,
  MR_Word * STATE_VARIABLE_CI_39,
  MR_Word STATE_VARIABLE_CLD_0_40,
  MR_Word * STATE_VARIABLE_CLD_41)
{
  switch (DisjRegionOps_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ForwardLiveVars_17;
        MR_Word SnapshotRegionVars_19;
        MR_Word SnapshotRegionVarList_20;
        MR_Integer NumSnapshotRegionVars_21;
        MR_Word Globals_22;
        MR_Integer FixedSize_23;
        MR_Integer SnapshotSize_24;
        MR_Integer FrameSize_25;
        MR_Word Items_26;
        MR_Word MainStackId_28;
        MR_Integer FirstSlotNum_29;
        MR_Integer LastSlotNum_30;
        MR_Word EmbeddedStackFrame_31;
        MR_Word FirstNonFixedAddr_32;
        MR_Word SnapshotNumRegLval_33;
        MR_Word AddrRegLval_34;
        MR_Word PushInitCode_35;
        MR_Word SnapshotRegionCode_36;
        MR_Word SetCode_37;
        MR_Integer Var_44;
        MR_Word STATE_VARIABLE_CLD_48_48;
        MR_Word STATE_VARIABLE_CLD_50_50;
        MR_Word STATE_VARIABLE_CLD_52_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word STATE_VARIABLE_CLD_70_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_74;
        MR_Word STATE_VARIABLE_CLD_76_76;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word _StackVars_27;

        ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(STATE_VARIABLE_CLD_0_40, &ForwardLiveVars_17);
        SnapshotRegionVars_19 = ll_backend__code_info__filter_region_vars_2_f_0(STATE_VARIABLE_CI_0_38, ForwardLiveVars_17);
        SnapshotRegionVarList_20 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SnapshotRegionVars_19);
        mercury__list__length_2_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[1]), SnapshotRegionVarList_20, &NumSnapshotRegionVars_21);
        ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_38, &Globals_22);
        libs__globals__lookup_int_option_3_p_0(Globals_22, (MR_Integer) 310, &FixedSize_23);
        libs__globals__lookup_int_option_3_p_0(Globals_22, (MR_Integer) 316, &SnapshotSize_24);
        Var_44 = (MR_Integer) ((MR_Unsigned) SnapshotSize_24 * (MR_Unsigned) NumSnapshotRegionVars_21);
        FrameSize_25 = (MR_Integer) ((MR_Unsigned) FixedSize_23 + (MR_Unsigned) Var_44);
        Items_26 = mercury__list__duplicate_2_f_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0), FrameSize_25, ((MR_Box) ((MR_Unsigned) 32U)));
        ll_backend__code_loc_dep__acquire_several_temp_slots_10_p_0(Items_26, (MR_Integer) 1, &_StackVars_27, &MainStackId_28, &FirstSlotNum_29, &LastSlotNum_30, STATE_VARIABLE_CI_0_38, STATE_VARIABLE_CI_39, STATE_VARIABLE_CLD_0_40, &STATE_VARIABLE_CLD_48_48);
        {
          EmbeddedStackFrame_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), EmbeddedStackFrame_31, 0) = (MR_Box) ((MR_Unsigned) (MainStackId_28));
          MR_hl_field(MR_mktag(0), EmbeddedStackFrame_31, 1) = ((MR_Box) (FirstSlotNum_29));
          MR_hl_field(MR_mktag(0), EmbeddedStackFrame_31, 2) = ((MR_Box) (LastSlotNum_30));
        }
        FirstNonFixedAddr_32 = ll_backend__llds__first_nonfixed_embedded_slot_addr_2_f_0(EmbeddedStackFrame_31, FixedSize_23);
        ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &SnapshotNumRegLval_33, STATE_VARIABLE_CLD_48_48, &STATE_VARIABLE_CLD_50_50);
        ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &AddrRegLval_34, STATE_VARIABLE_CLD_50_50, &STATE_VARIABLE_CLD_52_52);
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(3), Var_55, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_55, 2) = ((MR_Box) (EmbeddedStackFrame_31));
        }
        {
          Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) ((MR_String) "Save stack pointer of embedded region nondet stack"));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (SnapshotNumRegLval_33));
          MR_hl_field(MR_mktag(3), Var_60, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__disj_gen_scalar_common_1[10])));
        }
        {
          Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Var_60));
          MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) ((MR_String) "Initialize number of snapshot_infos"));
        }
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (AddrRegLval_34));
          MR_hl_field(MR_mktag(3), Var_67, 2) = ((MR_Box) (FirstNonFixedAddr_32));
        }
        {
          Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) ((MR_String) "Initialize pointer to nonfixed part of embedded frame"));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_58));
        }
        PushInitCode_35 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_53);
        ll_backend__disj_gen__disj_alloc_snapshot_regions_8_p_0(SnapshotNumRegLval_33, AddrRegLval_34, EmbeddedStackFrame_31, SnapshotRegionVarList_20, &SnapshotRegionCode_36, *STATE_VARIABLE_CI_39, STATE_VARIABLE_CLD_52_52, &STATE_VARIABLE_CLD_70_70);
        {
          Var_74 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (SnapshotNumRegLval_33));
        }
        {
          Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) ((MR_Unsigned) 18U));
          MR_hl_field(MR_mktag(3), Var_72, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), Var_72, 2) = ((MR_Box) (EmbeddedStackFrame_31));
          MR_hl_field(MR_mktag(3), Var_72, 3) = ((MR_Box) (Var_74));
        }
        {
          Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (Var_72));
          MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) ((MR_String) "Store the number of snapshot_infos"));
        }
        SetCode_37 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_71)));
        ll_backend__code_loc_dep__release_reg_3_p_0(SnapshotNumRegLval_33, STATE_VARIABLE_CLD_70_70, &STATE_VARIABLE_CLD_76_76);
        ll_backend__code_loc_dep__release_reg_3_p_0(AddrRegLval_34, STATE_VARIABLE_CLD_76_76, STATE_VARIABLE_CLD_41);
        Var_78 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SnapshotRegionCode_36, SetCode_37);
        *BeforeEnterCode_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PushInitCode_35, Var_78);
        {
          Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) ((MR_Unsigned) 19U));
          MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), Var_80, 2) = ((MR_Box) (EmbeddedStackFrame_31));
        }
        {
          Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (Var_80));
          MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) ((MR_String) "region enter later disjunct"));
        }
        *LaterCode_13 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_79)));
        {
          Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) ((MR_Unsigned) 19U));
          MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(3), Var_84, 2) = ((MR_Box) (EmbeddedStackFrame_31));
        }
        {
          Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (Var_84));
          MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) ((MR_String) "region enter last disjunct"));
        }
        *LastCode_14 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_83)));
      }
      break;
    case (MR_Integer) 1:
      {
        *BeforeEnterCode_12 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *LaterCode_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *LastCode_14 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_CI_39 = STATE_VARIABLE_CI_0_38;
        *STATE_VARIABLE_CLD_41 = STATE_VARIABLE_CLD_0_40;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__disj_gen__maybe_create_disj_region_frame_semi_12_p_0(
  MR_Word DisjRegionOps_13,
  MR_Word DisjRemovedRegionVars_14,
  MR_Word DisjAllocRegionVars_15,
  MR_Word * BeforeEnterCode_16,
  MR_Word * LaterCode_17,
  MR_Word * LastCode_18,
  MR_Word * StackVars_19,
  MR_Word * RegionCommitDisjCleanup_20,
  MR_Word STATE_VARIABLE_CI_0_49,
  MR_Word * STATE_VARIABLE_CI_50,
  MR_Word STATE_VARIABLE_CLD_0_51,
  MR_Word * STATE_VARIABLE_CLD_52)
{
  switch (DisjRegionOps_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ProtectRegionVarList_25;
        MR_Word SnapshotRegionVarList_26;
        MR_Integer NumProtectRegionVars_27;
        MR_Integer NumSnapshotRegionVars_28;
        MR_Word Globals_29;
        MR_Integer FixedSize_30;
        MR_Integer ProtectSize_31;
        MR_Integer SnapshotSize_32;
        MR_Integer FrameSize_33;
        MR_Word Items_34;
        MR_Word MainStackId_35;
        MR_Integer FirstSlotNum_36;
        MR_Integer LastSlotNum_37;
        MR_Word EmbeddedStackFrame_38;
        MR_Word FirstNonFixedAddr_39;
        MR_Word ProtectNumRegLval_40;
        MR_Word SnapshotNumRegLval_41;
        MR_Word AddrRegLval_42;
        MR_Word PushInitCode_43;
        MR_Word ProtectRegionCode_44;
        MR_Word SnapshotRegionCode_45;
        MR_Word SetCode_46;
        MR_Word CleanupLabel_47;
        MR_Word CleanupCode_48;
        MR_Integer Var_56;
        MR_Integer Var_57;
        MR_Integer Var_58;
        MR_Word STATE_VARIABLE_CI_61_61;
        MR_Word STATE_VARIABLE_CLD_62_62;
        MR_Word STATE_VARIABLE_CLD_64_64;
        MR_Word STATE_VARIABLE_CLD_66_66;
        MR_Word STATE_VARIABLE_CLD_68_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word STATE_VARIABLE_CLD_93_93;
        MR_Word STATE_VARIABLE_CLD_94_94;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word Var_97;
        MR_Word Var_99;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_105;
        MR_Word STATE_VARIABLE_CLD_108_108;
        MR_Word STATE_VARIABLE_CLD_109_109;
        MR_Word Var_111;
        MR_Word Var_112;
        MR_Word Var_113;
        MR_Word Var_114;
        MR_Word Var_117;
        MR_Word Var_118;
        MR_Word Var_122;
        MR_Word Var_123;

        ProtectRegionVarList_25 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DisjRemovedRegionVars_14);
        SnapshotRegionVarList_26 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DisjAllocRegionVars_15);
        mercury__list__length_2_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[1]), ProtectRegionVarList_25, &NumProtectRegionVars_27);
        mercury__list__length_2_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[1]), SnapshotRegionVarList_26, &NumSnapshotRegionVars_28);
        ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_49, &Globals_29);
        libs__globals__lookup_int_option_3_p_0(Globals_29, (MR_Integer) 310, &FixedSize_30);
        libs__globals__lookup_int_option_3_p_0(Globals_29, (MR_Integer) 315, &ProtectSize_31);
        libs__globals__lookup_int_option_3_p_0(Globals_29, (MR_Integer) 316, &SnapshotSize_32);
        Var_57 = (MR_Integer) ((MR_Unsigned) ProtectSize_31 * (MR_Unsigned) NumProtectRegionVars_27);
        Var_56 = (MR_Integer) ((MR_Unsigned) FixedSize_30 + (MR_Unsigned) Var_57);
        Var_58 = (MR_Integer) ((MR_Unsigned) SnapshotSize_32 * (MR_Unsigned) NumSnapshotRegionVars_28);
        FrameSize_33 = (MR_Integer) ((MR_Unsigned) Var_56 + (MR_Unsigned) Var_58);
        Items_34 = mercury__list__duplicate_2_f_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0), FrameSize_33, ((MR_Box) ((MR_Unsigned) 32U)));
        ll_backend__code_loc_dep__acquire_several_temp_slots_10_p_0(Items_34, (MR_Integer) 1, StackVars_19, &MainStackId_35, &FirstSlotNum_36, &LastSlotNum_37, STATE_VARIABLE_CI_0_49, &STATE_VARIABLE_CI_61_61, STATE_VARIABLE_CLD_0_51, &STATE_VARIABLE_CLD_62_62);
        {
          EmbeddedStackFrame_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), EmbeddedStackFrame_38, 0) = (MR_Box) ((MR_Unsigned) (MainStackId_35));
          MR_hl_field(MR_mktag(0), EmbeddedStackFrame_38, 1) = ((MR_Box) (FirstSlotNum_36));
          MR_hl_field(MR_mktag(0), EmbeddedStackFrame_38, 2) = ((MR_Box) (LastSlotNum_37));
        }
        FirstNonFixedAddr_39 = ll_backend__llds__first_nonfixed_embedded_slot_addr_2_f_0(EmbeddedStackFrame_38, FixedSize_30);
        ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ProtectNumRegLval_40, STATE_VARIABLE_CLD_62_62, &STATE_VARIABLE_CLD_64_64);
        ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &SnapshotNumRegLval_41, STATE_VARIABLE_CLD_64_64, &STATE_VARIABLE_CLD_66_66);
        ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &AddrRegLval_42, STATE_VARIABLE_CLD_66_66, &STATE_VARIABLE_CLD_68_68);
        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(3), Var_71, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_71, 2) = ((MR_Box) (EmbeddedStackFrame_38));
        }
        {
          Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Var_71));
          MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) ((MR_String) "Save stack pointer of embedded region nondet stack"));
        }
        Var_77 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__disj_gen_scalar_common_1[10]));
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (ProtectNumRegLval_40));
          MR_hl_field(MR_mktag(3), Var_76, 2) = ((MR_Box) (Var_77));
        }
        {
          Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (Var_76));
          MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) ((MR_String) "Initialize number of protect_infos"));
        }
        {
          Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (SnapshotNumRegLval_41));
          MR_hl_field(MR_mktag(3), Var_83, 2) = ((MR_Box) (Var_77));
        }
        {
          Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (Var_83));
          MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) ((MR_String) "Initialize number of snapshot_infos"));
        }
        {
          Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (AddrRegLval_42));
          MR_hl_field(MR_mktag(3), Var_90, 2) = ((MR_Box) (FirstNonFixedAddr_39));
        }
        {
          Var_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (Var_90));
          MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) ((MR_String) "Initialize pointer to nonfixed part of embedded frame"));
        }
        {
          Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
          MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
          MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_88));
        }
        {
          Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
          MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_81));
        }
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_74));
        }
        PushInitCode_43 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_69);
        ll_backend__disj_gen__disj_protect_regions_8_p_0(ProtectNumRegLval_40, AddrRegLval_42, EmbeddedStackFrame_38, ProtectRegionVarList_25, &ProtectRegionCode_44, STATE_VARIABLE_CI_61_61, STATE_VARIABLE_CLD_68_68, &STATE_VARIABLE_CLD_93_93);
        ll_backend__disj_gen__disj_alloc_snapshot_regions_8_p_0(SnapshotNumRegLval_41, AddrRegLval_42, EmbeddedStackFrame_38, SnapshotRegionVarList_26, &SnapshotRegionCode_45, STATE_VARIABLE_CI_61_61, STATE_VARIABLE_CLD_93_93, &STATE_VARIABLE_CLD_94_94);
        {
          Var_99 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (ProtectNumRegLval_40));
        }
        {
          Var_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_97, 0) = ((MR_Box) ((MR_Unsigned) 18U));
          MR_hl_field(MR_mktag(3), Var_97, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), Var_97, 2) = ((MR_Box) (EmbeddedStackFrame_38));
          MR_hl_field(MR_mktag(3), Var_97, 3) = ((MR_Box) (Var_99));
        }
        {
          Var_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (Var_97));
          MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) ((MR_String) "Store the number of protect_infos"));
        }
        {
          Var_105 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (SnapshotNumRegLval_41));
        }
        {
          Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_103, 0) = ((MR_Box) ((MR_Unsigned) 18U));
          MR_hl_field(MR_mktag(3), Var_103, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), Var_103, 2) = ((MR_Box) (EmbeddedStackFrame_38));
          MR_hl_field(MR_mktag(3), Var_103, 3) = ((MR_Box) (Var_105));
        }
        {
          Var_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (Var_103));
          MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) ((MR_String) "Store the number of snapshot_infos"));
        }
        {
          Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
          MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
          MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_101));
        }
        SetCode_46 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_95);
        ll_backend__code_loc_dep__release_reg_3_p_0(ProtectNumRegLval_40, STATE_VARIABLE_CLD_94_94, &STATE_VARIABLE_CLD_108_108);
        ll_backend__code_loc_dep__release_reg_3_p_0(SnapshotNumRegLval_41, STATE_VARIABLE_CLD_108_108, &STATE_VARIABLE_CLD_109_109);
        ll_backend__code_loc_dep__release_reg_3_p_0(AddrRegLval_42, STATE_VARIABLE_CLD_109_109, STATE_VARIABLE_CLD_52);
        Var_112 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SnapshotRegionCode_45, SetCode_46);
        Var_111 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProtectRegionCode_44, Var_112);
        *BeforeEnterCode_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PushInitCode_43, Var_111);
        {
          Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_114, 0) = ((MR_Box) ((MR_Unsigned) 19U));
          MR_hl_field(MR_mktag(3), Var_114, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), Var_114, 2) = ((MR_Box) (EmbeddedStackFrame_38));
        }
        {
          Var_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (Var_114));
          MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) ((MR_String) "region enter later disjunct"));
        }
        *LaterCode_17 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_113)));
        {
          Var_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_118, 0) = ((MR_Box) ((MR_Unsigned) 19U));
          MR_hl_field(MR_mktag(3), Var_118, 1) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(3), Var_118, 2) = ((MR_Box) (EmbeddedStackFrame_38));
        }
        {
          Var_117 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_117, 0) = ((MR_Box) (Var_118));
          MR_hl_field(MR_mktag(0), Var_117, 1) = ((MR_Box) ((MR_String) "region enter last disjunct"));
        }
        *LastCode_18 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_117)));
        ll_backend__code_info__get_next_label_3_p_0(&CleanupLabel_47, STATE_VARIABLE_CI_61_61, STATE_VARIABLE_CI_50);
        {
          Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) ((MR_Unsigned) 19U));
          MR_hl_field(MR_mktag(3), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(3), Var_123, 2) = ((MR_Box) (EmbeddedStackFrame_38));
        }
        {
          Var_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_122, 0) = ((MR_Box) (Var_123));
          MR_hl_field(MR_mktag(0), Var_122, 1) = ((MR_Box) ((MR_String) "region cleanup commit for nonlast disjunct"));
        }
        CleanupCode_48 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_122)));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *RegionCommitDisjCleanup_20 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CleanupLabel_47));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CleanupCode_48));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *BeforeEnterCode_16 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *LaterCode_17 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *LastCode_18 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *StackVars_19 = (MR_Word) ((MR_Unsigned) 0U);
        *RegionCommitDisjCleanup_20 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_CI_50 = STATE_VARIABLE_CI_0_49;
        *STATE_VARIABLE_CLD_52 = STATE_VARIABLE_CLD_0_51;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__disj_gen__disj_alloc_snapshot_regions_8_p_0(
  MR_Word NumLval_1,
  MR_Word AddrLval_2,
  MR_Word EmbeddedStackFrame_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_CLD_0_7,
  MR_Word * STATE_VARIABLE_CLD_8)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CLD_8 = STATE_VARIABLE_CLD_0_7;
  }
  else
  {
    MR_Word RegionVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word RegionVars_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Code_21;
    MR_Word Codes_22;
    MR_Word ProduceVarCode_25;
    MR_Word RegionVarRval_26;
    MR_Word SaveCode_27;
    MR_Word STATE_VARIABLE_CLD_30_30;
    MR_Word Var_31;
    MR_Word Var_32;

    ll_backend__code_loc_dep__produce_variable_6_p_0(RegionVar_19, &ProduceVarCode_25, &RegionVarRval_26, HeadVar__6_6, STATE_VARIABLE_CLD_0_7, &STATE_VARIABLE_CLD_30_30);
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_32, 2) = ((MR_Box) (EmbeddedStackFrame_3));
      MR_hl_field(MR_mktag(3), Var_32, 3) = ((MR_Box) (RegionVarRval_26));
      MR_hl_field(MR_mktag(3), Var_32, 4) = ((MR_Box) (NumLval_1));
      MR_hl_field(MR_mktag(3), Var_32, 5) = ((MR_Box) (AddrLval_2));
    }
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) ((MR_String) "take alloc snapshot of the region"));
    }
    SaveCode_27 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_31)));
    Code_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProduceVarCode_25, SaveCode_27);
    ll_backend__disj_gen__disj_alloc_snapshot_regions_8_p_0(NumLval_1, AddrLval_2, EmbeddedStackFrame_3, RegionVars_20, &Codes_22, HeadVar__6_6, STATE_VARIABLE_CLD_30_30, STATE_VARIABLE_CLD_8);
    *HeadVar__5_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Code_21, Codes_22);
  }
}

static void MR_CALL 
ll_backend__disj_gen__disj_protect_regions_8_p_0(
  MR_Word NumLval_1,
  MR_Word AddrLval_2,
  MR_Word EmbeddedStackFrame_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_CLD_0_7,
  MR_Word * STATE_VARIABLE_CLD_8)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CLD_8 = STATE_VARIABLE_CLD_0_7;
  }
  else
  {
    MR_Word RegionVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word RegionVars_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Code_21;
    MR_Word Codes_22;
    MR_Word ProduceVarCode_25;
    MR_Word RegionVarRval_26;
    MR_Word SaveCode_27;
    MR_Word STATE_VARIABLE_CLD_30_30;
    MR_Word Var_31;
    MR_Word Var_32;

    ll_backend__code_loc_dep__produce_variable_6_p_0(RegionVar_19, &ProduceVarCode_25, &RegionVarRval_26, HeadVar__6_6, STATE_VARIABLE_CLD_0_7, &STATE_VARIABLE_CLD_30_30);
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Var_32, 2) = ((MR_Box) (EmbeddedStackFrame_3));
      MR_hl_field(MR_mktag(3), Var_32, 3) = ((MR_Box) (RegionVarRval_26));
      MR_hl_field(MR_mktag(3), Var_32, 4) = ((MR_Box) (NumLval_1));
      MR_hl_field(MR_mktag(3), Var_32, 5) = ((MR_Box) (AddrLval_2));
    }
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) ((MR_String) "disj protect the region if needed"));
    }
    SaveCode_27 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_31)));
    Code_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProduceVarCode_25, SaveCode_27);
    ll_backend__disj_gen__disj_protect_regions_8_p_0(NumLval_1, AddrLval_2, EmbeddedStackFrame_3, RegionVars_20, &Codes_22, HeadVar__6_6, STATE_VARIABLE_CLD_30_30, STATE_VARIABLE_CLD_8);
    *HeadVar__5_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Code_21, Codes_22);
  }
}

static MR_bool MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__560__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__558__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CodeModel_2,
  MR_Word FullResumeMap_3,
  MR_Word MaybeEntryResumePoint_4,
  MR_Word HijackInfo_5,
  MR_Word DisjGoalInfo_6,
  MR_Word RegionCommitDisjCleanup_7,
  MR_Word EndLabel_8,
  MR_Word ReclaimHeap_9,
  MR_Word MaybeHpSlot0_10,
  MR_Word MaybeTicketSlot_11,
  MR_Word LaterRegionCode_12,
  MR_Word LastRegionCode_13,
  MR_Word BranchStart0_14,
  MR_Word MaybeEnd0_15,
  MR_Word * MaybeEnd_16,
  MR_Word * Code_17,
  MR_Word STATE_VARIABLE_CI_0_18,
  MR_Word * STATE_VARIABLE_CI_19)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.disj_gen.generate_disjuncts\'/19", (MR_String) "empty disjunction");
        return;
      }
    }
    else
    {
      MR_Word Goal0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word EntryResumePointCode_62;
      MR_Word GoalExpr0_63;
      MR_Word GoalInfo0_64;
      MR_Word Resume_65;
      MR_Word STATE_VARIABLE_CLD_104_104;
      MR_Word STATE_VARIABLE_CI_105_105;
      MR_Word STATE_VARIABLE_CLD_106_106;

      ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart0_14, STATE_VARIABLE_CI_0_18, &STATE_VARIABLE_CLD_104_104);
      if ((MaybeEntryResumePoint_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        EntryResumePointCode_62 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        STATE_VARIABLE_CI_105_105 = STATE_VARIABLE_CI_0_18;
        STATE_VARIABLE_CLD_106_106 = STATE_VARIABLE_CLD_104_104;
      }
      else
      {
        MR_Word EntryResumePoint_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEntryResumePoint_4, (MR_Integer) 0))));

        ll_backend__code_loc_dep__generate_resume_point_6_p_0(EntryResumePoint_61, &EntryResumePointCode_62, STATE_VARIABLE_CI_0_18, &STATE_VARIABLE_CI_105_105, STATE_VARIABLE_CLD_104_104, &STATE_VARIABLE_CLD_106_106);
      }
      GoalExpr0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_41, (MR_Integer) 0))));
      GoalInfo0_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_41, (MR_Integer) 1))));
      hlds__hlds_llds__goal_info_get_resume_point_2_p_0(GoalInfo0_64, &Resume_65);
      if ((Resume_65 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word UndoCode_97;
        MR_Word RegionCleanupCode_98;
        MR_Word EndLabelCode_101;
        MR_Word STATE_VARIABLE_CI_107_107;
        MR_Word STATE_VARIABLE_CLD_108_108;
        MR_Word STATE_VARIABLE_CI_110_110;
        MR_Word STATE_VARIABLE_CLD_111_111;
        MR_Word STATE_VARIABLE_CLD_112_112;
        MR_Word STATE_VARIABLE_CI_113_113;
        MR_Word STATE_VARIABLE_CLD_114_114;
        MR_Word Var_127;
        MR_Word Var_128;
        MR_Word Var_130;
        MR_Word Var_131;
        MR_Word Var_132;
        MR_Word Var_133;
        MR_Word Var_134;
        MR_Word Var_135;
        MR_Word Var_136;
        MR_Word Var_137;
        MR_Word RestoreHpCode_189;
        MR_Word RestoreTicketCode_190;
        MR_Word TraceCode_191;
        MR_Word GoalCode_192;
        MR_Word StoreMap_193;
        MR_Word SaveCode_194;
        MR_Word STATE_VARIABLE_CLD_165_196;

        ll_backend__code_loc_dep__maybe_restore_and_release_hp_6_p_0(MaybeHpSlot0_10, &RestoreHpCode_189, STATE_VARIABLE_CI_105_105, &STATE_VARIABLE_CI_107_107, STATE_VARIABLE_CLD_106_106, &STATE_VARIABLE_CLD_108_108);
        ll_backend__code_loc_dep__maybe_reset_discard_and_release_ticket_7_p_0(MaybeTicketSlot_11, (MR_Integer) 0, &RestoreTicketCode_190, STATE_VARIABLE_CI_107_107, &STATE_VARIABLE_CI_110_110, STATE_VARIABLE_CLD_108_108, &STATE_VARIABLE_CLD_111_111);
        ll_backend__code_loc_dep__undo_disj_hijack_4_p_0(HijackInfo_5, &UndoCode_97, STATE_VARIABLE_CLD_111_111, &STATE_VARIABLE_CLD_112_112);
        ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(Goal0_41, DisjGoalInfo_6, &TraceCode_191, STATE_VARIABLE_CI_110_110, &STATE_VARIABLE_CI_113_113, STATE_VARIABLE_CLD_112_112, &STATE_VARIABLE_CLD_114_114);
        ll_backend__code_gen__generate_goal_7_p_0(CodeModel_2, Goal0_41, &GoalCode_192, STATE_VARIABLE_CI_113_113, STATE_VARIABLE_CI_19, STATE_VARIABLE_CLD_114_114, &STATE_VARIABLE_CLD_165_196);
        hlds__hlds_llds__goal_info_get_store_map_2_p_0(DisjGoalInfo_6, &StoreMap_193);
        ll_backend__code_loc_dep__generate_branch_end_6_p_0(StoreMap_193, MaybeEnd0_15, MaybeEnd_16, &SaveCode_194, *STATE_VARIABLE_CI_19, STATE_VARIABLE_CLD_165_196);
        if ((RegionCommitDisjCleanup_7 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          RegionCleanupCode_98 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        }
        else
        {
          MR_Word CleanupCode_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RegionCommitDisjCleanup_7, (MR_Integer) 1))));
          MR_Word RegionCleanupStartCode_100;
          MR_Word Var_117;
          MR_Word Var_118;
          MR_Word Var_119;
          MR_Word Var_120;
          MR_Word Var_122;
          MR_Word Var_123;
          MR_Word Var_124;
          MR_Word CleanupLabel_187 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RegionCommitDisjCleanup_7, (MR_Integer) 0))));

          {
            Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (EndLabel_8));
          }
          {
            Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (Var_120));
          }
          {
            Var_118 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_118, 0) = ((MR_Box) (Var_119));
            MR_hl_field(MR_mktag(0), Var_118, 1) = ((MR_Box) ((MR_String) "Skip over cleanup code at end of disjunction"));
          }
          {
            Var_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_124, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_124, 1) = ((MR_Box) (CleanupLabel_187));
          }
          {
            Var_123 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_123, 0) = ((MR_Box) (Var_124));
            MR_hl_field(MR_mktag(0), Var_123, 1) = ((MR_Box) ((MR_String) "Cleanup at end of disjunction"));
          }
          {
            Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Var_123));
            MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Var_118));
            MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_122));
          }
          RegionCleanupStartCode_100 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_117);
          RegionCleanupCode_98 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RegionCleanupStartCode_100, CleanupCode_99);
        }
        {
          Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_128, 1) = ((MR_Box) (EndLabel_8));
        }
        {
          Var_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_127, 0) = ((MR_Box) (Var_128));
          MR_hl_field(MR_mktag(0), Var_127, 1) = ((MR_Box) ((MR_String) "End of disjunction"));
        }
        EndLabelCode_101 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_127)));
        Var_137 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RegionCleanupCode_98, EndLabelCode_101);
        Var_136 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveCode_194, Var_137);
        Var_135 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GoalCode_192, Var_136);
        Var_134 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), UndoCode_97, Var_135);
        Var_133 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LastRegionCode_13, Var_134);
        Var_132 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreTicketCode_190, Var_133);
        Var_131 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreHpCode_189, Var_132);
        Var_130 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TraceCode_191, Var_131);
        *Code_17 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EntryResumePointCode_62, Var_130);
      }
      else
      {
        MR_Word ResumeVars_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Resume_65, (MR_Integer) 0))));
        MR_Word ResumeLocs_67 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Resume_65, (MR_Integer) 1))) & (MR_Integer) 3);
        MR_Word RestoreHpCode_69;
        MR_Word RestoreTicketCode_70;
        MR_Word ThisDisjunctRegionCode_71;
        MR_Word GoalInfo_72;
        MR_Word Goal_73;
        MR_Word SaveHpCode_74;
        MR_Word MaybeHpSlot_76;
        MR_Word BranchStart_79;
        MR_Word NextResumePoint_82;
        MR_Word ModContCode_83;
        MR_Word TraceCode_84;
        MR_Word GoalCodeModel_85;
        MR_Word GoalCode_86;
        MR_Word ResumeVarsCode_87;
        MR_Word PruneTicketCode_88;
        MR_Word Zombies_89;
        MR_Word StoreMap_90;
        MR_Word MaybeEnd1_91;
        MR_Word SaveCode_92;
        MR_Word BranchCode_93;
        MR_Word RestCode_96;
        MR_Word STATE_VARIABLE_CLD_141_141;
        MR_Word STATE_VARIABLE_CI_142_142;
        MR_Word Var_149;
        MR_Word STATE_VARIABLE_CI_150_150;
        MR_Word STATE_VARIABLE_CLD_151_151;
        MR_Word STATE_VARIABLE_CI_152_152;
        MR_Word STATE_VARIABLE_CLD_153_153;
        MR_Word STATE_VARIABLE_CI_154_154;
        MR_Word STATE_VARIABLE_CLD_155_155;
        MR_Word STATE_VARIABLE_CI_159_159;
        MR_Word STATE_VARIABLE_CLD_162_162;
        MR_Word STATE_VARIABLE_CLD_163_163;
        MR_Word STATE_VARIABLE_CLD_164_164;
        MR_Word STATE_VARIABLE_CLD_165_165;
        MR_Word Var_174;
        MR_Word Var_176;
        MR_Word Var_177;
        MR_Word Var_178;
        MR_Word Var_179;
        MR_Word Var_180;
        MR_Word Var_181;
        MR_Word Var_182;
        MR_Word Var_183;
        MR_Word Var_184;
        MR_Word Var_185;
        MR_Word Var_186;

        if ((MaybeEntryResumePoint_4 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          RestoreHpCode_69 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          RestoreTicketCode_70 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          ThisDisjunctRegionCode_71 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        }
        else
        {
          ll_backend__code_loc_dep__maybe_restore_hp_2_p_0(MaybeHpSlot0_10, &RestoreHpCode_69);
          ll_backend__code_loc_dep__maybe_reset_ticket_3_p_0(MaybeTicketSlot_11, (MR_Integer) 0, &RestoreTicketCode_70);
          ThisDisjunctRegionCode_71 = LaterRegionCode_12;
        }
        hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) ((MR_Unsigned) 0U), GoalInfo0_64, &GoalInfo_72);
        {
          Goal_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Goal_73, 0) = ((MR_Box) (GoalExpr0_63));
          MR_hl_field(MR_mktag(0), Goal_73, 1) = ((MR_Box) (GoalInfo_72));
        }
        succeeded = (ReclaimHeap_9 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(Goal_73);
          if (succeeded)
            succeeded = (MaybeHpSlot0_10 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          MR_Word HpSlot_75;
          MR_Word BranchSaveHpCode_77;
          MR_Word BranchHpSlot_78;
          MR_Word HpCodeInstrs_80;
          MR_Word BranchHpCodeInstrs_81;
          MR_Word STATE_VARIABLE_CI_140_140;
          MR_Word Var_143;
          MR_Word Var_146;

          ll_backend__code_loc_dep__save_hp_6_p_0(&SaveHpCode_74, &HpSlot_75, STATE_VARIABLE_CI_105_105, &STATE_VARIABLE_CI_140_140, STATE_VARIABLE_CLD_106_106, &STATE_VARIABLE_CLD_141_141);
          {
            MaybeHpSlot_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeHpSlot_76, 0) = ((MR_Box) (HpSlot_75));
          }
          ll_backend__code_loc_dep__save_hp_in_branch_6_p_0(&BranchSaveHpCode_77, &BranchHpSlot_78, BranchStart0_14, &BranchStart_79, STATE_VARIABLE_CI_140_140, &STATE_VARIABLE_CI_142_142);
          HpCodeInstrs_80 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveHpCode_74);
          BranchHpCodeInstrs_81 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BranchSaveHpCode_77);
          {
            Var_143 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_143, 0) = ((MR_Box) (&ll_backend__disj_gen_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_143, 1) = ((MR_Box) (ll_backend__disj_gen__generate_disjuncts_19_p_0_1));
            MR_hl_field(MR_mktag(0), Var_143, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_143, 3) = ((MR_Box) (HpCodeInstrs_80));
            MR_hl_field(MR_mktag(0), Var_143, 4) = ((MR_Box) (BranchHpCodeInstrs_81));
          }
          mercury__require__expect_3_p_0(Var_143, (MR_String) "predicate \140ll_backend.disj_gen.generate_disjuncts\'/19", (MR_String) "cannot use same code for saving hp");
          {
            Var_146 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_146, 0) = ((MR_Box) (&ll_backend__disj_gen_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), Var_146, 1) = ((MR_Box) (ll_backend__disj_gen__generate_disjuncts_19_p_0_2));
            MR_hl_field(MR_mktag(0), Var_146, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_146, 3) = ((MR_Box) (HpSlot_75));
            MR_hl_field(MR_mktag(0), Var_146, 4) = ((MR_Box) (BranchHpSlot_78));
          }
          mercury__require__expect_3_p_0(Var_146, (MR_String) "predicate \140ll_backend.disj_gen.generate_disjuncts\'/19", (MR_String) "cannot allocate same slot for saved hp");
        }
        else
        {
          SaveHpCode_74 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          MaybeHpSlot_76 = MaybeHpSlot0_10;
          BranchStart_79 = BranchStart0_14;
          STATE_VARIABLE_CLD_141_141 = STATE_VARIABLE_CLD_106_106;
          STATE_VARIABLE_CI_142_142 = STATE_VARIABLE_CI_105_105;
        }
        Var_149 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars_66);
        ll_backend__code_loc_dep__make_resume_point_6_p_0(Var_149, ResumeLocs_67, FullResumeMap_3, &NextResumePoint_82, STATE_VARIABLE_CI_142_142, &STATE_VARIABLE_CI_150_150);
        ll_backend__code_loc_dep__effect_resume_point_5_p_0(NextResumePoint_82, CodeModel_2, &ModContCode_83, STATE_VARIABLE_CLD_141_141, &STATE_VARIABLE_CLD_151_151);
        ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(Goal_73, DisjGoalInfo_6, &TraceCode_84, STATE_VARIABLE_CI_150_150, &STATE_VARIABLE_CI_152_152, STATE_VARIABLE_CLD_151_151, &STATE_VARIABLE_CLD_153_153);
        GoalCodeModel_85 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_72);
        ll_backend__code_gen__generate_goal_7_p_0(GoalCodeModel_85, Goal_73, &GoalCode_86, STATE_VARIABLE_CI_152_152, &STATE_VARIABLE_CI_154_154, STATE_VARIABLE_CLD_153_153, &STATE_VARIABLE_CLD_155_155);
        switch (CodeModel_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_CI_156_156;
              MR_Word STATE_VARIABLE_CLD_157_157;
              MR_Word STATE_VARIABLE_CLD_160_160;

              ResumeVarsCode_87 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              ll_backend__code_loc_dep__maybe_release_hp_5_p_0(MaybeHpSlot_76, STATE_VARIABLE_CI_154_154, &STATE_VARIABLE_CI_156_156, STATE_VARIABLE_CLD_155_155, &STATE_VARIABLE_CLD_157_157);
              ll_backend__code_loc_dep__maybe_reset_prune_and_release_ticket_7_p_0(MaybeTicketSlot_11, (MR_Integer) 1, &PruneTicketCode_88, STATE_VARIABLE_CI_156_156, &STATE_VARIABLE_CI_159_159, STATE_VARIABLE_CLD_157_157, &STATE_VARIABLE_CLD_160_160);
              ll_backend__code_loc_dep__reset_resume_known_3_p_0(BranchStart_79, STATE_VARIABLE_CLD_160_160, &STATE_VARIABLE_CLD_162_162);
            }
            break;
          case (MR_Integer) 2:
            {
              ll_backend__code_loc_dep__flush_resume_vars_to_stack_4_p_0(&ResumeVarsCode_87, STATE_VARIABLE_CI_154_154, STATE_VARIABLE_CLD_155_155, &STATE_VARIABLE_CLD_162_162);
              PruneTicketCode_88 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              STATE_VARIABLE_CI_159_159 = STATE_VARIABLE_CI_154_154;
            }
            break;
        }
        ll_backend__code_loc_dep__pop_resume_point_2_p_0(STATE_VARIABLE_CLD_162_162, &STATE_VARIABLE_CLD_163_163);
        ll_backend__code_loc_dep__pickup_zombies_3_p_0(&Zombies_89, STATE_VARIABLE_CLD_163_163, &STATE_VARIABLE_CLD_164_164);
        ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(Zombies_89, STATE_VARIABLE_CLD_164_164, &STATE_VARIABLE_CLD_165_165);
        hlds__hlds_llds__goal_info_get_store_map_2_p_0(DisjGoalInfo_6, &StoreMap_90);
        ll_backend__code_loc_dep__generate_branch_end_6_p_0(StoreMap_90, MaybeEnd0_15, &MaybeEnd1_91, &SaveCode_92, STATE_VARIABLE_CI_159_159, STATE_VARIABLE_CLD_165_165);
        if ((RegionCommitDisjCleanup_7 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_170;
          MR_Word Var_171;
          MR_Word Var_172;

          {
            Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (EndLabel_8));
          }
          {
            Var_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_171, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Var_171, 1) = ((MR_Box) (Var_172));
          }
          {
            Var_170 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_170, 0) = ((MR_Box) (Var_171));
            MR_hl_field(MR_mktag(0), Var_170, 1) = ((MR_Box) ((MR_String) "skip to end of disjunction"));
          }
          BranchCode_93 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_170)));
        }
        else
        {
          MR_Word CleanupLabel_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RegionCommitDisjCleanup_7, (MR_Integer) 0))));
          MR_Word Var_166;
          MR_Word Var_167;
          MR_Word Var_168;

          {
            Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (CleanupLabel_94));
          }
          {
            Var_167 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_167, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Var_167, 1) = ((MR_Box) (Var_168));
          }
          {
            Var_166 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_166, 0) = ((MR_Box) (Var_167));
            MR_hl_field(MR_mktag(0), Var_166, 1) = ((MR_Box) ((MR_String) "skip to end of disjunction with region cleanup"));
          }
          BranchCode_93 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_166)));
        }
        {
          Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_174, 0) = ((MR_Box) (NextResumePoint_82));
        }
        ll_backend__disj_gen__generate_disjuncts_19_p_0(Goals_42, CodeModel_2, FullResumeMap_3, Var_174, HijackInfo_5, DisjGoalInfo_6, RegionCommitDisjCleanup_7, EndLabel_8, ReclaimHeap_9, MaybeHpSlot_76, MaybeTicketSlot_11, LaterRegionCode_12, LastRegionCode_13, BranchStart_79, MaybeEnd1_91, MaybeEnd_16, &RestCode_96, STATE_VARIABLE_CI_159_159, STATE_VARIABLE_CI_19);
        Var_186 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BranchCode_93, RestCode_96);
        Var_185 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveCode_92, Var_186);
        Var_184 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PruneTicketCode_88, Var_185);
        Var_183 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ResumeVarsCode_87, Var_184);
        Var_182 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GoalCode_86, Var_183);
        Var_181 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TraceCode_84, Var_182);
        Var_180 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ModContCode_83, Var_181);
        Var_179 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThisDisjunctRegionCode_71, Var_180);
        Var_178 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveHpCode_74, Var_179);
        Var_177 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreTicketCode_70, Var_178);
        Var_176 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreHpCode_69, Var_177);
        *Code_17 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EntryResumePointCode_62, Var_176);
      }
    }
  }
}

static void MR_CALL 
ll_backend__disj_gen__generate_lookup_disj_7_p_0(
  MR_Word ResumeVars_8,
  MR_Word LookupDisjInfo_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_CI_0_61,
  MR_Word * STATE_VARIABLE_CI_62,
  MR_Word STATE_VARIABLE_CLD_0_63,
  MR_Word * STATE_VARIABLE_CLD_64)
{
  {
    MR_Word OutVars_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupDisjInfo_9, (MR_Integer) 0))));
    MR_Word StoreMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupDisjInfo_9, (MR_Integer) 1))));
    MR_Word MaybeEnd0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupDisjInfo_9, (MR_Integer) 2))));
    MR_Word Liveness_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupDisjInfo_9, (MR_Integer) 3))));
    MR_Word CurSlot_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupDisjInfo_9, (MR_Integer) 4))));
    MR_Word ResumeMap_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupDisjInfo_9, (MR_Integer) 5))));
    MR_Word FlushCode_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupDisjInfo_9, (MR_Integer) 6))));
    MR_Word SaveTicketCode_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupDisjInfo_9, (MR_Integer) 7))));
    MR_Word MaybeTicketSlot_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupDisjInfo_9, (MR_Integer) 8))));
    MR_Word SaveHpCode_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupDisjInfo_9, (MR_Integer) 9))));
    MR_Word MaybeHpSlot_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupDisjInfo_9, (MR_Integer) 10))));
    MR_Word HijackInfo_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupDisjInfo_9, (MR_Integer) 11))));
    MR_Word PrepareHijackCode_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupDisjInfo_9, (MR_Integer) 12))));
    MR_Word Solns_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupDisjInfo_9, (MR_Integer) 13))));
    MR_Word LLDSTypes_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupDisjInfo_9, (MR_Integer) 14))));
    MR_Integer NumSolns_28;
    MR_Integer NumOutVars_29;
    MR_Word SolnVectorAddr_30;
    MR_Word SolnVectorAddrRval_31;
    MR_Word EndLabel_32;
    MR_Word BaseReg_33;
    MR_Word BaseRegInitCode_34;
    MR_Word SaveSlotCode_35;
    MR_Word DisjEntry_36;
    MR_Word ResumePoint_37;
    MR_Word UpdateRedoipCode_38;
    MR_Word FirstFlushResumeVarsCode_39;
    MR_Word FirstZombies_40;
    MR_Word MaybeEnd1_41;
    MR_Word FirstBranchEndCode_42;
    MR_Word GotoEndCode_43;
    MR_Word ResumePointCode_44;
    MR_Word RestoreTicketCode_45;
    MR_Word RestoreHpCode_46;
    MR_Word LaterBaseReg_47;
    MR_Word UndoLabel_48;
    MR_Word AfterUndoLabel_49;
    MR_Integer MaxSlot_50;
    MR_Word TestMoreSolnsCode_51;
    MR_Word UndoHijackCode_52;
    MR_Word AfterUndoLabelCode_53;
    MR_Word LaterFlushResumeVarsCode_55;
    MR_Word LaterZombies_56;
    MR_Word MaybeEnd_57;
    MR_Word LaterBranchEndCode_58;
    MR_Word EndLabelCode_59;
    MR_Word Comment_60;
    MR_Word STATE_VARIABLE_CI_65_65;
    MR_Word Var_66;
    MR_Word STATE_VARIABLE_CI_68_68;
    MR_Word STATE_VARIABLE_CLD_70_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_87;
    MR_Word STATE_VARIABLE_CI_89_89;
    MR_Word STATE_VARIABLE_CLD_91_91;
    MR_Word STATE_VARIABLE_CLD_93_93;
    MR_Word STATE_VARIABLE_CLD_94_94;
    MR_Word STATE_VARIABLE_CLD_95_95;
    MR_Word STATE_VARIABLE_CLD_96_96;
    MR_Word STATE_VARIABLE_CLD_97_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word STATE_VARIABLE_CLD_102_102;
    MR_Word STATE_VARIABLE_CI_103_103;
    MR_Word STATE_VARIABLE_CLD_104_104;
    MR_Word STATE_VARIABLE_CLD_107_107;
    MR_Word STATE_VARIABLE_CI_108_108;
    MR_Integer Var_110;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_140;
    MR_Word Var_141;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Word Var_145;
    MR_Word STATE_VARIABLE_CLD_148_148;
    MR_Word Var_149;
    MR_Word Var_150;
    MR_Word Var_151;
    MR_Word Var_153;
    MR_Word Var_154;
    MR_Word Var_155;
    MR_Word Var_156;
    MR_Word Var_157;
    MR_Word STATE_VARIABLE_CLD_165_165;
    MR_Word STATE_VARIABLE_CLD_167_167;
    MR_Word STATE_VARIABLE_CLD_168_168;
    MR_Word STATE_VARIABLE_CLD_169_169;
    MR_Word STATE_VARIABLE_CLD_170_170;
    MR_Word STATE_VARIABLE_CLD_171_171;
    MR_Word Var_173;
    MR_Word Var_174;
    MR_Word Var_180;
    MR_Word Var_181;
    MR_Word Var_182;
    MR_Word Var_183;
    MR_Word Var_184;
    MR_Word Var_185;
    MR_Word Var_186;
    MR_Word Var_187;
    MR_Word Var_188;
    MR_Word Var_189;
    MR_Word Var_190;
    MR_Word Var_191;
    MR_Word Var_192;
    MR_Word Var_193;
    MR_Word Var_194;
    MR_Word Var_195;
    MR_Word Var_196;
    MR_Word Var_197;
    MR_Word _LaterUpdateRedoipCode_54;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[0]), Solns_26, &NumSolns_28);
    mercury__list__length_2_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[1]), OutVars_13, &NumOutVars_29);
    ll_backend__code_info__add_vector_static_cell_5_p_0(LLDSTypes_27, Solns_26, &SolnVectorAddr_30, STATE_VARIABLE_CI_0_61, &STATE_VARIABLE_CI_65_65);
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (SolnVectorAddr_30));
      MR_hl_field(MR_mktag(3), Var_66, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      SolnVectorAddrRval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SolnVectorAddrRval_31, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), SolnVectorAddrRval_31, 1) = ((MR_Box) (Var_66));
    }
    ll_backend__code_info__get_next_label_3_p_0(&EndLabel_32, STATE_VARIABLE_CI_65_65, &STATE_VARIABLE_CI_68_68);
    ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(StoreMap_14, (MR_Integer) 0, &BaseReg_33, STATE_VARIABLE_CLD_0_63, &STATE_VARIABLE_CLD_70_70);
    Var_75 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__disj_gen_scalar_common_3[0]));
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_74, 0) = ((MR_Box) (SolnVectorAddrRval_31));
      MR_hl_field(MR_mktag(2), Var_74, 1) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(2), Var_74, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__disj_gen_scalar_common_1[10])));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Var_74));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (BaseReg_33));
      MR_hl_field(MR_mktag(3), Var_72, 2) = ((MR_Box) (Var_73));
    }
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) ((MR_String) "Compute base address for this case"));
    }
    BaseRegInitCode_34 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_71)));
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (NumOutVars_29));
    }
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (Var_85));
    }
    {
      Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (CurSlot_17));
      MR_hl_field(MR_mktag(3), Var_83, 2) = ((MR_Box) (Var_84));
    }
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) ((MR_String) "Setup current slot in the solution array"));
    }
    SaveSlotCode_35 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_82)));
    ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_70_70, &DisjEntry_36);
    Var_87 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars_8);
    ll_backend__code_loc_dep__make_resume_point_6_p_0(Var_87, (MR_Integer) 1, ResumeMap_18, &ResumePoint_37, STATE_VARIABLE_CI_68_68, &STATE_VARIABLE_CI_89_89);
    ll_backend__code_loc_dep__effect_resume_point_5_p_0(ResumePoint_37, (MR_Integer) 2, &UpdateRedoipCode_38, STATE_VARIABLE_CLD_70_70, &STATE_VARIABLE_CLD_91_91);
    ll_backend__lookup_util__generate_offset_assigns_6_p_0(OutVars_13, (MR_Integer) 0, BaseReg_33, STATE_VARIABLE_CI_89_89, STATE_VARIABLE_CLD_91_91, &STATE_VARIABLE_CLD_93_93);
    ll_backend__code_loc_dep__flush_resume_vars_to_stack_4_p_0(&FirstFlushResumeVarsCode_39, STATE_VARIABLE_CI_89_89, STATE_VARIABLE_CLD_93_93, &STATE_VARIABLE_CLD_94_94);
    ll_backend__code_loc_dep__pop_resume_point_2_p_0(STATE_VARIABLE_CLD_94_94, &STATE_VARIABLE_CLD_95_95);
    ll_backend__code_loc_dep__pickup_zombies_3_p_0(&FirstZombies_40, STATE_VARIABLE_CLD_95_95, &STATE_VARIABLE_CLD_96_96);
    ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(FirstZombies_40, STATE_VARIABLE_CLD_96_96, &STATE_VARIABLE_CLD_97_97);
    ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(StoreMap_14, Liveness_16, MaybeEnd0_15, &MaybeEnd1_41, &FirstBranchEndCode_42, STATE_VARIABLE_CI_89_89, STATE_VARIABLE_CLD_97_97);
    {
      Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (EndLabel_32));
    }
    {
      Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_99, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_99, 1) = ((MR_Box) (Var_100));
    }
    {
      Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (Var_99));
      MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) ((MR_String) "goto end of lookup disj"));
    }
    GotoEndCode_43 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_98)));
    ll_backend__code_loc_dep__reset_to_position_3_p_0(DisjEntry_36, STATE_VARIABLE_CI_89_89, &STATE_VARIABLE_CLD_102_102);
    ll_backend__code_loc_dep__generate_resume_point_6_p_0(ResumePoint_37, &ResumePointCode_44, STATE_VARIABLE_CI_89_89, &STATE_VARIABLE_CI_103_103, STATE_VARIABLE_CLD_102_102, &STATE_VARIABLE_CLD_104_104);
    ll_backend__code_loc_dep__maybe_reset_ticket_3_p_0(MaybeTicketSlot_21, (MR_Integer) 0, &RestoreTicketCode_45);
    ll_backend__code_loc_dep__maybe_restore_hp_2_p_0(MaybeHpSlot_23, &RestoreHpCode_46);
    ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(StoreMap_14, (MR_Integer) 0, &LaterBaseReg_47, STATE_VARIABLE_CLD_104_104, &STATE_VARIABLE_CLD_107_107);
    ll_backend__code_info__get_next_label_3_p_0(&UndoLabel_48, STATE_VARIABLE_CI_103_103, &STATE_VARIABLE_CI_108_108);
    ll_backend__code_info__get_next_label_3_p_0(&AfterUndoLabel_49, STATE_VARIABLE_CI_108_108, STATE_VARIABLE_CI_62);
    Var_110 = (MR_Integer) ((MR_Unsigned) NumSolns_28 - (MR_Unsigned) (MR_Integer) 1);
    MaxSlot_50 = (MR_Integer) ((MR_Unsigned) Var_110 * (MR_Unsigned) NumOutVars_29);
    {
      Var_115 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) (CurSlot_17));
    }
    {
      Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_114, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_114, 1) = ((MR_Box) (LaterBaseReg_47));
      MR_hl_field(MR_mktag(3), Var_114, 2) = ((MR_Box) (Var_115));
    }
    {
      Var_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (Var_114));
      MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) ((MR_String) "Init later base register"));
    }
    {
      Var_123 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_123, 0) = ((MR_Box) (LaterBaseReg_47));
    }
    {
      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (MaxSlot_50));
    }
    {
      Var_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_124, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_124, 1) = ((MR_Box) (Var_125));
    }
    {
      Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_120, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Var_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__disj_gen_scalar_common_1[11])));
      MR_hl_field(MR_mktag(3), Var_120, 2) = ((MR_Box) (Var_123));
      MR_hl_field(MR_mktag(3), Var_120, 3) = ((MR_Box) (Var_124));
    }
    {
      Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (UndoLabel_48));
    }
    {
      Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (Var_120));
      MR_hl_field(MR_mktag(3), Var_119, 2) = ((MR_Box) (Var_126));
    }
    {
      Var_118 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_118, 0) = ((MR_Box) (Var_119));
      MR_hl_field(MR_mktag(0), Var_118, 1) = ((MR_Box) ((MR_String) "Jump to undo hijack code if there are no more solutions"));
    }
    {
      Var_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_131, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Var_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__disj_gen_scalar_common_3[2])));
      MR_hl_field(MR_mktag(3), Var_131, 2) = ((MR_Box) (Var_115));
      MR_hl_field(MR_mktag(3), Var_131, 3) = ((MR_Box) (Var_84));
    }
    {
      Var_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_130, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_130, 1) = ((MR_Box) (CurSlot_17));
      MR_hl_field(MR_mktag(3), Var_130, 2) = ((MR_Box) (Var_131));
    }
    {
      Var_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_129, 0) = ((MR_Box) (Var_130));
      MR_hl_field(MR_mktag(0), Var_129, 1) = ((MR_Box) ((MR_String) "Update current slot"));
    }
    {
      Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (AfterUndoLabel_49));
    }
    {
      Var_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_140, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_140, 1) = ((MR_Box) (Var_141));
    }
    {
      Var_139 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_139, 0) = ((MR_Box) (Var_140));
      MR_hl_field(MR_mktag(0), Var_139, 1) = ((MR_Box) ((MR_String) "Jump around undo hijack code"));
    }
    {
      Var_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_145, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_145, 1) = ((MR_Box) (UndoLabel_48));
    }
    {
      Var_144 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_144, 0) = ((MR_Box) (Var_145));
      MR_hl_field(MR_mktag(0), Var_144, 1) = ((MR_Box) ((MR_String) "Undo hijack code"));
    }
    {
      Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (Var_144));
      MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Var_139));
      MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_143));
    }
    {
      Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (Var_129));
      MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (Var_138));
    }
    {
      Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Var_118));
      MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_128));
    }
    {
      Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Var_113));
      MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Var_117));
    }
    TestMoreSolnsCode_51 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_112);
    ll_backend__code_loc_dep__undo_disj_hijack_4_p_0(HijackInfo_24, &UndoHijackCode_52, STATE_VARIABLE_CLD_107_107, &STATE_VARIABLE_CLD_148_148);
    {
      Var_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_151, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_151, 1) = ((MR_Box) (AfterUndoLabel_49));
    }
    {
      Var_150 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_150, 0) = ((MR_Box) (Var_151));
      MR_hl_field(MR_mktag(0), Var_150, 1) = ((MR_Box) ((MR_String) "Return later answer code"));
    }
    {
      Var_157 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_157, 0) = ((MR_Box) (SolnVectorAddrRval_31));
      MR_hl_field(MR_mktag(2), Var_157, 1) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(2), Var_157, 2) = ((MR_Box) (Var_123));
    }
    {
      Var_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_156, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_156, 1) = ((MR_Box) (Var_157));
    }
    {
      Var_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_155, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_155, 1) = ((MR_Box) (LaterBaseReg_47));
      MR_hl_field(MR_mktag(3), Var_155, 2) = ((MR_Box) (Var_156));
    }
    {
      Var_154 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_154, 0) = ((MR_Box) (Var_155));
      MR_hl_field(MR_mktag(0), Var_154, 1) = ((MR_Box) ((MR_String) "Compute base address in later array for this solution"));
    }
    {
      Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (Var_154));
      MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (Var_150));
      MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) (Var_153));
    }
    AfterUndoLabelCode_53 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_149);
    ll_backend__code_loc_dep__effect_resume_point_5_p_0(ResumePoint_37, (MR_Integer) 2, &_LaterUpdateRedoipCode_54, STATE_VARIABLE_CLD_148_148, &STATE_VARIABLE_CLD_165_165);
    ll_backend__lookup_util__generate_offset_assigns_6_p_0(OutVars_13, (MR_Integer) 0, LaterBaseReg_47, *STATE_VARIABLE_CI_62, STATE_VARIABLE_CLD_165_165, &STATE_VARIABLE_CLD_167_167);
    ll_backend__code_loc_dep__flush_resume_vars_to_stack_4_p_0(&LaterFlushResumeVarsCode_55, *STATE_VARIABLE_CI_62, STATE_VARIABLE_CLD_167_167, &STATE_VARIABLE_CLD_168_168);
    ll_backend__code_loc_dep__pop_resume_point_2_p_0(STATE_VARIABLE_CLD_168_168, &STATE_VARIABLE_CLD_169_169);
    ll_backend__code_loc_dep__pickup_zombies_3_p_0(&LaterZombies_56, STATE_VARIABLE_CLD_169_169, &STATE_VARIABLE_CLD_170_170);
    ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(LaterZombies_56, STATE_VARIABLE_CLD_170_170, &STATE_VARIABLE_CLD_171_171);
    ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(StoreMap_14, Liveness_16, MaybeEnd1_41, &MaybeEnd_57, &LaterBranchEndCode_58, *STATE_VARIABLE_CI_62, STATE_VARIABLE_CLD_171_171);
    ll_backend__code_loc_dep__after_all_branches_4_p_0(StoreMap_14, MaybeEnd_57, *STATE_VARIABLE_CI_62, STATE_VARIABLE_CLD_64);
    {
      Var_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_174, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_174, 1) = ((MR_Box) (EndLabel_32));
    }
    {
      Var_173 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_173, 0) = ((MR_Box) (Var_174));
      MR_hl_field(MR_mktag(0), Var_173, 1) = ((MR_Box) ((MR_String) "end of lookup disj"));
    }
    EndLabelCode_59 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_173)));
    Comment_60 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__disj_gen_scalar_common_1[12])));
    Var_197 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LaterBranchEndCode_58, EndLabelCode_59);
    Var_196 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LaterFlushResumeVarsCode_55, Var_197);
    Var_195 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AfterUndoLabelCode_53, Var_196);
    Var_194 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), UndoHijackCode_52, Var_195);
    Var_193 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestMoreSolnsCode_51, Var_194);
    Var_192 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreHpCode_46, Var_193);
    Var_191 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreTicketCode_45, Var_192);
    Var_190 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ResumePointCode_44, Var_191);
    Var_189 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GotoEndCode_43, Var_190);
    Var_188 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FirstBranchEndCode_42, Var_189);
    Var_187 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FirstFlushResumeVarsCode_39, Var_188);
    Var_186 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), UpdateRedoipCode_38, Var_187);
    Var_185 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PrepareHijackCode_25, Var_186);
    Var_184 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveHpCode_22, Var_185);
    Var_183 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveTicketCode_20, Var_184);
    Var_182 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveSlotCode_35, Var_183);
    Var_181 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BaseRegInitCode_34, Var_182);
    Var_180 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FlushCode_19, Var_181);
    *Code_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Comment_60, Var_180);
  }
}

static MR_bool MR_CALL 
ll_backend__disj_gen__is_lookup_disj_10_p_0(
  MR_Word AddTrailOps_11,
  MR_Word AddRegionOps_12,
  MR_Word ResumeVars_13,
  MR_Word Disjuncts_14,
  MR_Word DisjGoalInfo_15,
  MR_Word * LookupDisjInfo_16,
  MR_Word STATE_VARIABLE_CI_0_53,
  MR_Word * STATE_VARIABLE_CI_54,
  MR_Word STATE_VARIABLE_CLD_0_55,
  MR_Word * AfterPrepPos_19)
{
  {
    MR_bool succeeded = (Disjuncts_14 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TypeCtorInfo_76_76;
    MR_Word FirstDisjunct_20;
    MR_Word LaterDisjuncts_21;
    MR_Word DisjNonLocals_25;
    MR_Word MaybeTraceInfo_26;
    MR_Word Globals_27;
    MR_Word OutVars_28;
    MR_Word VarTypes_29;
    MR_Word OutTypes_30;
    MR_Word ResumeMap_31;
    MR_Word FlushCode_32;
    MR_Word CurSlot_33;
    MR_Word SaveTicketCode_34;
    MR_Word MaybeTicketSlot_35;
    MR_Word ReclaimHeap_36;
    MR_Word SaveHpCode_37;
    MR_Word MaybeHpSlot_38;
    MR_Word HijackInfo_39;
    MR_Word PrepareHijackCode_40;
    MR_Word StoreMap_41;
    MR_Word DisjStart_42;
    MR_Word FirstSoln_43;
    MR_Word MaybeEnd1_44;
    MR_Word Liveness_45;
    MR_Word LaterSolns_46;
    MR_Word MaybeEnd_47;
    MR_Word Solns_48;
    MR_Word ExprnOpts_49;
    MR_Word UnboxFloats_50;
    MR_Word UnboxInt64s_51;
    MR_Word LLDSTypes_52;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word STATE_VARIABLE_CLD_60_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word STATE_VARIABLE_CI_63_63;
    MR_Word STATE_VARIABLE_CLD_64_64;
    MR_Word STATE_VARIABLE_CI_65_65;
    MR_Word STATE_VARIABLE_CLD_66_66;
    MR_Word Var_67;
    MR_Word STATE_VARIABLE_CI_68_68;
    MR_Word STATE_VARIABLE_CLD_69_69;
    MR_Word Var_70;
    MR_Word STATE_VARIABLE_CI_71_71;
    MR_Word STATE_VARIABLE_CLD_72_72;
    MR_Word Var_73;
    MR_Word STATE_VARIABLE_CI_74_74;
    MR_Word Var_77;

    if (succeeded)
    {
      FirstDisjunct_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Disjuncts_14, (MR_Integer) 0))));
      LaterDisjuncts_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Disjuncts_14, (MR_Integer) 1))));
      succeeded = (LaterDisjuncts_21 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LaterDisjuncts_21, (MR_Integer) 1))));
        succeeded = (Var_56 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          DisjNonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(DisjGoalInfo_15);
          succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(DisjNonLocals_25, FirstDisjunct_20);
          if (succeeded)
          {
            succeeded = hlds__goal_form__all_disjuncts_are_conj_of_unify_2_p_0(DisjNonLocals_25, LaterDisjuncts_21);
            if (succeeded)
            {
              ll_backend__code_info__get_maybe_trace_info_2_p_0(STATE_VARIABLE_CI_0_53, &MaybeTraceInfo_26);
              succeeded = (MaybeTraceInfo_26 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_53, &Globals_27);
                Var_57 = (MR_Integer) 472;
                Var_58 = (MR_Integer) 1;
                succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_27, Var_57, Var_58);
                if (succeeded)
                {
                  succeeded = (AddRegionOps_12 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    ll_backend__lookup_util__figure_out_output_vars_4_p_0(STATE_VARIABLE_CI_0_53, STATE_VARIABLE_CLD_0_55, DisjGoalInfo_15, &OutVars_28);
                    ll_backend__code_info__get_vartypes_2_p_0(STATE_VARIABLE_CI_0_53, &VarTypes_29);
                    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_29, OutVars_28, &OutTypes_30);
                    TypeCtorInfo_76_76 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                    Var_59 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_76_76, ResumeVars_13);
                    ll_backend__code_loc_dep__produce_vars_6_p_0(Var_59, &ResumeMap_31, &FlushCode_32, STATE_VARIABLE_CI_0_53, STATE_VARIABLE_CLD_0_55, &STATE_VARIABLE_CLD_60_60);
                    Var_61 = (MR_Word) ((MR_Unsigned) 12U);
                    Var_62 = (MR_Integer) 1;
                    ll_backend__code_loc_dep__acquire_temp_slot_7_p_0(Var_61, Var_62, &CurSlot_33, STATE_VARIABLE_CI_0_53, &STATE_VARIABLE_CI_63_63, STATE_VARIABLE_CLD_60_60, &STATE_VARIABLE_CLD_64_64);
                    ll_backend__code_loc_dep__maybe_save_ticket_7_p_0(AddTrailOps_11, &SaveTicketCode_34, &MaybeTicketSlot_35, STATE_VARIABLE_CI_63_63, &STATE_VARIABLE_CI_65_65, STATE_VARIABLE_CLD_64_64, &STATE_VARIABLE_CLD_66_66);
                    ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_65_65, &Var_77);
                    succeeded = libs__globals____Unify____globals_0_0(Globals_27, Var_77);
                    if (succeeded)
                    {
                      Var_67 = (MR_Integer) 327;
                      libs__globals__lookup_bool_option_3_p_0(Globals_27, Var_67, &ReclaimHeap_36);
                      ll_backend__code_loc_dep__maybe_save_hp_7_p_0(ReclaimHeap_36, &SaveHpCode_37, &MaybeHpSlot_38, STATE_VARIABLE_CI_65_65, &STATE_VARIABLE_CI_68_68, STATE_VARIABLE_CLD_66_66, &STATE_VARIABLE_CLD_69_69);
                      Var_70 = (MR_Integer) 2;
                      ll_backend__code_loc_dep__prepare_for_disj_hijack_7_p_0(Var_70, &HijackInfo_39, &PrepareHijackCode_40, STATE_VARIABLE_CI_68_68, &STATE_VARIABLE_CI_71_71, STATE_VARIABLE_CLD_69_69, &STATE_VARIABLE_CLD_72_72);
                      ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_72_72, AfterPrepPos_19);
                      hlds__hlds_llds__goal_info_get_store_map_2_p_0(DisjGoalInfo_15, &StoreMap_41);
                      ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_72_72, &DisjStart_42);
                      Var_73 = (MR_Word) ((MR_Unsigned) 0U);
                      succeeded = ll_backend__lookup_util__generate_constants_for_disjunct_10_p_0(DisjStart_42, FirstDisjunct_20, OutVars_28, StoreMap_41, &FirstSoln_43, Var_73, &MaybeEnd1_44, &Liveness_45, STATE_VARIABLE_CI_71_71, &STATE_VARIABLE_CI_74_74);
                      if (succeeded)
                      {
                        succeeded = ll_backend__lookup_util__generate_constants_for_disjuncts_9_p_0(DisjStart_42, LaterDisjuncts_21, OutVars_28, StoreMap_41, &LaterSolns_46, MaybeEnd1_44, &MaybeEnd_47, STATE_VARIABLE_CI_74_74, STATE_VARIABLE_CI_54);
                        if (succeeded)
                        {
                          {
                            Solns_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Solns_48, 0) = ((MR_Box) (FirstSoln_43));
                            MR_hl_field(MR_mktag(1), Solns_48, 1) = ((MR_Box) (LaterSolns_46));
                          }
                          ll_backend__code_info__get_exprn_opts_2_p_0(*STATE_VARIABLE_CI_54, &ExprnOpts_49);
                          UnboxFloats_50 = ll_backend__llds__get_unboxed_floats_1_f_0(ExprnOpts_49);
                          UnboxInt64s_51 = ll_backend__llds__get_unboxed_int64s_1_f_0(ExprnOpts_49);
                          succeeded = ll_backend__global_data__find_general_llds_types_5_p_0(UnboxFloats_50, UnboxInt64s_51, OutTypes_30, Solns_48, &LLDSTypes_52);
                          if (succeeded)
                          {
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
                              *LookupDisjInfo_16 = base;
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OutVars_28));
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (StoreMap_41));
                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeEnd_47));
                              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Liveness_45));
                              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (CurSlot_33));
                              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ResumeMap_31));
                              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (FlushCode_32));
                              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (SaveTicketCode_34));
                              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (MaybeTicketSlot_35));
                              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (SaveHpCode_37));
                              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (MaybeHpSlot_38));
                              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (HijackInfo_39));
                              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (PrepareHijackCode_40));
                              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Solns_48));
                              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (LLDSTypes_52));
                            }
                            succeeded = MR_TRUE;
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
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____lookup_disj_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__disj_gen____Unify____lookup_disj_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__disj_gen____Compare____lookup_disj_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__disj_gen____Compare____lookup_disj_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module ll_backend.disj_gen.
