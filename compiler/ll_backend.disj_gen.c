/*
** Automatically generated from `disj_gen.m'
** by the Mercury compiler,
** version rotd-2026-03-03
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


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
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
#include "ll_backend.var_locn.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__disj_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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
ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__564__1_2_p_0(
  MR_Word HpSlot_75,
  MR_Word BranchHpSlot_78);

static MR_bool MR_CALL 
ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__562__1_2_p_0(
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
ll_backend__disj_gen__disj_alloc_snapshot_regions_7_p_0(
  MR_Word NumLval_1,
  MR_Word AddrLval_2,
  MR_Word EmbeddedStackFrame_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7);

static void MR_CALL 
ll_backend__disj_gen__disj_protect_regions_7_p_0(
  MR_Word NumLval_1,
  MR_Word AddrLval_2,
  MR_Word EmbeddedStackFrame_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7);

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
  MR_Word STATE_VARIABLE_CI_0_62,
  MR_Word * STATE_VARIABLE_CI_63,
  MR_Word STATE_VARIABLE_CLD_0_64,
  MR_Word * STATE_VARIABLE_CLD_65);

static MR_Box MR_CALL 
ll_backend__disj_gen__is_lookup_disj_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__disj_gen__is_lookup_disj_10_p_0(
  MR_Word AddTrailOps_11,
  MR_Word AddRegionOps_12,
  MR_Word ResumeVars_13,
  MR_Word Disjuncts_14,
  MR_Word DisjGoalInfo_15,
  MR_Word * LookupDisjInfo_16,
  MR_Word STATE_VARIABLE_CI_0_54,
  MR_Word * STATE_VARIABLE_CI_55,
  MR_Word STATE_VARIABLE_CLD_0_56,
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

static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_4[1][6];

static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_5[2][5];




static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_1[13][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__disj_gen_scalar_common_1[0]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__disj_gen_scalar_common_1[1]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__disj_gen_scalar_common_3[1])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 0U << 3)) | (MR_Unsigned) 5U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__disj_gen_scalar_common_3[3]))),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__disj_gen_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0))
  },
};

static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_3[4][1] = {
  /* row   0 */
  { ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0))))) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   2 */
  { (MR_Box) (((MR_Unsigned) 0U << 3)) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "lookup disj")) },
};

static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&ll_backend__disj_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_5[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__disj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__disj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__disj_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__disj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0) }
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
  { (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0) }
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

static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_0[1] = { &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_0 };

static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_1[1] = { &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_1 };

static const MR_DuPtagLayout ll_backend__disj_gen__ll_backend__disj_gen__du_ptag_ordered_commit_disj_region_cleanup_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0_10001)),
  ((MR_Box) (ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0_10001)),
  (MR_String) "ll_backend.disj_gen",
  (MR_String) "commit_disj_region_cleanup",
  { ll_backend__disj_gen__ll_backend__disj_gen__du_name_ordered_commit_disj_region_cleanup_0 },
  { ll_backend__disj_gen__ll_backend__disj_gen__du_ptag_ordered_commit_disj_region_cleanup_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__disj_gen__ll_backend__disj_gen__functor_number_map_commit_disj_region_cleanup_0,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
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
  { (MR_TypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0) }
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
  { (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1list__ti_list_1ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0) }
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

static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_lookup_disj_info_0_0[1] = { &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_lookup_disj_info_0_0 };

static const MR_DuPtagLayout ll_backend__disj_gen__ll_backend__disj_gen__du_ptag_ordered_lookup_disj_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_lookup_disj_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_name_ordered_lookup_disj_info_0[1] = { &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_lookup_disj_info_0_0 };

static const MR_Integer ll_backend__disj_gen__ll_backend__disj_gen__functor_number_map_lookup_disj_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__disj_gen__ll_backend__disj_gen__type_ctor_info_lookup_disj_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__disj_gen____Unify____lookup_disj_info_0_0_10001)),
  ((MR_Box) (ll_backend__disj_gen____Compare____lookup_disj_info_0_0_10001)),
  (MR_String) "ll_backend.disj_gen",
  (MR_String) "lookup_disj_info",
  { ll_backend__disj_gen__ll_backend__disj_gen__du_name_ordered_lookup_disj_info_0 },
  { ll_backend__disj_gen__ll_backend__disj_gen__du_ptag_ordered_lookup_disj_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__disj_gen__ll_backend__disj_gen__functor_number_map_lookup_disj_info_0,

};

static MR_bool MR_CALL 
ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__564__1_2_p_0(
  MR_Word HpSlot_75,
  MR_Word BranchHpSlot_78)
{
  MR_bool succeeded;

  succeeded = ll_backend__llds____Unify____lval_0_0(HpSlot_75, BranchHpSlot_78);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__562__1_2_p_0(
  MR_Word HpCodeInstrs_80,
  MR_Word BranchHpCodeInstrs_81)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[2]), ((MR_Box) (HpCodeInstrs_80)), ((MR_Box) (BranchHpCodeInstrs_81)));
  return succeeded;
}

static void MR_CALL 
ll_backend__disj_gen____Compare____lookup_disj_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_48 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_49 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_48 == CastY_49);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 9))));
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 10))));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 11))));
    MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 12))));
    MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 12))));
    MR_Word ArgX14_43 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 13))));
    MR_Word ArgY14_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 13))));
    MR_Word ArgX15_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 14))));
    MR_Word ArgY15_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 14))));
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

static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____lookup_disj_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 10))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 11))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 12))));
    MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 12))));
    MR_Word ArgX14_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 13))));
    MR_Word ArgY14_30 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 13))));
    MR_Word ArgX15_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 14))));
    MR_Word ArgY15_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 14))));

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

