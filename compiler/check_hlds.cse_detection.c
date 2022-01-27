/*
** Automatically generated from `cse_detection.m'
** by the Mercury compiler,
** version 14.01-beta-2014-01-02, configured for x86_64-apple-darwin12.5.0.
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


/* :- module check_hlds.cse_detection. */
/* :- implementation. */

/*
INIT mercury__check_hlds__cse_detection__init
ENDINIT
*/

#include "check_hlds.cse_detection.mih"


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
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modes.mih"
#include "check_hlds.switch_detection.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "libs.file_util.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 140 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 143 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 146 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 149 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 152 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 155 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 158 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 161 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 164 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 167 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 170 "check_hlds.cse_detection.c"
static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_info_0_0[4];

#line 173 "check_hlds.cse_detection.c"
static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_info_0_0[4];

#line 176 "check_hlds.cse_detection.c"
static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0;

#line 179 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_info_0_0[1];

#line 182 "check_hlds.cse_detection.c"
static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_info_0[1];

#line 185 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_info_0[1];

#line 188 "check_hlds.cse_detection.c"
static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_info_0[1];

#line 191 "check_hlds.cse_detection.c"
static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_0;

#line 194 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 197 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 200 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 203 "check_hlds.cse_detection.c"
static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_state_0_1[3];

#line 206 "check_hlds.cse_detection.c"
static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_state_0_1[3];

#line 209 "check_hlds.cse_detection.c"
static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1;

#line 212 "check_hlds.cse_detection.c"
static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_2;

#line 215 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_0[2];

#line 218 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_1[1];

#line 221 "check_hlds.cse_detection.c"
static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_state_0[2];

#line 224 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_state_0[3];

#line 227 "check_hlds.cse_detection.c"
static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_state_0[3];

#line 230 "check_hlds.cse_detection.c"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0_10001(
#line 233 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 235 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2);

#line 238 "check_hlds.cse_detection.c"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0_10001(
#line 241 "check_hlds.cse_detection.c"
  MR_Box * check_hlds__cse_detection__wrapper_arg_1,
#line 243 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 245 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_3);

#line 248 "check_hlds.cse_detection.c"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0_10001(
#line 251 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 253 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2);

#line 256 "check_hlds.cse_detection.c"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0_10001(
#line 259 "check_hlds.cse_detection.c"
  MR_Box * check_hlds__cse_detection__wrapper_arg_1,
#line 261 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 263 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_3);

#line 625 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0(
#line 625 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__1_1,
#line 625 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 625 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3);

#line 625 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0(
#line 625 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 625 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2);

#line 203 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0(
#line 203 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__1_1,
#line 203 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 203 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3);

#line 203 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0(
#line 203 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 203 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2);

#line 916 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_merged_tvars_6_p_0(
#line 916 "cse_detection.m"
  MR_Word check_hlds__cse_detection__RttiVarMaps_7,
#line 916 "cse_detection.m"
  MR_Word check_hlds__cse_detection__LaterOldNewMap_8,
#line 916 "cse_detection.m"
  MR_Word check_hlds__cse_detection__NewTvarMap_9,
#line 916 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Tvar_10,
#line 916 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17,
#line 916 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_Renaming_18);

#line 902 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_type_info_locn_tvar_map_5_p_0(
#line 902 "cse_detection.m"
  MR_Word check_hlds__cse_detection__RttiVarMaps_6,
#line 902 "cse_detection.m"
  MR_Word check_hlds__cse_detection__FirstOldNewMap_7,
#line 902 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Tvar_8,
#line 902 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_0_14,
#line 902 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_15);

#line 896 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_3(
#line 896 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 896 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 896 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_2);

#line 887 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_2(
#line 887 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 887 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 887 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 887 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3);

#line 880 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_1(
#line 880 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 880 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 880 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 880 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3);

#line 844 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(
#line 844 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Unify_6,
#line 844 "cse_detection.m"
  MR_Word check_hlds__cse_detection__FirstOldNew_7,
#line 844 "cse_detection.m"
  MR_Word check_hlds__cse_detection__LaterOldNew_8,
#line 844 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25,
#line 844 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26);

#line 760 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__pair_subterms_4_p_0(
#line 760 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 760 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 760 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3,
#line 760 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__4_4);

#line 736 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__find_similar_deconstruct_5_p_0(
#line 736 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HoistedUnifyGoal_6,
#line 736 "cse_detection.m"
  MR_Word check_hlds__cse_detection__OldUnifyGoal_7,
#line 736 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Context_8,
#line 736 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__OldHoistedVars_9,
#line 736 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Replacements_10);

#line 698 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__create_parallel_subterms_7_p_0(
#line 698 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 698 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Context_2,
#line 698 "cse_detection.m"
  MR_Word check_hlds__cse_detection__UnifyContext_3,
#line 698 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_4,
#line 698 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_5,
#line 698 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6,
#line 698 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7);

#line 634 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(
#line 634 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Var_8,
#line 634 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_9,
#line 634 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goals_10,
#line 634 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22,
#line 634 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_23,
#line 634 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24,
#line 634 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25);

#line 599 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0_1(
#line 599 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 599 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 599 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 599 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 599 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 599 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 599 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 599 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7);

#line 591 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(
#line 591 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 591 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 591 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3,
#line 591 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_4,
#line 591 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 591 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 591 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7);

#line 574 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0_1(
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 574 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 574 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 574 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7);

#line 567 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0(
#line 567 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 567 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 567 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3,
#line 567 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_4,
#line 567 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 567 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 567 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7);

#line 529 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_arms_10_p_0(
#line 529 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cond0_11,
#line 529 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Cond_12,
#line 529 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Then0_13,
#line 529 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Then_14,
#line 529 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Else0_15,
#line 529 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Else_16,
#line 529 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25,
#line 529 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26,
#line 529 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_18,
#line 529 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_19);

#line 574 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0_2(
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 574 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 574 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 574 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7);

#line 574 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0_1(
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 574 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 574 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 574 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7);

#line 498 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0(
#line 498 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 498 "cse_detection.m"
  MR_Word check_hlds__cse_detection__IfVars_2,
#line 498 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cond0_3,
#line 498 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Then0_4,
#line 498 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Else0_5,
#line 498 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo_6,
#line 498 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap_7,
#line 498 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8,
#line 498 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_9,
#line 498 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_10,
#line 498 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__11_11);

#line 486 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_arms_6_p_0(
#line 486 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 486 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 486 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 486 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 486 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_5,
#line 486 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6);

#line 457 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_10_p_0(
#line 457 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 457 "cse_detection.m"
  MR_Word check_hlds__cse_detection__SwitchVar_2,
#line 457 "cse_detection.m"
  MR_Word check_hlds__cse_detection__CanFail_3,
#line 457 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cases0_4,
#line 457 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__5_5,
#line 457 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_6,
#line 457 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7,
#line 457 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_8,
#line 457 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_9,
#line 457 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__10_10);

#line 446 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(
#line 446 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 446 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 446 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 446 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 446 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_5,
#line 446 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6);

#line 419 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_disj_8_p_0(
#line 419 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 419 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goals0_2,
#line 419 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo0_3,
#line 419 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__4_4,
#line 419 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 419 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 419 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_7,
#line 419 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__8_8);

#line 392 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_conj_7_p_0(
#line 392 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 392 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 392 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 392 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 392 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__5_5,
#line 392 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__6_6,
#line 392 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7);

#line 280 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(
#line 280 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalExpr0_8,
#line 280 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__GoalExpr_9,
#line 280 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90,
#line 280 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91,
#line 280 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo_11,
#line 280 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_12,
#line 280 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_13);

#line 266 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(
#line 266 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_8,
#line 266 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goal_9,
#line 266 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_18,
#line 266 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_19,
#line 266 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_11,
#line 266 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__InstMap_12,
#line 266 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_13);

#line 255 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_6_p_0(
#line 255 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_7,
#line 255 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goal_8,
#line 255 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_13,
#line 255 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_14,
#line 255 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_10,
#line 255 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_11);

#line 211 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_proc_pass_4_p_0(
#line 211 "cse_detection.m"
  MR_Word check_hlds__cse_detection__ModuleInfo_5,
#line 211 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_6,
#line 211 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26,
#line 211 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_27);

#line 94 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_procs_4_p_0(
#line 94 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 94 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 94 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3,
#line 94 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_4);

#line 77 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_preds_3_p_0(
#line 77 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 77 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2,
#line 77 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_3);


static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_1[6][2];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_2[7][3];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_3[1][10];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_4[1][8];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_5[1][9];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_6[1][6];




static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[1])),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__cse_detection__detect_cse_in_ite_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__cse_detection__detect_cse_in_ite_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__cse_detection__common_deconstruct_2_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_3[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__cse_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0)),
    ((MR_Box) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0)),
    ((MR_Box) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0)),
    ((MR_Box) (&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0))
  },
};

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_5[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 956 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 964 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 972 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 980 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 989 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 997 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1005 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0,
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1014 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1023 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1031 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1040 "check_hlds.cse_detection.c"
static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_info_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__cse_detection__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__cse_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0
};

#line 1048 "check_hlds.cse_detection.c"
static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_info_0_0[4] = {
  (MR_String) "csei_varset",
  (MR_String) "csei_vartypes",
  (MR_String) "csei_rtti_varmaps",
  (MR_String) "csei_module_info"
};

#line 1056 "check_hlds.cse_detection.c"
static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0 = {
  (MR_String) "cse_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_info_0_0,
  check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_info_0_0,
  NULL,
  NULL
};

#line 1071 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_info_0_0[1] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0
};

#line 1076 "check_hlds.cse_detection.c"
static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_info_0_0
  }
};

#line 1085 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_info_0[1] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0
};

#line 1090 "check_hlds.cse_detection.c"
static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_info_0[1] = {
  (MR_Integer) 0
};

#line 1095 "check_hlds.cse_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__cse_detection____Unify____cse_info_0_0_10001)),
  ((MR_Box) (check_hlds__cse_detection____Compare____cse_info_0_0_10001)),
  (MR_String) "check_hlds.cse_detection",
  (MR_String) "cse_info",
  {
    check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_info_0
  },
  {
    check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_info_0
};

#line 1116 "check_hlds.cse_detection.c"
static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_0 = {
  (MR_String) "before_candidate",
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

#line 1131 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1140 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__cse_detection__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1148 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1156 "check_hlds.cse_detection.c"
static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_state_0_1[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__cse_detection__list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1163 "check_hlds.cse_detection.c"
static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_state_0_1[3] = {
  (MR_String) "goal",
  (MR_String) "first_old_new",
  (MR_String) "later_old_new"
};

#line 1170 "check_hlds.cse_detection.c"
static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1 = {
  (MR_String) "have_candidate",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_state_0_1,
  check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_state_0_1,
  NULL,
  NULL
};

#line 1185 "check_hlds.cse_detection.c"
static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_2 = {
  (MR_String) "multiple_candidates",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1200 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_0[2] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_0,
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_2
};

#line 1206 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_1[1] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1
};

#line 1211 "check_hlds.cse_detection.c"
static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_state_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_1
  }
};

#line 1225 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_state_0[3] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_0,
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1,
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_2
};

#line 1232 "check_hlds.cse_detection.c"
static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_state_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1239 "check_hlds.cse_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__cse_detection____Unify____cse_state_0_0_10001)),
  ((MR_Box) (check_hlds__cse_detection____Compare____cse_state_0_0_10001)),
  (MR_String) "check_hlds.cse_detection",
  (MR_String) "cse_state",
  {
    check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_state_0
  },
  {
    check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_state_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_state_0
};

#line 1260 "check_hlds.cse_detection.c"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0_10001(
#line 1263 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 1265 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2)
#line 1267 "check_hlds.cse_detection.c"
{
#line 1269 "check_hlds.cse_detection.c"
  {
#line 1271 "check_hlds.cse_detection.c"
    MR_bool check_hlds__cse_detection__succeeded;

#line 1274 "check_hlds.cse_detection.c"
    {
#line 1276 "check_hlds.cse_detection.c"
      check_hlds__cse_detection__succeeded = check_hlds__cse_detection____Unify____cse_info_0_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2));
    }
#line 1279 "check_hlds.cse_detection.c"
    return check_hlds__cse_detection__succeeded;
#line 1281 "check_hlds.cse_detection.c"
  }
#line 1283 "check_hlds.cse_detection.c"
}

#line 1286 "check_hlds.cse_detection.c"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0_10001(
#line 1289 "check_hlds.cse_detection.c"
  MR_Box * check_hlds__cse_detection__wrapper_arg_1,
#line 1291 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 1293 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_3)
#line 1295 "check_hlds.cse_detection.c"
{
#line 1297 "check_hlds.cse_detection.c"
  {
#line 1299 "check_hlds.cse_detection.c"
    MR_Word check_hlds__cse_detection__conv0_HeadVar__1_1;

#line 1302 "check_hlds.cse_detection.c"
    {
#line 1304 "check_hlds.cse_detection.c"
      check_hlds__cse_detection____Compare____cse_info_0_0(&check_hlds__cse_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), ((MR_Word) check_hlds__cse_detection__wrapper_arg_3));
    }
#line 1307 "check_hlds.cse_detection.c"
    *check_hlds__cse_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__cse_detection__conv0_HeadVar__1_1));
#line 1309 "check_hlds.cse_detection.c"
  }
#line 1311 "check_hlds.cse_detection.c"
}

#line 1314 "check_hlds.cse_detection.c"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0_10001(
#line 1317 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 1319 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2)
#line 1321 "check_hlds.cse_detection.c"
{
#line 1323 "check_hlds.cse_detection.c"
  {
#line 1325 "check_hlds.cse_detection.c"
    MR_bool check_hlds__cse_detection__succeeded;

#line 1328 "check_hlds.cse_detection.c"
    {
#line 1330 "check_hlds.cse_detection.c"
      check_hlds__cse_detection__succeeded = check_hlds__cse_detection____Unify____cse_state_0_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2));
    }
#line 1333 "check_hlds.cse_detection.c"
    return check_hlds__cse_detection__succeeded;
#line 1335 "check_hlds.cse_detection.c"
  }
#line 1337 "check_hlds.cse_detection.c"
}

#line 1340 "check_hlds.cse_detection.c"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0_10001(
#line 1343 "check_hlds.cse_detection.c"
  MR_Box * check_hlds__cse_detection__wrapper_arg_1,
#line 1345 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 1347 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_3)
#line 1349 "check_hlds.cse_detection.c"
{
#line 1351 "check_hlds.cse_detection.c"
  {
#line 1353 "check_hlds.cse_detection.c"
    MR_Word check_hlds__cse_detection__conv0_HeadVar__1_1;

#line 1356 "check_hlds.cse_detection.c"
    {
#line 1358 "check_hlds.cse_detection.c"
      check_hlds__cse_detection____Compare____cse_state_0_0(&check_hlds__cse_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), ((MR_Word) check_hlds__cse_detection__wrapper_arg_3));
    }
#line 1361 "check_hlds.cse_detection.c"
    *check_hlds__cse_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__cse_detection__conv0_HeadVar__1_1));
#line 1363 "check_hlds.cse_detection.c"
  }
#line 1365 "check_hlds.cse_detection.c"
}

#line 625 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0(
#line 625 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__1_1,
#line 625 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 625 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3)
#line 625 "cse_detection.m"
{
#line 625 "cse_detection.m"
  {
#line 625 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 625 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastX_24 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;
#line 625 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastY_25 = (MR_Integer) check_hlds__cse_detection__HeadVar__3_3;

#line 625 "cse_detection.m"
    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastX_24 == check_hlds__cse_detection__CastY_25);
#line 625 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 1392 "check_hlds.cse_detection.c"
      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 625 "cse_detection.m"
    else
#line 625 "cse_detection.m"
      if ((check_hlds__cse_detection__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 625 "cse_detection.m"
        if ((check_hlds__cse_detection__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 625 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 625 "cse_detection.m"
        else
#line 625 "cse_detection.m"
          if ((check_hlds__cse_detection__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 625 "cse_detection.m"
            *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 1;
#line 625 "cse_detection.m"
          else
#line 1410 "check_hlds.cse_detection.c"
            *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 1;
#line 625 "cse_detection.m"
      else
#line 625 "cse_detection.m"
        if ((check_hlds__cse_detection__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 625 "cse_detection.m"
          if ((check_hlds__cse_detection__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 625 "cse_detection.m"
            *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 2;
#line 625 "cse_detection.m"
          else
#line 625 "cse_detection.m"
            if ((check_hlds__cse_detection__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 625 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 625 "cse_detection.m"
            else
#line 1428 "check_hlds.cse_detection.c"
              *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 2;
#line 625 "cse_detection.m"
        else
#line 625 "cse_detection.m"
          {
#line 625 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 625 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 625 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));

#line 625 "cse_detection.m"
            if ((check_hlds__cse_detection__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1443 "check_hlds.cse_detection.c"
              *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 2;
#line 625 "cse_detection.m"
            else
#line 625 "cse_detection.m"
              if ((check_hlds__cse_detection__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1449 "check_hlds.cse_detection.c"
                *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 1;
#line 625 "cse_detection.m"
              else
#line 625 "cse_detection.m"
                {
#line 625 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 625 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 625 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 2)));
#line 625 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_16_16;

#line 625 "cse_detection.m"
                  {
#line 625 "cse_detection.m"
                    hlds__hlds_goal____Compare____hlds_goal_0_0(&check_hlds__cse_detection__V_16_16, check_hlds__cse_detection__V_31_31, check_hlds__cse_detection__V_13_13);
                  }
#line 1469 "check_hlds.cse_detection.c"
                  check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_16_16 == (MR_Integer) 0);
#line 625 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 625 "cse_detection.m"
                  if (check_hlds__cse_detection__succeeded)
#line 625 "cse_detection.m"
                    *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_16_16;
#line 625 "cse_detection.m"
                  else
#line 625 "cse_detection.m"
                    {
#line 625 "cse_detection.m"
                      MR_Word check_hlds__cse_detection__V_17_17;

#line 625 "cse_detection.m"
                      {
#line 625 "cse_detection.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[3], &check_hlds__cse_detection__V_17_17, ((MR_Box) (check_hlds__cse_detection__V_30_30)), ((MR_Box) (check_hlds__cse_detection__V_14_14)));
                      }
#line 1489 "check_hlds.cse_detection.c"
                      check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_17_17 == (MR_Integer) 0);
#line 625 "cse_detection.m"
                      check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 625 "cse_detection.m"
                      if (check_hlds__cse_detection__succeeded)
#line 625 "cse_detection.m"
                        *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_17_17;
#line 625 "cse_detection.m"
                      else
#line 625 "cse_detection.m"
                        {
#line 625 "cse_detection.m"
                          {
#line 625 "cse_detection.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[4], check_hlds__cse_detection__HeadVar__1_1, ((MR_Box) (check_hlds__cse_detection__V_29_29)), ((MR_Box) (check_hlds__cse_detection__V_15_15)));
#line 625 "cse_detection.m"
                            return;
                          }
#line 625 "cse_detection.m"
                        }
#line 625 "cse_detection.m"
                    }
#line 625 "cse_detection.m"
                }
#line 625 "cse_detection.m"
          }
#line 625 "cse_detection.m"
  }
#line 625 "cse_detection.m"
}

#line 625 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0(
#line 625 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 625 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2)
#line 625 "cse_detection.m"
{
#line 625 "cse_detection.m"
  {
#line 625 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 625 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastX_13 = (MR_Integer) check_hlds__cse_detection__HeadVar__1_1;
#line 625 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastY_14 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;

#line 625 "cse_detection.m"
    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastX_13 == check_hlds__cse_detection__CastY_14);
#line 625 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 625 "cse_detection.m"
      check_hlds__cse_detection__succeeded = MR_TRUE;
#line 625 "cse_detection.m"
    else
#line 625 "cse_detection.m"
      if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 625 "cse_detection.m"
        {
#line 625 "cse_detection.m"
          MR_Integer check_hlds__cse_detection__CastX_3 = (MR_Integer) check_hlds__cse_detection__HeadVar__1_1;
#line 625 "cse_detection.m"
          MR_Integer check_hlds__cse_detection__CastY_4 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;

#line 625 "cse_detection.m"
          check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastY_4 == check_hlds__cse_detection__CastX_3);
#line 625 "cse_detection.m"
        }
#line 625 "cse_detection.m"
      else
#line 625 "cse_detection.m"
        if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 625 "cse_detection.m"
          {
#line 625 "cse_detection.m"
            MR_Integer check_hlds__cse_detection__CastX_11 = (MR_Integer) check_hlds__cse_detection__HeadVar__1_1;
#line 625 "cse_detection.m"
            MR_Integer check_hlds__cse_detection__CastY_12 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;

#line 625 "cse_detection.m"
            check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastY_12 == check_hlds__cse_detection__CastX_11);
#line 625 "cse_detection.m"
          }
#line 625 "cse_detection.m"
        else
#line 625 "cse_detection.m"
          {
#line 625 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeInfo_16_16;
#line 625 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeInfo_17_17;
#line 625 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 625 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 625 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 2)));
#line 625 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_8_8;
#line 625 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_9_9;
#line 625 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_10_10;

#line 625 "cse_detection.m"
            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 625 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 625 "cse_detection.m"
              {
#line 625 "cse_detection.m"
                check_hlds__cse_detection__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 625 "cse_detection.m"
                check_hlds__cse_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 625 "cse_detection.m"
                check_hlds__cse_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 1608 "check_hlds.cse_detection.c"
                {
#line 1610 "check_hlds.cse_detection.c"
                  check_hlds__cse_detection__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(check_hlds__cse_detection__V_5_5, check_hlds__cse_detection__V_8_8);
                }
#line 625 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 625 "cse_detection.m"
                  {
#line 1617 "check_hlds.cse_detection.c"
                    check_hlds__cse_detection__TypeInfo_16_16 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[3];
#line 1619 "check_hlds.cse_detection.c"
                    {
#line 1621 "check_hlds.cse_detection.c"
                      check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__cse_detection__TypeInfo_16_16, ((MR_Box) (check_hlds__cse_detection__V_6_6)), ((MR_Box) (check_hlds__cse_detection__V_9_9)));
                    }
#line 625 "cse_detection.m"
                    if (check_hlds__cse_detection__succeeded)
#line 625 "cse_detection.m"
                      {
#line 1628 "check_hlds.cse_detection.c"
                        check_hlds__cse_detection__TypeInfo_17_17 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[4];
#line 1630 "check_hlds.cse_detection.c"
                        {
#line 1632 "check_hlds.cse_detection.c"
                          return check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__cse_detection__TypeInfo_17_17, ((MR_Box) (check_hlds__cse_detection__V_7_7)), ((MR_Box) (check_hlds__cse_detection__V_10_10)));
                        }
#line 625 "cse_detection.m"
                      }
#line 625 "cse_detection.m"
                  }
#line 625 "cse_detection.m"
              }
#line 625 "cse_detection.m"
          }
#line 625 "cse_detection.m"
    return check_hlds__cse_detection__succeeded;
#line 625 "cse_detection.m"
  }
#line 625 "cse_detection.m"
}

#line 203 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0(
#line 203 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__1_1,
#line 203 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 203 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3)
#line 203 "cse_detection.m"
{
#line 203 "cse_detection.m"
  {
#line 203 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 203 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastX_15 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;
#line 203 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastY_16 = (MR_Integer) check_hlds__cse_detection__HeadVar__3_3;

#line 203 "cse_detection.m"
    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastX_15 == check_hlds__cse_detection__CastY_16);
#line 203 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 1674 "check_hlds.cse_detection.c"
      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 203 "cse_detection.m"
    else
#line 203 "cse_detection.m"
      {
#line 203 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 203 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 203 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 203 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 3)));
#line 203 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 203 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 203 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 2)));
#line 203 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 3)));
#line 203 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_12_12;

#line 203 "cse_detection.m"
        {
#line 203 "cse_detection.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[2], &check_hlds__cse_detection__V_12_12, ((MR_Box) (check_hlds__cse_detection__V_4_4)), ((MR_Box) (check_hlds__cse_detection__V_8_8)));
        }
#line 1704 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_12_12 == (MR_Integer) 0);
#line 203 "cse_detection.m"
        check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 203 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 203 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_12_12;
#line 203 "cse_detection.m"
        else
#line 203 "cse_detection.m"
          {
#line 203 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_13_13;

#line 203 "cse_detection.m"
            {
#line 203 "cse_detection.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &check_hlds__cse_detection__V_13_13, ((MR_Box) (check_hlds__cse_detection__V_5_5)), ((MR_Box) (check_hlds__cse_detection__V_9_9)));
            }
#line 1724 "check_hlds.cse_detection.c"
            check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_13_13 == (MR_Integer) 0);
#line 203 "cse_detection.m"
            check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 203 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 203 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_13_13;
#line 203 "cse_detection.m"
            else
#line 203 "cse_detection.m"
              {
#line 203 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_14_14;

#line 203 "cse_detection.m"
                {
#line 203 "cse_detection.m"
                  hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&check_hlds__cse_detection__V_14_14, check_hlds__cse_detection__V_6_6, check_hlds__cse_detection__V_10_10);
                }
#line 1744 "check_hlds.cse_detection.c"
                check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_14_14 == (MR_Integer) 0);
#line 203 "cse_detection.m"
                check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 203 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 203 "cse_detection.m"
                  *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_14_14;
#line 203 "cse_detection.m"
                else
#line 203 "cse_detection.m"
                  {
#line 203 "cse_detection.m"
                    hlds__hlds_module____Compare____module_info_0_0(check_hlds__cse_detection__HeadVar__1_1, check_hlds__cse_detection__V_7_7, check_hlds__cse_detection__V_11_11);
#line 203 "cse_detection.m"
                    return;
                  }
#line 203 "cse_detection.m"
              }
#line 203 "cse_detection.m"
          }
#line 203 "cse_detection.m"
      }
#line 203 "cse_detection.m"
  }
#line 203 "cse_detection.m"
}

#line 203 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0(
#line 203 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 203 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2)
#line 203 "cse_detection.m"
{
#line 203 "cse_detection.m"
  {
#line 203 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 203 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastX_11 = (MR_Integer) check_hlds__cse_detection__HeadVar__1_1;
#line 203 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastY_12 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;

#line 203 "cse_detection.m"
    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastX_11 == check_hlds__cse_detection__CastY_12);
#line 203 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 203 "cse_detection.m"
      check_hlds__cse_detection__succeeded = MR_TRUE;
#line 203 "cse_detection.m"
    else
#line 203 "cse_detection.m"
      {
#line 203 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeCtorInfo_14_14;
#line 203 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 203 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 203 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 2)));
#line 203 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 3)));
#line 203 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 203 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 203 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 203 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 3)));

#line 1819 "check_hlds.cse_detection.c"
        {
#line 1821 "check_hlds.cse_detection.c"
          check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[2], ((MR_Box) (check_hlds__cse_detection__V_3_3)), ((MR_Box) (check_hlds__cse_detection__V_7_7)));
        }
#line 203 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 203 "cse_detection.m"
          {
#line 1828 "check_hlds.cse_detection.c"
            check_hlds__cse_detection__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 1830 "check_hlds.cse_detection.c"
            {
#line 1832 "check_hlds.cse_detection.c"
              check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__cse_detection__TypeCtorInfo_14_14, ((MR_Box) (check_hlds__cse_detection__V_4_4)), ((MR_Box) (check_hlds__cse_detection__V_8_8)));
            }
#line 203 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 203 "cse_detection.m"
              {
#line 1839 "check_hlds.cse_detection.c"
                {
#line 1841 "check_hlds.cse_detection.c"
                  check_hlds__cse_detection__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(check_hlds__cse_detection__V_5_5, check_hlds__cse_detection__V_9_9);
                }
#line 203 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 1846 "check_hlds.cse_detection.c"
                  {
#line 1848 "check_hlds.cse_detection.c"
                    return check_hlds__cse_detection__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__cse_detection__V_6_6, check_hlds__cse_detection__V_10_10);
                  }
#line 203 "cse_detection.m"
              }
#line 203 "cse_detection.m"
          }
#line 203 "cse_detection.m"
      }
#line 203 "cse_detection.m"
    return check_hlds__cse_detection__succeeded;
#line 203 "cse_detection.m"
  }
#line 203 "cse_detection.m"
}

