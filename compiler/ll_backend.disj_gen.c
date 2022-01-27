/*
** Automatically generated from `disj_gen.m'
** by the Mercury compiler,
** version 14.01.1, configured for x86_64-apple-darwin13.3.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
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




#line 149 "ll_backend.disj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__disj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

#line 152 "ll_backend.disj_gen.c"
static const MR_DuFunctorDesc ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_0;

#line 155 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0;

#line 158 "ll_backend.disj_gen.c"
static const MR_PseudoTypeInfo ll_backend__disj_gen__ll_backend__disj_gen__field_types_commit_disj_region_cleanup_0_1[2];

#line 161 "ll_backend.disj_gen.c"
static const MR_ConstString ll_backend__disj_gen__ll_backend__disj_gen__field_names_commit_disj_region_cleanup_0_1[2];

#line 164 "ll_backend.disj_gen.c"
static const MR_DuFunctorDesc ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_1;

#line 167 "ll_backend.disj_gen.c"
static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_0[1];

#line 170 "ll_backend.disj_gen.c"
static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_1[1];

#line 173 "ll_backend.disj_gen.c"
static const MR_DuPtagLayout ll_backend__disj_gen__ll_backend__disj_gen__du_ptag_ordered_commit_disj_region_cleanup_0[2];

#line 176 "ll_backend.disj_gen.c"
static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_name_ordered_commit_disj_region_cleanup_0[2];

#line 179 "ll_backend.disj_gen.c"
static const MR_Integer ll_backend__disj_gen__ll_backend__disj_gen__functor_number_map_commit_disj_region_cleanup_0[2];

#line 182 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 185 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 188 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__disj_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0;

#line 191 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__maybe__ti_maybe_1ll_backend__code_info__type_ctor_info_branch_end_info_0;

#line 194 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 197 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 200 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__disj_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 203 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0;

#line 206 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0;

#line 209 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1list__ti_list_1ll_backend__llds__type_ctor_info_rval_0;

#line 212 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0;

#line 215 "ll_backend.disj_gen.c"
static const MR_PseudoTypeInfo ll_backend__disj_gen__ll_backend__disj_gen__field_types_lookup_disj_info_0_0[15];

#line 218 "ll_backend.disj_gen.c"
static const MR_ConstString ll_backend__disj_gen__ll_backend__disj_gen__field_names_lookup_disj_info_0_0[15];

#line 221 "ll_backend.disj_gen.c"
static const MR_DuFunctorDesc ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_lookup_disj_info_0_0;

#line 224 "ll_backend.disj_gen.c"
static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_lookup_disj_info_0_0[1];

#line 227 "ll_backend.disj_gen.c"
static const MR_DuPtagLayout ll_backend__disj_gen__ll_backend__disj_gen__du_ptag_ordered_lookup_disj_info_0[1];

#line 230 "ll_backend.disj_gen.c"
static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_name_ordered_lookup_disj_info_0[1];

#line 233 "ll_backend.disj_gen.c"
static const MR_Integer ll_backend__disj_gen__ll_backend__disj_gen__functor_number_map_lookup_disj_info_0[1];

#line 236 "ll_backend.disj_gen.c"
static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0_10001(
#line 239 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_1,
#line 241 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_2);

#line 244 "ll_backend.disj_gen.c"
static void MR_CALL 
ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0_10001(
#line 247 "ll_backend.disj_gen.c"
  MR_Box * ll_backend__disj_gen__wrapper_arg_1,
#line 249 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_2,
#line 251 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_3);

#line 254 "ll_backend.disj_gen.c"
static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____lookup_disj_info_0_0_10001(
#line 257 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_1,
#line 259 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_2);

#line 262 "ll_backend.disj_gen.c"
static void MR_CALL 
ll_backend__disj_gen____Compare____lookup_disj_info_0_0_10001(
#line 265 "ll_backend.disj_gen.c"
  MR_Box * ll_backend__disj_gen__wrapper_arg_1,
#line 267 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_2,
#line 269 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_3);

#line 691 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_p_0(
#line 691 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjRegionOps_8,
#line 691 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__BeforeEnterCode_10,
#line 691 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__LaterCode_11,
#line 691 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__LastCode_12,
#line 691 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_35,
#line 691 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_36);

#line 539 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__539__1_2_p_0(
#line 539 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HpSlot_75,
#line 539 "disj_gen.m"
  MR_Word ll_backend__disj_gen__BranchHpSlot_78);

#line 537 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__537__1_2_p_0(
#line 537 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HpCodeInstrs_80,
#line 537 "disj_gen.m"
  MR_Word ll_backend__disj_gen__BranchHpCodeInstrs_81);

#line 101 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen____Compare____lookup_disj_info_0_0(
#line 101 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__HeadVar__1_1,
#line 101 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__2_2,
#line 101 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__3_3);

#line 101 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____lookup_disj_info_0_0(
#line 101 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__1_1,
#line 101 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__2_2);

#line 684 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0(
#line 684 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__HeadVar__1_1,
#line 684 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__2_2,
#line 684 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__3_3);

#line 684 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0(
#line 684 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__1_1,
#line 684 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__2_2);

#line 911 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__disj_alloc_snapshot_regions_7_p_0(
#line 911 "disj_gen.m"
  MR_Word ll_backend__disj_gen__NumLval_1,
#line 911 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddrLval_2,
#line 911 "disj_gen.m"
  MR_Word ll_backend__disj_gen__EmbeddedStackFrame_3,
#line 911 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__4_4,
#line 911 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__HeadVar__5_5,
#line 911 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_6,
#line 911 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_7);

#line 894 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__disj_protect_regions_7_p_0(
#line 894 "disj_gen.m"
  MR_Word ll_backend__disj_gen__NumLval_1,
#line 894 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddrLval_2,
#line 894 "disj_gen.m"
  MR_Word ll_backend__disj_gen__EmbeddedStackFrame_3,
#line 894 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__4_4,
#line 894 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__HeadVar__5_5,
#line 894 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_6,
#line 894 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_7);

#line 774 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_p_0(
#line 774 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjRegionOps_11,
#line 774 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjRemovedRegionVars_12,
#line 774 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjAllocRegionVars_13,
#line 774 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__BeforeEnterCode_14,
#line 774 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__LaterCode_15,
#line 774 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__LastCode_16,
#line 774 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__StackVars_17,
#line 774 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__RegionCommitDisjCleanup_18,
#line 774 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_46,
#line 774 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_47);

#line 539 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0_2(
#line 539 "disj_gen.m"
  MR_Box ll_backend__disj_gen__closure_arg);

#line 537 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0_1(
#line 537 "disj_gen.m"
  MR_Box ll_backend__disj_gen__closure_arg);

#line 461 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0(
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__1_1,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__CodeModel_2,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__FullResumeMap_3,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__MaybeEntryResumePoint_4,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HijackInfo_5,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjGoalInfo_6,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__RegionCommitDisjCleanup_7,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__EndLabel_8,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__ReclaimHeap_9,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__MaybeHpSlot0_10,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__MaybeTicketSlot_11,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__LaterRegionCode_12,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__LastRegionCode_13,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__BranchStart0_14,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__MaybeEnd0_15,
#line 461 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__MaybeEnd_16,
#line 461 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__Code_17,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_18,
#line 461 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_19);

#line 343 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__generate_real_disj_9_p_0(
#line 343 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddTrailOps_10,
#line 343 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddRegionOps_11,
#line 343 "disj_gen.m"
  MR_Word ll_backend__disj_gen__CodeModel_12,
#line 343 "disj_gen.m"
  MR_Word ll_backend__disj_gen__ResumeVars_13,
#line 343 "disj_gen.m"
  MR_Word ll_backend__disj_gen__Goals_14,
#line 343 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjGoalInfo_15,
#line 343 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__Code_16,
#line 343 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_46,
#line 343 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_47);

#line 198 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__generate_lookup_disj_5_p_0(
#line 198 "disj_gen.m"
  MR_Word ll_backend__disj_gen__ResumeVars_6,
#line 198 "disj_gen.m"
  MR_Word ll_backend__disj_gen__LookupDisjInfo_7,
#line 198 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__Code_8,
#line 198 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_58,
#line 198 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_59);

#line 128 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen__is_lookup_disj_8_p_0(
#line 128 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddTrailOps_9,
#line 128 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddRegionOps_10,
#line 128 "disj_gen.m"
  MR_Word ll_backend__disj_gen__ResumeVars_11,
#line 128 "disj_gen.m"
  MR_Word ll_backend__disj_gen__Disjuncts_12,
#line 128 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjGoalInfo_13,
#line 128 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__LookupDisjInfo_14,
#line 128 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_48,
#line 128 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_49);


static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_1[12][2];

static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_2[1][3];

static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_3[2][1];

static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_4[2][5];




static /* final */ const MR_Box ll_backend__disj_gen_scalar_common_1[12][2] = {
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
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_branch_end_info_0))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__disj_gen_scalar_common_3[0])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__disj_gen_scalar_common_3[1]))),
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



#line 641 "ll_backend.disj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__disj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 649 "ll_backend.disj_gen.c"
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
  NULL
};

#line 664 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 672 "ll_backend.disj_gen.c"
static const MR_PseudoTypeInfo ll_backend__disj_gen__ll_backend__disj_gen__field_types_commit_disj_region_cleanup_0_1[2] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0
};

#line 678 "ll_backend.disj_gen.c"
static const MR_ConstString ll_backend__disj_gen__ll_backend__disj_gen__field_names_commit_disj_region_cleanup_0_1[2] = {
  (MR_String) "cleanup_label",
  (MR_String) "cleanup_code"
};

#line 684 "ll_backend.disj_gen.c"
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
  NULL
};

#line 699 "ll_backend.disj_gen.c"
static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_0[1] = {
  &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_0
};

#line 704 "ll_backend.disj_gen.c"
static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_1[1] = {
  &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_1
};

#line 709 "ll_backend.disj_gen.c"
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

#line 723 "ll_backend.disj_gen.c"
static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_name_ordered_commit_disj_region_cleanup_0[2] = {
  &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_1,
  &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_0
};

#line 729 "ll_backend.disj_gen.c"
static const MR_Integer ll_backend__disj_gen__ll_backend__disj_gen__functor_number_map_commit_disj_region_cleanup_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 735 "ll_backend.disj_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__disj_gen__ll_backend__disj_gen__type_ctor_info_commit_disj_region_cleanup_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0_10001)),
  ((MR_Box) (ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0_10001)),
  (MR_String) "ll_backend.disj_gen",
  (MR_String) "commit_disj_region_cleanup",
  {
    ll_backend__disj_gen__ll_backend__disj_gen__du_name_ordered_commit_disj_region_cleanup_0
  },
  {
    ll_backend__disj_gen__ll_backend__disj_gen__du_ptag_ordered_commit_disj_region_cleanup_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__disj_gen__ll_backend__disj_gen__functor_number_map_commit_disj_region_cleanup_0
};

#line 756 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 764 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 772 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__disj_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0
  }
};

#line 781 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__maybe__ti_maybe_1ll_backend__code_info__type_ctor_info_branch_end_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_branch_end_info_0
  }
};

#line 789 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 797 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 805 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__disj_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &ll_backend__disj_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 814 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 822 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

#line 830 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1list__ti_list_1ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0
  }
};

#line 838 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0
  }
};

#line 846 "ll_backend.disj_gen.c"
static const MR_PseudoTypeInfo ll_backend__disj_gen__ll_backend__disj_gen__field_types_lookup_disj_info_0_0[15] = {
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__maybe__ti_maybe_1ll_backend__code_info__type_ctor_info_branch_end_info_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_disj_hijack_info_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__list__ti_list_1list__ti_list_1ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0
};

#line 865 "ll_backend.disj_gen.c"
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

#line 884 "ll_backend.disj_gen.c"
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
  NULL
};

#line 899 "ll_backend.disj_gen.c"
static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_lookup_disj_info_0_0[1] = {
  &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_lookup_disj_info_0_0
};

#line 904 "ll_backend.disj_gen.c"
static const MR_DuPtagLayout ll_backend__disj_gen__ll_backend__disj_gen__du_ptag_ordered_lookup_disj_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_lookup_disj_info_0_0
  }
};

#line 913 "ll_backend.disj_gen.c"
static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_name_ordered_lookup_disj_info_0[1] = {
  &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_lookup_disj_info_0_0
};

#line 918 "ll_backend.disj_gen.c"
static const MR_Integer ll_backend__disj_gen__ll_backend__disj_gen__functor_number_map_lookup_disj_info_0[1] = {
  (MR_Integer) 0
};

#line 923 "ll_backend.disj_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__disj_gen__ll_backend__disj_gen__type_ctor_info_lookup_disj_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__disj_gen____Unify____lookup_disj_info_0_0_10001)),
  ((MR_Box) (ll_backend__disj_gen____Compare____lookup_disj_info_0_0_10001)),
  (MR_String) "ll_backend.disj_gen",
  (MR_String) "lookup_disj_info",
  {
    ll_backend__disj_gen__ll_backend__disj_gen__du_name_ordered_lookup_disj_info_0
  },
  {
    ll_backend__disj_gen__ll_backend__disj_gen__du_ptag_ordered_lookup_disj_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__disj_gen__ll_backend__disj_gen__functor_number_map_lookup_disj_info_0
};

#line 944 "ll_backend.disj_gen.c"
static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0_10001(
#line 947 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_1,
#line 949 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_2)
#line 951 "ll_backend.disj_gen.c"
{
#line 953 "ll_backend.disj_gen.c"
  {
#line 955 "ll_backend.disj_gen.c"
    MR_bool ll_backend__disj_gen__succeeded;

#line 958 "ll_backend.disj_gen.c"
    {
#line 960 "ll_backend.disj_gen.c"
      ll_backend__disj_gen__succeeded = ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0(((MR_Word) ll_backend__disj_gen__wrapper_arg_1), ((MR_Word) ll_backend__disj_gen__wrapper_arg_2));
    }
#line 963 "ll_backend.disj_gen.c"
    return ll_backend__disj_gen__succeeded;
#line 965 "ll_backend.disj_gen.c"
  }
#line 967 "ll_backend.disj_gen.c"
}

#line 970 "ll_backend.disj_gen.c"
static void MR_CALL 
ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0_10001(
#line 973 "ll_backend.disj_gen.c"
  MR_Box * ll_backend__disj_gen__wrapper_arg_1,
#line 975 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_2,
#line 977 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_3)
#line 979 "ll_backend.disj_gen.c"
{
#line 981 "ll_backend.disj_gen.c"
  {
#line 983 "ll_backend.disj_gen.c"
    MR_Word ll_backend__disj_gen__conv0_HeadVar__1_1;

#line 986 "ll_backend.disj_gen.c"
    {
#line 988 "ll_backend.disj_gen.c"
      ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0(&ll_backend__disj_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__disj_gen__wrapper_arg_2), ((MR_Word) ll_backend__disj_gen__wrapper_arg_3));
    }
#line 991 "ll_backend.disj_gen.c"
    *ll_backend__disj_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__disj_gen__conv0_HeadVar__1_1));
#line 993 "ll_backend.disj_gen.c"
  }
#line 995 "ll_backend.disj_gen.c"
}

#line 998 "ll_backend.disj_gen.c"
static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____lookup_disj_info_0_0_10001(
#line 1001 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_1,
#line 1003 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_2)
#line 1005 "ll_backend.disj_gen.c"
{
#line 1007 "ll_backend.disj_gen.c"
  {
#line 1009 "ll_backend.disj_gen.c"
    MR_bool ll_backend__disj_gen__succeeded;

#line 1012 "ll_backend.disj_gen.c"
    {
#line 1014 "ll_backend.disj_gen.c"
      ll_backend__disj_gen__succeeded = ll_backend__disj_gen____Unify____lookup_disj_info_0_0(((MR_Word) ll_backend__disj_gen__wrapper_arg_1), ((MR_Word) ll_backend__disj_gen__wrapper_arg_2));
    }
#line 1017 "ll_backend.disj_gen.c"
    return ll_backend__disj_gen__succeeded;
#line 1019 "ll_backend.disj_gen.c"
  }
#line 1021 "ll_backend.disj_gen.c"
}

#line 1024 "ll_backend.disj_gen.c"
static void MR_CALL 
ll_backend__disj_gen____Compare____lookup_disj_info_0_0_10001(
#line 1027 "ll_backend.disj_gen.c"
  MR_Box * ll_backend__disj_gen__wrapper_arg_1,
#line 1029 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_2,
#line 1031 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_3)
#line 1033 "ll_backend.disj_gen.c"
{
#line 1035 "ll_backend.disj_gen.c"
  {
#line 1037 "ll_backend.disj_gen.c"
    MR_Word ll_backend__disj_gen__conv0_HeadVar__1_1;

#line 1040 "ll_backend.disj_gen.c"
    {
#line 1042 "ll_backend.disj_gen.c"
      ll_backend__disj_gen____Compare____lookup_disj_info_0_0(&ll_backend__disj_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__disj_gen__wrapper_arg_2), ((MR_Word) ll_backend__disj_gen__wrapper_arg_3));
    }
#line 1045 "ll_backend.disj_gen.c"
    *ll_backend__disj_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__disj_gen__conv0_HeadVar__1_1));
#line 1047 "ll_backend.disj_gen.c"
  }
#line 1049 "ll_backend.disj_gen.c"
}

#line 691 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_p_0(
#line 691 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjRegionOps_8,
#line 691 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__BeforeEnterCode_10,
#line 691 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__LaterCode_11,
#line 691 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__LastCode_12,
#line 691 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_35,
#line 691 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_36)
#line 691 "disj_gen.m"
{
#line 698 "disj_gen.m"
  {
#line 698 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;

#line 698 "disj_gen.m"
    if ((ll_backend__disj_gen__DisjRegionOps_8 == (MR_Integer) 0))
#line 703 "disj_gen.m"
      {
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeCtorInfo_85_85;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__ForwardLiveVars_14;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__SnapshotRegionVars_16;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__SnapshotRegionVarList_17;
#line 703 "disj_gen.m"
        MR_Integer ll_backend__disj_gen__NumSnapshotRegionVars_18;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__Globals_19;
#line 703 "disj_gen.m"
        MR_Integer ll_backend__disj_gen__FixedSize_20;
#line 703 "disj_gen.m"
        MR_Integer ll_backend__disj_gen__SnapshotSize_21;
#line 703 "disj_gen.m"
        MR_Integer ll_backend__disj_gen__FrameSize_22;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__Items_23;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__MainStackId_25;
#line 703 "disj_gen.m"
        MR_Integer ll_backend__disj_gen__FirstSlotNum_26;
#line 703 "disj_gen.m"
        MR_Integer ll_backend__disj_gen__LastSlotNum_27;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__EmbeddedStackFrame_28;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__FirstNonFixedAddr_29;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__SnapshotNumRegLval_30;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__AddrRegLval_31;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__PushInitCode_32;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__SnapshotRegionCode_33;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__SetCode_34;
#line 703 "disj_gen.m"
        MR_Integer ll_backend__disj_gen__V_39_39;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_42_42;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_44_44;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_46_46;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_47_47;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_48_48;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_49_49;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_52_52;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_53_53;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_54_54;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_59_59;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_60_60;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_61_61;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_64_64;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_65_65;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_66_66;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_68_68;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_70_70;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_72_72;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_73_73;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_74_74;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_77_77;
#line 703 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_78_78;
#line 728 "disj_gen.m"
        MR_Word ll_backend__disj_gen___StackVars_24;

#line 704 "disj_gen.m"
        {
#line 704 "disj_gen.m"
          ll_backend__code_info__get_forward_live_vars_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_35, &ll_backend__disj_gen__ForwardLiveVars_14);
        }
#line 705 "disj_gen.m"
        {
#line 705 "disj_gen.m"
          ll_backend__disj_gen__SnapshotRegionVars_16 = ll_backend__code_info__filter_region_vars_2_f_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_35, ll_backend__disj_gen__ForwardLiveVars_14);
        }
#line 717 "disj_gen.m"
        {
#line 717 "disj_gen.m"
          ll_backend__disj_gen__SnapshotRegionVarList_17 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__disj_gen__SnapshotRegionVars_16);
        }
#line 718 "disj_gen.m"
        {
#line 718 "disj_gen.m"
          mercury__list__length_2_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[1], ll_backend__disj_gen__SnapshotRegionVarList_17, &ll_backend__disj_gen__NumSnapshotRegionVars_18);
        }
#line 720 "disj_gen.m"
        {
#line 720 "disj_gen.m"
          ll_backend__code_info__get_globals_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_35, &ll_backend__disj_gen__Globals_19);
        }
#line 721 "disj_gen.m"
        {
#line 721 "disj_gen.m"
          libs__globals__lookup_int_option_3_p_0(ll_backend__disj_gen__Globals_19, (MR_Integer) 287, &ll_backend__disj_gen__FixedSize_20);
        }
#line 723 "disj_gen.m"
        {
#line 723 "disj_gen.m"
          libs__globals__lookup_int_option_3_p_0(ll_backend__disj_gen__Globals_19, (MR_Integer) 293, &ll_backend__disj_gen__SnapshotSize_21);
        }
#line 725 "disj_gen.m"
        ll_backend__disj_gen__V_39_39 = (ll_backend__disj_gen__SnapshotSize_21 * ll_backend__disj_gen__NumSnapshotRegionVars_18);
#line 725 "disj_gen.m"
        ll_backend__disj_gen__FrameSize_22 = (ll_backend__disj_gen__FixedSize_20 + ll_backend__disj_gen__V_39_39);
#line 727 "disj_gen.m"
        {
#line 727 "disj_gen.m"
          ll_backend__disj_gen__Items_23 = mercury__list__duplicate_2_f_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0, ll_backend__disj_gen__FrameSize_22, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))));
        }
#line 728 "disj_gen.m"
        {
#line 728 "disj_gen.m"
          ll_backend__code_info__acquire_several_temp_slots_8_p_0(ll_backend__disj_gen__Items_23, (MR_Integer) 1, &ll_backend__disj_gen___StackVars_24, &ll_backend__disj_gen__MainStackId_25, &ll_backend__disj_gen__FirstSlotNum_26, &ll_backend__disj_gen__LastSlotNum_27, ll_backend__disj_gen__STATE_VARIABLE_CI_0_35, &ll_backend__disj_gen__STATE_VARIABLE_CI_42_42);
        }
#line 730 "disj_gen.m"
        {
#line 730 "disj_gen.m"
          ll_backend__disj_gen__EmbeddedStackFrame_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 730 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__EmbeddedStackFrame_28, 0) = ((MR_Box) (ll_backend__disj_gen__MainStackId_25));
#line 730 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__EmbeddedStackFrame_28, 1) = ((MR_Box) (ll_backend__disj_gen__FirstSlotNum_26));
#line 730 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__EmbeddedStackFrame_28, 2) = ((MR_Box) (ll_backend__disj_gen__LastSlotNum_27));
#line 730 "disj_gen.m"
        }
#line 732 "disj_gen.m"
        {
#line 732 "disj_gen.m"
          ll_backend__disj_gen__FirstNonFixedAddr_29 = ll_backend__llds__first_nonfixed_embedded_slot_addr_2_f_0(ll_backend__disj_gen__EmbeddedStackFrame_28, ll_backend__disj_gen__FixedSize_20);
        }
#line 734 "disj_gen.m"
        {
#line 734 "disj_gen.m"
          ll_backend__code_info__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__disj_gen__SnapshotNumRegLval_30, ll_backend__disj_gen__STATE_VARIABLE_CI_42_42, &ll_backend__disj_gen__STATE_VARIABLE_CI_44_44);
        }
#line 735 "disj_gen.m"
        {
#line 735 "disj_gen.m"
          ll_backend__code_info__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__disj_gen__AddrRegLval_31, ll_backend__disj_gen__STATE_VARIABLE_CI_44_44, &ll_backend__disj_gen__STATE_VARIABLE_CI_46_46);
        }
#line 1243 "ll_backend.disj_gen.c"
        ll_backend__disj_gen__TypeCtorInfo_85_85 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 737 "disj_gen.m"
        {
#line 737 "disj_gen.m"
          ll_backend__disj_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 737 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 737 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_49_49, 1) = ((MR_Box) ((MR_Integer) 1));
#line 737 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_49_49, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_28));
#line 737 "disj_gen.m"
        }
#line 739 "disj_gen.m"
        {
#line 739 "disj_gen.m"
          ll_backend__disj_gen__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 739 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_48_48, 0) = ((MR_Box) (ll_backend__disj_gen__V_49_49));
#line 739 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_48_48, 1) = ((MR_Box) ((MR_String) "Save stack pointer of embedded region nondet stack"));
#line 739 "disj_gen.m"
        }
#line 740 "disj_gen.m"
        {
#line 740 "disj_gen.m"
          ll_backend__disj_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 740 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 740 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_54_54, 1) = ((MR_Box) (ll_backend__disj_gen__SnapshotNumRegLval_30));
#line 740 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_54_54, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__disj_gen_scalar_common_1[10])));
#line 740 "disj_gen.m"
        }
#line 742 "disj_gen.m"
        {
#line 742 "disj_gen.m"
          ll_backend__disj_gen__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 742 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_53_53, 0) = ((MR_Box) (ll_backend__disj_gen__V_54_54));
#line 742 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_53_53, 1) = ((MR_Box) ((MR_String) "Initialize number of snapshot_infos"));
#line 742 "disj_gen.m"
        }
#line 743 "disj_gen.m"
        {
#line 743 "disj_gen.m"
          ll_backend__disj_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 743 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 743 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_61_61, 1) = ((MR_Box) (ll_backend__disj_gen__AddrRegLval_31));
#line 743 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_61_61, 2) = ((MR_Box) (ll_backend__disj_gen__FirstNonFixedAddr_29));
#line 743 "disj_gen.m"
        }
#line 746 "disj_gen.m"
        {
#line 746 "disj_gen.m"
          ll_backend__disj_gen__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 746 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_60_60, 0) = ((MR_Box) (ll_backend__disj_gen__V_61_61));
#line 746 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_60_60, 1) = ((MR_Box) ((MR_String) "Initialize pointer to nonfixed part of embedded frame"));
#line 746 "disj_gen.m"
        }
#line 742 "disj_gen.m"
        {
#line 742 "disj_gen.m"
          ll_backend__disj_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "disj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_59_59, 0) = ((MR_Box) (ll_backend__disj_gen__V_60_60));
#line 742 "disj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 742 "disj_gen.m"
        }
#line 739 "disj_gen.m"
        {
#line 739 "disj_gen.m"
          ll_backend__disj_gen__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "disj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_52_52, 0) = ((MR_Box) (ll_backend__disj_gen__V_53_53));
#line 739 "disj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_52_52, 1) = ((MR_Box) (ll_backend__disj_gen__V_59_59));
#line 739 "disj_gen.m"
        }