static void MR_CALL 
ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    ll_backend__llds____Compare____label_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      succeeded = ll_backend__llds____Unify____label_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&ll_backend__disj_gen_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
  }
  return succeeded;
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
  MR_bool succeeded;

  if ((Goals_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    switch (CodeModel_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.disj_gen.generate_disj\'/8", (MR_String) "empty disjunction");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word BeforeFailure_15;

          ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_0_30, &BeforeFailure_15);
          ll_backend__code_loc_dep__generate_failure_3_p_0(Code_12, STATE_VARIABLE_CI_0_28, STATE_VARIABLE_CLD_0_30);
          ll_backend__code_loc_dep__reset_to_position_3_p_0(BeforeFailure_15, STATE_VARIABLE_CI_0_28, STATE_VARIABLE_CLD_31);
        }
        break;
    }
    *STATE_VARIABLE_CI_29 = STATE_VARIABLE_CI_0_28;
  }
  else
  {
    MR_Word Goal_16 = ((MR_Word) ((MR_hl_field(1, Goals_10, 0))));
    MR_Word GoalInfo_19 = ((MR_Word) ((MR_hl_field(0, Goal_16, 1))));
    MR_Word Resume_20;
    MR_Word ResumeVars_23;
    MR_Word AddTrailOps_24;
    MR_Word AddRegionOps_25;
    MR_Word LookupDisjInfo_26;
    MR_Word AfterPrepPos_27;
    MR_Word STATE_VARIABLE_CI_1_35;

    hlds__hlds_llds__goal_info_get_resume_point_2_p_0(GoalInfo_19, &Resume_20);
    if ((Resume_20 == (MR_Word) ((MR_Unsigned) 0U)))
      ResumeVars_23 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    else
      ResumeVars_23 = ((MR_Word) ((MR_hl_field(1, Resume_20, 0))));
    AddTrailOps_24 = ll_backend__code_info__should_add_trail_ops_2_f_0(STATE_VARIABLE_CI_0_28, GoalInfo_19);
    AddRegionOps_25 = ll_backend__code_info__should_add_region_ops_2_f_0(STATE_VARIABLE_CI_0_28, GoalInfo_19);
    succeeded = (CodeModel_9 == (MR_Integer) 2);
    if (succeeded)
      succeeded = ll_backend__disj_gen__is_lookup_disj_10_p_0(AddTrailOps_24, AddRegionOps_25, ResumeVars_23, Goals_10, DisjGoalInfo_11, &LookupDisjInfo_26, STATE_VARIABLE_CI_0_28, &STATE_VARIABLE_CI_1_35, STATE_VARIABLE_CLD_0_30, &AfterPrepPos_27);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_CLD_2_36;

      ll_backend__code_loc_dep__reset_to_position_3_p_0(AfterPrepPos_27, STATE_VARIABLE_CI_1_35, &STATE_VARIABLE_CLD_2_36);
      ll_backend__disj_gen__generate_lookup_disj_7_p_0(ResumeVars_23, LookupDisjInfo_26, Code_12, STATE_VARIABLE_CI_1_35, STATE_VARIABLE_CI_29, STATE_VARIABLE_CLD_2_36, STATE_VARIABLE_CLD_31);
    }
    else
    {
      MR_Word ResumeMap_38;
      MR_Word FlushCode_39;
      MR_Word Globals_40;
      MR_Word SaveTicketCode_41;
      MR_Word MaybeTicketSlot_42;
      MR_Word ReclaimHeap_43;
      MR_Word SaveHpCode_44;
      MR_Word MaybeHpSlot_45;
      MR_Word BeforeEnterRegionCode_46;
      MR_Word LaterRegionCode_47;
      MR_Word LastRegionCode_48;
      MR_Word RegionStackVarsToRelease_49;
      MR_Word RegionCommitDisjCleanup_50;
      MR_Word HijackInfo_59;
      MR_Word PrepareHijackCode_60;
      MR_Word EndLabel_61;
      MR_Word BranchStart_62;
      MR_Word MaybeEnd_63;
      MR_Word GoalsCode_64;
      MR_Word StoreMap_65;
      MR_Word Var_66;
      MR_Word STATE_VARIABLE_CLD_1_67;
      MR_Word STATE_VARIABLE_CI_1_68;
      MR_Word STATE_VARIABLE_CLD_2_69;
      MR_Word STATE_VARIABLE_CI_3_73;
      MR_Word STATE_VARIABLE_CLD_4_74;
      MR_Word STATE_VARIABLE_CI_5_78;
      MR_Word STATE_VARIABLE_CLD_6_79;
      MR_Word STATE_VARIABLE_CI_6_80;
      MR_Word STATE_VARIABLE_CI_7_83;
      MR_Word STATE_VARIABLE_CLD_7_84;
      MR_Word STATE_VARIABLE_CLD_8_86;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;

      Var_66 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars_23);
      ll_backend__code_loc_dep__produce_vars_5_p_0(Var_66, &ResumeMap_38, &FlushCode_39, STATE_VARIABLE_CLD_0_30, &STATE_VARIABLE_CLD_1_67);
      ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_28, &Globals_40);
      ll_backend__code_loc_dep__maybe_save_ticket_7_p_0(AddTrailOps_24, &SaveTicketCode_41, &MaybeTicketSlot_42, STATE_VARIABLE_CI_0_28, &STATE_VARIABLE_CI_1_68, STATE_VARIABLE_CLD_1_67, &STATE_VARIABLE_CLD_2_69);
      switch (CodeModel_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_Word MaybeRbmmInfo_51;

            libs__globals__lookup_bool_option_3_p_0(Globals_40, (MR_Integer) 780, &ReclaimHeap_43);
            SaveHpCode_44 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            MaybeHpSlot_45 = (MR_Word) ((MR_Unsigned) 0U);
            MaybeRbmmInfo_51 = hlds__hlds_goal__goal_info_get_maybe_rbmm_1_f_0(DisjGoalInfo_11);
            if ((MaybeRbmmInfo_51 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              BeforeEnterRegionCode_46 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              LaterRegionCode_47 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              LastRegionCode_48 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              RegionStackVarsToRelease_49 = (MR_Word) ((MR_Unsigned) 0U);
              RegionCommitDisjCleanup_50 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_CI_3_73 = STATE_VARIABLE_CI_1_68;
              STATE_VARIABLE_CLD_4_74 = STATE_VARIABLE_CLD_2_69;
            }
            else
            {
              MR_Word RbmmInfo_52 = ((MR_Word) ((MR_hl_field(1, MaybeRbmmInfo_51, 0))));
              MR_Word DisjCreatedRegionVars_53 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_52, 0))));
              MR_Word DisjRemovedRegionVars_54 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_52, 1))));
              MR_Word DisjAllocRegionVars_56 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_52, 3))));

              succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[0]), DisjCreatedRegionVars_53);
              if (succeeded)
              {
                succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[0]), DisjRemovedRegionVars_54);
                if (succeeded)
                  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[0]), DisjAllocRegionVars_56);
              }
              if (succeeded)
              {
                BeforeEnterRegionCode_46 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                LaterRegionCode_47 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                LastRegionCode_48 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                RegionStackVarsToRelease_49 = (MR_Word) ((MR_Unsigned) 0U);
                RegionCommitDisjCleanup_50 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_CLD_4_74 = STATE_VARIABLE_CLD_2_69;
                STATE_VARIABLE_CI_3_73 = STATE_VARIABLE_CI_1_68;
              }
              else
              {
                MR_Word Var_76;
                MR_Word Var_77;

                Var_76 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DisjRemovedRegionVars_54);
                Var_77 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DisjAllocRegionVars_56);
                ll_backend__disj_gen__maybe_create_disj_region_frame_semi_12_p_0(AddRegionOps_25, Var_76, Var_77, &BeforeEnterRegionCode_46, &LaterRegionCode_47, &LastRegionCode_48, &RegionStackVarsToRelease_49, &RegionCommitDisjCleanup_50, STATE_VARIABLE_CI_1_68, &STATE_VARIABLE_CI_3_73, STATE_VARIABLE_CLD_2_69, &STATE_VARIABLE_CLD_4_74);
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word STATE_VARIABLE_CI_2_71;
            MR_Word STATE_VARIABLE_CLD_3_72;

            libs__globals__lookup_bool_option_3_p_0(Globals_40, (MR_Integer) 781, &ReclaimHeap_43);
            ll_backend__code_loc_dep__maybe_save_hp_7_p_0(ReclaimHeap_43, &SaveHpCode_44, &MaybeHpSlot_45, STATE_VARIABLE_CI_1_68, &STATE_VARIABLE_CI_2_71, STATE_VARIABLE_CLD_2_69, &STATE_VARIABLE_CLD_3_72);
            ll_backend__disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_9_p_0(AddRegionOps_25, &BeforeEnterRegionCode_46, &LaterRegionCode_47, &LastRegionCode_48, STATE_VARIABLE_CI_2_71, &STATE_VARIABLE_CI_3_73, STATE_VARIABLE_CLD_3_72, &STATE_VARIABLE_CLD_4_74);
            RegionStackVarsToRelease_49 = (MR_Word) ((MR_Unsigned) 0U);
            RegionCommitDisjCleanup_50 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
      ll_backend__code_loc_dep__prepare_for_disj_hijack_7_p_0(CodeModel_9, &HijackInfo_59, &PrepareHijackCode_60, STATE_VARIABLE_CI_3_73, &STATE_VARIABLE_CI_5_78, STATE_VARIABLE_CLD_4_74, &STATE_VARIABLE_CLD_6_79);
      ll_backend__code_info__get_next_label_3_p_0(&EndLabel_61, STATE_VARIABLE_CI_5_78, &STATE_VARIABLE_CI_6_80);
      ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_6_79, &BranchStart_62);
      ll_backend__disj_gen__generate_disjuncts_19_p_0(Goals_10, CodeModel_9, ResumeMap_38, (MR_Word) ((MR_Unsigned) 0U), HijackInfo_59, DisjGoalInfo_11, RegionCommitDisjCleanup_50, EndLabel_61, ReclaimHeap_43, MaybeHpSlot_45, MaybeTicketSlot_42, LaterRegionCode_47, LastRegionCode_48, BranchStart_62, (MR_Word) ((MR_Unsigned) 0U), &MaybeEnd_63, &GoalsCode_64, STATE_VARIABLE_CI_6_80, &STATE_VARIABLE_CI_7_83);
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(DisjGoalInfo_11, &StoreMap_65);
      ll_backend__code_loc_dep__after_all_branches_4_p_0(StoreMap_65, MaybeEnd_63, STATE_VARIABLE_CI_7_83, &STATE_VARIABLE_CLD_7_84);
      ll_backend__code_loc_dep__release_several_temp_slots_6_p_0(RegionStackVarsToRelease_49, (MR_Integer) 1, STATE_VARIABLE_CI_7_83, STATE_VARIABLE_CI_29, STATE_VARIABLE_CLD_7_84, &STATE_VARIABLE_CLD_8_86);
      switch (CodeModel_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_CLD_31 = STATE_VARIABLE_CLD_8_86;
          break;
        case (MR_Integer) 2:
          ll_backend__code_loc_dep__set_resume_point_to_unknown_2_p_0(STATE_VARIABLE_CLD_8_86, STATE_VARIABLE_CLD_31);
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_CLD_31 = STATE_VARIABLE_CLD_8_86;
          break;
      }
      Var_90 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PrepareHijackCode_60, GoalsCode_64);
      Var_89 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BeforeEnterRegionCode_46, Var_90);
      Var_88 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveHpCode_44, Var_89);
      Var_87 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveTicketCode_41, Var_88);
      *Code_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FlushCode_39, Var_87);
    }
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
        MR_Word STATE_VARIABLE_CLD_1_48;
        MR_Word STATE_VARIABLE_CLD_2_50;
        MR_Word STATE_VARIABLE_CLD_3_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word STATE_VARIABLE_CLD_4_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_74;
        MR_Word STATE_VARIABLE_CLD_5_76;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word _StackVars_27;

        ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(STATE_VARIABLE_CLD_0_40, &ForwardLiveVars_17);
        SnapshotRegionVars_19 = ll_backend__code_info__filter_region_vars_2_f_0(STATE_VARIABLE_CI_0_38, ForwardLiveVars_17);
        SnapshotRegionVarList_20 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SnapshotRegionVars_19);
        mercury__list__length_2_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[0]), SnapshotRegionVarList_20, &NumSnapshotRegionVars_21);
        ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_38, &Globals_22);
        libs__globals__lookup_int_option_3_p_0(Globals_22, (MR_Integer) 772, &FixedSize_23);
        libs__globals__lookup_int_option_3_p_0(Globals_22, (MR_Integer) 777, &SnapshotSize_24);
        Var_44 = (MR_Integer) ((MR_Unsigned) SnapshotSize_24 * (MR_Unsigned) NumSnapshotRegionVars_21);
        FrameSize_25 = (MR_Integer) ((MR_Unsigned) FixedSize_23 + (MR_Unsigned) Var_44);
        Items_26 = mercury__list__duplicate_2_f_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0), FrameSize_25, ((MR_Box) ((MR_Unsigned) 32U)));
        ll_backend__code_loc_dep__acquire_several_temp_slots_10_p_0(Items_26, (MR_Integer) 1, &_StackVars_27, &MainStackId_28, &FirstSlotNum_29, &LastSlotNum_30, STATE_VARIABLE_CI_0_38, STATE_VARIABLE_CI_39, STATE_VARIABLE_CLD_0_40, &STATE_VARIABLE_CLD_1_48);
        {
          EmbeddedStackFrame_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, EmbeddedStackFrame_31, 0) = (MR_Box) ((MR_Unsigned) (MainStackId_28));
          MR_hl_field(0, EmbeddedStackFrame_31, 1) = ((MR_Box) (FirstSlotNum_29));
          MR_hl_field(0, EmbeddedStackFrame_31, 2) = ((MR_Box) (LastSlotNum_30));
        }
        FirstNonFixedAddr_32 = ll_backend__llds__first_nonfixed_embedded_slot_addr_2_f_0(EmbeddedStackFrame_31, FixedSize_23);
        ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &SnapshotNumRegLval_33, STATE_VARIABLE_CLD_1_48, &STATE_VARIABLE_CLD_2_50);
        ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &AddrRegLval_34, STATE_VARIABLE_CLD_2_50, &STATE_VARIABLE_CLD_3_52);
        {
          Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(3, Var_55, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(3, Var_55, 2) = ((MR_Box) (EmbeddedStackFrame_31));
        }
        {
          Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_54, 0) = ((MR_Box) (Var_55));
          MR_hl_field(0, Var_54, 1) = ((MR_Box) ((MR_String) "Save stack pointer of embedded region nondet stack"));
        }
        {
          Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_60, 1) = ((MR_Box) (SnapshotNumRegLval_33));
          MR_hl_field(3, Var_60, 2) = ((MR_Box) (MR_mkword(3, &ll_backend__disj_gen_scalar_common_1[10])));
        }
        {
          Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_59, 0) = ((MR_Box) (Var_60));
          MR_hl_field(0, Var_59, 1) = ((MR_Box) ((MR_String) "Initialize number of snapshot_infos"));
        }
        {
          Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_67, 1) = ((MR_Box) (AddrRegLval_34));
          MR_hl_field(3, Var_67, 2) = ((MR_Box) (FirstNonFixedAddr_32));
        }
        {
          Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_66, 0) = ((MR_Box) (Var_67));
          MR_hl_field(0, Var_66, 1) = ((MR_Box) ((MR_String) "Initialize pointer to nonfixed part of embedded frame"));
        }
        {
          Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
          MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_58));
        }
        PushInitCode_35 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_53);
        ll_backend__disj_gen__disj_alloc_snapshot_regions_7_p_0(SnapshotNumRegLval_33, AddrRegLval_34, EmbeddedStackFrame_31, SnapshotRegionVarList_20, &SnapshotRegionCode_36, STATE_VARIABLE_CLD_3_52, &STATE_VARIABLE_CLD_4_70);
        {
          Var_74 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_74, 0) = ((MR_Box) (SnapshotNumRegLval_33));
        }
        {
          Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 18U));
          MR_hl_field(3, Var_72, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
          MR_hl_field(3, Var_72, 2) = ((MR_Box) (EmbeddedStackFrame_31));
          MR_hl_field(3, Var_72, 3) = ((MR_Box) (Var_74));
        }
        {
          Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_71, 0) = ((MR_Box) (Var_72));
          MR_hl_field(0, Var_71, 1) = ((MR_Box) ((MR_String) "Store the number of snapshot_infos"));
        }
        SetCode_37 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_71)));
        ll_backend__code_loc_dep__release_reg_3_p_0(SnapshotNumRegLval_33, STATE_VARIABLE_CLD_4_70, &STATE_VARIABLE_CLD_5_76);
        ll_backend__code_loc_dep__release_reg_3_p_0(AddrRegLval_34, STATE_VARIABLE_CLD_5_76, STATE_VARIABLE_CLD_41);
        Var_78 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SnapshotRegionCode_36, SetCode_37);
        *BeforeEnterCode_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PushInitCode_35, Var_78);
        {
          Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 19U));
          MR_hl_field(3, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, Var_80, 2) = ((MR_Box) (EmbeddedStackFrame_31));
        }
        {
          Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_79, 0) = ((MR_Box) (Var_80));
          MR_hl_field(0, Var_79, 1) = ((MR_Box) ((MR_String) "region enter later disjunct"));
        }
        *LaterCode_13 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_79)));
        {
          Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 19U));
          MR_hl_field(3, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_84, 2) = ((MR_Box) (EmbeddedStackFrame_31));
        }
        {
          Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_83, 0) = ((MR_Box) (Var_84));
          MR_hl_field(0, Var_83, 1) = ((MR_Box) ((MR_String) "region enter last disjunct"));
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
        MR_Word STATE_VARIABLE_CI_1_61;
        MR_Word STATE_VARIABLE_CLD_1_62;
        MR_Word STATE_VARIABLE_CLD_2_64;
        MR_Word STATE_VARIABLE_CLD_3_66;
        MR_Word STATE_VARIABLE_CLD_4_68;
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
        MR_Word STATE_VARIABLE_CLD_5_93;
        MR_Word STATE_VARIABLE_CLD_6_94;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word Var_97;
        MR_Word Var_99;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_105;
        MR_Word STATE_VARIABLE_CLD_7_108;
        MR_Word STATE_VARIABLE_CLD_8_109;
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
        mercury__list__length_2_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[0]), ProtectRegionVarList_25, &NumProtectRegionVars_27);
        mercury__list__length_2_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[0]), SnapshotRegionVarList_26, &NumSnapshotRegionVars_28);
        ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_49, &Globals_29);
        libs__globals__lookup_int_option_3_p_0(Globals_29, (MR_Integer) 772, &FixedSize_30);
        libs__globals__lookup_int_option_3_p_0(Globals_29, (MR_Integer) 776, &ProtectSize_31);
        libs__globals__lookup_int_option_3_p_0(Globals_29, (MR_Integer) 777, &SnapshotSize_32);
        Var_57 = (MR_Integer) ((MR_Unsigned) ProtectSize_31 * (MR_Unsigned) NumProtectRegionVars_27);
        Var_56 = (MR_Integer) ((MR_Unsigned) FixedSize_30 + (MR_Unsigned) Var_57);
        Var_58 = (MR_Integer) ((MR_Unsigned) SnapshotSize_32 * (MR_Unsigned) NumSnapshotRegionVars_28);
        FrameSize_33 = (MR_Integer) ((MR_Unsigned) Var_56 + (MR_Unsigned) Var_58);
        Items_34 = mercury__list__duplicate_2_f_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0), FrameSize_33, ((MR_Box) ((MR_Unsigned) 32U)));
        ll_backend__code_loc_dep__acquire_several_temp_slots_10_p_0(Items_34, (MR_Integer) 1, StackVars_19, &MainStackId_35, &FirstSlotNum_36, &LastSlotNum_37, STATE_VARIABLE_CI_0_49, &STATE_VARIABLE_CI_1_61, STATE_VARIABLE_CLD_0_51, &STATE_VARIABLE_CLD_1_62);
        {
          EmbeddedStackFrame_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, EmbeddedStackFrame_38, 0) = (MR_Box) ((MR_Unsigned) (MainStackId_35));
          MR_hl_field(0, EmbeddedStackFrame_38, 1) = ((MR_Box) (FirstSlotNum_36));
          MR_hl_field(0, EmbeddedStackFrame_38, 2) = ((MR_Box) (LastSlotNum_37));
        }
        FirstNonFixedAddr_39 = ll_backend__llds__first_nonfixed_embedded_slot_addr_2_f_0(EmbeddedStackFrame_38, FixedSize_30);
        ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ProtectNumRegLval_40, STATE_VARIABLE_CLD_1_62, &STATE_VARIABLE_CLD_2_64);
        ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &SnapshotNumRegLval_41, STATE_VARIABLE_CLD_2_64, &STATE_VARIABLE_CLD_3_66);
        ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &AddrRegLval_42, STATE_VARIABLE_CLD_3_66, &STATE_VARIABLE_CLD_4_68);
        {
          Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(3, Var_71, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(3, Var_71, 2) = ((MR_Box) (EmbeddedStackFrame_38));
        }
        {
          Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_70, 0) = ((MR_Box) (Var_71));
          MR_hl_field(0, Var_70, 1) = ((MR_Box) ((MR_String) "Save stack pointer of embedded region nondet stack"));
        }
        Var_77 = (MR_Word) (MR_mkword(3, &ll_backend__disj_gen_scalar_common_1[10]));
        {
          Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_76, 1) = ((MR_Box) (ProtectNumRegLval_40));
          MR_hl_field(3, Var_76, 2) = ((MR_Box) (Var_77));
        }
        {
          Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_75, 0) = ((MR_Box) (Var_76));
          MR_hl_field(0, Var_75, 1) = ((MR_Box) ((MR_String) "Initialize number of protect_infos"));
        }
        {
          Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_83, 1) = ((MR_Box) (SnapshotNumRegLval_41));
          MR_hl_field(3, Var_83, 2) = ((MR_Box) (Var_77));
        }
        {
          Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_82, 0) = ((MR_Box) (Var_83));
          MR_hl_field(0, Var_82, 1) = ((MR_Box) ((MR_String) "Initialize number of snapshot_infos"));
        }
        {
          Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_90, 1) = ((MR_Box) (AddrRegLval_42));
          MR_hl_field(3, Var_90, 2) = ((MR_Box) (FirstNonFixedAddr_39));
        }
        {
          Var_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_89, 0) = ((MR_Box) (Var_90));
          MR_hl_field(0, Var_89, 1) = ((MR_Box) ((MR_String) "Initialize pointer to nonfixed part of embedded frame"));
        }
        {
          Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
          MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
          MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_88));
        }
        {
          Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
          MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_81));
        }
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_74));
        }
        PushInitCode_43 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_69);
        ll_backend__disj_gen__disj_protect_regions_7_p_0(ProtectNumRegLval_40, AddrRegLval_42, EmbeddedStackFrame_38, ProtectRegionVarList_25, &ProtectRegionCode_44, STATE_VARIABLE_CLD_4_68, &STATE_VARIABLE_CLD_5_93);
        ll_backend__disj_gen__disj_alloc_snapshot_regions_7_p_0(SnapshotNumRegLval_41, AddrRegLval_42, EmbeddedStackFrame_38, SnapshotRegionVarList_26, &SnapshotRegionCode_45, STATE_VARIABLE_CLD_5_93, &STATE_VARIABLE_CLD_6_94);
        {
          Var_99 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_99, 0) = ((MR_Box) (ProtectNumRegLval_40));
        }
        {
          Var_97 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_97, 0) = ((MR_Box) ((MR_Unsigned) 18U));
          MR_hl_field(3, Var_97, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
          MR_hl_field(3, Var_97, 2) = ((MR_Box) (EmbeddedStackFrame_38));
          MR_hl_field(3, Var_97, 3) = ((MR_Box) (Var_99));
        }
        {
          Var_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_96, 0) = ((MR_Box) (Var_97));
          MR_hl_field(0, Var_96, 1) = ((MR_Box) ((MR_String) "Store the number of protect_infos"));
        }
        {
          Var_105 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_105, 0) = ((MR_Box) (SnapshotNumRegLval_41));
        }
        {
          Var_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_103, 0) = ((MR_Box) ((MR_Unsigned) 18U));
          MR_hl_field(3, Var_103, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
          MR_hl_field(3, Var_103, 2) = ((MR_Box) (EmbeddedStackFrame_38));
          MR_hl_field(3, Var_103, 3) = ((MR_Box) (Var_105));
        }
        {
          Var_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_102, 0) = ((MR_Box) (Var_103));
          MR_hl_field(0, Var_102, 1) = ((MR_Box) ((MR_String) "Store the number of snapshot_infos"));
        }
        {
          Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
          MR_hl_field(1, Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
          MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_101));
        }
        SetCode_46 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_95);
        ll_backend__code_loc_dep__release_reg_3_p_0(ProtectNumRegLval_40, STATE_VARIABLE_CLD_6_94, &STATE_VARIABLE_CLD_7_108);
        ll_backend__code_loc_dep__release_reg_3_p_0(SnapshotNumRegLval_41, STATE_VARIABLE_CLD_7_108, &STATE_VARIABLE_CLD_8_109);
        ll_backend__code_loc_dep__release_reg_3_p_0(AddrRegLval_42, STATE_VARIABLE_CLD_8_109, STATE_VARIABLE_CLD_52);
        Var_112 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SnapshotRegionCode_45, SetCode_46);
        Var_111 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProtectRegionCode_44, Var_112);
        *BeforeEnterCode_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PushInitCode_43, Var_111);
        {
          Var_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_114, 0) = ((MR_Box) ((MR_Unsigned) 19U));
          MR_hl_field(3, Var_114, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, Var_114, 2) = ((MR_Box) (EmbeddedStackFrame_38));
        }
        {
          Var_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_113, 0) = ((MR_Box) (Var_114));
          MR_hl_field(0, Var_113, 1) = ((MR_Box) ((MR_String) "region enter later disjunct"));
        }
        *LaterCode_17 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_113)));
        {
          Var_118 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_118, 0) = ((MR_Box) ((MR_Unsigned) 19U));
          MR_hl_field(3, Var_118, 1) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_118, 2) = ((MR_Box) (EmbeddedStackFrame_38));
        }
        {
          Var_117 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_117, 0) = ((MR_Box) (Var_118));
          MR_hl_field(0, Var_117, 1) = ((MR_Box) ((MR_String) "region enter last disjunct"));
        }
        *LastCode_18 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_117)));
        ll_backend__code_info__get_next_label_3_p_0(&CleanupLabel_47, STATE_VARIABLE_CI_1_61, STATE_VARIABLE_CI_50);
        {
          Var_123 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_123, 0) = ((MR_Box) ((MR_Unsigned) 19U));
          MR_hl_field(3, Var_123, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(3, Var_123, 2) = ((MR_Box) (EmbeddedStackFrame_38));
        }
        {
          Var_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_122, 0) = ((MR_Box) (Var_123));
          MR_hl_field(0, Var_122, 1) = ((MR_Box) ((MR_String) "region cleanup commit for nonlast disjunct"));
        }
        CleanupCode_48 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_122)));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *RegionCommitDisjCleanup_20 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (CleanupLabel_47));
          MR_hl_field(1, base, 1) = ((MR_Box) (CleanupCode_48));
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
ll_backend__disj_gen__disj_alloc_snapshot_regions_7_p_0(
  MR_Word NumLval_1,
  MR_Word AddrLval_2,
  MR_Word EmbeddedStackFrame_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CLD_7 = STATE_VARIABLE_CLD_0_6;
  }
  else
  {
    MR_Word RegionVar_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word RegionVars_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word Code_19;
    MR_Word Codes_20;
    MR_Word ProduceVarCode_22;
    MR_Word RegionVarRval_23;
    MR_Word SaveCode_24;
    MR_Word STATE_VARIABLE_CLD_1_27;
    MR_Word Var_28;
    MR_Word Var_29;

    ll_backend__code_loc_dep__produce_variable_5_p_0(RegionVar_17, &ProduceVarCode_22, &RegionVarRval_23, STATE_VARIABLE_CLD_0_6, &STATE_VARIABLE_CLD_1_27);
    {
      Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(3, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_29, 2) = ((MR_Box) (EmbeddedStackFrame_3));
      MR_hl_field(3, Var_29, 3) = ((MR_Box) (RegionVarRval_23));
      MR_hl_field(3, Var_29, 4) = ((MR_Box) (NumLval_1));
      MR_hl_field(3, Var_29, 5) = ((MR_Box) (AddrLval_2));
    }
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) ((MR_String) "take alloc snapshot of the region"));
    }
    SaveCode_24 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_28)));
    Code_19 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProduceVarCode_22, SaveCode_24);
    ll_backend__disj_gen__disj_alloc_snapshot_regions_7_p_0(NumLval_1, AddrLval_2, EmbeddedStackFrame_3, RegionVars_18, &Codes_20, STATE_VARIABLE_CLD_1_27, STATE_VARIABLE_CLD_7);
    *HeadVar__5_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Code_19, Codes_20);
  }
}