#line 916 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_merged_tvars_6_p_0(
#line 916 "cse_detection.m"
  MR_Word check_hlds__cse_detection__RttiVarMaps_7,
#line 916 "cse_detection.m"
  MR_Word check_hlds__cse_detection__LaterOldNewMap_8,
#line 916 "cse_detection.m"
  MR_Word check_hlds__cse_detection__NewTvarMap_9,
#line 916 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Tvar_10,
#line 916 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17,
#line 916 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_Renaming_18)
#line 916 "cse_detection.m"
{
#line 920 "cse_detection.m"
  {
#line 920 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 920 "cse_detection.m"
    MR_Word check_hlds__cse_detection__TypeInfoLocn0_12;
#line 920 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Old_13;
#line 931 "cse_detection.m"
    MR_Word check_hlds__cse_detection__New_14;
#line 923 "cse_detection.m"
    MR_Word check_hlds__cse_detection__TypeInfo_20_20;
#line 923 "cse_detection.m"
    MR_Box check_hlds__cse_detection__conv0_New_14;

#line 921 "cse_detection.m"
    {
#line 921 "cse_detection.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(check_hlds__cse_detection__RttiVarMaps_7, check_hlds__cse_detection__Tvar_10, &check_hlds__cse_detection__TypeInfoLocn0_12);
    }
#line 922 "cse_detection.m"
    {
#line 922 "cse_detection.m"
      hlds__hlds_rtti__type_info_locn_var_2_p_0(check_hlds__cse_detection__TypeInfoLocn0_12, &check_hlds__cse_detection__Old_13);
    }
#line 1906 "check_hlds.cse_detection.c"
    check_hlds__cse_detection__TypeInfo_20_20 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
#line 923 "cse_detection.m"
    {
#line 923 "cse_detection.m"
      check_hlds__cse_detection__succeeded = mercury__map__search_3_p_0(check_hlds__cse_detection__TypeInfo_20_20, check_hlds__cse_detection__TypeInfo_20_20, check_hlds__cse_detection__LaterOldNewMap_8, ((MR_Box) (check_hlds__cse_detection__Old_13)), &check_hlds__cse_detection__conv0_New_14);
    }
#line 923 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 923 "cse_detection.m"
      {
#line 923 "cse_detection.m"
        check_hlds__cse_detection__New_14 = ((MR_Word) check_hlds__cse_detection__conv0_New_14);
#line 923 "cse_detection.m"
        check_hlds__cse_detection__succeeded = MR_TRUE;
#line 923 "cse_detection.m"
      }
#line 931 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 924 "cse_detection.m"
      {
#line 924 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfo_22_22;
#line 924 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfoLocn_15;
#line 924 "cse_detection.m"
        MR_Word check_hlds__cse_detection__NewTvar_16;
#line 925 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv1_NewTvar_16;

#line 924 "cse_detection.m"
        {
#line 924 "cse_detection.m"
          hlds__hlds_rtti__type_info_locn_set_var_3_p_0(check_hlds__cse_detection__New_14, check_hlds__cse_detection__TypeInfoLocn0_12, &check_hlds__cse_detection__TypeInfoLocn_15);
        }
#line 1941 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeInfo_22_22 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[1];
#line 925 "cse_detection.m"
        {
#line 925 "cse_detection.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, check_hlds__cse_detection__TypeInfo_22_22, check_hlds__cse_detection__NewTvarMap_9, ((MR_Box) (check_hlds__cse_detection__TypeInfoLocn_15)), &check_hlds__cse_detection__conv1_NewTvar_16);
        }
#line 925 "cse_detection.m"
        check_hlds__cse_detection__NewTvar_16 = ((MR_Word) check_hlds__cse_detection__conv1_NewTvar_16);
#line 926 "cse_detection.m"
        {
#line 926 "cse_detection.m"
          check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[1], ((MR_Box) (check_hlds__cse_detection__NewTvar_16)), ((MR_Box) (check_hlds__cse_detection__Tvar_10)));
        }
#line 928 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 926 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_Renaming_18 = check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17;
#line 928 "cse_detection.m"
        else
#line 929 "cse_detection.m"
          {
#line 929 "cse_detection.m"
            mercury__map__det_insert_4_p_0(check_hlds__cse_detection__TypeInfo_22_22, check_hlds__cse_detection__TypeInfo_22_22, ((MR_Box) (check_hlds__cse_detection__Tvar_10)), ((MR_Box) (check_hlds__cse_detection__NewTvar_16)), check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17, check_hlds__cse_detection__STATE_VARIABLE_Renaming_18);
#line 929 "cse_detection.m"
            return;
          }
#line 924 "cse_detection.m"
      }
#line 931 "cse_detection.m"
    else
#line 929 "cse_detection.m"
      *check_hlds__cse_detection__STATE_VARIABLE_Renaming_18 = check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17;
#line 920 "cse_detection.m"
  }
#line 916 "cse_detection.m"
}

#line 902 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_type_info_locn_tvar_map_5_p_0(
#line 902 "cse_detection.m"
  MR_Word check_hlds__cse_detection__RttiVarMaps_6,
#line 902 "cse_detection.m"
  MR_Word check_hlds__cse_detection__FirstOldNewMap_7,
#line 902 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Tvar_8,
#line 902 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_0_14,
#line 902 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_15)
#line 902 "cse_detection.m"
{
#line 906 "cse_detection.m"
  {
#line 906 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 906 "cse_detection.m"
    MR_Word check_hlds__cse_detection__TypeInfoLocn0_10;
#line 906 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Old_11;
#line 912 "cse_detection.m"
    MR_Word check_hlds__cse_detection__New_12;
#line 909 "cse_detection.m"
    MR_Word check_hlds__cse_detection__TypeInfo_17_17;
#line 909 "cse_detection.m"
    MR_Box check_hlds__cse_detection__conv0_New_12;

#line 907 "cse_detection.m"
    {
#line 907 "cse_detection.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(check_hlds__cse_detection__RttiVarMaps_6, check_hlds__cse_detection__Tvar_8, &check_hlds__cse_detection__TypeInfoLocn0_10);
    }
#line 908 "cse_detection.m"
    {
#line 908 "cse_detection.m"
      hlds__hlds_rtti__type_info_locn_var_2_p_0(check_hlds__cse_detection__TypeInfoLocn0_10, &check_hlds__cse_detection__Old_11);
    }
#line 2019 "check_hlds.cse_detection.c"
    check_hlds__cse_detection__TypeInfo_17_17 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
#line 909 "cse_detection.m"
    {
#line 909 "cse_detection.m"
      check_hlds__cse_detection__succeeded = mercury__map__search_3_p_0(check_hlds__cse_detection__TypeInfo_17_17, check_hlds__cse_detection__TypeInfo_17_17, check_hlds__cse_detection__FirstOldNewMap_7, ((MR_Box) (check_hlds__cse_detection__Old_11)), &check_hlds__cse_detection__conv0_New_12);
    }
#line 909 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 909 "cse_detection.m"
      {
#line 909 "cse_detection.m"
        check_hlds__cse_detection__New_12 = ((MR_Word) check_hlds__cse_detection__conv0_New_12);
#line 909 "cse_detection.m"
        check_hlds__cse_detection__succeeded = MR_TRUE;
#line 909 "cse_detection.m"
      }
#line 912 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 910 "cse_detection.m"
      {
#line 910 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfoLocn_13;

#line 910 "cse_detection.m"
        {
#line 910 "cse_detection.m"
          hlds__hlds_rtti__type_info_locn_set_var_3_p_0(check_hlds__cse_detection__New_12, check_hlds__cse_detection__TypeInfoLocn0_10, &check_hlds__cse_detection__TypeInfoLocn_13);
        }
#line 911 "cse_detection.m"
        {
#line 911 "cse_detection.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, (MR_Word) &check_hlds__cse_detection_scalar_common_1[1], ((MR_Box) (check_hlds__cse_detection__TypeInfoLocn_13)), ((MR_Box) (check_hlds__cse_detection__Tvar_8)), check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_0_14, check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_15);
#line 911 "cse_detection.m"
          return;
        }
#line 910 "cse_detection.m"
      }
#line 912 "cse_detection.m"
    else
#line 911 "cse_detection.m"
      *check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_15 = check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_0_14;
#line 906 "cse_detection.m"
  }
#line 902 "cse_detection.m"
}

#line 896 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_3(
#line 896 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 896 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 896 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_2)
#line 896 "cse_detection.m"
{
#line 896 "cse_detection.m"
  {
#line 896 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 896 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv4_HeadVar__3_3;

#line 896 "cse_detection.m"
    {
#line 896 "cse_detection.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__cse_detection__wrapper_arg_1), &check_hlds__cse_detection__conv4_HeadVar__3_3);
    }
#line 896 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_2 = ((MR_Box) (check_hlds__cse_detection__conv4_HeadVar__3_3));
#line 896 "cse_detection.m"
  }
#line 896 "cse_detection.m"
}

#line 887 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_2(
#line 887 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 887 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 887 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 887 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3)
#line 887 "cse_detection.m"
{
#line 887 "cse_detection.m"
  {
#line 887 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 887 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv2_STATE_VARIABLE_Renaming_18;

#line 887 "cse_detection.m"
    {
#line 887 "cse_detection.m"
      check_hlds__cse_detection__find_merged_tvars_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv2_STATE_VARIABLE_Renaming_18);
    }
#line 887 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv2_STATE_VARIABLE_Renaming_18));
#line 887 "cse_detection.m"
  }
#line 887 "cse_detection.m"
}

#line 880 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_1(
#line 880 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 880 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 880 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 880 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3)
#line 880 "cse_detection.m"
{
#line 880 "cse_detection.m"
  {
#line 880 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 880 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv0_STATE_VARIABLE_NewTvarMap_15;

#line 880 "cse_detection.m"
    {
#line 880 "cse_detection.m"
      check_hlds__cse_detection__find_type_info_locn_tvar_map_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv0_STATE_VARIABLE_NewTvarMap_15);
    }
#line 880 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv0_STATE_VARIABLE_NewTvarMap_15));
#line 880 "cse_detection.m"
  }
#line 880 "cse_detection.m"
}

#line 844 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(
#line 844 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Unify_6,
#line 844 "cse_detection.m"
  MR_Word check_hlds__cse_detection__FirstOldNew_7,
#line 844 "cse_detection.m"
  MR_Word check_hlds__cse_detection__LaterOldNew_8,
#line 844 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25,
#line 844 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26)
#line 844 "cse_detection.m"
{
#line 859 "cse_detection.m"
  {
#line 859 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 851 "cse_detection.m"
    MR_Word check_hlds__cse_detection__UnifyInfo_13;
#line 851 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Var_16;
#line 851 "cse_detection.m"
    MR_Word check_hlds__cse_detection__ConsId_17;
#line 851 "cse_detection.m"
    MR_Word check_hlds__cse_detection__ModuleInfo_22;
#line 851 "cse_detection.m"
    MR_Word check_hlds__cse_detection__VarTypes_23;
#line 851 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Type_24;
#line 851 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Unify_6, (MR_Integer) 0)));
#line 851 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Unify_6, (MR_Integer) 1)));
#line 851 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_10_10;
#line 851 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_11_11;
#line 851 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_12_12;
#line 851 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_14_14;
#line 852 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_18_18;
#line 852 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_19_19;
#line 852 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_20_20;
#line 852 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_21_21;
#line 853 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_29_29;
#line 853 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_31_31;

#line 851 "cse_detection.m"
    check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 851 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 851 "cse_detection.m"
      {
#line 851 "cse_detection.m"
        check_hlds__cse_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 0)));
#line 851 "cse_detection.m"
        check_hlds__cse_detection__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 1)));
#line 851 "cse_detection.m"
        check_hlds__cse_detection__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 2)));
#line 851 "cse_detection.m"
        check_hlds__cse_detection__UnifyInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 3)));
#line 851 "cse_detection.m"
        check_hlds__cse_detection__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 4)));
#line 852 "cse_detection.m"
        check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__UnifyInfo_13)) == (MR_mktag((MR_Integer) 1)));
#line 852 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 852 "cse_detection.m"
          {
#line 852 "cse_detection.m"
            check_hlds__cse_detection__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 0)));
#line 852 "cse_detection.m"
            check_hlds__cse_detection__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 1)));
#line 852 "cse_detection.m"
            check_hlds__cse_detection__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 2)));
#line 852 "cse_detection.m"
            check_hlds__cse_detection__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 3)));
#line 852 "cse_detection.m"
            check_hlds__cse_detection__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 4)));
#line 852 "cse_detection.m"
            check_hlds__cse_detection__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 5)));
#line 853 "cse_detection.m"
            check_hlds__cse_detection__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 0)));
#line 853 "cse_detection.m"
            check_hlds__cse_detection__VarTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 1)));
#line 853 "cse_detection.m"
            check_hlds__cse_detection__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 2)));
#line 853 "cse_detection.m"
            check_hlds__cse_detection__ModuleInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 3)));
#line 855 "cse_detection.m"
            {
#line 855 "cse_detection.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__cse_detection__VarTypes_23, check_hlds__cse_detection__Var_16, &check_hlds__cse_detection__Type_24);
            }
#line 856 "cse_detection.m"
            {
#line 856 "cse_detection.m"
              check_hlds__cse_detection__succeeded = check_hlds__type_util__cons_id_is_existq_cons_3_p_0(check_hlds__cse_detection__ModuleInfo_22, check_hlds__cse_detection__Type_24, check_hlds__cse_detection__ConsId_17);
            }
#line 852 "cse_detection.m"
          }
#line 851 "cse_detection.m"
      }
#line 859 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 867 "cse_detection.m"
      {
#line 867 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfo_44_74 = (MR_Word) &check_hlds__cse_detection_scalar_common_2[0];
#line 867 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfo_45_75;
#line 867 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfo_50_80;
#line 867 "cse_detection.m"
        MR_Word check_hlds__cse_detection__LaterOldNew_40;
#line 867 "cse_detection.m"
        MR_Word check_hlds__cse_detection__FirstOldNewMap_41;
#line 867 "cse_detection.m"
        MR_Word check_hlds__cse_detection__LaterOldNewMap_42;
#line 867 "cse_detection.m"
        MR_Word check_hlds__cse_detection__RttiVarMaps0_43;
#line 867 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarTypes0_44;
#line 867 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TvarsList_45;
#line 867 "cse_detection.m"
        MR_Word check_hlds__cse_detection__NewTvarMap_46;
#line 867 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Renaming_47;
#line 867 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OldNew_48;
#line 867 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OldNewMap_49;
#line 867 "cse_detection.m"
        MR_Word check_hlds__cse_detection__RttiVarMaps_50;
#line 867 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarTypes_51;
#line 867 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_52_52;
#line 867 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_53_53;
#line 867 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_54_54;
#line 867 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_55_55;
#line 867 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_56_56;
#line 867 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_57_57;
#line 867 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_66_66;
#line 867 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_69_69;
#line 872 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_60_60;
#line 872 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_62_62;
#line 880 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv1_NewTvarMap_46;
#line 887 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv3_Renaming_47;
#line 899 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_67_67;
#line 899 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_68_68;

#line 868 "cse_detection.m"
        {
#line 868 "cse_detection.m"
          mercury__list__condense_2_p_0(check_hlds__cse_detection__TypeInfo_44_74, check_hlds__cse_detection__LaterOldNew_8, &check_hlds__cse_detection__LaterOldNew_40);
        }
#line 2340 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeInfo_45_75 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
#line 869 "cse_detection.m"
        {
#line 869 "cse_detection.m"
          mercury__map__from_assoc_list_2_p_0(check_hlds__cse_detection__TypeInfo_45_75, check_hlds__cse_detection__TypeInfo_45_75, check_hlds__cse_detection__FirstOldNew_7, &check_hlds__cse_detection__FirstOldNewMap_41);
        }
#line 870 "cse_detection.m"
        {
#line 870 "cse_detection.m"
          mercury__map__from_assoc_list_2_p_0(check_hlds__cse_detection__TypeInfo_45_75, check_hlds__cse_detection__TypeInfo_45_75, check_hlds__cse_detection__LaterOldNew_40, &check_hlds__cse_detection__LaterOldNewMap_42);
        }
#line 872 "cse_detection.m"
        check_hlds__cse_detection__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 0)));
#line 872 "cse_detection.m"
        check_hlds__cse_detection__VarTypes0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 1)));
#line 872 "cse_detection.m"
        check_hlds__cse_detection__RttiVarMaps0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 2)));
#line 872 "cse_detection.m"
        check_hlds__cse_detection__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 3)));
#line 879 "cse_detection.m"
        {
#line 879 "cse_detection.m"
          hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(check_hlds__cse_detection__RttiVarMaps0_43, &check_hlds__cse_detection__TvarsList_45);
        }
#line 880 "cse_detection.m"
        {
#line 880 "cse_detection.m"
          check_hlds__cse_detection__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 880 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 0) = ((MR_Box) (&check_hlds__cse_detection_scalar_common_4[0]));
#line 880 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 1) = ((MR_Box) (check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_1));
#line 880 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 880 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 3) = ((MR_Box) (check_hlds__cse_detection__RttiVarMaps0_43));
#line 880 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 4) = ((MR_Box) (check_hlds__cse_detection__FirstOldNewMap_41));
#line 880 "cse_detection.m"
        }
#line 2381 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeInfo_50_80 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[1];
#line 880 "cse_detection.m"
        {
#line 880 "cse_detection.m"
          check_hlds__cse_detection__V_53_53 = mercury__map__init_0_f_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, check_hlds__cse_detection__TypeInfo_50_80);
        }
#line 880 "cse_detection.m"
        {
#line 880 "cse_detection.m"
          mercury__list__foldl_4_p_0(check_hlds__cse_detection__TypeInfo_50_80, (MR_Word) &check_hlds__cse_detection_scalar_common_2[1], check_hlds__cse_detection__V_52_52, check_hlds__cse_detection__TvarsList_45, ((MR_Box) (check_hlds__cse_detection__V_53_53)), &check_hlds__cse_detection__conv1_NewTvarMap_46);
        }
#line 880 "cse_detection.m"
        check_hlds__cse_detection__NewTvarMap_46 = ((MR_Word) check_hlds__cse_detection__conv1_NewTvarMap_46);
#line 887 "cse_detection.m"
        {
#line 887 "cse_detection.m"
          check_hlds__cse_detection__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 887 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 0) = ((MR_Box) (&check_hlds__cse_detection_scalar_common_5[0]));