#line 736 "disj_gen.m"
        {
#line 736 "disj_gen.m"
          ll_backend__disj_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "disj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_47_47, 0) = ((MR_Box) (ll_backend__disj_gen__V_48_48));
#line 736 "disj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_47_47, 1) = ((MR_Box) (ll_backend__disj_gen__V_52_52));
#line 736 "disj_gen.m"
        }
#line 736 "disj_gen.m"
        {
#line 736 "disj_gen.m"
          ll_backend__disj_gen__PushInitCode_32 = mercury__cord__from_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_85_85, ll_backend__disj_gen__V_47_47);
        }
#line 747 "disj_gen.m"
        {
#line 747 "disj_gen.m"
          ll_backend__disj_gen__disj_alloc_snapshot_regions_7_p_0(ll_backend__disj_gen__SnapshotNumRegLval_30, ll_backend__disj_gen__AddrRegLval_31, ll_backend__disj_gen__EmbeddedStackFrame_28, ll_backend__disj_gen__SnapshotRegionVarList_17, &ll_backend__disj_gen__SnapshotRegionCode_33, ll_backend__disj_gen__STATE_VARIABLE_CI_46_46, &ll_backend__disj_gen__STATE_VARIABLE_CI_64_64);
        }
#line 752 "disj_gen.m"
        {
#line 752 "disj_gen.m"
          ll_backend__disj_gen__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 752 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_68_68, 0) = ((MR_Box) (ll_backend__disj_gen__SnapshotNumRegLval_30));
#line 752 "disj_gen.m"
        }
#line 751 "disj_gen.m"
        {
#line 751 "disj_gen.m"
          ll_backend__disj_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 751 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 751 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_66_66, 1) = ((MR_Box) ((MR_Integer) 3));
#line 751 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_66_66, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_28));
#line 751 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_66_66, 3) = ((MR_Box) (ll_backend__disj_gen__V_68_68));
#line 751 "disj_gen.m"
        }
#line 750 "disj_gen.m"
        {
#line 750 "disj_gen.m"
          ll_backend__disj_gen__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 750 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_65_65, 0) = ((MR_Box) (ll_backend__disj_gen__V_66_66));
#line 750 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_65_65, 1) = ((MR_Box) ((MR_String) "Store the number of snapshot_infos"));
#line 750 "disj_gen.m"
        }
#line 750 "disj_gen.m"
        {
#line 750 "disj_gen.m"
          ll_backend__disj_gen__SetCode_34 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_85_85, ((MR_Box) (ll_backend__disj_gen__V_65_65)));
        }
#line 756 "disj_gen.m"
        {
#line 756 "disj_gen.m"
          ll_backend__code_info__release_reg_3_p_0(ll_backend__disj_gen__SnapshotNumRegLval_30, ll_backend__disj_gen__STATE_VARIABLE_CI_64_64, &ll_backend__disj_gen__STATE_VARIABLE_CI_70_70);
        }
#line 757 "disj_gen.m"
        {
#line 757 "disj_gen.m"
          ll_backend__code_info__release_reg_3_p_0(ll_backend__disj_gen__AddrRegLval_31, ll_backend__disj_gen__STATE_VARIABLE_CI_70_70, ll_backend__disj_gen__STATE_VARIABLE_CI_36);
        }
#line 759 "disj_gen.m"
        {
#line 759 "disj_gen.m"
          ll_backend__disj_gen__V_72_72 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_85_85, ll_backend__disj_gen__SnapshotRegionCode_33, ll_backend__disj_gen__SetCode_34);
        }
#line 759 "disj_gen.m"
        {
#line 759 "disj_gen.m"
          *ll_backend__disj_gen__BeforeEnterCode_10 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_85_85, ll_backend__disj_gen__PushInitCode_32, ll_backend__disj_gen__V_72_72);
        }
#line 761 "disj_gen.m"
        {
#line 761 "disj_gen.m"
          ll_backend__disj_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 761 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 761 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 761 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_74_74, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_28));
#line 761 "disj_gen.m"
        }
#line 760 "disj_gen.m"
        {
#line 760 "disj_gen.m"
          ll_backend__disj_gen__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 760 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_73_73, 0) = ((MR_Box) (ll_backend__disj_gen__V_74_74));
#line 760 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_73_73, 1) = ((MR_Box) ((MR_String) "region enter later disjunct"));
#line 760 "disj_gen.m"
        }
#line 760 "disj_gen.m"
        {
#line 760 "disj_gen.m"
          *ll_backend__disj_gen__LaterCode_11 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_85_85, ((MR_Box) (ll_backend__disj_gen__V_73_73)));
        }
#line 767 "disj_gen.m"
        {
#line 767 "disj_gen.m"
          ll_backend__disj_gen__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 767 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 767 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 767 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_78_78, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_28));
#line 767 "disj_gen.m"
        }
#line 766 "disj_gen.m"
        {
#line 766 "disj_gen.m"
          ll_backend__disj_gen__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 766 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_77_77, 0) = ((MR_Box) (ll_backend__disj_gen__V_78_78));
#line 766 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_77_77, 1) = ((MR_Box) ((MR_String) "region enter last disjunct"));
#line 766 "disj_gen.m"
        }
#line 766 "disj_gen.m"
        {
#line 766 "disj_gen.m"
          *ll_backend__disj_gen__LastCode_12 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_85_85, ((MR_Box) (ll_backend__disj_gen__V_77_77)));
        }
#line 703 "disj_gen.m"
      }
#line 698 "disj_gen.m"
    else
#line 698 "disj_gen.m"
      {
#line 698 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeCtorInfo_81_81 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

#line 699 "disj_gen.m"
        {
#line 699 "disj_gen.m"
          *ll_backend__disj_gen__BeforeEnterCode_10 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_81_81);
        }
#line 700 "disj_gen.m"
        {
#line 700 "disj_gen.m"
          *ll_backend__disj_gen__LaterCode_11 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_81_81);
        }
#line 701 "disj_gen.m"
        {
#line 701 "disj_gen.m"
          *ll_backend__disj_gen__LastCode_12 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_81_81);
        }
#line 701 "disj_gen.m"
        *ll_backend__disj_gen__STATE_VARIABLE_CI_36 = ll_backend__disj_gen__STATE_VARIABLE_CI_0_35;
#line 698 "disj_gen.m"
      }
#line 698 "disj_gen.m"
  }
#line 691 "disj_gen.m"
}

#line 539 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__539__1_2_p_0(
#line 539 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HpSlot_75,
#line 539 "disj_gen.m"
  MR_Word ll_backend__disj_gen__BranchHpSlot_78)
#line 539 "disj_gen.m"
{
#line 539 "disj_gen.m"
  {
#line 539 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;

#line 539 "disj_gen.m"
    {
#line 539 "disj_gen.m"
      return ll_backend__disj_gen__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__disj_gen__HpSlot_75, ll_backend__disj_gen__BranchHpSlot_78);
    }
#line 539 "disj_gen.m"
    return ll_backend__disj_gen__succeeded;
#line 539 "disj_gen.m"
  }
#line 539 "disj_gen.m"
}

#line 537 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__537__1_2_p_0(
#line 537 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HpCodeInstrs_80,
#line 537 "disj_gen.m"
  MR_Word ll_backend__disj_gen__BranchHpCodeInstrs_81)
#line 537 "disj_gen.m"
{
#line 537 "disj_gen.m"
  {
#line 537 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;

#line 537 "disj_gen.m"
    {
#line 537 "disj_gen.m"
      return ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[2], ((MR_Box) (ll_backend__disj_gen__HpCodeInstrs_80)), ((MR_Box) (ll_backend__disj_gen__BranchHpCodeInstrs_81)));
    }
#line 537 "disj_gen.m"
    return ll_backend__disj_gen__succeeded;
#line 537 "disj_gen.m"
  }
#line 537 "disj_gen.m"
}

#line 101 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen____Compare____lookup_disj_info_0_0(
#line 101 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__HeadVar__1_1,
#line 101 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__2_2,
#line 101 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__3_3)
#line 101 "disj_gen.m"
{
#line 101 "disj_gen.m"
  {
#line 101 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;
#line 101 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__CastX_48 = (MR_Integer) ll_backend__disj_gen__HeadVar__2_2;
#line 101 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__CastY_49 = (MR_Integer) ll_backend__disj_gen__HeadVar__3_3;

#line 101 "disj_gen.m"
    ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__CastX_48 == ll_backend__disj_gen__CastY_49);
#line 101 "disj_gen.m"
    if (ll_backend__disj_gen__succeeded)
#line 1571 "ll_backend.disj_gen.c"
      *ll_backend__disj_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 101 "disj_gen.m"
    else
#line 101 "disj_gen.m"
      {
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 5)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 6)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 7)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 8)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 9)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 10)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 11)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 12)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 13)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 14)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 2)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 3)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 4)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 5)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 6)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 7)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 8)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 9)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 10)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 11)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 12)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 13)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 14)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_34_34;

#line 101 "disj_gen.m"
        {
#line 101 "disj_gen.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[4], &ll_backend__disj_gen__V_34_34, ((MR_Box) (ll_backend__disj_gen__V_4_4)), ((MR_Box) (ll_backend__disj_gen__V_19_19)));
        }
#line 1645 "ll_backend.disj_gen.c"
        ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_34_34 == (MR_Integer) 0);
#line 101 "disj_gen.m"
        ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 101 "disj_gen.m"
        if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
          *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_34_34;
#line 101 "disj_gen.m"
        else
#line 101 "disj_gen.m"
          {
#line 101 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_35_35;

#line 101 "disj_gen.m"
            {
#line 101 "disj_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_2[0], &ll_backend__disj_gen__V_35_35, ((MR_Box) (ll_backend__disj_gen__V_5_5)), ((MR_Box) (ll_backend__disj_gen__V_20_20)));
            }
#line 1665 "ll_backend.disj_gen.c"
            ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_35_35 == (MR_Integer) 0);
#line 101 "disj_gen.m"
            ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 101 "disj_gen.m"
            if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
              *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_35_35;
#line 101 "disj_gen.m"
            else
#line 101 "disj_gen.m"
              {
#line 101 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_36_36;

#line 101 "disj_gen.m"
                {
#line 101 "disj_gen.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[5], &ll_backend__disj_gen__V_36_36, ((MR_Box) (ll_backend__disj_gen__V_6_6)), ((MR_Box) (ll_backend__disj_gen__V_21_21)));
                }
#line 1685 "ll_backend.disj_gen.c"
                ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_36_36 == (MR_Integer) 0);
#line 101 "disj_gen.m"
                ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 101 "disj_gen.m"
                if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                  *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_36_36;
#line 101 "disj_gen.m"
                else
#line 101 "disj_gen.m"
                  {
#line 101 "disj_gen.m"
                    MR_Word ll_backend__disj_gen__V_37_37;

#line 101 "disj_gen.m"
                    {
#line 101 "disj_gen.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[6], &ll_backend__disj_gen__V_37_37, ((MR_Box) (ll_backend__disj_gen__V_7_7)), ((MR_Box) (ll_backend__disj_gen__V_22_22)));
                    }
#line 1705 "ll_backend.disj_gen.c"
                    ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_37_37 == (MR_Integer) 0);
#line 101 "disj_gen.m"
                    ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 101 "disj_gen.m"
                    if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                      *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_37_37;
#line 101 "disj_gen.m"
                    else
#line 101 "disj_gen.m"
                      {
#line 101 "disj_gen.m"
                        MR_Word ll_backend__disj_gen__V_38_38;

#line 101 "disj_gen.m"
                        {
#line 101 "disj_gen.m"
                          ll_backend__llds____Compare____lval_0_0(&ll_backend__disj_gen__V_38_38, ll_backend__disj_gen__V_8_8, ll_backend__disj_gen__V_23_23);
                        }
#line 1725 "ll_backend.disj_gen.c"
                        ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_38_38 == (MR_Integer) 0);
#line 101 "disj_gen.m"
                        ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 101 "disj_gen.m"
                        if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                          *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_38_38;
#line 101 "disj_gen.m"
                        else
#line 101 "disj_gen.m"
                          {
#line 101 "disj_gen.m"
                            MR_Word ll_backend__disj_gen__V_39_39;

#line 101 "disj_gen.m"
                            {
#line 101 "disj_gen.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_resume_map_0, &ll_backend__disj_gen__V_39_39, ((MR_Box) (ll_backend__disj_gen__V_9_9)), ((MR_Box) (ll_backend__disj_gen__V_24_24)));
                            }
#line 1745 "ll_backend.disj_gen.c"
                            ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_39_39 == (MR_Integer) 0);
#line 101 "disj_gen.m"
                            ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 101 "disj_gen.m"
                            if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                              *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_39_39;
#line 101 "disj_gen.m"
                            else
#line 101 "disj_gen.m"
                              {
#line 101 "disj_gen.m"
                                MR_Word ll_backend__disj_gen__V_40_40;

#line 101 "disj_gen.m"
                                {
#line 101 "disj_gen.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[3], &ll_backend__disj_gen__V_40_40, ((MR_Box) (ll_backend__disj_gen__V_10_10)), ((MR_Box) (ll_backend__disj_gen__V_25_25)));
                                }
#line 1765 "ll_backend.disj_gen.c"
                                ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_40_40 == (MR_Integer) 0);
#line 101 "disj_gen.m"
                                ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 101 "disj_gen.m"
                                if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                                  *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_40_40;
#line 101 "disj_gen.m"
                                else
#line 101 "disj_gen.m"
                                  {
#line 101 "disj_gen.m"
                                    MR_Word ll_backend__disj_gen__V_41_41;

#line 101 "disj_gen.m"
                                    {
#line 101 "disj_gen.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[3], &ll_backend__disj_gen__V_41_41, ((MR_Box) (ll_backend__disj_gen__V_11_11)), ((MR_Box) (ll_backend__disj_gen__V_26_26)));
                                    }
#line 1785 "ll_backend.disj_gen.c"
                                    ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_41_41 == (MR_Integer) 0);
#line 101 "disj_gen.m"
                                    ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 101 "disj_gen.m"
                                    if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                                      *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_41_41;
#line 101 "disj_gen.m"
                                    else
#line 101 "disj_gen.m"
                                      {
#line 101 "disj_gen.m"
                                        MR_Word ll_backend__disj_gen__V_42_42;

#line 101 "disj_gen.m"
                                        {
#line 101 "disj_gen.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[7], &ll_backend__disj_gen__V_42_42, ((MR_Box) (ll_backend__disj_gen__V_12_12)), ((MR_Box) (ll_backend__disj_gen__V_27_27)));
                                        }
#line 1805 "ll_backend.disj_gen.c"
                                        ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_42_42 == (MR_Integer) 0);
#line 101 "disj_gen.m"
                                        ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 101 "disj_gen.m"
                                        if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                                          *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_42_42;
#line 101 "disj_gen.m"
                                        else
#line 101 "disj_gen.m"
                                          {
#line 101 "disj_gen.m"
                                            MR_Word ll_backend__disj_gen__V_43_43;

#line 101 "disj_gen.m"
                                            {
#line 101 "disj_gen.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[3], &ll_backend__disj_gen__V_43_43, ((MR_Box) (ll_backend__disj_gen__V_13_13)), ((MR_Box) (ll_backend__disj_gen__V_28_28)));
                                            }
#line 1825 "ll_backend.disj_gen.c"
                                            ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_43_43 == (MR_Integer) 0);
#line 101 "disj_gen.m"
                                            ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 101 "disj_gen.m"
                                            if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                                              *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_43_43;
#line 101 "disj_gen.m"
                                            else
#line 101 "disj_gen.m"
                                              {
#line 101 "disj_gen.m"
                                                MR_Word ll_backend__disj_gen__V_44_44;

#line 101 "disj_gen.m"
                                                {
#line 101 "disj_gen.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[7], &ll_backend__disj_gen__V_44_44, ((MR_Box) (ll_backend__disj_gen__V_14_14)), ((MR_Box) (ll_backend__disj_gen__V_29_29)));
                                                }
#line 1845 "ll_backend.disj_gen.c"
                                                ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_44_44 == (MR_Integer) 0);
#line 101 "disj_gen.m"
                                                ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 101 "disj_gen.m"
                                                if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                                                  *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_44_44;
#line 101 "disj_gen.m"
                                                else
#line 101 "disj_gen.m"
                                                  {
#line 101 "disj_gen.m"
                                                    MR_Word ll_backend__disj_gen__V_45_45;

#line 101 "disj_gen.m"
                                                    {
#line 101 "disj_gen.m"
                                                      ll_backend__code_info____Compare____disj_hijack_info_0_0(&ll_backend__disj_gen__V_45_45, ll_backend__disj_gen__V_15_15, ll_backend__disj_gen__V_30_30);
                                                    }
#line 1865 "ll_backend.disj_gen.c"
                                                    ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_45_45 == (MR_Integer) 0);
#line 101 "disj_gen.m"
                                                    ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 101 "disj_gen.m"
                                                    if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                                                      *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_45_45;
#line 101 "disj_gen.m"
                                                    else
#line 101 "disj_gen.m"
                                                      {
#line 101 "disj_gen.m"
                                                        MR_Word ll_backend__disj_gen__V_46_46;

#line 101 "disj_gen.m"
                                                        {
#line 101 "disj_gen.m"
                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[3], &ll_backend__disj_gen__V_46_46, ((MR_Box) (ll_backend__disj_gen__V_16_16)), ((MR_Box) (ll_backend__disj_gen__V_31_31)));
                                                        }
#line 1885 "ll_backend.disj_gen.c"
                                                        ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_46_46 == (MR_Integer) 0);
#line 101 "disj_gen.m"
                                                        ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 101 "disj_gen.m"
                                                        if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                                                          *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_46_46;
#line 101 "disj_gen.m"
                                                        else
#line 101 "disj_gen.m"
                                                          {
#line 101 "disj_gen.m"
                                                            MR_Word ll_backend__disj_gen__V_47_47;

#line 101 "disj_gen.m"
                                                            {
#line 101 "disj_gen.m"
                                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[8], &ll_backend__disj_gen__V_47_47, ((MR_Box) (ll_backend__disj_gen__V_17_17)), ((MR_Box) (ll_backend__disj_gen__V_32_32)));
                                                            }
#line 1905 "ll_backend.disj_gen.c"
                                                            ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_47_47 == (MR_Integer) 0);
#line 101 "disj_gen.m"
                                                            ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 101 "disj_gen.m"
                                                            if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                                                              *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_47_47;
#line 101 "disj_gen.m"
                                                            else
#line 101 "disj_gen.m"
                                                              {
#line 101 "disj_gen.m"
                                                                {
#line 101 "disj_gen.m"
                                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[9], ll_backend__disj_gen__HeadVar__1_1, ((MR_Box) (ll_backend__disj_gen__V_18_18)), ((MR_Box) (ll_backend__disj_gen__V_33_33)));
#line 101 "disj_gen.m"
                                                                  return;
                                                                }
#line 101 "disj_gen.m"
                                                              }
#line 101 "disj_gen.m"
                                                          }
#line 101 "disj_gen.m"
                                                      }
#line 101 "disj_gen.m"
                                                  }
#line 101 "disj_gen.m"
                                              }
#line 101 "disj_gen.m"
                                          }
#line 101 "disj_gen.m"
                                      }
#line 101 "disj_gen.m"
                                  }
#line 101 "disj_gen.m"
                              }
#line 101 "disj_gen.m"
                          }
#line 101 "disj_gen.m"
                      }
#line 101 "disj_gen.m"
                  }
#line 101 "disj_gen.m"
              }
#line 101 "disj_gen.m"
          }
#line 101 "disj_gen.m"
      }
#line 101 "disj_gen.m"
  }
#line 101 "disj_gen.m"
}

#line 101 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____lookup_disj_info_0_0(
#line 101 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__1_1,
#line 101 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__2_2)
#line 101 "disj_gen.m"
{
#line 101 "disj_gen.m"
  {
#line 101 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;
#line 101 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__CastX_33 = (MR_Integer) ll_backend__disj_gen__HeadVar__1_1;
#line 101 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__CastY_34 = (MR_Integer) ll_backend__disj_gen__HeadVar__2_2;

#line 101 "disj_gen.m"
    ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__CastX_33 == ll_backend__disj_gen__CastY_34);
#line 101 "disj_gen.m"
    if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
      ll_backend__disj_gen__succeeded = MR_TRUE;
#line 101 "disj_gen.m"
    else
#line 101 "disj_gen.m"
      {
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_36_36;
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_37_37;
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_38_38;
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeCtorInfo_40_40;
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_41_41;
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_42_42;
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_43_43;
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_44_44;
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_45_45;
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_47_47;
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_48_48;
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_49_49;
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 4)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 5)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 6)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 7)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 8)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 9)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 10)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 11)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 12)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 13)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 14)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 5)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 6)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 7)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 8)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 9)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 10)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 11)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 12)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 13)));
#line 101 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 14)));

#line 2072 "ll_backend.disj_gen.c"
        {
#line 2074 "ll_backend.disj_gen.c"
          ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[4], ((MR_Box) (ll_backend__disj_gen__V_3_3)), ((MR_Box) (ll_backend__disj_gen__V_18_18)));
        }
#line 101 "disj_gen.m"
        if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
          {
#line 2081 "ll_backend.disj_gen.c"
            ll_backend__disj_gen__TypeInfo_36_36 = (MR_Word) &ll_backend__disj_gen_scalar_common_2[0];
#line 2083 "ll_backend.disj_gen.c"
            {
#line 2085 "ll_backend.disj_gen.c"
              ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_36_36, ((MR_Box) (ll_backend__disj_gen__V_4_4)), ((MR_Box) (ll_backend__disj_gen__V_19_19)));
            }
#line 101 "disj_gen.m"
            if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
              {
#line 2092 "ll_backend.disj_gen.c"
                ll_backend__disj_gen__TypeInfo_37_37 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[5];
#line 2094 "ll_backend.disj_gen.c"
                {
#line 2096 "ll_backend.disj_gen.c"
                  ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_37_37, ((MR_Box) (ll_backend__disj_gen__V_5_5)), ((MR_Box) (ll_backend__disj_gen__V_20_20)));
                }
#line 101 "disj_gen.m"
                if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                  {
#line 2103 "ll_backend.disj_gen.c"
                    ll_backend__disj_gen__TypeInfo_38_38 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[6];
#line 2105 "ll_backend.disj_gen.c"
                    {
#line 2107 "ll_backend.disj_gen.c"
                      ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_38_38, ((MR_Box) (ll_backend__disj_gen__V_6_6)), ((MR_Box) (ll_backend__disj_gen__V_21_21)));
                    }
#line 101 "disj_gen.m"
                    if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                      {
#line 2114 "ll_backend.disj_gen.c"
                        {
#line 2116 "ll_backend.disj_gen.c"
                          ll_backend__disj_gen__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__disj_gen__V_7_7, ll_backend__disj_gen__V_22_22);
                        }
#line 101 "disj_gen.m"
                        if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                          {
#line 2123 "ll_backend.disj_gen.c"
                            ll_backend__disj_gen__TypeCtorInfo_40_40 = (MR_Word) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_resume_map_0;
#line 2125 "ll_backend.disj_gen.c"
                            {
#line 2127 "ll_backend.disj_gen.c"
                              ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeCtorInfo_40_40, ((MR_Box) (ll_backend__disj_gen__V_8_8)), ((MR_Box) (ll_backend__disj_gen__V_23_23)));
                            }
#line 101 "disj_gen.m"
                            if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                              {
#line 2134 "ll_backend.disj_gen.c"
                                ll_backend__disj_gen__TypeInfo_41_41 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[3];
#line 2136 "ll_backend.disj_gen.c"
                                {
#line 2138 "ll_backend.disj_gen.c"
                                  ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_41_41, ((MR_Box) (ll_backend__disj_gen__V_9_9)), ((MR_Box) (ll_backend__disj_gen__V_24_24)));
                                }
#line 101 "disj_gen.m"
                                if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                                  {
#line 2145 "ll_backend.disj_gen.c"
                                    ll_backend__disj_gen__TypeInfo_42_42 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[3];
#line 2147 "ll_backend.disj_gen.c"
                                    {
#line 2149 "ll_backend.disj_gen.c"
                                      ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_42_42, ((MR_Box) (ll_backend__disj_gen__V_10_10)), ((MR_Box) (ll_backend__disj_gen__V_25_25)));
                                    }
#line 101 "disj_gen.m"
                                    if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                                      {
#line 2156 "ll_backend.disj_gen.c"
                                        ll_backend__disj_gen__TypeInfo_43_43 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[7];
#line 2158 "ll_backend.disj_gen.c"
                                        {
#line 2160 "ll_backend.disj_gen.c"
                                          ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_43_43, ((MR_Box) (ll_backend__disj_gen__V_11_11)), ((MR_Box) (ll_backend__disj_gen__V_26_26)));
                                        }
#line 101 "disj_gen.m"
                                        if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                                          {
#line 2167 "ll_backend.disj_gen.c"
                                            ll_backend__disj_gen__TypeInfo_44_44 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[3];
#line 2169 "ll_backend.disj_gen.c"
                                            {
#line 2171 "ll_backend.disj_gen.c"
                                              ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_44_44, ((MR_Box) (ll_backend__disj_gen__V_12_12)), ((MR_Box) (ll_backend__disj_gen__V_27_27)));
                                            }
#line 101 "disj_gen.m"
                                            if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                                              {
#line 2178 "ll_backend.disj_gen.c"
                                                ll_backend__disj_gen__TypeInfo_45_45 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[7];
#line 2180 "ll_backend.disj_gen.c"
                                                {
#line 2182 "ll_backend.disj_gen.c"
                                                  ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_45_45, ((MR_Box) (ll_backend__disj_gen__V_13_13)), ((MR_Box) (ll_backend__disj_gen__V_28_28)));
                                                }