static void MR_CALL 
ll_backend__disj_gen__disj_protect_regions_7_p_0(
  MR_Word NumLval_1,
  MR_Word AddrLval_2,
  MR_Word EmbeddedStackFrame_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CLD_7 = STATE_VARIABLE_CLD_0_6;
  }
  else
  {
    MR_Word RegionVar_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word RegionVars_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word Code_19;
    MR_Word Codes_20;
    MR_Word ProduceVarCode_22;
    MR_Word RegionVarRval_23;
    MR_Word SaveCode_24;
    MR_Word STATE_VARIABLE_CLD_1_27;
    MR_Word Var_28;
    MR_Word Var_29;

    ll_backend__code_loc_dep__produce_variable_5_p_0(RegionVar_17, &ProduceVarCode_22, &RegionVarRval_23, STATE_VARIABLE_CLD_0_6, &STATE_VARIABLE_CLD_1_27);
    {
      Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(3, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_29, 2) = ((MR_Box) (EmbeddedStackFrame_3));
      MR_hl_field(3, Var_29, 3) = ((MR_Box) (RegionVarRval_23));
      MR_hl_field(3, Var_29, 4) = ((MR_Box) (NumLval_1));
      MR_hl_field(3, Var_29, 5) = ((MR_Box) (AddrLval_2));
    }
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) ((MR_String) "disj protect the region if needed"));
    }
    SaveCode_24 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_28)));
    Code_19 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProduceVarCode_22, SaveCode_24);
    ll_backend__disj_gen__disj_protect_regions_7_p_0(NumLval_1, AddrLval_2, EmbeddedStackFrame_3, RegionVars_18, &Codes_20, STATE_VARIABLE_CLD_1_27, STATE_VARIABLE_CLD_7);
    *HeadVar__5_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Code_19, Codes_20);
  }
}