#line 887 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 1) = ((MR_Box) (check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_2));
#line 887 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 887 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 3) = ((MR_Box) (check_hlds__cse_detection__RttiVarMaps0_43));
#line 887 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 4) = ((MR_Box) (check_hlds__cse_detection__LaterOldNewMap_42));
#line 887 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 5) = ((MR_Box) (check_hlds__cse_detection__NewTvarMap_46));
#line 887 "cse_detection.m"
        }
#line 887 "cse_detection.m"
        {
#line 887 "cse_detection.m"
          check_hlds__cse_detection__V_55_55 = mercury__map__init_0_f_0(check_hlds__cse_detection__TypeInfo_50_80, check_hlds__cse_detection__TypeInfo_50_80);
        }
#line 887 "cse_detection.m"
        {
#line 887 "cse_detection.m"
          mercury__list__foldl_4_p_0(check_hlds__cse_detection__TypeInfo_50_80, (MR_Word) &check_hlds__cse_detection_scalar_common_2[2], check_hlds__cse_detection__V_54_54, check_hlds__cse_detection__TvarsList_45, ((MR_Box) (check_hlds__cse_detection__V_55_55)), &check_hlds__cse_detection__conv3_Renaming_47);
        }
#line 887 "cse_detection.m"
        check_hlds__cse_detection__Renaming_47 = ((MR_Word) check_hlds__cse_detection__conv3_Renaming_47);
#line 892 "cse_detection.m"
        {
#line 892 "cse_detection.m"
          mercury__list__append_3_p_1(check_hlds__cse_detection__TypeInfo_44_74, check_hlds__cse_detection__FirstOldNew_7, check_hlds__cse_detection__LaterOldNew_40, &check_hlds__cse_detection__OldNew_48);
        }
#line 893 "cse_detection.m"
        {
#line 893 "cse_detection.m"
          mercury__map__from_assoc_list_2_p_0(check_hlds__cse_detection__TypeInfo_45_75, check_hlds__cse_detection__TypeInfo_45_75, check_hlds__cse_detection__OldNew_48, &check_hlds__cse_detection__OldNewMap_49);
        }
#line 894 "cse_detection.m"
        {
#line 894 "cse_detection.m"
          check_hlds__cse_detection__V_56_56 = mercury__map__init_0_f_0(check_hlds__cse_detection__TypeInfo_50_80, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        }
#line 894 "cse_detection.m"
        {
#line 894 "cse_detection.m"
          hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(check_hlds__cse_detection__Renaming_47, check_hlds__cse_detection__V_56_56, check_hlds__cse_detection__OldNewMap_49, check_hlds__cse_detection__RttiVarMaps0_43, &check_hlds__cse_detection__RttiVarMaps_50);
        }
#line 896 "cse_detection.m"
        {
#line 896 "cse_detection.m"
          check_hlds__cse_detection__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 896 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_57_57, 0) = ((MR_Box) (&check_hlds__cse_detection_scalar_common_6[0]));
#line 896 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_57_57, 1) = ((MR_Box) (check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_3));
#line 896 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 896 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_57_57, 3) = ((MR_Box) (check_hlds__cse_detection__Renaming_47));
#line 896 "cse_detection.m"
        }
#line 896 "cse_detection.m"
        {
#line 896 "cse_detection.m"
          parse_tree__prog_data__transform_var_types_3_p_0(check_hlds__cse_detection__V_57_57, check_hlds__cse_detection__VarTypes0_44, &check_hlds__cse_detection__VarTypes_51);
        }
#line 899 "cse_detection.m"
        check_hlds__cse_detection__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 0)));
#line 899 "cse_detection.m"
        check_hlds__cse_detection__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 1)));
#line 899 "cse_detection.m"
        check_hlds__cse_detection__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 2)));
#line 899 "cse_detection.m"
        check_hlds__cse_detection__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 3)));
#line 900 "cse_detection.m"
        {
#line 900 "cse_detection.m"
          MR_Word base;
#line 900 "cse_detection.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 900 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26 = base;
#line 900 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__cse_detection__V_66_66));
#line 900 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__cse_detection__VarTypes_51));
#line 900 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__cse_detection__RttiVarMaps_50));
#line 900 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__cse_detection__V_69_69));
#line 900 "cse_detection.m"
        }
#line 867 "cse_detection.m"
      }
#line 859 "cse_detection.m"
    else
#line 858 "cse_detection.m"
      *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25;
#line 859 "cse_detection.m"
  }
#line 844 "cse_detection.m"
}

#line 760 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__pair_subterms_4_p_0(
#line 760 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 760 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 760 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3,
#line 760 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__4_4)
#line 760 "cse_detection.m"
{
#line 763 "cse_detection.m"
  {
#line 763 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 763 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 763 "cse_detection.m"
      *check_hlds__cse_detection__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 763 "cse_detection.m"
    else
#line 765 "cse_detection.m"
      {
#line 765 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OldVar_7;
#line 765 "cse_detection.m"
        MR_Word check_hlds__cse_detection__HoistedVar_8;
#line 765 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OldHoistedVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 765 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Replacements1_13;
#line 765 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));

#line 764 "cse_detection.m"
        check_hlds__cse_detection__OldVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_17_17, (MR_Integer) 0)));
#line 764 "cse_detection.m"
        check_hlds__cse_detection__HoistedVar_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_17_17, (MR_Integer) 1)));
#line 766 "cse_detection.m"
        {
#line 766 "cse_detection.m"
          check_hlds__cse_detection__pair_subterms_4_p_0(check_hlds__cse_detection__OldHoistedVars_9, check_hlds__cse_detection__HeadVar__2_2, check_hlds__cse_detection__HeadVar__3_3, &check_hlds__cse_detection__Replacements1_13);
        }
#line 767 "cse_detection.m"
        {
#line 767 "cse_detection.m"
          check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[0], ((MR_Box) (check_hlds__cse_detection__OldVar_7)), ((MR_Box) (check_hlds__cse_detection__HoistedVar_8)));
        }
#line 769 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 768 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__4_4 = check_hlds__cse_detection__Replacements1_13;
#line 769 "cse_detection.m"
        else
#line 770 "cse_detection.m"
          {
#line 770 "cse_detection.m"
            MR_Word check_hlds__cse_detection__MainCtxt_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 770 "cse_detection.m"
            MR_Word check_hlds__cse_detection__SubCtxt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 770 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goal_16;
#line 770 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_18_18;

#line 775 "cse_detection.m"
            {
#line 775 "cse_detection.m"
              check_hlds__cse_detection__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 775 "cse_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_18_18, 0) = ((MR_Box) (check_hlds__cse_detection__OldVar_7));
#line 775 "cse_detection.m"
            }
#line 775 "cse_detection.m"
            {
#line 775 "cse_detection.m"
              hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__cse_detection__HoistedVar_8, check_hlds__cse_detection__V_18_18, check_hlds__cse_detection__HeadVar__2_2, check_hlds__cse_detection__MainCtxt_14, check_hlds__cse_detection__SubCtxt_15, &check_hlds__cse_detection__Goal_16);
            }
#line 777 "cse_detection.m"
            {
#line 777 "cse_detection.m"
              MR_Word base;
#line 777 "cse_detection.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 777 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__4_4 = base;
#line 777 "cse_detection.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal_16));
#line 777 "cse_detection.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Replacements1_13));
#line 777 "cse_detection.m"
            }
#line 770 "cse_detection.m"
          }
#line 765 "cse_detection.m"
      }
#line 763 "cse_detection.m"
  }
#line 760 "cse_detection.m"
}

#line 736 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__find_similar_deconstruct_5_p_0(
#line 736 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HoistedUnifyGoal_6,
#line 736 "cse_detection.m"
  MR_Word check_hlds__cse_detection__OldUnifyGoal_7,
#line 736 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Context_8,
#line 736 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__OldHoistedVars_9,
#line 736 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Replacements_10)
#line 736 "cse_detection.m"
{
#line 756 "cse_detection.m"
  {
#line 756 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 756 "cse_detection.m"
    MR_Word check_hlds__cse_detection__OC_15;
#line 756 "cse_detection.m"
    MR_Word check_hlds__cse_detection__HoistedFunctor_18;
#line 756 "cse_detection.m"
    MR_Word check_hlds__cse_detection__HoistedVars_19;
#line 756 "cse_detection.m"
    MR_Word check_hlds__cse_detection__OldFunctor_30;
#line 756 "cse_detection.m"
    MR_Word check_hlds__cse_detection__OldVars_31;
#line 743 "cse_detection.m"
    MR_Word check_hlds__cse_detection__HoistedUnifyInfo_14;
#line 743 "cse_detection.m"
    MR_Word check_hlds__cse_detection__OldUnifyInfo_26;
#line 743 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HoistedUnifyGoal_6, (MR_Integer) 0)));
#line 743 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_38_38;
#line 743 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HoistedUnifyGoal_6, (MR_Integer) 1)));
#line 743 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_11_11;
#line 743 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_12_12;
#line 743 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_13_13;
#line 744 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_17_17;
#line 744 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_20_20;
#line 744 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_21_21;
#line 744 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_22_22;
#line 746 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_28_28;
#line 746 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_23_23;
#line 746 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_24_24;
#line 746 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_25_25;
#line 746 "cse_detection.m"
    MR_Word check_hlds__cse_detection___NC_27;
#line 747 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_29_29;
#line 747 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_32_32;
#line 747 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_33_33;
#line 747 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_34_34;

#line 743 "cse_detection.m"
    check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 743 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 743 "cse_detection.m"
      {
#line 743 "cse_detection.m"
        check_hlds__cse_detection__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 0)));
#line 743 "cse_detection.m"
        check_hlds__cse_detection__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 1)));
#line 743 "cse_detection.m"
        check_hlds__cse_detection__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 2)));
#line 743 "cse_detection.m"
        check_hlds__cse_detection__HoistedUnifyInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 3)));
#line 743 "cse_detection.m"
        check_hlds__cse_detection__OC_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 4)));
#line 744 "cse_detection.m"
        check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__HoistedUnifyInfo_14)) == (MR_mktag((MR_Integer) 1)));
#line 744 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 744 "cse_detection.m"
          {
#line 744 "cse_detection.m"
            check_hlds__cse_detection__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 0)));
#line 744 "cse_detection.m"
            check_hlds__cse_detection__HoistedFunctor_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 1)));
#line 744 "cse_detection.m"
            check_hlds__cse_detection__HoistedVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 2)));
#line 744 "cse_detection.m"
            check_hlds__cse_detection__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 3)));
#line 744 "cse_detection.m"
            check_hlds__cse_detection__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 4)));
#line 744 "cse_detection.m"
            check_hlds__cse_detection__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 5)));
#line 746 "cse_detection.m"
            check_hlds__cse_detection__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__OldUnifyGoal_7, (MR_Integer) 0)));
#line 746 "cse_detection.m"
            check_hlds__cse_detection__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__OldUnifyGoal_7, (MR_Integer) 1)));
#line 746 "cse_detection.m"
            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 746 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 746 "cse_detection.m"
              {
#line 746 "cse_detection.m"
                check_hlds__cse_detection__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 0)));
#line 746 "cse_detection.m"
                check_hlds__cse_detection__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 1)));
#line 746 "cse_detection.m"
                check_hlds__cse_detection__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 2)));
#line 746 "cse_detection.m"
                check_hlds__cse_detection__OldUnifyInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 3)));
#line 746 "cse_detection.m"
                check_hlds__cse_detection___NC_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 4)));
#line 747 "cse_detection.m"
                check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__OldUnifyInfo_26)) == (MR_mktag((MR_Integer) 1)));
#line 747 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 747 "cse_detection.m"
                  {
#line 747 "cse_detection.m"
                    check_hlds__cse_detection__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 0)));
#line 747 "cse_detection.m"
                    check_hlds__cse_detection__OldFunctor_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 1)));
#line 747 "cse_detection.m"
                    check_hlds__cse_detection__OldVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 2)));
#line 747 "cse_detection.m"
                    check_hlds__cse_detection__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 3)));
#line 747 "cse_detection.m"
                    check_hlds__cse_detection__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 4)));
#line 747 "cse_detection.m"
                    check_hlds__cse_detection__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 5)));
#line 747 "cse_detection.m"
                  }
#line 746 "cse_detection.m"
              }
#line 744 "cse_detection.m"
          }
#line 743 "cse_detection.m"
      }
#line 756 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 749 "cse_detection.m"
      {
#line 749 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfo_42_42;
#line 749 "cse_detection.m"
        MR_Integer check_hlds__cse_detection__HoistedVarsCount_35;
#line 749 "cse_detection.m"
        MR_Integer check_hlds__cse_detection__OldVarsCount_36;

#line 749 "cse_detection.m"
        {
#line 749 "cse_detection.m"
          check_hlds__cse_detection__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__cse_detection__HoistedFunctor_18, check_hlds__cse_detection__OldFunctor_30);
        }
#line 749 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 749 "cse_detection.m"
          {
#line 2777 "check_hlds.cse_detection.c"
            check_hlds__cse_detection__TypeInfo_42_42 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
#line 750 "cse_detection.m"
            {
#line 750 "cse_detection.m"
              mercury__list__length_2_p_0(check_hlds__cse_detection__TypeInfo_42_42, check_hlds__cse_detection__HoistedVars_19, &check_hlds__cse_detection__HoistedVarsCount_35);
            }
#line 751 "cse_detection.m"
            {
#line 751 "cse_detection.m"
              mercury__list__length_2_p_0(check_hlds__cse_detection__TypeInfo_42_42, check_hlds__cse_detection__OldVars_31, &check_hlds__cse_detection__OldVarsCount_36);
            }
#line 752 "cse_detection.m"
            check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__HoistedVarsCount_35 == check_hlds__cse_detection__OldVarsCount_36);
#line 749 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 749 "cse_detection.m"
              {
#line 753 "cse_detection.m"
                {
#line 753 "cse_detection.m"
                  mercury__assoc_list__from_corresponding_lists_3_p_0(check_hlds__cse_detection__TypeInfo_42_42, check_hlds__cse_detection__TypeInfo_42_42, check_hlds__cse_detection__OldVars_31, check_hlds__cse_detection__HoistedVars_19, check_hlds__cse_detection__OldHoistedVars_9);
                }
#line 755 "cse_detection.m"
                {
#line 755 "cse_detection.m"
                  check_hlds__cse_detection__pair_subterms_4_p_0(*check_hlds__cse_detection__OldHoistedVars_9, check_hlds__cse_detection__Context_8, check_hlds__cse_detection__OC_15, check_hlds__cse_detection__Replacements_10);
                }
#line 755 "cse_detection.m"
                check_hlds__cse_detection__succeeded = MR_TRUE;
#line 749 "cse_detection.m"
              }
#line 749 "cse_detection.m"
          }
#line 749 "cse_detection.m"
      }
#line 756 "cse_detection.m"
    else
#line 757 "cse_detection.m"
      {
#line 757 "cse_detection.m"
        {
#line 757 "cse_detection.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.find_similar_deconstruct\'/5", (MR_String) "non-deconstruct unify");
        }
#line 757 "cse_detection.m"
        check_hlds__cse_detection__succeeded = MR_TRUE;
#line 757 "cse_detection.m"
      }
#line 756 "cse_detection.m"
    return check_hlds__cse_detection__succeeded;
#line 756 "cse_detection.m"
  }
#line 736 "cse_detection.m"
}

#line 698 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__create_parallel_subterms_7_p_0(
#line 698 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 698 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Context_2,
#line 698 "cse_detection.m"
  MR_Word check_hlds__cse_detection__UnifyContext_3,
#line 698 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_4,
#line 698 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_5,
#line 698 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6,
#line 698 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7)
#line 698 "cse_detection.m"
{
#line 702 "cse_detection.m"
  {
#line 702 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 702 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 702 "cse_detection.m"
      {
#line 702 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 702 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 702 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_5 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_4;
#line 702 "cse_detection.m"
      }
#line 702 "cse_detection.m"
    else
#line 704 "cse_detection.m"
      {
#line 704 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OFV_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 704 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OFV0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 704 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OldNewVars1_20;
#line 704 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Replacements1_21;
#line 704 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_22;
#line 704 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25;
#line 704 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarSet0_37;
#line 704 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarTypes0_38;
#line 704 "cse_detection.m"
        MR_Word check_hlds__cse_detection__NFV_39;
#line 704 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarSet_40;
#line 704 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Type_41;
#line 704 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarTypes_42;
#line 704 "cse_detection.m"
        MR_Word check_hlds__cse_detection__MainCtxt_43;
#line 704 "cse_detection.m"
        MR_Word check_hlds__cse_detection__SubCtxt_44;
#line 704 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_46_46;
#line 704 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_47_47;
#line 704 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_58_58;
#line 704 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_59_59;
#line 718 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_51_51;
#line 718 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_52_52;
#line 731 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_56_56;
#line 731 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_57_57;

#line 705 "cse_detection.m"
        {
#line 705 "cse_detection.m"
          check_hlds__cse_detection__create_parallel_subterms_7_p_0(check_hlds__cse_detection__OFV0_14, check_hlds__cse_detection__Context_2, check_hlds__cse_detection__UnifyContext_3, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_4, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, &check_hlds__cse_detection__OldNewVars1_20, &check_hlds__cse_detection__Replacements1_21);
        }
#line 718 "cse_detection.m"
        check_hlds__cse_detection__VarSet0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 0)));
#line 718 "cse_detection.m"
        check_hlds__cse_detection__VarTypes0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 1)));
#line 718 "cse_detection.m"
        check_hlds__cse_detection__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 2)));
#line 718 "cse_detection.m"
        check_hlds__cse_detection__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 3)));
#line 720 "cse_detection.m"
        {
#line 720 "cse_detection.m"
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__cse_detection__NFV_39, check_hlds__cse_detection__VarSet0_37, &check_hlds__cse_detection__VarSet_40);
        }
#line 721 "cse_detection.m"
        {
#line 721 "cse_detection.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__cse_detection__VarTypes0_38, check_hlds__cse_detection__OFV_13, &check_hlds__cse_detection__Type_41);
        }
#line 722 "cse_detection.m"
        {
#line 722 "cse_detection.m"
          parse_tree__prog_data__add_var_type_4_p_0(check_hlds__cse_detection__NFV_39, check_hlds__cse_detection__Type_41, check_hlds__cse_detection__VarTypes0_38, &check_hlds__cse_detection__VarTypes_42);
        }
#line 723 "cse_detection.m"
        {
#line 723 "cse_detection.m"
          check_hlds__cse_detection__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 723 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_46_46, 0) = ((MR_Box) (check_hlds__cse_detection__OFV_13));
#line 723 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_46_46, 1) = ((MR_Box) (check_hlds__cse_detection__NFV_39));
#line 723 "cse_detection.m"
        }
#line 723 "cse_detection.m"
        {
#line 723 "cse_detection.m"
          MR_Word base;
#line 723 "cse_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__6_6 = base;
#line 723 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__V_46_46));
#line 723 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__OldNewVars1_20));
#line 723 "cse_detection.m"
        }
#line 724 "cse_detection.m"
        check_hlds__cse_detection__MainCtxt_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__UnifyContext_3, (MR_Integer) 0)));
#line 724 "cse_detection.m"
        check_hlds__cse_detection__SubCtxt_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__UnifyContext_3, (MR_Integer) 1)));
#line 729 "cse_detection.m"
        {
#line 729 "cse_detection.m"
          check_hlds__cse_detection__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 729 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_47_47, 0) = ((MR_Box) (check_hlds__cse_detection__NFV_39));
#line 729 "cse_detection.m"
        }
#line 729 "cse_detection.m"
        {
#line 729 "cse_detection.m"
          hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__cse_detection__OFV_13, check_hlds__cse_detection__V_47_47, check_hlds__cse_detection__Context_2, check_hlds__cse_detection__MainCtxt_43, check_hlds__cse_detection__SubCtxt_44, &check_hlds__cse_detection__Goal_22);
        }
#line 731 "cse_detection.m"
        check_hlds__cse_detection__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 0)));
#line 731 "cse_detection.m"
        check_hlds__cse_detection__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 1)));
#line 731 "cse_detection.m"
        check_hlds__cse_detection__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 2)));
#line 731 "cse_detection.m"
        check_hlds__cse_detection__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 3)));
#line 732 "cse_detection.m"
        {
#line 732 "cse_detection.m"
          MR_Word base;
#line 732 "cse_detection.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 732 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_5 = base;
#line 732 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__cse_detection__VarSet_40));
#line 732 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__cse_detection__VarTypes_42));
#line 732 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__cse_detection__V_58_58));
#line 732 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__cse_detection__V_59_59));
#line 732 "cse_detection.m"
        }
#line 709 "cse_detection.m"
        {
#line 709 "cse_detection.m"
          MR_Word base;
#line 709 "cse_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__7_7 = base;
#line 709 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal_22));
#line 709 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Replacements1_21));
#line 709 "cse_detection.m"
        }
#line 704 "cse_detection.m"
      }
#line 702 "cse_detection.m"
  }
#line 698 "cse_detection.m"
}

#line 634 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(
#line 634 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Var_8,
#line 634 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_9,
#line 634 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goals_10,
#line 634 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22,
#line 634 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_23,
#line 634 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24,
#line 634 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25)
#line 634 "cse_detection.m"
{
#line 641 "cse_detection.m"
  {
#line 641 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 641 "cse_detection.m"
    if ((check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 641 "cse_detection.m"
      {
#line 641 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OldNewVars_13;
#line 641 "cse_detection.m"
        MR_Word check_hlds__cse_detection__HoistedGoal_14;
#line 641 "cse_detection.m"
        MR_Word check_hlds__cse_detection__GoalExpr0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_9, (MR_Integer) 0)));
#line 641 "cse_detection.m"
        MR_Word check_hlds__cse_detection__GoalInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_9, (MR_Integer) 1)));
#line 694 "cse_detection.m"
        MR_Word check_hlds__cse_detection__RHS_47;
#line 694 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Umode_48;
#line 694 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Ucontext_50;
#line 694 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Consid_52;
#line 694 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Args_53;
#line 694 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Submodes_54;
#line 694 "cse_detection.m"
        MR_Word check_hlds__cse_detection__CanFail_55;
#line 694 "cse_detection.m"
        MR_Word check_hlds__cse_detection__CanCGC_56;
#line 675 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Unif0_49;
#line 675 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_46_46;
#line 676 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_51_51;

#line 675 "cse_detection.m"
        check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__GoalExpr0_43)) == (MR_mktag((MR_Integer) 1)));
#line 675 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 675 "cse_detection.m"
          {
#line 675 "cse_detection.m"
            check_hlds__cse_detection__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_43, (MR_Integer) 0)));
#line 675 "cse_detection.m"
            check_hlds__cse_detection__RHS_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_43, (MR_Integer) 1)));
#line 675 "cse_detection.m"
            check_hlds__cse_detection__Umode_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_43, (MR_Integer) 2)));
#line 675 "cse_detection.m"
            check_hlds__cse_detection__Unif0_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_43, (MR_Integer) 3)));
#line 675 "cse_detection.m"
            check_hlds__cse_detection__Ucontext_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_43, (MR_Integer) 4)));
#line 676 "cse_detection.m"
            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__Unif0_49)) == (MR_mktag((MR_Integer) 1)));
#line 676 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 676 "cse_detection.m"
              {
#line 676 "cse_detection.m"
                check_hlds__cse_detection__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_49, (MR_Integer) 0)));
#line 676 "cse_detection.m"
                check_hlds__cse_detection__Consid_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_49, (MR_Integer) 1)));
#line 676 "cse_detection.m"
                check_hlds__cse_detection__Args_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_49, (MR_Integer) 2)));
