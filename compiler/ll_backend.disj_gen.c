/*
** Automatically generated from `disj_gen.m'
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




#line 159 "ll_backend.disj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__disj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

#line 162 "ll_backend.disj_gen.c"
static const MR_DuFunctorDesc ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_0;

#line 165 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0;

#line 168 "ll_backend.disj_gen.c"
static const MR_PseudoTypeInfo ll_backend__disj_gen__ll_backend__disj_gen__field_types_commit_disj_region_cleanup_0_1[2];

#line 171 "ll_backend.disj_gen.c"
static const MR_ConstString ll_backend__disj_gen__ll_backend__disj_gen__field_names_commit_disj_region_cleanup_0_1[2];

#line 174 "ll_backend.disj_gen.c"
static const MR_DuFunctorDesc ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_1;

#line 177 "ll_backend.disj_gen.c"
static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_0[1];

#line 180 "ll_backend.disj_gen.c"
static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_1[1];

#line 183 "ll_backend.disj_gen.c"
static const MR_DuPtagLayout ll_backend__disj_gen__ll_backend__disj_gen__du_ptag_ordered_commit_disj_region_cleanup_0[2];

#line 186 "ll_backend.disj_gen.c"
static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_name_ordered_commit_disj_region_cleanup_0[2];

#line 189 "ll_backend.disj_gen.c"
static const MR_Integer ll_backend__disj_gen__ll_backend__disj_gen__functor_number_map_commit_disj_region_cleanup_0[2];

#line 192 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 195 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 198 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__disj_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0;

#line 201 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__maybe__ti_maybe_1ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0;

#line 204 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 207 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 210 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__disj_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 213 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0;

#line 216 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0;

#line 219 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1list__ti_list_1ll_backend__llds__type_ctor_info_rval_0;

#line 222 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0;

#line 225 "ll_backend.disj_gen.c"
static const MR_PseudoTypeInfo ll_backend__disj_gen__ll_backend__disj_gen__field_types_lookup_disj_info_0_0[15];

#line 228 "ll_backend.disj_gen.c"
static const MR_ConstString ll_backend__disj_gen__ll_backend__disj_gen__field_names_lookup_disj_info_0_0[15];

#line 231 "ll_backend.disj_gen.c"
static const MR_DuFunctorDesc ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_lookup_disj_info_0_0;

#line 234 "ll_backend.disj_gen.c"
static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_lookup_disj_info_0_0[1];

#line 237 "ll_backend.disj_gen.c"
static const MR_DuPtagLayout ll_backend__disj_gen__ll_backend__disj_gen__du_ptag_ordered_lookup_disj_info_0[1];

#line 240 "ll_backend.disj_gen.c"
static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_name_ordered_lookup_disj_info_0[1];

#line 243 "ll_backend.disj_gen.c"
static const MR_Integer ll_backend__disj_gen__ll_backend__disj_gen__functor_number_map_lookup_disj_info_0[1];

#line 246 "ll_backend.disj_gen.c"
static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0_10001(
#line 249 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_1,
#line 251 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_2);

#line 254 "ll_backend.disj_gen.c"
static void MR_CALL 
ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0_10001(
#line 257 "ll_backend.disj_gen.c"
  MR_Box * ll_backend__disj_gen__wrapper_arg_1,
#line 259 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_2,
#line 261 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_3);

#line 264 "ll_backend.disj_gen.c"
static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____lookup_disj_info_0_0_10001(
#line 267 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_1,
#line 269 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_2);

#line 272 "ll_backend.disj_gen.c"
static void MR_CALL 
ll_backend__disj_gen____Compare____lookup_disj_info_0_0_10001(
#line 275 "ll_backend.disj_gen.c"
  MR_Box * ll_backend__disj_gen__wrapper_arg_1,
#line 277 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_2,
#line 279 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_3);

#line 714 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_9_p_0(
#line 714 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjRegionOps_10,
#line 714 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__BeforeEnterCode_12,
#line 714 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__LaterCode_13,
#line 714 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__LastCode_14,
#line 714 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_38,
#line 714 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_39,
#line 714 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_40,
#line 714 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_41);

#line 556 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__556__1_2_p_0(
#line 556 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HpSlot_76,
#line 556 "disj_gen.m"
  MR_Word ll_backend__disj_gen__BranchHpSlot_79);

#line 554 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__554__1_2_p_0(
#line 554 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HpCodeInstrs_81,
#line 554 "disj_gen.m"
  MR_Word ll_backend__disj_gen__BranchHpCodeInstrs_82);

#line 111 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen____Compare____lookup_disj_info_0_0(
#line 111 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__HeadVar__1_1,
#line 111 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__2_2,
#line 111 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__3_3);

#line 111 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____lookup_disj_info_0_0(
#line 111 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__1_1,
#line 111 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__2_2);

#line 707 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0(
#line 707 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__HeadVar__1_1,
#line 707 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__2_2,
#line 707 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__3_3);

#line 707 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0(
#line 707 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__1_1,
#line 707 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__2_2);

#line 935 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__disj_alloc_snapshot_regions_8_p_0(
#line 935 "disj_gen.m"
  MR_Word ll_backend__disj_gen__NumLval_1,
#line 935 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddrLval_2,
#line 935 "disj_gen.m"
  MR_Word ll_backend__disj_gen__EmbeddedStackFrame_3,
#line 935 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__4_4,
#line 935 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__HeadVar__5_5,
#line 935 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__6_6,
#line 935 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_7,
#line 935 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_8);

#line 917 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__disj_protect_regions_8_p_0(
#line 917 "disj_gen.m"
  MR_Word ll_backend__disj_gen__NumLval_1,
#line 917 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddrLval_2,
#line 917 "disj_gen.m"
  MR_Word ll_backend__disj_gen__EmbeddedStackFrame_3,
#line 917 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__4_4,
#line 917 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__HeadVar__5_5,
#line 917 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__6_6,
#line 917 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_7,
#line 917 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_8);

#line 797 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__maybe_create_disj_region_frame_semi_12_p_0(
#line 797 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjRegionOps_13,
#line 797 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjRemovedRegionVars_14,
#line 797 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjAllocRegionVars_15,
#line 797 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__BeforeEnterCode_16,
#line 797 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__LaterCode_17,
#line 797 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__LastCode_18,
#line 797 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__StackVars_19,
#line 797 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__RegionCommitDisjCleanup_20,
#line 797 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_49,
#line 797 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_50,
#line 797 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_51,
#line 797 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_52);

#line 556 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0_2(
#line 556 "disj_gen.m"
  MR_Box ll_backend__disj_gen__closure_arg);

#line 554 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0_1(
#line 554 "disj_gen.m"
  MR_Box ll_backend__disj_gen__closure_arg);

#line 476 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0(
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__1_1,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__CodeModel_2,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__FullResumeMap_3,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__MaybeEntryResumePoint_4,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HijackInfo_5,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjGoalInfo_6,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__RegionCommitDisjCleanup_7,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__EndLabel_8,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__ReclaimHeap_9,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__MaybeHpSlot0_10,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__MaybeTicketSlot_11,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__LaterRegionCode_12,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__LastRegionCode_13,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__BranchStart0_14,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__MaybeEnd0_15,
#line 476 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__MaybeEnd_16,
#line 476 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__Code_17,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_18,
#line 476 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_19);

#line 356 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__generate_real_disj_11_p_0(
#line 356 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddTrailOps_12,
#line 356 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddRegionOps_13,
#line 356 "disj_gen.m"
  MR_Word ll_backend__disj_gen__CodeModel_14,
#line 356 "disj_gen.m"
  MR_Word ll_backend__disj_gen__ResumeVars_15,
#line 356 "disj_gen.m"
  MR_Word ll_backend__disj_gen__Goals_16,
#line 356 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjGoalInfo_17,
#line 356 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__Code_18,
#line 356 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_49,
#line 356 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_50,
#line 356 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_51,
#line 356 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_52);

#line 211 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__generate_lookup_disj_7_p_0(
#line 211 "disj_gen.m"
  MR_Word ll_backend__disj_gen__ResumeVars_8,
#line 211 "disj_gen.m"
  MR_Word ll_backend__disj_gen__LookupDisjInfo_9,
#line 211 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__Code_10,
#line 211 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_61,
#line 211 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_62,
#line 211 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_63,
#line 211 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_64);

#line 138 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen__is_lookup_disj_10_p_0(
#line 138 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddTrailOps_11,
#line 138 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddRegionOps_12,
#line 138 "disj_gen.m"
  MR_Word ll_backend__disj_gen__ResumeVars_13,
#line 138 "disj_gen.m"
  MR_Word ll_backend__disj_gen__Disjuncts_14,
#line 138 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjGoalInfo_15,
#line 138 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__LookupDisjInfo_16,
#line 138 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_52,
#line 138 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_53,
#line 138 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_54,
#line 138 "disj_gen.m"
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



#line 678 "ll_backend.disj_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__disj_gen__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 686 "ll_backend.disj_gen.c"
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

#line 701 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 709 "ll_backend.disj_gen.c"
static const MR_PseudoTypeInfo ll_backend__disj_gen__ll_backend__disj_gen__field_types_commit_disj_region_cleanup_0_1[2] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__disj_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0
};

#line 715 "ll_backend.disj_gen.c"
static const MR_ConstString ll_backend__disj_gen__ll_backend__disj_gen__field_names_commit_disj_region_cleanup_0_1[2] = {
  (MR_String) "cleanup_label",
  (MR_String) "cleanup_code"
};

#line 721 "ll_backend.disj_gen.c"
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

#line 736 "ll_backend.disj_gen.c"
static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_0[1] = {
  &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_0
};

#line 741 "ll_backend.disj_gen.c"
static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_commit_disj_region_cleanup_0_1[1] = {
  &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_1
};

#line 746 "ll_backend.disj_gen.c"
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

#line 760 "ll_backend.disj_gen.c"
static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_name_ordered_commit_disj_region_cleanup_0[2] = {
  &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_1,
  &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_commit_disj_region_cleanup_0_0
};

#line 766 "ll_backend.disj_gen.c"
static const MR_Integer ll_backend__disj_gen__ll_backend__disj_gen__functor_number_map_commit_disj_region_cleanup_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 772 "ll_backend.disj_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__disj_gen__ll_backend__disj_gen__type_ctor_info_commit_disj_region_cleanup_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 789 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 797 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 805 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__disj_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0
  }
};

#line 814 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__maybe__ti_maybe_1ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0
  }
};

#line 822 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 830 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 838 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__disj_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__disj_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &ll_backend__disj_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 847 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 855 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

#line 863 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1list__ti_list_1ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0
  }
};

#line 871 "ll_backend.disj_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__disj_gen__list__ti_list_1ll_backend__llds__type_ctor_info_llds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0
  }
};

#line 879 "ll_backend.disj_gen.c"
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

#line 898 "ll_backend.disj_gen.c"
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

#line 917 "ll_backend.disj_gen.c"
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

#line 932 "ll_backend.disj_gen.c"
static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_lookup_disj_info_0_0[1] = {
  &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_lookup_disj_info_0_0
};

#line 937 "ll_backend.disj_gen.c"
static const MR_DuPtagLayout ll_backend__disj_gen__ll_backend__disj_gen__du_ptag_ordered_lookup_disj_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__disj_gen__ll_backend__disj_gen__du_stag_ordered_lookup_disj_info_0_0
  }
};

#line 946 "ll_backend.disj_gen.c"
static const MR_DuFunctorDescPtr ll_backend__disj_gen__ll_backend__disj_gen__du_name_ordered_lookup_disj_info_0[1] = {
  &ll_backend__disj_gen__ll_backend__disj_gen__du_functor_desc_lookup_disj_info_0_0
};

#line 951 "ll_backend.disj_gen.c"
static const MR_Integer ll_backend__disj_gen__ll_backend__disj_gen__functor_number_map_lookup_disj_info_0[1] = {
  (MR_Integer) 0
};

#line 956 "ll_backend.disj_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__disj_gen__ll_backend__disj_gen__type_ctor_info_lookup_disj_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 973 "ll_backend.disj_gen.c"
static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0_10001(
#line 976 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_1,
#line 978 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_2)
#line 980 "ll_backend.disj_gen.c"
{
#line 982 "ll_backend.disj_gen.c"
  {
#line 984 "ll_backend.disj_gen.c"
    MR_bool ll_backend__disj_gen__succeeded;

#line 987 "ll_backend.disj_gen.c"
    {
#line 989 "ll_backend.disj_gen.c"
      ll_backend__disj_gen__succeeded = ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0(((MR_Word) ll_backend__disj_gen__wrapper_arg_1), ((MR_Word) ll_backend__disj_gen__wrapper_arg_2));
    }
#line 992 "ll_backend.disj_gen.c"
    return ll_backend__disj_gen__succeeded;
#line 994 "ll_backend.disj_gen.c"
  }
#line 996 "ll_backend.disj_gen.c"
}

#line 999 "ll_backend.disj_gen.c"
static void MR_CALL 
ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0_10001(
#line 1002 "ll_backend.disj_gen.c"
  MR_Box * ll_backend__disj_gen__wrapper_arg_1,
#line 1004 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_2,
#line 1006 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_3)
#line 1008 "ll_backend.disj_gen.c"
{
#line 1010 "ll_backend.disj_gen.c"
  {
#line 1012 "ll_backend.disj_gen.c"
    MR_Word ll_backend__disj_gen__conv0_HeadVar__1_1;

#line 1015 "ll_backend.disj_gen.c"
    {
#line 1017 "ll_backend.disj_gen.c"
      ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0(&ll_backend__disj_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__disj_gen__wrapper_arg_2), ((MR_Word) ll_backend__disj_gen__wrapper_arg_3));
    }
#line 1020 "ll_backend.disj_gen.c"
    *ll_backend__disj_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__disj_gen__conv0_HeadVar__1_1));
#line 1022 "ll_backend.disj_gen.c"
  }
#line 1024 "ll_backend.disj_gen.c"
}

#line 1027 "ll_backend.disj_gen.c"
static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____lookup_disj_info_0_0_10001(
#line 1030 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_1,
#line 1032 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_2)
#line 1034 "ll_backend.disj_gen.c"
{
#line 1036 "ll_backend.disj_gen.c"
  {
#line 1038 "ll_backend.disj_gen.c"
    MR_bool ll_backend__disj_gen__succeeded;

#line 1041 "ll_backend.disj_gen.c"
    {
#line 1043 "ll_backend.disj_gen.c"
      ll_backend__disj_gen__succeeded = ll_backend__disj_gen____Unify____lookup_disj_info_0_0(((MR_Word) ll_backend__disj_gen__wrapper_arg_1), ((MR_Word) ll_backend__disj_gen__wrapper_arg_2));
    }
#line 1046 "ll_backend.disj_gen.c"
    return ll_backend__disj_gen__succeeded;
#line 1048 "ll_backend.disj_gen.c"
  }
#line 1050 "ll_backend.disj_gen.c"
}

#line 1053 "ll_backend.disj_gen.c"
static void MR_CALL 
ll_backend__disj_gen____Compare____lookup_disj_info_0_0_10001(
#line 1056 "ll_backend.disj_gen.c"
  MR_Box * ll_backend__disj_gen__wrapper_arg_1,
#line 1058 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_2,
#line 1060 "ll_backend.disj_gen.c"
  MR_Box ll_backend__disj_gen__wrapper_arg_3)
#line 1062 "ll_backend.disj_gen.c"
{
#line 1064 "ll_backend.disj_gen.c"
  {
#line 1066 "ll_backend.disj_gen.c"
    MR_Word ll_backend__disj_gen__conv0_HeadVar__1_1;

#line 1069 "ll_backend.disj_gen.c"
    {
#line 1071 "ll_backend.disj_gen.c"
      ll_backend__disj_gen____Compare____lookup_disj_info_0_0(&ll_backend__disj_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__disj_gen__wrapper_arg_2), ((MR_Word) ll_backend__disj_gen__wrapper_arg_3));
    }
#line 1074 "ll_backend.disj_gen.c"
    *ll_backend__disj_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__disj_gen__conv0_HeadVar__1_1));
#line 1076 "ll_backend.disj_gen.c"
  }
#line 1078 "ll_backend.disj_gen.c"
}

#line 714 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_9_p_0(
#line 714 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjRegionOps_10,
#line 714 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__BeforeEnterCode_12,
#line 714 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__LaterCode_13,
#line 714 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__LastCode_14,
#line 714 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_38,
#line 714 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_39,
#line 714 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_40,
#line 714 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_41)
#line 714 "disj_gen.m"
{
#line 721 "disj_gen.m"
  {
#line 721 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;

#line 721 "disj_gen.m"
#line 721 "disj_gen.m"
    switch (ll_backend__disj_gen__DisjRegionOps_10) {
#line 721 "disj_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 721 "disj_gen.m"
      case (MR_Integer) 0:
#line 726 "disj_gen.m"
        {
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__TypeCtorInfo_91_91;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__ForwardLiveVars_17;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__SnapshotRegionVars_19;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__SnapshotRegionVarList_20;
#line 726 "disj_gen.m"
          MR_Integer ll_backend__disj_gen__NumSnapshotRegionVars_21;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__Globals_22;
#line 726 "disj_gen.m"
          MR_Integer ll_backend__disj_gen__FixedSize_23;
#line 726 "disj_gen.m"
          MR_Integer ll_backend__disj_gen__SnapshotSize_24;
#line 726 "disj_gen.m"
          MR_Integer ll_backend__disj_gen__FrameSize_25;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__Items_26;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__MainStackId_28;
#line 726 "disj_gen.m"
          MR_Integer ll_backend__disj_gen__FirstSlotNum_29;
#line 726 "disj_gen.m"
          MR_Integer ll_backend__disj_gen__LastSlotNum_30;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__EmbeddedStackFrame_31;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__FirstNonFixedAddr_32;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__SnapshotNumRegLval_33;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__AddrRegLval_34;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__PushInitCode_35;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__SnapshotRegionCode_36;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__SetCode_37;
#line 726 "disj_gen.m"
          MR_Integer ll_backend__disj_gen__V_44_44;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_48_48;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_50_50;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_52_52;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_53_53;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_54_54;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_55_55;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_58_58;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_59_59;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_60_60;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_65_65;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_66_66;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_67_67;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_70_70;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_71_71;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_72_72;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_74_74;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_76_76;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_78_78;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_79_79;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_80_80;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_83_83;
#line 726 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_84_84;
#line 751 "disj_gen.m"
          MR_Word ll_backend__disj_gen___StackVars_27;

#line 727 "disj_gen.m"
          {
#line 727 "disj_gen.m"
            ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CLD_0_40, &ll_backend__disj_gen__ForwardLiveVars_17);
          }
#line 728 "disj_gen.m"
          {
#line 728 "disj_gen.m"
            ll_backend__disj_gen__SnapshotRegionVars_19 = ll_backend__code_info__filter_region_vars_2_f_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_38, ll_backend__disj_gen__ForwardLiveVars_17);
          }
#line 740 "disj_gen.m"
          {
#line 740 "disj_gen.m"
            ll_backend__disj_gen__SnapshotRegionVarList_20 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__disj_gen__SnapshotRegionVars_19);
          }
#line 741 "disj_gen.m"
          {
#line 741 "disj_gen.m"
            mercury__list__length_2_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[1], ll_backend__disj_gen__SnapshotRegionVarList_20, &ll_backend__disj_gen__NumSnapshotRegionVars_21);
          }
#line 743 "disj_gen.m"
          {
#line 743 "disj_gen.m"
            ll_backend__code_info__get_globals_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_38, &ll_backend__disj_gen__Globals_22);
          }
#line 744 "disj_gen.m"
          {
#line 744 "disj_gen.m"
            libs__globals__lookup_int_option_3_p_0(ll_backend__disj_gen__Globals_22, (MR_Integer) 284, &ll_backend__disj_gen__FixedSize_23);
          }
#line 746 "disj_gen.m"
          {
#line 746 "disj_gen.m"
            libs__globals__lookup_int_option_3_p_0(ll_backend__disj_gen__Globals_22, (MR_Integer) 290, &ll_backend__disj_gen__SnapshotSize_24);
          }
#line 748 "disj_gen.m"
          ll_backend__disj_gen__V_44_44 = (ll_backend__disj_gen__SnapshotSize_24 * ll_backend__disj_gen__NumSnapshotRegionVars_21);
#line 748 "disj_gen.m"
          ll_backend__disj_gen__FrameSize_25 = (ll_backend__disj_gen__FixedSize_23 + ll_backend__disj_gen__V_44_44);
#line 750 "disj_gen.m"
          {
#line 750 "disj_gen.m"
            ll_backend__disj_gen__Items_26 = mercury__list__duplicate_2_f_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0, ll_backend__disj_gen__FrameSize_25, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))));
          }
#line 751 "disj_gen.m"
          {
#line 751 "disj_gen.m"
            ll_backend__code_loc_dep__acquire_several_temp_slots_10_p_0(ll_backend__disj_gen__Items_26, (MR_Integer) 1, &ll_backend__disj_gen___StackVars_27, &ll_backend__disj_gen__MainStackId_28, &ll_backend__disj_gen__FirstSlotNum_29, &ll_backend__disj_gen__LastSlotNum_30, ll_backend__disj_gen__STATE_VARIABLE_CI_0_38, ll_backend__disj_gen__STATE_VARIABLE_CI_39, ll_backend__disj_gen__STATE_VARIABLE_CLD_0_40, &ll_backend__disj_gen__STATE_VARIABLE_CLD_48_48);
          }
#line 753 "disj_gen.m"
          {
#line 753 "disj_gen.m"
            ll_backend__disj_gen__EmbeddedStackFrame_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 753 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__EmbeddedStackFrame_31, 0) = ((MR_Box) (ll_backend__disj_gen__MainStackId_28));
#line 753 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__EmbeddedStackFrame_31, 1) = ((MR_Box) (ll_backend__disj_gen__FirstSlotNum_29));
#line 753 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__EmbeddedStackFrame_31, 2) = ((MR_Box) (ll_backend__disj_gen__LastSlotNum_30));
#line 753 "disj_gen.m"
          }
#line 755 "disj_gen.m"
          {
#line 755 "disj_gen.m"
            ll_backend__disj_gen__FirstNonFixedAddr_32 = ll_backend__llds__first_nonfixed_embedded_slot_addr_2_f_0(ll_backend__disj_gen__EmbeddedStackFrame_31, ll_backend__disj_gen__FixedSize_23);
          }
#line 757 "disj_gen.m"
          {
#line 757 "disj_gen.m"
            ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__disj_gen__SnapshotNumRegLval_33, ll_backend__disj_gen__STATE_VARIABLE_CLD_48_48, &ll_backend__disj_gen__STATE_VARIABLE_CLD_50_50);
          }
#line 758 "disj_gen.m"
          {
#line 758 "disj_gen.m"
            ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__disj_gen__AddrRegLval_34, ll_backend__disj_gen__STATE_VARIABLE_CLD_50_50, &ll_backend__disj_gen__STATE_VARIABLE_CLD_52_52);
          }
#line 1281 "ll_backend.disj_gen.c"
          ll_backend__disj_gen__TypeCtorInfo_91_91 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 761 "disj_gen.m"
          {
#line 761 "disj_gen.m"
            ll_backend__disj_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 761 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 761 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_55_55, 1) = ((MR_Box) ((MR_Integer) 1));
#line 761 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_55_55, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_31));
#line 761 "disj_gen.m"
          }
#line 760 "disj_gen.m"
          {
#line 760 "disj_gen.m"
            ll_backend__disj_gen__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 760 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_54_54, 0) = ((MR_Box) (ll_backend__disj_gen__V_55_55));
#line 760 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_54_54, 1) = ((MR_Box) ((MR_String) "Save stack pointer of embedded region nondet stack"));
#line 760 "disj_gen.m"
          }
#line 764 "disj_gen.m"
          {
#line 764 "disj_gen.m"
            ll_backend__disj_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 764 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 764 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_60_60, 1) = ((MR_Box) (ll_backend__disj_gen__SnapshotNumRegLval_33));
#line 764 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_60_60, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__disj_gen_scalar_common_1[11])));
#line 764 "disj_gen.m"
          }
#line 763 "disj_gen.m"
          {
#line 763 "disj_gen.m"
            ll_backend__disj_gen__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 763 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_59_59, 0) = ((MR_Box) (ll_backend__disj_gen__V_60_60));
#line 763 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_59_59, 1) = ((MR_Box) ((MR_String) "Initialize number of snapshot_infos"));
#line 763 "disj_gen.m"
          }
#line 767 "disj_gen.m"
          {
#line 767 "disj_gen.m"
            ll_backend__disj_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 767 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 767 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_67_67, 1) = ((MR_Box) (ll_backend__disj_gen__AddrRegLval_34));
#line 767 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_67_67, 2) = ((MR_Box) (ll_backend__disj_gen__FirstNonFixedAddr_32));
#line 767 "disj_gen.m"
          }
#line 766 "disj_gen.m"
          {
#line 766 "disj_gen.m"
            ll_backend__disj_gen__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 766 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_66_66, 0) = ((MR_Box) (ll_backend__disj_gen__V_67_67));
#line 766 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_66_66, 1) = ((MR_Box) ((MR_String) "Initialize pointer to nonfixed part of embedded frame"));
#line 766 "disj_gen.m"
          }
#line 769 "disj_gen.m"
          {
#line 769 "disj_gen.m"
            ll_backend__disj_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "disj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_65_65, 0) = ((MR_Box) (ll_backend__disj_gen__V_66_66));
#line 769 "disj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 769 "disj_gen.m"
          }
#line 765 "disj_gen.m"
          {
#line 765 "disj_gen.m"
            ll_backend__disj_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "disj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_58_58, 0) = ((MR_Box) (ll_backend__disj_gen__V_59_59));
#line 765 "disj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_58_58, 1) = ((MR_Box) (ll_backend__disj_gen__V_65_65));
#line 765 "disj_gen.m"
          }
#line 762 "disj_gen.m"
          {
#line 762 "disj_gen.m"
            ll_backend__disj_gen__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "disj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_53_53, 0) = ((MR_Box) (ll_backend__disj_gen__V_54_54));
#line 762 "disj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_53_53, 1) = ((MR_Box) (ll_backend__disj_gen__V_58_58));
#line 762 "disj_gen.m"
          }
#line 759 "disj_gen.m"
          {
#line 759 "disj_gen.m"
            ll_backend__disj_gen__PushInitCode_35 = mercury__cord__from_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_91_91, ll_backend__disj_gen__V_53_53);
          }
#line 770 "disj_gen.m"
          {
#line 770 "disj_gen.m"
            ll_backend__disj_gen__disj_alloc_snapshot_regions_8_p_0(ll_backend__disj_gen__SnapshotNumRegLval_33, ll_backend__disj_gen__AddrRegLval_34, ll_backend__disj_gen__EmbeddedStackFrame_31, ll_backend__disj_gen__SnapshotRegionVarList_20, &ll_backend__disj_gen__SnapshotRegionCode_36, *ll_backend__disj_gen__STATE_VARIABLE_CI_39, ll_backend__disj_gen__STATE_VARIABLE_CLD_52_52, &ll_backend__disj_gen__STATE_VARIABLE_CLD_70_70);
          }
#line 776 "disj_gen.m"
          {
#line 776 "disj_gen.m"
            ll_backend__disj_gen__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 776 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_74_74, 0) = ((MR_Box) (ll_backend__disj_gen__SnapshotNumRegLval_33));
#line 776 "disj_gen.m"
          }
#line 775 "disj_gen.m"
          {
#line 775 "disj_gen.m"
            ll_backend__disj_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 775 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 775 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_72_72, 1) = ((MR_Box) ((MR_Integer) 3));
#line 775 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_72_72, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_31));
#line 775 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_72_72, 3) = ((MR_Box) (ll_backend__disj_gen__V_74_74));
#line 775 "disj_gen.m"
          }
#line 774 "disj_gen.m"
          {
#line 774 "disj_gen.m"
            ll_backend__disj_gen__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 774 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_71_71, 0) = ((MR_Box) (ll_backend__disj_gen__V_72_72));
#line 774 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_71_71, 1) = ((MR_Box) ((MR_String) "Store the number of snapshot_infos"));
#line 774 "disj_gen.m"
          }
#line 773 "disj_gen.m"
          {
#line 773 "disj_gen.m"
            ll_backend__disj_gen__SetCode_37 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_91_91, ((MR_Box) (ll_backend__disj_gen__V_71_71)));
          }
#line 779 "disj_gen.m"
          {
#line 779 "disj_gen.m"
            ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__disj_gen__SnapshotNumRegLval_33, ll_backend__disj_gen__STATE_VARIABLE_CLD_70_70, &ll_backend__disj_gen__STATE_VARIABLE_CLD_76_76);
          }
#line 780 "disj_gen.m"
          {
#line 780 "disj_gen.m"
            ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__disj_gen__AddrRegLval_34, ll_backend__disj_gen__STATE_VARIABLE_CLD_76_76, ll_backend__disj_gen__STATE_VARIABLE_CLD_41);
          }
#line 782 "disj_gen.m"
          {
#line 782 "disj_gen.m"
            ll_backend__disj_gen__V_78_78 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_91_91, ll_backend__disj_gen__SnapshotRegionCode_36, ll_backend__disj_gen__SetCode_37);
          }
#line 782 "disj_gen.m"
          {
#line 782 "disj_gen.m"
            *ll_backend__disj_gen__BeforeEnterCode_12 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_91_91, ll_backend__disj_gen__PushInitCode_35, ll_backend__disj_gen__V_78_78);
          }
#line 785 "disj_gen.m"
          {
#line 785 "disj_gen.m"
            ll_backend__disj_gen__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 785 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 785 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 785 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_80_80, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_31));
#line 785 "disj_gen.m"
          }
#line 784 "disj_gen.m"
          {
#line 784 "disj_gen.m"
            ll_backend__disj_gen__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 784 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_79_79, 0) = ((MR_Box) (ll_backend__disj_gen__V_80_80));
#line 784 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_79_79, 1) = ((MR_Box) ((MR_String) "region enter later disjunct"));
#line 784 "disj_gen.m"
          }
#line 783 "disj_gen.m"
          {
#line 783 "disj_gen.m"
            *ll_backend__disj_gen__LaterCode_13 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_91_91, ((MR_Box) (ll_backend__disj_gen__V_79_79)));
          }
#line 791 "disj_gen.m"
          {
#line 791 "disj_gen.m"
            ll_backend__disj_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 791 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 791 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 791 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_84_84, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_31));
#line 791 "disj_gen.m"
          }
#line 790 "disj_gen.m"
          {
#line 790 "disj_gen.m"
            ll_backend__disj_gen__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 790 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_83_83, 0) = ((MR_Box) (ll_backend__disj_gen__V_84_84));
#line 790 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_83_83, 1) = ((MR_Box) ((MR_String) "region enter last disjunct"));
#line 790 "disj_gen.m"
          }
#line 789 "disj_gen.m"
          {
#line 789 "disj_gen.m"
            *ll_backend__disj_gen__LastCode_14 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_91_91, ((MR_Box) (ll_backend__disj_gen__V_83_83)));
          }
#line 726 "disj_gen.m"
        }
#line 721 "disj_gen.m"
        break;
#line 721 "disj_gen.m"
      case (MR_Integer) 1:
#line 721 "disj_gen.m"
        {
#line 721 "disj_gen.m"
          MR_Word ll_backend__disj_gen__TypeCtorInfo_87_87 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

#line 722 "disj_gen.m"
          {
#line 722 "disj_gen.m"
            *ll_backend__disj_gen__BeforeEnterCode_12 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_87_87);
          }
#line 723 "disj_gen.m"
          {
#line 723 "disj_gen.m"
            *ll_backend__disj_gen__LaterCode_13 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_87_87);
          }
#line 724 "disj_gen.m"
          {
#line 724 "disj_gen.m"
            *ll_backend__disj_gen__LastCode_14 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_87_87);
          }
#line 721 "disj_gen.m"
          *ll_backend__disj_gen__STATE_VARIABLE_CI_39 = ll_backend__disj_gen__STATE_VARIABLE_CI_0_38;
#line 721 "disj_gen.m"
          *ll_backend__disj_gen__STATE_VARIABLE_CLD_41 = ll_backend__disj_gen__STATE_VARIABLE_CLD_0_40;
#line 721 "disj_gen.m"
        }
#line 721 "disj_gen.m"
        break;
#line 721 "disj_gen.m"
    }
#line 721 "disj_gen.m"
  }
#line 714 "disj_gen.m"
}

#line 556 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__556__1_2_p_0(
#line 556 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HpSlot_76,
#line 556 "disj_gen.m"
  MR_Word ll_backend__disj_gen__BranchHpSlot_79)
#line 556 "disj_gen.m"
{
#line 556 "disj_gen.m"
  {
#line 556 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;

#line 556 "disj_gen.m"
    {
#line 556 "disj_gen.m"
      ll_backend__disj_gen__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__disj_gen__HpSlot_76, ll_backend__disj_gen__BranchHpSlot_79);
    }
#line 556 "disj_gen.m"
    return ll_backend__disj_gen__succeeded;
#line 556 "disj_gen.m"
  }
#line 556 "disj_gen.m"
}

#line 554 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__554__1_2_p_0(
#line 554 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HpCodeInstrs_81,
#line 554 "disj_gen.m"
  MR_Word ll_backend__disj_gen__BranchHpCodeInstrs_82)
#line 554 "disj_gen.m"
{
#line 554 "disj_gen.m"
  {
#line 554 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;

#line 554 "disj_gen.m"
    {
#line 554 "disj_gen.m"
      ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[2], ((MR_Box) (ll_backend__disj_gen__HpCodeInstrs_81)), ((MR_Box) (ll_backend__disj_gen__BranchHpCodeInstrs_82)));
    }
#line 554 "disj_gen.m"
    return ll_backend__disj_gen__succeeded;
#line 554 "disj_gen.m"
  }
#line 554 "disj_gen.m"
}

#line 111 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen____Compare____lookup_disj_info_0_0(
#line 111 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__HeadVar__1_1,
#line 111 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__2_2,
#line 111 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__3_3)
#line 111 "disj_gen.m"
{
#line 111 "disj_gen.m"
  {
#line 111 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;
#line 111 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__CastX_48 = (MR_Integer) ll_backend__disj_gen__HeadVar__2_2;
#line 111 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__CastY_49 = (MR_Integer) ll_backend__disj_gen__HeadVar__3_3;

#line 111 "disj_gen.m"
    ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__CastX_48 == ll_backend__disj_gen__CastY_49);
#line 111 "disj_gen.m"
    if (ll_backend__disj_gen__succeeded)
#line 1617 "ll_backend.disj_gen.c"
      *ll_backend__disj_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 111 "disj_gen.m"
    else
#line 111 "disj_gen.m"
      {
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 5)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 6)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 7)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 8)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 9)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 10)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 11)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 12)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 13)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 14)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 2)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 3)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 4)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 5)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 6)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 7)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 8)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 9)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 10)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 11)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 12)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 13)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 14)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_34_34;

#line 111 "disj_gen.m"
        {
#line 111 "disj_gen.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[4], &ll_backend__disj_gen__V_34_34, ((MR_Box) (ll_backend__disj_gen__V_4_4)), ((MR_Box) (ll_backend__disj_gen__V_19_19)));
        }
#line 1691 "ll_backend.disj_gen.c"
        ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_34_34 == (MR_Integer) 0);
#line 111 "disj_gen.m"
        ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 111 "disj_gen.m"
        if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
          *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_34_34;
#line 111 "disj_gen.m"
        else
#line 111 "disj_gen.m"
          {
#line 111 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_35_35;

#line 111 "disj_gen.m"
            {
#line 111 "disj_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_2[0], &ll_backend__disj_gen__V_35_35, ((MR_Box) (ll_backend__disj_gen__V_5_5)), ((MR_Box) (ll_backend__disj_gen__V_20_20)));
            }
#line 1711 "ll_backend.disj_gen.c"
            ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_35_35 == (MR_Integer) 0);
#line 111 "disj_gen.m"
            ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 111 "disj_gen.m"
            if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
              *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_35_35;
#line 111 "disj_gen.m"
            else
#line 111 "disj_gen.m"
              {
#line 111 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_36_36;

#line 111 "disj_gen.m"
                {
#line 111 "disj_gen.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[5], &ll_backend__disj_gen__V_36_36, ((MR_Box) (ll_backend__disj_gen__V_6_6)), ((MR_Box) (ll_backend__disj_gen__V_21_21)));
                }
#line 1731 "ll_backend.disj_gen.c"
                ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_36_36 == (MR_Integer) 0);
#line 111 "disj_gen.m"
                ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 111 "disj_gen.m"
                if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                  *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_36_36;
#line 111 "disj_gen.m"
                else
#line 111 "disj_gen.m"
                  {
#line 111 "disj_gen.m"
                    MR_Word ll_backend__disj_gen__V_37_37;

#line 111 "disj_gen.m"
                    {
#line 111 "disj_gen.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[6], &ll_backend__disj_gen__V_37_37, ((MR_Box) (ll_backend__disj_gen__V_7_7)), ((MR_Box) (ll_backend__disj_gen__V_22_22)));
                    }
#line 1751 "ll_backend.disj_gen.c"
                    ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_37_37 == (MR_Integer) 0);
#line 111 "disj_gen.m"
                    ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 111 "disj_gen.m"
                    if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                      *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_37_37;
#line 111 "disj_gen.m"
                    else
#line 111 "disj_gen.m"
                      {
#line 111 "disj_gen.m"
                        MR_Word ll_backend__disj_gen__V_38_38;

#line 111 "disj_gen.m"
                        {
#line 111 "disj_gen.m"
                          ll_backend__llds____Compare____lval_0_0(&ll_backend__disj_gen__V_38_38, ll_backend__disj_gen__V_8_8, ll_backend__disj_gen__V_23_23);
                        }
#line 1771 "ll_backend.disj_gen.c"
                        ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_38_38 == (MR_Integer) 0);
#line 111 "disj_gen.m"
                        ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 111 "disj_gen.m"
                        if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                          *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_38_38;
#line 111 "disj_gen.m"
                        else
#line 111 "disj_gen.m"
                          {
#line 111 "disj_gen.m"
                            MR_Word ll_backend__disj_gen__V_39_39;

#line 111 "disj_gen.m"
                            {
#line 111 "disj_gen.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_2[1], &ll_backend__disj_gen__V_39_39, ((MR_Box) (ll_backend__disj_gen__V_9_9)), ((MR_Box) (ll_backend__disj_gen__V_24_24)));
                            }
#line 1791 "ll_backend.disj_gen.c"
                            ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_39_39 == (MR_Integer) 0);
#line 111 "disj_gen.m"
                            ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 111 "disj_gen.m"
                            if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                              *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_39_39;
#line 111 "disj_gen.m"
                            else
#line 111 "disj_gen.m"
                              {
#line 111 "disj_gen.m"
                                MR_Word ll_backend__disj_gen__V_40_40;

#line 111 "disj_gen.m"
                                {
#line 111 "disj_gen.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[3], &ll_backend__disj_gen__V_40_40, ((MR_Box) (ll_backend__disj_gen__V_10_10)), ((MR_Box) (ll_backend__disj_gen__V_25_25)));
                                }
#line 1811 "ll_backend.disj_gen.c"
                                ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_40_40 == (MR_Integer) 0);
#line 111 "disj_gen.m"
                                ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 111 "disj_gen.m"
                                if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                                  *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_40_40;
#line 111 "disj_gen.m"
                                else
#line 111 "disj_gen.m"
                                  {
#line 111 "disj_gen.m"
                                    MR_Word ll_backend__disj_gen__V_41_41;

#line 111 "disj_gen.m"
                                    {
#line 111 "disj_gen.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[3], &ll_backend__disj_gen__V_41_41, ((MR_Box) (ll_backend__disj_gen__V_11_11)), ((MR_Box) (ll_backend__disj_gen__V_26_26)));
                                    }
#line 1831 "ll_backend.disj_gen.c"
                                    ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_41_41 == (MR_Integer) 0);
#line 111 "disj_gen.m"
                                    ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 111 "disj_gen.m"
                                    if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                                      *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_41_41;
#line 111 "disj_gen.m"
                                    else
#line 111 "disj_gen.m"
                                      {
#line 111 "disj_gen.m"
                                        MR_Word ll_backend__disj_gen__V_42_42;

#line 111 "disj_gen.m"
                                        {
#line 111 "disj_gen.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[8], &ll_backend__disj_gen__V_42_42, ((MR_Box) (ll_backend__disj_gen__V_12_12)), ((MR_Box) (ll_backend__disj_gen__V_27_27)));
                                        }
#line 1851 "ll_backend.disj_gen.c"
                                        ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_42_42 == (MR_Integer) 0);
#line 111 "disj_gen.m"
                                        ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 111 "disj_gen.m"
                                        if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                                          *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_42_42;
#line 111 "disj_gen.m"
                                        else
#line 111 "disj_gen.m"
                                          {
#line 111 "disj_gen.m"
                                            MR_Word ll_backend__disj_gen__V_43_43;

#line 111 "disj_gen.m"
                                            {
#line 111 "disj_gen.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[3], &ll_backend__disj_gen__V_43_43, ((MR_Box) (ll_backend__disj_gen__V_13_13)), ((MR_Box) (ll_backend__disj_gen__V_28_28)));
                                            }
#line 1871 "ll_backend.disj_gen.c"
                                            ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_43_43 == (MR_Integer) 0);
#line 111 "disj_gen.m"
                                            ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 111 "disj_gen.m"
                                            if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                                              *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_43_43;
#line 111 "disj_gen.m"
                                            else
#line 111 "disj_gen.m"
                                              {
#line 111 "disj_gen.m"
                                                MR_Word ll_backend__disj_gen__V_44_44;

#line 111 "disj_gen.m"
                                                {
#line 111 "disj_gen.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[8], &ll_backend__disj_gen__V_44_44, ((MR_Box) (ll_backend__disj_gen__V_14_14)), ((MR_Box) (ll_backend__disj_gen__V_29_29)));
                                                }
#line 1891 "ll_backend.disj_gen.c"
                                                ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_44_44 == (MR_Integer) 0);
#line 111 "disj_gen.m"
                                                ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 111 "disj_gen.m"
                                                if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                                                  *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_44_44;
#line 111 "disj_gen.m"
                                                else
#line 111 "disj_gen.m"
                                                  {
#line 111 "disj_gen.m"
                                                    MR_Word ll_backend__disj_gen__V_45_45;

#line 111 "disj_gen.m"
                                                    {
#line 111 "disj_gen.m"
                                                      ll_backend__code_loc_dep____Compare____disj_hijack_info_0_0(&ll_backend__disj_gen__V_45_45, ll_backend__disj_gen__V_15_15, ll_backend__disj_gen__V_30_30);
                                                    }
#line 1911 "ll_backend.disj_gen.c"
                                                    ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_45_45 == (MR_Integer) 0);
#line 111 "disj_gen.m"
                                                    ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 111 "disj_gen.m"
                                                    if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                                                      *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_45_45;
#line 111 "disj_gen.m"
                                                    else
#line 111 "disj_gen.m"
                                                      {
#line 111 "disj_gen.m"
                                                        MR_Word ll_backend__disj_gen__V_46_46;

#line 111 "disj_gen.m"
                                                        {
#line 111 "disj_gen.m"
                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[3], &ll_backend__disj_gen__V_46_46, ((MR_Box) (ll_backend__disj_gen__V_16_16)), ((MR_Box) (ll_backend__disj_gen__V_31_31)));
                                                        }
#line 1931 "ll_backend.disj_gen.c"
                                                        ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_46_46 == (MR_Integer) 0);
#line 111 "disj_gen.m"
                                                        ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 111 "disj_gen.m"
                                                        if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                                                          *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_46_46;
#line 111 "disj_gen.m"
                                                        else
#line 111 "disj_gen.m"
                                                          {
#line 111 "disj_gen.m"
                                                            MR_Word ll_backend__disj_gen__V_47_47;

#line 111 "disj_gen.m"
                                                            {
#line 111 "disj_gen.m"
                                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[9], &ll_backend__disj_gen__V_47_47, ((MR_Box) (ll_backend__disj_gen__V_17_17)), ((MR_Box) (ll_backend__disj_gen__V_32_32)));
                                                            }
#line 1951 "ll_backend.disj_gen.c"
                                                            ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_47_47 == (MR_Integer) 0);
#line 111 "disj_gen.m"
                                                            ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 111 "disj_gen.m"
                                                            if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                                                              *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_47_47;
#line 111 "disj_gen.m"
                                                            else
#line 111 "disj_gen.m"
                                                              {
#line 111 "disj_gen.m"
                                                                {
#line 111 "disj_gen.m"
                                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[10], ll_backend__disj_gen__HeadVar__1_1, ((MR_Box) (ll_backend__disj_gen__V_18_18)), ((MR_Box) (ll_backend__disj_gen__V_33_33)));
                                                                }
#line 111 "disj_gen.m"
                                                              }
#line 111 "disj_gen.m"
                                                          }
#line 111 "disj_gen.m"
                                                      }
#line 111 "disj_gen.m"
                                                  }
#line 111 "disj_gen.m"
                                              }
#line 111 "disj_gen.m"
                                          }
#line 111 "disj_gen.m"
                                      }
#line 111 "disj_gen.m"
                                  }
#line 111 "disj_gen.m"
                              }
#line 111 "disj_gen.m"
                          }
#line 111 "disj_gen.m"
                      }
#line 111 "disj_gen.m"
                  }
#line 111 "disj_gen.m"
              }
#line 111 "disj_gen.m"
          }
#line 111 "disj_gen.m"
      }
#line 111 "disj_gen.m"
  }
#line 111 "disj_gen.m"
}

#line 111 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____lookup_disj_info_0_0(
#line 111 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__1_1,
#line 111 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__2_2)
#line 111 "disj_gen.m"
{
#line 111 "disj_gen.m"
  {
#line 111 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;
#line 111 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__CastX_33 = (MR_Integer) ll_backend__disj_gen__HeadVar__1_1;
#line 111 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__CastY_34 = (MR_Integer) ll_backend__disj_gen__HeadVar__2_2;

#line 111 "disj_gen.m"
    ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__CastX_33 == ll_backend__disj_gen__CastY_34);
#line 111 "disj_gen.m"
    if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
      ll_backend__disj_gen__succeeded = MR_TRUE;
#line 111 "disj_gen.m"
    else
#line 111 "disj_gen.m"
      {
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_36_36;
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_37_37;
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_38_38;
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_40_40;
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_41_41;
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_42_42;
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_43_43;
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_44_44;
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_45_45;
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_47_47;
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_48_48;
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_49_49;
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 4)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 5)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 6)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 7)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 8)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 9)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 10)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 11)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 12)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 13)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 14)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 5)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 6)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 7)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 8)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 9)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 10)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 11)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 12)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 13)));
#line 111 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 14)));

#line 2116 "ll_backend.disj_gen.c"
        {
#line 2118 "ll_backend.disj_gen.c"
          ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[4], ((MR_Box) (ll_backend__disj_gen__V_3_3)), ((MR_Box) (ll_backend__disj_gen__V_18_18)));
        }
#line 111 "disj_gen.m"
        if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
          {
#line 2125 "ll_backend.disj_gen.c"
            ll_backend__disj_gen__TypeInfo_36_36 = (MR_Word) &ll_backend__disj_gen_scalar_common_2[0];
#line 2127 "ll_backend.disj_gen.c"
            {
#line 2129 "ll_backend.disj_gen.c"
              ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_36_36, ((MR_Box) (ll_backend__disj_gen__V_4_4)), ((MR_Box) (ll_backend__disj_gen__V_19_19)));
            }
#line 111 "disj_gen.m"
            if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
              {
#line 2136 "ll_backend.disj_gen.c"
                ll_backend__disj_gen__TypeInfo_37_37 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[5];
#line 2138 "ll_backend.disj_gen.c"
                {
#line 2140 "ll_backend.disj_gen.c"
                  ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_37_37, ((MR_Box) (ll_backend__disj_gen__V_5_5)), ((MR_Box) (ll_backend__disj_gen__V_20_20)));
                }
#line 111 "disj_gen.m"
                if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                  {
#line 2147 "ll_backend.disj_gen.c"
                    ll_backend__disj_gen__TypeInfo_38_38 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[6];
#line 2149 "ll_backend.disj_gen.c"
                    {
#line 2151 "ll_backend.disj_gen.c"
                      ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_38_38, ((MR_Box) (ll_backend__disj_gen__V_6_6)), ((MR_Box) (ll_backend__disj_gen__V_21_21)));
                    }
#line 111 "disj_gen.m"
                    if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                      {
#line 2158 "ll_backend.disj_gen.c"
                        {
#line 2160 "ll_backend.disj_gen.c"
                          ll_backend__disj_gen__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__disj_gen__V_7_7, ll_backend__disj_gen__V_22_22);
                        }
#line 111 "disj_gen.m"
                        if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                          {
#line 2167 "ll_backend.disj_gen.c"
                            ll_backend__disj_gen__TypeInfo_40_40 = (MR_Word) &ll_backend__disj_gen_scalar_common_2[1];
#line 2169 "ll_backend.disj_gen.c"
                            {
#line 2171 "ll_backend.disj_gen.c"
                              ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_40_40, ((MR_Box) (ll_backend__disj_gen__V_8_8)), ((MR_Box) (ll_backend__disj_gen__V_23_23)));
                            }
#line 111 "disj_gen.m"
                            if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                              {
#line 2178 "ll_backend.disj_gen.c"
                                ll_backend__disj_gen__TypeInfo_41_41 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[3];
#line 2180 "ll_backend.disj_gen.c"
                                {
#line 2182 "ll_backend.disj_gen.c"
                                  ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_41_41, ((MR_Box) (ll_backend__disj_gen__V_9_9)), ((MR_Box) (ll_backend__disj_gen__V_24_24)));
                                }
#line 111 "disj_gen.m"
                                if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                                  {
#line 2189 "ll_backend.disj_gen.c"
                                    ll_backend__disj_gen__TypeInfo_42_42 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[3];
#line 2191 "ll_backend.disj_gen.c"
                                    {
#line 2193 "ll_backend.disj_gen.c"
                                      ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_42_42, ((MR_Box) (ll_backend__disj_gen__V_10_10)), ((MR_Box) (ll_backend__disj_gen__V_25_25)));
                                    }
#line 111 "disj_gen.m"
                                    if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                                      {
#line 2200 "ll_backend.disj_gen.c"
                                        ll_backend__disj_gen__TypeInfo_43_43 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[8];
#line 2202 "ll_backend.disj_gen.c"
                                        {
#line 2204 "ll_backend.disj_gen.c"
                                          ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_43_43, ((MR_Box) (ll_backend__disj_gen__V_11_11)), ((MR_Box) (ll_backend__disj_gen__V_26_26)));
                                        }
#line 111 "disj_gen.m"
                                        if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                                          {
#line 2211 "ll_backend.disj_gen.c"
                                            ll_backend__disj_gen__TypeInfo_44_44 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[3];
#line 2213 "ll_backend.disj_gen.c"
                                            {
#line 2215 "ll_backend.disj_gen.c"
                                              ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_44_44, ((MR_Box) (ll_backend__disj_gen__V_12_12)), ((MR_Box) (ll_backend__disj_gen__V_27_27)));
                                            }
#line 111 "disj_gen.m"
                                            if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                                              {
#line 2222 "ll_backend.disj_gen.c"
                                                ll_backend__disj_gen__TypeInfo_45_45 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[8];
#line 2224 "ll_backend.disj_gen.c"
                                                {
#line 2226 "ll_backend.disj_gen.c"
                                                  ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_45_45, ((MR_Box) (ll_backend__disj_gen__V_13_13)), ((MR_Box) (ll_backend__disj_gen__V_28_28)));
                                                }
#line 111 "disj_gen.m"
                                                if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                                                  {
#line 2233 "ll_backend.disj_gen.c"
                                                    {
#line 2235 "ll_backend.disj_gen.c"
                                                      ll_backend__disj_gen__succeeded = ll_backend__code_loc_dep____Unify____disj_hijack_info_0_0(ll_backend__disj_gen__V_14_14, ll_backend__disj_gen__V_29_29);
                                                    }
#line 111 "disj_gen.m"
                                                    if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                                                      {
#line 2242 "ll_backend.disj_gen.c"
                                                        ll_backend__disj_gen__TypeInfo_47_47 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[3];
#line 2244 "ll_backend.disj_gen.c"
                                                        {
#line 2246 "ll_backend.disj_gen.c"
                                                          ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_47_47, ((MR_Box) (ll_backend__disj_gen__V_15_15)), ((MR_Box) (ll_backend__disj_gen__V_30_30)));
                                                        }
#line 111 "disj_gen.m"
                                                        if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                                                          {
#line 2253 "ll_backend.disj_gen.c"
                                                            ll_backend__disj_gen__TypeInfo_48_48 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[9];
#line 2255 "ll_backend.disj_gen.c"
                                                            {
#line 2257 "ll_backend.disj_gen.c"
                                                              ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_48_48, ((MR_Box) (ll_backend__disj_gen__V_16_16)), ((MR_Box) (ll_backend__disj_gen__V_31_31)));
                                                            }
#line 111 "disj_gen.m"
                                                            if (ll_backend__disj_gen__succeeded)
#line 111 "disj_gen.m"
                                                              {
#line 2264 "ll_backend.disj_gen.c"
                                                                ll_backend__disj_gen__TypeInfo_49_49 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[10];
#line 2266 "ll_backend.disj_gen.c"
                                                                {
#line 2268 "ll_backend.disj_gen.c"
                                                                  ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_49_49, ((MR_Box) (ll_backend__disj_gen__V_17_17)), ((MR_Box) (ll_backend__disj_gen__V_32_32)));
                                                                }
#line 111 "disj_gen.m"
                                                              }
#line 111 "disj_gen.m"
                                                          }
#line 111 "disj_gen.m"
                                                      }
#line 111 "disj_gen.m"
                                                  }
#line 111 "disj_gen.m"
                                              }
#line 111 "disj_gen.m"
                                          }
#line 111 "disj_gen.m"
                                      }
#line 111 "disj_gen.m"
                                  }
#line 111 "disj_gen.m"
                              }
#line 111 "disj_gen.m"
                          }
#line 111 "disj_gen.m"
                      }
#line 111 "disj_gen.m"
                  }
#line 111 "disj_gen.m"
              }
#line 111 "disj_gen.m"
          }
#line 111 "disj_gen.m"
      }
#line 111 "disj_gen.m"
    return ll_backend__disj_gen__succeeded;
#line 111 "disj_gen.m"
  }
#line 111 "disj_gen.m"
}

#line 707 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen____Compare____commit_disj_region_cleanup_0_0(
#line 707 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__HeadVar__1_1,
#line 707 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__2_2,
#line 707 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__3_3)
#line 707 "disj_gen.m"
{
#line 707 "disj_gen.m"
  {
#line 707 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;
#line 707 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__CastX_13 = (MR_Integer) ll_backend__disj_gen__HeadVar__2_2;
#line 707 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__CastY_14 = (MR_Integer) ll_backend__disj_gen__HeadVar__3_3;

#line 707 "disj_gen.m"
    ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__CastX_13 == ll_backend__disj_gen__CastY_14);
#line 707 "disj_gen.m"
    if (ll_backend__disj_gen__succeeded)
#line 2332 "ll_backend.disj_gen.c"
      *ll_backend__disj_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 707 "disj_gen.m"
    else
#line 707 "disj_gen.m"
    if ((ll_backend__disj_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 707 "disj_gen.m"
      if ((ll_backend__disj_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 707 "disj_gen.m"
        *ll_backend__disj_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 707 "disj_gen.m"
      else
#line 2344 "ll_backend.disj_gen.c"
        *ll_backend__disj_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 707 "disj_gen.m"
    else
#line 707 "disj_gen.m"
      {
#line 707 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 707 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 0)));

#line 707 "disj_gen.m"
        if ((ll_backend__disj_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2357 "ll_backend.disj_gen.c"
          *ll_backend__disj_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 707 "disj_gen.m"
        else
#line 707 "disj_gen.m"
          {
#line 707 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 707 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 707 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_12_12;

#line 707 "disj_gen.m"
            {
#line 707 "disj_gen.m"
              ll_backend__llds____Compare____label_0_0(&ll_backend__disj_gen__V_12_12, ll_backend__disj_gen__V_18_18, ll_backend__disj_gen__V_10_10);
            }
#line 2375 "ll_backend.disj_gen.c"
            ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__V_12_12 == (MR_Integer) 0);
#line 707 "disj_gen.m"
            ll_backend__disj_gen__succeeded = !(ll_backend__disj_gen__succeeded);
#line 707 "disj_gen.m"
            if (ll_backend__disj_gen__succeeded)
#line 707 "disj_gen.m"
              *ll_backend__disj_gen__HeadVar__1_1 = ll_backend__disj_gen__V_12_12;
#line 707 "disj_gen.m"
            else
#line 707 "disj_gen.m"
              {
#line 707 "disj_gen.m"
                {
#line 707 "disj_gen.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[3], ll_backend__disj_gen__HeadVar__1_1, ((MR_Box) (ll_backend__disj_gen__V_17_17)), ((MR_Box) (ll_backend__disj_gen__V_11_11)));
                }
#line 707 "disj_gen.m"
              }
#line 707 "disj_gen.m"
          }
#line 707 "disj_gen.m"
      }
#line 707 "disj_gen.m"
  }
#line 707 "disj_gen.m"
}

#line 707 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen____Unify____commit_disj_region_cleanup_0_0(
#line 707 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__1_1,
#line 707 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__2_2)
#line 707 "disj_gen.m"
{
#line 707 "disj_gen.m"
  {
#line 707 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;
#line 707 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__CastX_9 = (MR_Integer) ll_backend__disj_gen__HeadVar__1_1;
#line 707 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__CastY_10 = (MR_Integer) ll_backend__disj_gen__HeadVar__2_2;

#line 707 "disj_gen.m"
    ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__CastX_9 == ll_backend__disj_gen__CastY_10);
#line 707 "disj_gen.m"
    if (ll_backend__disj_gen__succeeded)
#line 707 "disj_gen.m"
      ll_backend__disj_gen__succeeded = MR_TRUE;
#line 707 "disj_gen.m"
    else
#line 707 "disj_gen.m"
    if ((ll_backend__disj_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 707 "disj_gen.m"
      {
#line 707 "disj_gen.m"
        MR_Integer ll_backend__disj_gen__CastX_3 = (MR_Integer) ll_backend__disj_gen__HeadVar__1_1;
#line 707 "disj_gen.m"
        MR_Integer ll_backend__disj_gen__CastY_4 = (MR_Integer) ll_backend__disj_gen__HeadVar__2_2;

#line 707 "disj_gen.m"
        ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__CastY_4 == ll_backend__disj_gen__CastX_3);
#line 707 "disj_gen.m"
      }
#line 707 "disj_gen.m"
    else
#line 707 "disj_gen.m"
      {
#line 707 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeInfo_12_12;
#line 707 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 707 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 707 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_7_7;
#line 707 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_8_8;

#line 707 "disj_gen.m"
        ll_backend__disj_gen__succeeded = ((MR_tag((MR_Word) ll_backend__disj_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 707 "disj_gen.m"
        if (ll_backend__disj_gen__succeeded)
#line 707 "disj_gen.m"
          {
#line 707 "disj_gen.m"
            ll_backend__disj_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 707 "disj_gen.m"
            ll_backend__disj_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 2467 "ll_backend.disj_gen.c"
            {
#line 2469 "ll_backend.disj_gen.c"
              ll_backend__disj_gen__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__disj_gen__V_5_5, ll_backend__disj_gen__V_7_7);
            }
#line 707 "disj_gen.m"
            if (ll_backend__disj_gen__succeeded)
#line 707 "disj_gen.m"
              {
#line 2476 "ll_backend.disj_gen.c"
                ll_backend__disj_gen__TypeInfo_12_12 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[3];
#line 2478 "ll_backend.disj_gen.c"
                {
#line 2480 "ll_backend.disj_gen.c"
                  ll_backend__disj_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__disj_gen__TypeInfo_12_12, ((MR_Box) (ll_backend__disj_gen__V_6_6)), ((MR_Box) (ll_backend__disj_gen__V_8_8)));
                }
#line 707 "disj_gen.m"
              }
#line 707 "disj_gen.m"
          }
#line 707 "disj_gen.m"
      }
#line 707 "disj_gen.m"
    return ll_backend__disj_gen__succeeded;
#line 707 "disj_gen.m"
  }
#line 707 "disj_gen.m"
}

#line 935 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__disj_alloc_snapshot_regions_8_p_0(
#line 935 "disj_gen.m"
  MR_Word ll_backend__disj_gen__NumLval_1,
#line 935 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddrLval_2,
#line 935 "disj_gen.m"
  MR_Word ll_backend__disj_gen__EmbeddedStackFrame_3,
#line 935 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__4_4,
#line 935 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__HeadVar__5_5,
#line 935 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__6_6,
#line 935 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_7,
#line 935 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_8)
#line 935 "disj_gen.m"
{
#line 939 "disj_gen.m"
  {
#line 939 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;

#line 939 "disj_gen.m"
    if ((ll_backend__disj_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 939 "disj_gen.m"
      {
#line 939 "disj_gen.m"
        {
#line 939 "disj_gen.m"
          *ll_backend__disj_gen__HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 939 "disj_gen.m"
        *ll_backend__disj_gen__STATE_VARIABLE_CLD_8 = ll_backend__disj_gen__STATE_VARIABLE_CLD_0_7;
#line 939 "disj_gen.m"
      }
#line 939 "disj_gen.m"
    else
#line 941 "disj_gen.m"
      {
#line 941 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeCtorInfo_37_37 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 941 "disj_gen.m"
        MR_Word ll_backend__disj_gen__RegionVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__4_4, (MR_Integer) 0)));
#line 941 "disj_gen.m"
        MR_Word ll_backend__disj_gen__RegionVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__4_4, (MR_Integer) 1)));
#line 941 "disj_gen.m"
        MR_Word ll_backend__disj_gen__Code_21;
#line 941 "disj_gen.m"
        MR_Word ll_backend__disj_gen__Codes_22;
#line 941 "disj_gen.m"
        MR_Word ll_backend__disj_gen__ProduceVarCode_25;
#line 941 "disj_gen.m"
        MR_Word ll_backend__disj_gen__RegionVarRval_26;
#line 941 "disj_gen.m"
        MR_Word ll_backend__disj_gen__SaveCode_27;
#line 941 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_30_30;
#line 941 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_31_31;
#line 941 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_32_32;

#line 942 "disj_gen.m"
        {
#line 942 "disj_gen.m"
          ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__disj_gen__RegionVar_19, &ll_backend__disj_gen__ProduceVarCode_25, &ll_backend__disj_gen__RegionVarRval_26, ll_backend__disj_gen__HeadVar__6_6, ll_backend__disj_gen__STATE_VARIABLE_CLD_0_7, &ll_backend__disj_gen__STATE_VARIABLE_CLD_30_30);
        }
#line 945 "disj_gen.m"
        {
#line 945 "disj_gen.m"
          ll_backend__disj_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 945 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 945 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 945 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_32_32, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_3));
#line 945 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_32_32, 3) = ((MR_Box) (ll_backend__disj_gen__RegionVarRval_26));
#line 945 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_32_32, 4) = ((MR_Box) (ll_backend__disj_gen__NumLval_1));
#line 945 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_32_32, 5) = ((MR_Box) (ll_backend__disj_gen__AddrLval_2));
#line 945 "disj_gen.m"
        }
#line 944 "disj_gen.m"
        {
#line 944 "disj_gen.m"
          ll_backend__disj_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 944 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_31_31, 0) = ((MR_Box) (ll_backend__disj_gen__V_32_32));
#line 944 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_31_31, 1) = ((MR_Box) ((MR_String) "take alloc snapshot of the region"));
#line 944 "disj_gen.m"
        }
#line 943 "disj_gen.m"
        {
#line 943 "disj_gen.m"
          ll_backend__disj_gen__SaveCode_27 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_37_37, ((MR_Box) (ll_backend__disj_gen__V_31_31)));
        }
#line 949 "disj_gen.m"
        {
#line 949 "disj_gen.m"
          ll_backend__disj_gen__Code_21 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_37_37, ll_backend__disj_gen__ProduceVarCode_25, ll_backend__disj_gen__SaveCode_27);
        }
#line 950 "disj_gen.m"
        {
#line 950 "disj_gen.m"
          ll_backend__disj_gen__disj_alloc_snapshot_regions_8_p_0(ll_backend__disj_gen__NumLval_1, ll_backend__disj_gen__AddrLval_2, ll_backend__disj_gen__EmbeddedStackFrame_3, ll_backend__disj_gen__RegionVars_20, &ll_backend__disj_gen__Codes_22, ll_backend__disj_gen__HeadVar__6_6, ll_backend__disj_gen__STATE_VARIABLE_CLD_30_30, ll_backend__disj_gen__STATE_VARIABLE_CLD_8);
        }
#line 941 "disj_gen.m"
        {
#line 941 "disj_gen.m"
          *ll_backend__disj_gen__HeadVar__5_5 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_37_37, ll_backend__disj_gen__Code_21, ll_backend__disj_gen__Codes_22);
        }
#line 941 "disj_gen.m"
      }
#line 939 "disj_gen.m"
  }
#line 935 "disj_gen.m"
}

#line 917 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__disj_protect_regions_8_p_0(
#line 917 "disj_gen.m"
  MR_Word ll_backend__disj_gen__NumLval_1,
#line 917 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddrLval_2,
#line 917 "disj_gen.m"
  MR_Word ll_backend__disj_gen__EmbeddedStackFrame_3,
#line 917 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__4_4,
#line 917 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__HeadVar__5_5,
#line 917 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__6_6,
#line 917 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_7,
#line 917 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_8)
#line 917 "disj_gen.m"
{
#line 921 "disj_gen.m"
  {
#line 921 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;

#line 921 "disj_gen.m"
    if ((ll_backend__disj_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 921 "disj_gen.m"
      {
#line 921 "disj_gen.m"
        {
#line 921 "disj_gen.m"
          *ll_backend__disj_gen__HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 921 "disj_gen.m"
        *ll_backend__disj_gen__STATE_VARIABLE_CLD_8 = ll_backend__disj_gen__STATE_VARIABLE_CLD_0_7;
#line 921 "disj_gen.m"
      }
#line 921 "disj_gen.m"
    else
#line 923 "disj_gen.m"
      {
#line 923 "disj_gen.m"
        MR_Word ll_backend__disj_gen__TypeCtorInfo_37_37 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 923 "disj_gen.m"
        MR_Word ll_backend__disj_gen__RegionVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__4_4, (MR_Integer) 0)));
#line 923 "disj_gen.m"
        MR_Word ll_backend__disj_gen__RegionVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__4_4, (MR_Integer) 1)));
#line 923 "disj_gen.m"
        MR_Word ll_backend__disj_gen__Code_21;
#line 923 "disj_gen.m"
        MR_Word ll_backend__disj_gen__Codes_22;
#line 923 "disj_gen.m"
        MR_Word ll_backend__disj_gen__ProduceVarCode_25;
#line 923 "disj_gen.m"
        MR_Word ll_backend__disj_gen__RegionVarRval_26;
#line 923 "disj_gen.m"
        MR_Word ll_backend__disj_gen__SaveCode_27;
#line 923 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_30_30;
#line 923 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_31_31;
#line 923 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_32_32;

#line 924 "disj_gen.m"
        {
#line 924 "disj_gen.m"
          ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__disj_gen__RegionVar_19, &ll_backend__disj_gen__ProduceVarCode_25, &ll_backend__disj_gen__RegionVarRval_26, ll_backend__disj_gen__HeadVar__6_6, ll_backend__disj_gen__STATE_VARIABLE_CLD_0_7, &ll_backend__disj_gen__STATE_VARIABLE_CLD_30_30);
        }
#line 927 "disj_gen.m"
        {
#line 927 "disj_gen.m"
          ll_backend__disj_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 927 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 927 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 927 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_32_32, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_3));
#line 927 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_32_32, 3) = ((MR_Box) (ll_backend__disj_gen__RegionVarRval_26));
#line 927 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_32_32, 4) = ((MR_Box) (ll_backend__disj_gen__NumLval_1));
#line 927 "disj_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_32_32, 5) = ((MR_Box) (ll_backend__disj_gen__AddrLval_2));
#line 927 "disj_gen.m"
        }
#line 926 "disj_gen.m"
        {
#line 926 "disj_gen.m"
          ll_backend__disj_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 926 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_31_31, 0) = ((MR_Box) (ll_backend__disj_gen__V_32_32));
#line 926 "disj_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_31_31, 1) = ((MR_Box) ((MR_String) "disj protect the region if needed"));
#line 926 "disj_gen.m"
        }
#line 925 "disj_gen.m"
        {
#line 925 "disj_gen.m"
          ll_backend__disj_gen__SaveCode_27 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_37_37, ((MR_Box) (ll_backend__disj_gen__V_31_31)));
        }
#line 931 "disj_gen.m"
        {
#line 931 "disj_gen.m"
          ll_backend__disj_gen__Code_21 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_37_37, ll_backend__disj_gen__ProduceVarCode_25, ll_backend__disj_gen__SaveCode_27);
        }
#line 932 "disj_gen.m"
        {
#line 932 "disj_gen.m"
          ll_backend__disj_gen__disj_protect_regions_8_p_0(ll_backend__disj_gen__NumLval_1, ll_backend__disj_gen__AddrLval_2, ll_backend__disj_gen__EmbeddedStackFrame_3, ll_backend__disj_gen__RegionVars_20, &ll_backend__disj_gen__Codes_22, ll_backend__disj_gen__HeadVar__6_6, ll_backend__disj_gen__STATE_VARIABLE_CLD_30_30, ll_backend__disj_gen__STATE_VARIABLE_CLD_8);
        }
#line 923 "disj_gen.m"
        {
#line 923 "disj_gen.m"
          *ll_backend__disj_gen__HeadVar__5_5 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_37_37, ll_backend__disj_gen__Code_21, ll_backend__disj_gen__Codes_22);
        }
#line 923 "disj_gen.m"
      }
#line 921 "disj_gen.m"
  }
#line 917 "disj_gen.m"
}

#line 797 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__maybe_create_disj_region_frame_semi_12_p_0(
#line 797 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjRegionOps_13,
#line 797 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjRemovedRegionVars_14,
#line 797 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjAllocRegionVars_15,
#line 797 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__BeforeEnterCode_16,
#line 797 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__LaterCode_17,
#line 797 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__LastCode_18,
#line 797 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__StackVars_19,
#line 797 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__RegionCommitDisjCleanup_20,
#line 797 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_49,
#line 797 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_50,
#line 797 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_51,
#line 797 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_52)
#line 797 "disj_gen.m"
{
#line 806 "disj_gen.m"
  {
#line 806 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;

#line 806 "disj_gen.m"
#line 806 "disj_gen.m"
    switch (ll_backend__disj_gen__DisjRegionOps_13) {
#line 806 "disj_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 806 "disj_gen.m"
      case (MR_Integer) 0:
#line 813 "disj_gen.m"
        {
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__TypeCtorInfo_127_127 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__TypeInfo_128_128;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__TypeCtorInfo_130_130;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__ProtectRegionVarList_25;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__SnapshotRegionVarList_26;
#line 813 "disj_gen.m"
          MR_Integer ll_backend__disj_gen__NumProtectRegionVars_27;
#line 813 "disj_gen.m"
          MR_Integer ll_backend__disj_gen__NumSnapshotRegionVars_28;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__Globals_29;
#line 813 "disj_gen.m"
          MR_Integer ll_backend__disj_gen__FixedSize_30;
#line 813 "disj_gen.m"
          MR_Integer ll_backend__disj_gen__ProtectSize_31;
#line 813 "disj_gen.m"
          MR_Integer ll_backend__disj_gen__SnapshotSize_32;
#line 813 "disj_gen.m"
          MR_Integer ll_backend__disj_gen__FrameSize_33;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__Items_34;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__MainStackId_35;
#line 813 "disj_gen.m"
          MR_Integer ll_backend__disj_gen__FirstSlotNum_36;
#line 813 "disj_gen.m"
          MR_Integer ll_backend__disj_gen__LastSlotNum_37;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__EmbeddedStackFrame_38;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__FirstNonFixedAddr_39;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__ProtectNumRegLval_40;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__SnapshotNumRegLval_41;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__AddrRegLval_42;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__PushInitCode_43;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__ProtectRegionCode_44;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__SnapshotRegionCode_45;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__SetCode_46;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__CleanupLabel_47;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__CleanupCode_48;
#line 813 "disj_gen.m"
          MR_Integer ll_backend__disj_gen__V_56_56;
#line 813 "disj_gen.m"
          MR_Integer ll_backend__disj_gen__V_57_57;
#line 813 "disj_gen.m"
          MR_Integer ll_backend__disj_gen__V_58_58;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_61_61;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_62_62;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_64_64;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_66_66;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_68_68;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_69_69;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_70_70;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_71_71;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_74_74;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_75_75;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_76_76;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_77_77;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_81_81;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_82_82;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_83_83;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_88_88;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_89_89;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_90_90;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_93_93;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_94_94;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_95_95;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_96_96;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_97_97;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_99_99;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_101_101;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_102_102;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_103_103;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_105_105;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_108_108;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_109_109;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_111_111;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_112_112;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_113_113;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_114_114;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_117_117;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_118_118;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_122_122;
#line 813 "disj_gen.m"
          MR_Word ll_backend__disj_gen__V_123_123;

#line 830 "disj_gen.m"
          {
#line 830 "disj_gen.m"
            ll_backend__disj_gen__ProtectRegionVarList_25 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_127_127, ll_backend__disj_gen__DisjRemovedRegionVars_14);
          }
#line 831 "disj_gen.m"
          {
#line 831 "disj_gen.m"
            ll_backend__disj_gen__SnapshotRegionVarList_26 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_127_127, ll_backend__disj_gen__DisjAllocRegionVars_15);
          }
#line 2938 "ll_backend.disj_gen.c"
          ll_backend__disj_gen__TypeInfo_128_128 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[1];
#line 833 "disj_gen.m"
          {
#line 833 "disj_gen.m"
            mercury__list__length_2_p_0(ll_backend__disj_gen__TypeInfo_128_128, ll_backend__disj_gen__ProtectRegionVarList_25, &ll_backend__disj_gen__NumProtectRegionVars_27);
          }
#line 834 "disj_gen.m"
          {
#line 834 "disj_gen.m"
            mercury__list__length_2_p_0(ll_backend__disj_gen__TypeInfo_128_128, ll_backend__disj_gen__SnapshotRegionVarList_26, &ll_backend__disj_gen__NumSnapshotRegionVars_28);
          }
#line 836 "disj_gen.m"
          {
#line 836 "disj_gen.m"
            ll_backend__code_info__get_globals_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_49, &ll_backend__disj_gen__Globals_29);
          }
#line 837 "disj_gen.m"
          {
#line 837 "disj_gen.m"
            libs__globals__lookup_int_option_3_p_0(ll_backend__disj_gen__Globals_29, (MR_Integer) 284, &ll_backend__disj_gen__FixedSize_30);
          }
#line 839 "disj_gen.m"
          {
#line 839 "disj_gen.m"
            libs__globals__lookup_int_option_3_p_0(ll_backend__disj_gen__Globals_29, (MR_Integer) 289, &ll_backend__disj_gen__ProtectSize_31);
          }
#line 841 "disj_gen.m"
          {
#line 841 "disj_gen.m"
            libs__globals__lookup_int_option_3_p_0(ll_backend__disj_gen__Globals_29, (MR_Integer) 290, &ll_backend__disj_gen__SnapshotSize_32);
          }
#line 844 "disj_gen.m"
          ll_backend__disj_gen__V_57_57 = (ll_backend__disj_gen__ProtectSize_31 * ll_backend__disj_gen__NumProtectRegionVars_27);
#line 844 "disj_gen.m"
          ll_backend__disj_gen__V_56_56 = (ll_backend__disj_gen__FixedSize_30 + ll_backend__disj_gen__V_57_57);
#line 845 "disj_gen.m"
          ll_backend__disj_gen__V_58_58 = (ll_backend__disj_gen__SnapshotSize_32 * ll_backend__disj_gen__NumSnapshotRegionVars_28);
#line 845 "disj_gen.m"
          ll_backend__disj_gen__FrameSize_33 = (ll_backend__disj_gen__V_56_56 + ll_backend__disj_gen__V_58_58);
#line 847 "disj_gen.m"
          {
#line 847 "disj_gen.m"
            ll_backend__disj_gen__Items_34 = mercury__list__duplicate_2_f_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0, ll_backend__disj_gen__FrameSize_33, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))));
          }
#line 848 "disj_gen.m"
          {
#line 848 "disj_gen.m"
            ll_backend__code_loc_dep__acquire_several_temp_slots_10_p_0(ll_backend__disj_gen__Items_34, (MR_Integer) 1, ll_backend__disj_gen__StackVars_19, &ll_backend__disj_gen__MainStackId_35, &ll_backend__disj_gen__FirstSlotNum_36, &ll_backend__disj_gen__LastSlotNum_37, ll_backend__disj_gen__STATE_VARIABLE_CI_0_49, &ll_backend__disj_gen__STATE_VARIABLE_CI_61_61, ll_backend__disj_gen__STATE_VARIABLE_CLD_0_51, &ll_backend__disj_gen__STATE_VARIABLE_CLD_62_62);
          }
#line 850 "disj_gen.m"
          {
#line 850 "disj_gen.m"
            ll_backend__disj_gen__EmbeddedStackFrame_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 850 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__EmbeddedStackFrame_38, 0) = ((MR_Box) (ll_backend__disj_gen__MainStackId_35));
#line 850 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__EmbeddedStackFrame_38, 1) = ((MR_Box) (ll_backend__disj_gen__FirstSlotNum_36));
#line 850 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__EmbeddedStackFrame_38, 2) = ((MR_Box) (ll_backend__disj_gen__LastSlotNum_37));
#line 850 "disj_gen.m"
          }
#line 852 "disj_gen.m"
          {
#line 852 "disj_gen.m"
            ll_backend__disj_gen__FirstNonFixedAddr_39 = ll_backend__llds__first_nonfixed_embedded_slot_addr_2_f_0(ll_backend__disj_gen__EmbeddedStackFrame_38, ll_backend__disj_gen__FixedSize_30);
          }
#line 854 "disj_gen.m"
          {
#line 854 "disj_gen.m"
            ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__disj_gen__ProtectNumRegLval_40, ll_backend__disj_gen__STATE_VARIABLE_CLD_62_62, &ll_backend__disj_gen__STATE_VARIABLE_CLD_64_64);
          }
#line 855 "disj_gen.m"
          {
#line 855 "disj_gen.m"
            ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__disj_gen__SnapshotNumRegLval_41, ll_backend__disj_gen__STATE_VARIABLE_CLD_64_64, &ll_backend__disj_gen__STATE_VARIABLE_CLD_66_66);
          }
#line 856 "disj_gen.m"
          {
#line 856 "disj_gen.m"
            ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__disj_gen__AddrRegLval_42, ll_backend__disj_gen__STATE_VARIABLE_CLD_66_66, &ll_backend__disj_gen__STATE_VARIABLE_CLD_68_68);
          }
#line 3020 "ll_backend.disj_gen.c"
          ll_backend__disj_gen__TypeCtorInfo_130_130 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 859 "disj_gen.m"
          {
#line 859 "disj_gen.m"
            ll_backend__disj_gen__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 859 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 859 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_71_71, 1) = ((MR_Box) ((MR_Integer) 1));
#line 859 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_71_71, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_38));
#line 859 "disj_gen.m"
          }
#line 858 "disj_gen.m"
          {
#line 858 "disj_gen.m"
            ll_backend__disj_gen__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 858 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_70_70, 0) = ((MR_Box) (ll_backend__disj_gen__V_71_71));
#line 858 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_70_70, 1) = ((MR_Box) ((MR_String) "Save stack pointer of embedded region nondet stack"));
#line 858 "disj_gen.m"
          }
#line 862 "disj_gen.m"
          ll_backend__disj_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__disj_gen_scalar_common_1[11]);
#line 862 "disj_gen.m"
          {
#line 862 "disj_gen.m"
            ll_backend__disj_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 862 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 862 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_76_76, 1) = ((MR_Box) (ll_backend__disj_gen__ProtectNumRegLval_40));
#line 862 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_76_76, 2) = ((MR_Box) (ll_backend__disj_gen__V_77_77));
#line 862 "disj_gen.m"
          }
#line 861 "disj_gen.m"
          {
#line 861 "disj_gen.m"
            ll_backend__disj_gen__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 861 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_75_75, 0) = ((MR_Box) (ll_backend__disj_gen__V_76_76));
#line 861 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_75_75, 1) = ((MR_Box) ((MR_String) "Initialize number of protect_infos"));
#line 861 "disj_gen.m"
          }
#line 865 "disj_gen.m"
          {
#line 865 "disj_gen.m"
            ll_backend__disj_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 865 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 865 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_83_83, 1) = ((MR_Box) (ll_backend__disj_gen__SnapshotNumRegLval_41));
#line 865 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_83_83, 2) = ((MR_Box) (ll_backend__disj_gen__V_77_77));
#line 865 "disj_gen.m"
          }
#line 864 "disj_gen.m"
          {
#line 864 "disj_gen.m"
            ll_backend__disj_gen__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 864 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_82_82, 0) = ((MR_Box) (ll_backend__disj_gen__V_83_83));
#line 864 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_82_82, 1) = ((MR_Box) ((MR_String) "Initialize number of snapshot_infos"));
#line 864 "disj_gen.m"
          }
#line 868 "disj_gen.m"
          {
#line 868 "disj_gen.m"
            ll_backend__disj_gen__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 868 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 868 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_90_90, 1) = ((MR_Box) (ll_backend__disj_gen__AddrRegLval_42));
#line 868 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_90_90, 2) = ((MR_Box) (ll_backend__disj_gen__FirstNonFixedAddr_39));
#line 868 "disj_gen.m"
          }
#line 867 "disj_gen.m"
          {
#line 867 "disj_gen.m"
            ll_backend__disj_gen__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 867 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_89_89, 0) = ((MR_Box) (ll_backend__disj_gen__V_90_90));
#line 867 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_89_89, 1) = ((MR_Box) ((MR_String) "Initialize pointer to nonfixed part of embedded frame"));
#line 867 "disj_gen.m"
          }
#line 870 "disj_gen.m"
          {
#line 870 "disj_gen.m"
            ll_backend__disj_gen__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 870 "disj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_88_88, 0) = ((MR_Box) (ll_backend__disj_gen__V_89_89));
#line 870 "disj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 870 "disj_gen.m"
          }
#line 866 "disj_gen.m"
          {
#line 866 "disj_gen.m"
            ll_backend__disj_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "disj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_81_81, 0) = ((MR_Box) (ll_backend__disj_gen__V_82_82));
#line 866 "disj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_81_81, 1) = ((MR_Box) (ll_backend__disj_gen__V_88_88));
#line 866 "disj_gen.m"
          }
#line 863 "disj_gen.m"
          {
#line 863 "disj_gen.m"
            ll_backend__disj_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 863 "disj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_74_74, 0) = ((MR_Box) (ll_backend__disj_gen__V_75_75));
#line 863 "disj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_74_74, 1) = ((MR_Box) (ll_backend__disj_gen__V_81_81));
#line 863 "disj_gen.m"
          }
#line 860 "disj_gen.m"
          {
#line 860 "disj_gen.m"
            ll_backend__disj_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "disj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_69_69, 0) = ((MR_Box) (ll_backend__disj_gen__V_70_70));
#line 860 "disj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_69_69, 1) = ((MR_Box) (ll_backend__disj_gen__V_74_74));
#line 860 "disj_gen.m"
          }
#line 857 "disj_gen.m"
          {
#line 857 "disj_gen.m"
            ll_backend__disj_gen__PushInitCode_43 = mercury__cord__from_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_130_130, ll_backend__disj_gen__V_69_69);
          }
#line 871 "disj_gen.m"
          {
#line 871 "disj_gen.m"
            ll_backend__disj_gen__disj_protect_regions_8_p_0(ll_backend__disj_gen__ProtectNumRegLval_40, ll_backend__disj_gen__AddrRegLval_42, ll_backend__disj_gen__EmbeddedStackFrame_38, ll_backend__disj_gen__ProtectRegionVarList_25, &ll_backend__disj_gen__ProtectRegionCode_44, ll_backend__disj_gen__STATE_VARIABLE_CI_61_61, ll_backend__disj_gen__STATE_VARIABLE_CLD_68_68, &ll_backend__disj_gen__STATE_VARIABLE_CLD_93_93);
          }
#line 874 "disj_gen.m"
          {
#line 874 "disj_gen.m"
            ll_backend__disj_gen__disj_alloc_snapshot_regions_8_p_0(ll_backend__disj_gen__SnapshotNumRegLval_41, ll_backend__disj_gen__AddrRegLval_42, ll_backend__disj_gen__EmbeddedStackFrame_38, ll_backend__disj_gen__SnapshotRegionVarList_26, &ll_backend__disj_gen__SnapshotRegionCode_45, ll_backend__disj_gen__STATE_VARIABLE_CI_61_61, ll_backend__disj_gen__STATE_VARIABLE_CLD_93_93, &ll_backend__disj_gen__STATE_VARIABLE_CLD_94_94);
          }
#line 880 "disj_gen.m"
          {
#line 880 "disj_gen.m"
            ll_backend__disj_gen__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 880 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_99_99, 0) = ((MR_Box) (ll_backend__disj_gen__ProtectNumRegLval_40));
#line 880 "disj_gen.m"
          }
#line 879 "disj_gen.m"
          {
#line 879 "disj_gen.m"
            ll_backend__disj_gen__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 879 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 879 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_97_97, 1) = ((MR_Box) ((MR_Integer) 2));
#line 879 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_97_97, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_38));
#line 879 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_97_97, 3) = ((MR_Box) (ll_backend__disj_gen__V_99_99));
#line 879 "disj_gen.m"
          }
#line 878 "disj_gen.m"
          {
#line 878 "disj_gen.m"
            ll_backend__disj_gen__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 878 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_96_96, 0) = ((MR_Box) (ll_backend__disj_gen__V_97_97));
#line 878 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_96_96, 1) = ((MR_Box) ((MR_String) "Store the number of protect_infos"));
#line 878 "disj_gen.m"
          }
#line 884 "disj_gen.m"
          {
#line 884 "disj_gen.m"
            ll_backend__disj_gen__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 884 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_105_105, 0) = ((MR_Box) (ll_backend__disj_gen__SnapshotNumRegLval_41));
#line 884 "disj_gen.m"
          }
#line 883 "disj_gen.m"
          {
#line 883 "disj_gen.m"
            ll_backend__disj_gen__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 883 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 883 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_103_103, 1) = ((MR_Box) ((MR_Integer) 3));
#line 883 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_103_103, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_38));
#line 883 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_103_103, 3) = ((MR_Box) (ll_backend__disj_gen__V_105_105));
#line 883 "disj_gen.m"
          }
#line 882 "disj_gen.m"
          {
#line 882 "disj_gen.m"
            ll_backend__disj_gen__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 882 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_102_102, 0) = ((MR_Box) (ll_backend__disj_gen__V_103_103));
#line 882 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_102_102, 1) = ((MR_Box) ((MR_String) "Store the number of snapshot_infos"));
#line 882 "disj_gen.m"
          }
#line 886 "disj_gen.m"
          {
#line 886 "disj_gen.m"
            ll_backend__disj_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 886 "disj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_101_101, 0) = ((MR_Box) (ll_backend__disj_gen__V_102_102));
#line 886 "disj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 886 "disj_gen.m"
          }
#line 881 "disj_gen.m"
          {
#line 881 "disj_gen.m"
            ll_backend__disj_gen__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "disj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_95_95, 0) = ((MR_Box) (ll_backend__disj_gen__V_96_96));
#line 881 "disj_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_95_95, 1) = ((MR_Box) (ll_backend__disj_gen__V_101_101));
#line 881 "disj_gen.m"
          }
#line 877 "disj_gen.m"
          {
#line 877 "disj_gen.m"
            ll_backend__disj_gen__SetCode_46 = mercury__cord__from_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_130_130, ll_backend__disj_gen__V_95_95);
          }
#line 887 "disj_gen.m"
          {
#line 887 "disj_gen.m"
            ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__disj_gen__ProtectNumRegLval_40, ll_backend__disj_gen__STATE_VARIABLE_CLD_94_94, &ll_backend__disj_gen__STATE_VARIABLE_CLD_108_108);
          }
#line 888 "disj_gen.m"
          {
#line 888 "disj_gen.m"
            ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__disj_gen__SnapshotNumRegLval_41, ll_backend__disj_gen__STATE_VARIABLE_CLD_108_108, &ll_backend__disj_gen__STATE_VARIABLE_CLD_109_109);
          }
#line 889 "disj_gen.m"
          {
#line 889 "disj_gen.m"
            ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__disj_gen__AddrRegLval_42, ll_backend__disj_gen__STATE_VARIABLE_CLD_109_109, ll_backend__disj_gen__STATE_VARIABLE_CLD_52);
          }
#line 892 "disj_gen.m"
          {
#line 892 "disj_gen.m"
            ll_backend__disj_gen__V_112_112 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_130_130, ll_backend__disj_gen__SnapshotRegionCode_45, ll_backend__disj_gen__SetCode_46);
          }
#line 891 "disj_gen.m"
          {
#line 891 "disj_gen.m"
            ll_backend__disj_gen__V_111_111 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_130_130, ll_backend__disj_gen__ProtectRegionCode_44, ll_backend__disj_gen__V_112_112);
          }
#line 891 "disj_gen.m"
          {
#line 891 "disj_gen.m"
            *ll_backend__disj_gen__BeforeEnterCode_16 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_130_130, ll_backend__disj_gen__PushInitCode_43, ll_backend__disj_gen__V_111_111);
          }
#line 895 "disj_gen.m"
          {
#line 895 "disj_gen.m"
            ll_backend__disj_gen__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 895 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_114_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 895 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 895 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_114_114, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_38));
#line 895 "disj_gen.m"
          }
#line 894 "disj_gen.m"
          {
#line 894 "disj_gen.m"
            ll_backend__disj_gen__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 894 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_113_113, 0) = ((MR_Box) (ll_backend__disj_gen__V_114_114));
#line 894 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_113_113, 1) = ((MR_Box) ((MR_String) "region enter later disjunct"));
#line 894 "disj_gen.m"
          }
#line 893 "disj_gen.m"
          {
#line 893 "disj_gen.m"
            *ll_backend__disj_gen__LaterCode_17 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_130_130, ((MR_Box) (ll_backend__disj_gen__V_113_113)));
          }
#line 901 "disj_gen.m"
          {
#line 901 "disj_gen.m"
            ll_backend__disj_gen__V_118_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 901 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_118_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 901 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 901 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_118_118, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_38));
#line 901 "disj_gen.m"
          }
#line 900 "disj_gen.m"
          {
#line 900 "disj_gen.m"
            ll_backend__disj_gen__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 900 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_117_117, 0) = ((MR_Box) (ll_backend__disj_gen__V_118_118));
#line 900 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_117_117, 1) = ((MR_Box) ((MR_String) "region enter last disjunct"));
#line 900 "disj_gen.m"
          }
#line 899 "disj_gen.m"
          {
#line 899 "disj_gen.m"
            *ll_backend__disj_gen__LastCode_18 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_130_130, ((MR_Box) (ll_backend__disj_gen__V_117_117)));
          }
#line 906 "disj_gen.m"
          {
#line 906 "disj_gen.m"
            ll_backend__code_info__get_next_label_3_p_0(&ll_backend__disj_gen__CleanupLabel_47, ll_backend__disj_gen__STATE_VARIABLE_CI_61_61, ll_backend__disj_gen__STATE_VARIABLE_CI_50);
          }
#line 909 "disj_gen.m"
          {
#line 909 "disj_gen.m"
            ll_backend__disj_gen__V_123_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 909 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_123_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 909 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 909 "disj_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_123_123, 2) = ((MR_Box) (ll_backend__disj_gen__EmbeddedStackFrame_38));
#line 909 "disj_gen.m"
          }
#line 908 "disj_gen.m"
          {
#line 908 "disj_gen.m"
            ll_backend__disj_gen__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 908 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_122_122, 0) = ((MR_Box) (ll_backend__disj_gen__V_123_123));
#line 908 "disj_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_122_122, 1) = ((MR_Box) ((MR_String) "region cleanup commit for nonlast disjunct"));
#line 908 "disj_gen.m"
          }
#line 907 "disj_gen.m"
          {
#line 907 "disj_gen.m"
            ll_backend__disj_gen__CleanupCode_48 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_130_130, ((MR_Box) (ll_backend__disj_gen__V_122_122)));
          }
#line 913 "disj_gen.m"
          {
#line 913 "disj_gen.m"
            MR_Word base;
#line 913 "disj_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "disj_gen.m"
            *ll_backend__disj_gen__RegionCommitDisjCleanup_20 = base;
#line 913 "disj_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__disj_gen__CleanupLabel_47));
#line 913 "disj_gen.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__disj_gen__CleanupCode_48));
#line 913 "disj_gen.m"
          }
#line 813 "disj_gen.m"
        }
#line 806 "disj_gen.m"
        break;
#line 806 "disj_gen.m"
      case (MR_Integer) 1:
#line 806 "disj_gen.m"
        {
#line 806 "disj_gen.m"
          MR_Word ll_backend__disj_gen__TypeCtorInfo_126_126 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

#line 807 "disj_gen.m"
          {
#line 807 "disj_gen.m"
            *ll_backend__disj_gen__BeforeEnterCode_16 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_126_126);
          }
#line 808 "disj_gen.m"
          {
#line 808 "disj_gen.m"
            *ll_backend__disj_gen__LaterCode_17 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_126_126);
          }
#line 809 "disj_gen.m"
          {
#line 809 "disj_gen.m"
            *ll_backend__disj_gen__LastCode_18 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_126_126);
          }
#line 810 "disj_gen.m"
          *ll_backend__disj_gen__StackVars_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 811 "disj_gen.m"
          *ll_backend__disj_gen__RegionCommitDisjCleanup_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 806 "disj_gen.m"
          *ll_backend__disj_gen__STATE_VARIABLE_CI_50 = ll_backend__disj_gen__STATE_VARIABLE_CI_0_49;
#line 806 "disj_gen.m"
          *ll_backend__disj_gen__STATE_VARIABLE_CLD_52 = ll_backend__disj_gen__STATE_VARIABLE_CLD_0_51;
#line 806 "disj_gen.m"
        }
#line 806 "disj_gen.m"
        break;
#line 806 "disj_gen.m"
    }
#line 806 "disj_gen.m"
  }
#line 797 "disj_gen.m"
}

#line 556 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0_2(
#line 556 "disj_gen.m"
  MR_Box ll_backend__disj_gen__closure_arg)
#line 556 "disj_gen.m"
{
#line 556 "disj_gen.m"
  {
#line 556 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;
#line 556 "disj_gen.m"
    MR_Box ll_backend__disj_gen__closure = ll_backend__disj_gen__closure_arg;

#line 556 "disj_gen.m"
    {
#line 556 "disj_gen.m"
      ll_backend__disj_gen__succeeded = ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__556__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__closure, (MR_Integer) 4))));
    }
#line 556 "disj_gen.m"
    return ll_backend__disj_gen__succeeded;
#line 556 "disj_gen.m"
  }
#line 556 "disj_gen.m"
}

#line 554 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0_1(
#line 554 "disj_gen.m"
  MR_Box ll_backend__disj_gen__closure_arg)
#line 554 "disj_gen.m"
{
#line 554 "disj_gen.m"
  {
#line 554 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;
#line 554 "disj_gen.m"
    MR_Box ll_backend__disj_gen__closure = ll_backend__disj_gen__closure_arg;

#line 554 "disj_gen.m"
    {
#line 554 "disj_gen.m"
      ll_backend__disj_gen__succeeded = ll_backend__disj_gen__IntroducedFrom__pred__generate_disjuncts__554__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__closure, (MR_Integer) 4))));
    }
#line 554 "disj_gen.m"
    return ll_backend__disj_gen__succeeded;
#line 554 "disj_gen.m"
  }
#line 554 "disj_gen.m"
}

#line 476 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__generate_disjuncts_19_p_0(
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HeadVar__1_1,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__CodeModel_2,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__FullResumeMap_3,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__MaybeEntryResumePoint_4,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__HijackInfo_5,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjGoalInfo_6,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__RegionCommitDisjCleanup_7,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__EndLabel_8,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__ReclaimHeap_9,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__MaybeHpSlot0_10,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__MaybeTicketSlot_11,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__LaterRegionCode_12,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__LastRegionCode_13,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__BranchStart0_14,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__MaybeEnd0_15,
#line 476 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__MaybeEnd_16,
#line 476 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__Code_17,
#line 476 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_18,
#line 476 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_19)
#line 476 "disj_gen.m"
{
#line 483 "disj_gen.m"
  {
#line 483 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;

#line 483 "disj_gen.m"
    if ((ll_backend__disj_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 483 "disj_gen.m"
      {
#line 484 "disj_gen.m"
        {
#line 484 "disj_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.disj_gen", (MR_String) "predicate \140ll_backend.disj_gen.generate_disjuncts\'/19", (MR_String) "empty disjunction");
#line 484 "disj_gen.m"
          return;
        }
#line 483 "disj_gen.m"
      }
#line 483 "disj_gen.m"
    else
#line 489 "disj_gen.m"
      {
#line 489 "disj_gen.m"
        MR_Word ll_backend__disj_gen__Goal0_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 489 "disj_gen.m"
        MR_Word ll_backend__disj_gen__Goals_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 489 "disj_gen.m"
        MR_Word ll_backend__disj_gen__EntryResumePointCode_63;
#line 489 "disj_gen.m"
        MR_Word ll_backend__disj_gen__GoalExpr0_64;
#line 489 "disj_gen.m"
        MR_Word ll_backend__disj_gen__GoalInfo0_65;
#line 489 "disj_gen.m"
        MR_Word ll_backend__disj_gen__Resume_66;
#line 489 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_105_105;
#line 489 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_106_106;
#line 489 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_107_107;

#line 491 "disj_gen.m"
        {
#line 491 "disj_gen.m"
          ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__disj_gen__BranchStart0_14, ll_backend__disj_gen__STATE_VARIABLE_CI_0_18, &ll_backend__disj_gen__STATE_VARIABLE_CLD_105_105);
        }
#line 499 "disj_gen.m"
        if ((ll_backend__disj_gen__MaybeEntryResumePoint_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 500 "disj_gen.m"
          {
#line 501 "disj_gen.m"
            {
#line 501 "disj_gen.m"
              ll_backend__disj_gen__EntryResumePointCode_63 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 500 "disj_gen.m"
            ll_backend__disj_gen__STATE_VARIABLE_CI_106_106 = ll_backend__disj_gen__STATE_VARIABLE_CI_0_18;
#line 500 "disj_gen.m"
            ll_backend__disj_gen__STATE_VARIABLE_CLD_107_107 = ll_backend__disj_gen__STATE_VARIABLE_CLD_105_105;
#line 500 "disj_gen.m"
          }
#line 499 "disj_gen.m"
        else
#line 496 "disj_gen.m"
          {
#line 496 "disj_gen.m"
            MR_Word ll_backend__disj_gen__EntryResumePoint_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__MaybeEntryResumePoint_4, (MR_Integer) 0)));

#line 497 "disj_gen.m"
            {
#line 497 "disj_gen.m"
              ll_backend__code_loc_dep__generate_resume_point_6_p_0(ll_backend__disj_gen__EntryResumePoint_62, &ll_backend__disj_gen__EntryResumePointCode_63, ll_backend__disj_gen__STATE_VARIABLE_CI_0_18, &ll_backend__disj_gen__STATE_VARIABLE_CI_106_106, ll_backend__disj_gen__STATE_VARIABLE_CLD_105_105, &ll_backend__disj_gen__STATE_VARIABLE_CLD_107_107);
            }
#line 496 "disj_gen.m"
          }
#line 504 "disj_gen.m"
        ll_backend__disj_gen__GoalExpr0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Goal0_42, (MR_Integer) 0)));
#line 504 "disj_gen.m"
        ll_backend__disj_gen__GoalInfo0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Goal0_42, (MR_Integer) 1)));
#line 505 "disj_gen.m"
        {
#line 505 "disj_gen.m"
          hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__disj_gen__GoalInfo0_65, &ll_backend__disj_gen__Resume_66);
        }
#line 651 "disj_gen.m"
        if ((ll_backend__disj_gen__Resume_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 652 "disj_gen.m"
          {
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__TypeCtorInfo_214_214;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__UndoCode_98;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__RegionCleanupCode_99;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__EndLabelCode_102;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_108_108;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_109_109;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_111_111;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_112_112;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_113_113;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_114_114;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_115_115;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_128_128;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_129_129;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_131_131;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_132_132;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_133_133;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_134_134;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_135_135;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_136_136;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_137_137;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_138_138;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__RestoreHpCode_192;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__RestoreTicketCode_193;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__TraceCode_194;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__GoalCode_195;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__StoreMap_196;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__SaveCode_197;
#line 652 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_168_199;

#line 657 "disj_gen.m"
            {
#line 657 "disj_gen.m"
              ll_backend__code_loc_dep__maybe_restore_and_release_hp_6_p_0(ll_backend__disj_gen__MaybeHpSlot0_10, &ll_backend__disj_gen__RestoreHpCode_192, ll_backend__disj_gen__STATE_VARIABLE_CI_106_106, &ll_backend__disj_gen__STATE_VARIABLE_CI_108_108, ll_backend__disj_gen__STATE_VARIABLE_CLD_107_107, &ll_backend__disj_gen__STATE_VARIABLE_CLD_109_109);
            }
#line 659 "disj_gen.m"
            {
#line 659 "disj_gen.m"
              ll_backend__code_loc_dep__maybe_reset_discard_and_release_ticket_7_p_0(ll_backend__disj_gen__MaybeTicketSlot_11, (MR_Integer) 0, &ll_backend__disj_gen__RestoreTicketCode_193, ll_backend__disj_gen__STATE_VARIABLE_CI_108_108, &ll_backend__disj_gen__STATE_VARIABLE_CI_111_111, ll_backend__disj_gen__STATE_VARIABLE_CLD_109_109, &ll_backend__disj_gen__STATE_VARIABLE_CLD_112_112);
            }
#line 662 "disj_gen.m"
            {
#line 662 "disj_gen.m"
              ll_backend__code_loc_dep__undo_disj_hijack_4_p_0(ll_backend__disj_gen__HijackInfo_5, &ll_backend__disj_gen__UndoCode_98, ll_backend__disj_gen__STATE_VARIABLE_CLD_112_112, &ll_backend__disj_gen__STATE_VARIABLE_CLD_113_113);
            }
#line 664 "disj_gen.m"
            {
#line 664 "disj_gen.m"
              ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(ll_backend__disj_gen__Goal0_42, ll_backend__disj_gen__DisjGoalInfo_6, &ll_backend__disj_gen__TraceCode_194, ll_backend__disj_gen__STATE_VARIABLE_CI_111_111, &ll_backend__disj_gen__STATE_VARIABLE_CI_114_114, ll_backend__disj_gen__STATE_VARIABLE_CLD_113_113, &ll_backend__disj_gen__STATE_VARIABLE_CLD_115_115);
            }
#line 666 "disj_gen.m"
            {
#line 666 "disj_gen.m"
              ll_backend__code_gen__generate_goal_7_p_0(ll_backend__disj_gen__CodeModel_2, ll_backend__disj_gen__Goal0_42, &ll_backend__disj_gen__GoalCode_195, ll_backend__disj_gen__STATE_VARIABLE_CI_114_114, ll_backend__disj_gen__STATE_VARIABLE_CI_19, ll_backend__disj_gen__STATE_VARIABLE_CLD_115_115, &ll_backend__disj_gen__STATE_VARIABLE_CLD_168_199);
            }
#line 667 "disj_gen.m"
            {
#line 667 "disj_gen.m"
              hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__disj_gen__DisjGoalInfo_6, &ll_backend__disj_gen__StoreMap_196);
            }
#line 668 "disj_gen.m"
            {
#line 668 "disj_gen.m"
              ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__disj_gen__StoreMap_196, ll_backend__disj_gen__MaybeEnd0_15, ll_backend__disj_gen__MaybeEnd_16, &ll_backend__disj_gen__SaveCode_197, *ll_backend__disj_gen__STATE_VARIABLE_CI_19, ll_backend__disj_gen__STATE_VARIABLE_CLD_168_199);
            }
#line 674 "disj_gen.m"
            if ((ll_backend__disj_gen__RegionCommitDisjCleanup_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 672 "disj_gen.m"
              {
#line 673 "disj_gen.m"
                {
#line 673 "disj_gen.m"
                  ll_backend__disj_gen__RegionCleanupCode_99 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
#line 672 "disj_gen.m"
              }
#line 674 "disj_gen.m"
            else
#line 676 "disj_gen.m"
              {
#line 676 "disj_gen.m"
                MR_Word ll_backend__disj_gen__TypeCtorInfo_213_213 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 676 "disj_gen.m"
                MR_Word ll_backend__disj_gen__CleanupCode_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__RegionCommitDisjCleanup_7, (MR_Integer) 1)));
#line 676 "disj_gen.m"
                MR_Word ll_backend__disj_gen__RegionCleanupStartCode_101;
#line 676 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_118_118;
#line 676 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_119_119;
#line 676 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_120_120;
#line 676 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_121_121;
#line 676 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_123_123;
#line 676 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_124_124;
#line 676 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_125_125;
#line 676 "disj_gen.m"
                MR_Word ll_backend__disj_gen__CleanupLabel_190 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__RegionCommitDisjCleanup_7, (MR_Integer) 0)));

#line 678 "disj_gen.m"
                {
#line 678 "disj_gen.m"
                  ll_backend__disj_gen__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 678 "disj_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_121_121, 0) = ((MR_Box) (ll_backend__disj_gen__EndLabel_8));
#line 678 "disj_gen.m"
                }
#line 678 "disj_gen.m"
                {
#line 678 "disj_gen.m"
                  ll_backend__disj_gen__V_120_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "disj_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_120_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 678 "disj_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_120_120, 1) = ((MR_Box) (ll_backend__disj_gen__V_121_121));
#line 678 "disj_gen.m"
                }
#line 678 "disj_gen.m"
                {
#line 678 "disj_gen.m"
                  ll_backend__disj_gen__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 678 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_119_119, 0) = ((MR_Box) (ll_backend__disj_gen__V_120_120));
#line 678 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_119_119, 1) = ((MR_Box) ((MR_String) "Skip over cleanup code at end of disjunction"));
#line 678 "disj_gen.m"
                }
#line 680 "disj_gen.m"
                {
#line 680 "disj_gen.m"
                  ll_backend__disj_gen__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "disj_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 680 "disj_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_125_125, 1) = ((MR_Box) (ll_backend__disj_gen__CleanupLabel_190));
#line 680 "disj_gen.m"
                }
#line 680 "disj_gen.m"
                {
#line 680 "disj_gen.m"
                  ll_backend__disj_gen__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 680 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_124_124, 0) = ((MR_Box) (ll_backend__disj_gen__V_125_125));
#line 680 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_124_124, 1) = ((MR_Box) ((MR_String) "Cleanup at end of disjunction"));
#line 680 "disj_gen.m"
                }
#line 682 "disj_gen.m"
                {
#line 682 "disj_gen.m"
                  ll_backend__disj_gen__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "disj_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_123_123, 0) = ((MR_Box) (ll_backend__disj_gen__V_124_124));
#line 682 "disj_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 682 "disj_gen.m"
                }
#line 679 "disj_gen.m"
                {
#line 679 "disj_gen.m"
                  ll_backend__disj_gen__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 679 "disj_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_118_118, 0) = ((MR_Box) (ll_backend__disj_gen__V_119_119));
#line 679 "disj_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_118_118, 1) = ((MR_Box) (ll_backend__disj_gen__V_123_123));
#line 679 "disj_gen.m"
                }
#line 677 "disj_gen.m"
                {
#line 677 "disj_gen.m"
                  ll_backend__disj_gen__RegionCleanupStartCode_101 = mercury__cord__from_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_213_213, ll_backend__disj_gen__V_118_118);
                }
#line 683 "disj_gen.m"
                {
#line 683 "disj_gen.m"
                  ll_backend__disj_gen__RegionCleanupCode_99 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_213_213, ll_backend__disj_gen__RegionCleanupStartCode_101, ll_backend__disj_gen__CleanupCode_100);
                }
#line 676 "disj_gen.m"
              }
#line 3824 "ll_backend.disj_gen.c"
            ll_backend__disj_gen__TypeCtorInfo_214_214 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 687 "disj_gen.m"
            {
#line 687 "disj_gen.m"
              ll_backend__disj_gen__V_129_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 687 "disj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_129_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 687 "disj_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_129_129, 1) = ((MR_Box) (ll_backend__disj_gen__EndLabel_8));
#line 687 "disj_gen.m"
            }
#line 687 "disj_gen.m"
            {
#line 687 "disj_gen.m"
              ll_backend__disj_gen__V_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 687 "disj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_128_128, 0) = ((MR_Box) (ll_backend__disj_gen__V_129_129));
#line 687 "disj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_128_128, 1) = ((MR_Box) ((MR_String) "End of disjunction"));
#line 687 "disj_gen.m"
            }
#line 686 "disj_gen.m"
            {
#line 686 "disj_gen.m"
              ll_backend__disj_gen__EndLabelCode_102 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_214_214, ((MR_Box) (ll_backend__disj_gen__V_128_128)));
            }
#line 700 "disj_gen.m"
            {
#line 700 "disj_gen.m"
              ll_backend__disj_gen__V_138_138 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_214_214, ll_backend__disj_gen__RegionCleanupCode_99, ll_backend__disj_gen__EndLabelCode_102);
            }
#line 699 "disj_gen.m"
            {
#line 699 "disj_gen.m"
              ll_backend__disj_gen__V_137_137 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_214_214, ll_backend__disj_gen__SaveCode_197, ll_backend__disj_gen__V_138_138);
            }
#line 698 "disj_gen.m"
            {
#line 698 "disj_gen.m"
              ll_backend__disj_gen__V_136_136 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_214_214, ll_backend__disj_gen__GoalCode_195, ll_backend__disj_gen__V_137_137);
            }
#line 697 "disj_gen.m"
            {
#line 697 "disj_gen.m"
              ll_backend__disj_gen__V_135_135 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_214_214, ll_backend__disj_gen__UndoCode_98, ll_backend__disj_gen__V_136_136);
            }
#line 696 "disj_gen.m"
            {
#line 696 "disj_gen.m"
              ll_backend__disj_gen__V_134_134 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_214_214, ll_backend__disj_gen__LastRegionCode_13, ll_backend__disj_gen__V_135_135);
            }
#line 695 "disj_gen.m"
            {
#line 695 "disj_gen.m"
              ll_backend__disj_gen__V_133_133 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_214_214, ll_backend__disj_gen__RestoreTicketCode_193, ll_backend__disj_gen__V_134_134);
            }
#line 694 "disj_gen.m"
            {
#line 694 "disj_gen.m"
              ll_backend__disj_gen__V_132_132 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_214_214, ll_backend__disj_gen__RestoreHpCode_192, ll_backend__disj_gen__V_133_133);
            }
#line 693 "disj_gen.m"
            {
#line 693 "disj_gen.m"
              ll_backend__disj_gen__V_131_131 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_214_214, ll_backend__disj_gen__TraceCode_194, ll_backend__disj_gen__V_132_132);
            }
#line 692 "disj_gen.m"
            {
#line 692 "disj_gen.m"
              *ll_backend__disj_gen__Code_17 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_214_214, ll_backend__disj_gen__EntryResumePointCode_63, ll_backend__disj_gen__V_131_131);
            }
#line 652 "disj_gen.m"
          }
#line 651 "disj_gen.m"
        else
#line 507 "disj_gen.m"
          {
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__TypeCtorInfo_211_211;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__ResumeVars_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Resume_66, (MR_Integer) 0)));
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__ResumeLocs_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Resume_66, (MR_Integer) 1)));
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__RestoreHpCode_70;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__RestoreTicketCode_71;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__ThisDisjunctRegionCode_72;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__GoalInfo_73;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__Goal_74;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__SaveHpCode_75;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__MaybeHpSlot_77;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__BranchStart_80;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__NextResumePoint_83;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__ModContCode_84;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__TraceCode_85;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__GoalCodeModel_86;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__GoalCode_87;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__ResumeVarsCode_88;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__PruneTicketCode_89;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__Zombies_90;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__StoreMap_91;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__MaybeEnd1_92;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__SaveCode_93;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__BranchCode_94;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__RestCode_97;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_142_142;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_143_143;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_152_152;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_153_153;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_154_154;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_155_155;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_156_156;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_157_157;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_158_158;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_162_162;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_165_165;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_166_166;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_167_167;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_168_168;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_177_177;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_179_179;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_180_180;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_181_181;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_182_182;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_183_183;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_184_184;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_185_185;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_186_186;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_187_187;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_188_188;
#line 507 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_189_189;

#line 521 "disj_gen.m"
            if ((ll_backend__disj_gen__MaybeEntryResumePoint_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 522 "disj_gen.m"
              {
#line 522 "disj_gen.m"
                MR_Word ll_backend__disj_gen__TypeCtorInfo_201_201 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

#line 523 "disj_gen.m"
                {
#line 523 "disj_gen.m"
                  ll_backend__disj_gen__RestoreHpCode_70 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_201_201);
                }
#line 524 "disj_gen.m"
                {
#line 524 "disj_gen.m"
                  ll_backend__disj_gen__RestoreTicketCode_71 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_201_201);
                }
#line 525 "disj_gen.m"
                {
#line 525 "disj_gen.m"
                  ll_backend__disj_gen__ThisDisjunctRegionCode_72 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_201_201);
                }
#line 522 "disj_gen.m"
              }
#line 521 "disj_gen.m"
            else
#line 512 "disj_gen.m"
              {
#line 515 "disj_gen.m"
                {
#line 515 "disj_gen.m"
                  ll_backend__code_loc_dep__maybe_restore_hp_2_p_0(ll_backend__disj_gen__MaybeHpSlot0_10, &ll_backend__disj_gen__RestoreHpCode_70);
                }
#line 518 "disj_gen.m"
                {
#line 518 "disj_gen.m"
                  ll_backend__code_loc_dep__maybe_reset_ticket_3_p_0(ll_backend__disj_gen__MaybeTicketSlot_11, (MR_Integer) 0, &ll_backend__disj_gen__RestoreTicketCode_71);
                }
#line 520 "disj_gen.m"
                ll_backend__disj_gen__ThisDisjunctRegionCode_72 = ll_backend__disj_gen__LaterRegionCode_12;
#line 512 "disj_gen.m"
              }
#line 531 "disj_gen.m"
            {
#line 531 "disj_gen.m"
              hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__disj_gen__GoalInfo0_65, &ll_backend__disj_gen__GoalInfo_73);
            }
#line 532 "disj_gen.m"
            {
#line 532 "disj_gen.m"
              ll_backend__disj_gen__Goal_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 532 "disj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Goal_74, 0) = ((MR_Box) (ll_backend__disj_gen__GoalExpr0_64));
#line 532 "disj_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Goal_74, 1) = ((MR_Box) (ll_backend__disj_gen__GoalInfo_73));
#line 532 "disj_gen.m"
            }
#line 536 "disj_gen.m"
            ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__ReclaimHeap_9 == (MR_Integer) 1);
#line 536 "disj_gen.m"
            if (ll_backend__disj_gen__succeeded)
#line 536 "disj_gen.m"
              {
#line 537 "disj_gen.m"
                {
#line 537 "disj_gen.m"
                  ll_backend__disj_gen__succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(ll_backend__disj_gen__Goal_74);
                }
#line 536 "disj_gen.m"
                if (ll_backend__disj_gen__succeeded)
#line 538 "disj_gen.m"
                  ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__MaybeHpSlot0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 536 "disj_gen.m"
              }
#line 535 "disj_gen.m"
            if (ll_backend__disj_gen__succeeded)
#line 540 "disj_gen.m"
              {
#line 540 "disj_gen.m"
                MR_Word ll_backend__disj_gen__TypeCtorInfo_202_202;
#line 540 "disj_gen.m"
                MR_Word ll_backend__disj_gen__HpSlot_76;
#line 540 "disj_gen.m"
                MR_Word ll_backend__disj_gen__BranchSaveHpCode_78;
#line 540 "disj_gen.m"
                MR_Word ll_backend__disj_gen__BranchHpSlot_79;
#line 540 "disj_gen.m"
                MR_Word ll_backend__disj_gen__HpCodeInstrs_81;
#line 540 "disj_gen.m"
                MR_Word ll_backend__disj_gen__BranchHpCodeInstrs_82;
#line 540 "disj_gen.m"
                MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_141_141;
#line 540 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_144_144;
#line 540 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_148_148;

#line 540 "disj_gen.m"
                {
#line 540 "disj_gen.m"
                  ll_backend__code_loc_dep__save_hp_6_p_0(&ll_backend__disj_gen__SaveHpCode_75, &ll_backend__disj_gen__HpSlot_76, ll_backend__disj_gen__STATE_VARIABLE_CI_106_106, &ll_backend__disj_gen__STATE_VARIABLE_CI_141_141, ll_backend__disj_gen__STATE_VARIABLE_CLD_107_107, &ll_backend__disj_gen__STATE_VARIABLE_CLD_142_142);
                }
#line 541 "disj_gen.m"
                {
#line 541 "disj_gen.m"
                  ll_backend__disj_gen__MaybeHpSlot_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 541 "disj_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__MaybeHpSlot_77, 0) = ((MR_Box) (ll_backend__disj_gen__HpSlot_76));
#line 541 "disj_gen.m"
                }
#line 550 "disj_gen.m"
                {
#line 550 "disj_gen.m"
                  ll_backend__code_loc_dep__save_hp_in_branch_6_p_0(&ll_backend__disj_gen__BranchSaveHpCode_78, &ll_backend__disj_gen__BranchHpSlot_79, ll_backend__disj_gen__BranchStart0_14, &ll_backend__disj_gen__BranchStart_80, ll_backend__disj_gen__STATE_VARIABLE_CI_141_141, &ll_backend__disj_gen__STATE_VARIABLE_CI_143_143);
                }
#line 4118 "ll_backend.disj_gen.c"
                ll_backend__disj_gen__TypeCtorInfo_202_202 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 552 "disj_gen.m"
                {
#line 552 "disj_gen.m"
                  ll_backend__disj_gen__HpCodeInstrs_81 = mercury__cord__list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_202_202, ll_backend__disj_gen__SaveHpCode_75);
                }
#line 553 "disj_gen.m"
                {
#line 553 "disj_gen.m"
                  ll_backend__disj_gen__BranchHpCodeInstrs_82 = mercury__cord__list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_202_202, ll_backend__disj_gen__BranchSaveHpCode_78);
                }
#line 554 "disj_gen.m"
                {
#line 554 "disj_gen.m"
                  ll_backend__disj_gen__V_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 554 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_144_144, 0) = ((MR_Box) (&ll_backend__disj_gen_scalar_common_4[0]));
#line 554 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_144_144, 1) = ((MR_Box) (ll_backend__disj_gen__generate_disjuncts_19_p_0_1));
#line 554 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_144_144, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 554 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_144_144, 3) = ((MR_Box) (ll_backend__disj_gen__HpCodeInstrs_81));
#line 554 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_144_144, 4) = ((MR_Box) (ll_backend__disj_gen__BranchHpCodeInstrs_82));
#line 554 "disj_gen.m"
                }
#line 554 "disj_gen.m"
                {
#line 554 "disj_gen.m"
                  mercury__require__expect_4_p_0(ll_backend__disj_gen__V_144_144, (MR_String) "ll_backend.disj_gen", (MR_String) "predicate \140ll_backend.disj_gen.generate_disjuncts\'/19", (MR_String) "cannot use same code for saving hp");
                }
#line 556 "disj_gen.m"
                {
#line 556 "disj_gen.m"
                  ll_backend__disj_gen__V_148_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 556 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_148_148, 0) = ((MR_Box) (&ll_backend__disj_gen_scalar_common_4[1]));
#line 556 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_148_148, 1) = ((MR_Box) (ll_backend__disj_gen__generate_disjuncts_19_p_0_2));
#line 556 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_148_148, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 556 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_148_148, 3) = ((MR_Box) (ll_backend__disj_gen__HpSlot_76));
#line 556 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_148_148, 4) = ((MR_Box) (ll_backend__disj_gen__BranchHpSlot_79));
#line 556 "disj_gen.m"
                }
#line 556 "disj_gen.m"
                {
#line 556 "disj_gen.m"
                  mercury__require__expect_4_p_0(ll_backend__disj_gen__V_148_148, (MR_String) "ll_backend.disj_gen", (MR_String) "predicate \140ll_backend.disj_gen.generate_disjuncts\'/19", (MR_String) "cannot allocate same slot for saved hp");
                }
#line 540 "disj_gen.m"
              }
#line 535 "disj_gen.m"
            else
#line 559 "disj_gen.m"
              {
#line 559 "disj_gen.m"
                {
#line 559 "disj_gen.m"
                  ll_backend__disj_gen__SaveHpCode_75 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
#line 560 "disj_gen.m"
                ll_backend__disj_gen__MaybeHpSlot_77 = ll_backend__disj_gen__MaybeHpSlot0_10;
#line 561 "disj_gen.m"
                ll_backend__disj_gen__BranchStart_80 = ll_backend__disj_gen__BranchStart0_14;
#line 559 "disj_gen.m"
                ll_backend__disj_gen__STATE_VARIABLE_CLD_142_142 = ll_backend__disj_gen__STATE_VARIABLE_CLD_107_107;
#line 559 "disj_gen.m"
                ll_backend__disj_gen__STATE_VARIABLE_CI_143_143 = ll_backend__disj_gen__STATE_VARIABLE_CI_106_106;
#line 559 "disj_gen.m"
              }
#line 564 "disj_gen.m"
            {
#line 564 "disj_gen.m"
              ll_backend__disj_gen__V_152_152 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__disj_gen__ResumeVars_67);
            }
#line 564 "disj_gen.m"
            {
#line 564 "disj_gen.m"
              ll_backend__code_loc_dep__make_resume_point_6_p_0(ll_backend__disj_gen__V_152_152, ll_backend__disj_gen__ResumeLocs_68, ll_backend__disj_gen__FullResumeMap_3, &ll_backend__disj_gen__NextResumePoint_83, ll_backend__disj_gen__STATE_VARIABLE_CI_143_143, &ll_backend__disj_gen__STATE_VARIABLE_CI_153_153);
            }
#line 566 "disj_gen.m"
            {
#line 566 "disj_gen.m"
              ll_backend__code_loc_dep__effect_resume_point_5_p_0(ll_backend__disj_gen__NextResumePoint_83, ll_backend__disj_gen__CodeModel_2, &ll_backend__disj_gen__ModContCode_84, ll_backend__disj_gen__STATE_VARIABLE_CLD_142_142, &ll_backend__disj_gen__STATE_VARIABLE_CLD_154_154);
            }
#line 568 "disj_gen.m"
            {
#line 568 "disj_gen.m"
              ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(ll_backend__disj_gen__Goal_74, ll_backend__disj_gen__DisjGoalInfo_6, &ll_backend__disj_gen__TraceCode_85, ll_backend__disj_gen__STATE_VARIABLE_CI_153_153, &ll_backend__disj_gen__STATE_VARIABLE_CI_155_155, ll_backend__disj_gen__STATE_VARIABLE_CLD_154_154, &ll_backend__disj_gen__STATE_VARIABLE_CLD_156_156);
            }
#line 570 "disj_gen.m"
            {
#line 570 "disj_gen.m"
              ll_backend__disj_gen__GoalCodeModel_86 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__disj_gen__GoalInfo_73);
            }
#line 571 "disj_gen.m"
            {
#line 571 "disj_gen.m"
              ll_backend__code_gen__generate_goal_7_p_0(ll_backend__disj_gen__GoalCodeModel_86, ll_backend__disj_gen__Goal_74, &ll_backend__disj_gen__GoalCode_87, ll_backend__disj_gen__STATE_VARIABLE_CI_155_155, &ll_backend__disj_gen__STATE_VARIABLE_CI_157_157, ll_backend__disj_gen__STATE_VARIABLE_CLD_156_156, &ll_backend__disj_gen__STATE_VARIABLE_CLD_158_158);
            }
#line 585 "disj_gen.m"
#line 585 "disj_gen.m"
            switch (ll_backend__disj_gen__CodeModel_2) {
#line 585 "disj_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 585 "disj_gen.m"
              case (MR_Integer) 0:
#line 585 "disj_gen.m"
              case (MR_Integer) 1:
#line 588 "disj_gen.m"
                {
#line 588 "disj_gen.m"
                  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_159_159;
#line 588 "disj_gen.m"
                  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_160_160;
#line 588 "disj_gen.m"
                  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_163_163;

#line 590 "disj_gen.m"
                  {
#line 590 "disj_gen.m"
                    ll_backend__disj_gen__ResumeVarsCode_88 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 592 "disj_gen.m"
                  {
#line 592 "disj_gen.m"
                    ll_backend__code_loc_dep__maybe_release_hp_5_p_0(ll_backend__disj_gen__MaybeHpSlot_77, ll_backend__disj_gen__STATE_VARIABLE_CI_157_157, &ll_backend__disj_gen__STATE_VARIABLE_CI_159_159, ll_backend__disj_gen__STATE_VARIABLE_CLD_158_158, &ll_backend__disj_gen__STATE_VARIABLE_CLD_160_160);
                  }
#line 594 "disj_gen.m"
                  {
#line 594 "disj_gen.m"
                    ll_backend__code_loc_dep__maybe_reset_prune_and_release_ticket_7_p_0(ll_backend__disj_gen__MaybeTicketSlot_11, (MR_Integer) 1, &ll_backend__disj_gen__PruneTicketCode_89, ll_backend__disj_gen__STATE_VARIABLE_CI_159_159, &ll_backend__disj_gen__STATE_VARIABLE_CI_162_162, ll_backend__disj_gen__STATE_VARIABLE_CLD_160_160, &ll_backend__disj_gen__STATE_VARIABLE_CLD_163_163);
                  }
#line 597 "disj_gen.m"
                  {
#line 597 "disj_gen.m"
                    ll_backend__code_loc_dep__reset_resume_known_3_p_0(ll_backend__disj_gen__BranchStart_80, ll_backend__disj_gen__STATE_VARIABLE_CLD_163_163, &ll_backend__disj_gen__STATE_VARIABLE_CLD_165_165);
                  }
#line 588 "disj_gen.m"
                }
#line 585 "disj_gen.m"
                break;
#line 585 "disj_gen.m"
              case (MR_Integer) 2:
#line 574 "disj_gen.m"
                {
#line 579 "disj_gen.m"
                  {
#line 579 "disj_gen.m"
                    ll_backend__code_loc_dep__flush_resume_vars_to_stack_4_p_0(&ll_backend__disj_gen__ResumeVarsCode_88, ll_backend__disj_gen__STATE_VARIABLE_CI_157_157, ll_backend__disj_gen__STATE_VARIABLE_CLD_158_158, &ll_backend__disj_gen__STATE_VARIABLE_CLD_165_165);
                  }
#line 584 "disj_gen.m"
                  {
#line 584 "disj_gen.m"
                    ll_backend__disj_gen__PruneTicketCode_89 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 574 "disj_gen.m"
                  ll_backend__disj_gen__STATE_VARIABLE_CI_162_162 = ll_backend__disj_gen__STATE_VARIABLE_CI_157_157;
#line 574 "disj_gen.m"
                }
#line 585 "disj_gen.m"
                break;
#line 585 "disj_gen.m"
            }
#line 604 "disj_gen.m"
            {
#line 604 "disj_gen.m"
              ll_backend__code_loc_dep__pop_resume_point_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CLD_165_165, &ll_backend__disj_gen__STATE_VARIABLE_CLD_166_166);
            }
#line 605 "disj_gen.m"
            {
#line 605 "disj_gen.m"
              ll_backend__code_loc_dep__pickup_zombies_3_p_0(&ll_backend__disj_gen__Zombies_90, ll_backend__disj_gen__STATE_VARIABLE_CLD_166_166, &ll_backend__disj_gen__STATE_VARIABLE_CLD_167_167);
            }
#line 606 "disj_gen.m"
            {
#line 606 "disj_gen.m"
              ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ll_backend__disj_gen__Zombies_90, ll_backend__disj_gen__STATE_VARIABLE_CLD_167_167, &ll_backend__disj_gen__STATE_VARIABLE_CLD_168_168);
            }
#line 611 "disj_gen.m"
            {
#line 611 "disj_gen.m"
              hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__disj_gen__DisjGoalInfo_6, &ll_backend__disj_gen__StoreMap_91);
            }
#line 612 "disj_gen.m"
            {
#line 612 "disj_gen.m"
              ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__disj_gen__StoreMap_91, ll_backend__disj_gen__MaybeEnd0_15, &ll_backend__disj_gen__MaybeEnd1_92, &ll_backend__disj_gen__SaveCode_93, ll_backend__disj_gen__STATE_VARIABLE_CI_162_162, ll_backend__disj_gen__STATE_VARIABLE_CLD_168_168);
            }
#line 621 "disj_gen.m"
            if ((ll_backend__disj_gen__RegionCommitDisjCleanup_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 616 "disj_gen.m"
              {
#line 616 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_173_173;
#line 616 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_174_174;
#line 616 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_175_175;

#line 618 "disj_gen.m"
                {
#line 618 "disj_gen.m"
                  ll_backend__disj_gen__V_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 618 "disj_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_175_175, 0) = ((MR_Box) (ll_backend__disj_gen__EndLabel_8));
#line 618 "disj_gen.m"
                }
#line 618 "disj_gen.m"
                {
#line 618 "disj_gen.m"
                  ll_backend__disj_gen__V_174_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "disj_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_174_174, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 618 "disj_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_174_174, 1) = ((MR_Box) (ll_backend__disj_gen__V_175_175));
#line 618 "disj_gen.m"
                }
#line 618 "disj_gen.m"
                {
#line 618 "disj_gen.m"
                  ll_backend__disj_gen__V_173_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 618 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_173_173, 0) = ((MR_Box) (ll_backend__disj_gen__V_174_174));
#line 618 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_173_173, 1) = ((MR_Box) ((MR_String) "skip to end of disjunction"));
#line 618 "disj_gen.m"
                }
#line 617 "disj_gen.m"
                {
#line 617 "disj_gen.m"
                  ll_backend__disj_gen__BranchCode_94 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__disj_gen__V_173_173)));
                }
#line 616 "disj_gen.m"
              }
#line 621 "disj_gen.m"
            else
#line 623 "disj_gen.m"
              {
#line 623 "disj_gen.m"
                MR_Word ll_backend__disj_gen__CleanupLabel_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__RegionCommitDisjCleanup_7, (MR_Integer) 0)));
#line 623 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_169_169;
#line 623 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_170_170;
#line 623 "disj_gen.m"
                MR_Word ll_backend__disj_gen__V_171_171;
#line 622 "disj_gen.m"
                MR_Word ll_backend__disj_gen___CleanupCode_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__RegionCommitDisjCleanup_7, (MR_Integer) 1)));

#line 625 "disj_gen.m"
                {
#line 625 "disj_gen.m"
                  ll_backend__disj_gen__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 625 "disj_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_171_171, 0) = ((MR_Box) (ll_backend__disj_gen__CleanupLabel_95));
#line 625 "disj_gen.m"
                }
#line 625 "disj_gen.m"
                {
#line 625 "disj_gen.m"
                  ll_backend__disj_gen__V_170_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "disj_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_170_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 625 "disj_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_170_170, 1) = ((MR_Box) (ll_backend__disj_gen__V_171_171));
#line 625 "disj_gen.m"
                }
#line 625 "disj_gen.m"
                {
#line 625 "disj_gen.m"
                  ll_backend__disj_gen__V_169_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 625 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_169_169, 0) = ((MR_Box) (ll_backend__disj_gen__V_170_170));
#line 625 "disj_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_169_169, 1) = ((MR_Box) ((MR_String) "skip to end of disjunction with region cleanup"));
#line 625 "disj_gen.m"
                }
#line 624 "disj_gen.m"
                {
#line 624 "disj_gen.m"
                  ll_backend__disj_gen__BranchCode_94 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__disj_gen__V_169_169)));
                }
#line 623 "disj_gen.m"
              }
#line 631 "disj_gen.m"
            {
#line 631 "disj_gen.m"
              ll_backend__disj_gen__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 631 "disj_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_177_177, 0) = ((MR_Box) (ll_backend__disj_gen__NextResumePoint_83));
#line 631 "disj_gen.m"
            }
#line 630 "disj_gen.m"
            {
#line 630 "disj_gen.m"
              ll_backend__disj_gen__generate_disjuncts_19_p_0(ll_backend__disj_gen__Goals_43, ll_backend__disj_gen__CodeModel_2, ll_backend__disj_gen__FullResumeMap_3, ll_backend__disj_gen__V_177_177, ll_backend__disj_gen__HijackInfo_5, ll_backend__disj_gen__DisjGoalInfo_6, ll_backend__disj_gen__RegionCommitDisjCleanup_7, ll_backend__disj_gen__EndLabel_8, ll_backend__disj_gen__ReclaimHeap_9, ll_backend__disj_gen__MaybeHpSlot_77, ll_backend__disj_gen__MaybeTicketSlot_11, ll_backend__disj_gen__LaterRegionCode_12, ll_backend__disj_gen__LastRegionCode_13, ll_backend__disj_gen__BranchStart_80, ll_backend__disj_gen__MaybeEnd1_92, ll_backend__disj_gen__MaybeEnd_16, &ll_backend__disj_gen__RestCode_97, ll_backend__disj_gen__STATE_VARIABLE_CI_162_162, ll_backend__disj_gen__STATE_VARIABLE_CI_19);
            }
#line 4421 "ll_backend.disj_gen.c"
            ll_backend__disj_gen__TypeCtorInfo_211_211 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 649 "disj_gen.m"
            {
#line 649 "disj_gen.m"
              ll_backend__disj_gen__V_189_189 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__BranchCode_94, ll_backend__disj_gen__RestCode_97);
            }
#line 648 "disj_gen.m"
            {
#line 648 "disj_gen.m"
              ll_backend__disj_gen__V_188_188 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__SaveCode_93, ll_backend__disj_gen__V_189_189);
            }
#line 647 "disj_gen.m"
            {
#line 647 "disj_gen.m"
              ll_backend__disj_gen__V_187_187 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__PruneTicketCode_89, ll_backend__disj_gen__V_188_188);
            }
#line 646 "disj_gen.m"
            {
#line 646 "disj_gen.m"
              ll_backend__disj_gen__V_186_186 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__ResumeVarsCode_88, ll_backend__disj_gen__V_187_187);
            }
#line 645 "disj_gen.m"
            {
#line 645 "disj_gen.m"
              ll_backend__disj_gen__V_185_185 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__GoalCode_87, ll_backend__disj_gen__V_186_186);
            }
#line 644 "disj_gen.m"
            {
#line 644 "disj_gen.m"
              ll_backend__disj_gen__V_184_184 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__TraceCode_85, ll_backend__disj_gen__V_185_185);
            }
#line 643 "disj_gen.m"
            {
#line 643 "disj_gen.m"
              ll_backend__disj_gen__V_183_183 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__ModContCode_84, ll_backend__disj_gen__V_184_184);
            }
#line 642 "disj_gen.m"
            {
#line 642 "disj_gen.m"
              ll_backend__disj_gen__V_182_182 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__ThisDisjunctRegionCode_72, ll_backend__disj_gen__V_183_183);
            }
#line 641 "disj_gen.m"
            {
#line 641 "disj_gen.m"
              ll_backend__disj_gen__V_181_181 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__SaveHpCode_75, ll_backend__disj_gen__V_182_182);
            }
#line 640 "disj_gen.m"
            {
#line 640 "disj_gen.m"
              ll_backend__disj_gen__V_180_180 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__RestoreTicketCode_71, ll_backend__disj_gen__V_181_181);
            }
#line 639 "disj_gen.m"
            {
#line 639 "disj_gen.m"
              ll_backend__disj_gen__V_179_179 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__RestoreHpCode_70, ll_backend__disj_gen__V_180_180);
            }
#line 638 "disj_gen.m"
            {
#line 638 "disj_gen.m"
              *ll_backend__disj_gen__Code_17 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_211_211, ll_backend__disj_gen__EntryResumePointCode_63, ll_backend__disj_gen__V_179_179);
            }
#line 507 "disj_gen.m"
          }
#line 489 "disj_gen.m"
      }
#line 483 "disj_gen.m"
  }
#line 476 "disj_gen.m"
}

#line 356 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__generate_real_disj_11_p_0(
#line 356 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddTrailOps_12,
#line 356 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddRegionOps_13,
#line 356 "disj_gen.m"
  MR_Word ll_backend__disj_gen__CodeModel_14,
#line 356 "disj_gen.m"
  MR_Word ll_backend__disj_gen__ResumeVars_15,
#line 356 "disj_gen.m"
  MR_Word ll_backend__disj_gen__Goals_16,
#line 356 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjGoalInfo_17,
#line 356 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__Code_18,
#line 356 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_49,
#line 356 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_50,
#line 356 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_51,
#line 356 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_52)
#line 356 "disj_gen.m"
{
#line 362 "disj_gen.m"
  {
#line 362 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__TypeCtorInfo_82_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__TypeCtorInfo_85_85;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__ResumeMap_21;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__FlushCode_22;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__Globals_23;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__SaveTicketCode_24;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeTicketSlot_25;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__ReclaimHeap_26;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__SaveHpCode_27;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeHpSlot_28;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__BeforeEnterRegionCode_29;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__LaterRegionCode_30;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__LastRegionCode_31;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__RegionStackVarsToRelease_32;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__RegionCommitDisjCleanup_33;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__HijackInfo_42;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__PrepareHijackCode_43;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__EndLabel_44;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__BranchStart_45;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeEnd_46;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__GoalsCode_47;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__StoreMap_48;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_53_53;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_54_54;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_55_55;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_56_56;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_65_65;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_66_66;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_67_67;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_68_68;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_69_69;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_72_72;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_73_73;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_76_76;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_78_78;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_79_79;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_80_80;
#line 362 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_81_81;

#line 366 "disj_gen.m"
    {
#line 366 "disj_gen.m"
      ll_backend__disj_gen__V_53_53 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_82_82, ll_backend__disj_gen__ResumeVars_15);
    }
#line 366 "disj_gen.m"
    {
#line 366 "disj_gen.m"
      ll_backend__code_loc_dep__produce_vars_6_p_0(ll_backend__disj_gen__V_53_53, &ll_backend__disj_gen__ResumeMap_21, &ll_backend__disj_gen__FlushCode_22, ll_backend__disj_gen__STATE_VARIABLE_CI_0_49, ll_backend__disj_gen__STATE_VARIABLE_CLD_0_51, &ll_backend__disj_gen__STATE_VARIABLE_CLD_54_54);
    }
#line 374 "disj_gen.m"
    {
#line 374 "disj_gen.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_49, &ll_backend__disj_gen__Globals_23);
    }
#line 375 "disj_gen.m"
    {
#line 375 "disj_gen.m"
      ll_backend__code_loc_dep__maybe_save_ticket_7_p_0(ll_backend__disj_gen__AddTrailOps_12, &ll_backend__disj_gen__SaveTicketCode_24, &ll_backend__disj_gen__MaybeTicketSlot_25, ll_backend__disj_gen__STATE_VARIABLE_CI_0_49, &ll_backend__disj_gen__STATE_VARIABLE_CI_55_55, ll_backend__disj_gen__STATE_VARIABLE_CLD_54_54, &ll_backend__disj_gen__STATE_VARIABLE_CLD_56_56);
    }
#line 396 "disj_gen.m"
#line 396 "disj_gen.m"
    switch (ll_backend__disj_gen__CodeModel_14) {
#line 396 "disj_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 396 "disj_gen.m"
      case (MR_Integer) 0:
#line 396 "disj_gen.m"
      case (MR_Integer) 1:
#line 399 "disj_gen.m"
        {
#line 399 "disj_gen.m"
          MR_Word ll_backend__disj_gen__TypeCtorInfo_83_83;
#line 399 "disj_gen.m"
          MR_Word ll_backend__disj_gen__MaybeRbmmInfo_34;

#line 405 "disj_gen.m"
          {
#line 405 "disj_gen.m"
            libs__globals__lookup_bool_option_3_p_0(ll_backend__disj_gen__Globals_23, (MR_Integer) 301, &ll_backend__disj_gen__ReclaimHeap_26);
          }
#line 4641 "ll_backend.disj_gen.c"
          ll_backend__disj_gen__TypeCtorInfo_83_83 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 407 "disj_gen.m"
          {
#line 407 "disj_gen.m"
            ll_backend__disj_gen__SaveHpCode_27 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_83_83);
          }
#line 408 "disj_gen.m"
          ll_backend__disj_gen__MaybeHpSlot_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 410 "disj_gen.m"
          {
#line 410 "disj_gen.m"
            ll_backend__disj_gen__MaybeRbmmInfo_34 = hlds__hlds_goal__goal_info_get_maybe_rbmm_1_f_0(ll_backend__disj_gen__DisjGoalInfo_17);
          }
#line 418 "disj_gen.m"
          if ((ll_backend__disj_gen__MaybeRbmmInfo_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 412 "disj_gen.m"
            {
#line 413 "disj_gen.m"
              {
#line 413 "disj_gen.m"
                ll_backend__disj_gen__BeforeEnterRegionCode_29 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_83_83);
              }
#line 414 "disj_gen.m"
              {
#line 414 "disj_gen.m"
                ll_backend__disj_gen__LaterRegionCode_30 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_83_83);
              }
#line 415 "disj_gen.m"
              {
#line 415 "disj_gen.m"
                ll_backend__disj_gen__LastRegionCode_31 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_83_83);
              }
#line 416 "disj_gen.m"
              ll_backend__disj_gen__RegionStackVarsToRelease_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 417 "disj_gen.m"
              ll_backend__disj_gen__RegionCommitDisjCleanup_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 412 "disj_gen.m"
              ll_backend__disj_gen__STATE_VARIABLE_CI_65_65 = ll_backend__disj_gen__STATE_VARIABLE_CI_55_55;
#line 412 "disj_gen.m"
              ll_backend__disj_gen__STATE_VARIABLE_CLD_66_66 = ll_backend__disj_gen__STATE_VARIABLE_CLD_56_56;
#line 412 "disj_gen.m"
            }
#line 418 "disj_gen.m"
          else
#line 419 "disj_gen.m"
            {
#line 419 "disj_gen.m"
              MR_Word ll_backend__disj_gen__RbmmInfo_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__MaybeRbmmInfo_34, (MR_Integer) 0)));
#line 419 "disj_gen.m"
              MR_Word ll_backend__disj_gen__DisjCreatedRegionVars_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__RbmmInfo_35, (MR_Integer) 0)));
#line 419 "disj_gen.m"
              MR_Word ll_backend__disj_gen__DisjRemovedRegionVars_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__RbmmInfo_35, (MR_Integer) 1)));
#line 419 "disj_gen.m"
              MR_Word ll_backend__disj_gen__DisjAllocRegionVars_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__RbmmInfo_35, (MR_Integer) 3)));
#line 420 "disj_gen.m"
              MR_Word ll_backend__disj_gen___DisjCarriedRegionVars_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__RbmmInfo_35, (MR_Integer) 2)));
#line 420 "disj_gen.m"
              MR_Word ll_backend__disj_gen___DisjUsedRegionVars_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__RbmmInfo_35, (MR_Integer) 4)));
#line 424 "disj_gen.m"
              MR_Word ll_backend__disj_gen__TypeInfo_84_84 = (MR_Word) &ll_backend__disj_gen_scalar_common_1[1];

#line 424 "disj_gen.m"
              {
#line 424 "disj_gen.m"
                ll_backend__disj_gen__succeeded = mercury__set__is_empty_1_p_0(ll_backend__disj_gen__TypeInfo_84_84, ll_backend__disj_gen__DisjCreatedRegionVars_36);
              }
#line 424 "disj_gen.m"
              if (ll_backend__disj_gen__succeeded)
#line 424 "disj_gen.m"
                {
#line 425 "disj_gen.m"
                  {
#line 425 "disj_gen.m"
                    ll_backend__disj_gen__succeeded = mercury__set__is_empty_1_p_0(ll_backend__disj_gen__TypeInfo_84_84, ll_backend__disj_gen__DisjRemovedRegionVars_37);
                  }
#line 424 "disj_gen.m"
                  if (ll_backend__disj_gen__succeeded)
#line 426 "disj_gen.m"
                    {
#line 426 "disj_gen.m"
                      ll_backend__disj_gen__succeeded = mercury__set__is_empty_1_p_0(ll_backend__disj_gen__TypeInfo_84_84, ll_backend__disj_gen__DisjAllocRegionVars_39);
                    }
#line 424 "disj_gen.m"
                }
#line 423 "disj_gen.m"
              if (ll_backend__disj_gen__succeeded)
#line 428 "disj_gen.m"
                {
#line 428 "disj_gen.m"
                  {
#line 428 "disj_gen.m"
                    ll_backend__disj_gen__BeforeEnterRegionCode_29 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_83_83);
                  }
#line 429 "disj_gen.m"
                  {
#line 429 "disj_gen.m"
                    ll_backend__disj_gen__LaterRegionCode_30 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_83_83);
                  }
#line 430 "disj_gen.m"
                  {
#line 430 "disj_gen.m"
                    ll_backend__disj_gen__LastRegionCode_31 = mercury__cord__empty_0_f_0(ll_backend__disj_gen__TypeCtorInfo_83_83);
                  }
#line 431 "disj_gen.m"
                  ll_backend__disj_gen__RegionStackVarsToRelease_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 432 "disj_gen.m"
                  ll_backend__disj_gen__RegionCommitDisjCleanup_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 428 "disj_gen.m"
                  ll_backend__disj_gen__STATE_VARIABLE_CLD_66_66 = ll_backend__disj_gen__STATE_VARIABLE_CLD_56_56;
#line 428 "disj_gen.m"
                  ll_backend__disj_gen__STATE_VARIABLE_CI_65_65 = ll_backend__disj_gen__STATE_VARIABLE_CI_55_55;
#line 428 "disj_gen.m"
                }
#line 423 "disj_gen.m"
              else
#line 440 "disj_gen.m"
                {
#line 440 "disj_gen.m"
                  MR_Word ll_backend__disj_gen__V_58_58;
#line 440 "disj_gen.m"
                  MR_Word ll_backend__disj_gen__V_59_59;

#line 437 "disj_gen.m"
                  {
#line 437 "disj_gen.m"
                    ll_backend__disj_gen__V_58_58 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__disj_gen__TypeCtorInfo_82_82, ll_backend__disj_gen__DisjRemovedRegionVars_37);
                  }
#line 438 "disj_gen.m"
                  {
#line 438 "disj_gen.m"
                    ll_backend__disj_gen__V_59_59 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__disj_gen__TypeCtorInfo_82_82, ll_backend__disj_gen__DisjAllocRegionVars_39);
                  }
#line 436 "disj_gen.m"
                  {
#line 436 "disj_gen.m"
                    ll_backend__disj_gen__maybe_create_disj_region_frame_semi_12_p_0(ll_backend__disj_gen__AddRegionOps_13, ll_backend__disj_gen__V_58_58, ll_backend__disj_gen__V_59_59, &ll_backend__disj_gen__BeforeEnterRegionCode_29, &ll_backend__disj_gen__LaterRegionCode_30, &ll_backend__disj_gen__LastRegionCode_31, &ll_backend__disj_gen__RegionStackVarsToRelease_32, &ll_backend__disj_gen__RegionCommitDisjCleanup_33, ll_backend__disj_gen__STATE_VARIABLE_CI_55_55, &ll_backend__disj_gen__STATE_VARIABLE_CI_65_65, ll_backend__disj_gen__STATE_VARIABLE_CLD_56_56, &ll_backend__disj_gen__STATE_VARIABLE_CLD_66_66);
                  }
#line 440 "disj_gen.m"
                }
#line 419 "disj_gen.m"
            }
#line 399 "disj_gen.m"
        }
#line 396 "disj_gen.m"
        break;
#line 396 "disj_gen.m"
      case (MR_Integer) 2:
#line 380 "disj_gen.m"
        {
#line 380 "disj_gen.m"
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_63_63;
#line 380 "disj_gen.m"
          MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_64_64;

#line 385 "disj_gen.m"
          {
#line 385 "disj_gen.m"
            libs__globals__lookup_bool_option_3_p_0(ll_backend__disj_gen__Globals_23, (MR_Integer) 302, &ll_backend__disj_gen__ReclaimHeap_26);
          }
#line 387 "disj_gen.m"
          {
#line 387 "disj_gen.m"
            ll_backend__code_loc_dep__maybe_save_hp_7_p_0(ll_backend__disj_gen__ReclaimHeap_26, &ll_backend__disj_gen__SaveHpCode_27, &ll_backend__disj_gen__MaybeHpSlot_28, ll_backend__disj_gen__STATE_VARIABLE_CI_55_55, &ll_backend__disj_gen__STATE_VARIABLE_CI_63_63, ll_backend__disj_gen__STATE_VARIABLE_CLD_56_56, &ll_backend__disj_gen__STATE_VARIABLE_CLD_64_64);
          }
#line 389 "disj_gen.m"
          {
#line 389 "disj_gen.m"
            ll_backend__disj_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_114_101_97_116_101_95_100_105_115_106_95_114_101_103_105_111_110_95_102_114_97_109_101_95_110_111_110_100_101_116_95_95_91_50_93_95_48_9_p_0(ll_backend__disj_gen__AddRegionOps_13, &ll_backend__disj_gen__BeforeEnterRegionCode_29, &ll_backend__disj_gen__LaterRegionCode_30, &ll_backend__disj_gen__LastRegionCode_31, ll_backend__disj_gen__STATE_VARIABLE_CI_63_63, &ll_backend__disj_gen__STATE_VARIABLE_CI_65_65, ll_backend__disj_gen__STATE_VARIABLE_CLD_64_64, &ll_backend__disj_gen__STATE_VARIABLE_CLD_66_66);
          }
#line 394 "disj_gen.m"
          ll_backend__disj_gen__RegionStackVarsToRelease_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 395 "disj_gen.m"
          ll_backend__disj_gen__RegionCommitDisjCleanup_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 380 "disj_gen.m"
        }
#line 396 "disj_gen.m"
        break;
#line 396 "disj_gen.m"
    }
#line 448 "disj_gen.m"
    {
#line 448 "disj_gen.m"
      ll_backend__code_loc_dep__prepare_for_disj_hijack_7_p_0(ll_backend__disj_gen__CodeModel_14, &ll_backend__disj_gen__HijackInfo_42, &ll_backend__disj_gen__PrepareHijackCode_43, ll_backend__disj_gen__STATE_VARIABLE_CI_65_65, &ll_backend__disj_gen__STATE_VARIABLE_CI_67_67, ll_backend__disj_gen__STATE_VARIABLE_CLD_66_66, &ll_backend__disj_gen__STATE_VARIABLE_CLD_68_68);
    }
#line 451 "disj_gen.m"
    {
#line 451 "disj_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__disj_gen__EndLabel_44, ll_backend__disj_gen__STATE_VARIABLE_CI_67_67, &ll_backend__disj_gen__STATE_VARIABLE_CI_69_69);
    }
#line 453 "disj_gen.m"
    {
#line 453 "disj_gen.m"
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CLD_68_68, &ll_backend__disj_gen__BranchStart_45);
    }
#line 454 "disj_gen.m"
    {
#line 454 "disj_gen.m"
      ll_backend__disj_gen__generate_disjuncts_19_p_0(ll_backend__disj_gen__Goals_16, ll_backend__disj_gen__CodeModel_14, ll_backend__disj_gen__ResumeMap_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__disj_gen__HijackInfo_42, ll_backend__disj_gen__DisjGoalInfo_17, ll_backend__disj_gen__RegionCommitDisjCleanup_33, ll_backend__disj_gen__EndLabel_44, ll_backend__disj_gen__ReclaimHeap_26, ll_backend__disj_gen__MaybeHpSlot_28, ll_backend__disj_gen__MaybeTicketSlot_25, ll_backend__disj_gen__LaterRegionCode_30, ll_backend__disj_gen__LastRegionCode_31, ll_backend__disj_gen__BranchStart_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__disj_gen__MaybeEnd_46, &ll_backend__disj_gen__GoalsCode_47, ll_backend__disj_gen__STATE_VARIABLE_CI_69_69, &ll_backend__disj_gen__STATE_VARIABLE_CI_72_72);
    }
#line 459 "disj_gen.m"
    {
#line 459 "disj_gen.m"
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__disj_gen__DisjGoalInfo_17, &ll_backend__disj_gen__StoreMap_48);
    }
#line 460 "disj_gen.m"
    {
#line 460 "disj_gen.m"
      ll_backend__code_loc_dep__after_all_branches_4_p_0(ll_backend__disj_gen__StoreMap_48, ll_backend__disj_gen__MaybeEnd_46, ll_backend__disj_gen__STATE_VARIABLE_CI_72_72, &ll_backend__disj_gen__STATE_VARIABLE_CLD_73_73);
    }
#line 461 "disj_gen.m"
    {
#line 461 "disj_gen.m"
      ll_backend__code_loc_dep__release_several_temp_slots_6_p_0(ll_backend__disj_gen__RegionStackVarsToRelease_32, (MR_Integer) 1, ll_backend__disj_gen__STATE_VARIABLE_CI_72_72, ll_backend__disj_gen__STATE_VARIABLE_CI_50, ll_backend__disj_gen__STATE_VARIABLE_CLD_73_73, &ll_backend__disj_gen__STATE_VARIABLE_CLD_76_76);
    }
#line 466 "disj_gen.m"
#line 466 "disj_gen.m"
    switch (ll_backend__disj_gen__CodeModel_14) {
#line 466 "disj_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 466 "disj_gen.m"
      case (MR_Integer) 0:
#line 467 "disj_gen.m"
        *ll_backend__disj_gen__STATE_VARIABLE_CLD_52 = ll_backend__disj_gen__STATE_VARIABLE_CLD_76_76;
#line 466 "disj_gen.m"
        break;
#line 466 "disj_gen.m"
      case (MR_Integer) 2:
#line 465 "disj_gen.m"
        {
#line 465 "disj_gen.m"
          ll_backend__code_loc_dep__set_resume_point_to_unknown_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CLD_76_76, ll_backend__disj_gen__STATE_VARIABLE_CLD_52);
        }
#line 466 "disj_gen.m"
        break;
#line 466 "disj_gen.m"
      case (MR_Integer) 1:
#line 468 "disj_gen.m"
        *ll_backend__disj_gen__STATE_VARIABLE_CLD_52 = ll_backend__disj_gen__STATE_VARIABLE_CLD_76_76;
#line 466 "disj_gen.m"
        break;
#line 466 "disj_gen.m"
    }
#line 4884 "ll_backend.disj_gen.c"
    ll_backend__disj_gen__TypeCtorInfo_85_85 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 474 "disj_gen.m"
    {
#line 474 "disj_gen.m"
      ll_backend__disj_gen__V_81_81 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_85_85, ll_backend__disj_gen__PrepareHijackCode_43, ll_backend__disj_gen__GoalsCode_47);
    }
#line 474 "disj_gen.m"
    {
#line 474 "disj_gen.m"
      ll_backend__disj_gen__V_80_80 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_85_85, ll_backend__disj_gen__BeforeEnterRegionCode_29, ll_backend__disj_gen__V_81_81);
    }
#line 473 "disj_gen.m"
    {
#line 473 "disj_gen.m"
      ll_backend__disj_gen__V_79_79 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_85_85, ll_backend__disj_gen__SaveHpCode_27, ll_backend__disj_gen__V_80_80);
    }
#line 473 "disj_gen.m"
    {
#line 473 "disj_gen.m"
      ll_backend__disj_gen__V_78_78 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_85_85, ll_backend__disj_gen__SaveTicketCode_24, ll_backend__disj_gen__V_79_79);
    }
#line 473 "disj_gen.m"
    {
#line 473 "disj_gen.m"
      *ll_backend__disj_gen__Code_18 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_85_85, ll_backend__disj_gen__FlushCode_22, ll_backend__disj_gen__V_78_78);
    }
#line 362 "disj_gen.m"
  }
#line 356 "disj_gen.m"
}

#line 211 "disj_gen.m"
static void MR_CALL 
ll_backend__disj_gen__generate_lookup_disj_7_p_0(
#line 211 "disj_gen.m"
  MR_Word ll_backend__disj_gen__ResumeVars_8,
#line 211 "disj_gen.m"
  MR_Word ll_backend__disj_gen__LookupDisjInfo_9,
#line 211 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__Code_10,
#line 211 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_61,
#line 211 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_62,
#line 211 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_63,
#line 211 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_64)
#line 211 "disj_gen.m"
{
#line 215 "disj_gen.m"
  {
#line 215 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__TypeCtorInfo_196_196;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__OutVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 0)));
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__StoreMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 1)));
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeEnd0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 2)));
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__Liveness_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 3)));
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__CurSlot_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 4)));
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__ResumeMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 5)));
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__FlushCode_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 6)));
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__SaveTicketCode_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 7)));
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeTicketSlot_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 8)));
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__SaveHpCode_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 9)));
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeHpSlot_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 10)));
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__HijackInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 11)));
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__PrepareHijackCode_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 12)));
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__Solns_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 13)));
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__LLDSTypes_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__LookupDisjInfo_9, (MR_Integer) 14)));
#line 215 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__NumSolns_28;
#line 215 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__NumOutVars_29;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__SolnVectorAddr_30;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__SolnVectorAddrRval_31;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__EndLabel_32;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__BaseReg_33;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__BaseRegInitCode_34;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__SaveSlotCode_35;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__DisjEntry_36;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__ResumePoint_37;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__UpdateRedoipCode_38;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__FirstFlushResumeVarsCode_39;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__FirstZombies_40;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeEnd1_41;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__FirstBranchEndCode_42;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__GotoEndCode_43;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__ResumePointCode_44;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__RestoreTicketCode_45;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__RestoreHpCode_46;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__LaterBaseReg_47;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__UndoLabel_48;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__AfterUndoLabel_49;
#line 215 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__MaxSlot_50;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__TestMoreSolnsCode_51;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__UndoHijackCode_52;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__AfterUndoLabelCode_53;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__LaterFlushResumeVarsCode_55;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__LaterZombies_56;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeEnd_57;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__LaterBranchEndCode_58;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__EndLabelCode_59;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__Comment_60;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_65_65;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_66_66;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_68_68;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_70_70;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_71_71;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_72_72;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_73_73;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_74_74;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_75_75;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_81_81;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_82_82;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_83_83;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_84_84;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_86_86;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_88_88;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_90_90;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_92_92;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_93_93;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_94_94;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_95_95;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_96_96;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_97_97;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_98_98;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_99_99;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_101_101;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_102_102;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_103_103;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_106_106;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_107_107;
#line 215 "disj_gen.m"
    MR_Integer ll_backend__disj_gen__V_109_109;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_111_111;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_112_112;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_113_113;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_114_114;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_116_116;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_117_117;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_118_118;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_119_119;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_121_121;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_122_122;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_123_123;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_124_124;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_126_126;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_127_127;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_128_128;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_129_129;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_135_135;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_136_136;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_137_137;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_138_138;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_140_140;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_141_141;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_142_142;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_145_145;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_146_146;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_147_147;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_148_148;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_150_150;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_151_151;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_152_152;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_153_153;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_154_154;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_161_161;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_163_163;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_164_164;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_165_165;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_166_166;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_167_167;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_169_169;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_170_170;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_176_176;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_177_177;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_178_178;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_179_179;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_180_180;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_181_181;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_182_182;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_183_183;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_184_184;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_185_185;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_186_186;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_187_187;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_188_188;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_189_189;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_190_190;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_191_191;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_192_192;
#line 215 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_193_193;
#line 307 "disj_gen.m"
    MR_Word ll_backend__disj_gen___LaterUpdateRedoipCode_54;

#line 221 "disj_gen.m"
    {
#line 221 "disj_gen.m"
      mercury__list__length_2_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[0], ll_backend__disj_gen__Solns_26, &ll_backend__disj_gen__NumSolns_28);
    }
#line 222 "disj_gen.m"
    {
#line 222 "disj_gen.m"
      mercury__list__length_2_p_0((MR_Word) &ll_backend__disj_gen_scalar_common_1[1], ll_backend__disj_gen__OutVars_13, &ll_backend__disj_gen__NumOutVars_29);
    }
#line 224 "disj_gen.m"
    {
#line 224 "disj_gen.m"
      ll_backend__code_info__add_vector_static_cell_5_p_0(ll_backend__disj_gen__LLDSTypes_27, ll_backend__disj_gen__Solns_26, &ll_backend__disj_gen__SolnVectorAddr_30, ll_backend__disj_gen__STATE_VARIABLE_CI_0_61, &ll_backend__disj_gen__STATE_VARIABLE_CI_65_65);
    }
#line 225 "disj_gen.m"
    {
#line 225 "disj_gen.m"
      ll_backend__disj_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 225 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 225 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_66_66, 1) = ((MR_Box) (ll_backend__disj_gen__SolnVectorAddr_30));
#line 225 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_66_66, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 225 "disj_gen.m"
    }
#line 225 "disj_gen.m"
    {
#line 225 "disj_gen.m"
      ll_backend__disj_gen__SolnVectorAddrRval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__SolnVectorAddrRval_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 225 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__SolnVectorAddrRval_31, 1) = ((MR_Box) (ll_backend__disj_gen__V_66_66));
#line 225 "disj_gen.m"
    }
#line 227 "disj_gen.m"
    {
#line 227 "disj_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__disj_gen__EndLabel_32, ll_backend__disj_gen__STATE_VARIABLE_CI_65_65, &ll_backend__disj_gen__STATE_VARIABLE_CI_68_68);
    }
#line 232 "disj_gen.m"
    {
#line 232 "disj_gen.m"
      ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(ll_backend__disj_gen__StoreMap_14, (MR_Integer) 0, &ll_backend__disj_gen__BaseReg_33, ll_backend__disj_gen__STATE_VARIABLE_CLD_0_63, &ll_backend__disj_gen__STATE_VARIABLE_CLD_70_70);
    }
#line 5261 "ll_backend.disj_gen.c"
    ll_backend__disj_gen__TypeCtorInfo_196_196 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 236 "disj_gen.m"
    ll_backend__disj_gen__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__disj_gen_scalar_common_3[0]);
#line 236 "disj_gen.m"
    {
#line 236 "disj_gen.m"
      ll_backend__disj_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 236 "disj_gen.m"
      MR_hl_field(MR_mktag(2), ll_backend__disj_gen__V_74_74, 0) = ((MR_Box) (ll_backend__disj_gen__SolnVectorAddrRval_31));
#line 236 "disj_gen.m"
      MR_hl_field(MR_mktag(2), ll_backend__disj_gen__V_74_74, 1) = ((MR_Box) (ll_backend__disj_gen__V_75_75));
#line 236 "disj_gen.m"
      MR_hl_field(MR_mktag(2), ll_backend__disj_gen__V_74_74, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__disj_gen_scalar_common_1[11])));
#line 236 "disj_gen.m"
    }
#line 236 "disj_gen.m"
    {
#line 236 "disj_gen.m"
      ll_backend__disj_gen__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 236 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_73_73, 1) = ((MR_Box) (ll_backend__disj_gen__V_74_74));
#line 236 "disj_gen.m"
    }
#line 235 "disj_gen.m"
    {
#line 235 "disj_gen.m"
      ll_backend__disj_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 235 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 235 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_72_72, 1) = ((MR_Box) (ll_backend__disj_gen__BaseReg_33));
#line 235 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_72_72, 2) = ((MR_Box) (ll_backend__disj_gen__V_73_73));
#line 235 "disj_gen.m"
    }
#line 235 "disj_gen.m"
    {
#line 235 "disj_gen.m"
      ll_backend__disj_gen__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 235 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_71_71, 0) = ((MR_Box) (ll_backend__disj_gen__V_72_72));
#line 235 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_71_71, 1) = ((MR_Box) ((MR_String) "Compute base address for this case"));
#line 235 "disj_gen.m"
    }
#line 234 "disj_gen.m"
    {
#line 234 "disj_gen.m"
      ll_backend__disj_gen__BaseRegInitCode_34 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ((MR_Box) (ll_backend__disj_gen__V_71_71)));
    }
#line 241 "disj_gen.m"
    {
#line 241 "disj_gen.m"
      ll_backend__disj_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 241 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_84_84, 0) = ((MR_Box) (ll_backend__disj_gen__NumOutVars_29));
#line 241 "disj_gen.m"
    }
#line 241 "disj_gen.m"
    {
#line 241 "disj_gen.m"
      ll_backend__disj_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 241 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_83_83, 1) = ((MR_Box) (ll_backend__disj_gen__V_84_84));
#line 241 "disj_gen.m"
    }
#line 241 "disj_gen.m"
    {
#line 241 "disj_gen.m"
      ll_backend__disj_gen__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 241 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 241 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_82_82, 1) = ((MR_Box) (ll_backend__disj_gen__CurSlot_17));
#line 241 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_82_82, 2) = ((MR_Box) (ll_backend__disj_gen__V_83_83));
#line 241 "disj_gen.m"
    }
#line 241 "disj_gen.m"
    {
#line 241 "disj_gen.m"
      ll_backend__disj_gen__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 241 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_81_81, 0) = ((MR_Box) (ll_backend__disj_gen__V_82_82));
#line 241 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_81_81, 1) = ((MR_Box) ((MR_String) "Setup current slot in the solution array"));
#line 241 "disj_gen.m"
    }
#line 240 "disj_gen.m"
    {
#line 240 "disj_gen.m"
      ll_backend__disj_gen__SaveSlotCode_35 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ((MR_Box) (ll_backend__disj_gen__V_81_81)));
    }
#line 245 "disj_gen.m"
    {
#line 245 "disj_gen.m"
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CLD_70_70, &ll_backend__disj_gen__DisjEntry_36);
    }
#line 247 "disj_gen.m"
    {
#line 247 "disj_gen.m"
      ll_backend__disj_gen__V_86_86 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__disj_gen__ResumeVars_8);
    }
#line 247 "disj_gen.m"
    {
#line 247 "disj_gen.m"
      ll_backend__code_loc_dep__make_resume_point_6_p_0(ll_backend__disj_gen__V_86_86, (MR_Integer) 1, ll_backend__disj_gen__ResumeMap_18, &ll_backend__disj_gen__ResumePoint_37, ll_backend__disj_gen__STATE_VARIABLE_CI_68_68, &ll_backend__disj_gen__STATE_VARIABLE_CI_88_88);
    }
#line 249 "disj_gen.m"
    {
#line 249 "disj_gen.m"
      ll_backend__code_loc_dep__effect_resume_point_5_p_0(ll_backend__disj_gen__ResumePoint_37, (MR_Integer) 2, &ll_backend__disj_gen__UpdateRedoipCode_38, ll_backend__disj_gen__STATE_VARIABLE_CLD_70_70, &ll_backend__disj_gen__STATE_VARIABLE_CLD_90_90);
    }
#line 250 "disj_gen.m"
    {
#line 250 "disj_gen.m"
      ll_backend__lookup_util__generate_offset_assigns_6_p_0(ll_backend__disj_gen__OutVars_13, (MR_Integer) 0, ll_backend__disj_gen__BaseReg_33, ll_backend__disj_gen__STATE_VARIABLE_CI_88_88, ll_backend__disj_gen__STATE_VARIABLE_CLD_90_90, &ll_backend__disj_gen__STATE_VARIABLE_CLD_92_92);
    }
#line 251 "disj_gen.m"
    {
#line 251 "disj_gen.m"
      ll_backend__code_loc_dep__flush_resume_vars_to_stack_4_p_0(&ll_backend__disj_gen__FirstFlushResumeVarsCode_39, ll_backend__disj_gen__STATE_VARIABLE_CI_88_88, ll_backend__disj_gen__STATE_VARIABLE_CLD_92_92, &ll_backend__disj_gen__STATE_VARIABLE_CLD_93_93);
    }
#line 257 "disj_gen.m"
    {
#line 257 "disj_gen.m"
      ll_backend__code_loc_dep__pop_resume_point_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CLD_93_93, &ll_backend__disj_gen__STATE_VARIABLE_CLD_94_94);
    }
#line 258 "disj_gen.m"
    {
#line 258 "disj_gen.m"
      ll_backend__code_loc_dep__pickup_zombies_3_p_0(&ll_backend__disj_gen__FirstZombies_40, ll_backend__disj_gen__STATE_VARIABLE_CLD_94_94, &ll_backend__disj_gen__STATE_VARIABLE_CLD_95_95);
    }
#line 259 "disj_gen.m"
    {
#line 259 "disj_gen.m"
      ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ll_backend__disj_gen__FirstZombies_40, ll_backend__disj_gen__STATE_VARIABLE_CLD_95_95, &ll_backend__disj_gen__STATE_VARIABLE_CLD_96_96);
    }
#line 261 "disj_gen.m"
    {
#line 261 "disj_gen.m"
      ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__disj_gen__StoreMap_14, ll_backend__disj_gen__Liveness_16, ll_backend__disj_gen__MaybeEnd0_15, &ll_backend__disj_gen__MaybeEnd1_41, &ll_backend__disj_gen__FirstBranchEndCode_42, ll_backend__disj_gen__STATE_VARIABLE_CI_88_88, ll_backend__disj_gen__STATE_VARIABLE_CLD_96_96);
    }
#line 265 "disj_gen.m"
    {
#line 265 "disj_gen.m"
      ll_backend__disj_gen__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 265 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_99_99, 0) = ((MR_Box) (ll_backend__disj_gen__EndLabel_32));
#line 265 "disj_gen.m"
    }
#line 265 "disj_gen.m"
    {
#line 265 "disj_gen.m"
      ll_backend__disj_gen__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 265 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_98_98, 1) = ((MR_Box) (ll_backend__disj_gen__V_99_99));
#line 265 "disj_gen.m"
    }
#line 265 "disj_gen.m"
    {
#line 265 "disj_gen.m"
      ll_backend__disj_gen__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 265 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_97_97, 0) = ((MR_Box) (ll_backend__disj_gen__V_98_98));
#line 265 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_97_97, 1) = ((MR_Box) ((MR_String) "goto end of lookup disj"));
#line 265 "disj_gen.m"
    }
#line 264 "disj_gen.m"
    {
#line 264 "disj_gen.m"
      ll_backend__disj_gen__GotoEndCode_43 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ((MR_Box) (ll_backend__disj_gen__V_97_97)));
    }
#line 268 "disj_gen.m"
    {
#line 268 "disj_gen.m"
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__disj_gen__DisjEntry_36, ll_backend__disj_gen__STATE_VARIABLE_CI_88_88, &ll_backend__disj_gen__STATE_VARIABLE_CLD_101_101);
    }
#line 269 "disj_gen.m"
    {
#line 269 "disj_gen.m"
      ll_backend__code_loc_dep__generate_resume_point_6_p_0(ll_backend__disj_gen__ResumePoint_37, &ll_backend__disj_gen__ResumePointCode_44, ll_backend__disj_gen__STATE_VARIABLE_CI_88_88, &ll_backend__disj_gen__STATE_VARIABLE_CI_102_102, ll_backend__disj_gen__STATE_VARIABLE_CLD_101_101, &ll_backend__disj_gen__STATE_VARIABLE_CLD_103_103);
    }
#line 271 "disj_gen.m"
    {
#line 271 "disj_gen.m"
      ll_backend__code_loc_dep__maybe_reset_ticket_3_p_0(ll_backend__disj_gen__MaybeTicketSlot_21, (MR_Integer) 0, &ll_backend__disj_gen__RestoreTicketCode_45);
    }
#line 272 "disj_gen.m"
    {
#line 272 "disj_gen.m"
      ll_backend__code_loc_dep__maybe_restore_hp_2_p_0(ll_backend__disj_gen__MaybeHpSlot_23, &ll_backend__disj_gen__RestoreHpCode_46);
    }
#line 274 "disj_gen.m"
    {
#line 274 "disj_gen.m"
      ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(ll_backend__disj_gen__StoreMap_14, (MR_Integer) 0, &ll_backend__disj_gen__LaterBaseReg_47, ll_backend__disj_gen__STATE_VARIABLE_CLD_103_103, &ll_backend__disj_gen__STATE_VARIABLE_CLD_106_106);
    }
#line 275 "disj_gen.m"
    {
#line 275 "disj_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__disj_gen__UndoLabel_48, ll_backend__disj_gen__STATE_VARIABLE_CI_102_102, &ll_backend__disj_gen__STATE_VARIABLE_CI_107_107);
    }
#line 276 "disj_gen.m"
    {
#line 276 "disj_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__disj_gen__AfterUndoLabel_49, ll_backend__disj_gen__STATE_VARIABLE_CI_107_107, ll_backend__disj_gen__STATE_VARIABLE_CI_62);
    }
#line 277 "disj_gen.m"
    ll_backend__disj_gen__V_109_109 = (ll_backend__disj_gen__NumSolns_28 - (MR_Integer) 1);
#line 277 "disj_gen.m"
    ll_backend__disj_gen__MaxSlot_50 = (ll_backend__disj_gen__V_109_109 * ll_backend__disj_gen__NumOutVars_29);
#line 279 "disj_gen.m"
    {
#line 279 "disj_gen.m"
      ll_backend__disj_gen__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 279 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_114_114, 0) = ((MR_Box) (ll_backend__disj_gen__CurSlot_17));
#line 279 "disj_gen.m"
    }
#line 279 "disj_gen.m"
    {
#line 279 "disj_gen.m"
      ll_backend__disj_gen__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 279 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 279 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_113_113, 1) = ((MR_Box) (ll_backend__disj_gen__LaterBaseReg_47));
#line 279 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_113_113, 2) = ((MR_Box) (ll_backend__disj_gen__V_114_114));
#line 279 "disj_gen.m"
    }
#line 279 "disj_gen.m"
    {
#line 279 "disj_gen.m"
      ll_backend__disj_gen__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 279 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_112_112, 0) = ((MR_Box) (ll_backend__disj_gen__V_113_113));
#line 279 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_112_112, 1) = ((MR_Box) ((MR_String) "Init later base register"));
#line 279 "disj_gen.m"
    }
#line 281 "disj_gen.m"
    {
#line 281 "disj_gen.m"
      ll_backend__disj_gen__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 281 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_121_121, 0) = ((MR_Box) (ll_backend__disj_gen__LaterBaseReg_47));
#line 281 "disj_gen.m"
    }
#line 282 "disj_gen.m"
    {
#line 282 "disj_gen.m"
      ll_backend__disj_gen__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 282 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_123_123, 0) = ((MR_Box) (ll_backend__disj_gen__MaxSlot_50));
#line 282 "disj_gen.m"
    }
#line 282 "disj_gen.m"
    {
#line 282 "disj_gen.m"
      ll_backend__disj_gen__V_122_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_122_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 282 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_122_122, 1) = ((MR_Box) (ll_backend__disj_gen__V_123_123));
#line 282 "disj_gen.m"
    }
#line 281 "disj_gen.m"
    {
#line 281 "disj_gen.m"
      ll_backend__disj_gen__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 281 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 281 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_119_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26))));
#line 281 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_119_119, 2) = ((MR_Box) (ll_backend__disj_gen__V_121_121));
#line 281 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_119_119, 3) = ((MR_Box) (ll_backend__disj_gen__V_122_122));
#line 281 "disj_gen.m"
    }
#line 283 "disj_gen.m"
    {
#line 283 "disj_gen.m"
      ll_backend__disj_gen__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 283 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_124_124, 0) = ((MR_Box) (ll_backend__disj_gen__UndoLabel_48));
#line 283 "disj_gen.m"
    }
#line 281 "disj_gen.m"
    {
#line 281 "disj_gen.m"
      ll_backend__disj_gen__V_118_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 281 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_118_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 281 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_118_118, 1) = ((MR_Box) (ll_backend__disj_gen__V_119_119));
#line 281 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_118_118, 2) = ((MR_Box) (ll_backend__disj_gen__V_124_124));
#line 281 "disj_gen.m"
    }
#line 281 "disj_gen.m"
    {
#line 281 "disj_gen.m"
      ll_backend__disj_gen__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 281 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_117_117, 0) = ((MR_Box) (ll_backend__disj_gen__V_118_118));
#line 281 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_117_117, 1) = ((MR_Box) ((MR_String) "Jump to undo hijack code if there are no more solutions"));
#line 281 "disj_gen.m"
    }
#line 286 "disj_gen.m"
    {
#line 286 "disj_gen.m"
      ll_backend__disj_gen__V_129_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 286 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_129_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 286 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 286 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_129_129, 2) = ((MR_Box) (ll_backend__disj_gen__V_114_114));
#line 286 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_129_129, 3) = ((MR_Box) (ll_backend__disj_gen__V_83_83));
#line 286 "disj_gen.m"
    }
#line 285 "disj_gen.m"
    {
#line 285 "disj_gen.m"
      ll_backend__disj_gen__V_128_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 285 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_128_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 285 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_128_128, 1) = ((MR_Box) (ll_backend__disj_gen__CurSlot_17));
#line 285 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_128_128, 2) = ((MR_Box) (ll_backend__disj_gen__V_129_129));
#line 285 "disj_gen.m"
    }
#line 285 "disj_gen.m"
    {
#line 285 "disj_gen.m"
      ll_backend__disj_gen__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 285 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_127_127, 0) = ((MR_Box) (ll_backend__disj_gen__V_128_128));
#line 285 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_127_127, 1) = ((MR_Box) ((MR_String) "Update current slot"));
#line 285 "disj_gen.m"
    }
#line 288 "disj_gen.m"
    {
#line 288 "disj_gen.m"
      ll_backend__disj_gen__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 288 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_138_138, 0) = ((MR_Box) (ll_backend__disj_gen__AfterUndoLabel_49));
#line 288 "disj_gen.m"
    }
#line 288 "disj_gen.m"
    {
#line 288 "disj_gen.m"
      ll_backend__disj_gen__V_137_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_137_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 288 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_137_137, 1) = ((MR_Box) (ll_backend__disj_gen__V_138_138));
#line 288 "disj_gen.m"
    }
#line 288 "disj_gen.m"
    {
#line 288 "disj_gen.m"
      ll_backend__disj_gen__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 288 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_136_136, 0) = ((MR_Box) (ll_backend__disj_gen__V_137_137));
#line 288 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_136_136, 1) = ((MR_Box) ((MR_String) "Jump around undo hijack code"));
#line 288 "disj_gen.m"
    }
#line 290 "disj_gen.m"
    {
#line 290 "disj_gen.m"
      ll_backend__disj_gen__V_142_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_142_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 290 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_142_142, 1) = ((MR_Box) (ll_backend__disj_gen__UndoLabel_48));
#line 290 "disj_gen.m"
    }
#line 290 "disj_gen.m"
    {
#line 290 "disj_gen.m"
      ll_backend__disj_gen__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 290 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_141_141, 0) = ((MR_Box) (ll_backend__disj_gen__V_142_142));
#line 290 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_141_141, 1) = ((MR_Box) ((MR_String) "Undo hijack code"));
#line 290 "disj_gen.m"
    }
#line 292 "disj_gen.m"
    {
#line 292 "disj_gen.m"
      ll_backend__disj_gen__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_140_140, 0) = ((MR_Box) (ll_backend__disj_gen__V_141_141));
#line 292 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 292 "disj_gen.m"
    }
#line 289 "disj_gen.m"
    {
#line 289 "disj_gen.m"
      ll_backend__disj_gen__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_135_135, 0) = ((MR_Box) (ll_backend__disj_gen__V_136_136));
#line 289 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_135_135, 1) = ((MR_Box) (ll_backend__disj_gen__V_140_140));
#line 289 "disj_gen.m"
    }
#line 287 "disj_gen.m"
    {
#line 287 "disj_gen.m"
      ll_backend__disj_gen__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_126_126, 0) = ((MR_Box) (ll_backend__disj_gen__V_127_127));
#line 287 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_126_126, 1) = ((MR_Box) (ll_backend__disj_gen__V_135_135));
#line 287 "disj_gen.m"
    }
#line 284 "disj_gen.m"
    {
#line 284 "disj_gen.m"
      ll_backend__disj_gen__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 284 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_116_116, 0) = ((MR_Box) (ll_backend__disj_gen__V_117_117));
#line 284 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_116_116, 1) = ((MR_Box) (ll_backend__disj_gen__V_126_126));
#line 284 "disj_gen.m"
    }
#line 280 "disj_gen.m"
    {
#line 280 "disj_gen.m"
      ll_backend__disj_gen__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_111_111, 0) = ((MR_Box) (ll_backend__disj_gen__V_112_112));
#line 280 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_111_111, 1) = ((MR_Box) (ll_backend__disj_gen__V_116_116));
#line 280 "disj_gen.m"
    }
#line 278 "disj_gen.m"
    {
#line 278 "disj_gen.m"
      ll_backend__disj_gen__TestMoreSolnsCode_51 = mercury__cord__from_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__V_111_111);
    }
#line 293 "disj_gen.m"
    {
#line 293 "disj_gen.m"
      ll_backend__code_loc_dep__undo_disj_hijack_4_p_0(ll_backend__disj_gen__HijackInfo_24, &ll_backend__disj_gen__UndoHijackCode_52, ll_backend__disj_gen__STATE_VARIABLE_CLD_106_106, &ll_backend__disj_gen__STATE_VARIABLE_CLD_145_145);
    }
#line 295 "disj_gen.m"
    {
#line 295 "disj_gen.m"
      ll_backend__disj_gen__V_148_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_148_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 295 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_148_148, 1) = ((MR_Box) (ll_backend__disj_gen__AfterUndoLabel_49));
#line 295 "disj_gen.m"
    }
#line 295 "disj_gen.m"
    {
#line 295 "disj_gen.m"
      ll_backend__disj_gen__V_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 295 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_147_147, 0) = ((MR_Box) (ll_backend__disj_gen__V_148_148));
#line 295 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_147_147, 1) = ((MR_Box) ((MR_String) "Return later answer code"));
#line 295 "disj_gen.m"
    }
#line 298 "disj_gen.m"
    {
#line 298 "disj_gen.m"
      ll_backend__disj_gen__V_154_154 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 298 "disj_gen.m"
      MR_hl_field(MR_mktag(2), ll_backend__disj_gen__V_154_154, 0) = ((MR_Box) (ll_backend__disj_gen__SolnVectorAddrRval_31));
#line 298 "disj_gen.m"
      MR_hl_field(MR_mktag(2), ll_backend__disj_gen__V_154_154, 1) = ((MR_Box) (ll_backend__disj_gen__V_75_75));
#line 298 "disj_gen.m"
      MR_hl_field(MR_mktag(2), ll_backend__disj_gen__V_154_154, 2) = ((MR_Box) (ll_backend__disj_gen__V_121_121));
#line 298 "disj_gen.m"
    }
#line 298 "disj_gen.m"
    {
#line 298 "disj_gen.m"
      ll_backend__disj_gen__V_153_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_153_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 298 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_153_153, 1) = ((MR_Box) (ll_backend__disj_gen__V_154_154));
#line 298 "disj_gen.m"
    }
#line 297 "disj_gen.m"
    {
#line 297 "disj_gen.m"
      ll_backend__disj_gen__V_152_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 297 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_152_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 297 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_152_152, 1) = ((MR_Box) (ll_backend__disj_gen__LaterBaseReg_47));
#line 297 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_152_152, 2) = ((MR_Box) (ll_backend__disj_gen__V_153_153));
#line 297 "disj_gen.m"
    }
#line 297 "disj_gen.m"
    {
#line 297 "disj_gen.m"
      ll_backend__disj_gen__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 297 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_151_151, 0) = ((MR_Box) (ll_backend__disj_gen__V_152_152));
#line 297 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_151_151, 1) = ((MR_Box) ((MR_String) "Compute base address in later array for this solution"));
#line 297 "disj_gen.m"
    }
#line 301 "disj_gen.m"
    {
#line 301 "disj_gen.m"
      ll_backend__disj_gen__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_150_150, 0) = ((MR_Box) (ll_backend__disj_gen__V_151_151));
#line 301 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_150_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 301 "disj_gen.m"
    }
#line 296 "disj_gen.m"
    {
#line 296 "disj_gen.m"
      ll_backend__disj_gen__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_146_146, 0) = ((MR_Box) (ll_backend__disj_gen__V_147_147));
#line 296 "disj_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_146_146, 1) = ((MR_Box) (ll_backend__disj_gen__V_150_150));
#line 296 "disj_gen.m"
    }
#line 294 "disj_gen.m"
    {
#line 294 "disj_gen.m"
      ll_backend__disj_gen__AfterUndoLabelCode_53 = mercury__cord__from_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__V_146_146);
    }
#line 307 "disj_gen.m"
    {
#line 307 "disj_gen.m"
      ll_backend__code_loc_dep__effect_resume_point_5_p_0(ll_backend__disj_gen__ResumePoint_37, (MR_Integer) 2, &ll_backend__disj_gen___LaterUpdateRedoipCode_54, ll_backend__disj_gen__STATE_VARIABLE_CLD_145_145, &ll_backend__disj_gen__STATE_VARIABLE_CLD_161_161);
    }
#line 309 "disj_gen.m"
    {
#line 309 "disj_gen.m"
      ll_backend__lookup_util__generate_offset_assigns_6_p_0(ll_backend__disj_gen__OutVars_13, (MR_Integer) 0, ll_backend__disj_gen__LaterBaseReg_47, *ll_backend__disj_gen__STATE_VARIABLE_CI_62, ll_backend__disj_gen__STATE_VARIABLE_CLD_161_161, &ll_backend__disj_gen__STATE_VARIABLE_CLD_163_163);
    }
#line 310 "disj_gen.m"
    {
#line 310 "disj_gen.m"
      ll_backend__code_loc_dep__flush_resume_vars_to_stack_4_p_0(&ll_backend__disj_gen__LaterFlushResumeVarsCode_55, *ll_backend__disj_gen__STATE_VARIABLE_CI_62, ll_backend__disj_gen__STATE_VARIABLE_CLD_163_163, &ll_backend__disj_gen__STATE_VARIABLE_CLD_164_164);
    }
#line 316 "disj_gen.m"
    {
#line 316 "disj_gen.m"
      ll_backend__code_loc_dep__pop_resume_point_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CLD_164_164, &ll_backend__disj_gen__STATE_VARIABLE_CLD_165_165);
    }
#line 317 "disj_gen.m"
    {
#line 317 "disj_gen.m"
      ll_backend__code_loc_dep__pickup_zombies_3_p_0(&ll_backend__disj_gen__LaterZombies_56, ll_backend__disj_gen__STATE_VARIABLE_CLD_165_165, &ll_backend__disj_gen__STATE_VARIABLE_CLD_166_166);
    }
#line 318 "disj_gen.m"
    {
#line 318 "disj_gen.m"
      ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ll_backend__disj_gen__LaterZombies_56, ll_backend__disj_gen__STATE_VARIABLE_CLD_166_166, &ll_backend__disj_gen__STATE_VARIABLE_CLD_167_167);
    }
#line 320 "disj_gen.m"
    {
#line 320 "disj_gen.m"
      ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(ll_backend__disj_gen__StoreMap_14, ll_backend__disj_gen__Liveness_16, ll_backend__disj_gen__MaybeEnd1_41, &ll_backend__disj_gen__MaybeEnd_57, &ll_backend__disj_gen__LaterBranchEndCode_58, *ll_backend__disj_gen__STATE_VARIABLE_CI_62, ll_backend__disj_gen__STATE_VARIABLE_CLD_167_167);
    }
#line 323 "disj_gen.m"
    {
#line 323 "disj_gen.m"
      ll_backend__code_loc_dep__after_all_branches_4_p_0(ll_backend__disj_gen__StoreMap_14, ll_backend__disj_gen__MaybeEnd_57, *ll_backend__disj_gen__STATE_VARIABLE_CI_62, ll_backend__disj_gen__STATE_VARIABLE_CLD_64);
    }
#line 326 "disj_gen.m"
    {
#line 326 "disj_gen.m"
      ll_backend__disj_gen__V_170_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_170_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 326 "disj_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__disj_gen__V_170_170, 1) = ((MR_Box) (ll_backend__disj_gen__EndLabel_32));
#line 326 "disj_gen.m"
    }
#line 326 "disj_gen.m"
    {
#line 326 "disj_gen.m"
      ll_backend__disj_gen__V_169_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_169_169, 0) = ((MR_Box) (ll_backend__disj_gen__V_170_170));
#line 326 "disj_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__disj_gen__V_169_169, 1) = ((MR_Box) ((MR_String) "end of lookup disj"));
#line 326 "disj_gen.m"
    }
#line 325 "disj_gen.m"
    {
#line 325 "disj_gen.m"
      ll_backend__disj_gen__EndLabelCode_59 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ((MR_Box) (ll_backend__disj_gen__V_169_169)));
    }
#line 328 "disj_gen.m"
    {
#line 328 "disj_gen.m"
      ll_backend__disj_gen__Comment_60 = mercury__cord__singleton_1_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ((MR_Box) (&ll_backend__disj_gen_scalar_common_1[12])));
    }
#line 351 "disj_gen.m"
    {
#line 351 "disj_gen.m"
      ll_backend__disj_gen__V_193_193 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__LaterBranchEndCode_58, ll_backend__disj_gen__EndLabelCode_59);
    }
#line 350 "disj_gen.m"
    {
#line 350 "disj_gen.m"
      ll_backend__disj_gen__V_192_192 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__LaterFlushResumeVarsCode_55, ll_backend__disj_gen__V_193_193);
    }
#line 349 "disj_gen.m"
    {
#line 349 "disj_gen.m"
      ll_backend__disj_gen__V_191_191 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__AfterUndoLabelCode_53, ll_backend__disj_gen__V_192_192);
    }
#line 348 "disj_gen.m"
    {
#line 348 "disj_gen.m"
      ll_backend__disj_gen__V_190_190 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__UndoHijackCode_52, ll_backend__disj_gen__V_191_191);
    }
#line 347 "disj_gen.m"
    {
#line 347 "disj_gen.m"
      ll_backend__disj_gen__V_189_189 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__TestMoreSolnsCode_51, ll_backend__disj_gen__V_190_190);
    }
#line 346 "disj_gen.m"
    {
#line 346 "disj_gen.m"
      ll_backend__disj_gen__V_188_188 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__RestoreHpCode_46, ll_backend__disj_gen__V_189_189);
    }
#line 345 "disj_gen.m"
    {
#line 345 "disj_gen.m"
      ll_backend__disj_gen__V_187_187 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__RestoreTicketCode_45, ll_backend__disj_gen__V_188_188);
    }
#line 344 "disj_gen.m"
    {
#line 344 "disj_gen.m"
      ll_backend__disj_gen__V_186_186 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__ResumePointCode_44, ll_backend__disj_gen__V_187_187);
    }
#line 343 "disj_gen.m"
    {
#line 343 "disj_gen.m"
      ll_backend__disj_gen__V_185_185 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__GotoEndCode_43, ll_backend__disj_gen__V_186_186);
    }
#line 342 "disj_gen.m"
    {
#line 342 "disj_gen.m"
      ll_backend__disj_gen__V_184_184 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__FirstBranchEndCode_42, ll_backend__disj_gen__V_185_185);
    }
#line 341 "disj_gen.m"
    {
#line 341 "disj_gen.m"
      ll_backend__disj_gen__V_183_183 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__FirstFlushResumeVarsCode_39, ll_backend__disj_gen__V_184_184);
    }
#line 340 "disj_gen.m"
    {
#line 340 "disj_gen.m"
      ll_backend__disj_gen__V_182_182 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__UpdateRedoipCode_38, ll_backend__disj_gen__V_183_183);
    }
#line 339 "disj_gen.m"
    {
#line 339 "disj_gen.m"
      ll_backend__disj_gen__V_181_181 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__PrepareHijackCode_25, ll_backend__disj_gen__V_182_182);
    }
#line 338 "disj_gen.m"
    {
#line 338 "disj_gen.m"
      ll_backend__disj_gen__V_180_180 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__SaveHpCode_22, ll_backend__disj_gen__V_181_181);
    }
#line 337 "disj_gen.m"
    {
#line 337 "disj_gen.m"
      ll_backend__disj_gen__V_179_179 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__SaveTicketCode_20, ll_backend__disj_gen__V_180_180);
    }
#line 336 "disj_gen.m"
    {
#line 336 "disj_gen.m"
      ll_backend__disj_gen__V_178_178 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__SaveSlotCode_35, ll_backend__disj_gen__V_179_179);
    }
#line 335 "disj_gen.m"
    {
#line 335 "disj_gen.m"
      ll_backend__disj_gen__V_177_177 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__BaseRegInitCode_34, ll_backend__disj_gen__V_178_178);
    }
#line 334 "disj_gen.m"
    {
#line 334 "disj_gen.m"
      ll_backend__disj_gen__V_176_176 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__FlushCode_19, ll_backend__disj_gen__V_177_177);
    }
#line 333 "disj_gen.m"
    {
#line 333 "disj_gen.m"
      *ll_backend__disj_gen__Code_10 = mercury__cord__f_43_43_2_f_0(ll_backend__disj_gen__TypeCtorInfo_196_196, ll_backend__disj_gen__Comment_60, ll_backend__disj_gen__V_176_176);
    }
#line 215 "disj_gen.m"
  }
#line 211 "disj_gen.m"
}

#line 138 "disj_gen.m"
static MR_bool MR_CALL 
ll_backend__disj_gen__is_lookup_disj_10_p_0(
#line 138 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddTrailOps_11,
#line 138 "disj_gen.m"
  MR_Word ll_backend__disj_gen__AddRegionOps_12,
#line 138 "disj_gen.m"
  MR_Word ll_backend__disj_gen__ResumeVars_13,
#line 138 "disj_gen.m"
  MR_Word ll_backend__disj_gen__Disjuncts_14,
#line 138 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjGoalInfo_15,
#line 138 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__LookupDisjInfo_16,
#line 138 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_52,
#line 138 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_53,
#line 138 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_54,
#line 138 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__AfterPrepPos_19)
#line 138 "disj_gen.m"
{
#line 145 "disj_gen.m"
  {
#line 145 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded = ((MR_tag((MR_Word) ll_backend__disj_gen__Disjuncts_14)) == (MR_mktag((MR_Integer) 1)));
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__TypeCtorInfo_75_75;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__FirstDisjunct_20;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__LaterDisjuncts_21;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__DisjNonLocals_25;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeTraceInfo_26;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__Globals_27;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__OutVars_28;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__VarTypes_29;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__OutTypes_30;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__ResumeMap_31;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__FlushCode_32;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__CurSlot_33;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__SaveTicketCode_34;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeTicketSlot_35;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__ReclaimHeap_36;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__SaveHpCode_37;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeHpSlot_38;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__HijackInfo_39;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__PrepareHijackCode_40;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__StoreMap_41;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__DisjStart_42;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__FirstSoln_43;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeEnd1_44;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__Liveness_45;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__LaterSolns_46;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__MaybeEnd_47;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__Solns_48;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__ExprnOpts_49;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__UnboxFloats_50;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__LLDSTypes_51;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_55_55;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_56_56;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_57_57;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_58_58;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_59_59;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_60_60;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_61_61;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_62_62;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_63_63;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_64_64;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_65_65;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_66_66;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_67_67;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_68_68;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_69_69;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_70_70;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_71_71;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_72_72;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_73_73;
#line 145 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_76_76;
#line 151 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_22_22;
#line 151 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_23_23;
#line 151 "disj_gen.m"
    MR_Word ll_backend__disj_gen__V_24_24;

#line 150 "disj_gen.m"
    if (ll_backend__disj_gen__succeeded)
#line 150 "disj_gen.m"
      {
#line 150 "disj_gen.m"
        ll_backend__disj_gen__FirstDisjunct_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Disjuncts_14, (MR_Integer) 0)));
#line 150 "disj_gen.m"
        ll_backend__disj_gen__LaterDisjuncts_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Disjuncts_14, (MR_Integer) 1)));
#line 151 "disj_gen.m"
        ll_backend__disj_gen__succeeded = ((MR_tag((MR_Word) ll_backend__disj_gen__LaterDisjuncts_21)) == (MR_mktag((MR_Integer) 1)));
#line 151 "disj_gen.m"
        if (ll_backend__disj_gen__succeeded)
#line 151 "disj_gen.m"
          {
#line 151 "disj_gen.m"
            ll_backend__disj_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__LaterDisjuncts_21, (MR_Integer) 0)));
#line 151 "disj_gen.m"
            ll_backend__disj_gen__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__LaterDisjuncts_21, (MR_Integer) 1)));
#line 151 "disj_gen.m"
            ll_backend__disj_gen__succeeded = ((MR_tag((MR_Word) ll_backend__disj_gen__V_55_55)) == (MR_mktag((MR_Integer) 1)));
#line 151 "disj_gen.m"
            if (ll_backend__disj_gen__succeeded)
#line 151 "disj_gen.m"
              {
#line 151 "disj_gen.m"
                ll_backend__disj_gen__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_55_55, (MR_Integer) 0)));
#line 151 "disj_gen.m"
                ll_backend__disj_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__V_55_55, (MR_Integer) 1)));
#line 153 "disj_gen.m"
                {
#line 153 "disj_gen.m"
                  ll_backend__disj_gen__DisjNonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ll_backend__disj_gen__DisjGoalInfo_15);
                }
#line 154 "disj_gen.m"
                {
#line 154 "disj_gen.m"
                  ll_backend__disj_gen__succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(ll_backend__disj_gen__DisjNonLocals_25, ll_backend__disj_gen__FirstDisjunct_20);
                }
#line 145 "disj_gen.m"
                if (ll_backend__disj_gen__succeeded)
#line 145 "disj_gen.m"
                  {
#line 155 "disj_gen.m"
                    {
#line 155 "disj_gen.m"
                      ll_backend__disj_gen__succeeded = hlds__goal_form__all_disjuncts_are_conj_of_unify_2_p_0(ll_backend__disj_gen__DisjNonLocals_25, ll_backend__disj_gen__LaterDisjuncts_21);
                    }
#line 145 "disj_gen.m"
                    if (ll_backend__disj_gen__succeeded)
#line 145 "disj_gen.m"
                      {
#line 157 "disj_gen.m"
                        {
#line 157 "disj_gen.m"
                          ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_52, &ll_backend__disj_gen__MaybeTraceInfo_26);
                        }
#line 158 "disj_gen.m"
                        ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__MaybeTraceInfo_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 145 "disj_gen.m"
                        if (ll_backend__disj_gen__succeeded)
#line 145 "disj_gen.m"
                          {
#line 161 "disj_gen.m"
                            {
#line 161 "disj_gen.m"
                              ll_backend__code_info__get_globals_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_52, &ll_backend__disj_gen__Globals_27);
                            }
#line 162 "disj_gen.m"
                            ll_backend__disj_gen__V_56_56 = (MR_Integer) 443;
#line 162 "disj_gen.m"
                            ll_backend__disj_gen__V_57_57 = (MR_Integer) 1;
#line 162 "disj_gen.m"
                            {
#line 162 "disj_gen.m"
                              ll_backend__disj_gen__succeeded = libs__globals__lookup_bool_option_3_p_1(ll_backend__disj_gen__Globals_27, ll_backend__disj_gen__V_56_56, ll_backend__disj_gen__V_57_57);
                            }
#line 145 "disj_gen.m"
                            if (ll_backend__disj_gen__succeeded)
#line 145 "disj_gen.m"
                              {
#line 166 "disj_gen.m"
                                ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__AddRegionOps_12 == (MR_Integer) 1);
#line 145 "disj_gen.m"
                                if (ll_backend__disj_gen__succeeded)
#line 145 "disj_gen.m"
                                  {
#line 168 "disj_gen.m"
                                    {
#line 168 "disj_gen.m"
                                      ll_backend__lookup_util__figure_out_output_vars_4_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_52, ll_backend__disj_gen__STATE_VARIABLE_CLD_0_54, ll_backend__disj_gen__DisjGoalInfo_15, &ll_backend__disj_gen__OutVars_28);
                                    }
#line 169 "disj_gen.m"
                                    {
#line 169 "disj_gen.m"
                                      ll_backend__code_info__get_vartypes_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_52, &ll_backend__disj_gen__VarTypes_29);
                                    }
#line 170 "disj_gen.m"
                                    {
#line 170 "disj_gen.m"
                                      hlds__vartypes__lookup_var_types_3_p_0(ll_backend__disj_gen__VarTypes_29, ll_backend__disj_gen__OutVars_28, &ll_backend__disj_gen__OutTypes_30);
                                    }
#line 6221 "ll_backend.disj_gen.c"
                                    ll_backend__disj_gen__TypeCtorInfo_75_75 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 172 "disj_gen.m"
                                    {
#line 172 "disj_gen.m"
                                      ll_backend__disj_gen__V_58_58 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__disj_gen__TypeCtorInfo_75_75, ll_backend__disj_gen__ResumeVars_13);
                                    }
#line 172 "disj_gen.m"
                                    {
#line 172 "disj_gen.m"
                                      ll_backend__code_loc_dep__produce_vars_6_p_0(ll_backend__disj_gen__V_58_58, &ll_backend__disj_gen__ResumeMap_31, &ll_backend__disj_gen__FlushCode_32, ll_backend__disj_gen__STATE_VARIABLE_CI_0_52, ll_backend__disj_gen__STATE_VARIABLE_CLD_0_54, &ll_backend__disj_gen__STATE_VARIABLE_CLD_59_59);
                                    }
#line 180 "disj_gen.m"
                                    ll_backend__disj_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 180 "disj_gen.m"
                                    ll_backend__disj_gen__V_61_61 = (MR_Integer) 1;
#line 180 "disj_gen.m"
                                    {
#line 180 "disj_gen.m"
                                      ll_backend__code_loc_dep__acquire_temp_slot_7_p_0(ll_backend__disj_gen__V_60_60, ll_backend__disj_gen__V_61_61, &ll_backend__disj_gen__CurSlot_33, ll_backend__disj_gen__STATE_VARIABLE_CI_0_52, &ll_backend__disj_gen__STATE_VARIABLE_CI_62_62, ll_backend__disj_gen__STATE_VARIABLE_CLD_59_59, &ll_backend__disj_gen__STATE_VARIABLE_CLD_63_63);
                                    }
#line 182 "disj_gen.m"
                                    {
#line 182 "disj_gen.m"
                                      ll_backend__code_loc_dep__maybe_save_ticket_7_p_0(ll_backend__disj_gen__AddTrailOps_11, &ll_backend__disj_gen__SaveTicketCode_34, &ll_backend__disj_gen__MaybeTicketSlot_35, ll_backend__disj_gen__STATE_VARIABLE_CI_62_62, &ll_backend__disj_gen__STATE_VARIABLE_CI_64_64, ll_backend__disj_gen__STATE_VARIABLE_CLD_63_63, &ll_backend__disj_gen__STATE_VARIABLE_CLD_65_65);
                                    }
#line 183 "disj_gen.m"
                                    {
#line 183 "disj_gen.m"
                                      ll_backend__code_info__get_globals_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CI_64_64, &ll_backend__disj_gen__V_76_76);
                                    }
#line 183 "disj_gen.m"
                                    {
#line 183 "disj_gen.m"
                                      ll_backend__disj_gen__succeeded = libs__globals____Unify____globals_0_0(ll_backend__disj_gen__Globals_27, ll_backend__disj_gen__V_76_76);
                                    }
#line 145 "disj_gen.m"
                                    if (ll_backend__disj_gen__succeeded)
#line 145 "disj_gen.m"
                                      {
#line 184 "disj_gen.m"
                                        ll_backend__disj_gen__V_66_66 = (MR_Integer) 302;
#line 184 "disj_gen.m"
                                        {
#line 184 "disj_gen.m"
                                          libs__globals__lookup_bool_option_3_p_0(ll_backend__disj_gen__Globals_27, ll_backend__disj_gen__V_66_66, &ll_backend__disj_gen__ReclaimHeap_36);
                                        }
#line 186 "disj_gen.m"
                                        {
#line 186 "disj_gen.m"
                                          ll_backend__code_loc_dep__maybe_save_hp_7_p_0(ll_backend__disj_gen__ReclaimHeap_36, &ll_backend__disj_gen__SaveHpCode_37, &ll_backend__disj_gen__MaybeHpSlot_38, ll_backend__disj_gen__STATE_VARIABLE_CI_64_64, &ll_backend__disj_gen__STATE_VARIABLE_CI_67_67, ll_backend__disj_gen__STATE_VARIABLE_CLD_65_65, &ll_backend__disj_gen__STATE_VARIABLE_CLD_68_68);
                                        }
#line 187 "disj_gen.m"
                                        ll_backend__disj_gen__V_69_69 = (MR_Integer) 2;
#line 187 "disj_gen.m"
                                        {
#line 187 "disj_gen.m"
                                          ll_backend__code_loc_dep__prepare_for_disj_hijack_7_p_0(ll_backend__disj_gen__V_69_69, &ll_backend__disj_gen__HijackInfo_39, &ll_backend__disj_gen__PrepareHijackCode_40, ll_backend__disj_gen__STATE_VARIABLE_CI_67_67, &ll_backend__disj_gen__STATE_VARIABLE_CI_70_70, ll_backend__disj_gen__STATE_VARIABLE_CLD_68_68, &ll_backend__disj_gen__STATE_VARIABLE_CLD_71_71);
                                        }
#line 193 "disj_gen.m"
                                        {
#line 193 "disj_gen.m"
                                          ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CLD_71_71, ll_backend__disj_gen__AfterPrepPos_19);
                                        }
#line 195 "disj_gen.m"
                                        {
#line 195 "disj_gen.m"
                                          hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__disj_gen__DisjGoalInfo_15, &ll_backend__disj_gen__StoreMap_41);
                                        }
#line 196 "disj_gen.m"
                                        {
#line 196 "disj_gen.m"
                                          ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CLD_71_71, &ll_backend__disj_gen__DisjStart_42);
                                        }
#line 198 "disj_gen.m"
                                        ll_backend__disj_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 197 "disj_gen.m"
                                        {
#line 197 "disj_gen.m"
                                          ll_backend__disj_gen__succeeded = ll_backend__lookup_util__generate_constants_for_disjunct_10_p_0(ll_backend__disj_gen__DisjStart_42, ll_backend__disj_gen__FirstDisjunct_20, ll_backend__disj_gen__OutVars_28, ll_backend__disj_gen__StoreMap_41, &ll_backend__disj_gen__FirstSoln_43, ll_backend__disj_gen__V_72_72, &ll_backend__disj_gen__MaybeEnd1_44, &ll_backend__disj_gen__Liveness_45, ll_backend__disj_gen__STATE_VARIABLE_CI_70_70, &ll_backend__disj_gen__STATE_VARIABLE_CI_73_73);
                                        }
#line 145 "disj_gen.m"
                                        if (ll_backend__disj_gen__succeeded)
#line 145 "disj_gen.m"
                                          {
#line 199 "disj_gen.m"
                                            {
#line 199 "disj_gen.m"
                                              ll_backend__disj_gen__succeeded = ll_backend__lookup_util__generate_constants_for_disjuncts_9_p_0(ll_backend__disj_gen__DisjStart_42, ll_backend__disj_gen__LaterDisjuncts_21, ll_backend__disj_gen__OutVars_28, ll_backend__disj_gen__StoreMap_41, &ll_backend__disj_gen__LaterSolns_46, ll_backend__disj_gen__MaybeEnd1_44, &ll_backend__disj_gen__MaybeEnd_47, ll_backend__disj_gen__STATE_VARIABLE_CI_73_73, ll_backend__disj_gen__STATE_VARIABLE_CI_53);
                                            }
#line 145 "disj_gen.m"
                                            if (ll_backend__disj_gen__succeeded)
#line 145 "disj_gen.m"
                                              {
#line 201 "disj_gen.m"
                                                {
#line 201 "disj_gen.m"
                                                  ll_backend__disj_gen__Solns_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "disj_gen.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Solns_48, 0) = ((MR_Box) (ll_backend__disj_gen__FirstSoln_43));
#line 201 "disj_gen.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Solns_48, 1) = ((MR_Box) (ll_backend__disj_gen__LaterSolns_46));
#line 201 "disj_gen.m"
                                                }
#line 203 "disj_gen.m"
                                                {
#line 203 "disj_gen.m"
                                                  ll_backend__code_info__get_exprn_opts_2_p_0(*ll_backend__disj_gen__STATE_VARIABLE_CI_53, &ll_backend__disj_gen__ExprnOpts_49);
                                                }
#line 204 "disj_gen.m"
                                                {
#line 204 "disj_gen.m"
                                                  ll_backend__disj_gen__UnboxFloats_50 = ll_backend__llds__get_unboxed_floats_1_f_0(ll_backend__disj_gen__ExprnOpts_49);
                                                }
#line 205 "disj_gen.m"
                                                {
#line 205 "disj_gen.m"
                                                  ll_backend__disj_gen__succeeded = ll_backend__global_data__find_general_llds_types_4_p_0(ll_backend__disj_gen__UnboxFloats_50, ll_backend__disj_gen__OutTypes_30, ll_backend__disj_gen__Solns_48, &ll_backend__disj_gen__LLDSTypes_51);
                                                }
#line 145 "disj_gen.m"
                                                if (ll_backend__disj_gen__succeeded)
#line 145 "disj_gen.m"
                                                  {
#line 206 "disj_gen.m"
                                                    {
#line 206 "disj_gen.m"
                                                      MR_Word base;
#line 206 "disj_gen.m"
                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 206 "disj_gen.m"
                                                      *ll_backend__disj_gen__LookupDisjInfo_16 = base;
#line 206 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__disj_gen__OutVars_28));
#line 206 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__disj_gen__StoreMap_41));
#line 206 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__disj_gen__MaybeEnd_47));
#line 206 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__disj_gen__Liveness_45));
#line 206 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__disj_gen__CurSlot_33));
#line 206 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__disj_gen__ResumeMap_31));
#line 206 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__disj_gen__FlushCode_32));
#line 206 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__disj_gen__SaveTicketCode_34));
#line 206 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__disj_gen__MaybeTicketSlot_35));
#line 206 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__disj_gen__SaveHpCode_37));
#line 206 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ll_backend__disj_gen__MaybeHpSlot_38));
#line 206 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ll_backend__disj_gen__HijackInfo_39));
#line 206 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ll_backend__disj_gen__PrepareHijackCode_40));
#line 206 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ll_backend__disj_gen__Solns_48));
#line 206 "disj_gen.m"
                                                      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (ll_backend__disj_gen__LLDSTypes_51));
#line 206 "disj_gen.m"
                                                    }
#line 206 "disj_gen.m"
                                                    ll_backend__disj_gen__succeeded = MR_TRUE;
#line 145 "disj_gen.m"
                                                  }
#line 145 "disj_gen.m"
                                              }
#line 145 "disj_gen.m"
                                          }
#line 145 "disj_gen.m"
                                      }
#line 145 "disj_gen.m"
                                  }
#line 145 "disj_gen.m"
                              }
#line 145 "disj_gen.m"
                          }
#line 145 "disj_gen.m"
                      }
#line 145 "disj_gen.m"
                  }
#line 151 "disj_gen.m"
              }
#line 151 "disj_gen.m"
          }
#line 150 "disj_gen.m"
      }
#line 145 "disj_gen.m"
    return ll_backend__disj_gen__succeeded;
#line 145 "disj_gen.m"
  }
#line 138 "disj_gen.m"
}

#line 34 "disj_gen.m"
void MR_CALL 
ll_backend__disj_gen__generate_disj_8_p_0(
#line 34 "disj_gen.m"
  MR_Word ll_backend__disj_gen__CodeModel_9,
#line 34 "disj_gen.m"
  MR_Word ll_backend__disj_gen__Goals_10,
#line 34 "disj_gen.m"
  MR_Word ll_backend__disj_gen__DisjGoalInfo_11,
#line 34 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__Code_12,
#line 34 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_0_28,
#line 34 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CI_29,
#line 34 "disj_gen.m"
  MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_0_30,
#line 34 "disj_gen.m"
  MR_Word * ll_backend__disj_gen__STATE_VARIABLE_CLD_31)
#line 34 "disj_gen.m"
{
#line 73 "disj_gen.m"
  {
#line 73 "disj_gen.m"
    MR_bool ll_backend__disj_gen__succeeded;

#line 73 "disj_gen.m"
    if ((ll_backend__disj_gen__Goals_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 79 "disj_gen.m"
#line 79 "disj_gen.m"
      switch (ll_backend__disj_gen__CodeModel_9) {
#line 79 "disj_gen.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 79 "disj_gen.m"
        case (MR_Integer) 0:
#line 79 "disj_gen.m"
        case (MR_Integer) 2:
#line 82 "disj_gen.m"
          {
#line 83 "disj_gen.m"
            {
#line 83 "disj_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.disj_gen", (MR_String) "predicate \140ll_backend.disj_gen.generate_disj\'/8", (MR_String) "empty disjunction");
#line 83 "disj_gen.m"
              return;
            }
#line 82 "disj_gen.m"
          }
#line 79 "disj_gen.m"
          break;
#line 79 "disj_gen.m"
        case (MR_Integer) 1:
#line 75 "disj_gen.m"
          {
#line 75 "disj_gen.m"
            MR_Word ll_backend__disj_gen__BeforeFailure_15;

#line 76 "disj_gen.m"
            {
#line 76 "disj_gen.m"
              ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__disj_gen__STATE_VARIABLE_CLD_0_30, &ll_backend__disj_gen__BeforeFailure_15);
            }
#line 77 "disj_gen.m"
            {
#line 77 "disj_gen.m"
              ll_backend__code_loc_dep__generate_failure_4_p_0(ll_backend__disj_gen__Code_12, ll_backend__disj_gen__STATE_VARIABLE_CI_0_28, ll_backend__disj_gen__STATE_VARIABLE_CI_29, ll_backend__disj_gen__STATE_VARIABLE_CLD_0_30);
            }
#line 78 "disj_gen.m"
            {
#line 78 "disj_gen.m"
              ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__disj_gen__BeforeFailure_15, *ll_backend__disj_gen__STATE_VARIABLE_CI_29, ll_backend__disj_gen__STATE_VARIABLE_CLD_31);
            }
#line 75 "disj_gen.m"
          }
#line 79 "disj_gen.m"
          break;
#line 79 "disj_gen.m"
      }
#line 73 "disj_gen.m"
    else
#line 86 "disj_gen.m"
      {
#line 86 "disj_gen.m"
        MR_Word ll_backend__disj_gen__Goal_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Goals_10, (MR_Integer) 0)));
#line 86 "disj_gen.m"
        MR_Word ll_backend__disj_gen__GoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Goal_16, (MR_Integer) 1)));
#line 86 "disj_gen.m"
        MR_Word ll_backend__disj_gen__Resume_20;
#line 86 "disj_gen.m"
        MR_Word ll_backend__disj_gen__ResumeVars_23;
#line 86 "disj_gen.m"
        MR_Word ll_backend__disj_gen__AddTrailOps_24;
#line 86 "disj_gen.m"
        MR_Word ll_backend__disj_gen__AddRegionOps_25;
#line 86 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Goals_10, (MR_Integer) 1)));
#line 87 "disj_gen.m"
        MR_Word ll_backend__disj_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__disj_gen__Goal_16, (MR_Integer) 0)));
#line 98 "disj_gen.m"
        MR_Word ll_backend__disj_gen__LookupDisjInfo_26;
#line 98 "disj_gen.m"
        MR_Word ll_backend__disj_gen__AfterPrepPos_27;
#line 98 "disj_gen.m"
        MR_Word ll_backend__disj_gen__STATE_VARIABLE_CI_32_32;

#line 88 "disj_gen.m"
        {
#line 88 "disj_gen.m"
          hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__disj_gen__GoalInfo_19, &ll_backend__disj_gen__Resume_20);
        }
#line 92 "disj_gen.m"
        if ((ll_backend__disj_gen__Resume_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 93 "disj_gen.m"
          {
#line 94 "disj_gen.m"
            {
#line 94 "disj_gen.m"
              ll_backend__disj_gen__ResumeVars_23 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            }
#line 93 "disj_gen.m"
          }
#line 92 "disj_gen.m"
        else
#line 90 "disj_gen.m"
          {
#line 90 "disj_gen.m"
            MR_Word ll_backend__disj_gen__V_22_22;

#line 90 "disj_gen.m"
            ll_backend__disj_gen__ResumeVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Resume_20, (MR_Integer) 0)));
#line 90 "disj_gen.m"
            ll_backend__disj_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__disj_gen__Resume_20, (MR_Integer) 1)));
#line 90 "disj_gen.m"
          }
#line 96 "disj_gen.m"
        {
#line 96 "disj_gen.m"
          ll_backend__disj_gen__AddTrailOps_24 = ll_backend__code_info__should_add_trail_ops_2_f_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_28, ll_backend__disj_gen__GoalInfo_19);
        }
#line 97 "disj_gen.m"
        {
#line 97 "disj_gen.m"
          ll_backend__disj_gen__AddRegionOps_25 = ll_backend__code_info__should_add_region_ops_2_f_0(ll_backend__disj_gen__STATE_VARIABLE_CI_0_28, ll_backend__disj_gen__GoalInfo_19);
        }
#line 99 "disj_gen.m"
        ll_backend__disj_gen__succeeded = (ll_backend__disj_gen__CodeModel_9 == (MR_Integer) 2);
#line 99 "disj_gen.m"
        if (ll_backend__disj_gen__succeeded)
#line 100 "disj_gen.m"
          {
#line 100 "disj_gen.m"
            ll_backend__disj_gen__succeeded = ll_backend__disj_gen__is_lookup_disj_10_p_0(ll_backend__disj_gen__AddTrailOps_24, ll_backend__disj_gen__AddRegionOps_25, ll_backend__disj_gen__ResumeVars_23, ll_backend__disj_gen__Goals_10, ll_backend__disj_gen__DisjGoalInfo_11, &ll_backend__disj_gen__LookupDisjInfo_26, ll_backend__disj_gen__STATE_VARIABLE_CI_0_28, &ll_backend__disj_gen__STATE_VARIABLE_CI_32_32, ll_backend__disj_gen__STATE_VARIABLE_CLD_0_30, &ll_backend__disj_gen__AfterPrepPos_27);
          }
#line 98 "disj_gen.m"
        if (ll_backend__disj_gen__succeeded)
#line 103 "disj_gen.m"
          {
#line 103 "disj_gen.m"
            MR_Word ll_backend__disj_gen__STATE_VARIABLE_CLD_33_33;

#line 103 "disj_gen.m"
            {
#line 103 "disj_gen.m"
              ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__disj_gen__AfterPrepPos_27, ll_backend__disj_gen__STATE_VARIABLE_CI_32_32, &ll_backend__disj_gen__STATE_VARIABLE_CLD_33_33);
            }
#line 104 "disj_gen.m"
            {
#line 104 "disj_gen.m"
              ll_backend__disj_gen__generate_lookup_disj_7_p_0(ll_backend__disj_gen__ResumeVars_23, ll_backend__disj_gen__LookupDisjInfo_26, ll_backend__disj_gen__Code_12, ll_backend__disj_gen__STATE_VARIABLE_CI_32_32, ll_backend__disj_gen__STATE_VARIABLE_CI_29, ll_backend__disj_gen__STATE_VARIABLE_CLD_33_33, ll_backend__disj_gen__STATE_VARIABLE_CLD_31);
            }
#line 103 "disj_gen.m"
          }
#line 98 "disj_gen.m"
        else
#line 106 "disj_gen.m"
          {
#line 106 "disj_gen.m"
            ll_backend__disj_gen__generate_real_disj_11_p_0(ll_backend__disj_gen__AddTrailOps_24, ll_backend__disj_gen__AddRegionOps_25, ll_backend__disj_gen__CodeModel_9, ll_backend__disj_gen__ResumeVars_23, ll_backend__disj_gen__Goals_10, ll_backend__disj_gen__DisjGoalInfo_11, ll_backend__disj_gen__Code_12, ll_backend__disj_gen__STATE_VARIABLE_CI_0_28, ll_backend__disj_gen__STATE_VARIABLE_CI_29, ll_backend__disj_gen__STATE_VARIABLE_CLD_0_30, ll_backend__disj_gen__STATE_VARIABLE_CLD_31);
          }
#line 86 "disj_gen.m"
      }
#line 73 "disj_gen.m"
  }
#line 34 "disj_gen.m"
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