#line 101 "disj_gen.m"
                                                if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                                                  {
#line 2189 "ll_backend.disj_gen.c"
                                                    {
#line 2191 "ll_backend.disj_gen.c"
                                                      ll_backend__disj_gen__succeeded = ll_backend__code_info____Unify____disj_hijack_info_0_0(ll_backend__disj_gen__V_14_14, ll_backend__disj_gen__V_29_29);
                                                    }
#line 101 "disj_gen.m"
                                                    if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                                                      {
#line 2198 "ll_backend.disj_gen.c"
                                                        ll_backend__disj_gen__TypeInfo_47_47 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[3];
#line 2200 "ll_backend.disj_gen.c"
                                                        {
#line 2202 "ll_backend.disj_gen.c"
                                                          ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_47_47, ((MR_Box) (ll_backend__disj_gen__V_15_15)), ((MR_Box) (ll_backend__disj_gen__V_30_30)));
                                                        }
#line 101 "disj_gen.m"
                                                        if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                                                          {
#line 2209 "ll_backend.disj_gen.c"
                                                            ll_backend__disj_gen__TypeInfo_48_48 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[8];
#line 2211 "ll_backend.disj_gen.c"
                                                            {
#line 2213 "ll_backend.disj_gen.c"
                                                              ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_48_48, ((MR_Box) (ll_backend__disj_gen__V_16_16)), ((MR_Box) (ll_backend__disj_gen__V_31_31)));
                                                            }
#line 101 "disj_gen.m"
                                                            if (ll_backend__disj_gen__succeeded)
#line 101 "disj_gen.m"
                                                              {
#line 2220 "ll_backend.disj_gen.c"
                                                                ll_backend__disj_gen__TypeInfo_49_49 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[9];
#line 2222 "ll_backend.disj_gen.c"
                                                                {
#line 2224 "ll_backend.disj_gen.c"
                                                                  return ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_49_49, ((MR_Box) (ll_backend__disj_gen__V_17_17)), ((MR_Box) (ll_backend__disj_gen__V_32_32)));
                                                                }
#line 101 "disj_gen.m"
                                                              }
#line 101 "disj_gen.m"
                                                          }
#line 101 "disj_gen.m"
                                                      }
#line 101 "disj_gen.m"
                                                  }
#line 101 "disj_gen.m"
                                              }
#line 101 "disj_gen.m"
                                          }
#line 101 "disj_gen.m"
                                      }
#line 101 "disj_gen.m"
                                  }
#line 101 "disj_gen.m"
                              }
#line 101 "disj_gen.m"
                          }
#line 101 "disj_gen.m"
                      }
#line 101 "disj_gen.m"
                  }
#line 101 "disj_gen.m"
              }
#line 101 "disj_gen.m"
          }
#line 101 "disj_gen.m"
      }
#line 101 "disj_gen.m"
    return ll_backend__disj_gen__succeeded;
#line 101 "disj_gen.m"
  }
#line 101 "disj_gen.m"
}

#line 684 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0(
#line 684 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__HeadVar__1_1,
#line 684 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__2_2,
#line 684 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__3_3)
#line 684 "disj_gen.m"
{
#line 684 "disj_gen.m"
  {
#line 684 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;
#line 684 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__CastX_13 = (MR_Integer) ll_backend__disj_gen__HeadVar__2_2;
#line 684 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__CastY_14 = (MR_Integer) ll_backend__disj_gen__HeadVar__3_3;

#line 684 "disj_gen.m"
    ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__CastX_13 == ll_backend__disj_gen__CastY_14);
#line 684 "disj_gen.m"
    if (ll_backend__disj_gen__succeeded)
#line 2288 "ll_backend.disj_gen.c"
      *ll_backend__disj_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 684 "disj_gen.m"
    else
#line 684 "disj_gen.m"
      if ((ll_backend__disj_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 684 "disj_gen.m"
        if ((ll_backend__disj_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 684 "disj_gen.m"
          *ll_backend__disj_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 684 "disj_gen.m"
        else
#line 2300 "ll_backend.disj_gen.c"
          *ll_backend__disj_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 684 "disj_gen.m"
      else
#line 684 "disj_gen.m"
        {
#line 684 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 684 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 0)));

#line 684 "disj_gen.m"
          if ((ll_backend__disj_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2313 "ll_backend.disj_gen.c"
            *ll_backend__disj_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 684 "disj_gen.m"
          else
#line 684 "disj_gen.m"
            {
#line 684 "disj_gen.m"
              MR_Word ll_backend__disj_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 684 "disj_gen.m"
              MR_Word ll_backend__disj_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 684 "disj_gen.m"
              MR_Word ll_backend__disj_gen__V_12_12;

#line 684 "disj_gen.m"
              {
#line 684 "disj_gen.m"
                ll_backend__llds____Compare____label_0_0(&ll_backend__disj_gen__V_12_12, ll_backend__disj_gen__V_18_18, ll_backend__disj_gen__V_10_10);
              }
#line 2331 "ll_backend.disj_gen.c"
              ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_12_12 == (MR_Integer) 0);
#line 684 "disj_gen.m"
              ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 684 "disj_gen.m"
              if (ll_backend__disj_gen__succeeded)
#line 684 "disj_gen.m"
                *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_12_12;
#line 684 "disj_gen.m"
              else
#line 684 "disj_gen.m"
                {
#line 684 "disj_gen.m"
                  {
#line 684 "disj_gen.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[3], ll_backend__disj_gen__HeadVar__1_1, ((MR_Box) (ll_backend__disj_gen__V_17_17)), ((MR_Box) (ll_backend__disj_gen__V_11_11)));
#line 684 "disj_gen.m"
                    return;
                  }
#line 684 "disj_gen.m"
                }
#line 684 "disj_gen.m"
            }
#line 684 "disj_gen.m"
        }
#line 684 "disj_gen.m"
  }
#line 684 "disj_gen.m"
}

#line 684 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0(
#line 684 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__1_1,
#line 684 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__2_2)
#line 684 "disj_gen.m"
{
#line 684 "disj_gen.m"
  {
#line 684 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;
#line 684 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__CastX_9 = (MR_Integer) ll_backend__disj_gen__HeadVar__1_1;
#line 684 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__CastY_10 = (MR_Integer) ll_backend__disj_gen__HeadVar__2_2;

#line 684 "disj_gen.m"
    ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__CastX_9 == ll_backend__disj_gen__CastY_10);
#line 684 "disj_gen.m"
    if (ll_backend__disj_gen__succeeded)
#line 684 "disj_gen.m"
      ll_backend__disj_gen__succeeded = MR_TRUE;
#line 684 "disj_gen.m"
    else
#line 684 "disj_gen.m"
      if ((ll_backend__disj_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 684 "disj_gen.m"
        {
#line 684 "disj_gen.m"
          MR_Integer ll_backend__disj_gen__CastX_3 = (MR_Integer) ll_backend__disj_gen__HeadVar__1_1;
#line 684 "disj_gen.m"
          MR_Integer ll_backend__disj_gen__CastY_4 = (MR_Integer) ll_backend__disj_gen__HeadVar__2_2;

#line 684 "disj_gen.m"
          ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__CastY_4 == ll_backend__disj_gen__CastX_3);
#line 684 "disj_gen.m"
        }
#line 684 "disj_gen.m"
      else
#line 684 "disj_gen.m"
        {
#line 684 "disj_gen.m"
          MR_Word ll_backend__disj_gen__TypeInfo_12_12;
#line 684 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 684 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 684 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_7_7;
#line 684 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_8_8;

#line 684 "disj_gen.m"
          ll_backend__disj_gen__succeeded = ((MR_tag((MR_Word) ll_backend__disj_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 684 "disj_gen.m"
          if (ll_backend__disj_gen__succeeded)
#line 684 "disj_gen.m"
            {
#line 684 "disj_gen.m"
              ll_backend__disj_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 684 "disj_gen.m"
              ll_backend__disj_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 2425 "ll_backend.disj_gen.c"
              {
#line 2427 "ll_backend.disj_gen.c"
                ll_backend__disj_gen__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__disj_gen__V_5_5, ll_backend__disj_gen__V_7_7);
              }
#line 684 "disj_gen.m"
              if (ll_backend__disj_gen__succeeded)
#line 684 "disj_gen.m"
                {
#line 2434 "ll_backend.disj_gen.c"
                  ll_backend__disj_gen__TypeInfo_12_12 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[3];
#line 2436 "ll_backend.disj_gen.c"
                  {
#line 2438 "ll_backend.disj_gen.c"
                    return ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_12_12, ((MR_Box) (ll_backend__disj_gen__V_6_6)), ((MR_Box) (ll_backend__disj_gen__V_8_8)));
                  }
#line 684 "disj_gen.m"
                }
#line 684 "disj_gen.m"
            }
#line 684 "disj_gen.m"
        }
#line 684 "disj_gen.m"
    return ll_backend__disj_gen__succeeded;
#line 684 "disj_gen.m"
  }
#line 684 "disj_gen.m"
}

#line 911 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__disj_alloc_snapshot_regions_7_p_0(
#line 911 "disj_gen.m"
  MR_Word ll_backend__disj_gen__NumLval_1,
#line 911 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddrLval_2,
#line 911 "disj_gen.m"
  MR_Word ll_backend__disj_gen__EmbeddedStackFrame_3,
#line 911 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__4_4,
#line 911 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__HeadVar__5_5,
#line 911 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_6,
#line 911 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_7)
#line 911 "disj_gen.m"
{
#line 915 "disj_gen.m"
  {
#line 915 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;

#line 915 "disj_gen.m"
    if ((ll_backend__disj_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 915 "disj_gen.m"
      {
#line 915 "disj_gen.m"
        {
#line 915 "disj_gen.m"
          *ll_backend__disj_gen__HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 915 "disj_gen.m"
        *ll_backend__disj_gen__STATE_VARIABLE_CI_7 = ll_backend__disj_gen__STATE_VARIABLE_CI_0_6;
#line 915 "disj_gen.m"
      }
#line 915 "disj_gen.m"
    else
#line 917 "disj_gen.m"
      {
#line 917 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeCtorInfo_34_34 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 917 "disj_gen.m"
        MR_Word ll_backend__disj_gen__RegionVar_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__4_4, (MR_Integer) 0)));
#line 917 "disj_gen.m"
        MR_Word ll_backend__disj_gen__RegionVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__4_4, (MR_Integer) 1)));
#line 917 "disj_gen.m"
        MR_Word ll_backend__disj_gen__Code_19;
#line 917 "disj_gen.m"
        MR_Word ll_backend__disj_gen__Codes_20;
#line 917 "disj_gen.m"
        MR_Word ll_backend__disj_gen__ProduceVarCode_22;
#line 917 "disj_gen.m"
        MR_Word ll_backend__disj_gen__RegionVarRval_23;
#line 917 "disj_gen.m"
        MR_Word ll_backend__disj_gen__SaveCode_24;
#line 917 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_27_27;
#line 917 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_28_28;
#line 917 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_29_29;

#line 918 "disj_gen.m"
        {
#line 918 "disj_gen.m"
          ll_backend__code_info__produce_variable_5_p_0(ll_backend__disj_gen__RegionVar_17, &ll_backend__disj_gen__ProduceVarCode_22, &ll_backend__disj_gen__RegionVarRval_23, ll_backend__disj_gen__STATE_VARIABLE_CI_0_6, &ll_backend__disj_gen__STATE_VARIABLE_CI_27_27);
        }
#line 920 "disj_gen.m"
        {
#line 920 "disj_gen.m"
          ll_backend__disj_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 920 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 920 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 920 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_29_29, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_3));
#line 920 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_29_29, 3) = ((MR_Box) (ll_backend__disj_gen__RegionVarRval_23));
#line 920 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_29_29, 4) = ((MR_Box) (ll_backend__disj_gen__NumLval_1));
#line 920 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_29_29, 5) = ((MR_Box) (ll_backend__disj_gen__AddrLval_2));
#line 920 "disj_gen.m"
        }
#line 919 "disj_gen.m"
        {
#line 919 "disj_gen.m"
          ll_backend__disj_gen__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 919 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_28_28, 0) = ((MR_Box) (ll_backend__disj_gen__V_29_29));
#line 919 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_28_28, 1) = ((MR_Box) ((MR_String) "take alloc snapshot of the region"));
#line 919 "disj_gen.m"
        }
#line 919 "disj_gen.m"
        {
#line 919 "disj_gen.m"
          ll_backend__disj_gen__SaveCode_24 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_34_34, ((MR_Box) (ll_backend__disj_gen__V_28_28)));
        }
#line 925 "disj_gen.m"
        {
#line 925 "disj_gen.m"
          ll_backend__disj_gen__Code_19 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_34_34, ll_backend__disj_gen__ProduceVarCode_22, ll_backend__disj_gen__SaveCode_24);
        }
#line 926 "disj_gen.m"
        {
#line 926 "disj_gen.m"
          ll_backend__disj_gen__disj_alloc_snapshot_regions_7_p_0(ll_backend__disj_gen__NumLval_1, ll_backend__disj_gen__AddrLval_2, ll_backend__disj_gen__EmbeddedStackFrame_3, ll_backend__disj_gen__RegionVars_18, &ll_backend__disj_gen__Codes_20, ll_backend__disj_gen__STATE_VARIABLE_CI_27_27, ll_backend__disj_gen__STATE_VARIABLE_CI_7);
        }
#line 917 "disj_gen.m"
        {
#line 917 "disj_gen.m"
          *ll_backend__disj_gen__HeadVar__5_5 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_34_34, ll_backend__disj_gen__Code_19, ll_backend__disj_gen__Codes_20);
        }
#line 917 "disj_gen.m"
      }
#line 915 "disj_gen.m"
  }
#line 911 "disj_gen.m"
}

#line 894 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__disj_protect_regions_7_p_0(
#line 894 "disj_gen.m"
  MR_Word ll_backend__disj_gen__NumLval_1,
#line 894 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddrLval_2,
#line 894 "disj_gen.m"
  MR_Word ll_backend__disj_gen__EmbeddedStackFrame_3,
#line 894 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__4_4,
#line 894 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__HeadVar__5_5,
#line 894 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_6,
#line 894 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_7)
#line 894 "disj_gen.m"
{
#line 897 "disj_gen.m"
  {
#line 897 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;

#line 897 "disj_gen.m"
    if ((ll_backend__disj_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 897 "disj_gen.m"
      {
#line 897 "disj_gen.m"
        {
#line 897 "disj_gen.m"
          *ll_backend__disj_gen__HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 897 "disj_gen.m"
        *ll_backend__disj_gen__STATE_VARIABLE_CI_7 = ll_backend__disj_gen__STATE_VARIABLE_CI_0_6;
#line 897 "disj_gen.m"
      }
#line 897 "disj_gen.m"
    else
#line 899 "disj_gen.m"
      {
#line 899 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeCtorInfo_34_34 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 899 "disj_gen.m"
        MR_Word ll_backend__disj_gen__RegionVar_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__4_4, (MR_Integer) 0)));
#line 899 "disj_gen.m"
        MR_Word ll_backend__disj_gen__RegionVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__4_4, (MR_Integer) 1)));
#line 899 "disj_gen.m"
        MR_Word ll_backend__disj_gen__Code_19;
#line 899 "disj_gen.m"
        MR_Word ll_backend__disj_gen__Codes_20;
#line 899 "disj_gen.m"
        MR_Word ll_backend__disj_gen__ProduceVarCode_22;
#line 899 "disj_gen.m"
        MR_Word ll_backend__disj_gen__RegionVarRval_23;
#line 899 "disj_gen.m"
        MR_Word ll_backend__disj_gen__SaveCode_24;
#line 899 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_27_27;
#line 899 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_28_28;
#line 899 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_29_29;

#line 900 "disj_gen.m"
        {
#line 900 "disj_gen.m"
          ll_backend__code_info__produce_variable_5_p_0(ll_backend__disj_gen__RegionVar_17, &ll_backend__disj_gen__ProduceVarCode_22, &ll_backend__disj_gen__RegionVarRval_23, ll_backend__disj_gen__STATE_VARIABLE_CI_0_6, &ll_backend__disj_gen__STATE_VARIABLE_CI_27_27);
        }
#line 902 "disj_gen.m"
        {
#line 902 "disj_gen.m"
          ll_backend__disj_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 902 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 902 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 902 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_29_29, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_3));
#line 902 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_29_29, 3) = ((MR_Box) (ll_backend__disj_gen__RegionVarRval_23));
#line 902 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_29_29, 4) = ((MR_Box) (ll_backend__disj_gen__NumLval_1));
#line 902 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_29_29, 5) = ((MR_Box) (ll_backend__disj_gen__AddrLval_2));
#line 902 "disj_gen.m"
        }
#line 901 "disj_gen.m"
        {
#line 901 "disj_gen.m"
          ll_backend__disj_gen__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 901 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_28_28, 0) = ((MR_Box) (ll_backend__disj_gen__V_29_29));
#line 901 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_28_28, 1) = ((MR_Box) ((MR_String) "disj protect the region if needed"));
#line 901 "disj_gen.m"
        }
#line 901 "disj_gen.m"
        {
#line 901 "disj_gen.m"
          ll_backend__disj_gen__SaveCode_24 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_34_34, ((MR_Box) (ll_backend__disj_gen__V_28_28)));
        }
#line 907 "disj_gen.m"
        {
#line 907 "disj_gen.m"
          ll_backend__disj_gen__Code_19 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_34_34, ll_backend__disj_gen__ProduceVarCode_22, ll_backend__disj_gen__SaveCode_24);
        }
#line 908 "disj_gen.m"
        {
#line 908 "disj_gen.m"
          ll_backend__disj_gen__disj_protect_regions_7_p_0(ll_backend__disj_gen__NumLval_1, ll_backend__disj_gen__AddrLval_2, ll_backend__disj_gen__EmbeddedStackFrame_3, ll_backend__disj_gen__RegionVars_18, &ll_backend__disj_gen__Codes_20, ll_backend__disj_gen__STATE_VARIABLE_CI_27_27, ll_backend__disj_gen__STATE_VARIABLE_CI_7);
        }
#line 899 "disj_gen.m"
        {
#line 899 "disj_gen.m"
          *ll_backend__disj_gen__HeadVar__5_5 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_34_34, ll_backend__disj_gen__Code_19, ll_backend__disj_gen__Codes_20);
        }
#line 899 "disj_gen.m"
      }
#line 897 "disj_gen.m"
  }
#line 894 "disj_gen.m"
}

#line 774 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_p_0(
#line 774 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjRegionOps_11,
#line 774 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjRemovedRegionVars_12,
#line 774 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjAllocRegionVars_13,
#line 774 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__BeforeEnterCode_14,
#line 774 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__LaterCode_15,
#line 774 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__LastCode_16,
#line 774 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__StackVars_17,
#line 774 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__RegionCommitDisjCleanup_18,
#line 774 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_46,
#line 774 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_47)
#line 774 "disj_gen.m"
{
#line 783 "disj_gen.m"
  {
#line 783 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;

#line 783 "disj_gen.m"
    if ((ll_backend__disj_gen__DisjRegionOps_11 == (MR_Integer) 0))
#line 790 "disj_gen.m"
      {
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeCtorInfo_121_121 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_122_122;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeCtorInfo_124_124;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__ProtectRegionVarList_22;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__SnapshotRegionVarList_23;
#line 790 "disj_gen.m"
        MR_Integer ll_backend__disj_gen__NumProtectRegionVars_24;
#line 790 "disj_gen.m"
        MR_Integer ll_backend__disj_gen__NumSnapshotRegionVars_25;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__Globals_26;
#line 790 "disj_gen.m"
        MR_Integer ll_backend__disj_gen__FixedSize_27;
#line 790 "disj_gen.m"
        MR_Integer ll_backend__disj_gen__ProtectSize_28;
#line 790 "disj_gen.m"
        MR_Integer ll_backend__disj_gen__SnapshotSize_29;
#line 790 "disj_gen.m"
        MR_Integer ll_backend__disj_gen__FrameSize_30;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__Items_31;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__MainStackId_32;
#line 790 "disj_gen.m"
        MR_Integer ll_backend__disj_gen__FirstSlotNum_33;
#line 790 "disj_gen.m"
        MR_Integer ll_backend__disj_gen__LastSlotNum_34;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__EmbeddedStackFrame_35;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__FirstNonFixedAddr_36;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__ProtectNumRegLval_37;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__SnapshotNumRegLval_38;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__AddrRegLval_39;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__PushInitCode_40;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__ProtectRegionCode_41;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__SnapshotRegionCode_42;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__SetCode_43;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__CleanupLabel_44;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__CleanupCode_45;
#line 790 "disj_gen.m"
        MR_Integer ll_backend__disj_gen__V_51_51;
#line 790 "disj_gen.m"
        MR_Integer ll_backend__disj_gen__V_52_52;
#line 790 "disj_gen.m"
        MR_Integer ll_backend__disj_gen__V_53_53;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_56_56;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_58_58;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_60_60;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_62_62;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_63_63;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_64_64;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_65_65;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_68_68;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_69_69;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_70_70;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_71_71;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_75_75;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_76_76;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_77_77;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_82_82;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_83_83;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_84_84;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_87_87;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_88_88;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_89_89;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_90_90;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_91_91;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_93_93;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_95_95;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_96_96;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_97_97;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_99_99;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_102_102;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_103_103;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_104_104;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_105_105;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_106_106;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_107_107;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_108_108;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_111_111;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_112_112;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_116_116;
#line 790 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_117_117;

#line 807 "disj_gen.m"
        {
#line 807 "disj_gen.m"
          ll_backend__disj_gen__ProtectRegionVarList_22 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_121_121, ll_backend__disj_gen__DisjRemovedRegionVars_12);
        }
#line 808 "disj_gen.m"
        {
#line 808 "disj_gen.m"
          ll_backend__disj_gen__SnapshotRegionVarList_23 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_121_121, ll_backend__disj_gen__DisjAllocRegionVars_13);
        }
#line 2883 "ll_backend.disj_gen.c"
        ll_backend__disj_gen__TypeInfo_122_122 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[1];
#line 810 "disj_gen.m"
        {
#line 810 "disj_gen.m"
          mercury__list__length_2_p_0(ll_backend__disj_gen__TypeInfo_122_122, ll_backend__disj_gen__ProtectRegionVarList_22, &ll_backend__disj_gen__NumProtectRegionVars_24);
        }
#line 811 "disj_gen.m"
        {
#line 811 "disj_gen.m"
          mercury__list__length_2_p_0(ll_backend__disj_gen__TypeInfo_122_122, ll_backend__disj_gen__SnapshotRegionVarList_23, &ll_backend__disj_gen__NumSnapshotRegionVars_25);
        }
#line 813 "disj_gen.m"
        {
#line 813 "disj_gen.m"
          ll_backend__code_info__get_globals_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_46, &ll_backend__disj_gen__Globals_26);
        }
#line 814 "disj_gen.m"
        {
#line 814 "disj_gen.m"
          libs__globals__lookup_int_option_3_p_0(ll_backend__disj_gen__Globals_26, (MR_Integer) 287, &ll_backend__disj_gen__FixedSize_27);
        }
#line 816 "disj_gen.m"
        {
#line 816 "disj_gen.m"
          libs__globals__lookup_int_option_3_p_0(ll_backend__disj_gen__Globals_26, (MR_Integer) 292, &ll_backend__disj_gen__ProtectSize_28);
        }
#line 818 "disj_gen.m"
        {
#line 818 "disj_gen.m"
          libs__globals__lookup_int_option_3_p_0(ll_backend__disj_gen__Globals_26, (MR_Integer) 293, &ll_backend__disj_gen__SnapshotSize_29);
        }
#line 821 "disj_gen.m"
        ll_backend__disj_gen__V_52_52 = (ll_backend__disj_gen__ProtectSize_28 * ll_backend__disj_gen__NumProtectRegionVars_24);
#line 822 "disj_gen.m"
        ll_backend__disj_gen__V_51_51 = (ll_backend__disj_gen__FixedSize_27 + ll_backend__disj_gen__V_52_52);
#line 822 "disj_gen.m"
        ll_backend__disj_gen__V_53_53 = (ll_backend__disj_gen__SnapshotSize_29 * ll_backend__disj_gen__NumSnapshotRegionVars_25);
#line 820 "disj_gen.m"
        ll_backend__disj_gen__FrameSize_30 = (ll_backend__disj_gen__V_51_51 + ll_backend__disj_gen__V_53_53);
#line 824 "disj_gen.m"
        {
#line 824 "disj_gen.m"
          ll_backend__disj_gen__Items_31 = mercury__list__duplicate_2_f_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0, ll_backend__disj_gen__FrameSize_30, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))));
        }
#line 825 "disj_gen.m"
        {
#line 825 "disj_gen.m"
          ll_backend__code_info__acquire_several_temp_slots_8_p_0(ll_backend__disj_gen__Items_31, (MR_Integer) 1, ll_backend__disj_gen__StackVars_17, &ll_backend__disj_gen__MainStackId_32, &ll_backend__disj_gen__FirstSlotNum_33, &ll_backend__disj_gen__LastSlotNum_34, ll_backend__disj_gen__STATE_VARIABLE_CI_0_46, &ll_backend__disj_gen__STATE_VARIABLE_CI_56_56);
        }
#line 827 "disj_gen.m"
        {
#line 827 "disj_gen.m"
          ll_backend__disj_gen__EmbeddedStackFrame_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 827 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__EmbeddedStackFrame_35, 0) = ((MR_Box) (ll_backend__disj_gen__MainStackId_32));
#line 827 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__EmbeddedStackFrame_35, 1) = ((MR_Box) (ll_backend__disj_gen__FirstSlotNum_33));
#line 827 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__EmbeddedStackFrame_35, 2) = ((MR_Box) (ll_backend__disj_gen__LastSlotNum_34));
#line 827 "disj_gen.m"
        }
#line 829 "disj_gen.m"
        {
#line 829 "disj_gen.m"
          ll_backend__disj_gen__FirstNonFixedAddr_36 = ll_backend__llds__first_nonfixed_embedded_slot_addr_2_f_0(ll_backend__disj_gen__EmbeddedStackFrame_35, ll_backend__disj_gen__FixedSize_27);
        }
#line 831 "disj_gen.m"
        {
#line 831 "disj_gen.m"
          ll_backend__code_info__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__disj_gen__ProtectNumRegLval_37, ll_backend__disj_gen__STATE_VARIABLE_CI_56_56, &ll_backend__disj_gen__STATE_VARIABLE_CI_58_58);
        }
#line 832 "disj_gen.m"
        {
#line 832 "disj_gen.m"
          ll_backend__code_info__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__disj_gen__SnapshotNumRegLval_38, ll_backend__disj_gen__STATE_VARIABLE_CI_58_58, &ll_backend__disj_gen__STATE_VARIABLE_CI_60_60);
        }
#line 833 "disj_gen.m"
        {
#line 833 "disj_gen.m"
          ll_backend__code_info__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__disj_gen__AddrRegLval_39, ll_backend__disj_gen__STATE_VARIABLE_CI_60_60, &ll_backend__disj_gen__STATE_VARIABLE_CI_62_62);
        }
#line 2965 "ll_backend.disj_gen.c"
        ll_backend__disj_gen__TypeCtorInfo_124_124 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 835 "disj_gen.m"
        {
#line 835 "disj_gen.m"
          ll_backend__disj_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 835 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 835 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_65_65, 1) = ((MR_Box) ((MR_Integer) 1));
#line 835 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_65_65, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_35));
#line 835 "disj_gen.m"
        }