#line 676 "cse_detection.m"
                check_hlds__cse_detection__Submodes_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_49, (MR_Integer) 3)));
#line 676 "cse_detection.m"
                check_hlds__cse_detection__CanFail_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_49, (MR_Integer) 4)));
#line 676 "cse_detection.m"
                check_hlds__cse_detection__CanCGC_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_49, (MR_Integer) 5)));
#line 676 "cse_detection.m"
              }
#line 675 "cse_detection.m"
          }
#line 694 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 678 "cse_detection.m"
          {
#line 678 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeInfo_53_82;
#line 678 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Unif_57;
#line 678 "cse_detection.m"
            MR_Word check_hlds__cse_detection__GoalExpr1_61;
#line 678 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Context_72;
#line 678 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Sub_73;
#line 678 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_78_78;

#line 678 "cse_detection.m"
            {
#line 678 "cse_detection.m"
              check_hlds__cse_detection__Unif_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 678 "cse_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_57, 0) = ((MR_Box) (check_hlds__cse_detection__Var_8));
#line 678 "cse_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_57, 1) = ((MR_Box) (check_hlds__cse_detection__Consid_52));
#line 678 "cse_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_57, 2) = ((MR_Box) (check_hlds__cse_detection__Args_53));
#line 678 "cse_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_57, 3) = ((MR_Box) (check_hlds__cse_detection__Submodes_54));
#line 678 "cse_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_57, 4) = ((MR_Box) (check_hlds__cse_detection__CanFail_55));
#line 678 "cse_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_57, 5) = ((MR_Box) (check_hlds__cse_detection__CanCGC_56));
#line 678 "cse_detection.m"
            }
#line 682 "cse_detection.m"
            if (((MR_tag((MR_Word) check_hlds__cse_detection__RHS_47)) == (MR_mktag((MR_Integer) 1))))
#line 681 "cse_detection.m"
              {
#line 681 "cse_detection.m"
                check_hlds__cse_detection__GoalExpr1_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 681 "cse_detection.m"
                MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_61, 0) = ((MR_Box) (check_hlds__cse_detection__Var_8));
#line 681 "cse_detection.m"
                MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_61, 1) = ((MR_Box) (check_hlds__cse_detection__RHS_47));
#line 681 "cse_detection.m"
                MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_61, 2) = ((MR_Box) (check_hlds__cse_detection__Umode_48));
#line 681 "cse_detection.m"
                MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_61, 3) = ((MR_Box) (check_hlds__cse_detection__Unif_57));
#line 681 "cse_detection.m"
                MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_61, 4) = ((MR_Box) (check_hlds__cse_detection__Ucontext_50));
#line 681 "cse_detection.m"
              }
#line 682 "cse_detection.m"
            else
#line 685 "cse_detection.m"
              {
#line 686 "cse_detection.m"
                {
#line 686 "cse_detection.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.construct_common_unify\'/7", (MR_String) "non-functor unify");
#line 686 "cse_detection.m"
                  return;
                }
#line 685 "cse_detection.m"
              }
#line 688 "cse_detection.m"
            {
#line 688 "cse_detection.m"
              check_hlds__cse_detection__Context_72 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__cse_detection__GoalInfo_44);
            }
#line 689 "cse_detection.m"
            {
#line 689 "cse_detection.m"
              check_hlds__cse_detection__create_parallel_subterms_7_p_0(check_hlds__cse_detection__Args_53, check_hlds__cse_detection__Context_72, check_hlds__cse_detection__Ucontext_50, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25, &check_hlds__cse_detection__OldNewVars_13, check_hlds__cse_detection__Goals_10);
            }
#line 3207 "check_hlds.cse_detection.c"
            check_hlds__cse_detection__TypeInfo_53_82 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
#line 691 "cse_detection.m"
            {
#line 691 "cse_detection.m"
              mercury__map__from_assoc_list_2_p_0(check_hlds__cse_detection__TypeInfo_53_82, check_hlds__cse_detection__TypeInfo_53_82, check_hlds__cse_detection__OldNewVars_13, &check_hlds__cse_detection__Sub_73);
            }
#line 692 "cse_detection.m"
            {
#line 692 "cse_detection.m"
              check_hlds__cse_detection__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 692 "cse_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_78_78, 0) = ((MR_Box) (check_hlds__cse_detection__GoalExpr1_61));
#line 692 "cse_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_78_78, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_44));
#line 692 "cse_detection.m"
            }
#line 692 "cse_detection.m"
            {
#line 692 "cse_detection.m"
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(check_hlds__cse_detection__Sub_73, check_hlds__cse_detection__V_78_78, &check_hlds__cse_detection__HoistedGoal_14);
            }
#line 678 "cse_detection.m"
          }
#line 694 "cse_detection.m"
        else
#line 695 "cse_detection.m"
          {
#line 695 "cse_detection.m"
            {
#line 695 "cse_detection.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.construct_common_unify\'/7", (MR_String) "non-unify goal");
#line 695 "cse_detection.m"
              return;
            }
#line 695 "cse_detection.m"
          }
#line 644 "cse_detection.m"
        {
#line 644 "cse_detection.m"
          MR_Word base;
#line 644 "cse_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 644 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_CseState_23 = base;
#line 644 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__HoistedGoal_14));
#line 644 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__OldNewVars_13));
#line 644 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 644 "cse_detection.m"
        }
#line 641 "cse_detection.m"
      }
#line 641 "cse_detection.m"
    else
#line 641 "cse_detection.m"
      if ((check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 663 "cse_detection.m"
        {
#line 664 "cse_detection.m"
          {
#line 664 "cse_detection.m"
            MR_Word base;
#line 664 "cse_detection.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "cse_detection.m"
            *check_hlds__cse_detection__Goals_10 = base;
#line 664 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal0_9));
#line 664 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "cse_detection.m"
          }
#line 665 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_CseState_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 665 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24;
#line 663 "cse_detection.m"
        }
#line 641 "cse_detection.m"
      else
#line 647 "cse_detection.m"
        {
#line 647 "cse_detection.m"
          MR_Word check_hlds__cse_detection__FirstOldNewVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22, (MR_Integer) 1)));
#line 647 "cse_detection.m"
          MR_Word check_hlds__cse_detection__LaterOldNewVars0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22, (MR_Integer) 2)));
#line 647 "cse_detection.m"
          MR_Word check_hlds__cse_detection__GoalInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_9, (MR_Integer) 1)));
#line 647 "cse_detection.m"
          MR_Word check_hlds__cse_detection__Context_19;
#line 647 "cse_detection.m"
          MR_Word check_hlds__cse_detection__HoistedGoal_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22, (MR_Integer) 0)));
#line 648 "cse_detection.m"
          MR_Word check_hlds__cse_detection__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_9, (MR_Integer) 0)));
#line 658 "cse_detection.m"
          MR_Word check_hlds__cse_detection__Goals0_20;
#line 658 "cse_detection.m"
          MR_Word check_hlds__cse_detection__OldNewVars_34;

#line 649 "cse_detection.m"
          {
#line 649 "cse_detection.m"
            check_hlds__cse_detection__Context_19 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__cse_detection__GoalInfo_18);
          }
#line 651 "cse_detection.m"
          {
#line 651 "cse_detection.m"
            check_hlds__cse_detection__succeeded = check_hlds__cse_detection__find_similar_deconstruct_5_p_0(check_hlds__cse_detection__HoistedGoal_36, check_hlds__cse_detection__Goal0_9, check_hlds__cse_detection__Context_19, &check_hlds__cse_detection__OldNewVars_34, &check_hlds__cse_detection__Goals0_20);
          }
#line 658 "cse_detection.m"
          if (check_hlds__cse_detection__succeeded)
#line 654 "cse_detection.m"
            {
#line 654 "cse_detection.m"
              MR_Word check_hlds__cse_detection__LaterOldNewVars_21;

#line 654 "cse_detection.m"
              *check_hlds__cse_detection__Goals_10 = check_hlds__cse_detection__Goals0_20;
#line 655 "cse_detection.m"
              {
#line 655 "cse_detection.m"
                check_hlds__cse_detection__LaterOldNewVars_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 655 "cse_detection.m"
                MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNewVars_21, 0) = ((MR_Box) (check_hlds__cse_detection__OldNewVars_34));
#line 655 "cse_detection.m"
                MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNewVars_21, 1) = ((MR_Box) (check_hlds__cse_detection__LaterOldNewVars0_16));
#line 655 "cse_detection.m"
              }
#line 656 "cse_detection.m"
              {
#line 656 "cse_detection.m"
                MR_Word base;
#line 656 "cse_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 656 "cse_detection.m"
                *check_hlds__cse_detection__STATE_VARIABLE_CseState_23 = base;
#line 656 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__HoistedGoal_36));
#line 656 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__FirstOldNewVars_15));
#line 656 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__cse_detection__LaterOldNewVars_21));
#line 656 "cse_detection.m"
              }
#line 654 "cse_detection.m"
            }
#line 658 "cse_detection.m"
          else
#line 659 "cse_detection.m"
            {
#line 659 "cse_detection.m"
              {
#line 659 "cse_detection.m"
                MR_Word base;
#line 659 "cse_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "cse_detection.m"
                *check_hlds__cse_detection__Goals_10 = base;
#line 659 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal0_9));
#line 659 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 659 "cse_detection.m"
              }
#line 660 "cse_detection.m"
              *check_hlds__cse_detection__STATE_VARIABLE_CseState_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 659 "cse_detection.m"
            }
#line 660 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24;
#line 647 "cse_detection.m"
        }
#line 641 "cse_detection.m"
  }
#line 634 "cse_detection.m"
}

#line 599 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0_1(
#line 599 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 599 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 599 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 599 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 599 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 599 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 599 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 599 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7)
#line 599 "cse_detection.m"
{
#line 599 "cse_detection.m"
  {
#line 599 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 599 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv2_Goals_10;
#line 599 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23;
#line 599 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25;

#line 599 "cse_detection.m"
    {
#line 599 "cse_detection.m"
      check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv2_Goals_10, ((MR_Word) check_hlds__cse_detection__wrapper_arg_4), &check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23, ((MR_Word) check_hlds__cse_detection__wrapper_arg_6), &check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25);
    }
#line 599 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv2_Goals_10));
#line 599 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23));
#line 599 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_7 = ((MR_Box) (check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25));
#line 599 "cse_detection.m"
  }
#line 599 "cse_detection.m"
}

#line 591 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(
#line 591 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 591 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 591 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3,
#line 591 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_4,
#line 591 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 591 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 591 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7)
#line 591 "cse_detection.m"
{
#line 595 "cse_detection.m"
  {
#line 595 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 595 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 595 "cse_detection.m"
      {
#line 595 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 595 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5;
#line 595 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseState_4 = check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3;
#line 595 "cse_detection.m"
        check_hlds__cse_detection__succeeded = MR_TRUE;
#line 595 "cse_detection.m"
      }
#line 595 "cse_detection.m"
    else
#line 597 "cse_detection.m"
      {
#line 597 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Case0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 597 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Cases0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 597 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Case_20;
#line 597 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Cases_21;
#line 597 "cse_detection.m"
        MR_Word check_hlds__cse_detection__MainConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_15, (MR_Integer) 0)));
#line 597 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OtherConsIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_15, (MR_Integer) 1)));
#line 597 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_15, (MR_Integer) 2)));
#line 597 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_25;
#line 597 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34;
#line 597 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_35_35;
#line 597 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_48_48;
#line 599 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_34_34;
#line 599 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_35_35;
#line 602 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_26_26;
#line 602 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_27_27;
#line 602 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_28_28;

#line 599 "cse_detection.m"
        {
#line 599 "cse_detection.m"
          check_hlds__switch_detection__find_bind_var_9_p_0((MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0, (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0, check_hlds__cse_detection__HeadVar__2_2, (MR_Word) &check_hlds__cse_detection_scalar_common_2[6], check_hlds__cse_detection__Goal0_24, &check_hlds__cse_detection__Goal_25, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3)), &check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_34_34, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5)), &check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_35_35, &check_hlds__cse_detection__V_48_48);
        }
#line 599 "cse_detection.m"
        check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34 = ((MR_Word) check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_34_34);
#line 599 "cse_detection.m"
        check_hlds__cse_detection__STATE_VARIABLE_CseInfo_35_35 = ((MR_Word) check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_35_35);
#line 599 "cse_detection.m"
        check_hlds__cse_detection__succeeded = ((MR_Integer) 0 == check_hlds__cse_detection__V_48_48);
#line 597 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 597 "cse_detection.m"
          {
#line 602 "cse_detection.m"
            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 602 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 602 "cse_detection.m"
              {
#line 602 "cse_detection.m"
                check_hlds__cse_detection__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34, (MR_Integer) 0)));
#line 602 "cse_detection.m"
                check_hlds__cse_detection__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34, (MR_Integer) 1)));
#line 602 "cse_detection.m"
                check_hlds__cse_detection__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34, (MR_Integer) 2)));
#line 601 "cse_detection.m"
                {
#line 601 "cse_detection.m"
                  check_hlds__cse_detection__Case_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 601 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_20, 0) = ((MR_Box) (check_hlds__cse_detection__MainConsId_22));
#line 601 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_20, 1) = ((MR_Box) (check_hlds__cse_detection__OtherConsIds_23));
#line 601 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_20, 2) = ((MR_Box) (check_hlds__cse_detection__Goal_25));
#line 601 "cse_detection.m"
                }
#line 603 "cse_detection.m"
                {
#line 603 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(check_hlds__cse_detection__Cases0_16, check_hlds__cse_detection__HeadVar__2_2, check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34, check_hlds__cse_detection__STATE_VARIABLE_CseState_4, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_35_35, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6, &check_hlds__cse_detection__Cases_21);
                }
#line 597 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 597 "cse_detection.m"
                  {
#line 597 "cse_detection.m"
                    {
#line 597 "cse_detection.m"
                      MR_Word base;
#line 597 "cse_detection.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "cse_detection.m"
                      *check_hlds__cse_detection__HeadVar__7_7 = base;
#line 597 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Case_20));
#line 597 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Cases_21));
#line 597 "cse_detection.m"
                    }
#line 597 "cse_detection.m"
                    check_hlds__cse_detection__succeeded = MR_TRUE;
#line 597 "cse_detection.m"
                  }
#line 602 "cse_detection.m"
              }
#line 597 "cse_detection.m"
          }
#line 597 "cse_detection.m"
      }
#line 595 "cse_detection.m"
    return check_hlds__cse_detection__succeeded;
#line 595 "cse_detection.m"
  }
#line 591 "cse_detection.m"
}

#line 574 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0_1(
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 574 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 574 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 574 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7)
#line 574 "cse_detection.m"
{
#line 574 "cse_detection.m"
  {
#line 574 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 574 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv2_Goals_10;
#line 574 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23;
#line 574 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25;

#line 574 "cse_detection.m"
    {
#line 574 "cse_detection.m"
      check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv2_Goals_10, ((MR_Word) check_hlds__cse_detection__wrapper_arg_4), &check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23, ((MR_Word) check_hlds__cse_detection__wrapper_arg_6), &check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25);
    }
#line 574 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv2_Goals_10));
#line 574 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23));
#line 574 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_7 = ((MR_Box) (check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25));
#line 574 "cse_detection.m"
  }
#line 574 "cse_detection.m"
}

#line 567 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0(
#line 567 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 567 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 567 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3,
#line 567 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_4,
#line 567 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 567 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 567 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7)
#line 567 "cse_detection.m"
{
#line 571 "cse_detection.m"
  {
#line 571 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 571 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 571 "cse_detection.m"
      {
#line 571 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 571 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5;
#line 571 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseState_4 = check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3;
#line 571 "cse_detection.m"
        check_hlds__cse_detection__succeeded = MR_TRUE;
#line 571 "cse_detection.m"
      }
#line 571 "cse_detection.m"
    else
#line 573 "cse_detection.m"
      {
#line 573 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 573 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 573 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_20;
#line 573 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goals_21;
#line 573 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30;
#line 573 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_31;
#line 573 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_44_44;
#line 574 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_30;
#line 574 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_31;
#line 576 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_22_22;
#line 576 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_23_23;
#line 576 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_24_24;

#line 574 "cse_detection.m"
        {
#line 574 "cse_detection.m"
          check_hlds__switch_detection__find_bind_var_9_p_0((MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0, (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0, check_hlds__cse_detection__HeadVar__2_2, (MR_Word) &check_hlds__cse_detection_scalar_common_2[5], check_hlds__cse_detection__Goal0_15, &check_hlds__cse_detection__Goal_20, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3)), &check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_30, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5)), &check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_31, &check_hlds__cse_detection__V_44_44);
        }
#line 574 "cse_detection.m"
        check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30 = ((MR_Word) check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_30);
#line 574 "cse_detection.m"
        check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_31 = ((MR_Word) check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_31);
#line 574 "cse_detection.m"
        check_hlds__cse_detection__succeeded = ((MR_Integer) 0 == check_hlds__cse_detection__V_44_44);
#line 573 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 573 "cse_detection.m"
          {
#line 576 "cse_detection.m"
            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 576 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 576 "cse_detection.m"
              {
#line 576 "cse_detection.m"
                check_hlds__cse_detection__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30, (MR_Integer) 0)));
#line 576 "cse_detection.m"
                check_hlds__cse_detection__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30, (MR_Integer) 1)));
#line 576 "cse_detection.m"
                check_hlds__cse_detection__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30, (MR_Integer) 2)));
#line 577 "cse_detection.m"
                {
#line 577 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = check_hlds__cse_detection__common_deconstruct_2_7_p_0(check_hlds__cse_detection__Goals0_16, check_hlds__cse_detection__HeadVar__2_2, check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30, check_hlds__cse_detection__STATE_VARIABLE_CseState_4, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_31, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6, &check_hlds__cse_detection__Goals_21);
                }
#line 573 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 573 "cse_detection.m"
                  {
#line 573 "cse_detection.m"
                    {
#line 573 "cse_detection.m"
                      MR_Word base;
#line 573 "cse_detection.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "cse_detection.m"
                      *check_hlds__cse_detection__HeadVar__7_7 = base;
#line 573 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal_20));
#line 573 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_21));
#line 573 "cse_detection.m"
                    }
#line 573 "cse_detection.m"
                    check_hlds__cse_detection__succeeded = MR_TRUE;
#line 573 "cse_detection.m"
                  }
#line 576 "cse_detection.m"
              }
#line 573 "cse_detection.m"
          }
#line 573 "cse_detection.m"
      }
#line 571 "cse_detection.m"
    return check_hlds__cse_detection__succeeded;
#line 571 "cse_detection.m"
  }
#line 567 "cse_detection.m"
}

#line 529 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_arms_10_p_0(
#line 529 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cond0_11,
#line 529 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Cond_12,
#line 529 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Then0_13,
#line 529 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Then_14,
#line 529 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Else0_15,
#line 529 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Else_16,
#line 529 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25,
#line 529 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26,
#line 529 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_18,
#line 529 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_19)
#line 529 "cse_detection.m"
{
#line 534 "cse_detection.m"
  {
#line 534 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 534 "cse_detection.m"
    MR_Word check_hlds__cse_detection__InstMap1_20;
#line 534 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Redo1_21;
#line 534 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Redo2_22;
#line 534 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Redo3_23;
#line 534 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Redo12_24;
#line 534 "cse_detection.m"
    MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_27_27;
#line 534 "cse_detection.m"
    MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_28_28;
#line 534 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalExpr0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Cond0_11, (MR_Integer) 0)));
#line 534 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Cond0_11, (MR_Integer) 1)));
#line 534 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalExpr_40;
#line 534 "cse_detection.m"
    MR_Word check_hlds__cse_detection__InstMapDelta_41;
#line 259 "cse_detection.m"
    MR_Word check_hlds__cse_detection___InstMap_50;
#line 259 "cse_detection.m"
    MR_Word check_hlds__cse_detection___InstMap_59;

#line 272 "cse_detection.m"
    {
#line 272 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(check_hlds__cse_detection__GoalExpr0_38, &check_hlds__cse_detection__GoalExpr_40, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_27_27, check_hlds__cse_detection__GoalInfo_39, check_hlds__cse_detection__InstMap0_18, &check_hlds__cse_detection__Redo1_21);
    }
#line 274 "cse_detection.m"
    {
#line 274 "cse_detection.m"
      MR_Word base;
#line 274 "cse_detection.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 274 "cse_detection.m"
      *check_hlds__cse_detection__Cond_12 = base;
#line 274 "cse_detection.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__cse_detection__GoalExpr_40));
#line 274 "cse_detection.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_39));
#line 274 "cse_detection.m"
    }
#line 275 "cse_detection.m"
    {
#line 275 "cse_detection.m"
      check_hlds__cse_detection__InstMapDelta_41 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__cse_detection__GoalInfo_39);
    }
#line 276 "cse_detection.m"
    {
#line 276 "cse_detection.m"
      hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__cse_detection__InstMap0_18, check_hlds__cse_detection__InstMapDelta_41, &check_hlds__cse_detection__InstMap1_20);
    }
#line 259 "cse_detection.m"
    {
#line 259 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Then0_13, check_hlds__cse_detection__Then_14, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_27_27, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_28_28, check_hlds__cse_detection__InstMap1_20, &check_hlds__cse_detection___InstMap_50, &check_hlds__cse_detection__Redo2_22);
    }
#line 259 "cse_detection.m"
    {
#line 259 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Else0_15, check_hlds__cse_detection__Else_16, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_28_28, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26, check_hlds__cse_detection__InstMap0_18, &check_hlds__cse_detection___InstMap_59, &check_hlds__cse_detection__Redo3_23);
    }
#line 539 "cse_detection.m"
    {
#line 539 "cse_detection.m"
      mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_21, check_hlds__cse_detection__Redo2_22, &check_hlds__cse_detection__Redo12_24);
    }
#line 540 "cse_detection.m"
    {
#line 540 "cse_detection.m"
      mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo12_24, check_hlds__cse_detection__Redo3_23, check_hlds__cse_detection__Redo_19);
#line 540 "cse_detection.m"
      return;
    }
#line 534 "cse_detection.m"
  }
#line 529 "cse_detection.m"
}

#line 574 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0_2(
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 574 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 574 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 574 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7)
#line 574 "cse_detection.m"
{
#line 574 "cse_detection.m"
  {
#line 574 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 574 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv7_Goals_10;
#line 574 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv6_STATE_VARIABLE_CseState_23;
#line 574 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv5_STATE_VARIABLE_CseInfo_25;

#line 574 "cse_detection.m"
    {
#line 574 "cse_detection.m"
      check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv7_Goals_10, ((MR_Word) check_hlds__cse_detection__wrapper_arg_4), &check_hlds__cse_detection__conv6_STATE_VARIABLE_CseState_23, ((MR_Word) check_hlds__cse_detection__wrapper_arg_6), &check_hlds__cse_detection__conv5_STATE_VARIABLE_CseInfo_25);
    }
#line 574 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv7_Goals_10));
#line 574 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__cse_detection__conv6_STATE_VARIABLE_CseState_23));
#line 574 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_7 = ((MR_Box) (check_hlds__cse_detection__conv5_STATE_VARIABLE_CseInfo_25));
#line 574 "cse_detection.m"
  }
#line 574 "cse_detection.m"
}