static MR_bool MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__564__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__562__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
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
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.disj_gen.generate_disjuncts\'/19", (MR_String) "empty disjunction");
      return;
    }
  else
  {
    MR_Word Goal0_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals_42 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word EntryResumePointCode_62;
    MR_Word GoalExpr0_63;
    MR_Word GoalInfo0_64;
    MR_Word Resume_65;
    MR_Word STATE_VARIABLE_CLD_1_104;
    MR_Word STATE_VARIABLE_CI_1_105;
    MR_Word STATE_VARIABLE_CLD_2_106;

    ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart0_14, STATE_VARIABLE_CI_0_18, &STATE_VARIABLE_CLD_1_104);
    if ((MaybeEntryResumePoint_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      EntryResumePointCode_62 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      STATE_VARIABLE_CI_1_105 = STATE_VARIABLE_CI_0_18;
      STATE_VARIABLE_CLD_2_106 = STATE_VARIABLE_CLD_1_104;
    }
    else
    {
      MR_Word EntryResumePoint_61 = ((MR_Word) ((MR_hl_field(1, MaybeEntryResumePoint_4, 0))));

      ll_backend__code_loc_dep__generate_resume_point_6_p_0(EntryResumePoint_61, &EntryResumePointCode_62, STATE_VARIABLE_CI_0_18, &STATE_VARIABLE_CI_1_105, STATE_VARIABLE_CLD_1_104, &STATE_VARIABLE_CLD_2_106);
    }
    GoalExpr0_63 = ((MR_Word) ((MR_hl_field(0, Goal0_41, 0))));
    GoalInfo0_64 = ((MR_Word) ((MR_hl_field(0, Goal0_41, 1))));
    hlds__hlds_llds__goal_info_get_resume_point_2_p_0(GoalInfo0_64, &Resume_65);
    if ((Resume_65 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word UndoCode_97;
      MR_Word RegionCleanupCode_98;
      MR_Word EndLabelCode_101;
      MR_Word STATE_VARIABLE_CI_11_157;
      MR_Word STATE_VARIABLE_CLD_15_158;
      MR_Word STATE_VARIABLE_CI_12_160;
      MR_Word STATE_VARIABLE_CLD_16_161;
      MR_Word STATE_VARIABLE_CLD_17_162;
      MR_Word STATE_VARIABLE_CI_13_163;
      MR_Word STATE_VARIABLE_CLD_18_164;
      MR_Word Var_177;
      MR_Word Var_178;
      MR_Word Var_180;
      MR_Word Var_181;
      MR_Word Var_182;
      MR_Word Var_183;
      MR_Word Var_184;
      MR_Word Var_185;
      MR_Word Var_186;
      MR_Word Var_187;
      MR_Word RestoreHpCode_190;
      MR_Word RestoreTicketCode_191;
      MR_Word TraceCode_192;
      MR_Word GoalCode_193;
      MR_Word StoreMap_194;
      MR_Word SaveCode_195;
      MR_Word STATE_VARIABLE_CLD_14_197;

      ll_backend__code_loc_dep__maybe_restore_and_release_hp_6_p_0(MaybeHpSlot0_10, &RestoreHpCode_190, STATE_VARIABLE_CI_1_105, &STATE_VARIABLE_CI_11_157, STATE_VARIABLE_CLD_2_106, &STATE_VARIABLE_CLD_15_158);
      ll_backend__code_loc_dep__maybe_reset_discard_and_release_ticket_7_p_0(MaybeTicketSlot_11, (MR_Integer) 0, &RestoreTicketCode_191, STATE_VARIABLE_CI_11_157, &STATE_VARIABLE_CI_12_160, STATE_VARIABLE_CLD_15_158, &STATE_VARIABLE_CLD_16_161);
      ll_backend__code_loc_dep__undo_disj_hijack_4_p_0(HijackInfo_5, &UndoCode_97, STATE_VARIABLE_CLD_16_161, &STATE_VARIABLE_CLD_17_162);
      ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(Goal0_41, DisjGoalInfo_6, &TraceCode_192, STATE_VARIABLE_CI_12_160, &STATE_VARIABLE_CI_13_163, STATE_VARIABLE_CLD_17_162, &STATE_VARIABLE_CLD_18_164);
      ll_backend__code_gen__generate_goal_7_p_0(CodeModel_2, Goal0_41, &GoalCode_193, STATE_VARIABLE_CI_13_163, STATE_VARIABLE_CI_19, STATE_VARIABLE_CLD_18_164, &STATE_VARIABLE_CLD_14_197);
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(DisjGoalInfo_6, &StoreMap_194);
      ll_backend__code_loc_dep__generate_branch_end_5_p_0(StoreMap_194, MaybeEnd0_15, MaybeEnd_16, &SaveCode_195, STATE_VARIABLE_CLD_14_197);
      if ((RegionCommitDisjCleanup_7 == (MR_Word) ((MR_Unsigned) 0U)))
        RegionCleanupCode_98 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      else
      {
        MR_Word CleanupCode_99 = ((MR_Word) ((MR_hl_field(1, RegionCommitDisjCleanup_7, 1))));
        MR_Word RegionCleanupStartCode_100;
        MR_Word Var_167;
        MR_Word Var_168;
        MR_Word Var_169;
        MR_Word Var_170;
        MR_Word Var_172;
        MR_Word Var_173;
        MR_Word Var_174;
        MR_Word CleanupLabel_188 = ((MR_Word) ((MR_hl_field(1, RegionCommitDisjCleanup_7, 0))));

        {
          Var_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_170, 0) = ((MR_Box) (EndLabel_8));
        }
        {
          Var_169 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_169, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_169, 1) = ((MR_Box) (Var_170));
        }
        {
          Var_168 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_168, 0) = ((MR_Box) (Var_169));
          MR_hl_field(0, Var_168, 1) = ((MR_Box) ((MR_String) "Skip over cleanup code at end of disjunction"));
        }
        {
          Var_174 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_174, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_174, 1) = ((MR_Box) (CleanupLabel_188));
        }
        {
          Var_173 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_173, 0) = ((MR_Box) (Var_174));
          MR_hl_field(0, Var_173, 1) = ((MR_Box) ((MR_String) "Cleanup at end of disjunction"));
        }
        {
          Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_172, 0) = ((MR_Box) (Var_173));
          MR_hl_field(1, Var_172, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_167, 0) = ((MR_Box) (Var_168));
          MR_hl_field(1, Var_167, 1) = ((MR_Box) (Var_172));
        }
        RegionCleanupStartCode_100 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_167);
        RegionCleanupCode_98 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RegionCleanupStartCode_100, CleanupCode_99);
      }
      {
        Var_178 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_178, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_178, 1) = ((MR_Box) (EndLabel_8));
      }
      {
        Var_177 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_177, 0) = ((MR_Box) (Var_178));
        MR_hl_field(0, Var_177, 1) = ((MR_Box) ((MR_String) "End of disjunction"));
      }
      EndLabelCode_101 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_177)));
      Var_187 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RegionCleanupCode_98, EndLabelCode_101);
      Var_186 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveCode_195, Var_187);
      Var_185 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GoalCode_193, Var_186);
      Var_184 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), UndoCode_97, Var_185);
      Var_183 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LastRegionCode_13, Var_184);
      Var_182 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreTicketCode_191, Var_183);
      Var_181 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreHpCode_190, Var_182);
      Var_180 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TraceCode_192, Var_181);
      *Code_17 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EntryResumePointCode_62, Var_180);
    }
    else
    {
      MR_Word ResumeVars_66 = ((MR_Word) ((MR_hl_field(1, Resume_65, 0))));
      MR_Word ResumeLocs_67 = ((MR_Unsigned) ((MR_hl_field(1, Resume_65, 1))) & (MR_Integer) 3);
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
      MR_Word FlushResumeVarsCode_86;
      MR_Word GoalCode_87;
      MR_Word PruneTicketCode_88;
      MR_Word Zombies_89;
      MR_Word StoreMap_90;
      MR_Word MaybeEnd1_91;
      MR_Word SaveCode_92;
      MR_Word BranchCode_93;
      MR_Word RestCode_96;
      MR_Word STATE_VARIABLE_CLD_3_110;
      MR_Word STATE_VARIABLE_CI_3_111;
      MR_Word STATE_VARIABLE_CI_4_118;
      MR_Word STATE_VARIABLE_CLD_4_119;
      MR_Word STATE_VARIABLE_CI_5_120;
      MR_Word STATE_VARIABLE_CLD_5_121;
      MR_Word STATE_VARIABLE_CI_6_123;
      MR_Word STATE_VARIABLE_CLD_7_124;
      MR_Word STATE_VARIABLE_CLD_12_133;
      MR_Word STATE_VARIABLE_CLD_13_134;
      MR_Word STATE_VARIABLE_CLD_14_135;
      MR_Word Var_144;
      MR_Word Var_146;
      MR_Word Var_147;
      MR_Word Var_148;
      MR_Word Var_149;
      MR_Word Var_150;
      MR_Word Var_151;
      MR_Word Var_152;
      MR_Word Var_153;
      MR_Word Var_154;
      MR_Word Var_155;
      MR_Word Var_156;

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
        MR_hl_field(0, Goal_73, 0) = ((MR_Box) (GoalExpr0_63));
        MR_hl_field(0, Goal_73, 1) = ((MR_Box) (GoalInfo_72));
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
        MR_Word STATE_VARIABLE_CI_2_109;
        MR_Word Var_112;
        MR_Word Var_115;

        ll_backend__code_loc_dep__save_hp_6_p_0(&SaveHpCode_74, &HpSlot_75, STATE_VARIABLE_CI_1_105, &STATE_VARIABLE_CI_2_109, STATE_VARIABLE_CLD_2_106, &STATE_VARIABLE_CLD_3_110);
        {
          MaybeHpSlot_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeHpSlot_76, 0) = ((MR_Box) (HpSlot_75));
        }
        ll_backend__code_loc_dep__save_hp_in_branch_6_p_0(&BranchSaveHpCode_77, &BranchHpSlot_78, BranchStart0_14, &BranchStart_79, STATE_VARIABLE_CI_2_109, &STATE_VARIABLE_CI_3_111);
        HpCodeInstrs_80 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveHpCode_74);
        BranchHpCodeInstrs_81 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BranchSaveHpCode_77);
        {
          Var_112 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_112, 0) = ((MR_Box) (&ll_backend__disj_gen_scalar_common_5[0]));
          MR_hl_field(0, Var_112, 1) = ((MR_Box) (ll_backend__disj_gen__generate_disjuncts_19_p_0_1));
          MR_hl_field(0, Var_112, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_112, 3) = ((MR_Box) (HpCodeInstrs_80));
          MR_hl_field(0, Var_112, 4) = ((MR_Box) (BranchHpCodeInstrs_81));
        }
        mercury__require__expect_3_p_0(Var_112, (MR_String) "predicate \140ll_backend.disj_gen.generate_disjuncts\'/19", (MR_String) "cannot use same code for saving hp");
        {
          Var_115 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_115, 0) = ((MR_Box) (&ll_backend__disj_gen_scalar_common_5[1]));
          MR_hl_field(0, Var_115, 1) = ((MR_Box) (ll_backend__disj_gen__generate_disjuncts_19_p_0_2));
          MR_hl_field(0, Var_115, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_115, 3) = ((MR_Box) (HpSlot_75));
          MR_hl_field(0, Var_115, 4) = ((MR_Box) (BranchHpSlot_78));
        }
        mercury__require__expect_3_p_0(Var_115, (MR_String) "predicate \140ll_backend.disj_gen.generate_disjuncts\'/19", (MR_String) "cannot allocate same slot for saved hp");
      }
      else
      {
        SaveHpCode_74 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        MaybeHpSlot_76 = MaybeHpSlot0_10;
        BranchStart_79 = BranchStart0_14;
        STATE_VARIABLE_CLD_3_110 = STATE_VARIABLE_CLD_2_106;
        STATE_VARIABLE_CI_3_111 = STATE_VARIABLE_CI_1_105;
      }
      ll_backend__code_loc_dep__make_resume_point_6_p_0(ResumeVars_66, ResumeLocs_67, FullResumeMap_3, &NextResumePoint_82, STATE_VARIABLE_CI_3_111, &STATE_VARIABLE_CI_4_118);
      ll_backend__code_loc_dep__effect_resume_point_5_p_0(NextResumePoint_82, CodeModel_2, &ModContCode_83, STATE_VARIABLE_CLD_3_110, &STATE_VARIABLE_CLD_4_119);
      ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(Goal_73, DisjGoalInfo_6, &TraceCode_84, STATE_VARIABLE_CI_4_118, &STATE_VARIABLE_CI_5_120, STATE_VARIABLE_CLD_4_119, &STATE_VARIABLE_CLD_5_121);
      GoalCodeModel_85 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_72);
      switch (CodeModel_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_CI_7_125;
            MR_Word STATE_VARIABLE_CLD_8_126;
            MR_Word STATE_VARIABLE_CI_8_127;
            MR_Word STATE_VARIABLE_CLD_9_128;
            MR_Word STATE_VARIABLE_CLD_10_131;

            FlushResumeVarsCode_86 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            ll_backend__code_gen__generate_goal_7_p_0(GoalCodeModel_85, Goal_73, &GoalCode_87, STATE_VARIABLE_CI_5_120, &STATE_VARIABLE_CI_7_125, STATE_VARIABLE_CLD_5_121, &STATE_VARIABLE_CLD_8_126);
            ll_backend__code_loc_dep__maybe_release_hp_5_p_0(MaybeHpSlot_76, STATE_VARIABLE_CI_7_125, &STATE_VARIABLE_CI_8_127, STATE_VARIABLE_CLD_8_126, &STATE_VARIABLE_CLD_9_128);
            ll_backend__code_loc_dep__maybe_reset_prune_and_release_ticket_7_p_0(MaybeTicketSlot_11, (MR_Integer) 1, &PruneTicketCode_88, STATE_VARIABLE_CI_8_127, &STATE_VARIABLE_CI_6_123, STATE_VARIABLE_CLD_9_128, &STATE_VARIABLE_CLD_10_131);
            ll_backend__code_loc_dep__reset_resume_known_3_p_0(BranchStart_79, STATE_VARIABLE_CLD_10_131, &STATE_VARIABLE_CLD_7_124);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word STATE_VARIABLE_CLD_6_122;

            ll_backend__code_loc_dep__flush_resume_vars_to_stack_3_p_0(&FlushResumeVarsCode_86, STATE_VARIABLE_CLD_5_121, &STATE_VARIABLE_CLD_6_122);
            ll_backend__code_gen__generate_goal_7_p_0(GoalCodeModel_85, Goal_73, &GoalCode_87, STATE_VARIABLE_CI_5_120, &STATE_VARIABLE_CI_6_123, STATE_VARIABLE_CLD_6_122, &STATE_VARIABLE_CLD_7_124);
            PruneTicketCode_88 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          }
          break;
      }
      ll_backend__code_loc_dep__pop_resume_point_2_p_0(STATE_VARIABLE_CLD_7_124, &STATE_VARIABLE_CLD_12_133);
      ll_backend__code_loc_dep__pickup_zombies_3_p_0(&Zombies_89, STATE_VARIABLE_CLD_12_133, &STATE_VARIABLE_CLD_13_134);
      ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(Zombies_89, STATE_VARIABLE_CLD_13_134, &STATE_VARIABLE_CLD_14_135);
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(DisjGoalInfo_6, &StoreMap_90);
      ll_backend__code_loc_dep__generate_branch_end_5_p_0(StoreMap_90, MaybeEnd0_15, &MaybeEnd1_91, &SaveCode_92, STATE_VARIABLE_CLD_14_135);
      if ((RegionCommitDisjCleanup_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_136;
        MR_Word Var_137;
        MR_Word Var_138;

        {
          Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_138, 0) = ((MR_Box) (EndLabel_8));
        }
        {
          Var_137 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_137, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_137, 1) = ((MR_Box) (Var_138));
        }
        {
          Var_136 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_136, 0) = ((MR_Box) (Var_137));
          MR_hl_field(0, Var_136, 1) = ((MR_Box) ((MR_String) "skip to end of disjunction"));
        }
        BranchCode_93 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_136)));
      }
      else
      {
        MR_Word CleanupLabel_94 = ((MR_Word) ((MR_hl_field(1, RegionCommitDisjCleanup_7, 0))));
        MR_Word Var_140;
        MR_Word Var_141;
        MR_Word Var_142;

        {
          Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_142, 0) = ((MR_Box) (CleanupLabel_94));
        }
        {
          Var_141 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_141, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_141, 1) = ((MR_Box) (Var_142));
        }
        {
          Var_140 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_140, 0) = ((MR_Box) (Var_141));
          MR_hl_field(0, Var_140, 1) = ((MR_Box) ((MR_String) "skip to end of disjunction with region cleanup"));
        }
        BranchCode_93 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_140)));
      }
      {
        Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_144, 0) = ((MR_Box) (NextResumePoint_82));
      }
      ll_backend__disj_gen__generate_disjuncts_19_p_0(Goals_42, CodeModel_2, FullResumeMap_3, Var_144, HijackInfo_5, DisjGoalInfo_6, RegionCommitDisjCleanup_7, EndLabel_8, ReclaimHeap_9, MaybeHpSlot_76, MaybeTicketSlot_11, LaterRegionCode_12, LastRegionCode_13, BranchStart_79, MaybeEnd1_91, MaybeEnd_16, &RestCode_96, STATE_VARIABLE_CI_6_123, STATE_VARIABLE_CI_19);
      Var_156 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BranchCode_93, RestCode_96);
      Var_155 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveCode_92, Var_156);
      Var_154 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PruneTicketCode_88, Var_155);
      Var_153 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GoalCode_87, Var_154);
      Var_152 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FlushResumeVarsCode_86, Var_153);
      Var_151 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TraceCode_84, Var_152);
      Var_150 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ModContCode_83, Var_151);
      Var_149 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThisDisjunctRegionCode_71, Var_150);
      Var_148 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveHpCode_74, Var_149);
      Var_147 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreTicketCode_70, Var_148);
      Var_146 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreHpCode_69, Var_147);
      *Code_17 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EntryResumePointCode_62, Var_146);
    }
  }
}