#line 837 "disj_gen.m"
        {
#line 837 "disj_gen.m"
          ll_backend__disj_gen__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 837 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_64_64, 0) = ((MR_Box) (ll_backend__disj_gen__V_65_65));
#line 837 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_64_64, 1) = ((MR_Box) ((MR_String) "Save stack pointer of embedded region nondet stack"));
#line 837 "disj_gen.m"
        }
#line 839 "disj_gen.m"
        ll_backend__disj_gen__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__disj_gen_scalar_common_1[10]);
#line 838 "disj_gen.m"
        {
#line 838 "disj_gen.m"
          ll_backend__disj_gen__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 838 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 838 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_70_70, 1) = ((MR_Box) (ll_backend__disj_gen__ProtectNumRegLval_37));
#line 838 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_70_70, 2) = ((MR_Box) (ll_backend__disj_gen__V_71_71));
#line 838 "disj_gen.m"
        }
#line 840 "disj_gen.m"
        {
#line 840 "disj_gen.m"
          ll_backend__disj_gen__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 840 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_69_69, 0) = ((MR_Box) (ll_backend__disj_gen__V_70_70));
#line 840 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_69_69, 1) = ((MR_Box) ((MR_String) "Initialize number of protect_infos"));
#line 840 "disj_gen.m"
        }
#line 841 "disj_gen.m"
        {
#line 841 "disj_gen.m"
          ll_backend__disj_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 841 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 841 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_77_77, 1) = ((MR_Box) (ll_backend__disj_gen__SnapshotNumRegLval_38));
#line 841 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_77_77, 2) = ((MR_Box) (ll_backend__disj_gen__V_71_71));
#line 841 "disj_gen.m"
        }
#line 843 "disj_gen.m"
        {
#line 843 "disj_gen.m"
          ll_backend__disj_gen__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 843 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_76_76, 0) = ((MR_Box) (ll_backend__disj_gen__V_77_77));
#line 843 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_76_76, 1) = ((MR_Box) ((MR_String) "Initialize number of snapshot_infos"));
#line 843 "disj_gen.m"
        }
#line 844 "disj_gen.m"
        {
#line 844 "disj_gen.m"
          ll_backend__disj_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 844 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 844 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_84_84, 1) = ((MR_Box) (ll_backend__disj_gen__AddrRegLval_39));
#line 844 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_84_84, 2) = ((MR_Box) (ll_backend__disj_gen__FirstNonFixedAddr_36));
#line 844 "disj_gen.m"
        }
#line 847 "disj_gen.m"
        {
#line 847 "disj_gen.m"
          ll_backend__disj_gen__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 847 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_83_83, 0) = ((MR_Box) (ll_backend__disj_gen__V_84_84));
#line 847 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_83_83, 1) = ((MR_Box) ((MR_String) "Initialize pointer to nonfixed part of embedded frame"));
#line 847 "disj_gen.m"
        }
#line 843 "disj_gen.m"
        {
#line 843 "disj_gen.m"
          ll_backend__disj_gen__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 843 "disj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_82_82, 0) = ((MR_Box) (ll_backend__disj_gen__V_83_83));
#line 843 "disj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 843 "disj_gen.m"
        }
#line 840 "disj_gen.m"
        {
#line 840 "disj_gen.m"
          ll_backend__disj_gen__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "disj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_75_75, 0) = ((MR_Box) (ll_backend__disj_gen__V_76_76));
#line 840 "disj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_75_75, 1) = ((MR_Box) (ll_backend__disj_gen__V_82_82));
#line 840 "disj_gen.m"
        }
#line 837 "disj_gen.m"
        {
#line 837 "disj_gen.m"
          ll_backend__disj_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 837 "disj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_68_68, 0) = ((MR_Box) (ll_backend__disj_gen__V_69_69));
#line 837 "disj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_68_68, 1) = ((MR_Box) (ll_backend__disj_gen__V_75_75));
#line 837 "disj_gen.m"
        }
#line 834 "disj_gen.m"
        {
#line 834 "disj_gen.m"
          ll_backend__disj_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 834 "disj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_63_63, 0) = ((MR_Box) (ll_backend__disj_gen__V_64_64));
#line 834 "disj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_63_63, 1) = ((MR_Box) (ll_backend__disj_gen__V_68_68));
#line 834 "disj_gen.m"
        }
#line 834 "disj_gen.m"
        {
#line 834 "disj_gen.m"
          ll_backend__disj_gen__PushInitCode_40 = mercury__cord__from_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_124_124, ll_backend__disj_gen__V_63_63);
        }
#line 848 "disj_gen.m"
        {
#line 848 "disj_gen.m"
          ll_backend__disj_gen__disj_protect_regions_7_p_0(ll_backend__disj_gen__ProtectNumRegLval_37, ll_backend__disj_gen__AddrRegLval_39, ll_backend__disj_gen__EmbeddedStackFrame_35, ll_backend__disj_gen__ProtectRegionVarList_22, &ll_backend__disj_gen__ProtectRegionCode_41, ll_backend__disj_gen__STATE_VARIABLE_CI_62_62, &ll_backend__disj_gen__STATE_VARIABLE_CI_87_87);
        }
#line 851 "disj_gen.m"
        {
#line 851 "disj_gen.m"
          ll_backend__disj_gen__disj_alloc_snapshot_regions_7_p_0(ll_backend__disj_gen__SnapshotNumRegLval_38, ll_backend__disj_gen__AddrRegLval_39, ll_backend__disj_gen__EmbeddedStackFrame_35, ll_backend__disj_gen__SnapshotRegionVarList_23, &ll_backend__disj_gen__SnapshotRegionCode_42, ll_backend__disj_gen__STATE_VARIABLE_CI_87_87, &ll_backend__disj_gen__STATE_VARIABLE_CI_88_88);
        }
#line 856 "disj_gen.m"
        {
#line 856 "disj_gen.m"
          ll_backend__disj_gen__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 856 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_93_93, 0) = ((MR_Box) (ll_backend__disj_gen__ProtectNumRegLval_37));
#line 856 "disj_gen.m"
        }
#line 855 "disj_gen.m"
        {
#line 855 "disj_gen.m"
          ll_backend__disj_gen__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 855 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 855 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_91_91, 1) = ((MR_Box) ((MR_Integer) 2));
#line 855 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_91_91, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_35));
#line 855 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_91_91, 3) = ((MR_Box) (ll_backend__disj_gen__V_93_93));
#line 855 "disj_gen.m"
        }
#line 858 "disj_gen.m"
        {
#line 858 "disj_gen.m"
          ll_backend__disj_gen__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 858 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_90_90, 0) = ((MR_Box) (ll_backend__disj_gen__V_91_91));
#line 858 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_90_90, 1) = ((MR_Box) ((MR_String) "Store the number of protect_infos"));
#line 858 "disj_gen.m"
        }
#line 860 "disj_gen.m"
        {
#line 860 "disj_gen.m"
          ll_backend__disj_gen__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 860 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_99_99, 0) = ((MR_Box) (ll_backend__disj_gen__SnapshotNumRegLval_38));
#line 860 "disj_gen.m"
        }
#line 859 "disj_gen.m"
        {
#line 859 "disj_gen.m"
          ll_backend__disj_gen__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 859 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 859 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_97_97, 1) = ((MR_Box) ((MR_Integer) 3));
#line 859 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_97_97, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_35));
#line 859 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_97_97, 3) = ((MR_Box) (ll_backend__disj_gen__V_99_99));
#line 859 "disj_gen.m"
        }
#line 863 "disj_gen.m"
        {
#line 863 "disj_gen.m"
          ll_backend__disj_gen__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 863 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_96_96, 0) = ((MR_Box) (ll_backend__disj_gen__V_97_97));
#line 863 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_96_96, 1) = ((MR_Box) ((MR_String) "Store the number of snapshot_infos"));
#line 863 "disj_gen.m"
        }
#line 858 "disj_gen.m"
        {
#line 858 "disj_gen.m"
          ll_backend__disj_gen__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 858 "disj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_95_95, 0) = ((MR_Box) (ll_backend__disj_gen__V_96_96));
#line 858 "disj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 858 "disj_gen.m"
        }
#line 854 "disj_gen.m"
        {
#line 854 "disj_gen.m"
          ll_backend__disj_gen__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "disj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_89_89, 0) = ((MR_Box) (ll_backend__disj_gen__V_90_90));
#line 854 "disj_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_89_89, 1) = ((MR_Box) (ll_backend__disj_gen__V_95_95));
#line 854 "disj_gen.m"
        }
#line 854 "disj_gen.m"
        {
#line 854 "disj_gen.m"
          ll_backend__disj_gen__SetCode_43 = mercury__cord__from_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_124_124, ll_backend__disj_gen__V_89_89);
        }
#line 864 "disj_gen.m"
        {
#line 864 "disj_gen.m"
          ll_backend__code_info__release_reg_3_p_0(ll_backend__disj_gen__ProtectNumRegLval_37, ll_backend__disj_gen__STATE_VARIABLE_CI_88_88, &ll_backend__disj_gen__STATE_VARIABLE_CI_102_102);
        }
#line 865 "disj_gen.m"
        {
#line 865 "disj_gen.m"
          ll_backend__code_info__release_reg_3_p_0(ll_backend__disj_gen__SnapshotNumRegLval_38, ll_backend__disj_gen__STATE_VARIABLE_CI_102_102, &ll_backend__disj_gen__STATE_VARIABLE_CI_103_103);
        }
#line 866 "disj_gen.m"
        {
#line 866 "disj_gen.m"
          ll_backend__code_info__release_reg_3_p_0(ll_backend__disj_gen__AddrRegLval_39, ll_backend__disj_gen__STATE_VARIABLE_CI_103_103, &ll_backend__disj_gen__STATE_VARIABLE_CI_104_104);
        }
#line 868 "disj_gen.m"
        {
#line 868 "disj_gen.m"
          ll_backend__disj_gen__V_106_106 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_124_124, ll_backend__disj_gen__SnapshotRegionCode_42, ll_backend__disj_gen__SetCode_43);
        }
#line 868 "disj_gen.m"
        {
#line 868 "disj_gen.m"
          ll_backend__disj_gen__V_105_105 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_124_124, ll_backend__disj_gen__ProtectRegionCode_41, ll_backend__disj_gen__V_106_106);
        }
#line 868 "disj_gen.m"
        {
#line 868 "disj_gen.m"
          *ll_backend__disj_gen__BeforeEnterCode_14 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_124_124, ll_backend__disj_gen__PushInitCode_40, ll_backend__disj_gen__V_105_105);
        }
#line 871 "disj_gen.m"
        {
#line 871 "disj_gen.m"
          ll_backend__disj_gen__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 871 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 871 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 871 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_108_108, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_35));
#line 871 "disj_gen.m"
        }
#line 870 "disj_gen.m"
        {
#line 870 "disj_gen.m"
          ll_backend__disj_gen__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 870 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_107_107, 0) = ((MR_Box) (ll_backend__disj_gen__V_108_108));
#line 870 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_107_107, 1) = ((MR_Box) ((MR_String) "region enter later disjunct"));
#line 870 "disj_gen.m"
        }
#line 870 "disj_gen.m"
        {
#line 870 "disj_gen.m"
          *ll_backend__disj_gen__LaterCode_15 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_124_124, ((MR_Box) (ll_backend__disj_gen__V_107_107)));
        }
#line 877 "disj_gen.m"
        {
#line 877 "disj_gen.m"
          ll_backend__disj_gen__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 877 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 877 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 877 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_112_112, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_35));
#line 877 "disj_gen.m"
        }
#line 876 "disj_gen.m"
        {
#line 876 "disj_gen.m"
          ll_backend__disj_gen__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 876 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_111_111, 0) = ((MR_Box) (ll_backend__disj_gen__V_112_112));
#line 876 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_111_111, 1) = ((MR_Box) ((MR_String) "region enter last disjunct"));
#line 876 "disj_gen.m"
        }
#line 876 "disj_gen.m"
        {
#line 876 "disj_gen.m"
          *ll_backend__disj_gen__LastCode_16 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_124_124, ((MR_Box) (ll_backend__disj_gen__V_111_111)));
        }
#line 883 "disj_gen.m"
        {
#line 883 "disj_gen.m"
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__disj_gen__CleanupLabel_44, ll_backend__disj_gen__STATE_VARIABLE_CI_104_104, ll_backend__disj_gen__STATE_VARIABLE_CI_47);
        }
#line 885 "disj_gen.m"
        {
#line 885 "disj_gen.m"
          ll_backend__disj_gen__V_117_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 885 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_117_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 885 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 885 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_117_117, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_35));
#line 885 "disj_gen.m"
        }
#line 884 "disj_gen.m"
        {
#line 884 "disj_gen.m"
          ll_backend__disj_gen__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 884 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_116_116, 0) = ((MR_Box) (ll_backend__disj_gen__V_117_117));
#line 884 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_116_116, 1) = ((MR_Box) ((MR_String) "region cleanup commit for nonlast disjunct"));
#line 884 "disj_gen.m"
        }
#line 884 "disj_gen.m"
        {
#line 884 "disj_gen.m"
          ll_backend__disj_gen__CleanupCode_45 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_124_124, ((MR_Box) (ll_backend__disj_gen__V_116_116)));
        }
#line 890 "disj_gen.m"
        {
#line 890 "disj_gen.m"
          MR_Word base;
#line 890 "disj_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 890 "disj_gen.m"
          *ll_backend__disj_gen__RegionCommitDisjCleanup_18 = base;
#line 890 "disj_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__disj_gen__CleanupLabel_44));
#line 890 "disj_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__disj_gen__CleanupCode_45));
#line 890 "disj_gen.m"
        }
#line 790 "disj_gen.m"
      }
#line 783 "disj_gen.m"
    else
#line 783 "disj_gen.m"
      {
#line 783 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeCtorInfo_120_120 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

#line 784 "disj_gen.m"
        {
#line 784 "disj_gen.m"
          *ll_backend__disj_gen__BeforeEnterCode_14 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_120_120);
        }
#line 785 "disj_gen.m"
        {
#line 785 "disj_gen.m"
          *ll_backend__disj_gen__LaterCode_15 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_120_120);
        }
#line 786 "disj_gen.m"
        {
#line 786 "disj_gen.m"
          *ll_backend__disj_gen__LastCode_16 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_120_120);
        }
#line 787 "disj_gen.m"
        *ll_backend__disj_gen__StackVars_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 788 "disj_gen.m"
        *ll_backend__disj_gen__RegionCommitDisjCleanup_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 788 "disj_gen.m"
        *ll_backend__disj_gen__STATE_VARIABLE_CI_47 = ll_backend__disj_gen__STATE_VARIABLE_CI_0_46;
#line 783 "disj_gen.m"
      }
#line 783 "disj_gen.m"
  }
#line 774 "disj_gen.m"
}

#line 539 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0_2(
#line 539 "disj_gen.m"
  MR_Box ll_backend__disj_gen__closure_arg)
#line 539 "disj_gen.m"
{
#line 539 "disj_gen.m"
  {
#line 539 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;
#line 539 "disj_gen.m"
    MR_Box ll_backend__disj_gen__closure = ll_backend__disj_gen__closure_arg;

#line 539 "disj_gen.m"
    {
#line 539 "disj_gen.m"
      return ll_backend__disj_gen__succeeded = ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__539__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__closure, (MR_Integer) 4))));
    }
#line 539 "disj_gen.m"
    return ll_backend__disj_gen__succeeded;
#line 539 "disj_gen.m"
  }
#line 539 "disj_gen.m"
}

#line 537 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0_1(
#line 537 "disj_gen.m"
  MR_Box ll_backend__disj_gen__closure_arg)
#line 537 "disj_gen.m"
{
#line 537 "disj_gen.m"
  {
#line 537 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;
#line 537 "disj_gen.m"
    MR_Box ll_backend__disj_gen__closure = ll_backend__disj_gen__closure_arg;

#line 537 "disj_gen.m"
    {
#line 537 "disj_gen.m"
      return ll_backend__disj_gen__succeeded = ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__537__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__closure, (MR_Integer) 4))));
    }
#line 537 "disj_gen.m"
    return ll_backend__disj_gen__succeeded;
#line 537 "disj_gen.m"
  }
#line 537 "disj_gen.m"
}

#line 461 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0(
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__1_1,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__CodeModel_2,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__FullResumeMap_3,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__MaybeEntryResumePoint_4,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HijackInfo_5,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjGoalInfo_6,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__RegionCommitDisjCleanup_7,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__EndLabel_8,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__ReclaimHeap_9,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__MaybeHpSlot0_10,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__MaybeTicketSlot_11,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__LaterRegionCode_12,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__LastRegionCode_13,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__BranchStart0_14,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__MaybeEnd0_15,
#line 461 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__MaybeEnd_16,
#line 461 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__Code_17,
#line 461 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_18,
#line 461 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_19)
#line 461 "disj_gen.m"
{
#line 468 "disj_gen.m"
  {
#line 468 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;

#line 468 "disj_gen.m"
    if ((ll_backend__disj_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 468 "disj_gen.m"
      {
#line 469 "disj_gen.m"
        {
#line 469 "disj_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.disj_gen", (MR_String) "predicate \140ll_backend.disj_gen.generate_disjuncts\'/19", (MR_String) "empty disjunction");
#line 469 "disj_gen.m"
          return;
        }
#line 468 "disj_gen.m"
      }
#line 468 "disj_gen.m"
    else
#line 474 "disj_gen.m"
      {
#line 474 "disj_gen.m"
        MR_Word ll_backend__disj_gen__Goal0_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 474 "disj_gen.m"
        MR_Word ll_backend__disj_gen__Goals_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 474 "disj_gen.m"
        MR_Word ll_backend__disj_gen__EntryResumePointCode_62;
#line 474 "disj_gen.m"
        MR_Word ll_backend__disj_gen__GoalExpr0_63;
#line 474 "disj_gen.m"
        MR_Word ll_backend__disj_gen__GoalInfo0_64;
#line 474 "disj_gen.m"
        MR_Word ll_backend__disj_gen__Resume_65;
#line 474 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_104_104;
#line 474 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_105_105;

#line 476 "disj_gen.m"
        {
#line 476 "disj_gen.m"
          ll_backend__code_info__reset_to_position_3_p_0(ll_backend__disj_gen__BranchStart0_14, ll_backend__disj_gen__STATE_VARIABLE_CI_0_18, &ll_backend__disj_gen__STATE_VARIABLE_CI_104_104);
        }
#line 483 "disj_gen.m"
        if ((ll_backend__disj_gen__MaybeEntryResumePoint_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "disj_gen.m"
          {
#line 485 "disj_gen.m"
            {
#line 485 "disj_gen.m"
              ll_backend__disj_gen__EntryResumePointCode_62 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 485 "disj_gen.m"
            ll_backend__disj_gen__STATE_VARIABLE_CI_105_105 = ll_backend__disj_gen__STATE_VARIABLE_CI_104_104;
#line 484 "disj_gen.m"
          }
#line 483 "disj_gen.m"
        else
#line 481 "disj_gen.m"
          {
#line 481 "disj_gen.m"
            MR_Word ll_backend__disj_gen__EntryResumePoint_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__MaybeEntryResumePoint_4, (MR_Integer) 0)));

#line 482 "disj_gen.m"
            {
#line 482 "disj_gen.m"
              ll_backend__code_info__generate_resume_point_4_p_0(ll_backend__disj_gen__EntryResumePoint_61, &ll_backend__disj_gen__EntryResumePointCode_62, ll_backend__disj_gen__STATE_VARIABLE_CI_104_104, &ll_backend__disj_gen__STATE_VARIABLE_CI_105_105);
            }
#line 481 "disj_gen.m"
          }
#line 488 "disj_gen.m"
        ll_backend__disj_gen__GoalExpr0_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Goal0_42, (MR_Integer) 0)));
#line 488 "disj_gen.m"
        ll_backend__disj_gen__GoalInfo0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Goal0_42, (MR_Integer) 1)));
#line 489 "disj_gen.m"
        {
#line 489 "disj_gen.m"
          hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__disj_gen__GoalInfo0_64, &ll_backend__disj_gen__Resume_65);
        }
#line 631 "disj_gen.m"
        if ((ll_backend__disj_gen__Resume_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 632 "disj_gen.m"
          {
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__TypeCtorInfo_204_204;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__UndoCode_97;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__RegionCleanupCode_98;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__EndLabelCode_101;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_106_106;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_108_108;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_109_109;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_110_110;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_111_111;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_123_123;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_124_124;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_126_126;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_127_127;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_128_128;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_129_129;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_130_130;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_131_131;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_132_132;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_133_133;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__RestoreHpCode_183;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__RestoreTicketCode_184;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__TraceCode_185;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__GoalCode_186;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__StoreMap_187;
#line 632 "disj_gen.m"
            MR_Word ll_backend__disj_gen__SaveCode_188;

#line 637 "disj_gen.m"
            {
#line 637 "disj_gen.m"
              ll_backend__code_info__maybe_restore_and_release_hp_4_p_0(ll_backend__disj_gen__MaybeHpSlot0_10, &ll_backend__disj_gen__RestoreHpCode_183, ll_backend__disj_gen__STATE_VARIABLE_CI_105_105, &ll_backend__disj_gen__STATE_VARIABLE_CI_106_106);
            }
#line 638 "disj_gen.m"
            {
#line 638 "disj_gen.m"
              ll_backend__code_info__maybe_reset_discard_and_release_ticket_5_p_0(ll_backend__disj_gen__MaybeTicketSlot_11, (MR_Integer) 0, &ll_backend__disj_gen__RestoreTicketCode_184, ll_backend__disj_gen__STATE_VARIABLE_CI_106_106, &ll_backend__disj_gen__STATE_VARIABLE_CI_108_108);
            }
#line 641 "disj_gen.m"
            {
#line 641 "disj_gen.m"
              ll_backend__code_info__undo_disj_hijack_4_p_0(ll_backend__disj_gen__HijackInfo_5, &ll_backend__disj_gen__UndoCode_97, ll_backend__disj_gen__STATE_VARIABLE_CI_108_108, &ll_backend__disj_gen__STATE_VARIABLE_CI_109_109);
            }
#line 643 "disj_gen.m"
            {
#line 643 "disj_gen.m"
              ll_backend__trace_gen__maybe_generate_internal_event_code_5_p_0(ll_backend__disj_gen__Goal0_42, ll_backend__disj_gen__DisjGoalInfo_6, &ll_backend__disj_gen__TraceCode_185, ll_backend__disj_gen__STATE_VARIABLE_CI_109_109, &ll_backend__disj_gen__STATE_VARIABLE_CI_110_110);
            }
#line 645 "disj_gen.m"
            {
#line 645 "disj_gen.m"
              ll_backend__code_gen__generate_goal_5_p_0(ll_backend__disj_gen__CodeModel_2, ll_backend__disj_gen__Goal0_42, &ll_backend__disj_gen__GoalCode_186, ll_backend__disj_gen__STATE_VARIABLE_CI_110_110, &ll_backend__disj_gen__STATE_VARIABLE_CI_111_111);
            }
#line 646 "disj_gen.m"
            {
#line 646 "disj_gen.m"
              hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__disj_gen__DisjGoalInfo_6, &ll_backend__disj_gen__StoreMap_187);
            }
#line 647 "disj_gen.m"
            {
#line 647 "disj_gen.m"
              ll_backend__code_info__generate_branch_end_6_p_0(ll_backend__disj_gen__StoreMap_187, ll_backend__disj_gen__MaybeEnd0_15, ll_backend__disj_gen__MaybeEnd_16, &ll_backend__disj_gen__SaveCode_188, ll_backend__disj_gen__STATE_VARIABLE_CI_111_111, ll_backend__disj_gen__STATE_VARIABLE_CI_19);
            }
#line 652 "disj_gen.m"
            if ((ll_backend__disj_gen__RegionCommitDisjCleanup_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 650 "disj_gen.m"
              {
#line 651 "disj_gen.m"
                {
#line 651 "disj_gen.m"
                  ll_backend__disj_gen__RegionCleanupCode_98 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
#line 650 "disj_gen.m"
              }
#line 652 "disj_gen.m"
            else
#line 654 "disj_gen.m"
              {
#line 654 "disj_gen.m"
                MR_Word ll_backend__disj_gen__TypeCtorInfo_203_203 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 654 "disj_gen.m"
                MR_Word ll_backend__disj_gen__CleanupCode_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__RegionCommitDisjCleanup_7, (MR_Integer) 1)));
#line 654 "disj_gen.m"
                MR_Word ll_backend__disj_gen__RegionCleanupStartCode_100;
#line 654 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_113_113;
#line 654 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_114_114;
#line 654 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_115_115;
#line 654 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_116_116;
#line 654 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_118_118;
#line 654 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_119_119;
#line 654 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_120_120;
#line 654 "disj_gen.m"
                MR_Word ll_backend__disj_gen__CleanupLabel_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__RegionCommitDisjCleanup_7, (MR_Integer) 0)));

#line 656 "disj_gen.m"
                {
#line 656 "disj_gen.m"
                  ll_backend__disj_gen__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 656 "disj_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_116_116, 0) = ((MR_Box) (ll_backend__disj_gen__EndLabel_8));
#line 656 "disj_gen.m"
                }
#line 656 "disj_gen.m"
                {
#line 656 "disj_gen.m"
                  ll_backend__disj_gen__V_115_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "disj_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_115_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 656 "disj_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_115_115, 1) = ((MR_Box) (ll_backend__disj_gen__V_116_116));
#line 656 "disj_gen.m"
                }
#line 657 "disj_gen.m"
                {
#line 657 "disj_gen.m"
                  ll_backend__disj_gen__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 657 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_114_114, 0) = ((MR_Box) (ll_backend__disj_gen__V_115_115));
#line 657 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_114_114, 1) = ((MR_Box) ((MR_String) "Skip over cleanup code at end of disjunction"));
#line 657 "disj_gen.m"
                }
#line 658 "disj_gen.m"
                {
#line 658 "disj_gen.m"
                  ll_backend__disj_gen__V_120_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 658 "disj_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_120_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 658 "disj_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_120_120, 1) = ((MR_Box) (ll_backend__disj_gen__CleanupLabel_181));
#line 658 "disj_gen.m"
                }
#line 660 "disj_gen.m"
                {
#line 660 "disj_gen.m"
                  ll_backend__disj_gen__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 660 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_119_119, 0) = ((MR_Box) (ll_backend__disj_gen__V_120_120));
#line 660 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_119_119, 1) = ((MR_Box) ((MR_String) "Cleanup at end of disjunction"));
#line 660 "disj_gen.m"
                }
#line 657 "disj_gen.m"
                {
#line 657 "disj_gen.m"
                  ll_backend__disj_gen__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "disj_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_118_118, 0) = ((MR_Box) (ll_backend__disj_gen__V_119_119));
#line 657 "disj_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 657 "disj_gen.m"
                }