#line 574 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0_1(
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 574 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 574 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 574 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 574 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7)
#line 574 "cse_detection.m"
{
#line 574 "cse_detection.m"
  {
#line 574 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 574 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv2_Goals_10;
#line 574 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23;
#line 574 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25;

#line 574 "cse_detection.m"
    {
#line 574 "cse_detection.m"
      check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv2_Goals_10, ((MR_Word) check_hlds__cse_detection__wrapper_arg_4), &check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23, ((MR_Word) check_hlds__cse_detection__wrapper_arg_6), &check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25);
    }
#line 574 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv2_Goals_10));
#line 574 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23));
#line 574 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_7 = ((MR_Box) (check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25));
#line 574 "cse_detection.m"
  }
#line 574 "cse_detection.m"
}

#line 498 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0(
#line 498 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 498 "cse_detection.m"
  MR_Word check_hlds__cse_detection__IfVars_2,
#line 498 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cond0_3,
#line 498 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Then0_4,
#line 498 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Else0_5,
#line 498 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo_6,
#line 498 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap_7,
#line 498 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8,
#line 498 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_9,
#line 498 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_10,
#line 498 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__11_11)
#line 498 "cse_detection.m"
{
#line 504 "cse_detection.m"
  while (MR_TRUE)
#line 504 "cse_detection.m"
    {
#line 504 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 504 "cse_detection.m"
      {
#line 504 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;

#line 504 "cse_detection.m"
        if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 504 "cse_detection.m"
          {
#line 504 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Cond_20;
#line 504 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Then_21;
#line 504 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Else_22;

#line 505 "cse_detection.m"
            {
#line 505 "cse_detection.m"
              check_hlds__cse_detection__detect_cse_in_ite_arms_10_p_0(check_hlds__cse_detection__Cond0_3, &check_hlds__cse_detection__Cond_20, check_hlds__cse_detection__Then0_4, &check_hlds__cse_detection__Then_21, check_hlds__cse_detection__Else0_5, &check_hlds__cse_detection__Else_22, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_9, check_hlds__cse_detection__InstMap_7, check_hlds__cse_detection__Redo_10);
            }
#line 504 "cse_detection.m"
            {
#line 504 "cse_detection.m"
              MR_Word base;
#line 504 "cse_detection.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 504 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__11_11 = base;
#line 504 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 504 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__IfVars_2));
#line 504 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__Cond_20));
#line 504 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__cse_detection__Then_21));
#line 504 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__cse_detection__Else_22));
#line 504 "cse_detection.m"
            }
#line 504 "cse_detection.m"
          }
#line 504 "cse_detection.m"
        else
#line 508 "cse_detection.m"
          {
#line 508 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 508 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Vars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 524 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Unify_39;
#line 524 "cse_detection.m"
            MR_Word check_hlds__cse_detection__FirstOldNew_40;
#line 524 "cse_detection.m"
            MR_Word check_hlds__cse_detection__LaterOldNew_41;
#line 524 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Then_43;
#line 524 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Else_44;
#line 524 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_49_49;
#line 510 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeCtorInfo_42_112;
#line 510 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeCtorInfo_43_113;
#line 510 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeCtorInfo_42_156;
#line 510 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeCtorInfo_43_157;
#line 510 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ModuleInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 3)));
#line 510 "cse_detection.m"
            MR_Word check_hlds__cse_detection__VarInst0_38;
#line 510 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_51_51;
#line 510 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_75_75;
#line 510 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals0_86;
#line 510 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_99_99;
#line 510 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100;
#line 510 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_101;
#line 510 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_102_102;
#line 510 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_114_114;
#line 510 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goal0_129;
#line 510 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals_135;
#line 510 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_143_143;
#line 510 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144;
#line 510 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_146_146;
#line 510 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_158_158;
#line 510 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 0)));
#line 510 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 1)));
#line 510 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 2)));
#line 574 "cse_detection.m"
            MR_Box check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_100;
#line 574 "cse_detection.m"
            MR_Box check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_101;
#line 576 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_92_92;
#line 576 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_93_93;
#line 576 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_94_94;
#line 573 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals0_130;
#line 574 "cse_detection.m"
            MR_Box check_hlds__cse_detection__conv9_STATE_VARIABLE_CseState_30_144;
#line 574 "cse_detection.m"
            MR_Box check_hlds__cse_detection__conv8_STATE_VARIABLE_CseInfo_49_49;
#line 565 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_73_73;
#line 565 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_74_74;
#line 573 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals_91;

#line 511 "cse_detection.m"
            {
#line 511 "cse_detection.m"
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__cse_detection__InstMap_7, check_hlds__cse_detection__Var_26, &check_hlds__cse_detection__VarInst0_38);
            }
#line 514 "cse_detection.m"
            {
#line 514 "cse_detection.m"
              check_hlds__cse_detection__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_p_0(check_hlds__cse_detection__ModuleInfo_37, check_hlds__cse_detection__VarInst0_38);
            }
#line 510 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 510 "cse_detection.m"
              {
#line 515 "cse_detection.m"
                check_hlds__cse_detection__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 563 "cse_detection.m"
                check_hlds__cse_detection__V_75_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 515 "cse_detection.m"
                {
#line 515 "cse_detection.m"
                  check_hlds__cse_detection__Goals0_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals0_86, 0) = ((MR_Box) (check_hlds__cse_detection__Else0_5));
#line 515 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals0_86, 1) = ((MR_Box) (check_hlds__cse_detection__V_51_51));
#line 515 "cse_detection.m"
                }
#line 574 "cse_detection.m"
                check_hlds__cse_detection__V_99_99 = (MR_Word) &check_hlds__cse_detection_scalar_common_2[3];
#line 574 "cse_detection.m"
                check_hlds__cse_detection__V_102_102 = (MR_Integer) 0;
#line 4176 "check_hlds.cse_detection.c"
                check_hlds__cse_detection__TypeCtorInfo_42_112 = (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0;
#line 4178 "check_hlds.cse_detection.c"
                check_hlds__cse_detection__TypeCtorInfo_43_113 = (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0;
#line 574 "cse_detection.m"
                {
#line 574 "cse_detection.m"
                  check_hlds__switch_detection__find_bind_var_9_p_0(check_hlds__cse_detection__TypeCtorInfo_42_112, check_hlds__cse_detection__TypeCtorInfo_43_113, check_hlds__cse_detection__Var_26, check_hlds__cse_detection__V_99_99, check_hlds__cse_detection__Then0_4, &check_hlds__cse_detection__Then_43, ((MR_Box) (check_hlds__cse_detection__V_75_75)), &check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_100, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8)), &check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_101, &check_hlds__cse_detection__V_114_114);
                }
#line 574 "cse_detection.m"
                check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100 = ((MR_Word) check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_100);
#line 574 "cse_detection.m"
                check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_101 = ((MR_Word) check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_101);
#line 574 "cse_detection.m"
                check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_102_102 == check_hlds__cse_detection__V_114_114);
#line 510 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 510 "cse_detection.m"
                  {
#line 576 "cse_detection.m"
                    check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100)) == (MR_mktag((MR_Integer) 1)));
#line 576 "cse_detection.m"
                    if (check_hlds__cse_detection__succeeded)
#line 576 "cse_detection.m"
                      {
#line 576 "cse_detection.m"
                        check_hlds__cse_detection__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100, (MR_Integer) 0)));
#line 576 "cse_detection.m"
                        check_hlds__cse_detection__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100, (MR_Integer) 1)));
#line 576 "cse_detection.m"
                        check_hlds__cse_detection__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100, (MR_Integer) 2)));
#line 573 "cse_detection.m"
                        check_hlds__cse_detection__Goal0_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals0_86, (MR_Integer) 0)));
#line 573 "cse_detection.m"
                        check_hlds__cse_detection__Goals0_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals0_86, (MR_Integer) 1)));
#line 574 "cse_detection.m"
                        check_hlds__cse_detection__V_143_143 = (MR_Word) &check_hlds__cse_detection_scalar_common_2[4];
#line 574 "cse_detection.m"
                        check_hlds__cse_detection__V_146_146 = (MR_Integer) 0;
#line 4215 "check_hlds.cse_detection.c"
                        check_hlds__cse_detection__TypeCtorInfo_42_156 = (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0;
#line 4217 "check_hlds.cse_detection.c"
                        check_hlds__cse_detection__TypeCtorInfo_43_157 = (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0;
#line 574 "cse_detection.m"
                        {
#line 574 "cse_detection.m"
                          check_hlds__switch_detection__find_bind_var_9_p_0(check_hlds__cse_detection__TypeCtorInfo_42_156, check_hlds__cse_detection__TypeCtorInfo_43_157, check_hlds__cse_detection__Var_26, check_hlds__cse_detection__V_143_143, check_hlds__cse_detection__Goal0_129, &check_hlds__cse_detection__Else_44, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100)), &check_hlds__cse_detection__conv9_STATE_VARIABLE_CseState_30_144, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_101)), &check_hlds__cse_detection__conv8_STATE_VARIABLE_CseInfo_49_49, &check_hlds__cse_detection__V_158_158);
                        }
#line 574 "cse_detection.m"
                        check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144 = ((MR_Word) check_hlds__cse_detection__conv9_STATE_VARIABLE_CseState_30_144);
#line 574 "cse_detection.m"
                        check_hlds__cse_detection__STATE_VARIABLE_CseInfo_49_49 = ((MR_Word) check_hlds__cse_detection__conv8_STATE_VARIABLE_CseInfo_49_49);
#line 574 "cse_detection.m"
                        check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_146_146 == check_hlds__cse_detection__V_158_158);
#line 510 "cse_detection.m"
                        if (check_hlds__cse_detection__succeeded)
#line 510 "cse_detection.m"
                          {
#line 576 "cse_detection.m"
                            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144)) == (MR_mktag((MR_Integer) 1)));
#line 576 "cse_detection.m"
                            if (check_hlds__cse_detection__succeeded)
#line 576 "cse_detection.m"
                              {
#line 576 "cse_detection.m"
                                check_hlds__cse_detection__Unify_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144, (MR_Integer) 0)));
#line 576 "cse_detection.m"
                                check_hlds__cse_detection__FirstOldNew_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144, (MR_Integer) 1)));
#line 576 "cse_detection.m"
                                check_hlds__cse_detection__LaterOldNew_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144, (MR_Integer) 2)));
#line 571 "cse_detection.m"
                                check_hlds__cse_detection__Goals_135 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 565 "cse_detection.m"
                                check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__LaterOldNew_41)) == (MR_mktag((MR_Integer) 1)));
#line 565 "cse_detection.m"
                                if (check_hlds__cse_detection__succeeded)
#line 565 "cse_detection.m"
                                  {
#line 565 "cse_detection.m"
                                    check_hlds__cse_detection__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_41, (MR_Integer) 0)));
#line 565 "cse_detection.m"
                                    check_hlds__cse_detection__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_41, (MR_Integer) 1)));
#line 573 "cse_detection.m"
                                    {
#line 573 "cse_detection.m"
                                      check_hlds__cse_detection__Goals_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "cse_detection.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals_91, 0) = ((MR_Box) (check_hlds__cse_detection__Else_44));
#line 573 "cse_detection.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals_91, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_135));
#line 573 "cse_detection.m"
                                    }
#line 517 "cse_detection.m"
                                    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__Goals_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 565 "cse_detection.m"
                                  }
#line 576 "cse_detection.m"
                              }
#line 510 "cse_detection.m"
                          }
#line 576 "cse_detection.m"
                      }
#line 510 "cse_detection.m"
                  }
#line 510 "cse_detection.m"
              }
#line 524 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 520 "cse_detection.m"
              {
#line 520 "cse_detection.m"
                MR_Word check_hlds__cse_detection__IfGoal_45;
#line 520 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_55_55;
#line 520 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_57_57;
#line 520 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_58_58;

#line 519 "cse_detection.m"
                {
#line 519 "cse_detection.m"
                  check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(check_hlds__cse_detection__Unify_39, check_hlds__cse_detection__FirstOldNew_40, check_hlds__cse_detection__LaterOldNew_41, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_49_49, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_9);
                }
#line 521 "cse_detection.m"
                {
#line 521 "cse_detection.m"
                  check_hlds__cse_detection__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 521 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 521 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 1) = ((MR_Box) (check_hlds__cse_detection__IfVars_2));
#line 521 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 2) = ((MR_Box) (check_hlds__cse_detection__Cond0_3));
#line 521 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 3) = ((MR_Box) (check_hlds__cse_detection__Then_43));
#line 521 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 4) = ((MR_Box) (check_hlds__cse_detection__Else_44));
#line 521 "cse_detection.m"
                }
#line 521 "cse_detection.m"
                {
#line 521 "cse_detection.m"
                  check_hlds__cse_detection__IfGoal_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 521 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__IfGoal_45, 0) = ((MR_Box) (check_hlds__cse_detection__V_55_55));
#line 521 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__IfGoal_45, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_6));
#line 521 "cse_detection.m"
                }
#line 522 "cse_detection.m"
                {
#line 522 "cse_detection.m"
                  check_hlds__cse_detection__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, 0) = ((MR_Box) (check_hlds__cse_detection__IfGoal_45));
#line 522 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 522 "cse_detection.m"
                }
#line 522 "cse_detection.m"
                {
#line 522 "cse_detection.m"
                  check_hlds__cse_detection__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_57_57, 0) = ((MR_Box) (check_hlds__cse_detection__Unify_39));
#line 522 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_57_57, 1) = ((MR_Box) (check_hlds__cse_detection__V_58_58));
#line 522 "cse_detection.m"
                }
#line 522 "cse_detection.m"
                {
#line 522 "cse_detection.m"
                  MR_Word base;
#line 522 "cse_detection.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 522 "cse_detection.m"
                  *check_hlds__cse_detection__HeadVar__11_11 = base;
#line 522 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 522 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 522 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__V_57_57));
#line 522 "cse_detection.m"
                }
#line 523 "cse_detection.m"
                *check_hlds__cse_detection__Redo_10 = (MR_Integer) 1;
#line 520 "cse_detection.m"
              }
#line 524 "cse_detection.m"
            else
#line 525 "cse_detection.m"
              {
#line 525 "cse_detection.m"
                /* direct tailcall eliminated */
#line 525 "cse_detection.m"
                {
#line 525 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__HeadVar__1__tmp_copy_1 = check_hlds__cse_detection__Vars_27;

#line 525 "cse_detection.m"
                  check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__HeadVar__1__tmp_copy_1;
#line 525 "cse_detection.m"
                }
#line 525 "cse_detection.m"
                continue;
#line 525 "cse_detection.m"
              }
#line 508 "cse_detection.m"
          }
#line 504 "cse_detection.m"
      }
#line 504 "cse_detection.m"
      break;
#line 504 "cse_detection.m"
    }
#line 498 "cse_detection.m"
}

#line 486 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_arms_6_p_0(
#line 486 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 486 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 486 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 486 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 486 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_5,
#line 486 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6)
#line 486 "cse_detection.m"
{
#line 489 "cse_detection.m"
  {
#line 489 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 489 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 489 "cse_detection.m"
      {
#line 489 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 489 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__6_6 = (MR_Integer) 0;
#line 489 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3;
#line 489 "cse_detection.m"
      }
#line 489 "cse_detection.m"
    else
#line 491 "cse_detection.m"
      {
#line 491 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Case0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 491 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 491 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Case_13;
#line 491 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Cases_14;
#line 491 "cse_detection.m"
        MR_Word check_hlds__cse_detection__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_11, (MR_Integer) 0)));
#line 491 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_11, (MR_Integer) 1)));
#line 491 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_11, (MR_Integer) 2)));
#line 491 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_21;
#line 491 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo1_22;
#line 491 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo2_23;
#line 491 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26_26;
#line 259 "cse_detection.m"
        MR_Word check_hlds__cse_detection___InstMap_35;

#line 259 "cse_detection.m"
        {
#line 259 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Goal0_20, &check_hlds__cse_detection__Goal_21, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26_26, check_hlds__cse_detection__InstMap0_5, &check_hlds__cse_detection___InstMap_35, &check_hlds__cse_detection__Redo1_22);
        }
#line 494 "cse_detection.m"
        {
#line 494 "cse_detection.m"
          check_hlds__cse_detection__Case_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 494 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_13, 0) = ((MR_Box) (check_hlds__cse_detection__MainConsId_18));
#line 494 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_13, 1) = ((MR_Box) (check_hlds__cse_detection__OtherConsIds_19));
#line 494 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_13, 2) = ((MR_Box) (check_hlds__cse_detection__Goal_21));
#line 494 "cse_detection.m"
        }
#line 495 "cse_detection.m"
        {
#line 495 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_cases_arms_6_p_0(check_hlds__cse_detection__Cases0_12, &check_hlds__cse_detection__Cases_14, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26_26, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4, check_hlds__cse_detection__InstMap0_5, &check_hlds__cse_detection__Redo2_23);
        }
#line 491 "cse_detection.m"
        {
#line 491 "cse_detection.m"
          MR_Word base;
#line 491 "cse_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 491 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__2_2 = base;
#line 491 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Case_13));
#line 491 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Cases_14));
#line 491 "cse_detection.m"
        }
#line 496 "cse_detection.m"
        {
#line 496 "cse_detection.m"
          mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_22, check_hlds__cse_detection__Redo2_23, check_hlds__cse_detection__HeadVar__6_6);
#line 496 "cse_detection.m"
          return;
        }
#line 491 "cse_detection.m"
      }
#line 489 "cse_detection.m"
  }
#line 486 "cse_detection.m"
}

#line 457 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_10_p_0(
#line 457 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 457 "cse_detection.m"
  MR_Word check_hlds__cse_detection__SwitchVar_2,
#line 457 "cse_detection.m"
  MR_Word check_hlds__cse_detection__CanFail_3,
#line 457 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cases0_4,
#line 457 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__5_5,
#line 457 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_6,
#line 457 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7,
#line 457 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_8,
#line 457 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_9,
#line 457 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__10_10)
#line 457 "cse_detection.m"
{
#line 462 "cse_detection.m"
  while (MR_TRUE)
#line 462 "cse_detection.m"
    {
#line 462 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 462 "cse_detection.m"
      {
#line 462 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;

#line 462 "cse_detection.m"
        if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 462 "cse_detection.m"
          {
#line 462 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Cases_18;

#line 463 "cse_detection.m"
            {
#line 463 "cse_detection.m"
              check_hlds__cse_detection__detect_cse_in_cases_arms_6_p_0(check_hlds__cse_detection__Cases0_4, &check_hlds__cse_detection__Cases_18, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_8, check_hlds__cse_detection__InstMap0_6, check_hlds__cse_detection__Redo_9);
            }
#line 462 "cse_detection.m"
            {
#line 462 "cse_detection.m"
              MR_Word base;
#line 462 "cse_detection.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 462 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__10_10 = base;
#line 462 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 462 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__SwitchVar_2));
#line 462 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__CanFail_3));
#line 462 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__cse_detection__Cases_18));
#line 462 "cse_detection.m"
            }
#line 462 "cse_detection.m"
          }
#line 462 "cse_detection.m"
        else
#line 465 "cse_detection.m"
          {
#line 465 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 465 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 481 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Unify_34;
#line 481 "cse_detection.m"
            MR_Word check_hlds__cse_detection__FirstOldNew_35;
#line 481 "cse_detection.m"
            MR_Word check_hlds__cse_detection__LaterOldNew_36;
#line 481 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Cases_37;
#line 481 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_40_40;
#line 467 "cse_detection.m"
            MR_Word check_hlds__cse_detection__VarInst0_32;
#line 467 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ModuleInfo_33;
#line 467 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_64_64;
#line 467 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_65_65;
#line 469 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_49_49;
#line 469 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_50_50;
#line 469 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_51_51;
#line 589 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_62_62;
#line 589 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_63_63;

#line 467 "cse_detection.m"
            {
#line 467 "cse_detection.m"
              check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[0], ((MR_Box) (check_hlds__cse_detection__Var_22)), ((MR_Box) (check_hlds__cse_detection__SwitchVar_2)));
            }
#line 467 "cse_detection.m"
            check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 467 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 467 "cse_detection.m"
              {
#line 468 "cse_detection.m"
                {
#line 468 "cse_detection.m"
                  hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__cse_detection__InstMap0_6, check_hlds__cse_detection__Var_22, &check_hlds__cse_detection__VarInst0_32);
                }
#line 469 "cse_detection.m"
                check_hlds__cse_detection__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 0)));
#line 469 "cse_detection.m"
                check_hlds__cse_detection__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 1)));
#line 469 "cse_detection.m"
                check_hlds__cse_detection__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 2)));
#line 469 "cse_detection.m"
                check_hlds__cse_detection__ModuleInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 3)));
#line 472 "cse_detection.m"
                {
#line 472 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_p_0(check_hlds__cse_detection__ModuleInfo_33, check_hlds__cse_detection__VarInst0_32);
                }
#line 467 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 467 "cse_detection.m"
                  {
#line 587 "cse_detection.m"
                    check_hlds__cse_detection__V_64_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 587 "cse_detection.m"
                    {
#line 587 "cse_detection.m"
                      check_hlds__cse_detection__succeeded = check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(check_hlds__cse_detection__Cases0_4, check_hlds__cse_detection__Var_22, check_hlds__cse_detection__V_64_64, &check_hlds__cse_detection__V_65_65, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_40_40, &check_hlds__cse_detection__Cases_37);
                    }
#line 467 "cse_detection.m"
                    if (check_hlds__cse_detection__succeeded)
#line 467 "cse_detection.m"
                      {
#line 587 "cse_detection.m"
                        check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_65_65)) == (MR_mktag((MR_Integer) 1)));
#line 587 "cse_detection.m"
                        if (check_hlds__cse_detection__succeeded)
#line 587 "cse_detection.m"
                          {
#line 587 "cse_detection.m"
                            check_hlds__cse_detection__Unify_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_65_65, (MR_Integer) 0)));
#line 587 "cse_detection.m"
                            check_hlds__cse_detection__FirstOldNew_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_65_65, (MR_Integer) 1)));
#line 587 "cse_detection.m"
                            check_hlds__cse_detection__LaterOldNew_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_65_65, (MR_Integer) 2)));
#line 589 "cse_detection.m"
                            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__LaterOldNew_36)) == (MR_mktag((MR_Integer) 1)));
#line 589 "cse_detection.m"
                            if (check_hlds__cse_detection__succeeded)
#line 589 "cse_detection.m"
                              {
#line 589 "cse_detection.m"
                                check_hlds__cse_detection__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_36, (MR_Integer) 0)));
#line 589 "cse_detection.m"
                                check_hlds__cse_detection__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_36, (MR_Integer) 1)));
#line 589 "cse_detection.m"
                              }
#line 587 "cse_detection.m"
                          }
#line 467 "cse_detection.m"
                      }
#line 467 "cse_detection.m"
                  }
#line 467 "cse_detection.m"
              }
#line 481 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 477 "cse_detection.m"
              {
#line 477 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_43_43;
#line 477 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_44_44;
#line 477 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_45_45;
#line 477 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_46_46;

#line 476 "cse_detection.m"
                {
#line 476 "cse_detection.m"
                  check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(check_hlds__cse_detection__Unify_34, check_hlds__cse_detection__FirstOldNew_35, check_hlds__cse_detection__LaterOldNew_36, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_40_40, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_8);
                }
#line 479 "cse_detection.m"
                {
#line 479 "cse_detection.m"
                  check_hlds__cse_detection__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 479 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 479 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_46_46, 1) = ((MR_Box) (check_hlds__cse_detection__SwitchVar_2));
#line 479 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_46_46, 2) = ((MR_Box) (check_hlds__cse_detection__CanFail_3));
#line 479 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_46_46, 3) = ((MR_Box) (check_hlds__cse_detection__Cases_37));
#line 479 "cse_detection.m"
                }