static void MR_CALL 
ll_backend__disj_gen__generate_lookup_disj_7_p_0(
  MR_Word ResumeVars_8,
  MR_Word LookupDisjInfo_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_CI_0_62,
  MR_Word * STATE_VARIABLE_CI_63,
  MR_Word STATE_VARIABLE_CLD_0_64,
  MR_Word * STATE_VARIABLE_CLD_65)
{
  MR_Word OutVars_13 = ((MR_Word) ((MR_hl_field(0, LookupDisjInfo_9, 0))));
  MR_Word StoreMap_14 = ((MR_Word) ((MR_hl_field(0, LookupDisjInfo_9, 1))));
  MR_Word MaybeEnd0_15 = ((MR_Word) ((MR_hl_field(0, LookupDisjInfo_9, 2))));
  MR_Word Liveness_16 = ((MR_Word) ((MR_hl_field(0, LookupDisjInfo_9, 3))));
  MR_Word CurSlot_17 = ((MR_Word) ((MR_hl_field(0, LookupDisjInfo_9, 4))));
  MR_Word ResumeMap_18 = ((MR_Word) ((MR_hl_field(0, LookupDisjInfo_9, 5))));
  MR_Word FlushCode_19 = ((MR_Word) ((MR_hl_field(0, LookupDisjInfo_9, 6))));
  MR_Word SaveTicketCode_20 = ((MR_Word) ((MR_hl_field(0, LookupDisjInfo_9, 7))));
  MR_Word MaybeTicketSlot_21 = ((MR_Word) ((MR_hl_field(0, LookupDisjInfo_9, 8))));
  MR_Word SaveHpCode_22 = ((MR_Word) ((MR_hl_field(0, LookupDisjInfo_9, 9))));
  MR_Word MaybeHpSlot_23 = ((MR_Word) ((MR_hl_field(0, LookupDisjInfo_9, 10))));
  MR_Word HijackInfo_24 = ((MR_Word) ((MR_hl_field(0, LookupDisjInfo_9, 11))));
  MR_Word PrepareHijackCode_25 = ((MR_Word) ((MR_hl_field(0, LookupDisjInfo_9, 12))));
  MR_Word Solns_26 = ((MR_Word) ((MR_hl_field(0, LookupDisjInfo_9, 13))));
  MR_Word LLDSTypes_27 = ((MR_Word) ((MR_hl_field(0, LookupDisjInfo_9, 14))));
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
  MR_Word EndBranch_41;
  MR_Word FirstBranchEndCode_42;
  MR_Word MaybeEnd1_43;
  MR_Word GotoEndCode_44;
  MR_Word ResumePointCode_45;
  MR_Word RestoreTicketCode_46;
  MR_Word RestoreHpCode_47;
  MR_Word LaterBaseReg_48;
  MR_Word UndoLabel_49;
  MR_Word AfterUndoLabel_50;
  MR_Integer MaxSlot_51;
  MR_Word TestMoreSolnsCode_52;
  MR_Word UndoHijackCode_53;
  MR_Word AfterUndoLabelCode_54;
  MR_Word LaterFlushResumeVarsCode_56;
  MR_Word LaterZombies_57;
  MR_Word LaterBranchEndCode_58;
  MR_Word MaybeEnd_59;
  MR_Word EndLabelCode_60;
  MR_Word Comment_61;
  MR_Word STATE_VARIABLE_CI_1_66;
  MR_Word Var_67;
  MR_Word STATE_VARIABLE_CI_2_68;
  MR_Word STATE_VARIABLE_CLD_1_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word STATE_VARIABLE_CI_3_88;
  MR_Word STATE_VARIABLE_CLD_2_90;
  MR_Word STATE_VARIABLE_CLD_3_92;
  MR_Word STATE_VARIABLE_CLD_4_93;
  MR_Word STATE_VARIABLE_CLD_5_94;
  MR_Word STATE_VARIABLE_CLD_6_95;
  MR_Word STATE_VARIABLE_CLD_7_96;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word STATE_VARIABLE_CLD_8_101;
  MR_Word STATE_VARIABLE_CI_4_102;
  MR_Word STATE_VARIABLE_CLD_9_103;
  MR_Word STATE_VARIABLE_CLD_10_106;
  MR_Word STATE_VARIABLE_CI_5_107;
  MR_Integer Var_109;
  MR_Word Var_111;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word Var_116;
  MR_Word Var_117;
  MR_Word Var_118;
  MR_Word Var_119;
  MR_Word Var_123;
  MR_Word Var_124;
  MR_Word Var_125;
  MR_Word Var_126;
  MR_Word Var_128;
  MR_Word Var_129;
  MR_Word Var_130;
  MR_Word Var_131;
  MR_Word Var_139;
  MR_Word Var_140;
  MR_Word Var_141;
  MR_Word Var_142;
  MR_Word Var_144;
  MR_Word Var_145;
  MR_Word Var_146;
  MR_Word STATE_VARIABLE_CLD_11_149;
  MR_Word Var_150;
  MR_Word Var_151;
  MR_Word Var_152;
  MR_Word Var_154;
  MR_Word Var_155;
  MR_Word Var_156;
  MR_Word Var_157;
  MR_Word Var_158;
  MR_Word STATE_VARIABLE_CLD_12_166;
  MR_Word STATE_VARIABLE_CLD_13_168;
  MR_Word STATE_VARIABLE_CLD_14_169;
  MR_Word STATE_VARIABLE_CLD_15_170;
  MR_Word STATE_VARIABLE_CLD_16_171;
  MR_Word STATE_VARIABLE_CLD_17_172;
  MR_Word Var_174;
  MR_Word Var_175;
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
  MR_Word Var_198;
  MR_Word _LaterUpdateRedoipCode_55;

  mercury__list__length_2_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[1]), Solns_26, &NumSolns_28);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__disj_gen_scalar_common_1[0]), OutVars_13, &NumOutVars_29);
  ll_backend__code_info__add_vector_static_cell_5_p_0(LLDSTypes_27, Solns_26, &SolnVectorAddr_30, STATE_VARIABLE_CI_0_62, &STATE_VARIABLE_CI_1_66);
  {
    Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_67, 1) = ((MR_Box) (SolnVectorAddr_30));
  }
  {
    SolnVectorAddrRval_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, SolnVectorAddrRval_31, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, SolnVectorAddrRval_31, 1) = ((MR_Box) (Var_67));
  }
  ll_backend__code_info__get_next_label_3_p_0(&EndLabel_32, STATE_VARIABLE_CI_1_66, &STATE_VARIABLE_CI_2_68);
  ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(StoreMap_14, (MR_Integer) 0, &BaseReg_33, STATE_VARIABLE_CLD_0_64, &STATE_VARIABLE_CLD_1_70);
  {
    Var_74 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_74, 0) = ((MR_Box) (SolnVectorAddrRval_31));
    MR_hl_field(2, Var_74, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__disj_gen_scalar_common_3[0])));
    MR_hl_field(2, Var_74, 2) = ((MR_Box) (MR_mkword(3, &ll_backend__disj_gen_scalar_common_1[10])));
  }
  {
    Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_73, 1) = ((MR_Box) (Var_74));
  }
  {
    Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_72, 1) = ((MR_Box) (BaseReg_33));
    MR_hl_field(3, Var_72, 2) = ((MR_Box) (Var_73));
  }
  {
    Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_71, 0) = ((MR_Box) (Var_72));
    MR_hl_field(0, Var_71, 1) = ((MR_Box) ((MR_String) "Compute base address for this case"));
  }
  BaseRegInitCode_34 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_71)));
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (NumOutVars_29));
  }
  {
    Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_84, 1) = ((MR_Box) (Var_85));
  }
  {
    Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_83, 1) = ((MR_Box) (CurSlot_17));
    MR_hl_field(3, Var_83, 2) = ((MR_Box) (Var_84));
  }
  {
    Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_82, 0) = ((MR_Box) (Var_83));
    MR_hl_field(0, Var_82, 1) = ((MR_Box) ((MR_String) "Setup current slot in the solution array"));
  }
  SaveSlotCode_35 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_82)));
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_1_70, &DisjEntry_36);
  ll_backend__code_loc_dep__make_resume_point_6_p_0(ResumeVars_8, (MR_Integer) 1, ResumeMap_18, &ResumePoint_37, STATE_VARIABLE_CI_2_68, &STATE_VARIABLE_CI_3_88);
  ll_backend__code_loc_dep__effect_resume_point_5_p_0(ResumePoint_37, (MR_Integer) 2, &UpdateRedoipCode_38, STATE_VARIABLE_CLD_1_70, &STATE_VARIABLE_CLD_2_90);
  ll_backend__lookup_util__record_offset_assigns_6_p_0(OutVars_13, (MR_Integer) 0, BaseReg_33, STATE_VARIABLE_CI_3_88, STATE_VARIABLE_CLD_2_90, &STATE_VARIABLE_CLD_3_92);
  ll_backend__code_loc_dep__flush_resume_vars_to_stack_3_p_0(&FirstFlushResumeVarsCode_39, STATE_VARIABLE_CLD_3_92, &STATE_VARIABLE_CLD_4_93);
  ll_backend__code_loc_dep__pop_resume_point_2_p_0(STATE_VARIABLE_CLD_4_93, &STATE_VARIABLE_CLD_5_94);
  ll_backend__code_loc_dep__pickup_zombies_3_p_0(&FirstZombies_40, STATE_VARIABLE_CLD_5_94, &STATE_VARIABLE_CLD_6_95);
  ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(FirstZombies_40, STATE_VARIABLE_CLD_6_95, &STATE_VARIABLE_CLD_7_96);
  {
    EndBranch_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, EndBranch_41, 0) = ((MR_Box) (StoreMap_14));
    MR_hl_field(0, EndBranch_41, 1) = ((MR_Box) (Liveness_16));
  }
  ll_backend__lookup_util__set_liveness_and_end_branch_5_p_0(EndBranch_41, &FirstBranchEndCode_42, MaybeEnd0_15, &MaybeEnd1_43, STATE_VARIABLE_CLD_7_96);
  {
    Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_99, 0) = ((MR_Box) (EndLabel_32));
  }
  {
    Var_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_98, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_98, 1) = ((MR_Box) (Var_99));
  }
  {
    Var_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_97, 0) = ((MR_Box) (Var_98));
    MR_hl_field(0, Var_97, 1) = ((MR_Box) ((MR_String) "goto end of lookup disj"));
  }
  GotoEndCode_44 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_97)));
  ll_backend__code_loc_dep__reset_to_position_3_p_0(DisjEntry_36, STATE_VARIABLE_CI_3_88, &STATE_VARIABLE_CLD_8_101);
  ll_backend__code_loc_dep__generate_resume_point_6_p_0(ResumePoint_37, &ResumePointCode_45, STATE_VARIABLE_CI_3_88, &STATE_VARIABLE_CI_4_102, STATE_VARIABLE_CLD_8_101, &STATE_VARIABLE_CLD_9_103);
  ll_backend__code_loc_dep__maybe_reset_ticket_3_p_0(MaybeTicketSlot_21, (MR_Integer) 0, &RestoreTicketCode_46);
  ll_backend__code_loc_dep__maybe_restore_hp_2_p_0(MaybeHpSlot_23, &RestoreHpCode_47);
  ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(StoreMap_14, (MR_Integer) 0, &LaterBaseReg_48, STATE_VARIABLE_CLD_9_103, &STATE_VARIABLE_CLD_10_106);
  ll_backend__code_info__get_next_label_3_p_0(&UndoLabel_49, STATE_VARIABLE_CI_4_102, &STATE_VARIABLE_CI_5_107);
  ll_backend__code_info__get_next_label_3_p_0(&AfterUndoLabel_50, STATE_VARIABLE_CI_5_107, STATE_VARIABLE_CI_63);
  Var_109 = (MR_Integer) ((MR_Unsigned) NumSolns_28 - (MR_Unsigned) 1);
  MaxSlot_51 = (MR_Integer) ((MR_Unsigned) Var_109 * (MR_Unsigned) NumOutVars_29);
  {
    Var_114 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_114, 0) = ((MR_Box) (CurSlot_17));
  }
  {
    Var_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_113, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_113, 1) = ((MR_Box) (LaterBaseReg_48));
    MR_hl_field(3, Var_113, 2) = ((MR_Box) (Var_114));
  }
  {
    Var_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_112, 0) = ((MR_Box) (Var_113));
    MR_hl_field(0, Var_112, 1) = ((MR_Box) ((MR_String) "Init later base register"));
  }
  {
    Var_123 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_123, 0) = ((MR_Box) (LaterBaseReg_48));
  }
  {
    Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_125, 0) = ((MR_Box) (MaxSlot_51));
  }
  {
    Var_124 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_124, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_124, 1) = ((MR_Box) (Var_125));
  }
  {
    Var_119 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_119, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_119, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__disj_gen_scalar_common_1[11])));
    MR_hl_field(3, Var_119, 2) = ((MR_Box) (Var_123));
    MR_hl_field(3, Var_119, 3) = ((MR_Box) (Var_124));
  }
  {
    Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_126, 0) = ((MR_Box) (UndoLabel_49));
  }
  {
    Var_118 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_118, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_118, 1) = ((MR_Box) (Var_119));
    MR_hl_field(3, Var_118, 2) = ((MR_Box) (Var_126));
  }
  {
    Var_117 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_117, 0) = ((MR_Box) (Var_118));
    MR_hl_field(0, Var_117, 1) = ((MR_Box) ((MR_String) "Jump to undo hijack code if there are no more solutions"));
  }
  {
    Var_131 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_131, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_131, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__disj_gen_scalar_common_3[2])));
    MR_hl_field(3, Var_131, 2) = ((MR_Box) (Var_114));
    MR_hl_field(3, Var_131, 3) = ((MR_Box) (Var_84));
  }
  {
    Var_130 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_130, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_130, 1) = ((MR_Box) (CurSlot_17));
    MR_hl_field(3, Var_130, 2) = ((MR_Box) (Var_131));
  }
  {
    Var_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_129, 0) = ((MR_Box) (Var_130));
    MR_hl_field(0, Var_129, 1) = ((MR_Box) ((MR_String) "Update current slot"));
  }
  {
    Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_142, 0) = ((MR_Box) (AfterUndoLabel_50));
  }
  {
    Var_141 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_141, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_141, 1) = ((MR_Box) (Var_142));
  }
  {
    Var_140 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_140, 0) = ((MR_Box) (Var_141));
    MR_hl_field(0, Var_140, 1) = ((MR_Box) ((MR_String) "Jump around undo hijack code"));
  }
  {
    Var_146 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_146, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_146, 1) = ((MR_Box) (UndoLabel_49));
  }
  {
    Var_145 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_145, 0) = ((MR_Box) (Var_146));
    MR_hl_field(0, Var_145, 1) = ((MR_Box) ((MR_String) "Undo hijack code"));
  }
  {
    Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_144, 0) = ((MR_Box) (Var_145));
    MR_hl_field(1, Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_139, 0) = ((MR_Box) (Var_140));
    MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_144));
  }
  {
    Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_128, 0) = ((MR_Box) (Var_129));
    MR_hl_field(1, Var_128, 1) = ((MR_Box) (Var_139));
  }
  {
    Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_116, 0) = ((MR_Box) (Var_117));
    MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_128));
  }
  {
    Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_111, 0) = ((MR_Box) (Var_112));
    MR_hl_field(1, Var_111, 1) = ((MR_Box) (Var_116));
  }
  TestMoreSolnsCode_52 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_111);
  ll_backend__code_loc_dep__undo_disj_hijack_4_p_0(HijackInfo_24, &UndoHijackCode_53, STATE_VARIABLE_CLD_10_106, &STATE_VARIABLE_CLD_11_149);
  {
    Var_152 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_152, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_152, 1) = ((MR_Box) (AfterUndoLabel_50));
  }
  {
    Var_151 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_151, 0) = ((MR_Box) (Var_152));
    MR_hl_field(0, Var_151, 1) = ((MR_Box) ((MR_String) "Return later answer code"));
  }
  {
    Var_158 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_158, 0) = ((MR_Box) (SolnVectorAddrRval_31));
    MR_hl_field(2, Var_158, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__disj_gen_scalar_common_3[0])));
    MR_hl_field(2, Var_158, 2) = ((MR_Box) (Var_123));
  }
  {
    Var_157 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_157, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_157, 1) = ((MR_Box) (Var_158));
  }
  {
    Var_156 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_156, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_156, 1) = ((MR_Box) (LaterBaseReg_48));
    MR_hl_field(3, Var_156, 2) = ((MR_Box) (Var_157));
  }
  {
    Var_155 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_155, 0) = ((MR_Box) (Var_156));
    MR_hl_field(0, Var_155, 1) = ((MR_Box) ((MR_String) "Compute base address in later array for this solution"));
  }
  {
    Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_154, 0) = ((MR_Box) (Var_155));
    MR_hl_field(1, Var_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_150, 0) = ((MR_Box) (Var_151));
    MR_hl_field(1, Var_150, 1) = ((MR_Box) (Var_154));
  }
  AfterUndoLabelCode_54 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_150);
  ll_backend__code_loc_dep__effect_resume_point_5_p_0(ResumePoint_37, (MR_Integer) 2, &_LaterUpdateRedoipCode_55, STATE_VARIABLE_CLD_11_149, &STATE_VARIABLE_CLD_12_166);
  ll_backend__lookup_util__record_offset_assigns_6_p_0(OutVars_13, (MR_Integer) 0, LaterBaseReg_48, *STATE_VARIABLE_CI_63, STATE_VARIABLE_CLD_12_166, &STATE_VARIABLE_CLD_13_168);
  ll_backend__code_loc_dep__flush_resume_vars_to_stack_3_p_0(&LaterFlushResumeVarsCode_56, STATE_VARIABLE_CLD_13_168, &STATE_VARIABLE_CLD_14_169);
  ll_backend__code_loc_dep__pop_resume_point_2_p_0(STATE_VARIABLE_CLD_14_169, &STATE_VARIABLE_CLD_15_170);
  ll_backend__code_loc_dep__pickup_zombies_3_p_0(&LaterZombies_57, STATE_VARIABLE_CLD_15_170, &STATE_VARIABLE_CLD_16_171);
  ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(LaterZombies_57, STATE_VARIABLE_CLD_16_171, &STATE_VARIABLE_CLD_17_172);
  ll_backend__lookup_util__set_liveness_and_end_branch_5_p_0(EndBranch_41, &LaterBranchEndCode_58, MaybeEnd1_43, &MaybeEnd_59, STATE_VARIABLE_CLD_17_172);
  ll_backend__code_loc_dep__after_all_branches_4_p_0(StoreMap_14, MaybeEnd_59, *STATE_VARIABLE_CI_63, STATE_VARIABLE_CLD_65);
  {
    Var_175 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_175, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_175, 1) = ((MR_Box) (EndLabel_32));
  }
  {
    Var_174 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_174, 0) = ((MR_Box) (Var_175));
    MR_hl_field(0, Var_174, 1) = ((MR_Box) ((MR_String) "end of lookup disj"));
  }
  EndLabelCode_60 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_174)));
  Comment_61 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__disj_gen_scalar_common_1[12])));
  Var_198 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LaterBranchEndCode_58, EndLabelCode_60);
  Var_197 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LaterFlushResumeVarsCode_56, Var_198);
  Var_196 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AfterUndoLabelCode_54, Var_197);
  Var_195 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), UndoHijackCode_53, Var_196);
  Var_194 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestMoreSolnsCode_52, Var_195);
  Var_193 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreHpCode_47, Var_194);
  Var_192 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreTicketCode_46, Var_193);
  Var_191 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ResumePointCode_45, Var_192);
  Var_190 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GotoEndCode_44, Var_191);
  Var_189 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FirstBranchEndCode_42, Var_190);
  Var_188 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FirstFlushResumeVarsCode_39, Var_189);
  Var_187 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), UpdateRedoipCode_38, Var_188);
  Var_186 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PrepareHijackCode_25, Var_187);
  Var_185 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveHpCode_22, Var_186);
  Var_184 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveTicketCode_20, Var_185);
  Var_183 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveSlotCode_35, Var_184);
  Var_182 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BaseRegInitCode_34, Var_183);
  Var_181 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FlushCode_19, Var_182);
  *Code_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Comment_61, Var_181);
}