#line 655 "disj_gen.m"
                {
#line 655 "disj_gen.m"
                  ll_backend__disj_gen__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 655 "disj_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_113_113, 0) = ((MR_Box) (ll_backend__disj_gen__V_114_114));
#line 655 "disj_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_113_113, 1) = ((MR_Box) (ll_backend__disj_gen__V_118_118));
#line 655 "disj_gen.m"
                }
#line 655 "disj_gen.m"
                {
#line 655 "disj_gen.m"
                  ll_backend__disj_gen__RegionCleanupStartCode_100 = mercury__cord__from_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_203_203, ll_backend__disj_gen__V_113_113);
                }
#line 661 "disj_gen.m"
                {
#line 661 "disj_gen.m"
                  ll_backend__disj_gen__RegionCleanupCode_98 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_203_203, ll_backend__disj_gen__RegionCleanupStartCode_100, ll_backend__disj_gen__CleanupCode_99);
                }
#line 654 "disj_gen.m"
              }
#line 3751 "ll_backend.disj_gen.c"
            ll_backend__disj_gen__TypeCtorInfo_204_204 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 665 "disj_gen.m"
            {
#line 665 "disj_gen.m"
              ll_backend__disj_gen__V_124_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "disj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_124_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 665 "disj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_124_124, 1) = ((MR_Box) (ll_backend__disj_gen__EndLabel_8));
#line 665 "disj_gen.m"
            }
#line 664 "disj_gen.m"
            {
#line 664 "disj_gen.m"
              ll_backend__disj_gen__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 664 "disj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_123_123, 0) = ((MR_Box) (ll_backend__disj_gen__V_124_124));
#line 664 "disj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_123_123, 1) = ((MR_Box) ((MR_String) "End of disjunction"));
#line 664 "disj_gen.m"
            }
#line 664 "disj_gen.m"
            {
#line 664 "disj_gen.m"
              ll_backend__disj_gen__EndLabelCode_101 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_204_204, ((MR_Box) (ll_backend__disj_gen__V_123_123)));
            }
#line 677 "disj_gen.m"
            {
#line 677 "disj_gen.m"
              ll_backend__disj_gen__V_133_133 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_204_204, ll_backend__disj_gen__RegionCleanupCode_98, ll_backend__disj_gen__EndLabelCode_101);
            }
#line 676 "disj_gen.m"
            {
#line 676 "disj_gen.m"
              ll_backend__disj_gen__V_132_132 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_204_204, ll_backend__disj_gen__SaveCode_188, ll_backend__disj_gen__V_133_133);
            }
#line 675 "disj_gen.m"
            {
#line 675 "disj_gen.m"
              ll_backend__disj_gen__V_131_131 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_204_204, ll_backend__disj_gen__GoalCode_186, ll_backend__disj_gen__V_132_132);
            }
#line 674 "disj_gen.m"
            {
#line 674 "disj_gen.m"
              ll_backend__disj_gen__V_130_130 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_204_204, ll_backend__disj_gen__UndoCode_97, ll_backend__disj_gen__V_131_131);
            }
#line 673 "disj_gen.m"
            {
#line 673 "disj_gen.m"
              ll_backend__disj_gen__V_129_129 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_204_204, ll_backend__disj_gen__LastRegionCode_13, ll_backend__disj_gen__V_130_130);
            }
#line 672 "disj_gen.m"
            {
#line 672 "disj_gen.m"
              ll_backend__disj_gen__V_128_128 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_204_204, ll_backend__disj_gen__RestoreTicketCode_184, ll_backend__disj_gen__V_129_129);
            }
#line 671 "disj_gen.m"
            {
#line 671 "disj_gen.m"
              ll_backend__disj_gen__V_127_127 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_204_204, ll_backend__disj_gen__RestoreHpCode_183, ll_backend__disj_gen__V_128_128);
            }
#line 670 "disj_gen.m"
            {
#line 670 "disj_gen.m"
              ll_backend__disj_gen__V_126_126 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_204_204, ll_backend__disj_gen__TraceCode_185, ll_backend__disj_gen__V_127_127);
            }
#line 669 "disj_gen.m"
            {
#line 669 "disj_gen.m"
              *ll_backend__disj_gen__Code_17 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_204_204, ll_backend__disj_gen__EntryResumePointCode_62, ll_backend__disj_gen__V_126_126);
            }
#line 632 "disj_gen.m"
          }
#line 631 "disj_gen.m"
        else
#line 491 "disj_gen.m"
          {
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__TypeCtorInfo_201_201;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__ResumeVars_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Resume_65, (MR_Integer) 0)));
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__ResumeLocs_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Resume_65, (MR_Integer) 1)));
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__RestoreHpCode_69;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__RestoreTicketCode_70;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__ThisDisjunctRegionCode_71;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__GoalInfo_72;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__Goal_73;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__SaveHpCode_74;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__MaybeHpSlot_76;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__BranchStart_79;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__NextResumePoint_82;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__ModContCode_83;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__TraceCode_84;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__GoalCodeModel_85;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__GoalCode_86;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__ResumeVarsCode_87;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__PruneTicketCode_88;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__Zombies_89;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__StoreMap_90;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__MaybeEnd1_91;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__SaveCode_92;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__BranchCode_93;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__RestCode_96;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_137_137;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_146_146;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_147_147;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_148_148;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_149_149;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_150_150;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_155_155;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_156_156;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_157_157;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_158_158;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_159_159;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_168_168;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_170_170;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_171_171;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_172_172;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_173_173;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_174_174;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_175_175;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_176_176;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_177_177;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_178_178;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_179_179;
#line 491 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_180_180;

#line 505 "disj_gen.m"
            if ((ll_backend__disj_gen__MaybeEntryResumePoint_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 506 "disj_gen.m"
              {
#line 506 "disj_gen.m"
                MR_Word ll_backend__disj_gen__TypeCtorInfo_191_191 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

#line 507 "disj_gen.m"
                {
#line 507 "disj_gen.m"
                  ll_backend__disj_gen__RestoreHpCode_69 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_191_191);
                }
#line 508 "disj_gen.m"
                {
#line 508 "disj_gen.m"
                  ll_backend__disj_gen__RestoreTicketCode_70 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_191_191);
                }
#line 509 "disj_gen.m"
                {
#line 509 "disj_gen.m"
                  ll_backend__disj_gen__ThisDisjunctRegionCode_71 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_191_191);
                }
#line 506 "disj_gen.m"
              }
#line 505 "disj_gen.m"
            else
#line 496 "disj_gen.m"
              {
#line 499 "disj_gen.m"
                {
#line 499 "disj_gen.m"
                  ll_backend__code_info__maybe_restore_hp_2_p_0(ll_backend__disj_gen__MaybeHpSlot0_10, &ll_backend__disj_gen__RestoreHpCode_69);
                }
#line 502 "disj_gen.m"
                {
#line 502 "disj_gen.m"
                  ll_backend__code_info__maybe_reset_ticket_3_p_0(ll_backend__disj_gen__MaybeTicketSlot_11, (MR_Integer) 0, &ll_backend__disj_gen__RestoreTicketCode_70);
                }
#line 504 "disj_gen.m"
                ll_backend__disj_gen__ThisDisjunctRegionCode_71 = ll_backend__disj_gen__LaterRegionCode_12;
#line 496 "disj_gen.m"
              }
#line 514 "disj_gen.m"
            {
#line 514 "disj_gen.m"
              hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__disj_gen__GoalInfo0_64, &ll_backend__disj_gen__GoalInfo_72);
            }
#line 515 "disj_gen.m"
            {
#line 515 "disj_gen.m"
              ll_backend__disj_gen__Goal_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 515 "disj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Goal_73, 0) = ((MR_Box) (ll_backend__disj_gen__GoalExpr0_63));
#line 515 "disj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Goal_73, 1) = ((MR_Box) (ll_backend__disj_gen__GoalInfo_72));
#line 515 "disj_gen.m"
            }
#line 519 "disj_gen.m"
            ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__ReclaimHeap_9 == (MR_Integer) 1);
#line 519 "disj_gen.m"
            if (ll_backend__disj_gen__succeeded)
#line 519 "disj_gen.m"
              {
#line 520 "disj_gen.m"
                {
#line 520 "disj_gen.m"
                  ll_backend__disj_gen__succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(ll_backend__disj_gen__Goal_73);
                }
#line 519 "disj_gen.m"
                if (ll_backend__disj_gen__succeeded)
#line 521 "disj_gen.m"
                  ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__MaybeHpSlot0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "disj_gen.m"
              }
#line 541 "disj_gen.m"
            if (ll_backend__disj_gen__succeeded)
#line 523 "disj_gen.m"
              {
#line 523 "disj_gen.m"
                MR_Word ll_backend__disj_gen__TypeCtorInfo_192_192;
#line 523 "disj_gen.m"
                MR_Word ll_backend__disj_gen__HpSlot_75;
#line 523 "disj_gen.m"
                MR_Word ll_backend__disj_gen__BranchSaveHpCode_77;
#line 523 "disj_gen.m"
                MR_Word ll_backend__disj_gen__BranchHpSlot_78;
#line 523 "disj_gen.m"
                MR_Word ll_backend__disj_gen__HpCodeInstrs_80;
#line 523 "disj_gen.m"
                MR_Word ll_backend__disj_gen__BranchHpCodeInstrs_81;
#line 523 "disj_gen.m"
                MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_136_136;
#line 523 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_138_138;
#line 523 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_142_142;

#line 523 "disj_gen.m"
                {
#line 523 "disj_gen.m"
                  ll_backend__code_info__save_hp_4_p_0(&ll_backend__disj_gen__SaveHpCode_74, &ll_backend__disj_gen__HpSlot_75, ll_backend__disj_gen__STATE_VARIABLE_CI_105_105, &ll_backend__disj_gen__STATE_VARIABLE_CI_136_136);
                }
#line 524 "disj_gen.m"
                {
#line 524 "disj_gen.m"
                  ll_backend__disj_gen__MaybeHpSlot_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 524 "disj_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__MaybeHpSlot_76, 0) = ((MR_Box) (ll_backend__disj_gen__HpSlot_75));
#line 524 "disj_gen.m"
                }
#line 533 "disj_gen.m"
                {
#line 533 "disj_gen.m"
                  ll_backend__code_info__save_hp_in_branch_6_p_0(&ll_backend__disj_gen__BranchSaveHpCode_77, &ll_backend__disj_gen__BranchHpSlot_78, ll_backend__disj_gen__BranchStart0_14, &ll_backend__disj_gen__BranchStart_79, ll_backend__disj_gen__STATE_VARIABLE_CI_136_136, &ll_backend__disj_gen__STATE_VARIABLE_CI_137_137);
                }
#line 4039 "ll_backend.disj_gen.c"
                ll_backend__disj_gen__TypeCtorInfo_192_192 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 535 "disj_gen.m"
                {
#line 535 "disj_gen.m"
                  ll_backend__disj_gen__HpCodeInstrs_80 = mercury__cord__list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_192_192, ll_backend__disj_gen__SaveHpCode_74);
                }
#line 536 "disj_gen.m"
                {
#line 536 "disj_gen.m"
                  ll_backend__disj_gen__BranchHpCodeInstrs_81 = mercury__cord__list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_192_192, ll_backend__disj_gen__BranchSaveHpCode_77);
                }
#line 537 "disj_gen.m"
                {
#line 537 "disj_gen.m"
                  ll_backend__disj_gen__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 537 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_138_138, 0) = ((MR_Box) (&ll_backend__disj_gen_scalar_common_4[0]));
#line 537 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_138_138, 1) = ((MR_Box) (ll_backend__disj_gen__generate_disjuncts_19_p_0_1));
#line 537 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_138_138, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 537 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_138_138, 3) = ((MR_Box) (ll_backend__disj_gen__HpCodeInstrs_80));
#line 537 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_138_138, 4) = ((MR_Box) (ll_backend__disj_gen__BranchHpCodeInstrs_81));
#line 537 "disj_gen.m"
                }
#line 537 "disj_gen.m"
                {
#line 537 "disj_gen.m"
                  mercury__require__expect_4_p_0(ll_backend__disj_gen__V_138_138, (MR_String) "ll_backend.disj_gen", (MR_String) "predicate \140ll_backend.disj_gen.generate_disjuncts\'/19", (MR_String) "cannot use same code for saving hp");
                }
#line 539 "disj_gen.m"
                {
#line 539 "disj_gen.m"
                  ll_backend__disj_gen__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 539 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_142_142, 0) = ((MR_Box) (&ll_backend__disj_gen_scalar_common_4[1]));
#line 539 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_142_142, 1) = ((MR_Box) (ll_backend__disj_gen__generate_disjuncts_19_p_0_2));
#line 539 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_142_142, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 539 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_142_142, 3) = ((MR_Box) (ll_backend__disj_gen__HpSlot_75));
#line 539 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_142_142, 4) = ((MR_Box) (ll_backend__disj_gen__BranchHpSlot_78));
#line 539 "disj_gen.m"
                }
#line 539 "disj_gen.m"
                {
#line 539 "disj_gen.m"
                  mercury__require__expect_4_p_0(ll_backend__disj_gen__V_142_142, (MR_String) "ll_backend.disj_gen", (MR_String) "predicate \140ll_backend.disj_gen.generate_disjuncts\'/19", (MR_String) "cannot allocate same slot for saved hp");
                }
#line 523 "disj_gen.m"
              }
#line 541 "disj_gen.m"
            else
#line 542 "disj_gen.m"
              {
#line 542 "disj_gen.m"
                {
#line 542 "disj_gen.m"
                  ll_backend__disj_gen__SaveHpCode_74 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
#line 543 "disj_gen.m"
                ll_backend__disj_gen__MaybeHpSlot_76 = ll_backend__disj_gen__MaybeHpSlot0_10;
#line 544 "disj_gen.m"
                ll_backend__disj_gen__BranchStart_79 = ll_backend__disj_gen__BranchStart0_14;
#line 544 "disj_gen.m"
                ll_backend__disj_gen__STATE_VARIABLE_CI_137_137 = ll_backend__disj_gen__STATE_VARIABLE_CI_105_105;
#line 542 "disj_gen.m"
              }
#line 547 "disj_gen.m"
            {
#line 547 "disj_gen.m"
              ll_backend__disj_gen__V_146_146 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__disj_gen__ResumeVars_66);
            }
#line 547 "disj_gen.m"
            {
#line 547 "disj_gen.m"
              ll_backend__code_info__make_resume_point_6_p_0(ll_backend__disj_gen__V_146_146, ll_backend__disj_gen__ResumeLocs_67, ll_backend__disj_gen__FullResumeMap_3, &ll_backend__disj_gen__NextResumePoint_82, ll_backend__disj_gen__STATE_VARIABLE_CI_137_137, &ll_backend__disj_gen__STATE_VARIABLE_CI_147_147);
            }
#line 549 "disj_gen.m"
            {
#line 549 "disj_gen.m"
              ll_backend__code_info__effect_resume_point_5_p_0(ll_backend__disj_gen__NextResumePoint_82, ll_backend__disj_gen__CodeModel_2, &ll_backend__disj_gen__ModContCode_83, ll_backend__disj_gen__STATE_VARIABLE_CI_147_147, &ll_backend__disj_gen__STATE_VARIABLE_CI_148_148);
            }
#line 551 "disj_gen.m"
            {
#line 551 "disj_gen.m"
              ll_backend__trace_gen__maybe_generate_internal_event_code_5_p_0(ll_backend__disj_gen__Goal_73, ll_backend__disj_gen__DisjGoalInfo_6, &ll_backend__disj_gen__TraceCode_84, ll_backend__disj_gen__STATE_VARIABLE_CI_148_148, &ll_backend__disj_gen__STATE_VARIABLE_CI_149_149);
            }
#line 552 "disj_gen.m"
            {
#line 552 "disj_gen.m"
              ll_backend__disj_gen__GoalCodeModel_85 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__disj_gen__GoalInfo_72);
            }
#line 553 "disj_gen.m"
            {
#line 553 "disj_gen.m"
              ll_backend__code_gen__generate_goal_5_p_0(ll_backend__disj_gen__GoalCodeModel_85, ll_backend__disj_gen__Goal_73, &ll_backend__disj_gen__GoalCode_86, ll_backend__disj_gen__STATE_VARIABLE_CI_149_149, &ll_backend__disj_gen__STATE_VARIABLE_CI_150_150);
            }
#line 566 "disj_gen.m"
            if ((ll_backend__disj_gen__CodeModel_2 == (MR_Integer) 2))
#line 556 "disj_gen.m"
              {
#line 560 "disj_gen.m"
                {
#line 560 "disj_gen.m"
                  ll_backend__code_info__flush_resume_vars_to_stack_3_p_0(&ll_backend__disj_gen__ResumeVarsCode_87, ll_backend__disj_gen__STATE_VARIABLE_CI_150_150, &ll_backend__disj_gen__STATE_VARIABLE_CI_155_155);
                }
#line 565 "disj_gen.m"
                {
#line 565 "disj_gen.m"
                  ll_backend__disj_gen__PruneTicketCode_88 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
#line 556 "disj_gen.m"
              }
#line 566 "disj_gen.m"
            else
#line 569 "disj_gen.m"
              {
#line 569 "disj_gen.m"
                MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_151_151;
#line 569 "disj_gen.m"
                MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_153_153;

#line 571 "disj_gen.m"
                {
#line 571 "disj_gen.m"
                  ll_backend__disj_gen__ResumeVarsCode_87 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
#line 573 "disj_gen.m"
                {
#line 573 "disj_gen.m"
                  ll_backend__code_info__maybe_release_hp_3_p_0(ll_backend__disj_gen__MaybeHpSlot_76, ll_backend__disj_gen__STATE_VARIABLE_CI_150_150, &ll_backend__disj_gen__STATE_VARIABLE_CI_151_151);
                }
#line 575 "disj_gen.m"
                {
#line 575 "disj_gen.m"
                  ll_backend__code_info__maybe_reset_prune_and_release_ticket_5_p_0(ll_backend__disj_gen__MaybeTicketSlot_11, (MR_Integer) 1, &ll_backend__disj_gen__PruneTicketCode_88, ll_backend__disj_gen__STATE_VARIABLE_CI_151_151, &ll_backend__disj_gen__STATE_VARIABLE_CI_153_153);
                }
#line 578 "disj_gen.m"
                {
#line 578 "disj_gen.m"
                  ll_backend__code_info__reset_resume_known_3_p_0(ll_backend__disj_gen__BranchStart_79, ll_backend__disj_gen__STATE_VARIABLE_CI_153_153, &ll_backend__disj_gen__STATE_VARIABLE_CI_155_155);
                }
#line 569 "disj_gen.m"
              }
#line 585 "disj_gen.m"
            {
#line 585 "disj_gen.m"
              ll_backend__code_info__pop_resume_point_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_155_155, &ll_backend__disj_gen__STATE_VARIABLE_CI_156_156);
            }
#line 586 "disj_gen.m"
            {
#line 586 "disj_gen.m"
              ll_backend__code_info__pickup_zombies_3_p_0(&ll_backend__disj_gen__Zombies_89, ll_backend__disj_gen__STATE_VARIABLE_CI_156_156, &ll_backend__disj_gen__STATE_VARIABLE_CI_157_157);
            }
#line 587 "disj_gen.m"
            {
#line 587 "disj_gen.m"
              ll_backend__code_info__make_vars_forward_dead_3_p_0(ll_backend__disj_gen__Zombies_89, ll_backend__disj_gen__STATE_VARIABLE_CI_157_157, &ll_backend__disj_gen__STATE_VARIABLE_CI_158_158);
            }
#line 592 "disj_gen.m"
            {
#line 592 "disj_gen.m"
              hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__disj_gen__DisjGoalInfo_6, &ll_backend__disj_gen__StoreMap_90);
            }
#line 593 "disj_gen.m"
            {
#line 593 "disj_gen.m"
              ll_backend__code_info__generate_branch_end_6_p_0(ll_backend__disj_gen__StoreMap_90, ll_backend__disj_gen__MaybeEnd0_15, &ll_backend__disj_gen__MaybeEnd1_91, &ll_backend__disj_gen__SaveCode_92, ll_backend__disj_gen__STATE_VARIABLE_CI_158_158, &ll_backend__disj_gen__STATE_VARIABLE_CI_159_159);
            }
#line 601 "disj_gen.m"
            if ((ll_backend__disj_gen__RegionCommitDisjCleanup_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 596 "disj_gen.m"
              {
#line 596 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_164_164;
#line 596 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_165_165;
#line 596 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_166_166;

#line 598 "disj_gen.m"
                {
#line 598 "disj_gen.m"
                  ll_backend__disj_gen__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 598 "disj_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_166_166, 0) = ((MR_Box) (ll_backend__disj_gen__EndLabel_8));
#line 598 "disj_gen.m"
                }
#line 598 "disj_gen.m"
                {
#line 598 "disj_gen.m"
                  ll_backend__disj_gen__V_165_165 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 598 "disj_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_165_165, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 598 "disj_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_165_165, 1) = ((MR_Box) (ll_backend__disj_gen__V_166_166));
#line 598 "disj_gen.m"
                }
#line 597 "disj_gen.m"
                {
#line 597 "disj_gen.m"
                  ll_backend__disj_gen__V_164_164 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 597 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_164_164, 0) = ((MR_Box) (ll_backend__disj_gen__V_165_165));
#line 597 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_164_164, 1) = ((MR_Box) ((MR_String) "skip to end of disjunction"));
#line 597 "disj_gen.m"
                }
#line 597 "disj_gen.m"
                {
#line 597 "disj_gen.m"
                  ll_backend__disj_gen__BranchCode_93 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__disj_gen__V_164_164)));
                }
#line 596 "disj_gen.m"
              }
#line 601 "disj_gen.m"
            else
#line 603 "disj_gen.m"
              {
#line 603 "disj_gen.m"
                MR_Word ll_backend__disj_gen__CleanupLabel_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__RegionCommitDisjCleanup_7, (MR_Integer) 0)));
#line 603 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_160_160;
#line 603 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_161_161;
#line 603 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_162_162;
#line 602 "disj_gen.m"
                MR_Word ll_backend__disj_gen___CleanupCode_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__RegionCommitDisjCleanup_7, (MR_Integer) 1)));

#line 605 "disj_gen.m"
                {
#line 605 "disj_gen.m"
                  ll_backend__disj_gen__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 605 "disj_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_162_162, 0) = ((MR_Box) (ll_backend__disj_gen__CleanupLabel_94));
#line 605 "disj_gen.m"
                }
#line 605 "disj_gen.m"
                {
#line 605 "disj_gen.m"
                  ll_backend__disj_gen__V_161_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "disj_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_161_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 605 "disj_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_161_161, 1) = ((MR_Box) (ll_backend__disj_gen__V_162_162));
#line 605 "disj_gen.m"
                }
#line 604 "disj_gen.m"
                {
#line 604 "disj_gen.m"
                  ll_backend__disj_gen__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 604 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_160_160, 0) = ((MR_Box) (ll_backend__disj_gen__V_161_161));
#line 604 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_160_160, 1) = ((MR_Box) ((MR_String) "skip to end of disjunction after nonlast region disjunct"));
#line 604 "disj_gen.m"
                }
#line 604 "disj_gen.m"
                {
#line 604 "disj_gen.m"
                  ll_backend__disj_gen__BranchCode_93 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__disj_gen__V_160_160)));
                }
#line 603 "disj_gen.m"
              }
#line 610 "disj_gen.m"
            {
#line 610 "disj_gen.m"
              ll_backend__disj_gen__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 610 "disj_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_168_168, 0) = ((MR_Box) (ll_backend__disj_gen__NextResumePoint_82));
#line 610 "disj_gen.m"
            }
#line 610 "disj_gen.m"
            {
#line 610 "disj_gen.m"
              ll_backend__disj_gen__generate_disjuncts_19_p_0(ll_backend__disj_gen__Goals_43, ll_backend__disj_gen__CodeModel_2, ll_backend__disj_gen__FullResumeMap_3, ll_backend__disj_gen__V_168_168, ll_backend__disj_gen__HijackInfo_5, ll_backend__disj_gen__DisjGoalInfo_6, ll_backend__disj_gen__RegionCommitDisjCleanup_7, ll_backend__disj_gen__EndLabel_8, ll_backend__disj_gen__ReclaimHeap_9, ll_backend__disj_gen__MaybeHpSlot_76, ll_backend__disj_gen__MaybeTicketSlot_11, ll_backend__disj_gen__LaterRegionCode_12, ll_backend__disj_gen__LastRegionCode_13, ll_backend__disj_gen__BranchStart_79, ll_backend__disj_gen__MaybeEnd1_91, ll_backend__disj_gen__MaybeEnd_16, &ll_backend__disj_gen__RestCode_96, ll_backend__disj_gen__STATE_VARIABLE_CI_159_159, ll_backend__disj_gen__STATE_VARIABLE_CI_19);
            }
#line 4323 "ll_backend.disj_gen.c"
            ll_backend__disj_gen__TypeCtorInfo_201_201 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 628 "disj_gen.m"
            {
#line 628 "disj_gen.m"
              ll_backend__disj_gen__V_180_180 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_201_201, ll_backend__disj_gen__BranchCode_93, ll_backend__disj_gen__RestCode_96);
            }
#line 627 "disj_gen.m"
            {
#line 627 "disj_gen.m"
              ll_backend__disj_gen__V_179_179 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_201_201, ll_backend__disj_gen__SaveCode_92, ll_backend__disj_gen__V_180_180);
            }
#line 626 "disj_gen.m"
            {
#line 626 "disj_gen.m"
              ll_backend__disj_gen__V_178_178 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_201_201, ll_backend__disj_gen__PruneTicketCode_88, ll_backend__disj_gen__V_179_179);
            }
#line 625 "disj_gen.m"
            {
#line 625 "disj_gen.m"
              ll_backend__disj_gen__V_177_177 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_201_201, ll_backend__disj_gen__ResumeVarsCode_87, ll_backend__disj_gen__V_178_178);
            }
#line 624 "disj_gen.m"
            {
#line 624 "disj_gen.m"
              ll_backend__disj_gen__V_176_176 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_201_201, ll_backend__disj_gen__GoalCode_86, ll_backend__disj_gen__V_177_177);
            }
#line 623 "disj_gen.m"
            {
#line 623 "disj_gen.m"
              ll_backend__disj_gen__V_175_175 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_201_201, ll_backend__disj_gen__TraceCode_84, ll_backend__disj_gen__V_176_176);
            }