#line 479 "cse_detection.m"
                {
#line 479 "cse_detection.m"
                  check_hlds__cse_detection__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 479 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_45_45, 0) = ((MR_Box) (check_hlds__cse_detection__V_46_46));
#line 479 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_45_45, 1) = ((MR_Box) (check_hlds__cse_detection__HeadVar__5_5));
#line 479 "cse_detection.m"
                }
#line 479 "cse_detection.m"
                {
#line 479 "cse_detection.m"
                  check_hlds__cse_detection__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_44_44, 0) = ((MR_Box) (check_hlds__cse_detection__V_45_45));
#line 479 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 479 "cse_detection.m"
                }
#line 478 "cse_detection.m"
                {
#line 478 "cse_detection.m"
                  check_hlds__cse_detection__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_43_43, 0) = ((MR_Box) (check_hlds__cse_detection__Unify_34));
#line 478 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_43_43, 1) = ((MR_Box) (check_hlds__cse_detection__V_44_44));
#line 478 "cse_detection.m"
                }
#line 478 "cse_detection.m"
                {
#line 478 "cse_detection.m"
                  MR_Word base;
#line 478 "cse_detection.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 478 "cse_detection.m"
                  *check_hlds__cse_detection__HeadVar__10_10 = base;
#line 478 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 478 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 478 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__V_43_43));
#line 478 "cse_detection.m"
                }
#line 480 "cse_detection.m"
                *check_hlds__cse_detection__Redo_9 = (MR_Integer) 1;
#line 477 "cse_detection.m"
              }
#line 481 "cse_detection.m"
            else
#line 482 "cse_detection.m"
              {
#line 482 "cse_detection.m"
                /* direct tailcall eliminated */
#line 482 "cse_detection.m"
                {
#line 482 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__HeadVar__1__tmp_copy_1 = check_hlds__cse_detection__Vars_23;

#line 482 "cse_detection.m"
                  check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__HeadVar__1__tmp_copy_1;
#line 482 "cse_detection.m"
                }
#line 482 "cse_detection.m"
                continue;
#line 482 "cse_detection.m"
              }
#line 465 "cse_detection.m"
          }
#line 462 "cse_detection.m"
      }
#line 462 "cse_detection.m"
      break;
#line 462 "cse_detection.m"
    }
#line 457 "cse_detection.m"
}

#line 446 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(
#line 446 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 446 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 446 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 446 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 446 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_5,
#line 446 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6)
#line 446 "cse_detection.m"
{
#line 450 "cse_detection.m"
  {
#line 450 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 450 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 450 "cse_detection.m"
      {
#line 450 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 450 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__6_6 = (MR_Integer) 0;
#line 450 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3;
#line 450 "cse_detection.m"
      }
#line 450 "cse_detection.m"
    else
#line 452 "cse_detection.m"
      {
#line 452 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 452 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 452 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_13;
#line 452 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goals_14;
#line 452 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo1_18;
#line 452 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo2_19;
#line 452 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_22_22;
#line 259 "cse_detection.m"
        MR_Word check_hlds__cse_detection___InstMap_31;

#line 259 "cse_detection.m"
        {
#line 259 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Goal0_11, &check_hlds__cse_detection__Goal_13, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_22_22, check_hlds__cse_detection__InstMap0_5, &check_hlds__cse_detection___InstMap_31, &check_hlds__cse_detection__Redo1_18);
        }
#line 454 "cse_detection.m"
        {
#line 454 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(check_hlds__cse_detection__Goals0_12, &check_hlds__cse_detection__Goals_14, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_22_22, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4, check_hlds__cse_detection__InstMap0_5, &check_hlds__cse_detection__Redo2_19);
        }
#line 452 "cse_detection.m"
        {
#line 452 "cse_detection.m"
          MR_Word base;
#line 452 "cse_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 452 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__2_2 = base;
#line 452 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal_13));
#line 452 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_14));
#line 452 "cse_detection.m"
        }
#line 455 "cse_detection.m"
        {
#line 455 "cse_detection.m"
          mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_18, check_hlds__cse_detection__Redo2_19, check_hlds__cse_detection__HeadVar__6_6);
#line 455 "cse_detection.m"
          return;
        }
#line 452 "cse_detection.m"
      }
#line 450 "cse_detection.m"
  }
#line 446 "cse_detection.m"
}

#line 419 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_disj_8_p_0(
#line 419 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 419 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goals0_2,
#line 419 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo0_3,
#line 419 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__4_4,
#line 419 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 419 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 419 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_7,
#line 419 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__8_8)
#line 419 "cse_detection.m"
{
#line 423 "cse_detection.m"
  while (MR_TRUE)
#line 423 "cse_detection.m"
    {
#line 423 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 423 "cse_detection.m"
      {
#line 423 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;

#line 423 "cse_detection.m"
        if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 423 "cse_detection.m"
          {
#line 423 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals_14;

#line 424 "cse_detection.m"
            {
#line 424 "cse_detection.m"
              check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(check_hlds__cse_detection__Goals0_2, &check_hlds__cse_detection__Goals_14, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6, check_hlds__cse_detection__HeadVar__4_4, check_hlds__cse_detection__Redo_7);
            }
#line 423 "cse_detection.m"
            {
#line 423 "cse_detection.m"
              MR_Word base;
#line 423 "cse_detection.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__8_8 = base;
#line 423 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 423 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_14));
#line 423 "cse_detection.m"
            }
#line 423 "cse_detection.m"
          }
#line 423 "cse_detection.m"
        else
#line 426 "cse_detection.m"
          {
#line 426 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 426 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 441 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Unify_28;
#line 441 "cse_detection.m"
            MR_Word check_hlds__cse_detection__FirstOldNew_29;
#line 441 "cse_detection.m"
            MR_Word check_hlds__cse_detection__LaterOldNew_30;
#line 441 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals_31;
#line 441 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_34_34;
#line 428 "cse_detection.m"
            MR_Word check_hlds__cse_detection__VarInst0_26;
#line 428 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ModuleInfo_27;
#line 428 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_57_57;
#line 428 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_58_58;
#line 429 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_43_43;
#line 429 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_44_44;
#line 429 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_45_45;
#line 565 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_55_55;
#line 565 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_56_56;

#line 428 "cse_detection.m"
            {
#line 428 "cse_detection.m"
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__cse_detection__HeadVar__4_4, check_hlds__cse_detection__Var_18, &check_hlds__cse_detection__VarInst0_26);
            }
#line 429 "cse_detection.m"
            check_hlds__cse_detection__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 0)));
#line 429 "cse_detection.m"
            check_hlds__cse_detection__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 1)));
#line 429 "cse_detection.m"
            check_hlds__cse_detection__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 2)));
#line 429 "cse_detection.m"
            check_hlds__cse_detection__ModuleInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 3)));
#line 432 "cse_detection.m"
            {
#line 432 "cse_detection.m"
              check_hlds__cse_detection__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_p_0(check_hlds__cse_detection__ModuleInfo_27, check_hlds__cse_detection__VarInst0_26);
            }
#line 428 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 428 "cse_detection.m"
              {
#line 563 "cse_detection.m"
                check_hlds__cse_detection__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 563 "cse_detection.m"
                {
#line 563 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = check_hlds__cse_detection__common_deconstruct_2_7_p_0(check_hlds__cse_detection__Goals0_2, check_hlds__cse_detection__Var_18, check_hlds__cse_detection__V_57_57, &check_hlds__cse_detection__V_58_58, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_34_34, &check_hlds__cse_detection__Goals_31);
                }
#line 428 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 428 "cse_detection.m"
                  {
#line 563 "cse_detection.m"
                    check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 563 "cse_detection.m"
                    if (check_hlds__cse_detection__succeeded)
#line 563 "cse_detection.m"
                      {
#line 563 "cse_detection.m"
                        check_hlds__cse_detection__Unify_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, (MR_Integer) 0)));
#line 563 "cse_detection.m"
                        check_hlds__cse_detection__FirstOldNew_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, (MR_Integer) 1)));
#line 563 "cse_detection.m"
                        check_hlds__cse_detection__LaterOldNew_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, (MR_Integer) 2)));
#line 565 "cse_detection.m"
                        check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__LaterOldNew_30)) == (MR_mktag((MR_Integer) 1)));
#line 565 "cse_detection.m"
                        if (check_hlds__cse_detection__succeeded)
#line 565 "cse_detection.m"
                          {
#line 565 "cse_detection.m"
                            check_hlds__cse_detection__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_30, (MR_Integer) 0)));
#line 565 "cse_detection.m"
                            check_hlds__cse_detection__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_30, (MR_Integer) 1)));
#line 565 "cse_detection.m"
                          }
#line 563 "cse_detection.m"
                      }
#line 428 "cse_detection.m"
                  }
#line 428 "cse_detection.m"
              }
#line 441 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 437 "cse_detection.m"
              {
#line 437 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_37_37;
#line 437 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_38_38;
#line 437 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_39_39;
#line 437 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_40_40;

#line 436 "cse_detection.m"
                {
#line 436 "cse_detection.m"
                  check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(check_hlds__cse_detection__Unify_28, check_hlds__cse_detection__FirstOldNew_29, check_hlds__cse_detection__LaterOldNew_30, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_34_34, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6);
                }
#line 439 "cse_detection.m"
                {
#line 439 "cse_detection.m"
                  check_hlds__cse_detection__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 439 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_40_40, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_31));
#line 439 "cse_detection.m"
                }
#line 439 "cse_detection.m"
                {
#line 439 "cse_detection.m"
                  check_hlds__cse_detection__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 439 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_39_39, 0) = ((MR_Box) (check_hlds__cse_detection__V_40_40));
#line 439 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_39_39, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo0_3));
#line 439 "cse_detection.m"
                }
#line 439 "cse_detection.m"
                {
#line 439 "cse_detection.m"
                  check_hlds__cse_detection__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, 0) = ((MR_Box) (check_hlds__cse_detection__V_39_39));
#line 439 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "cse_detection.m"
                }
#line 438 "cse_detection.m"
                {
#line 438 "cse_detection.m"
                  check_hlds__cse_detection__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, 0) = ((MR_Box) (check_hlds__cse_detection__Unify_28));
#line 438 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, 1) = ((MR_Box) (check_hlds__cse_detection__V_38_38));
#line 438 "cse_detection.m"
                }
#line 438 "cse_detection.m"
                {
#line 438 "cse_detection.m"
                  MR_Word base;
#line 438 "cse_detection.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 438 "cse_detection.m"
                  *check_hlds__cse_detection__HeadVar__8_8 = base;
#line 438 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 438 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 438 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__V_37_37));
#line 438 "cse_detection.m"
                }
#line 440 "cse_detection.m"
                *check_hlds__cse_detection__Redo_7 = (MR_Integer) 1;
#line 437 "cse_detection.m"
              }
#line 441 "cse_detection.m"
            else
#line 442 "cse_detection.m"
              {
#line 442 "cse_detection.m"
                /* direct tailcall eliminated */
#line 442 "cse_detection.m"
                {
#line 442 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__HeadVar__1__tmp_copy_1 = check_hlds__cse_detection__Vars_19;

#line 442 "cse_detection.m"
                  check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__HeadVar__1__tmp_copy_1;
#line 442 "cse_detection.m"
                }
#line 442 "cse_detection.m"
                continue;
#line 442 "cse_detection.m"
              }
#line 426 "cse_detection.m"
          }
#line 423 "cse_detection.m"
      }
#line 423 "cse_detection.m"
      break;
#line 423 "cse_detection.m"
    }
#line 419 "cse_detection.m"
}

#line 392 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_conj_7_p_0(
#line 392 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 392 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 392 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 392 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 392 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__5_5,
#line 392 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__6_6,
#line 392 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7)
#line 392 "cse_detection.m"
{
#line 395 "cse_detection.m"
  {
#line 395 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 395 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "cse_detection.m"
      {
#line 395 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 395 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__7_7 = (MR_Integer) 0;
#line 395 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3;
#line 395 "cse_detection.m"
      }
#line 395 "cse_detection.m"
    else
#line 397 "cse_detection.m"
      {
#line 397 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 397 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 397 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_20;
#line 397 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo1_21;
#line 397 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TailGoals_22;
#line 397 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo2_23;
#line 397 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_30_30;
#line 397 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_InstMap_31_31;
#line 397 "cse_detection.m"
        MR_Word check_hlds__cse_detection__GoalExpr0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_13, (MR_Integer) 0)));
#line 397 "cse_detection.m"
        MR_Word check_hlds__cse_detection__GoalInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_13, (MR_Integer) 1)));
#line 397 "cse_detection.m"
        MR_Word check_hlds__cse_detection__GoalExpr_45;
#line 397 "cse_detection.m"
        MR_Word check_hlds__cse_detection__InstMapDelta_46;
#line 407 "cse_detection.m"
        MR_Word check_hlds__cse_detection__ConjGoals_25;
#line 403 "cse_detection.m"
        MR_Word check_hlds__cse_detection__InnerConjType_24;
#line 403 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_33_33;
#line 403 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_26_26;

#line 272 "cse_detection.m"
        {
#line 272 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(check_hlds__cse_detection__GoalExpr0_43, &check_hlds__cse_detection__GoalExpr_45, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_30_30, check_hlds__cse_detection__GoalInfo_44, check_hlds__cse_detection__HeadVar__6_6, &check_hlds__cse_detection__Redo1_21);
        }
#line 274 "cse_detection.m"
        {
#line 274 "cse_detection.m"
          check_hlds__cse_detection__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 274 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal_20, 0) = ((MR_Box) (check_hlds__cse_detection__GoalExpr_45));
#line 274 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal_20, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_44));
#line 274 "cse_detection.m"
        }
#line 275 "cse_detection.m"
        {
#line 275 "cse_detection.m"
          check_hlds__cse_detection__InstMapDelta_46 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__cse_detection__GoalInfo_44);
        }
#line 276 "cse_detection.m"
        {
#line 276 "cse_detection.m"
          hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__cse_detection__HeadVar__6_6, check_hlds__cse_detection__InstMapDelta_46, &check_hlds__cse_detection__STATE_VARIABLE_InstMap_31_31);
        }
#line 399 "cse_detection.m"
        {
#line 399 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_conj_7_p_0(check_hlds__cse_detection__Goals0_14, &check_hlds__cse_detection__TailGoals_22, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_30_30, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4, check_hlds__cse_detection__HeadVar__5_5, check_hlds__cse_detection__STATE_VARIABLE_InstMap_31_31, &check_hlds__cse_detection__Redo2_23);
        }
#line 403 "cse_detection.m"
        check_hlds__cse_detection__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal_20, (MR_Integer) 0)));
#line 403 "cse_detection.m"
        check_hlds__cse_detection__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal_20, (MR_Integer) 1)));
#line 403 "cse_detection.m"
        check_hlds__cse_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__cse_detection__V_33_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_33_33, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 403 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 403 "cse_detection.m"
          {
#line 403 "cse_detection.m"
            check_hlds__cse_detection__InnerConjType_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_33_33, (MR_Integer) 1)));
#line 403 "cse_detection.m"
            check_hlds__cse_detection__ConjGoals_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_33_33, (MR_Integer) 2)));
#line 404 "cse_detection.m"
            check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__HeadVar__5_5 == check_hlds__cse_detection__InnerConjType_24);
#line 403 "cse_detection.m"
          }
#line 407 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 406 "cse_detection.m"
          {
#line 406 "cse_detection.m"
            {
#line 406 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__cse_detection__ConjGoals_25, check_hlds__cse_detection__TailGoals_22);
            }
#line 406 "cse_detection.m"
          }
#line 407 "cse_detection.m"
        else
#line 408 "cse_detection.m"
          {
#line 408 "cse_detection.m"
            MR_Word base;
#line 408 "cse_detection.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "cse_detection.m"
            *check_hlds__cse_detection__HeadVar__2_2 = base;
#line 408 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal_20));
#line 408 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__TailGoals_22));
#line 408 "cse_detection.m"
          }
#line 410 "cse_detection.m"
        {
#line 410 "cse_detection.m"
          mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_21, check_hlds__cse_detection__Redo2_23, check_hlds__cse_detection__HeadVar__7_7);
#line 410 "cse_detection.m"
          return;
        }
#line 397 "cse_detection.m"
      }
#line 395 "cse_detection.m"
  }
#line 392 "cse_detection.m"
}

#line 280 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(
#line 280 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalExpr0_8,
#line 280 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__GoalExpr_9,
#line 280 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90,
#line 280 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91,
#line 280 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo_11,
#line 280 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_12,
#line 280 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_13)
#line 280 "cse_detection.m"
{
#line 290 "cse_detection.m"
  {
#line 290 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 290 "cse_detection.m"
    if (((MR_tag((MR_Word) check_hlds__cse_detection__GoalExpr0_8)) == (MR_mktag((MR_Integer) 0))))
#line 314 "cse_detection.m"
      {
#line 314 "cse_detection.m"
        MR_Word check_hlds__cse_detection__SubGoal0_54 = (MR_Word) MR_body(((MR_Word) check_hlds__cse_detection__GoalExpr0_8), (MR_Integer) 0);
#line 314 "cse_detection.m"
        MR_Word check_hlds__cse_detection__SubGoal_55;

#line 315 "cse_detection.m"
        {
#line 315 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__SubGoal0_54, &check_hlds__cse_detection__SubGoal_55, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__Redo_13);
        }
#line 316 "cse_detection.m"
        *check_hlds__cse_detection__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__cse_detection__SubGoal_55);
#line 314 "cse_detection.m"
      }
#line 290 "cse_detection.m"
    else
#line 290 "cse_detection.m"
      if (((MR_tag((MR_Word) check_hlds__cse_detection__GoalExpr0_8)) == (MR_mktag((MR_Integer) 1))))
#line 294 "cse_detection.m"
        {
#line 294 "cse_detection.m"
          MR_Word check_hlds__cse_detection__LHS_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 0)));
#line 294 "cse_detection.m"
          MR_Word check_hlds__cse_detection__RHS0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 294 "cse_detection.m"
          MR_Word check_hlds__cse_detection__Mode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
#line 294 "cse_detection.m"
          MR_Word check_hlds__cse_detection__Unify_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 3)));
#line 294 "cse_detection.m"
          MR_Word check_hlds__cse_detection__UnifyContext_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 4)));
#line 294 "cse_detection.m"
          MR_Word check_hlds__cse_detection__RHS_49;

#line 305 "cse_detection.m"
          if (((MR_tag((MR_Word) check_hlds__cse_detection__RHS0_33)) == (MR_mktag((MR_Integer) 2))))
#line 297 "cse_detection.m"
            {
#line 297 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Purity_37 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 297 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Groundness_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 297 "cse_detection.m"
              MR_Word check_hlds__cse_detection__PredOrFunc_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 297 "cse_detection.m"
              MR_Word check_hlds__cse_detection__NonLocalVars_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 2)));
#line 297 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Vars_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 3)));
#line 297 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Modes_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 4)));
#line 297 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Det_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 5)));
#line 297 "cse_detection.m"
              MR_Word check_hlds__cse_detection__LambdaGoal0_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 6)));
#line 297 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ModuleInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, (MR_Integer) 3)));
#line 297 "cse_detection.m"
              MR_Word check_hlds__cse_detection__InstMap1_47;
#line 297 "cse_detection.m"
              MR_Word check_hlds__cse_detection__LambdaGoal_48;
#line 298 "cse_detection.m"
              MR_Word check_hlds__cse_detection__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, (MR_Integer) 0)));
#line 298 "cse_detection.m"
              MR_Word check_hlds__cse_detection__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, (MR_Integer) 1)));
#line 298 "cse_detection.m"
              MR_Word check_hlds__cse_detection__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, (MR_Integer) 2)));

#line 299 "cse_detection.m"
              {
#line 299 "cse_detection.m"
                hlds__instmap__pre_lambda_update_5_p_0(check_hlds__cse_detection__ModuleInfo_46, check_hlds__cse_detection__Vars_42, check_hlds__cse_detection__Modes_43, check_hlds__cse_detection__InstMap0_12, &check_hlds__cse_detection__InstMap1_47);
              }
#line 301 "cse_detection.m"
              {
#line 301 "cse_detection.m"
                check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__LambdaGoal0_45, &check_hlds__cse_detection__LambdaGoal_48, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__InstMap1_47, check_hlds__cse_detection__Redo_13);
              }
#line 303 "cse_detection.m"
              {
#line 303 "cse_detection.m"
                check_hlds__cse_detection__RHS_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 303 "cse_detection.m"
                MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 0) = ((MR_Box) ((check_hlds__cse_detection__Purity_37 | ((((check_hlds__cse_detection__Groundness_38 << (MR_Integer) 2)) | ((check_hlds__cse_detection__PredOrFunc_39 << (MR_Integer) 3)))))));
#line 303 "cse_detection.m"
                MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 1) = (MR_Integer) 0;
#line 303 "cse_detection.m"
                MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 2) = ((MR_Box) (check_hlds__cse_detection__NonLocalVars_41));
#line 303 "cse_detection.m"
                MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 3) = ((MR_Box) (check_hlds__cse_detection__Vars_42));
#line 303 "cse_detection.m"
                MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 4) = ((MR_Box) (check_hlds__cse_detection__Modes_43));
#line 303 "cse_detection.m"
                MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 5) = ((MR_Box) (check_hlds__cse_detection__Det_44));
#line 303 "cse_detection.m"
                MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 6) = ((MR_Box) (check_hlds__cse_detection__LambdaGoal_48));
#line 303 "cse_detection.m"
              }
#line 297 "cse_detection.m"
            }
#line 305 "cse_detection.m"
          else
#line 308 "cse_detection.m"
            {
#line 309 "cse_detection.m"
              check_hlds__cse_detection__RHS_49 = check_hlds__cse_detection__RHS0_33;
#line 310 "cse_detection.m"
              *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
#line 310 "cse_detection.m"
              *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90;
#line 308 "cse_detection.m"
            }
#line 312 "cse_detection.m"
          {
#line 312 "cse_detection.m"
            MR_Word base;
#line 312 "cse_detection.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 312 "cse_detection.m"
            *check_hlds__cse_detection__GoalExpr_9 = base;
#line 312 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__LHS_32));
#line 312 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__RHS_49));
#line 312 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__cse_detection__Mode_34));
#line 312 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__cse_detection__Unify_35));
#line 312 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__cse_detection__UnifyContext_36));
#line 312 "cse_detection.m"
          }
#line 294 "cse_detection.m"
        }
#line 290 "cse_detection.m"
      else