static MR_Box MR_CALL 
ll_backend__disj_gen__is_lookup_disj_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = parse_tree__var_table__lookup_var_type_func_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
ll_backend__disj_gen__is_lookup_disj_10_p_0(
  MR_Word AddTrailOps_11,
  MR_Word AddRegionOps_12,
  MR_Word ResumeVars_13,
  MR_Word Disjuncts_14,
  MR_Word DisjGoalInfo_15,
  MR_Word * LookupDisjInfo_16,
  MR_Word STATE_VARIABLE_CI_0_54,
  MR_Word * STATE_VARIABLE_CI_55,
  MR_Word STATE_VARIABLE_CLD_0_56,
  MR_Word * AfterPrepPos_19)
{
  MR_bool succeeded = (Disjuncts_14 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word TypeInfo_200_200;
  MR_Word TypeCtorInfo_201_201;
  MR_Word TypeCtorInfo_204_204;
  MR_Word FirstDisjunct_20;
  MR_Word LaterDisjuncts_21;
  MR_Word DisjNonLocals_25;
  MR_Word MaybeTraceInfo_26;
  MR_Word Globals_27;
  MR_Word OptTuple_28;
  MR_Word OutVars_29;
  MR_Word VarTable_30;
  MR_Word OutTypes_31;
  MR_Word ResumeMap_32;
  MR_Word FlushCode_33;
  MR_Word CurSlot_34;
  MR_Word SaveTicketCode_35;
  MR_Word MaybeTicketSlot_36;
  MR_Word ReclaimHeap_37;
  MR_Word SaveHpCode_38;
  MR_Word MaybeHpSlot_39;
  MR_Word HijackInfo_40;
  MR_Word PrepareHijackCode_41;
  MR_Word StoreMap_42;
  MR_Word DisjStart_43;
  MR_Word FirstSoln_44;
  MR_Word MaybeEnd1_45;
  MR_Word Liveness_46;
  MR_Word LaterSolns_47;
  MR_Word MaybeEnd_48;
  MR_Word Solns_49;
  MR_Word ExprnOpts_50;
  MR_Word UnboxFloats_51;
  MR_Word UnboxInt64s_52;
  MR_Word LLDSTypes_53;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word STATE_VARIABLE_CLD_1_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word STATE_VARIABLE_CI_1_64;
  MR_Word STATE_VARIABLE_CLD_2_65;
  MR_Word STATE_VARIABLE_CI_2_66;
  MR_Word STATE_VARIABLE_CLD_3_67;
  MR_Word Var_68;
  MR_Word STATE_VARIABLE_CI_3_69;
  MR_Word STATE_VARIABLE_CLD_4_70;
  MR_Word Var_71;
  MR_Word STATE_VARIABLE_CI_4_72;
  MR_Word STATE_VARIABLE_CLD_5_73;
  MR_Word Var_74;
  MR_Word STATE_VARIABLE_CI_5_75;
  MR_Word Var_205;

  if (succeeded)
  {
    FirstDisjunct_20 = ((MR_Word) ((MR_hl_field(1, Disjuncts_14, 0))));
    LaterDisjuncts_21 = ((MR_Word) ((MR_hl_field(1, Disjuncts_14, 1))));
    succeeded = (LaterDisjuncts_21 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_57 = ((MR_Word) ((MR_hl_field(1, LaterDisjuncts_21, 1))));
      succeeded = (Var_57 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        DisjNonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(DisjGoalInfo_15);
        succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(DisjNonLocals_25, FirstDisjunct_20);
        if (succeeded)
        {
          succeeded = hlds__goal_form__all_disjuncts_are_conj_of_unify_2_p_0(DisjNonLocals_25, LaterDisjuncts_21);
          if (succeeded)
          {
            ll_backend__code_info__get_maybe_trace_info_2_p_0(STATE_VARIABLE_CI_0_54, &MaybeTraceInfo_26);
            succeeded = (MaybeTraceInfo_26 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_54, &Globals_27);
              libs__globals__get_opt_tuple_2_p_0(Globals_27, &OptTuple_28);
              succeeded = (AddRegionOps_12 == (MR_Integer) 1);
              if (succeeded)
              {
                Var_58 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_28, 1))) >> 13)) & (MR_Integer) 1);
                succeeded = (Var_58 == (MR_Integer) 0);
                if (succeeded)
                {
                  ll_backend__lookup_util__figure_out_output_vars_4_p_0(STATE_VARIABLE_CI_0_54, STATE_VARIABLE_CLD_0_56, DisjGoalInfo_15, &OutVars_29);
                  ll_backend__code_info__get_var_table_2_p_0(STATE_VARIABLE_CI_0_54, &VarTable_30);
                  TypeInfo_200_200 = (MR_Word) (&ll_backend__disj_gen_scalar_common_1[0]);
                  TypeCtorInfo_201_201 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                  {
                    Var_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_59, 0) = ((MR_Box) (&ll_backend__disj_gen_scalar_common_4[0]));
                    MR_hl_field(0, Var_59, 1) = ((MR_Box) (ll_backend__disj_gen__is_lookup_disj_10_p_0_1));
                    MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_59, 3) = ((MR_Box) (VarTable_30));
                  }
                  OutTypes_31 = mercury__list__map_2_f_0(TypeInfo_200_200, TypeCtorInfo_201_201, Var_59, OutVars_29);
                  TypeCtorInfo_204_204 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                  Var_60 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_204_204, ResumeVars_13);
                  ll_backend__code_loc_dep__produce_vars_5_p_0(Var_60, &ResumeMap_32, &FlushCode_33, STATE_VARIABLE_CLD_0_56, &STATE_VARIABLE_CLD_1_61);
                  Var_62 = (MR_Word) ((MR_Unsigned) 12U);
                  Var_63 = (MR_Integer) 1;
                  ll_backend__code_loc_dep__acquire_temp_slot_7_p_0(Var_62, Var_63, &CurSlot_34, STATE_VARIABLE_CI_0_54, &STATE_VARIABLE_CI_1_64, STATE_VARIABLE_CLD_1_61, &STATE_VARIABLE_CLD_2_65);
                  ll_backend__code_loc_dep__maybe_save_ticket_7_p_0(AddTrailOps_11, &SaveTicketCode_35, &MaybeTicketSlot_36, STATE_VARIABLE_CI_1_64, &STATE_VARIABLE_CI_2_66, STATE_VARIABLE_CLD_2_65, &STATE_VARIABLE_CLD_3_67);
                  ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_2_66, &Var_205);
                  succeeded = libs__globals____Unify____globals_0_0(Globals_27, Var_205);
                  if (succeeded)
                  {
                    Var_68 = (MR_Integer) 781;
                    libs__globals__lookup_bool_option_3_p_0(Globals_27, Var_68, &ReclaimHeap_37);
                    ll_backend__code_loc_dep__maybe_save_hp_7_p_0(ReclaimHeap_37, &SaveHpCode_38, &MaybeHpSlot_39, STATE_VARIABLE_CI_2_66, &STATE_VARIABLE_CI_3_69, STATE_VARIABLE_CLD_3_67, &STATE_VARIABLE_CLD_4_70);
                    Var_71 = (MR_Integer) 2;
                    ll_backend__code_loc_dep__prepare_for_disj_hijack_7_p_0(Var_71, &HijackInfo_40, &PrepareHijackCode_41, STATE_VARIABLE_CI_3_69, &STATE_VARIABLE_CI_4_72, STATE_VARIABLE_CLD_4_70, &STATE_VARIABLE_CLD_5_73);
                    ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_5_73, AfterPrepPos_19);
                    hlds__hlds_llds__goal_info_get_store_map_2_p_0(DisjGoalInfo_15, &StoreMap_42);
                    ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_5_73, &DisjStart_43);
                    Var_74 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = ll_backend__lookup_util__generate_constants_for_disjunct_10_p_0(DisjStart_43, FirstDisjunct_20, OutVars_29, StoreMap_42, &FirstSoln_44, Var_74, &MaybeEnd1_45, &Liveness_46, STATE_VARIABLE_CI_4_72, &STATE_VARIABLE_CI_5_75);
                    if (succeeded)
                    {
                      succeeded = ll_backend__lookup_util__generate_constants_for_disjuncts_9_p_0(DisjStart_43, LaterDisjuncts_21, OutVars_29, StoreMap_42, &LaterSolns_47, MaybeEnd1_45, &MaybeEnd_48, STATE_VARIABLE_CI_5_75, STATE_VARIABLE_CI_55);
                      if (succeeded)
                      {
                        {
                          Solns_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Solns_49, 0) = ((MR_Box) (FirstSoln_44));
                          MR_hl_field(1, Solns_49, 1) = ((MR_Box) (LaterSolns_47));
                        }
                        ll_backend__code_info__get_exprn_opts_2_p_0(*STATE_VARIABLE_CI_55, &ExprnOpts_50);
                        UnboxFloats_51 = ll_backend__llds__get_unboxed_floats_1_f_0(ExprnOpts_50);
                        UnboxInt64s_52 = ll_backend__llds__get_unboxed_int64s_1_f_0(ExprnOpts_50);
                        succeeded = ll_backend__global_data__find_general_llds_types_5_p_0(UnboxFloats_51, UnboxInt64s_52, OutTypes_31, Solns_49, &LLDSTypes_53);
                        if (succeeded)
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
                            *LookupDisjInfo_16 = base;
                            MR_hl_field(0, base, 0) = ((MR_Box) (OutVars_29));
                            MR_hl_field(0, base, 1) = ((MR_Box) (StoreMap_42));
                            MR_hl_field(0, base, 2) = ((MR_Box) (MaybeEnd_48));
                            MR_hl_field(0, base, 3) = ((MR_Box) (Liveness_46));
                            MR_hl_field(0, base, 4) = ((MR_Box) (CurSlot_34));
                            MR_hl_field(0, base, 5) = ((MR_Box) (ResumeMap_32));
                            MR_hl_field(0, base, 6) = ((MR_Box) (FlushCode_33));
                            MR_hl_field(0, base, 7) = ((MR_Box) (SaveTicketCode_35));
                            MR_hl_field(0, base, 8) = ((MR_Box) (MaybeTicketSlot_36));
                            MR_hl_field(0, base, 9) = ((MR_Box) (SaveHpCode_38));
                            MR_hl_field(0, base, 10) = ((MR_Box) (MaybeHpSlot_39));
                            MR_hl_field(0, base, 11) = ((MR_Box) (HijackInfo_40));
                            MR_hl_field(0, base, 12) = ((MR_Box) (PrepareHijackCode_41));
                            MR_hl_field(0, base, 13) = ((MR_Box) (Solns_49));
                            MR_hl_field(0, base, 14) = ((MR_Box) (LLDSTypes_53));
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

static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____lookup_disj_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__disj_gen____Unify____lookup_disj_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__disj_gen____Compare____lookup_disj_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__disj_gen____Compare____lookup_disj_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