#line 622 "disj_gen.m"
            {
#line 622 "disj_gen.m"
              ll_backend__disj_gen__V_174_174 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_201_201, ll_backend__disj_gen__ModContCode_83, ll_backend__disj_gen__V_175_175);
            }
#line 621 "disj_gen.m"
            {
#line 621 "disj_gen.m"
              ll_backend__disj_gen__V_173_173 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_201_201, ll_backend__disj_gen__ThisDisjunctRegionCode_71, ll_backend__disj_gen__V_174_174);
            }
#line 620 "disj_gen.m"
            {
#line 620 "disj_gen.m"
              ll_backend__disj_gen__V_172_172 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_201_201, ll_backend__disj_gen__SaveHpCode_74, ll_backend__disj_gen__V_173_173);
            }
#line 619 "disj_gen.m"
            {
#line 619 "disj_gen.m"
              ll_backend__disj_gen__V_171_171 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_201_201, ll_backend__disj_gen__RestoreTicketCode_70, ll_backend__disj_gen__V_172_172);
            }
#line 618 "disj_gen.m"
            {
#line 618 "disj_gen.m"
              ll_backend__disj_gen__V_170_170 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_201_201, ll_backend__disj_gen__RestoreHpCode_69, ll_backend__disj_gen__V_171_171);
            }
#line 617 "disj_gen.m"
            {
#line 617 "disj_gen.m"
              *ll_backend__disj_gen__Code_17 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_201_201, ll_backend__disj_gen__EntryResumePointCode_62, ll_backend__disj_gen__V_170_170);
            }
#line 491 "disj_gen.m"
          }
#line 474 "disj_gen.m"
      }
#line 468 "disj_gen.m"
  }
#line 461 "disj_gen.m"
}

#line 343 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__generate_real_disj_9_p_0(
#line 343 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddTrailOps_10,
#line 343 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddRegionOps_11,
#line 343 "disj_gen.m"
  MR_Word ll_backend__disj_gen__CodeModel_12,
#line 343 "disj_gen.m"
  MR_Word ll_backend__disj_gen__ResumeVars_13,
#line 343 "disj_gen.m"
  MR_Word ll_backend__disj_gen__Goals_14,
#line 343 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjGoalInfo_15,
#line 343 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__Code_16,
#line 343 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_46,
#line 343 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_47)
#line 343 "disj_gen.m"
{
#line 348 "disj_gen.m"
  {
#line 348 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__TypeCtorInfo_71_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__TypeCtorInfo_74_74;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__ResumeMap_18;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__FlushCode_19;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__Globals_20;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__SaveTicketCode_21;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeTicketSlot_22;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__ReclaimHeap_23;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__SaveHpCode_24;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeHpSlot_25;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__BeforeEnterRegionCode_26;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__LaterRegionCode_27;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__LastRegionCode_28;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__RegionStackVarsToRelease_29;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__RegionCommitDisjCleanup_30;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__HijackInfo_39;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__PrepareHijackCode_40;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__EndLabel_41;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__BranchStart_42;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeEnd_43;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__GoalsCode_44;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__StoreMap_45;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_48_48;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_49_49;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_50_50;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_57_57;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_58_58;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_59_59;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_62_62;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_63_63;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_65_65;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_67_67;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_68_68;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_69_69;
#line 348 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_70_70;

#line 352 "disj_gen.m"
    {
#line 352 "disj_gen.m"
      ll_backend__disj_gen__V_48_48 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_71_71, ll_backend__disj_gen__ResumeVars_13);
    }
#line 352 "disj_gen.m"
    {
#line 352 "disj_gen.m"
      ll_backend__code_info__produce_vars_5_p_0(ll_backend__disj_gen__V_48_48, &ll_backend__disj_gen__ResumeMap_18, &ll_backend__disj_gen__FlushCode_19, ll_backend__disj_gen__STATE_VARIABLE_CI_0_46, &ll_backend__disj_gen__STATE_VARIABLE_CI_49_49);
    }
#line 360 "disj_gen.m"
    {
#line 360 "disj_gen.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_49_49, &ll_backend__disj_gen__Globals_20);
    }
#line 361 "disj_gen.m"
    {
#line 361 "disj_gen.m"
      ll_backend__code_info__maybe_save_ticket_5_p_0(ll_backend__disj_gen__AddTrailOps_10, &ll_backend__disj_gen__SaveTicketCode_21, &ll_backend__disj_gen__MaybeTicketSlot_22, ll_backend__disj_gen__STATE_VARIABLE_CI_49_49, &ll_backend__disj_gen__STATE_VARIABLE_CI_50_50);
    }
#line 382 "disj_gen.m"
    if ((ll_backend__disj_gen__CodeModel_12 == (MR_Integer) 2))
#line 366 "disj_gen.m"
      {
#line 366 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_56_56;

#line 371 "disj_gen.m"
        {
#line 371 "disj_gen.m"
          libs__globals__lookup_bool_option_3_p_0(ll_backend__disj_gen__Globals_20, (MR_Integer) 306, &ll_backend__disj_gen__ReclaimHeap_23);
        }
#line 373 "disj_gen.m"
        {
#line 373 "disj_gen.m"
          ll_backend__code_info__maybe_save_hp_5_p_0(ll_backend__disj_gen__ReclaimHeap_23, &ll_backend__disj_gen__SaveHpCode_24, &ll_backend__disj_gen__MaybeHpSlot_25, ll_backend__disj_gen__STATE_VARIABLE_CI_50_50, &ll_backend__disj_gen__STATE_VARIABLE_CI_56_56);
        }
#line 375 "disj_gen.m"
        {
#line 375 "disj_gen.m"
          ll_backend__disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_7_p_0(ll_backend__disj_gen__AddRegionOps_11, &ll_backend__disj_gen__BeforeEnterRegionCode_26, &ll_backend__disj_gen__LaterRegionCode_27, &ll_backend__disj_gen__LastRegionCode_28, ll_backend__disj_gen__STATE_VARIABLE_CI_56_56, &ll_backend__disj_gen__STATE_VARIABLE_CI_57_57);
        }
#line 380 "disj_gen.m"
        ll_backend__disj_gen__RegionStackVarsToRelease_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 381 "disj_gen.m"
        ll_backend__disj_gen__RegionCommitDisjCleanup_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 366 "disj_gen.m"
      }
#line 382 "disj_gen.m"
    else
#line 385 "disj_gen.m"
      {
#line 385 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeCtorInfo_72_72;
#line 385 "disj_gen.m"
        MR_Word ll_backend__disj_gen__MaybeRbmmInfo_31;

#line 391 "disj_gen.m"
        {
#line 391 "disj_gen.m"
          libs__globals__lookup_bool_option_3_p_0(ll_backend__disj_gen__Globals_20, (MR_Integer) 305, &ll_backend__disj_gen__ReclaimHeap_23);
        }
#line 4554 "ll_backend.disj_gen.c"
        ll_backend__disj_gen__TypeCtorInfo_72_72 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 393 "disj_gen.m"
        {
#line 393 "disj_gen.m"
          ll_backend__disj_gen__SaveHpCode_24 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_72_72);
        }
#line 394 "disj_gen.m"
        ll_backend__disj_gen__MaybeHpSlot_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 396 "disj_gen.m"
        {
#line 396 "disj_gen.m"
          ll_backend__disj_gen__MaybeRbmmInfo_31 = hlds__hlds_goal__goal_info_get_maybe_rbmm_1_f_0(ll_backend__disj_gen__DisjGoalInfo_15);
        }
#line 404 "disj_gen.m"
        if ((ll_backend__disj_gen__MaybeRbmmInfo_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 398 "disj_gen.m"
          {
#line 399 "disj_gen.m"
            {
#line 399 "disj_gen.m"
              ll_backend__disj_gen__BeforeEnterRegionCode_26 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_72_72);
            }
#line 400 "disj_gen.m"
            {
#line 400 "disj_gen.m"
              ll_backend__disj_gen__LaterRegionCode_27 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_72_72);
            }
#line 401 "disj_gen.m"
            {
#line 401 "disj_gen.m"
              ll_backend__disj_gen__LastRegionCode_28 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_72_72);
            }
#line 402 "disj_gen.m"
            ll_backend__disj_gen__RegionStackVarsToRelease_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 403 "disj_gen.m"
            ll_backend__disj_gen__RegionCommitDisjCleanup_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 403 "disj_gen.m"
            ll_backend__disj_gen__STATE_VARIABLE_CI_57_57 = ll_backend__disj_gen__STATE_VARIABLE_CI_50_50;
#line 398 "disj_gen.m"
          }
#line 404 "disj_gen.m"
        else
#line 405 "disj_gen.m"
          {
#line 405 "disj_gen.m"
            MR_Word ll_backend__disj_gen__RbmmInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__MaybeRbmmInfo_31, (MR_Integer) 0)));
#line 405 "disj_gen.m"
            MR_Word ll_backend__disj_gen__DisjCreatedRegionVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__RbmmInfo_32, (MR_Integer) 0)));
#line 405 "disj_gen.m"
            MR_Word ll_backend__disj_gen__DisjRemovedRegionVars_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__RbmmInfo_32, (MR_Integer) 1)));
#line 405 "disj_gen.m"
            MR_Word ll_backend__disj_gen__DisjAllocRegionVars_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__RbmmInfo_32, (MR_Integer) 3)));
#line 406 "disj_gen.m"
            MR_Word ll_backend__disj_gen___DisjCarriedRegionVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__RbmmInfo_32, (MR_Integer) 2)));
#line 406 "disj_gen.m"
            MR_Word ll_backend__disj_gen___DisjUsedRegionVars_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__RbmmInfo_32, (MR_Integer) 4)));
#line 410 "disj_gen.m"
            MR_Word ll_backend__disj_gen__TypeInfo_73_73 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[1];

#line 410 "disj_gen.m"
            {
#line 410 "disj_gen.m"
              ll_backend__disj_gen__succeeded = mercury__set__empty_1_p_0(ll_backend__disj_gen__TypeInfo_73_73, ll_backend__disj_gen__DisjCreatedRegionVars_33);
            }
#line 410 "disj_gen.m"
            if (ll_backend__disj_gen__succeeded)
#line 410 "disj_gen.m"
              {
#line 411 "disj_gen.m"
                {
#line 411 "disj_gen.m"
                  ll_backend__disj_gen__succeeded = mercury__set__empty_1_p_0(ll_backend__disj_gen__TypeInfo_73_73, ll_backend__disj_gen__DisjRemovedRegionVars_34);
                }
#line 410 "disj_gen.m"
                if (ll_backend__disj_gen__succeeded)
#line 412 "disj_gen.m"
                  {
#line 412 "disj_gen.m"
                    ll_backend__disj_gen__succeeded = mercury__set__empty_1_p_0(ll_backend__disj_gen__TypeInfo_73_73, ll_backend__disj_gen__DisjAllocRegionVars_36);
                  }
#line 410 "disj_gen.m"
              }
#line 419 "disj_gen.m"
            if (ll_backend__disj_gen__succeeded)
#line 414 "disj_gen.m"
              {
#line 414 "disj_gen.m"
                {
#line 414 "disj_gen.m"
                  ll_backend__disj_gen__BeforeEnterRegionCode_26 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_72_72);
                }
#line 415 "disj_gen.m"
                {
#line 415 "disj_gen.m"
                  ll_backend__disj_gen__LaterRegionCode_27 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_72_72);
                }
#line 416 "disj_gen.m"
                {
#line 416 "disj_gen.m"
                  ll_backend__disj_gen__LastRegionCode_28 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_72_72);
                }
#line 417 "disj_gen.m"
                ll_backend__disj_gen__RegionStackVarsToRelease_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 418 "disj_gen.m"
                ll_backend__disj_gen__RegionCommitDisjCleanup_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 418 "disj_gen.m"
                ll_backend__disj_gen__STATE_VARIABLE_CI_57_57 = ll_backend__disj_gen__STATE_VARIABLE_CI_50_50;
#line 414 "disj_gen.m"
              }
#line 419 "disj_gen.m"
            else
#line 426 "disj_gen.m"
              {
#line 426 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_52_52;
#line 426 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_53_53;

#line 422 "disj_gen.m"
                {
#line 422 "disj_gen.m"
                  ll_backend__disj_gen__V_52_52 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__disj_gen__TypeCtorInfo_71_71, ll_backend__disj_gen__DisjRemovedRegionVars_34);
                }
#line 422 "disj_gen.m"
                {
#line 422 "disj_gen.m"
                  ll_backend__disj_gen__V_53_53 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__disj_gen__TypeCtorInfo_71_71, ll_backend__disj_gen__DisjAllocRegionVars_36);
                }
#line 422 "disj_gen.m"
                {
#line 422 "disj_gen.m"
                  ll_backend__disj_gen__maybe_create_disj_region_frame_semi_10_p_0(ll_backend__disj_gen__AddRegionOps_11, ll_backend__disj_gen__V_52_52, ll_backend__disj_gen__V_53_53, &ll_backend__disj_gen__BeforeEnterRegionCode_26, &ll_backend__disj_gen__LaterRegionCode_27, &ll_backend__disj_gen__LastRegionCode_28, &ll_backend__disj_gen__RegionStackVarsToRelease_29, &ll_backend__disj_gen__RegionCommitDisjCleanup_30, ll_backend__disj_gen__STATE_VARIABLE_CI_50_50, &ll_backend__disj_gen__STATE_VARIABLE_CI_57_57);
                }
#line 426 "disj_gen.m"
              }
#line 405 "disj_gen.m"
          }
#line 385 "disj_gen.m"
      }
#line 434 "disj_gen.m"
    {
#line 434 "disj_gen.m"
      ll_backend__code_info__prepare_for_disj_hijack_5_p_0(ll_backend__disj_gen__CodeModel_12, &ll_backend__disj_gen__HijackInfo_39, &ll_backend__disj_gen__PrepareHijackCode_40, ll_backend__disj_gen__STATE_VARIABLE_CI_57_57, &ll_backend__disj_gen__STATE_VARIABLE_CI_58_58);
    }
#line 436 "disj_gen.m"
    {
#line 436 "disj_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__disj_gen__EndLabel_41, ll_backend__disj_gen__STATE_VARIABLE_CI_58_58, &ll_backend__disj_gen__STATE_VARIABLE_CI_59_59);
    }
#line 438 "disj_gen.m"
    {
#line 438 "disj_gen.m"
      ll_backend__code_info__remember_position_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_59_59, &ll_backend__disj_gen__BranchStart_42);
    }
#line 439 "disj_gen.m"
    {
#line 439 "disj_gen.m"
      ll_backend__disj_gen__generate_disjuncts_19_p_0(ll_backend__disj_gen__Goals_14, ll_backend__disj_gen__CodeModel_12, ll_backend__disj_gen__ResumeMap_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__disj_gen__HijackInfo_39, ll_backend__disj_gen__DisjGoalInfo_15, ll_backend__disj_gen__RegionCommitDisjCleanup_30, ll_backend__disj_gen__EndLabel_41, ll_backend__disj_gen__ReclaimHeap_23, ll_backend__disj_gen__MaybeHpSlot_25, ll_backend__disj_gen__MaybeTicketSlot_22, ll_backend__disj_gen__LaterRegionCode_27, ll_backend__disj_gen__LastRegionCode_28, ll_backend__disj_gen__BranchStart_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__disj_gen__MaybeEnd_43, &ll_backend__disj_gen__GoalsCode_44, ll_backend__disj_gen__STATE_VARIABLE_CI_59_59, &ll_backend__disj_gen__STATE_VARIABLE_CI_62_62);
    }
#line 444 "disj_gen.m"
    {
#line 444 "disj_gen.m"
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__disj_gen__DisjGoalInfo_15, &ll_backend__disj_gen__StoreMap_45);
    }
#line 445 "disj_gen.m"
    {
#line 445 "disj_gen.m"
      ll_backend__code_info__after_all_branches_4_p_0(ll_backend__disj_gen__StoreMap_45, ll_backend__disj_gen__MaybeEnd_43, ll_backend__disj_gen__STATE_VARIABLE_CI_62_62, &ll_backend__disj_gen__STATE_VARIABLE_CI_63_63);
    }
#line 446 "disj_gen.m"
    {
#line 446 "disj_gen.m"
      ll_backend__code_info__release_several_temp_slots_4_p_0(ll_backend__disj_gen__RegionStackVarsToRelease_29, (MR_Integer) 1, ll_backend__disj_gen__STATE_VARIABLE_CI_63_63, &ll_backend__disj_gen__STATE_VARIABLE_CI_65_65);
    }
#line 451 "disj_gen.m"
    if ((ll_backend__disj_gen__CodeModel_12 == (MR_Integer) 0))
#line 452 "disj_gen.m"
      *ll_backend__disj_gen__STATE_VARIABLE_CI_47 = ll_backend__disj_gen__STATE_VARIABLE_CI_65_65;
#line 451 "disj_gen.m"
    else
#line 451 "disj_gen.m"
      if ((ll_backend__disj_gen__CodeModel_12 == (MR_Integer) 2))
#line 450 "disj_gen.m"
        {
#line 450 "disj_gen.m"
          ll_backend__code_info__set_resume_point_to_unknown_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_65_65, ll_backend__disj_gen__STATE_VARIABLE_CI_47);
        }
#line 451 "disj_gen.m"
      else
#line 453 "disj_gen.m"
        *ll_backend__disj_gen__STATE_VARIABLE_CI_47 = ll_backend__disj_gen__STATE_VARIABLE_CI_65_65;
#line 4746 "ll_backend.disj_gen.c"
    ll_backend__disj_gen__TypeCtorInfo_74_74 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 459 "disj_gen.m"
    {
#line 459 "disj_gen.m"
      ll_backend__disj_gen__V_70_70 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_74_74, ll_backend__disj_gen__PrepareHijackCode_40, ll_backend__disj_gen__GoalsCode_44);
    }
#line 458 "disj_gen.m"
    {
#line 458 "disj_gen.m"
      ll_backend__disj_gen__V_69_69 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_74_74, ll_backend__disj_gen__BeforeEnterRegionCode_26, ll_backend__disj_gen__V_70_70);
    }
#line 458 "disj_gen.m"
    {
#line 458 "disj_gen.m"
      ll_backend__disj_gen__V_68_68 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_74_74, ll_backend__disj_gen__SaveHpCode_24, ll_backend__disj_gen__V_69_69);
    }
#line 458 "disj_gen.m"
    {
#line 458 "disj_gen.m"
      ll_backend__disj_gen__V_67_67 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_74_74, ll_backend__disj_gen__SaveTicketCode_21, ll_backend__disj_gen__V_68_68);
    }
#line 458 "disj_gen.m"
    {
#line 458 "disj_gen.m"
      *ll_backend__disj_gen__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_74_74, ll_backend__disj_gen__FlushCode_19, ll_backend__disj_gen__V_67_67);
    }
#line 348 "disj_gen.m"
  }
#line 343 "disj_gen.m"
}

#line 198 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__generate_lookup_disj_5_p_0(
#line 198 "disj_gen.m"
  MR_Word ll_backend__disj_gen__ResumeVars_6,
#line 198 "disj_gen.m"
  MR_Word ll_backend__disj_gen__LookupDisjInfo_7,
#line 198 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__Code_8,
#line 198 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_58,
#line 198 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_59)
#line 198 "disj_gen.m"
{
#line 201 "disj_gen.m"
  {
#line 201 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__TypeCtorInfo_193_193;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__OutVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_7, (MR_Integer) 0)));
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__StoreMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_7, (MR_Integer) 1)));
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeEnd0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_7, (MR_Integer) 2)));
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__Liveness_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_7, (MR_Integer) 3)));
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__CurSlot_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_7, (MR_Integer) 4)));
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__ResumeMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_7, (MR_Integer) 5)));
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__FlushCode_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_7, (MR_Integer) 6)));
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__SaveTicketCode_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_7, (MR_Integer) 7)));
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeTicketSlot_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_7, (MR_Integer) 8)));
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__SaveHpCode_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_7, (MR_Integer) 9)));
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeHpSlot_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_7, (MR_Integer) 10)));
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__HijackInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_7, (MR_Integer) 11)));
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__PrepareHijackCode_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_7, (MR_Integer) 12)));
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__Solns_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_7, (MR_Integer) 13)));
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__LLDSTypes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_7, (MR_Integer) 14)));
#line 201 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__NumSolns_25;
#line 201 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__NumOutVars_26;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__SolnVectorAddr_27;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__SolnVectorAddrRval_28;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__EndLabel_29;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__BaseReg_30;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__BaseRegInitCode_31;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__SaveSlotCode_32;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__DisjEntry_33;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__ResumePoint_34;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__UpdateRedoipCode_35;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__FirstFlushResumeVarsCode_36;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__FirstZombies_37;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeEnd1_38;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__FirstBranchEndCode_39;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__GotoEndCode_40;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__ResumePointCode_41;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__RestoreTicketCode_42;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__RestoreHpCode_43;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__LaterBaseReg_44;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__UndoLabel_45;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__AfterUndoLabel_46;
#line 201 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__MaxSlot_47;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__TestMoreSolnsCode_48;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__UndoHijackCode_49;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__AfterUndoLabelCode_50;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__LaterFlushResumeVarsCode_52;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__LaterZombies_53;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeEnd_54;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__LaterBranchEndCode_55;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__EndLabelCode_56;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__Comment_57;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_60_60;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_61_61;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_63_63;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_65_65;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_66_66;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_67_67;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_68_68;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_69_69;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_70_70;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_76_76;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_77_77;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_78_78;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_79_79;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_81_81;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_83_83;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_85_85;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_87_87;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_88_88;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_89_89;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_90_90;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_91_91;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_92_92;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_93_93;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_94_94;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_95_95;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_96_96;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_98_98;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_99_99;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_102_102;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_103_103;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_104_104;
#line 201 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__V_105_105;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_107_107;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_108_108;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_109_109;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_110_110;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_112_112;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_113_113;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_114_114;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_115_115;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_117_117;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_118_118;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_119_119;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_120_120;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_122_122;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_123_123;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_124_124;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_125_125;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_131_131;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_132_132;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_133_133;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_134_134;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_136_136;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_137_137;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_138_138;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_141_141;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_142_142;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_143_143;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_144_144;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_146_146;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_147_147;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_148_148;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_149_149;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_150_150;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_157_157;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_159_159;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_160_160;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_161_161;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_162_162;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_163_163;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_164_164;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_166_166;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_167_167;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_173_173;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_174_174;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_175_175;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_176_176;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_177_177;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_178_178;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_179_179;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_180_180;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_181_181;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_182_182;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_183_183;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_184_184;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_185_185;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_186_186;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_187_187;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_188_188;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_189_189;
#line 201 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_190_190;
#line 294 "disj_gen.m"
    MR_Word ll_backend__disj_gen___LaterUpdateRedoipCode_51;

#line 207 "disj_gen.m"
    {
#line 207 "disj_gen.m"
      mercury__list__length_2_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[0], ll_backend__disj_gen__Solns_23, &ll_backend__disj_gen__NumSolns_25);
    }
#line 208 "disj_gen.m"
    {
#line 208 "disj_gen.m"
      mercury__list__length_2_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[1], ll_backend__disj_gen__OutVars_10, &ll_backend__disj_gen__NumOutVars_26);
    }
#line 210 "disj_gen.m"
    {
#line 210 "disj_gen.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__disj_gen__LLDSTypes_24, ll_backend__disj_gen__Solns_23, &ll_backend__disj_gen__SolnVectorAddr_27, ll_backend__disj_gen__STATE_VARIABLE_CI_0_58, &ll_backend__disj_gen__STATE_VARIABLE_CI_60_60);
    }
#line 211 "disj_gen.m"
    {
#line 211 "disj_gen.m"
      ll_backend__disj_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 211 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 211 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_61_61, 1) = ((MR_Box) (ll_backend__disj_gen__SolnVectorAddr_27));
#line 211 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_61_61, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 211 "disj_gen.m"
    }
#line 211 "disj_gen.m"
    {
#line 211 "disj_gen.m"
      ll_backend__disj_gen__SolnVectorAddrRval_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__SolnVectorAddrRval_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 211 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__SolnVectorAddrRval_28, 1) = ((MR_Box) (ll_backend__disj_gen__V_61_61));
#line 211 "disj_gen.m"
    }
#line 213 "disj_gen.m"
    {
#line 213 "disj_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__disj_gen__EndLabel_29, ll_backend__disj_gen__STATE_VARIABLE_CI_60_60, &ll_backend__disj_gen__STATE_VARIABLE_CI_63_63);
    }
#line 218 "disj_gen.m"
    {
#line 218 "disj_gen.m"
      ll_backend__code_info__acquire_reg_not_in_storemap_5_p_0(ll_backend__disj_gen__StoreMap_11, (MR_Integer) 0, &ll_backend__disj_gen__BaseReg_30, ll_backend__disj_gen__STATE_VARIABLE_CI_63_63, &ll_backend__disj_gen__STATE_VARIABLE_CI_65_65);
    }
#line 5125 "ll_backend.disj_gen.c"
    ll_backend__disj_gen__TypeCtorInfo_193_193 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 222 "disj_gen.m"
    ll_backend__disj_gen__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__disj_gen_scalar_common_3[0]);
#line 222 "disj_gen.m"
    {
#line 222 "disj_gen.m"
      ll_backend__disj_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 222 "disj_gen.m"
      MR_hl_field(MR_mktag(2), ll_backend__disj_gen__V_69_69, 0) = ((MR_Box) (ll_backend__disj_gen__SolnVectorAddrRval_28));
#line 222 "disj_gen.m"
      MR_hl_field(MR_mktag(2), ll_backend__disj_gen__V_69_69, 1) = ((MR_Box) (ll_backend__disj_gen__V_70_70));
#line 222 "disj_gen.m"
      MR_hl_field(MR_mktag(2), ll_backend__disj_gen__V_69_69, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__disj_gen_scalar_common_1[10])));
#line 222 "disj_gen.m"
    }
#line 221 "disj_gen.m"
    {
#line 221 "disj_gen.m"
      ll_backend__disj_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 221 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_68_68, 1) = ((MR_Box) (ll_backend__disj_gen__V_69_69));
#line 221 "disj_gen.m"
    }
#line 221 "disj_gen.m"
    {
#line 221 "disj_gen.m"
      ll_backend__disj_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 221 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 221 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_67_67, 1) = ((MR_Box) (ll_backend__disj_gen__BaseReg_30));
#line 221 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_67_67, 2) = ((MR_Box) (ll_backend__disj_gen__V_68_68));
#line 221 "disj_gen.m"
    }
#line 220 "disj_gen.m"
    {
#line 220 "disj_gen.m"
      ll_backend__disj_gen__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 220 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_66_66, 0) = ((MR_Box) (ll_backend__disj_gen__V_67_67));