#line 290 "cse_detection.m"
        if (((((MR_tag((MR_Word) check_hlds__cse_detection__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 337 "cse_detection.m"
          {
#line 337 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ConjType_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 337 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
#line 337 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals_62;

#line 338 "cse_detection.m"
            {
#line 338 "cse_detection.m"
              check_hlds__cse_detection__detect_cse_in_conj_7_p_0(check_hlds__cse_detection__Goals0_61, &check_hlds__cse_detection__Goals_62, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__ConjType_60, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__Redo_13);
            }
#line 339 "cse_detection.m"
            {
#line 339 "cse_detection.m"
              MR_Word base;
#line 339 "cse_detection.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 339 "cse_detection.m"
              *check_hlds__cse_detection__GoalExpr_9 = base;
#line 339 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 339 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__ConjType_60));
#line 339 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__Goals_62));
#line 339 "cse_detection.m"
            }
#line 337 "cse_detection.m"
          }
#line 290 "cse_detection.m"
        else
#line 290 "cse_detection.m"
          if (((((MR_tag((MR_Word) check_hlds__cse_detection__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 341 "cse_detection.m"
            {
#line 341 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Goals0_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));

#line 346 "cse_detection.m"
              if ((check_hlds__cse_detection__Goals0_112 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 343 "cse_detection.m"
                {
#line 344 "cse_detection.m"
                  *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
#line 345 "cse_detection.m"
                  *check_hlds__cse_detection__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__cse_detection_scalar_common_1[5]);
#line 345 "cse_detection.m"
                  *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90;
#line 343 "cse_detection.m"
                }
#line 346 "cse_detection.m"
              else
#line 347 "cse_detection.m"
                {
#line 347 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__NonLocals_65;
#line 347 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__NonLocalsList_66;

#line 348 "cse_detection.m"
                  {
#line 348 "cse_detection.m"
                    check_hlds__cse_detection__NonLocals_65 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__cse_detection__GoalInfo_11);
                  }
#line 349 "cse_detection.m"
                  {
#line 349 "cse_detection.m"
                    check_hlds__cse_detection__NonLocalsList_66 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__cse_detection__NonLocals_65);
                  }
#line 350 "cse_detection.m"
                  {
#line 350 "cse_detection.m"
                    check_hlds__cse_detection__detect_cse_in_disj_8_p_0(check_hlds__cse_detection__NonLocalsList_66, check_hlds__cse_detection__Goals0_112, check_hlds__cse_detection__GoalInfo_11, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__Redo_13, check_hlds__cse_detection__GoalExpr_9);
#line 350 "cse_detection.m"
                    return;
                  }
#line 347 "cse_detection.m"
                }
#line 341 "cse_detection.m"
            }
#line 290 "cse_detection.m"
          else
#line 290 "cse_detection.m"
            if (((((MR_tag((MR_Word) check_hlds__cse_detection__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 360 "cse_detection.m"
              {
#line 360 "cse_detection.m"
                MR_Word check_hlds__cse_detection__Cond0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
#line 360 "cse_detection.m"
                MR_Word check_hlds__cse_detection__Then0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 3)));
#line 360 "cse_detection.m"
                MR_Word check_hlds__cse_detection__Else0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 4)));
#line 360 "cse_detection.m"
                MR_Word check_hlds__cse_detection__Vars_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 360 "cse_detection.m"
                MR_Word check_hlds__cse_detection__NonLocals_116;
#line 360 "cse_detection.m"
                MR_Word check_hlds__cse_detection__NonLocalsList_117;

#line 361 "cse_detection.m"
                {
#line 361 "cse_detection.m"
                  check_hlds__cse_detection__NonLocals_116 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__cse_detection__GoalInfo_11);
                }
#line 362 "cse_detection.m"
                {
#line 362 "cse_detection.m"
                  check_hlds__cse_detection__NonLocalsList_117 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__cse_detection__NonLocals_116);
                }
#line 363 "cse_detection.m"
                {
#line 363 "cse_detection.m"
                  check_hlds__cse_detection__detect_cse_in_ite_11_p_0(check_hlds__cse_detection__NonLocalsList_117, check_hlds__cse_detection__Vars_115, check_hlds__cse_detection__Cond0_70, check_hlds__cse_detection__Then0_71, check_hlds__cse_detection__Else0_72, check_hlds__cse_detection__GoalInfo_11, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__Redo_13, check_hlds__cse_detection__GoalExpr_9);
#line 363 "cse_detection.m"
                  return;
                }
#line 360 "cse_detection.m"
              }
#line 290 "cse_detection.m"
            else
#line 290 "cse_detection.m"
              if (((((MR_tag((MR_Word) check_hlds__cse_detection__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 318 "cse_detection.m"
                {
#line 318 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__Reason0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 318 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__SubGoal0_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
#line 319 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_103_103;
#line 319 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_57_57;

#line 319 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__cse_detection__Reason0_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 319 "cse_detection.m"
                  if (check_hlds__cse_detection__succeeded)
#line 319 "cse_detection.m"
                    {
#line 319 "cse_detection.m"
                      check_hlds__cse_detection__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 1)));
#line 319 "cse_detection.m"
                      check_hlds__cse_detection__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 2)));
#line 319 "cse_detection.m"
                      check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_103_103 == (MR_Integer) 1);
#line 319 "cse_detection.m"
                    }
#line 323 "cse_detection.m"
                  if (check_hlds__cse_detection__succeeded)
#line 321 "cse_detection.m"
                    {
#line 321 "cse_detection.m"
                      *check_hlds__cse_detection__GoalExpr_9 = check_hlds__cse_detection__GoalExpr0_8;
#line 322 "cse_detection.m"
                      *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
#line 322 "cse_detection.m"
                      *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90;
#line 321 "cse_detection.m"
                    }
#line 323 "cse_detection.m"
                  else
#line 324 "cse_detection.m"
                    {
#line 324 "cse_detection.m"
                      MR_Word check_hlds__cse_detection__SubGoal_108;
#line 326 "cse_detection.m"
                      MR_Word check_hlds__cse_detection__V_105_105;
#line 327 "cse_detection.m"
                      MR_Word check_hlds__cse_detection__V_58_58;

#line 324 "cse_detection.m"
                      {
#line 324 "cse_detection.m"
                        check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__SubGoal0_110, &check_hlds__cse_detection__SubGoal_108, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__Redo_13);
                      }
#line 326 "cse_detection.m"
                      check_hlds__cse_detection__succeeded = (*check_hlds__cse_detection__Redo_13 == (MR_Integer) 1);
#line 326 "cse_detection.m"
                      if (check_hlds__cse_detection__succeeded)
#line 326 "cse_detection.m"
                        {
#line 327 "cse_detection.m"
                          check_hlds__cse_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__cse_detection__Reason0_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 327 "cse_detection.m"
                          if (check_hlds__cse_detection__succeeded)
#line 327 "cse_detection.m"
                            {
#line 327 "cse_detection.m"
                              check_hlds__cse_detection__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 1)));
#line 327 "cse_detection.m"
                              check_hlds__cse_detection__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 2)));
#line 327 "cse_detection.m"
                              check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_105_105 == (MR_Integer) 2);
#line 327 "cse_detection.m"
                            }
#line 326 "cse_detection.m"
                        }
#line 332 "cse_detection.m"
                      if (check_hlds__cse_detection__succeeded)
#line 331 "cse_detection.m"
                        {
#line 331 "cse_detection.m"
                          MR_Word check_hlds__cse_detection__V_59_59;

#line 331 "cse_detection.m"
                          *check_hlds__cse_detection__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__SubGoal_108, (MR_Integer) 0)));
#line 331 "cse_detection.m"
                          check_hlds__cse_detection__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__SubGoal_108, (MR_Integer) 1)));
#line 331 "cse_detection.m"
                        }
#line 332 "cse_detection.m"
                      else
#line 333 "cse_detection.m"
                        {
#line 333 "cse_detection.m"
                          MR_Word base;
#line 333 "cse_detection.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 333 "cse_detection.m"
                          *check_hlds__cse_detection__GoalExpr_9 = base;
#line 333 "cse_detection.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 333 "cse_detection.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__Reason0_56));
#line 333 "cse_detection.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__SubGoal_108));
#line 333 "cse_detection.m"
                        }
#line 324 "cse_detection.m"
                    }
#line 318 "cse_detection.m"
                }
#line 290 "cse_detection.m"
              else
#line 290 "cse_detection.m"
                if (((((MR_tag((MR_Word) check_hlds__cse_detection__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 366 "cse_detection.m"
                  {
#line 366 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__ShortHand0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 366 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__ShortHand_85;

#line 376 "cse_detection.m"
                    if (((MR_tag((MR_Word) check_hlds__cse_detection__ShortHand0_73)) == (MR_mktag((MR_Integer) 1))))
#line 369 "cse_detection.m"
                      {
#line 369 "cse_detection.m"
                        MR_Word check_hlds__cse_detection__AtomicGoalType_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 0)));
#line 369 "cse_detection.m"
                        MR_Word check_hlds__cse_detection__Outer_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 1)));
#line 369 "cse_detection.m"
                        MR_Word check_hlds__cse_detection__Inner_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 2)));
#line 369 "cse_detection.m"
                        MR_Word check_hlds__cse_detection__MaybeOutputVars_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 3)));
#line 369 "cse_detection.m"
                        MR_Word check_hlds__cse_detection__MainGoal0_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 4)));
#line 369 "cse_detection.m"
                        MR_Word check_hlds__cse_detection__OrElseGoals0_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 5)));
#line 369 "cse_detection.m"
                        MR_Word check_hlds__cse_detection__OrElseInners_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 6)));
#line 369 "cse_detection.m"
                        MR_Word check_hlds__cse_detection__MainGoal_81;
#line 369 "cse_detection.m"
                        MR_Word check_hlds__cse_detection__Redo1_82;
#line 369 "cse_detection.m"
                        MR_Word check_hlds__cse_detection__OrElseGoals_83;
#line 369 "cse_detection.m"
                        MR_Word check_hlds__cse_detection__Redo2_84;
#line 369 "cse_detection.m"
                        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_96_96;

#line 370 "cse_detection.m"
                        {
#line 370 "cse_detection.m"
                          check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__MainGoal0_78, &check_hlds__cse_detection__MainGoal_81, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_96_96, check_hlds__cse_detection__InstMap0_12, &check_hlds__cse_detection__Redo1_82);
                        }
#line 371 "cse_detection.m"
                        {
#line 371 "cse_detection.m"
                          check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(check_hlds__cse_detection__OrElseGoals0_79, &check_hlds__cse_detection__OrElseGoals_83, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_96_96, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__InstMap0_12, &check_hlds__cse_detection__Redo2_84);
                        }
#line 373 "cse_detection.m"
                        {
#line 373 "cse_detection.m"
                          check_hlds__cse_detection__ShortHand_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 373 "cse_detection.m"
                          MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 0) = ((MR_Box) (check_hlds__cse_detection__AtomicGoalType_74));
#line 373 "cse_detection.m"
                          MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 1) = ((MR_Box) (check_hlds__cse_detection__Outer_75));
#line 373 "cse_detection.m"
                          MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 2) = ((MR_Box) (check_hlds__cse_detection__Inner_76));
#line 373 "cse_detection.m"
                          MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 3) = ((MR_Box) (check_hlds__cse_detection__MaybeOutputVars_77));
#line 373 "cse_detection.m"
                          MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 4) = ((MR_Box) (check_hlds__cse_detection__MainGoal_81));
#line 373 "cse_detection.m"
                          MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 5) = ((MR_Box) (check_hlds__cse_detection__OrElseGoals_83));
#line 373 "cse_detection.m"
                          MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 6) = ((MR_Box) (check_hlds__cse_detection__OrElseInners_80));
#line 373 "cse_detection.m"
                        }
#line 375 "cse_detection.m"
                        {
#line 375 "cse_detection.m"
                          mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_82, check_hlds__cse_detection__Redo2_84, check_hlds__cse_detection__Redo_13);
                        }
#line 369 "cse_detection.m"
                      }
#line 376 "cse_detection.m"
                    else
#line 376 "cse_detection.m"
                      if (((MR_tag((MR_Word) check_hlds__cse_detection__ShortHand0_73)) == (MR_mktag((MR_Integer) 0))))
#line 377 "cse_detection.m"
                        {
#line 379 "cse_detection.m"
                          {
#line 379 "cse_detection.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_goal_expr\'/7", (MR_String) "bi_implication");
#line 379 "cse_detection.m"
                            return;
                          }
#line 377 "cse_detection.m"
                        }
#line 376 "cse_detection.m"
                      else
#line 381 "cse_detection.m"
                        {
#line 381 "cse_detection.m"
                          MR_Word check_hlds__cse_detection__MaybeIO_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 0)));
#line 381 "cse_detection.m"
                          MR_Word check_hlds__cse_detection__ResultVar_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 1)));
#line 381 "cse_detection.m"
                          MR_Word check_hlds__cse_detection__SubGoal0_118 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 2)));
#line 381 "cse_detection.m"
                          MR_Word check_hlds__cse_detection__SubGoal_119;

#line 384 "cse_detection.m"
                          {
#line 384 "cse_detection.m"
                            check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__SubGoal0_118, &check_hlds__cse_detection__SubGoal_119, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__Redo_13);
                          }
#line 385 "cse_detection.m"
                          {
#line 385 "cse_detection.m"
                            check_hlds__cse_detection__ShortHand_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 385 "cse_detection.m"
                            MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand_85, 0) = ((MR_Box) (check_hlds__cse_detection__MaybeIO_88));
#line 385 "cse_detection.m"
                            MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand_85, 1) = ((MR_Box) (check_hlds__cse_detection__ResultVar_89));
#line 385 "cse_detection.m"
                            MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand_85, 2) = ((MR_Box) (check_hlds__cse_detection__SubGoal_119));
#line 385 "cse_detection.m"
                          }
#line 381 "cse_detection.m"
                        }
#line 387 "cse_detection.m"
                    {
#line 387 "cse_detection.m"
                      MR_Word base;
#line 387 "cse_detection.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "cse_detection.m"
                      *check_hlds__cse_detection__GoalExpr_9 = base;
#line 387 "cse_detection.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 387 "cse_detection.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__ShortHand_85));
#line 387 "cse_detection.m"
                    }
#line 366 "cse_detection.m"
                  }
#line 290 "cse_detection.m"
                else
#line 290 "cse_detection.m"
                  if (((((MR_tag((MR_Word) check_hlds__cse_detection__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 354 "cse_detection.m"
                    {
#line 354 "cse_detection.m"
                      MR_Word check_hlds__cse_detection__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 354 "cse_detection.m"
                      MR_Word check_hlds__cse_detection__CanFail_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
#line 354 "cse_detection.m"
                      MR_Word check_hlds__cse_detection__Cases0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 3)));
#line 354 "cse_detection.m"
                      MR_Word check_hlds__cse_detection__NonLocals_113;
#line 354 "cse_detection.m"
                      MR_Word check_hlds__cse_detection__NonLocalsList_114;

#line 355 "cse_detection.m"
                      {
#line 355 "cse_detection.m"
                        check_hlds__cse_detection__NonLocals_113 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__cse_detection__GoalInfo_11);
                      }
#line 356 "cse_detection.m"
                      {
#line 356 "cse_detection.m"
                        check_hlds__cse_detection__NonLocalsList_114 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__cse_detection__NonLocals_113);
                      }
#line 357 "cse_detection.m"
                      {
#line 357 "cse_detection.m"
                        check_hlds__cse_detection__detect_cse_in_cases_10_p_0(check_hlds__cse_detection__NonLocalsList_114, check_hlds__cse_detection__Var_67, check_hlds__cse_detection__CanFail_68, check_hlds__cse_detection__Cases0_69, check_hlds__cse_detection__GoalInfo_11, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__Redo_13, check_hlds__cse_detection__GoalExpr_9);
#line 357 "cse_detection.m"
                        return;
                      }
#line 354 "cse_detection.m"
                    }
#line 290 "cse_detection.m"
                  else
#line 290 "cse_detection.m"
                    {
#line 291 "cse_detection.m"
                      *check_hlds__cse_detection__GoalExpr_9 = check_hlds__cse_detection__GoalExpr0_8;
#line 292 "cse_detection.m"
                      *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
#line 292 "cse_detection.m"
                      *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90;
#line 290 "cse_detection.m"
                    }
#line 290 "cse_detection.m"
  }
#line 280 "cse_detection.m"
}

#line 266 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(
#line 266 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_8,
#line 266 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goal_9,
#line 266 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_18,
#line 266 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_19,
#line 266 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_11,
#line 266 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__InstMap_12,
#line 266 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_13)
#line 266 "cse_detection.m"
{
#line 270 "cse_detection.m"
  {
#line 270 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 270 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalExpr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_8, (MR_Integer) 0)));
#line 270 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_8, (MR_Integer) 1)));
#line 270 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalExpr_16;
#line 270 "cse_detection.m"
    MR_Word check_hlds__cse_detection__InstMapDelta_17;

#line 272 "cse_detection.m"
    {
#line 272 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(check_hlds__cse_detection__GoalExpr0_14, &check_hlds__cse_detection__GoalExpr_16, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_18, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_19, check_hlds__cse_detection__GoalInfo_15, check_hlds__cse_detection__InstMap0_11, check_hlds__cse_detection__Redo_13);
    }
#line 274 "cse_detection.m"
    {
#line 274 "cse_detection.m"
      MR_Word base;
#line 274 "cse_detection.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 274 "cse_detection.m"
      *check_hlds__cse_detection__Goal_9 = base;
#line 274 "cse_detection.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__cse_detection__GoalExpr_16));
#line 274 "cse_detection.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_15));
#line 274 "cse_detection.m"
    }
#line 275 "cse_detection.m"
    {
#line 275 "cse_detection.m"
      check_hlds__cse_detection__InstMapDelta_17 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__cse_detection__GoalInfo_15);
    }
#line 276 "cse_detection.m"
    {
#line 276 "cse_detection.m"
      hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__cse_detection__InstMap0_11, check_hlds__cse_detection__InstMapDelta_17, check_hlds__cse_detection__InstMap_12);
#line 276 "cse_detection.m"
      return;
    }
#line 270 "cse_detection.m"
  }
#line 266 "cse_detection.m"
}

#line 255 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_6_p_0(
#line 255 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_7,
#line 255 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goal_8,
#line 255 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_13,
#line 255 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_14,
#line 255 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_10,
#line 255 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_11)
#line 255 "cse_detection.m"
{
#line 259 "cse_detection.m"
  {
#line 259 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 259 "cse_detection.m"
    MR_Word check_hlds__cse_detection___InstMap_12;

#line 259 "cse_detection.m"
    {
#line 259 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Goal0_7, check_hlds__cse_detection__Goal_8, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_13, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_14, check_hlds__cse_detection__InstMap0_10, &check_hlds__cse_detection___InstMap_12, check_hlds__cse_detection__Redo_11);
    }
#line 259 "cse_detection.m"
  }
#line 255 "cse_detection.m"
}

#line 211 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_proc_pass_4_p_0(
#line 211 "cse_detection.m"
  MR_Word check_hlds__cse_detection__ModuleInfo_5,
#line 211 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_6,
#line 211 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26,
#line 211 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_27)
#line 211 "cse_detection.m"
{
#line 214 "cse_detection.m"
  {
#line 214 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 214 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Goal0_8;
#line 214 "cse_detection.m"
    MR_Word check_hlds__cse_detection__InstMap0_9;
#line 214 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Varset0_10;
#line 214 "cse_detection.m"
    MR_Word check_hlds__cse_detection__VarTypes0_11;
#line 214 "cse_detection.m"
    MR_Word check_hlds__cse_detection__RttiVarMaps0_12;
#line 214 "cse_detection.m"
    MR_Word check_hlds__cse_detection__CseInfo0_13;
#line 214 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Goal1_14;
#line 214 "cse_detection.m"
    MR_Word check_hlds__cse_detection__CseInfo_15;
#line 259 "cse_detection.m"
    MR_Word check_hlds__cse_detection___InstMap_40;

#line 219 "cse_detection.m"
    {
#line 219 "cse_detection.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__Goal0_8);
    }
#line 220 "cse_detection.m"
    {
#line 220 "cse_detection.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, check_hlds__cse_detection__ModuleInfo_5, &check_hlds__cse_detection__InstMap0_9);
    }
#line 221 "cse_detection.m"
    {
#line 221 "cse_detection.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__Varset0_10);
    }
#line 222 "cse_detection.m"
    {
#line 222 "cse_detection.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__VarTypes0_11);
    }
#line 223 "cse_detection.m"
    {
#line 223 "cse_detection.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__RttiVarMaps0_12);
    }
#line 224 "cse_detection.m"
    {
#line 224 "cse_detection.m"
      check_hlds__cse_detection__CseInfo0_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 224 "cse_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo0_13, 0) = ((MR_Box) (check_hlds__cse_detection__Varset0_10));
#line 224 "cse_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo0_13, 1) = ((MR_Box) (check_hlds__cse_detection__VarTypes0_11));
#line 224 "cse_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo0_13, 2) = ((MR_Box) (check_hlds__cse_detection__RttiVarMaps0_12));
#line 224 "cse_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo0_13, 3) = ((MR_Box) (check_hlds__cse_detection__ModuleInfo_5));
#line 224 "cse_detection.m"
    }
#line 259 "cse_detection.m"
    {
#line 259 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Goal0_8, &check_hlds__cse_detection__Goal1_14, check_hlds__cse_detection__CseInfo0_13, &check_hlds__cse_detection__CseInfo_15, check_hlds__cse_detection__InstMap0_9, &check_hlds__cse_detection___InstMap_40, check_hlds__cse_detection__Redo_6);
    }
#line 229 "cse_detection.m"
    if ((*check_hlds__cse_detection__Redo_6 == (MR_Integer) 0))
#line 228 "cse_detection.m"
      *check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_27 = check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26;
#line 229 "cse_detection.m"
    else
#line 230 "cse_detection.m"
      {
#line 230 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarSet1_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo_15, (MR_Integer) 0)));
#line 230 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarTypes1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo_15, (MR_Integer) 1)));
#line 230 "cse_detection.m"
        MR_Word check_hlds__cse_detection__RttiVarMaps1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo_15, (MR_Integer) 2)));
#line 230 "cse_detection.m"
        MR_Word check_hlds__cse_detection__HeadVars_20;
#line 230 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_22;
#line 230 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarSet_23;
#line 230 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarTypes_24;
#line 230 "cse_detection.m"
        MR_Word check_hlds__cse_detection__RttiVarMaps_25;
#line 230 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_29_29;
#line 230 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_30_30;
#line 230 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_31_31;
#line 233 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo_15, (MR_Integer) 3)));
#line 236 "cse_detection.m"
        MR_Word check_hlds__cse_detection___Warnings_21;

#line 234 "cse_detection.m"
        {
#line 234 "cse_detection.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__HeadVars_20);
        }
#line 236 "cse_detection.m"
        {
#line 236 "cse_detection.m"
          hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, check_hlds__cse_detection__HeadVars_20, &check_hlds__cse_detection___Warnings_21, check_hlds__cse_detection__Goal1_14, &check_hlds__cse_detection__Goal_22, check_hlds__cse_detection__VarSet1_16, &check_hlds__cse_detection__VarSet_23, check_hlds__cse_detection__VarTypes1_17, &check_hlds__cse_detection__VarTypes_24, check_hlds__cse_detection__RttiVarMaps1_18, &check_hlds__cse_detection__RttiVarMaps_25);
        }
#line 242 "cse_detection.m"
        {
#line 242 "cse_detection.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__cse_detection__Goal_22, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_29_29);
        }
#line 243 "cse_detection.m"
        {
#line 243 "cse_detection.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__cse_detection__VarSet_23, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_29_29, &check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_30_30);
        }
#line 244 "cse_detection.m"
        {
#line 244 "cse_detection.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__cse_detection__VarTypes_24, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_30_30, &check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_31_31);
        }
#line 245 "cse_detection.m"
        {
#line 245 "cse_detection.m"
          hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(check_hlds__cse_detection__RttiVarMaps_25, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_31_31, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_27);
#line 245 "cse_detection.m"
          return;
        }
#line 230 "cse_detection.m"
      }
#line 214 "cse_detection.m"
  }