#line 220 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_66_66, 1) = ((MR_Box) ((MR_String) "Compute base address for this case"));
#line 220 "disj_gen.m"
    }
#line 220 "disj_gen.m"
    {
#line 220 "disj_gen.m"
      ll_backend__disj_gen__BaseRegInitCode_31 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ((MR_Box) (ll_backend__disj_gen__V_66_66)));
    }
#line 227 "disj_gen.m"
    {
#line 227 "disj_gen.m"
      ll_backend__disj_gen__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 227 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_79_79, 0) = ((MR_Box) (ll_backend__disj_gen__NumOutVars_26));
#line 227 "disj_gen.m"
    }
#line 227 "disj_gen.m"
    {
#line 227 "disj_gen.m"
      ll_backend__disj_gen__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 227 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_78_78, 1) = ((MR_Box) (ll_backend__disj_gen__V_79_79));
#line 227 "disj_gen.m"
    }
#line 227 "disj_gen.m"
    {
#line 227 "disj_gen.m"
      ll_backend__disj_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 227 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 227 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_77_77, 1) = ((MR_Box) (ll_backend__disj_gen__CurSlot_14));
#line 227 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_77_77, 2) = ((MR_Box) (ll_backend__disj_gen__V_78_78));
#line 227 "disj_gen.m"
    }
#line 226 "disj_gen.m"
    {
#line 226 "disj_gen.m"
      ll_backend__disj_gen__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 226 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_76_76, 0) = ((MR_Box) (ll_backend__disj_gen__V_77_77));
#line 226 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_76_76, 1) = ((MR_Box) ((MR_String) "Setup current slot in the solution array"));
#line 226 "disj_gen.m"
    }
#line 226 "disj_gen.m"
    {
#line 226 "disj_gen.m"
      ll_backend__disj_gen__SaveSlotCode_32 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ((MR_Box) (ll_backend__disj_gen__V_76_76)));
    }
#line 231 "disj_gen.m"
    {
#line 231 "disj_gen.m"
      ll_backend__code_info__remember_position_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_65_65, &ll_backend__disj_gen__DisjEntry_33);
    }
#line 233 "disj_gen.m"
    {
#line 233 "disj_gen.m"
      ll_backend__disj_gen__V_81_81 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__disj_gen__ResumeVars_6);
    }
#line 233 "disj_gen.m"
    {
#line 233 "disj_gen.m"
      ll_backend__code_info__make_resume_point_6_p_0(ll_backend__disj_gen__V_81_81, (MR_Integer) 1, ll_backend__disj_gen__ResumeMap_15, &ll_backend__disj_gen__ResumePoint_34, ll_backend__disj_gen__STATE_VARIABLE_CI_65_65, &ll_backend__disj_gen__STATE_VARIABLE_CI_83_83);
    }
#line 235 "disj_gen.m"
    {
#line 235 "disj_gen.m"
      ll_backend__code_info__effect_resume_point_5_p_0(ll_backend__disj_gen__ResumePoint_34, (MR_Integer) 2, &ll_backend__disj_gen__UpdateRedoipCode_35, ll_backend__disj_gen__STATE_VARIABLE_CI_83_83, &ll_backend__disj_gen__STATE_VARIABLE_CI_85_85);
    }
#line 236 "disj_gen.m"
    {
#line 236 "disj_gen.m"
      ll_backend__lookup_util__generate_offset_assigns_5_p_0(ll_backend__disj_gen__OutVars_10, (MR_Integer) 0, ll_backend__disj_gen__BaseReg_30, ll_backend__disj_gen__STATE_VARIABLE_CI_85_85, &ll_backend__disj_gen__STATE_VARIABLE_CI_87_87);
    }
#line 237 "disj_gen.m"
    {
#line 237 "disj_gen.m"
      ll_backend__code_info__flush_resume_vars_to_stack_3_p_0(&ll_backend__disj_gen__FirstFlushResumeVarsCode_36, ll_backend__disj_gen__STATE_VARIABLE_CI_87_87, &ll_backend__disj_gen__STATE_VARIABLE_CI_88_88);
    }
#line 243 "disj_gen.m"
    {
#line 243 "disj_gen.m"
      ll_backend__code_info__pop_resume_point_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_88_88, &ll_backend__disj_gen__STATE_VARIABLE_CI_89_89);
    }
#line 244 "disj_gen.m"
    {
#line 244 "disj_gen.m"
      ll_backend__code_info__pickup_zombies_3_p_0(&ll_backend__disj_gen__FirstZombies_37, ll_backend__disj_gen__STATE_VARIABLE_CI_89_89, &ll_backend__disj_gen__STATE_VARIABLE_CI_90_90);
    }
#line 245 "disj_gen.m"
    {
#line 245 "disj_gen.m"
      ll_backend__code_info__make_vars_forward_dead_3_p_0(ll_backend__disj_gen__FirstZombies_37, ll_backend__disj_gen__STATE_VARIABLE_CI_90_90, &ll_backend__disj_gen__STATE_VARIABLE_CI_91_91);
    }
#line 247 "disj_gen.m"
    {
#line 247 "disj_gen.m"
      ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__disj_gen__StoreMap_11, ll_backend__disj_gen__Liveness_13, ll_backend__disj_gen__MaybeEnd0_12, &ll_backend__disj_gen__MaybeEnd1_38, &ll_backend__disj_gen__FirstBranchEndCode_39, ll_backend__disj_gen__STATE_VARIABLE_CI_91_91, &ll_backend__disj_gen__STATE_VARIABLE_CI_92_92);
    }
#line 249 "disj_gen.m"
    {
#line 249 "disj_gen.m"
      ll_backend__code_info__release_reg_3_p_0(ll_backend__disj_gen__BaseReg_30, ll_backend__disj_gen__STATE_VARIABLE_CI_92_92, &ll_backend__disj_gen__STATE_VARIABLE_CI_93_93);
    }
#line 252 "disj_gen.m"
    {
#line 252 "disj_gen.m"
      ll_backend__disj_gen__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 252 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_96_96, 0) = ((MR_Box) (ll_backend__disj_gen__EndLabel_29));
#line 252 "disj_gen.m"
    }
#line 252 "disj_gen.m"
    {
#line 252 "disj_gen.m"
      ll_backend__disj_gen__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 252 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_95_95, 1) = ((MR_Box) (ll_backend__disj_gen__V_96_96));
#line 252 "disj_gen.m"
    }
#line 251 "disj_gen.m"
    {
#line 251 "disj_gen.m"
      ll_backend__disj_gen__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 251 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_94_94, 0) = ((MR_Box) (ll_backend__disj_gen__V_95_95));
#line 251 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_94_94, 1) = ((MR_Box) ((MR_String) "goto end of lookup disj"));
#line 251 "disj_gen.m"
    }
#line 251 "disj_gen.m"
    {
#line 251 "disj_gen.m"
      ll_backend__disj_gen__GotoEndCode_40 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ((MR_Box) (ll_backend__disj_gen__V_94_94)));
    }
#line 255 "disj_gen.m"
    {
#line 255 "disj_gen.m"
      ll_backend__code_info__reset_to_position_3_p_0(ll_backend__disj_gen__DisjEntry_33, ll_backend__disj_gen__STATE_VARIABLE_CI_93_93, &ll_backend__disj_gen__STATE_VARIABLE_CI_98_98);
    }
#line 256 "disj_gen.m"
    {
#line 256 "disj_gen.m"
      ll_backend__code_info__generate_resume_point_4_p_0(ll_backend__disj_gen__ResumePoint_34, &ll_backend__disj_gen__ResumePointCode_41, ll_backend__disj_gen__STATE_VARIABLE_CI_98_98, &ll_backend__disj_gen__STATE_VARIABLE_CI_99_99);
    }
#line 258 "disj_gen.m"
    {
#line 258 "disj_gen.m"
      ll_backend__code_info__maybe_reset_ticket_3_p_0(ll_backend__disj_gen__MaybeTicketSlot_18, (MR_Integer) 0, &ll_backend__disj_gen__RestoreTicketCode_42);
    }
#line 259 "disj_gen.m"
    {
#line 259 "disj_gen.m"
      ll_backend__code_info__maybe_restore_hp_2_p_0(ll_backend__disj_gen__MaybeHpSlot_20, &ll_backend__disj_gen__RestoreHpCode_43);
    }
#line 261 "disj_gen.m"
    {
#line 261 "disj_gen.m"
      ll_backend__code_info__acquire_reg_not_in_storemap_5_p_0(ll_backend__disj_gen__StoreMap_11, (MR_Integer) 0, &ll_backend__disj_gen__LaterBaseReg_44, ll_backend__disj_gen__STATE_VARIABLE_CI_99_99, &ll_backend__disj_gen__STATE_VARIABLE_CI_102_102);
    }
#line 262 "disj_gen.m"
    {
#line 262 "disj_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__disj_gen__UndoLabel_45, ll_backend__disj_gen__STATE_VARIABLE_CI_102_102, &ll_backend__disj_gen__STATE_VARIABLE_CI_103_103);
    }
#line 263 "disj_gen.m"
    {
#line 263 "disj_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__disj_gen__AfterUndoLabel_46, ll_backend__disj_gen__STATE_VARIABLE_CI_103_103, &ll_backend__disj_gen__STATE_VARIABLE_CI_104_104);
    }
#line 264 "disj_gen.m"
    ll_backend__disj_gen__V_105_105 = (ll_backend__disj_gen__NumSolns_25 - (MR_Integer) 1);
#line 264 "disj_gen.m"
    ll_backend__disj_gen__MaxSlot_47 = (ll_backend__disj_gen__V_105_105 * ll_backend__disj_gen__NumOutVars_26);
#line 266 "disj_gen.m"
    {
#line 266 "disj_gen.m"
      ll_backend__disj_gen__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 266 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_110_110, 0) = ((MR_Box) (ll_backend__disj_gen__CurSlot_14));
#line 266 "disj_gen.m"
    }
#line 266 "disj_gen.m"
    {
#line 266 "disj_gen.m"
      ll_backend__disj_gen__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 266 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 266 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_109_109, 1) = ((MR_Box) (ll_backend__disj_gen__LaterBaseReg_44));
#line 266 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_109_109, 2) = ((MR_Box) (ll_backend__disj_gen__V_110_110));
#line 266 "disj_gen.m"
    }
#line 267 "disj_gen.m"
    {
#line 267 "disj_gen.m"
      ll_backend__disj_gen__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 267 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_108_108, 0) = ((MR_Box) (ll_backend__disj_gen__V_109_109));
#line 267 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_108_108, 1) = ((MR_Box) ((MR_String) "Init later base register"));
#line 267 "disj_gen.m"
    }
#line 268 "disj_gen.m"
    {
#line 268 "disj_gen.m"
      ll_backend__disj_gen__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 268 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_117_117, 0) = ((MR_Box) (ll_backend__disj_gen__LaterBaseReg_44));
#line 268 "disj_gen.m"
    }
#line 269 "disj_gen.m"
    {
#line 269 "disj_gen.m"
      ll_backend__disj_gen__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 269 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_119_119, 0) = ((MR_Box) (ll_backend__disj_gen__MaxSlot_47));
#line 269 "disj_gen.m"
    }
#line 268 "disj_gen.m"
    {
#line 268 "disj_gen.m"
      ll_backend__disj_gen__V_118_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_118_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 268 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_118_118, 1) = ((MR_Box) (ll_backend__disj_gen__V_119_119));
#line 268 "disj_gen.m"
    }
#line 268 "disj_gen.m"
    {
#line 268 "disj_gen.m"
      ll_backend__disj_gen__V_115_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 268 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_115_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 268 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25))));
#line 268 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_115_115, 2) = ((MR_Box) (ll_backend__disj_gen__V_117_117));
#line 268 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_115_115, 3) = ((MR_Box) (ll_backend__disj_gen__V_118_118));
#line 268 "disj_gen.m"
    }
#line 268 "disj_gen.m"
    {
#line 268 "disj_gen.m"
      ll_backend__disj_gen__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 268 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_120_120, 0) = ((MR_Box) (ll_backend__disj_gen__UndoLabel_45));
#line 268 "disj_gen.m"
    }
#line 268 "disj_gen.m"
    {
#line 268 "disj_gen.m"
      ll_backend__disj_gen__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 268 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_114_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 268 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_114_114, 1) = ((MR_Box) (ll_backend__disj_gen__V_115_115));
#line 268 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_114_114, 2) = ((MR_Box) (ll_backend__disj_gen__V_120_120));
#line 268 "disj_gen.m"
    }
#line 271 "disj_gen.m"
    {
#line 271 "disj_gen.m"
      ll_backend__disj_gen__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 271 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_113_113, 0) = ((MR_Box) (ll_backend__disj_gen__V_114_114));
#line 271 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_113_113, 1) = ((MR_Box) ((MR_String) "Jump to undo hijack code if there are no more solutions"));
#line 271 "disj_gen.m"
    }
#line 272 "disj_gen.m"
    {
#line 272 "disj_gen.m"
      ll_backend__disj_gen__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 272 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 272 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 272 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_125_125, 2) = ((MR_Box) (ll_backend__disj_gen__V_110_110));
#line 272 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_125_125, 3) = ((MR_Box) (ll_backend__disj_gen__V_78_78));
#line 272 "disj_gen.m"
    }
#line 272 "disj_gen.m"
    {
#line 272 "disj_gen.m"
      ll_backend__disj_gen__V_124_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 272 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_124_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 272 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_124_124, 1) = ((MR_Box) (ll_backend__disj_gen__CurSlot_14));
#line 272 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_124_124, 2) = ((MR_Box) (ll_backend__disj_gen__V_125_125));
#line 272 "disj_gen.m"
    }
#line 274 "disj_gen.m"
    {
#line 274 "disj_gen.m"
      ll_backend__disj_gen__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 274 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_123_123, 0) = ((MR_Box) (ll_backend__disj_gen__V_124_124));
#line 274 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_123_123, 1) = ((MR_Box) ((MR_String) "Update current slot"));
#line 274 "disj_gen.m"
    }
#line 275 "disj_gen.m"
    {
#line 275 "disj_gen.m"
      ll_backend__disj_gen__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 275 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_134_134, 0) = ((MR_Box) (ll_backend__disj_gen__AfterUndoLabel_46));
#line 275 "disj_gen.m"
    }
#line 275 "disj_gen.m"
    {
#line 275 "disj_gen.m"
      ll_backend__disj_gen__V_133_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 275 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_133_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 275 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_133_133, 1) = ((MR_Box) (ll_backend__disj_gen__V_134_134));
#line 275 "disj_gen.m"
    }
#line 276 "disj_gen.m"
    {
#line 276 "disj_gen.m"
      ll_backend__disj_gen__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 276 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_132_132, 0) = ((MR_Box) (ll_backend__disj_gen__V_133_133));
#line 276 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_132_132, 1) = ((MR_Box) ((MR_String) "Jump around undo hijack code"));
#line 276 "disj_gen.m"
    }
#line 277 "disj_gen.m"
    {
#line 277 "disj_gen.m"
      ll_backend__disj_gen__V_138_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_138_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 277 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_138_138, 1) = ((MR_Box) (ll_backend__disj_gen__UndoLabel_45));
#line 277 "disj_gen.m"
    }
#line 279 "disj_gen.m"
    {
#line 279 "disj_gen.m"
      ll_backend__disj_gen__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 279 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_137_137, 0) = ((MR_Box) (ll_backend__disj_gen__V_138_138));
#line 279 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_137_137, 1) = ((MR_Box) ((MR_String) "Undo hijack code"));
#line 279 "disj_gen.m"
    }
#line 276 "disj_gen.m"
    {
#line 276 "disj_gen.m"
      ll_backend__disj_gen__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_136_136, 0) = ((MR_Box) (ll_backend__disj_gen__V_137_137));
#line 276 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_136_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "disj_gen.m"
    }
#line 274 "disj_gen.m"
    {
#line 274 "disj_gen.m"
      ll_backend__disj_gen__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 274 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_131_131, 0) = ((MR_Box) (ll_backend__disj_gen__V_132_132));
#line 274 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_131_131, 1) = ((MR_Box) (ll_backend__disj_gen__V_136_136));
#line 274 "disj_gen.m"
    }
#line 271 "disj_gen.m"
    {
#line 271 "disj_gen.m"
      ll_backend__disj_gen__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_122_122, 0) = ((MR_Box) (ll_backend__disj_gen__V_123_123));
#line 271 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_122_122, 1) = ((MR_Box) (ll_backend__disj_gen__V_131_131));
#line 271 "disj_gen.m"
    }
#line 267 "disj_gen.m"
    {
#line 267 "disj_gen.m"
      ll_backend__disj_gen__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_112_112, 0) = ((MR_Box) (ll_backend__disj_gen__V_113_113));
#line 267 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_112_112, 1) = ((MR_Box) (ll_backend__disj_gen__V_122_122));
#line 267 "disj_gen.m"
    }
#line 265 "disj_gen.m"
    {
#line 265 "disj_gen.m"
      ll_backend__disj_gen__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_107_107, 0) = ((MR_Box) (ll_backend__disj_gen__V_108_108));
#line 265 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_107_107, 1) = ((MR_Box) (ll_backend__disj_gen__V_112_112));
#line 265 "disj_gen.m"
    }
#line 265 "disj_gen.m"
    {
#line 265 "disj_gen.m"
      ll_backend__disj_gen__TestMoreSolnsCode_48 = mercury__cord__from_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ll_backend__disj_gen__V_107_107);
    }
#line 280 "disj_gen.m"
    {
#line 280 "disj_gen.m"
      ll_backend__code_info__undo_disj_hijack_4_p_0(ll_backend__disj_gen__HijackInfo_21, &ll_backend__disj_gen__UndoHijackCode_49, ll_backend__disj_gen__STATE_VARIABLE_CI_104_104, &ll_backend__disj_gen__STATE_VARIABLE_CI_141_141);
    }
#line 282 "disj_gen.m"
    {
#line 282 "disj_gen.m"
      ll_backend__disj_gen__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 282 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_144_144, 1) = ((MR_Box) (ll_backend__disj_gen__AfterUndoLabel_46));
#line 282 "disj_gen.m"
    }
#line 283 "disj_gen.m"
    {
#line 283 "disj_gen.m"
      ll_backend__disj_gen__V_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 283 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_143_143, 0) = ((MR_Box) (ll_backend__disj_gen__V_144_144));
#line 283 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_143_143, 1) = ((MR_Box) ((MR_String) "Return later answer code"));
#line 283 "disj_gen.m"
    }
#line 285 "disj_gen.m"
    {
#line 285 "disj_gen.m"
      ll_backend__disj_gen__V_150_150 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 285 "disj_gen.m"
      MR_hl_field(MR_mktag(2), ll_backend__disj_gen__V_150_150, 0) = ((MR_Box) (ll_backend__disj_gen__SolnVectorAddrRval_28));
#line 285 "disj_gen.m"
      MR_hl_field(MR_mktag(2), ll_backend__disj_gen__V_150_150, 1) = ((MR_Box) (ll_backend__disj_gen__V_70_70));
#line 285 "disj_gen.m"
      MR_hl_field(MR_mktag(2), ll_backend__disj_gen__V_150_150, 2) = ((MR_Box) (ll_backend__disj_gen__V_117_117));
#line 285 "disj_gen.m"
    }
#line 284 "disj_gen.m"
    {
#line 284 "disj_gen.m"
      ll_backend__disj_gen__V_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 284 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 284 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_149_149, 1) = ((MR_Box) (ll_backend__disj_gen__V_150_150));
#line 284 "disj_gen.m"
    }
#line 284 "disj_gen.m"
    {
#line 284 "disj_gen.m"
      ll_backend__disj_gen__V_148_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 284 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_148_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 284 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_148_148, 1) = ((MR_Box) (ll_backend__disj_gen__LaterBaseReg_44));
#line 284 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_148_148, 2) = ((MR_Box) (ll_backend__disj_gen__V_149_149));
#line 284 "disj_gen.m"
    }
#line 288 "disj_gen.m"
    {
#line 288 "disj_gen.m"
      ll_backend__disj_gen__V_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 288 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_147_147, 0) = ((MR_Box) (ll_backend__disj_gen__V_148_148));
#line 288 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_147_147, 1) = ((MR_Box) ((MR_String) "Compute base address in later array for this solution"));
#line 288 "disj_gen.m"
    }
#line 283 "disj_gen.m"
    {
#line 283 "disj_gen.m"
      ll_backend__disj_gen__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_146_146, 0) = ((MR_Box) (ll_backend__disj_gen__V_147_147));
#line 283 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 283 "disj_gen.m"
    }
#line 281 "disj_gen.m"
    {
#line 281 "disj_gen.m"
      ll_backend__disj_gen__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_142_142, 0) = ((MR_Box) (ll_backend__disj_gen__V_143_143));
#line 281 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_142_142, 1) = ((MR_Box) (ll_backend__disj_gen__V_146_146));
#line 281 "disj_gen.m"
    }
#line 281 "disj_gen.m"
    {
#line 281 "disj_gen.m"
      ll_backend__disj_gen__AfterUndoLabelCode_50 = mercury__cord__from_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ll_backend__disj_gen__V_142_142);
    }
#line 294 "disj_gen.m"
    {
#line 294 "disj_gen.m"
      ll_backend__code_info__effect_resume_point_5_p_0(ll_backend__disj_gen__ResumePoint_34, (MR_Integer) 2, &ll_backend__disj_gen___LaterUpdateRedoipCode_51, ll_backend__disj_gen__STATE_VARIABLE_CI_141_141, &ll_backend__disj_gen__STATE_VARIABLE_CI_157_157);
    }
#line 296 "disj_gen.m"
    {
#line 296 "disj_gen.m"
      ll_backend__lookup_util__generate_offset_assigns_5_p_0(ll_backend__disj_gen__OutVars_10, (MR_Integer) 0, ll_backend__disj_gen__LaterBaseReg_44, ll_backend__disj_gen__STATE_VARIABLE_CI_157_157, &ll_backend__disj_gen__STATE_VARIABLE_CI_159_159);
    }
#line 297 "disj_gen.m"
    {
#line 297 "disj_gen.m"
      ll_backend__code_info__flush_resume_vars_to_stack_3_p_0(&ll_backend__disj_gen__LaterFlushResumeVarsCode_52, ll_backend__disj_gen__STATE_VARIABLE_CI_159_159, &ll_backend__disj_gen__STATE_VARIABLE_CI_160_160);
    }
#line 303 "disj_gen.m"
    {
#line 303 "disj_gen.m"
      ll_backend__code_info__pop_resume_point_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_160_160, &ll_backend__disj_gen__STATE_VARIABLE_CI_161_161);
    }
#line 304 "disj_gen.m"
    {
#line 304 "disj_gen.m"
      ll_backend__code_info__pickup_zombies_3_p_0(&ll_backend__disj_gen__LaterZombies_53, ll_backend__disj_gen__STATE_VARIABLE_CI_161_161, &ll_backend__disj_gen__STATE_VARIABLE_CI_162_162);
    }
#line 305 "disj_gen.m"
    {
#line 305 "disj_gen.m"
      ll_backend__code_info__make_vars_forward_dead_3_p_0(ll_backend__disj_gen__LaterZombies_53, ll_backend__disj_gen__STATE_VARIABLE_CI_162_162, &ll_backend__disj_gen__STATE_VARIABLE_CI_163_163);
    }
#line 307 "disj_gen.m"
    {
#line 307 "disj_gen.m"
      ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__disj_gen__StoreMap_11, ll_backend__disj_gen__Liveness_13, ll_backend__disj_gen__MaybeEnd1_38, &ll_backend__disj_gen__MaybeEnd_54, &ll_backend__disj_gen__LaterBranchEndCode_55, ll_backend__disj_gen__STATE_VARIABLE_CI_163_163, &ll_backend__disj_gen__STATE_VARIABLE_CI_164_164);
    }
#line 310 "disj_gen.m"
    {
#line 310 "disj_gen.m"
      ll_backend__code_info__after_all_branches_4_p_0(ll_backend__disj_gen__StoreMap_11, ll_backend__disj_gen__MaybeEnd_54, ll_backend__disj_gen__STATE_VARIABLE_CI_164_164, ll_backend__disj_gen__STATE_VARIABLE_CI_59);
    }
#line 313 "disj_gen.m"
    {
#line 313 "disj_gen.m"
      ll_backend__disj_gen__V_167_167 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_167_167, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 313 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_167_167, 1) = ((MR_Box) (ll_backend__disj_gen__EndLabel_29));
#line 313 "disj_gen.m"
    }
#line 312 "disj_gen.m"
    {
#line 312 "disj_gen.m"
      ll_backend__disj_gen__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 312 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_166_166, 0) = ((MR_Box) (ll_backend__disj_gen__V_167_167));
#line 312 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_166_166, 1) = ((MR_Box) ((MR_String) "end of lookup disj"));
#line 312 "disj_gen.m"
    }
#line 312 "disj_gen.m"
    {
#line 312 "disj_gen.m"
      ll_backend__disj_gen__EndLabelCode_56 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ((MR_Box) (ll_backend__disj_gen__V_166_166)));
    }
#line 315 "disj_gen.m"
    {
#line 315 "disj_gen.m"
      ll_backend__disj_gen__Comment_57 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ((MR_Box) (&ll_backend__disj_gen_scalar_common_1[11])));
    }
#line 337 "disj_gen.m"
    {
#line 337 "disj_gen.m"
      ll_backend__disj_gen__V_190_190 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ll_backend__disj_gen__LaterBranchEndCode_55, ll_backend__disj_gen__EndLabelCode_56);
    }
#line 336 "disj_gen.m"
    {
#line 336 "disj_gen.m"
      ll_backend__disj_gen__V_189_189 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ll_backend__disj_gen__LaterFlushResumeVarsCode_52, ll_backend__disj_gen__V_190_190);
    }
#line 335 "disj_gen.m"
    {
#line 335 "disj_gen.m"
      ll_backend__disj_gen__V_188_188 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ll_backend__disj_gen__AfterUndoLabelCode_50, ll_backend__disj_gen__V_189_189);
    }
#line 334 "disj_gen.m"
    {
#line 334 "disj_gen.m"
      ll_backend__disj_gen__V_187_187 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ll_backend__disj_gen__UndoHijackCode_49, ll_backend__disj_gen__V_188_188);
    }
#line 333 "disj_gen.m"
    {
#line 333 "disj_gen.m"
      ll_backend__disj_gen__V_186_186 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ll_backend__disj_gen__TestMoreSolnsCode_48, ll_backend__disj_gen__V_187_187);
    }
#line 332 "disj_gen.m"
    {
#line 332 "disj_gen.m"
      ll_backend__disj_gen__V_185_185 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ll_backend__disj_gen__RestoreHpCode_43, ll_backend__disj_gen__V_186_186);
    }