#line 211 "cse_detection.m"
}

#line 94 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_procs_4_p_0(
#line 94 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 94 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 94 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3,
#line 94 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_4)
#line 94 "cse_detection.m"
{
#line 97 "cse_detection.m"
  while (MR_TRUE)
#line 97 "cse_detection.m"
    {
#line 97 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 97 "cse_detection.m"
      {
#line 97 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;

#line 97 "cse_detection.m"
        if ((check_hlds__cse_detection__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 97 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_4 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3;
#line 97 "cse_detection.m"
        else
#line 98 "cse_detection.m"
          {
#line 98 "cse_detection.m"
            MR_Integer check_hlds__cse_detection__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 98 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ProcIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 98 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_15_15;

#line 99 "cse_detection.m"
            {
#line 99 "cse_detection.m"
              check_hlds__cse_detection__detect_cse_in_proc_4_p_0(check_hlds__cse_detection__HeadVar__1_1, check_hlds__cse_detection__ProcId_10, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_15_15);
            }
#line 100 "cse_detection.m"
            /* direct tailcall eliminated */
#line 100 "cse_detection.m"
            {
#line 100 "cse_detection.m"
              MR_Word check_hlds__cse_detection__HeadVar__2__tmp_copy_2 = check_hlds__cse_detection__ProcIds_11;
#line 100 "cse_detection.m"
              MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_15_15;

#line 100 "cse_detection.m"
              check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 100 "cse_detection.m"
              check_hlds__cse_detection__HeadVar__2_2 = check_hlds__cse_detection__HeadVar__2__tmp_copy_2;
#line 100 "cse_detection.m"
            }
#line 100 "cse_detection.m"
            continue;
#line 98 "cse_detection.m"
          }
#line 97 "cse_detection.m"
      }
#line 97 "cse_detection.m"
      break;
#line 97 "cse_detection.m"
    }
#line 94 "cse_detection.m"
}

#line 77 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_preds_3_p_0(
#line 77 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 77 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2,
#line 77 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_3)
#line 77 "cse_detection.m"
{
#line 80 "cse_detection.m"
  while (MR_TRUE)
#line 80 "cse_detection.m"
    {
#line 80 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 80 "cse_detection.m"
      {
#line 80 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;

#line 80 "cse_detection.m"
        if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 80 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_3 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2;
#line 80 "cse_detection.m"
        else
#line 81 "cse_detection.m"
          {
#line 81 "cse_detection.m"
            MR_Word check_hlds__cse_detection__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 81 "cse_detection.m"
            MR_Word check_hlds__cse_detection__PredIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 81 "cse_detection.m"
            MR_Word check_hlds__cse_detection__PredTable_10;
#line 81 "cse_detection.m"
            MR_Word check_hlds__cse_detection__PredInfo_11;
#line 81 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_14_14;
#line 81 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ProcIds_23;
#line 83 "cse_detection.m"
            MR_Box check_hlds__cse_detection__conv0_PredInfo_11;

#line 82 "cse_detection.m"
            {
#line 82 "cse_detection.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2, &check_hlds__cse_detection__PredTable_10);
            }
#line 83 "cse_detection.m"
            {
#line 83 "cse_detection.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__cse_detection__PredTable_10, ((MR_Box) (check_hlds__cse_detection__PredId_7)), &check_hlds__cse_detection__conv0_PredInfo_11);
            }
#line 83 "cse_detection.m"
            check_hlds__cse_detection__PredInfo_11 = ((MR_Word) check_hlds__cse_detection__conv0_PredInfo_11);
#line 91 "cse_detection.m"
            {
#line 91 "cse_detection.m"
              check_hlds__cse_detection__ProcIds_23 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(check_hlds__cse_detection__PredInfo_11);
            }
#line 92 "cse_detection.m"
            {
#line 92 "cse_detection.m"
              check_hlds__cse_detection__detect_cse_in_procs_4_p_0(check_hlds__cse_detection__PredId_7, check_hlds__cse_detection__ProcIds_23, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_14_14);
            }
#line 85 "cse_detection.m"
            /* direct tailcall eliminated */
#line 85 "cse_detection.m"
            {
#line 85 "cse_detection.m"
              MR_Word check_hlds__cse_detection__HeadVar__1__tmp_copy_1 = check_hlds__cse_detection__PredIds_8;
#line 85 "cse_detection.m"
              MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_14_14;

#line 85 "cse_detection.m"
              check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
#line 85 "cse_detection.m"
              check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__HeadVar__1__tmp_copy_1;
#line 85 "cse_detection.m"
            }
#line 85 "cse_detection.m"
            continue;
#line 81 "cse_detection.m"
          }
#line 80 "cse_detection.m"
      }
#line 80 "cse_detection.m"
      break;
#line 80 "cse_detection.m"
    }
#line 77 "cse_detection.m"
}

#line 29 "cse_detection.m"
void MR_CALL 
check_hlds__cse_detection__detect_cse_in_proc_4_p_0(
#line 29 "cse_detection.m"
  MR_Word check_hlds__cse_detection__PredId_5,
#line 29 "cse_detection.m"
  MR_Integer check_hlds__cse_detection__ProcId_6,
#line 29 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33,
#line 29 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_34)
#line 29 "cse_detection.m"
{
#line 102 "cse_detection.m"
  while (MR_TRUE)
#line 102 "cse_detection.m"
    {
#line 102 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 102 "cse_detection.m"
      {
#line 102 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;
#line 102 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeCtorInfo_76_76;
#line 102 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeCtorInfo_77_77;
#line 102 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeCtorInfo_78_78;
#line 102 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeCtorInfo_79_79;
#line 102 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Globals_8;
#line 102 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VeryVerbose_9;
#line 102 "cse_detection.m"
        MR_Word check_hlds__cse_detection__PredTable0_11;
#line 102 "cse_detection.m"
        MR_Word check_hlds__cse_detection__PredInfo0_12;
#line 102 "cse_detection.m"
        MR_Word check_hlds__cse_detection__ProcTable0_13;
#line 102 "cse_detection.m"
        MR_Word check_hlds__cse_detection__ProcInfo0_14;
#line 102 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo_15;
#line 102 "cse_detection.m"
        MR_Word check_hlds__cse_detection__ProcInfo1_16;
#line 102 "cse_detection.m"
        MR_Word check_hlds__cse_detection__ProcTable1_17;
#line 102 "cse_detection.m"
        MR_Word check_hlds__cse_detection__PredInfo1_18;
#line 102 "cse_detection.m"
        MR_Word check_hlds__cse_detection__PredTable1_19;
#line 102 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Statistics_20;
#line 102 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42;
#line 119 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv0_PredInfo0_12;
#line 121 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv1_ProcInfo0_14;

#line 103 "cse_detection.m"
        {
#line 103 "cse_detection.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__cse_detection__Globals_8);
        }
#line 104 "cse_detection.m"
        {
#line 104 "cse_detection.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__cse_detection__Globals_8, (MR_Integer) 45, &check_hlds__cse_detection__VeryVerbose_9);
        }
#line 112 "cse_detection.m"
        if ((check_hlds__cse_detection__VeryVerbose_9 == (MR_Integer) 0))
#line 113 "cse_detection.m"
          {
#line 113 "cse_detection.m"
          }
#line 112 "cse_detection.m"
        else
#line 107 "cse_detection.m"
          {
#line 108 "cse_detection.m"
            {
#line 108 "cse_detection.m"
              mercury__io__write_string_3_p_0((MR_String) "% Detecting common deconstructions for ");
            }
#line 109 "cse_detection.m"
            {
#line 109 "cse_detection.m"
              hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, check_hlds__cse_detection__PredId_5);
            }
#line 110 "cse_detection.m"
            {
#line 110 "cse_detection.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 107 "cse_detection.m"
          }
#line 118 "cse_detection.m"
        {
#line 118 "cse_detection.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__cse_detection__PredTable0_11);
        }
#line 6444 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeCtorInfo_76_76 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 6446 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeCtorInfo_77_77 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 119 "cse_detection.m"
        {
#line 119 "cse_detection.m"
          mercury__map__lookup_3_p_0(check_hlds__cse_detection__TypeCtorInfo_76_76, check_hlds__cse_detection__TypeCtorInfo_77_77, check_hlds__cse_detection__PredTable0_11, ((MR_Box) (check_hlds__cse_detection__PredId_5)), &check_hlds__cse_detection__conv0_PredInfo0_12);
        }
#line 119 "cse_detection.m"
        check_hlds__cse_detection__PredInfo0_12 = ((MR_Word) check_hlds__cse_detection__conv0_PredInfo0_12);
#line 120 "cse_detection.m"
        {
#line 120 "cse_detection.m"
          hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__cse_detection__PredInfo0_12, &check_hlds__cse_detection__ProcTable0_13);
        }
#line 6460 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeCtorInfo_78_78 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 6462 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeCtorInfo_79_79 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 121 "cse_detection.m"
        {
#line 121 "cse_detection.m"
          mercury__map__lookup_3_p_0(check_hlds__cse_detection__TypeCtorInfo_78_78, check_hlds__cse_detection__TypeCtorInfo_79_79, check_hlds__cse_detection__ProcTable0_13, ((MR_Box) (check_hlds__cse_detection__ProcId_6)), &check_hlds__cse_detection__conv1_ProcInfo0_14);
        }
#line 121 "cse_detection.m"
        check_hlds__cse_detection__ProcInfo0_14 = ((MR_Word) check_hlds__cse_detection__conv1_ProcInfo0_14);
#line 123 "cse_detection.m"
        {
#line 123 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_proc_pass_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__cse_detection__Redo_15, check_hlds__cse_detection__ProcInfo0_14, &check_hlds__cse_detection__ProcInfo1_16);
        }
#line 125 "cse_detection.m"
        {
#line 125 "cse_detection.m"
          mercury__map__det_update_4_p_0(check_hlds__cse_detection__TypeCtorInfo_78_78, check_hlds__cse_detection__TypeCtorInfo_79_79, ((MR_Box) (check_hlds__cse_detection__ProcId_6)), ((MR_Box) (check_hlds__cse_detection__ProcInfo1_16)), check_hlds__cse_detection__ProcTable0_13, &check_hlds__cse_detection__ProcTable1_17);
        }
#line 126 "cse_detection.m"
        {
#line 126 "cse_detection.m"
          hlds__hlds_pred__pred_info_set_procedures_3_p_0(check_hlds__cse_detection__ProcTable1_17, check_hlds__cse_detection__PredInfo0_12, &check_hlds__cse_detection__PredInfo1_18);
        }
#line 127 "cse_detection.m"
        {
#line 127 "cse_detection.m"
          mercury__map__det_update_4_p_0(check_hlds__cse_detection__TypeCtorInfo_76_76, check_hlds__cse_detection__TypeCtorInfo_77_77, ((MR_Box) (check_hlds__cse_detection__PredId_5)), ((MR_Box) (check_hlds__cse_detection__PredInfo1_18)), check_hlds__cse_detection__PredTable0_11, &check_hlds__cse_detection__PredTable1_19);
        }
#line 128 "cse_detection.m"
        {
#line 128 "cse_detection.m"
          hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__cse_detection__PredTable1_19, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42);
        }
#line 130 "cse_detection.m"
        {
#line 130 "cse_detection.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__cse_detection__Globals_8, (MR_Integer) 55, &check_hlds__cse_detection__Statistics_20);
        }
#line 132 "cse_detection.m"
        {
#line 132 "cse_detection.m"
          libs__file_util__maybe_report_stats_3_p_0(check_hlds__cse_detection__Statistics_20);
        }
#line 136 "cse_detection.m"
        if ((check_hlds__cse_detection__Redo_15 == (MR_Integer) 0))
#line 135 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_34 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42;
#line 136 "cse_detection.m"
        else
#line 137 "cse_detection.m"
          {
#line 137 "cse_detection.m"
            MR_Word check_hlds__cse_detection__PredTable2_24;
#line 137 "cse_detection.m"
            MR_Word check_hlds__cse_detection__PredInfo2_25;
#line 137 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ProcTable2_26;
#line 137 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ProcInfo2_27;
#line 137 "cse_detection.m"
            MR_Word check_hlds__cse_detection__SwitchDetectInfo_28;
#line 137 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ProcInfo_29;
#line 137 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ProcTable3_30;
#line 137 "cse_detection.m"
            MR_Word check_hlds__cse_detection__PredInfo3_31;
#line 137 "cse_detection.m"
            MR_Word check_hlds__cse_detection__PredTable3_32;
#line 137 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52;
#line 137 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_64_64;
#line 174 "cse_detection.m"
            MR_Box check_hlds__cse_detection__conv2_PredInfo2_25;
#line 176 "cse_detection.m"
            MR_Box check_hlds__cse_detection__conv3_ProcInfo2_27;

#line 6541 "check_hlds.cse_detection.c"
            if ((check_hlds__cse_detection__VeryVerbose_9 == (MR_Integer) 0))
#line 6543 "check_hlds.cse_detection.c"
              {
#line 6545 "check_hlds.cse_detection.c"
                MR_Word check_hlds__cse_detection__ModeSpecs_21;
#line 6547 "check_hlds.cse_detection.c"
                MR_Word check_hlds__cse_detection__ContainsErrors_23;
#line 148 "cse_detection.m"
                MR_Word check_hlds__cse_detection___Changed_22;

#line 148 "cse_detection.m"
                {
#line 148 "cse_detection.m"
                  check_hlds__modes__modecheck_proc_6_p_0(check_hlds__cse_detection__ProcId_6, check_hlds__cse_detection__PredId_5, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__cse_detection__ModeSpecs_21, &check_hlds__cse_detection___Changed_22);
                }
#line 150 "cse_detection.m"
                {
#line 150 "cse_detection.m"
                  libs__file_util__maybe_report_stats_3_p_0(check_hlds__cse_detection__Statistics_20);
                }
#line 152 "cse_detection.m"
                {
#line 152 "cse_detection.m"
                  check_hlds__cse_detection__ContainsErrors_23 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__cse_detection__Globals_8, check_hlds__cse_detection__ModeSpecs_21);
                }
#line 156 "cse_detection.m"
                if ((check_hlds__cse_detection__ContainsErrors_23 == (MR_Integer) 0))
#line 157 "cse_detection.m"
                  {
#line 157 "cse_detection.m"
                  }
#line 156 "cse_detection.m"
                else
#line 154 "cse_detection.m"
                  {
#line 155 "cse_detection.m"
                    {
#line 155 "cse_detection.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_proc\'/4", (MR_String) "mode check fails when repeated");
#line 155 "cse_detection.m"
                      return;
                    }
#line 154 "cse_detection.m"
                  }
#line 6586 "check_hlds.cse_detection.c"
              }
#line 6588 "check_hlds.cse_detection.c"
            else
#line 6590 "check_hlds.cse_detection.c"
              {
#line 6592 "check_hlds.cse_detection.c"
                MR_Word check_hlds__cse_detection__ModeSpecs_91;
#line 6594 "check_hlds.cse_detection.c"
                MR_Word check_hlds__cse_detection__ContainsErrors_93;
#line 148 "cse_detection.m"
                MR_Word check_hlds__cse_detection___Changed_80;

#line 141 "cse_detection.m"
                {
#line 141 "cse_detection.m"
                  mercury__io__write_string_3_p_0((MR_String) "% Repeating mode check for ");
                }
#line 142 "cse_detection.m"
                {
#line 142 "cse_detection.m"
                  hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42, check_hlds__cse_detection__PredId_5);
                }
#line 143 "cse_detection.m"
                {
#line 143 "cse_detection.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 148 "cse_detection.m"
                {
#line 148 "cse_detection.m"
                  check_hlds__modes__modecheck_proc_6_p_0(check_hlds__cse_detection__ProcId_6, check_hlds__cse_detection__PredId_5, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__cse_detection__ModeSpecs_91, &check_hlds__cse_detection___Changed_80);
                }
#line 150 "cse_detection.m"
                {
#line 150 "cse_detection.m"
                  libs__file_util__maybe_report_stats_3_p_0(check_hlds__cse_detection__Statistics_20);
                }
#line 152 "cse_detection.m"
                {
#line 152 "cse_detection.m"
                  check_hlds__cse_detection__ContainsErrors_93 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__cse_detection__Globals_8, check_hlds__cse_detection__ModeSpecs_91);
                }
#line 156 "cse_detection.m"
                if ((check_hlds__cse_detection__ContainsErrors_93 == (MR_Integer) 0))
#line 157 "cse_detection.m"
                  {
#line 157 "cse_detection.m"
                  }
#line 156 "cse_detection.m"
                else
#line 154 "cse_detection.m"
                  {
#line 155 "cse_detection.m"
                    {
#line 155 "cse_detection.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_proc\'/4", (MR_String) "mode check fails when repeated");
#line 155 "cse_detection.m"
                      return;
                    }
#line 154 "cse_detection.m"
                  }
#line 165 "cse_detection.m"
                {
#line 165 "cse_detection.m"
                  mercury__io__write_string_3_p_0((MR_String) "% Repeating switch detection for ");
                }
#line 166 "cse_detection.m"
                {
#line 166 "cse_detection.m"
                  hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, check_hlds__cse_detection__PredId_5);
                }
#line 167 "cse_detection.m"
                {
#line 167 "cse_detection.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 6663 "check_hlds.cse_detection.c"
              }
#line 173 "cse_detection.m"
            {
#line 173 "cse_detection.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__cse_detection__PredTable2_24);
            }
#line 174 "cse_detection.m"
            {
#line 174 "cse_detection.m"
              mercury__map__lookup_3_p_0(check_hlds__cse_detection__TypeCtorInfo_76_76, check_hlds__cse_detection__TypeCtorInfo_77_77, check_hlds__cse_detection__PredTable2_24, ((MR_Box) (check_hlds__cse_detection__PredId_5)), &check_hlds__cse_detection__conv2_PredInfo2_25);
            }
#line 174 "cse_detection.m"
            check_hlds__cse_detection__PredInfo2_25 = ((MR_Word) check_hlds__cse_detection__conv2_PredInfo2_25);
#line 175 "cse_detection.m"
            {
#line 175 "cse_detection.m"
              hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__cse_detection__PredInfo2_25, &check_hlds__cse_detection__ProcTable2_26);
            }
#line 176 "cse_detection.m"
            {
#line 176 "cse_detection.m"
              mercury__map__lookup_3_p_0(check_hlds__cse_detection__TypeCtorInfo_78_78, check_hlds__cse_detection__TypeCtorInfo_79_79, check_hlds__cse_detection__ProcTable2_26, ((MR_Box) (check_hlds__cse_detection__ProcId_6)), &check_hlds__cse_detection__conv3_ProcInfo2_27);
            }
#line 176 "cse_detection.m"
            check_hlds__cse_detection__ProcInfo2_27 = ((MR_Word) check_hlds__cse_detection__conv3_ProcInfo2_27);
#line 178 "cse_detection.m"
            {
#line 178 "cse_detection.m"
              check_hlds__cse_detection__SwitchDetectInfo_28 = check_hlds__switch_detection__init_switch_detect_info_1_f_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52);
            }
#line 179 "cse_detection.m"
            {
#line 179 "cse_detection.m"
              check_hlds__switch_detection__detect_switches_in_proc_3_p_0(check_hlds__cse_detection__SwitchDetectInfo_28, check_hlds__cse_detection__ProcInfo2_27, &check_hlds__cse_detection__ProcInfo_29);
            }
#line 181 "cse_detection.m"
            {
#line 181 "cse_detection.m"
              mercury__map__det_update_4_p_0(check_hlds__cse_detection__TypeCtorInfo_78_78, check_hlds__cse_detection__TypeCtorInfo_79_79, ((MR_Box) (check_hlds__cse_detection__ProcId_6)), ((MR_Box) (check_hlds__cse_detection__ProcInfo_29)), check_hlds__cse_detection__ProcTable2_26, &check_hlds__cse_detection__ProcTable3_30);
            }
#line 182 "cse_detection.m"
            {
#line 182 "cse_detection.m"
              hlds__hlds_pred__pred_info_set_procedures_3_p_0(check_hlds__cse_detection__ProcTable3_30, check_hlds__cse_detection__PredInfo2_25, &check_hlds__cse_detection__PredInfo3_31);
            }
#line 183 "cse_detection.m"
            {
#line 183 "cse_detection.m"
              mercury__map__det_update_4_p_0(check_hlds__cse_detection__TypeCtorInfo_76_76, check_hlds__cse_detection__TypeCtorInfo_77_77, ((MR_Box) (check_hlds__cse_detection__PredId_5)), ((MR_Box) (check_hlds__cse_detection__PredInfo3_31)), check_hlds__cse_detection__PredTable2_24, &check_hlds__cse_detection__PredTable3_32);
            }
#line 184 "cse_detection.m"
            {
#line 184 "cse_detection.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__cse_detection__PredTable3_32, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_64_64);
            }
#line 187 "cse_detection.m"
            {
#line 187 "cse_detection.m"
              libs__file_util__maybe_report_stats_3_p_0(check_hlds__cse_detection__Statistics_20);
            }
#line 197 "cse_detection.m"
            if ((check_hlds__cse_detection__VeryVerbose_9 == (MR_Integer) 0))
#line 198 "cse_detection.m"
              {
#line 198 "cse_detection.m"
              }
#line 197 "cse_detection.m"
            else
#line 191 "cse_detection.m"
              {
#line 192 "cse_detection.m"
                {
#line 192 "cse_detection.m"
                  mercury__io__write_string_3_p_0((MR_String) "% Repeating common deconstruction detection for ");
                }
#line 194 "cse_detection.m"
                {
#line 194 "cse_detection.m"
                  hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_64_64, check_hlds__cse_detection__PredId_5);
                }
#line 195 "cse_detection.m"
                {
#line 195 "cse_detection.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 191 "cse_detection.m"
              }
#line 200 "cse_detection.m"
            /* direct tailcall eliminated */
#line 200 "cse_detection.m"
            {
#line 200 "cse_detection.m"
              MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_33 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_64_64;

#line 200 "cse_detection.m"
              check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_33;
#line 200 "cse_detection.m"
            }
#line 200 "cse_detection.m"
            continue;
#line 137 "cse_detection.m"
          }
#line 102 "cse_detection.m"
      }
#line 102 "cse_detection.m"
      break;
#line 102 "cse_detection.m"
    }
#line 29 "cse_detection.m"
}

#line 27 "cse_detection.m"
void MR_CALL 
check_hlds__cse_detection__detect_cse_in_module_2_p_0(
#line 27 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_5,
#line 27 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_6)
#line 27 "cse_detection.m"
{
#line 71 "cse_detection.m"
  {
#line 71 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 71 "cse_detection.m"
    MR_Word check_hlds__cse_detection__PredIds_4;
#line 71 "cse_detection.m"
    MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_7_7;

#line 74 "cse_detection.m"
    {
#line 74 "cse_detection.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&check_hlds__cse_detection__PredIds_4, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_5, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_7_7);
    }
#line 75 "cse_detection.m"
    {
#line 75 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_preds_3_p_0(check_hlds__cse_detection__PredIds_4, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_7_7, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_6);
#line 75 "cse_detection.m"
      return;
    }
#line 71 "cse_detection.m"
  }
#line 27 "cse_detection.m"
}

void mercury__check_hlds__cse_detection__init(void)
{
}

void mercury__check_hlds__cse_detection__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0);
	MR_register_type_ctor_info(&check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0);
}

void mercury__check_hlds__cse_detection__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.cse_detection. */