#line 331 "disj_gen.m"
    {
#line 331 "disj_gen.m"
      ll_backend__disj_gen__V_184_184 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ll_backend__disj_gen__RestoreTicketCode_42, ll_backend__disj_gen__V_185_185);
    }
#line 330 "disj_gen.m"
    {
#line 330 "disj_gen.m"
      ll_backend__disj_gen__V_183_183 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ll_backend__disj_gen__ResumePointCode_41, ll_backend__disj_gen__V_184_184);
    }
#line 329 "disj_gen.m"
    {
#line 329 "disj_gen.m"
      ll_backend__disj_gen__V_182_182 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ll_backend__disj_gen__GotoEndCode_40, ll_backend__disj_gen__V_183_183);
    }
#line 328 "disj_gen.m"
    {
#line 328 "disj_gen.m"
      ll_backend__disj_gen__V_181_181 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ll_backend__disj_gen__FirstBranchEndCode_39, ll_backend__disj_gen__V_182_182);
    }
#line 327 "disj_gen.m"
    {
#line 327 "disj_gen.m"
      ll_backend__disj_gen__V_180_180 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ll_backend__disj_gen__FirstFlushResumeVarsCode_36, ll_backend__disj_gen__V_181_181);
    }
#line 326 "disj_gen.m"
    {
#line 326 "disj_gen.m"
      ll_backend__disj_gen__V_179_179 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ll_backend__disj_gen__UpdateRedoipCode_35, ll_backend__disj_gen__V_180_180);
    }
#line 325 "disj_gen.m"
    {
#line 325 "disj_gen.m"
      ll_backend__disj_gen__V_178_178 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ll_backend__disj_gen__PrepareHijackCode_22, ll_backend__disj_gen__V_179_179);
    }
#line 324 "disj_gen.m"
    {
#line 324 "disj_gen.m"
      ll_backend__disj_gen__V_177_177 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ll_backend__disj_gen__SaveHpCode_19, ll_backend__disj_gen__V_178_178);
    }
#line 323 "disj_gen.m"
    {
#line 323 "disj_gen.m"
      ll_backend__disj_gen__V_176_176 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ll_backend__disj_gen__SaveTicketCode_17, ll_backend__disj_gen__V_177_177);
    }
#line 322 "disj_gen.m"
    {
#line 322 "disj_gen.m"
      ll_backend__disj_gen__V_175_175 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ll_backend__disj_gen__SaveSlotCode_32, ll_backend__disj_gen__V_176_176);
    }
#line 321 "disj_gen.m"
    {
#line 321 "disj_gen.m"
      ll_backend__disj_gen__V_174_174 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ll_backend__disj_gen__BaseRegInitCode_31, ll_backend__disj_gen__V_175_175);
    }
#line 320 "disj_gen.m"
    {
#line 320 "disj_gen.m"
      ll_backend__disj_gen__V_173_173 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ll_backend__disj_gen__FlushCode_16, ll_backend__disj_gen__V_174_174);
    }
#line 319 "disj_gen.m"
    {
#line 319 "disj_gen.m"
      *ll_backend__disj_gen__Code_8 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_193_193, ll_backend__disj_gen__Comment_57, ll_backend__disj_gen__V_173_173);
    }
#line 201 "disj_gen.m"
  }
#line 198 "disj_gen.m"
}

#line 128 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen__is_lookup_disj_8_p_0(
#line 128 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddTrailOps_9,
#line 128 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddRegionOps_10,
#line 128 "disj_gen.m"
  MR_Word ll_backend__disj_gen__ResumeVars_11,
#line 128 "disj_gen.m"
  MR_Word ll_backend__disj_gen__Disjuncts_12,
#line 128 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjGoalInfo_13,
#line 128 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__LookupDisjInfo_14,
#line 128 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_48,
#line 128 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_49)
#line 128 "disj_gen.m"
{
#line 133 "disj_gen.m"
  {
#line 133 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded = ((MR_tag((MR_Word) ll_backend__disj_gen__Disjuncts_12)) == (MR_mktag((MR_Integer) 1)));
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__TypeCtorInfo_67_67;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__FirstDisjunct_16;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__LaterDisjuncts_17;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__DisjNonLocals_21;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeTraceInfo_22;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__Globals_23;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__OutVars_24;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__VarTypes_25;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__OutTypes_26;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__ResumeMap_27;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__FlushCode_28;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__CurSlot_29;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__SaveTicketCode_30;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeTicketSlot_31;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__ReclaimHeap_32;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__SaveHpCode_33;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeHpSlot_34;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__HijackInfo_35;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__PrepareHijackCode_36;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__CurPos_37;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__StoreMap_38;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__FirstSoln_39;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeEnd1_40;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__Liveness_41;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__LaterSolns_42;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeEnd_43;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__Solns_44;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__ExprnOpts_45;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__UnboxFloats_46;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__LLDSTypes_47;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_50_50;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_51_51;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_52_52;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_53_53;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_54_54;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_55_55;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_56_56;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_57_57;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_58_58;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_59_59;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_60_60;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_61_61;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_62_62;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_63_63;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_64_64;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_65_65;
#line 133 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_68_68;
#line 139 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_18_18;
#line 139 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_19_19;
#line 139 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_20_20;

#line 138 "disj_gen.m"
    if (ll_backend__disj_gen__succeeded)
#line 138 "disj_gen.m"
      {
#line 138 "disj_gen.m"
        ll_backend__disj_gen__FirstDisjunct_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Disjuncts_12, (MR_Integer) 0)));
#line 138 "disj_gen.m"
        ll_backend__disj_gen__LaterDisjuncts_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Disjuncts_12, (MR_Integer) 1)));
#line 139 "disj_gen.m"
        ll_backend__disj_gen__succeeded = ((MR_tag((MR_Word) ll_backend__disj_gen__LaterDisjuncts_17)) == (MR_mktag((MR_Integer) 1)));
#line 139 "disj_gen.m"
        if (ll_backend__disj_gen__succeeded)
#line 139 "disj_gen.m"
          {
#line 139 "disj_gen.m"
            ll_backend__disj_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__LaterDisjuncts_17, (MR_Integer) 0)));
#line 139 "disj_gen.m"
            ll_backend__disj_gen__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__LaterDisjuncts_17, (MR_Integer) 1)));
#line 139 "disj_gen.m"
            ll_backend__disj_gen__succeeded = ((MR_tag((MR_Word) ll_backend__disj_gen__V_50_50)) == (MR_mktag((MR_Integer) 1)));
#line 139 "disj_gen.m"
            if (ll_backend__disj_gen__succeeded)
#line 139 "disj_gen.m"
              {
#line 139 "disj_gen.m"
                ll_backend__disj_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_50_50, (MR_Integer) 0)));
#line 139 "disj_gen.m"
                ll_backend__disj_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_50_50, (MR_Integer) 1)));
#line 141 "disj_gen.m"
                {
#line 141 "disj_gen.m"
                  ll_backend__disj_gen__DisjNonLocals_21 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ll_backend__disj_gen__DisjGoalInfo_13);
                }
#line 142 "disj_gen.m"
                {
#line 142 "disj_gen.m"
                  ll_backend__disj_gen__succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(ll_backend__disj_gen__DisjNonLocals_21, ll_backend__disj_gen__FirstDisjunct_16);
                }
#line 133 "disj_gen.m"
                if (ll_backend__disj_gen__succeeded)
#line 133 "disj_gen.m"
                  {
#line 143 "disj_gen.m"
                    {
#line 143 "disj_gen.m"
                      ll_backend__disj_gen__succeeded = hlds__goal_form__all_disjuncts_are_conj_of_unify_2_p_0(ll_backend__disj_gen__DisjNonLocals_21, ll_backend__disj_gen__LaterDisjuncts_17);
                    }
#line 133 "disj_gen.m"
                    if (ll_backend__disj_gen__succeeded)
#line 133 "disj_gen.m"
                      {
#line 145 "disj_gen.m"
                        {
#line 145 "disj_gen.m"
                          ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_48, &ll_backend__disj_gen__MaybeTraceInfo_22);
                        }
#line 146 "disj_gen.m"
                        ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__MaybeTraceInfo_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 133 "disj_gen.m"
                        if (ll_backend__disj_gen__succeeded)
#line 133 "disj_gen.m"
                          {
#line 149 "disj_gen.m"
                            {
#line 149 "disj_gen.m"
                              ll_backend__code_info__get_globals_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_48, &ll_backend__disj_gen__Globals_23);
                            }
#line 150 "disj_gen.m"
                            ll_backend__disj_gen__V_51_51 = (MR_Integer) 447;
#line 150 "disj_gen.m"
                            ll_backend__disj_gen__V_52_52 = (MR_Integer) 1;
#line 150 "disj_gen.m"
                            {
#line 150 "disj_gen.m"
                              ll_backend__disj_gen__succeeded = libs__globals__lookup_bool_option_3_p_1(ll_backend__disj_gen__Globals_23, ll_backend__disj_gen__V_51_51, ll_backend__disj_gen__V_52_52);
                            }
#line 133 "disj_gen.m"
                            if (ll_backend__disj_gen__succeeded)
#line 133 "disj_gen.m"
                              {
#line 154 "disj_gen.m"
                                ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__AddRegionOps_10 == (MR_Integer) 1);
#line 133 "disj_gen.m"
                                if (ll_backend__disj_gen__succeeded)
#line 133 "disj_gen.m"
                                  {
#line 156 "disj_gen.m"
                                    {
#line 156 "disj_gen.m"
                                      ll_backend__lookup_util__figure_out_output_vars_3_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_48, ll_backend__disj_gen__DisjGoalInfo_13, &ll_backend__disj_gen__OutVars_24);
                                    }
#line 157 "disj_gen.m"
                                    {
#line 157 "disj_gen.m"
                                      ll_backend__disj_gen__VarTypes_25 = ll_backend__code_info__get_var_types_1_f_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_48);
                                    }
#line 158 "disj_gen.m"
                                    {
#line 158 "disj_gen.m"
                                      parse_tree__prog_data__lookup_var_types_3_p_0(ll_backend__disj_gen__VarTypes_25, ll_backend__disj_gen__OutVars_24, &ll_backend__disj_gen__OutTypes_26);
                                    }
#line 6080 "ll_backend.disj_gen.c"
                                    ll_backend__disj_gen__TypeCtorInfo_67_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 160 "disj_gen.m"
                                    {
#line 160 "disj_gen.m"
                                      ll_backend__disj_gen__V_53_53 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_67_67, ll_backend__disj_gen__ResumeVars_11);
                                    }
#line 160 "disj_gen.m"
                                    {
#line 160 "disj_gen.m"
                                      ll_backend__code_info__produce_vars_5_p_0(ll_backend__disj_gen__V_53_53, &ll_backend__disj_gen__ResumeMap_27, &ll_backend__disj_gen__FlushCode_28, ll_backend__disj_gen__STATE_VARIABLE_CI_0_48, &ll_backend__disj_gen__STATE_VARIABLE_CI_54_54);
                                    }
#line 168 "disj_gen.m"
                                    ll_backend__disj_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 168 "disj_gen.m"
                                    ll_backend__disj_gen__V_56_56 = (MR_Integer) 1;
#line 168 "disj_gen.m"
                                    {
#line 168 "disj_gen.m"
                                      ll_backend__code_info__acquire_temp_slot_5_p_0(ll_backend__disj_gen__V_55_55, ll_backend__disj_gen__V_56_56, &ll_backend__disj_gen__CurSlot_29, ll_backend__disj_gen__STATE_VARIABLE_CI_54_54, &ll_backend__disj_gen__STATE_VARIABLE_CI_57_57);
                                    }
#line 170 "disj_gen.m"
                                    {
#line 170 "disj_gen.m"
                                      ll_backend__code_info__maybe_save_ticket_5_p_0(ll_backend__disj_gen__AddTrailOps_9, &ll_backend__disj_gen__SaveTicketCode_30, &ll_backend__disj_gen__MaybeTicketSlot_31, ll_backend__disj_gen__STATE_VARIABLE_CI_57_57, &ll_backend__disj_gen__STATE_VARIABLE_CI_58_58);
                                    }
#line 171 "disj_gen.m"
                                    {
#line 171 "disj_gen.m"
                                      ll_backend__code_info__get_globals_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_58_58, &ll_backend__disj_gen__V_68_68);
                                    }
#line 171 "disj_gen.m"
                                    {
#line 171 "disj_gen.m"
                                      ll_backend__disj_gen__succeeded = libs__globals____Unify____globals_0_0(ll_backend__disj_gen__Globals_23, ll_backend__disj_gen__V_68_68);
                                    }
#line 133 "disj_gen.m"
                                    if (ll_backend__disj_gen__succeeded)
#line 133 "disj_gen.m"
                                      {
#line 172 "disj_gen.m"
                                        ll_backend__disj_gen__V_59_59 = (MR_Integer) 306;
#line 172 "disj_gen.m"
                                        {
#line 172 "disj_gen.m"
                                          libs__globals__lookup_bool_option_3_p_0(ll_backend__disj_gen__Globals_23, ll_backend__disj_gen__V_59_59, &ll_backend__disj_gen__ReclaimHeap_32);
                                        }
#line 174 "disj_gen.m"
                                        {
#line 174 "disj_gen.m"
                                          ll_backend__code_info__maybe_save_hp_5_p_0(ll_backend__disj_gen__ReclaimHeap_32, &ll_backend__disj_gen__SaveHpCode_33, &ll_backend__disj_gen__MaybeHpSlot_34, ll_backend__disj_gen__STATE_VARIABLE_CI_58_58, &ll_backend__disj_gen__STATE_VARIABLE_CI_60_60);
                                        }
#line 175 "disj_gen.m"
                                        ll_backend__disj_gen__V_61_61 = (MR_Integer) 2;
#line 175 "disj_gen.m"
                                        {
#line 175 "disj_gen.m"
                                          ll_backend__code_info__prepare_for_disj_hijack_5_p_0(ll_backend__disj_gen__V_61_61, &ll_backend__disj_gen__HijackInfo_35, &ll_backend__disj_gen__PrepareHijackCode_36, ll_backend__disj_gen__STATE_VARIABLE_CI_60_60, &ll_backend__disj_gen__STATE_VARIABLE_CI_62_62);
                                        }
#line 180 "disj_gen.m"
                                        {
#line 180 "disj_gen.m"
                                          ll_backend__code_info__remember_position_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_62_62, &ll_backend__disj_gen__CurPos_37);
                                        }
#line 182 "disj_gen.m"
                                        {
#line 182 "disj_gen.m"
                                          hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__disj_gen__DisjGoalInfo_13, &ll_backend__disj_gen__StoreMap_38);
                                        }
#line 183 "disj_gen.m"
                                        ll_backend__disj_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 183 "disj_gen.m"
                                        {
#line 183 "disj_gen.m"
                                          ll_backend__disj_gen__succeeded = ll_backend__lookup_util__generate_constants_for_disjunct_9_p_0(ll_backend__disj_gen__FirstDisjunct_16, ll_backend__disj_gen__OutVars_24, ll_backend__disj_gen__StoreMap_38, &ll_backend__disj_gen__FirstSoln_39, ll_backend__disj_gen__V_63_63, &ll_backend__disj_gen__MaybeEnd1_40, &ll_backend__disj_gen__Liveness_41, ll_backend__disj_gen__STATE_VARIABLE_CI_62_62, &ll_backend__disj_gen__STATE_VARIABLE_CI_64_64);
                                        }
#line 133 "disj_gen.m"
                                        if (ll_backend__disj_gen__succeeded)
#line 133 "disj_gen.m"
                                          {
#line 185 "disj_gen.m"
                                            {
#line 185 "disj_gen.m"
                                              ll_backend__disj_gen__succeeded = ll_backend__lookup_util__generate_constants_for_disjuncts_8_p_0(ll_backend__disj_gen__LaterDisjuncts_17, ll_backend__disj_gen__OutVars_24, ll_backend__disj_gen__StoreMap_38, &ll_backend__disj_gen__LaterSolns_42, ll_backend__disj_gen__MaybeEnd1_40, &ll_backend__disj_gen__MaybeEnd_43, ll_backend__disj_gen__STATE_VARIABLE_CI_64_64, &ll_backend__disj_gen__STATE_VARIABLE_CI_65_65);
                                            }
#line 133 "disj_gen.m"
                                            if (ll_backend__disj_gen__succeeded)
#line 133 "disj_gen.m"
                                              {
#line 187 "disj_gen.m"
                                                {
#line 187 "disj_gen.m"
                                                  ll_backend__disj_gen__Solns_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "disj_gen.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Solns_44, 0) = ((MR_Box) (ll_backend__disj_gen__FirstSoln_39));
#line 187 "disj_gen.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Solns_44, 1) = ((MR_Box) (ll_backend__disj_gen__LaterSolns_42));
#line 187 "disj_gen.m"
                                                }
#line 188 "disj_gen.m"
                                                {
#line 188 "disj_gen.m"
                                                  ll_backend__code_info__reset_to_position_3_p_0(ll_backend__disj_gen__CurPos_37, ll_backend__disj_gen__STATE_VARIABLE_CI_65_65, ll_backend__disj_gen__STATE_VARIABLE_CI_49);
                                                }
#line 190 "disj_gen.m"
                                                {
#line 190 "disj_gen.m"
                                                  ll_backend__code_info__get_exprn_opts_2_p_0(*ll_backend__disj_gen__STATE_VARIABLE_CI_49, &ll_backend__disj_gen__ExprnOpts_45);
                                                }
#line 191 "disj_gen.m"
                                                {
#line 191 "disj_gen.m"
                                                  ll_backend__disj_gen__UnboxFloats_46 = ll_backend__llds__get_unboxed_floats_1_f_0(ll_backend__disj_gen__ExprnOpts_45);
                                                }
#line 192 "disj_gen.m"
                                                {
#line 192 "disj_gen.m"
                                                  ll_backend__disj_gen__succeeded = ll_backend__global_data__find_general_llds_types_4_p_0(ll_backend__disj_gen__UnboxFloats_46, ll_backend__disj_gen__OutTypes_26, ll_backend__disj_gen__Solns_44, &ll_backend__disj_gen__LLDSTypes_47);
                                                }
#line 133 "disj_gen.m"
                                                if (ll_backend__disj_gen__succeeded)
#line 133 "disj_gen.m"
                                                  {
#line 193 "disj_gen.m"
                                                    {
#line 193 "disj_gen.m"
                                                      MR_Word base;
#line 193 "disj_gen.m"
                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 193 "disj_gen.m"
                                                      *ll_backend__disj_gen__LookupDisjInfo_14 = base;
#line 193 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__disj_gen__OutVars_24));
#line 193 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__disj_gen__StoreMap_38));
#line 193 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__disj_gen__MaybeEnd_43));
#line 193 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__disj_gen__Liveness_41));
#line 193 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__disj_gen__CurSlot_29));
#line 193 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__disj_gen__ResumeMap_27));
#line 193 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__disj_gen__FlushCode_28));
#line 193 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__disj_gen__SaveTicketCode_30));
#line 193 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__disj_gen__MaybeTicketSlot_31));
#line 193 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__disj_gen__SaveHpCode_33));
#line 193 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ll_backend__disj_gen__MaybeHpSlot_34));
#line 193 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ll_backend__disj_gen__HijackInfo_35));
#line 193 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ll_backend__disj_gen__PrepareHijackCode_36));
#line 193 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ll_backend__disj_gen__Solns_44));
#line 193 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (ll_backend__disj_gen__LLDSTypes_47));
#line 193 "disj_gen.m"
                                                    }
#line 193 "disj_gen.m"
                                                    ll_backend__disj_gen__succeeded = MR_TRUE;
#line 133 "disj_gen.m"
                                                  }
#line 133 "disj_gen.m"
                                              }
#line 133 "disj_gen.m"
                                          }
#line 133 "disj_gen.m"
                                      }
#line 133 "disj_gen.m"
                                  }
#line 133 "disj_gen.m"
                              }
#line 133 "disj_gen.m"
                          }
#line 133 "disj_gen.m"
                      }
#line 133 "disj_gen.m"
                  }
#line 139 "disj_gen.m"
              }
#line 139 "disj_gen.m"
          }
#line 138 "disj_gen.m"
      }
#line 133 "disj_gen.m"
    return ll_backend__disj_gen__succeeded;
#line 133 "disj_gen.m"
  }
#line 128 "disj_gen.m"
}

#line 32 "disj_gen.m"
void MR_CALL 
ll_backend__disj_gen__generate_disj_6_p_0(
#line 32 "disj_gen.m"
  MR_Word ll_backend__disj_gen__CodeModel_7,
#line 32 "disj_gen.m"
  MR_Word ll_backend__disj_gen__Goals_8,
#line 32 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjGoalInfo_9,
#line 32 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__Code_10,
#line 32 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_23,
#line 32 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_24)
#line 32 "disj_gen.m"
{
#line 66 "disj_gen.m"
  {
#line 66 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;

#line 66 "disj_gen.m"
    if ((ll_backend__disj_gen__Goals_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 70 "disj_gen.m"
      if ((ll_backend__disj_gen__CodeModel_7 == (MR_Integer) 1))
#line 69 "disj_gen.m"
        {
#line 69 "disj_gen.m"
          ll_backend__code_info__generate_failure_3_p_0(ll_backend__disj_gen__Code_10, ll_backend__disj_gen__STATE_VARIABLE_CI_0_23, ll_backend__disj_gen__STATE_VARIABLE_CI_24);
#line 69 "disj_gen.m"
          return;
        }
#line 70 "disj_gen.m"
      else
#line 73 "disj_gen.m"
        {
#line 74 "disj_gen.m"
          {
#line 74 "disj_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.disj_gen", (MR_String) "predicate \140ll_backend.disj_gen.generate_disj\'/6", (MR_String) "empty disjunction");
#line 74 "disj_gen.m"
            return;
          }
#line 73 "disj_gen.m"
        }
#line 66 "disj_gen.m"
    else
#line 77 "disj_gen.m"
      {
#line 77 "disj_gen.m"
        MR_Word ll_backend__disj_gen__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Goals_8, (MR_Integer) 0)));
#line 77 "disj_gen.m"
        MR_Word ll_backend__disj_gen__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Goal_12, (MR_Integer) 1)));
#line 77 "disj_gen.m"
        MR_Word ll_backend__disj_gen__Resume_16;
#line 77 "disj_gen.m"
        MR_Word ll_backend__disj_gen__ResumeVars_19;
#line 77 "disj_gen.m"
        MR_Word ll_backend__disj_gen__AddTrailOps_20;
#line 77 "disj_gen.m"
        MR_Word ll_backend__disj_gen__AddRegionOps_21;
#line 77 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Goals_8, (MR_Integer) 1)));
#line 78 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Goal_12, (MR_Integer) 0)));
#line 95 "disj_gen.m"
        MR_Word ll_backend__disj_gen__LookupDisjInfo_22;
#line 95 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_25_25;

#line 79 "disj_gen.m"
        {
#line 79 "disj_gen.m"
          hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__disj_gen__GoalInfo_15, &ll_backend__disj_gen__Resume_16);
        }
#line 83 "disj_gen.m"
        if ((ll_backend__disj_gen__Resume_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 84 "disj_gen.m"
          {
#line 85 "disj_gen.m"
            {
#line 85 "disj_gen.m"
              ll_backend__disj_gen__ResumeVars_19 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            }
#line 84 "disj_gen.m"
          }
#line 83 "disj_gen.m"
        else
#line 81 "disj_gen.m"
          {
#line 81 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_18_18;

#line 81 "disj_gen.m"
            ll_backend__disj_gen__ResumeVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Resume_16, (MR_Integer) 0)));
#line 81 "disj_gen.m"
            ll_backend__disj_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Resume_16, (MR_Integer) 1)));
#line 81 "disj_gen.m"
          }
#line 87 "disj_gen.m"
        {
#line 87 "disj_gen.m"
          ll_backend__disj_gen__AddTrailOps_20 = ll_backend__code_info__should_add_trail_ops_2_f_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_23, ll_backend__disj_gen__GoalInfo_15);
        }
#line 88 "disj_gen.m"
        {
#line 88 "disj_gen.m"
          ll_backend__disj_gen__AddRegionOps_21 = ll_backend__code_info__should_add_region_ops_2_f_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_23, ll_backend__disj_gen__GoalInfo_15);
        }
#line 90 "disj_gen.m"
        ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__CodeModel_7 == (MR_Integer) 2);
#line 90 "disj_gen.m"
        if (ll_backend__disj_gen__succeeded)
#line 91 "disj_gen.m"
          {
#line 91 "disj_gen.m"
            ll_backend__disj_gen__succeeded = ll_backend__disj_gen__is_lookup_disj_8_p_0(ll_backend__disj_gen__AddTrailOps_20, ll_backend__disj_gen__AddRegionOps_21, ll_backend__disj_gen__ResumeVars_19, ll_backend__disj_gen__Goals_8, ll_backend__disj_gen__DisjGoalInfo_9, &ll_backend__disj_gen__LookupDisjInfo_22, ll_backend__disj_gen__STATE_VARIABLE_CI_0_23, &ll_backend__disj_gen__STATE_VARIABLE_CI_25_25);
          }
#line 95 "disj_gen.m"
        if (ll_backend__disj_gen__succeeded)
#line 94 "disj_gen.m"
          {
#line 94 "disj_gen.m"
            ll_backend__disj_gen__generate_lookup_disj_5_p_0(ll_backend__disj_gen__ResumeVars_19, ll_backend__disj_gen__LookupDisjInfo_22, ll_backend__disj_gen__Code_10, ll_backend__disj_gen__STATE_VARIABLE_CI_25_25, ll_backend__disj_gen__STATE_VARIABLE_CI_24);
#line 94 "disj_gen.m"
            return;
          }
#line 95 "disj_gen.m"
        else
#line 96 "disj_gen.m"
          {
#line 96 "disj_gen.m"
            ll_backend__disj_gen__generate_real_disj_9_p_0(ll_backend__disj_gen__AddTrailOps_20, ll_backend__disj_gen__AddRegionOps_21, ll_backend__disj_gen__CodeModel_7, ll_backend__disj_gen__ResumeVars_19, ll_backend__disj_gen__Goals_8, ll_backend__disj_gen__DisjGoalInfo_9, ll_backend__disj_gen__Code_10, ll_backend__disj_gen__STATE_VARIABLE_CI_0_23, ll_backend__disj_gen__STATE_VARIABLE_CI_24);
#line 96 "disj_gen.m"
            return;
          }
#line 77 "disj_gen.m"
      }
#line 66 "disj_gen.m"
  }
#line 32 "disj_gen.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.disj_gen. */
