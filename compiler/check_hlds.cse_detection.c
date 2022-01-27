/*
** Automatically generated from `cse_detection.m'
** by the Mercury compiler,
** version DEV
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
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.vartypes.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 148 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 151 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 154 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 157 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 163 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 166 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 169 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 172 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 175 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 178 "check_hlds.cse_detection.c"
static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_info_0_0[4];

#line 181 "check_hlds.cse_detection.c"
static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_info_0_0[4];

#line 184 "check_hlds.cse_detection.c"
static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0;

#line 187 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_info_0_0[1];

#line 190 "check_hlds.cse_detection.c"
static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_info_0[1];

#line 193 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_info_0[1];

#line 196 "check_hlds.cse_detection.c"
static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_info_0[1];

#line 199 "check_hlds.cse_detection.c"
static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_0;

#line 202 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 205 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 208 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 211 "check_hlds.cse_detection.c"
static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_state_0_1[3];

#line 214 "check_hlds.cse_detection.c"
static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_state_0_1[3];

#line 217 "check_hlds.cse_detection.c"
static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1;

#line 220 "check_hlds.cse_detection.c"
static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_2;

#line 223 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_0[2];

#line 226 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_1[1];

#line 229 "check_hlds.cse_detection.c"
static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_state_0[2];

#line 232 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_state_0[3];

#line 235 "check_hlds.cse_detection.c"
static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_state_0[3];

#line 238 "check_hlds.cse_detection.c"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0_10001(
#line 241 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 243 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2);

#line 246 "check_hlds.cse_detection.c"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0_10001(
#line 249 "check_hlds.cse_detection.c"
  MR_Box * check_hlds__cse_detection__wrapper_arg_1,
#line 251 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 253 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_3);

#line 256 "check_hlds.cse_detection.c"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0_10001(
#line 259 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 261 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2);

#line 264 "check_hlds.cse_detection.c"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0_10001(
#line 267 "check_hlds.cse_detection.c"
  MR_Box * check_hlds__cse_detection__wrapper_arg_1,
#line 269 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 271 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_3);

#line 660 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0(
#line 660 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__1_1,
#line 660 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 660 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3);

#line 660 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0(
#line 660 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 660 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2);

#line 238 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0(
#line 238 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__1_1,
#line 238 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 238 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3);

#line 238 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0(
#line 238 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 238 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2);

#line 950 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_merged_tvars_6_p_0(
#line 950 "cse_detection.m"
  MR_Word check_hlds__cse_detection__RttiVarMaps_7,
#line 950 "cse_detection.m"
  MR_Word check_hlds__cse_detection__LaterOldNewMap_8,
#line 950 "cse_detection.m"
  MR_Word check_hlds__cse_detection__NewTvarMap_9,
#line 950 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Tvar_10,
#line 950 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17,
#line 950 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_Renaming_18);

#line 936 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_type_info_locn_tvar_map_5_p_0(
#line 936 "cse_detection.m"
  MR_Word check_hlds__cse_detection__RttiVarMaps_6,
#line 936 "cse_detection.m"
  MR_Word check_hlds__cse_detection__FirstOldNewMap_7,
#line 936 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Tvar_8,
#line 936 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_0_14,
#line 936 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_15);

#line 922 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_2(
#line 922 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 922 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 922 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 922 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3);

#line 915 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_1(
#line 915 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 915 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 915 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 915 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3);

#line 879 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(
#line 879 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Unify_6,
#line 879 "cse_detection.m"
  MR_Word check_hlds__cse_detection__FirstOldNew_7,
#line 879 "cse_detection.m"
  MR_Word check_hlds__cse_detection__LaterOldNew_8,
#line 879 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25,
#line 879 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26);

#line 795 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__pair_subterms_4_p_0(
#line 795 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 795 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 795 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3,
#line 795 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__4_4);

#line 771 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__find_similar_deconstruct_5_p_0(
#line 771 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HoistedUnifyGoal_6,
#line 771 "cse_detection.m"
  MR_Word check_hlds__cse_detection__OldUnifyGoal_7,
#line 771 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Context_8,
#line 771 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__OldHoistedVars_9,
#line 771 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Replacements_10);

#line 733 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__create_parallel_subterms_7_p_0(
#line 733 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 733 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Context_2,
#line 733 "cse_detection.m"
  MR_Word check_hlds__cse_detection__UnifyContext_3,
#line 733 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_4,
#line 733 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_5,
#line 733 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6,
#line 733 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7);

#line 669 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(
#line 669 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Var_8,
#line 669 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_9,
#line 669 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goals_10,
#line 669 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22,
#line 669 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_23,
#line 669 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24,
#line 669 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25);

#line 634 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0_1(
#line 634 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 634 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 634 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 634 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 634 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 634 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 634 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 634 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7);

#line 626 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(
#line 626 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 626 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 626 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3,
#line 626 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_4,
#line 626 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 626 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 626 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7);

#line 609 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0_1(
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 609 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 609 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 609 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7);

#line 602 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0(
#line 602 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 602 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 602 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3,
#line 602 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_4,
#line 602 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 602 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 602 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7);

#line 564 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_arms_10_p_0(
#line 564 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cond0_11,
#line 564 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Cond_12,
#line 564 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Then0_13,
#line 564 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Then_14,
#line 564 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Else0_15,
#line 564 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Else_16,
#line 564 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25,
#line 564 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26,
#line 564 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_18,
#line 564 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_19);

#line 609 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0_2(
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 609 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 609 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 609 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7);

#line 609 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0_1(
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 609 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 609 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 609 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7);

#line 533 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0(
#line 533 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 533 "cse_detection.m"
  MR_Word check_hlds__cse_detection__IfVars_2,
#line 533 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cond0_3,
#line 533 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Then0_4,
#line 533 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Else0_5,
#line 533 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo_6,
#line 533 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap_7,
#line 533 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8,
#line 533 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_9,
#line 533 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_10,
#line 533 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__11_11);

#line 521 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_arms_6_p_0(
#line 521 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 521 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 521 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 521 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 521 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_5,
#line 521 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6);

#line 492 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_10_p_0(
#line 492 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 492 "cse_detection.m"
  MR_Word check_hlds__cse_detection__SwitchVar_2,
#line 492 "cse_detection.m"
  MR_Word check_hlds__cse_detection__CanFail_3,
#line 492 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cases0_4,
#line 492 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__5_5,
#line 492 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_6,
#line 492 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7,
#line 492 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_8,
#line 492 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_9,
#line 492 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__10_10);

#line 481 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(
#line 481 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 481 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 481 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 481 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 481 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_5,
#line 481 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6);

#line 454 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_disj_8_p_0(
#line 454 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 454 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goals0_2,
#line 454 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo0_3,
#line 454 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__4_4,
#line 454 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 454 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 454 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_7,
#line 454 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__8_8);

#line 427 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_conj_7_p_0(
#line 427 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 427 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 427 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 427 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 427 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__5_5,
#line 427 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__6_6,
#line 427 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7);

#line 315 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(
#line 315 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalExpr0_8,
#line 315 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__GoalExpr_9,
#line 315 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90,
#line 315 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91,
#line 315 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo_11,
#line 315 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_12,
#line 315 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_13);

#line 301 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(
#line 301 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_8,
#line 301 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goal_9,
#line 301 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_18,
#line 301 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_19,
#line 301 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_11,
#line 301 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__InstMap_12,
#line 301 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_13);

#line 290 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_6_p_0(
#line 290 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_7,
#line 290 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goal_8,
#line 290 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_13,
#line 290 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_14,
#line 290 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_10,
#line 290 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_11);

#line 246 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_proc_pass_4_p_0(
#line 246 "cse_detection.m"
  MR_Word check_hlds__cse_detection__ModuleInfo_5,
#line 246 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_6,
#line 246 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26,
#line 246 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_27);

#line 129 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_procs_4_p_0(
#line 129 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 129 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 129 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3,
#line 129 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_4);

#line 112 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_preds_3_p_0(
#line 112 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 112 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2,
#line 112 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_3);


static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_1[6][2];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_2[8][3];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_3[1][10];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_4[1][8];

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_5[1][9];




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

static /* final */ const MR_Box check_hlds__cse_detection_scalar_common_2[8][3] = {
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
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__cse_detection__detect_cse_in_ite_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__cse_detection__detect_cse_in_ite_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__cse_detection_scalar_common_3[0])),
    ((MR_Box) (check_hlds__cse_detection__common_deconstruct_2_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 938 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 946 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 954 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 962 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 971 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 979 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 987 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0,
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 996 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1005 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1013 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1022 "check_hlds.cse_detection.c"
static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_info_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__cse_detection__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__cse_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0
};

#line 1030 "check_hlds.cse_detection.c"
static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_info_0_0[4] = {
  (MR_String) "csei_varset",
  (MR_String) "csei_vartypes",
  (MR_String) "csei_rtti_varmaps",
  (MR_String) "csei_module_info"
};

#line 1038 "check_hlds.cse_detection.c"
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

#line 1053 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_info_0_0[1] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0
};

#line 1058 "check_hlds.cse_detection.c"
static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_info_0_0
  }
};

#line 1067 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_info_0[1] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0
};

#line 1072 "check_hlds.cse_detection.c"
static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_info_0[1] = {
  (MR_Integer) 0
};

#line 1077 "check_hlds.cse_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__cse_detection____Unify____cse_info_0_0_10001)),
  ((MR_Box) (check_hlds__cse_detection____Compare____cse_info_0_0_10001)),
  (MR_String) "check_hlds.cse_detection",
  (MR_String) "cse_info",
  {     check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_info_0 },
  {     check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_info_0
};

#line 1094 "check_hlds.cse_detection.c"
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

#line 1109 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1118 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__cse_detection__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1126 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1134 "check_hlds.cse_detection.c"
static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_state_0_1[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__cse_detection__list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1141 "check_hlds.cse_detection.c"
static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_state_0_1[3] = {
  (MR_String) "goal",
  (MR_String) "first_old_new",
  (MR_String) "later_old_new"
};

#line 1148 "check_hlds.cse_detection.c"
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

#line 1163 "check_hlds.cse_detection.c"
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

#line 1178 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_0[2] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_0,
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_2
};

#line 1184 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_1[1] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1
};

#line 1189 "check_hlds.cse_detection.c"
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

#line 1203 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_state_0[3] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_0,
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1,
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_2
};

#line 1210 "check_hlds.cse_detection.c"
static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_state_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1217 "check_hlds.cse_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__cse_detection____Unify____cse_state_0_0_10001)),
  ((MR_Box) (check_hlds__cse_detection____Compare____cse_state_0_0_10001)),
  (MR_String) "check_hlds.cse_detection",
  (MR_String) "cse_state",
  {     check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_state_0 },
  {     check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_state_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_state_0
};

#line 1234 "check_hlds.cse_detection.c"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0_10001(
#line 1237 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 1239 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2)
#line 1241 "check_hlds.cse_detection.c"
{
#line 1243 "check_hlds.cse_detection.c"
  {
#line 1245 "check_hlds.cse_detection.c"
    MR_bool check_hlds__cse_detection__succeeded;

#line 1248 "check_hlds.cse_detection.c"
    {
#line 1250 "check_hlds.cse_detection.c"
      check_hlds__cse_detection__succeeded = check_hlds__cse_detection____Unify____cse_info_0_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2));
    }
#line 1253 "check_hlds.cse_detection.c"
    return check_hlds__cse_detection__succeeded;
#line 1255 "check_hlds.cse_detection.c"
  }
#line 1257 "check_hlds.cse_detection.c"
}

#line 1260 "check_hlds.cse_detection.c"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0_10001(
#line 1263 "check_hlds.cse_detection.c"
  MR_Box * check_hlds__cse_detection__wrapper_arg_1,
#line 1265 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 1267 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_3)
#line 1269 "check_hlds.cse_detection.c"
{
#line 1271 "check_hlds.cse_detection.c"
  {
#line 1273 "check_hlds.cse_detection.c"
    MR_Word check_hlds__cse_detection__conv0_HeadVar__1_1;

#line 1276 "check_hlds.cse_detection.c"
    {
#line 1278 "check_hlds.cse_detection.c"
      check_hlds__cse_detection____Compare____cse_info_0_0(&check_hlds__cse_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), ((MR_Word) check_hlds__cse_detection__wrapper_arg_3));
    }
#line 1281 "check_hlds.cse_detection.c"
    *check_hlds__cse_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__cse_detection__conv0_HeadVar__1_1));
#line 1283 "check_hlds.cse_detection.c"
  }
#line 1285 "check_hlds.cse_detection.c"
}

#line 1288 "check_hlds.cse_detection.c"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0_10001(
#line 1291 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 1293 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2)
#line 1295 "check_hlds.cse_detection.c"
{
#line 1297 "check_hlds.cse_detection.c"
  {
#line 1299 "check_hlds.cse_detection.c"
    MR_bool check_hlds__cse_detection__succeeded;

#line 1302 "check_hlds.cse_detection.c"
    {
#line 1304 "check_hlds.cse_detection.c"
      check_hlds__cse_detection__succeeded = check_hlds__cse_detection____Unify____cse_state_0_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2));
    }
#line 1307 "check_hlds.cse_detection.c"
    return check_hlds__cse_detection__succeeded;
#line 1309 "check_hlds.cse_detection.c"
  }
#line 1311 "check_hlds.cse_detection.c"
}

#line 1314 "check_hlds.cse_detection.c"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0_10001(
#line 1317 "check_hlds.cse_detection.c"
  MR_Box * check_hlds__cse_detection__wrapper_arg_1,
#line 1319 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 1321 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_3)
#line 1323 "check_hlds.cse_detection.c"
{
#line 1325 "check_hlds.cse_detection.c"
  {
#line 1327 "check_hlds.cse_detection.c"
    MR_Word check_hlds__cse_detection__conv0_HeadVar__1_1;

#line 1330 "check_hlds.cse_detection.c"
    {
#line 1332 "check_hlds.cse_detection.c"
      check_hlds__cse_detection____Compare____cse_state_0_0(&check_hlds__cse_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), ((MR_Word) check_hlds__cse_detection__wrapper_arg_3));
    }
#line 1335 "check_hlds.cse_detection.c"
    *check_hlds__cse_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__cse_detection__conv0_HeadVar__1_1));
#line 1337 "check_hlds.cse_detection.c"
  }
#line 1339 "check_hlds.cse_detection.c"
}

#line 660 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0(
#line 660 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__1_1,
#line 660 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 660 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3)
#line 660 "cse_detection.m"
{
#line 660 "cse_detection.m"
  {
#line 660 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 660 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastX_24 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;
#line 660 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastY_25 = (MR_Integer) check_hlds__cse_detection__HeadVar__3_3;

#line 660 "cse_detection.m"
    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastX_24 == check_hlds__cse_detection__CastY_25);
#line 660 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 1366 "check_hlds.cse_detection.c"
      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 660 "cse_detection.m"
    else
#line 660 "cse_detection.m"
#line 660 "cse_detection.m"
      switch (MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__2_2)) {
#line 660 "cse_detection.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 660 "cse_detection.m"
        case (MR_Integer) 0:
#line 660 "cse_detection.m"
#line 660 "cse_detection.m"
          switch (MR_unmkbody(check_hlds__cse_detection__HeadVar__2_2)) {
#line 660 "cse_detection.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 660 "cse_detection.m"
            case (MR_Integer) 0:
#line 660 "cse_detection.m"
#line 660 "cse_detection.m"
              switch (MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__3_3)) {
#line 660 "cse_detection.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 660 "cse_detection.m"
                case (MR_Integer) 0:
#line 660 "cse_detection.m"
#line 660 "cse_detection.m"
                  switch (MR_unmkbody(check_hlds__cse_detection__HeadVar__3_3)) {
#line 660 "cse_detection.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 660 "cse_detection.m"
                    case (MR_Integer) 0:
#line 660 "cse_detection.m"
                      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 660 "cse_detection.m"
                      break;
#line 660 "cse_detection.m"
                    case (MR_Integer) 1:
#line 660 "cse_detection.m"
                      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 1;
#line 660 "cse_detection.m"
                      break;
#line 660 "cse_detection.m"
                  }
#line 660 "cse_detection.m"
                  break;
#line 660 "cse_detection.m"
                case (MR_Integer) 1:
#line 1414 "check_hlds.cse_detection.c"
                  *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 1;
#line 660 "cse_detection.m"
                  break;
#line 660 "cse_detection.m"
              }
#line 660 "cse_detection.m"
              break;
#line 660 "cse_detection.m"
            case (MR_Integer) 1:
#line 660 "cse_detection.m"
#line 660 "cse_detection.m"
              switch (MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__3_3)) {
#line 660 "cse_detection.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 660 "cse_detection.m"
                case (MR_Integer) 0:
#line 660 "cse_detection.m"
#line 660 "cse_detection.m"
                  switch (MR_unmkbody(check_hlds__cse_detection__HeadVar__3_3)) {
#line 660 "cse_detection.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 660 "cse_detection.m"
                    case (MR_Integer) 0:
#line 660 "cse_detection.m"
                      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 2;
#line 660 "cse_detection.m"
                      break;
#line 660 "cse_detection.m"
                    case (MR_Integer) 1:
#line 660 "cse_detection.m"
                      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 660 "cse_detection.m"
                      break;
#line 660 "cse_detection.m"
                  }
#line 660 "cse_detection.m"
                  break;
#line 660 "cse_detection.m"
                case (MR_Integer) 1:
#line 1454 "check_hlds.cse_detection.c"
                  *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 2;
#line 660 "cse_detection.m"
                  break;
#line 660 "cse_detection.m"
              }
#line 660 "cse_detection.m"
              break;
#line 660 "cse_detection.m"
          }
#line 660 "cse_detection.m"
          break;
#line 660 "cse_detection.m"
        case (MR_Integer) 1:
#line 660 "cse_detection.m"
          {
#line 660 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 660 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 660 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));

#line 660 "cse_detection.m"
#line 660 "cse_detection.m"
            switch (MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__3_3)) {
#line 660 "cse_detection.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 660 "cse_detection.m"
              case (MR_Integer) 0:
#line 660 "cse_detection.m"
#line 660 "cse_detection.m"
                switch (MR_unmkbody(check_hlds__cse_detection__HeadVar__3_3)) {
#line 660 "cse_detection.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 660 "cse_detection.m"
                  case (MR_Integer) 0:
#line 1491 "check_hlds.cse_detection.c"
                    *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 2;
#line 660 "cse_detection.m"
                    break;
#line 660 "cse_detection.m"
                  case (MR_Integer) 1:
#line 1497 "check_hlds.cse_detection.c"
                    *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 1;
#line 660 "cse_detection.m"
                    break;
#line 660 "cse_detection.m"
                }
#line 660 "cse_detection.m"
                break;
#line 660 "cse_detection.m"
              case (MR_Integer) 1:
#line 660 "cse_detection.m"
                {
#line 660 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 660 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 660 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 2)));
#line 660 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_16_16;

#line 660 "cse_detection.m"
                  {
#line 660 "cse_detection.m"
                    hlds__hlds_goal____Compare____hlds_goal_0_0(&check_hlds__cse_detection__V_16_16, check_hlds__cse_detection__V_31_31, check_hlds__cse_detection__V_13_13);
                  }
#line 1523 "check_hlds.cse_detection.c"
                  check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_16_16 == (MR_Integer) 0);
#line 660 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 660 "cse_detection.m"
                  if (check_hlds__cse_detection__succeeded)
#line 660 "cse_detection.m"
                    *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_16_16;
#line 660 "cse_detection.m"
                  else
#line 660 "cse_detection.m"
                    {
#line 660 "cse_detection.m"
                      MR_Word check_hlds__cse_detection__V_17_17;

#line 660 "cse_detection.m"
                      {
#line 660 "cse_detection.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[3], &check_hlds__cse_detection__V_17_17, ((MR_Box) (check_hlds__cse_detection__V_30_30)), ((MR_Box) (check_hlds__cse_detection__V_14_14)));
                      }
#line 1543 "check_hlds.cse_detection.c"
                      check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_17_17 == (MR_Integer) 0);
#line 660 "cse_detection.m"
                      check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 660 "cse_detection.m"
                      if (check_hlds__cse_detection__succeeded)
#line 660 "cse_detection.m"
                        *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_17_17;
#line 660 "cse_detection.m"
                      else
#line 660 "cse_detection.m"
                        {
#line 660 "cse_detection.m"
                          {
#line 660 "cse_detection.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[4], check_hlds__cse_detection__HeadVar__1_1, ((MR_Box) (check_hlds__cse_detection__V_29_29)), ((MR_Box) (check_hlds__cse_detection__V_15_15)));
#line 660 "cse_detection.m"
                            return;
                          }
#line 660 "cse_detection.m"
                        }
#line 660 "cse_detection.m"
                    }
#line 660 "cse_detection.m"
                }
#line 660 "cse_detection.m"
                break;
#line 660 "cse_detection.m"
            }
#line 660 "cse_detection.m"
          }
#line 660 "cse_detection.m"
          break;
#line 660 "cse_detection.m"
      }
#line 660 "cse_detection.m"
  }
#line 660 "cse_detection.m"
}

#line 660 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0(
#line 660 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 660 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2)
#line 660 "cse_detection.m"
{
#line 660 "cse_detection.m"
  {
#line 660 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 660 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastX_13 = (MR_Integer) check_hlds__cse_detection__HeadVar__1_1;
#line 660 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastY_14 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;

#line 660 "cse_detection.m"
    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastX_13 == check_hlds__cse_detection__CastY_14);
#line 660 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 660 "cse_detection.m"
      check_hlds__cse_detection__succeeded = MR_TRUE;
#line 660 "cse_detection.m"
    else
#line 660 "cse_detection.m"
#line 660 "cse_detection.m"
      switch (MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__1_1)) {
#line 660 "cse_detection.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 660 "cse_detection.m"
        case (MR_Integer) 0:
#line 660 "cse_detection.m"
#line 660 "cse_detection.m"
          switch (MR_unmkbody(check_hlds__cse_detection__HeadVar__1_1)) {
#line 660 "cse_detection.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 660 "cse_detection.m"
            case (MR_Integer) 0:
#line 660 "cse_detection.m"
              {
#line 660 "cse_detection.m"
                MR_Integer check_hlds__cse_detection__CastX_3 = (MR_Integer) check_hlds__cse_detection__HeadVar__1_1;
#line 660 "cse_detection.m"
                MR_Integer check_hlds__cse_detection__CastY_4 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;

#line 660 "cse_detection.m"
                check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastY_4 == check_hlds__cse_detection__CastX_3);
#line 660 "cse_detection.m"
              }
#line 660 "cse_detection.m"
              break;
#line 660 "cse_detection.m"
            case (MR_Integer) 1:
#line 660 "cse_detection.m"
              {
#line 660 "cse_detection.m"
                MR_Integer check_hlds__cse_detection__CastX_11 = (MR_Integer) check_hlds__cse_detection__HeadVar__1_1;
#line 660 "cse_detection.m"
                MR_Integer check_hlds__cse_detection__CastY_12 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;

#line 660 "cse_detection.m"
                check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastY_12 == check_hlds__cse_detection__CastX_11);
#line 660 "cse_detection.m"
              }
#line 660 "cse_detection.m"
              break;
#line 660 "cse_detection.m"
          }
#line 660 "cse_detection.m"
          break;
#line 660 "cse_detection.m"
        case (MR_Integer) 1:
#line 660 "cse_detection.m"
          {
#line 660 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeInfo_16_16;
#line 660 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeInfo_17_17;
#line 660 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 660 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 660 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 2)));
#line 660 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_8_8;
#line 660 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_9_9;
#line 660 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_10_10;

#line 660 "cse_detection.m"
            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 660 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 660 "cse_detection.m"
              {
#line 660 "cse_detection.m"
                check_hlds__cse_detection__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 660 "cse_detection.m"
                check_hlds__cse_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 660 "cse_detection.m"
                check_hlds__cse_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 1688 "check_hlds.cse_detection.c"
                {
#line 1690 "check_hlds.cse_detection.c"
                  check_hlds__cse_detection__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(check_hlds__cse_detection__V_5_5, check_hlds__cse_detection__V_8_8);
                }
#line 660 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 660 "cse_detection.m"
                  {
#line 1697 "check_hlds.cse_detection.c"
                    check_hlds__cse_detection__TypeInfo_16_16 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[3];
#line 1699 "check_hlds.cse_detection.c"
                    {
#line 1701 "check_hlds.cse_detection.c"
                      check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__cse_detection__TypeInfo_16_16, ((MR_Box) (check_hlds__cse_detection__V_6_6)), ((MR_Box) (check_hlds__cse_detection__V_9_9)));
                    }
#line 660 "cse_detection.m"
                    if (check_hlds__cse_detection__succeeded)
#line 660 "cse_detection.m"
                      {
#line 1708 "check_hlds.cse_detection.c"
                        check_hlds__cse_detection__TypeInfo_17_17 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[4];
#line 1710 "check_hlds.cse_detection.c"
                        {
#line 1712 "check_hlds.cse_detection.c"
                          return check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__cse_detection__TypeInfo_17_17, ((MR_Box) (check_hlds__cse_detection__V_7_7)), ((MR_Box) (check_hlds__cse_detection__V_10_10)));
                        }
#line 660 "cse_detection.m"
                      }
#line 660 "cse_detection.m"
                  }
#line 660 "cse_detection.m"
              }
#line 660 "cse_detection.m"
          }
#line 660 "cse_detection.m"
          break;
#line 660 "cse_detection.m"
      }
#line 660 "cse_detection.m"
    return check_hlds__cse_detection__succeeded;
#line 660 "cse_detection.m"
  }
#line 660 "cse_detection.m"
}

#line 238 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0(
#line 238 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__1_1,
#line 238 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 238 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3)
#line 238 "cse_detection.m"
{
#line 238 "cse_detection.m"
  {
#line 238 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 238 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastX_15 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;
#line 238 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastY_16 = (MR_Integer) check_hlds__cse_detection__HeadVar__3_3;

#line 238 "cse_detection.m"
    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastX_15 == check_hlds__cse_detection__CastY_16);
#line 238 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 1758 "check_hlds.cse_detection.c"
      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 238 "cse_detection.m"
    else
#line 238 "cse_detection.m"
      {
#line 238 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 238 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 238 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 238 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 3)));
#line 238 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 238 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 238 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 2)));
#line 238 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 3)));
#line 238 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_12_12;

#line 238 "cse_detection.m"
        {
#line 238 "cse_detection.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[2], &check_hlds__cse_detection__V_12_12, ((MR_Box) (check_hlds__cse_detection__V_4_4)), ((MR_Box) (check_hlds__cse_detection__V_8_8)));
        }
#line 1788 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_12_12 == (MR_Integer) 0);
#line 238 "cse_detection.m"
        check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 238 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 238 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_12_12;
#line 238 "cse_detection.m"
        else
#line 238 "cse_detection.m"
          {
#line 238 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_13_13;

#line 238 "cse_detection.m"
            {
#line 238 "cse_detection.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_2[3], &check_hlds__cse_detection__V_13_13, ((MR_Box) (check_hlds__cse_detection__V_5_5)), ((MR_Box) (check_hlds__cse_detection__V_9_9)));
            }
#line 1808 "check_hlds.cse_detection.c"
            check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_13_13 == (MR_Integer) 0);
#line 238 "cse_detection.m"
            check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 238 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 238 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_13_13;
#line 238 "cse_detection.m"
            else
#line 238 "cse_detection.m"
              {
#line 238 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_14_14;

#line 238 "cse_detection.m"
                {
#line 238 "cse_detection.m"
                  hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&check_hlds__cse_detection__V_14_14, check_hlds__cse_detection__V_6_6, check_hlds__cse_detection__V_10_10);
                }
#line 1828 "check_hlds.cse_detection.c"
                check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_14_14 == (MR_Integer) 0);
#line 238 "cse_detection.m"
                check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 238 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 238 "cse_detection.m"
                  *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_14_14;
#line 238 "cse_detection.m"
                else
#line 238 "cse_detection.m"
                  {
#line 238 "cse_detection.m"
                    hlds__hlds_module____Compare____module_info_0_0(check_hlds__cse_detection__HeadVar__1_1, check_hlds__cse_detection__V_7_7, check_hlds__cse_detection__V_11_11);
#line 238 "cse_detection.m"
                    return;
                  }
#line 238 "cse_detection.m"
              }
#line 238 "cse_detection.m"
          }
#line 238 "cse_detection.m"
      }
#line 238 "cse_detection.m"
  }
#line 238 "cse_detection.m"
}

#line 238 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0(
#line 238 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 238 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2)
#line 238 "cse_detection.m"
{
#line 238 "cse_detection.m"
  {
#line 238 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 238 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastX_11 = (MR_Integer) check_hlds__cse_detection__HeadVar__1_1;
#line 238 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastY_12 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;

#line 238 "cse_detection.m"
    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastX_11 == check_hlds__cse_detection__CastY_12);
#line 238 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 238 "cse_detection.m"
      check_hlds__cse_detection__succeeded = MR_TRUE;
#line 238 "cse_detection.m"
    else
#line 238 "cse_detection.m"
      {
#line 238 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfo_14_14;
#line 238 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 238 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 238 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 2)));
#line 238 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 3)));
#line 238 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 238 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 238 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 238 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 3)));

#line 1903 "check_hlds.cse_detection.c"
        {
#line 1905 "check_hlds.cse_detection.c"
          check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[2], ((MR_Box) (check_hlds__cse_detection__V_3_3)), ((MR_Box) (check_hlds__cse_detection__V_7_7)));
        }
#line 238 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 238 "cse_detection.m"
          {
#line 1912 "check_hlds.cse_detection.c"
            check_hlds__cse_detection__TypeInfo_14_14 = (MR_Word) &check_hlds__cse_detection_scalar_common_2[3];
#line 1914 "check_hlds.cse_detection.c"
            {
#line 1916 "check_hlds.cse_detection.c"
              check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__cse_detection__TypeInfo_14_14, ((MR_Box) (check_hlds__cse_detection__V_4_4)), ((MR_Box) (check_hlds__cse_detection__V_8_8)));
            }
#line 238 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 238 "cse_detection.m"
              {
#line 1923 "check_hlds.cse_detection.c"
                {
#line 1925 "check_hlds.cse_detection.c"
                  check_hlds__cse_detection__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(check_hlds__cse_detection__V_5_5, check_hlds__cse_detection__V_9_9);
                }
#line 238 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 1930 "check_hlds.cse_detection.c"
                  {
#line 1932 "check_hlds.cse_detection.c"
                    return check_hlds__cse_detection__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__cse_detection__V_6_6, check_hlds__cse_detection__V_10_10);
                  }
#line 238 "cse_detection.m"
              }
#line 238 "cse_detection.m"
          }
#line 238 "cse_detection.m"
      }
#line 238 "cse_detection.m"
    return check_hlds__cse_detection__succeeded;
#line 238 "cse_detection.m"
  }
#line 238 "cse_detection.m"
}

#line 950 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_merged_tvars_6_p_0(
#line 950 "cse_detection.m"
  MR_Word check_hlds__cse_detection__RttiVarMaps_7,
#line 950 "cse_detection.m"
  MR_Word check_hlds__cse_detection__LaterOldNewMap_8,
#line 950 "cse_detection.m"
  MR_Word check_hlds__cse_detection__NewTvarMap_9,
#line 950 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Tvar_10,
#line 950 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17,
#line 950 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_Renaming_18)
#line 950 "cse_detection.m"
{
#line 954 "cse_detection.m"
  {
#line 954 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 954 "cse_detection.m"
    MR_Word check_hlds__cse_detection__TypeInfoLocn0_12;
#line 954 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Old_13;
#line 965 "cse_detection.m"
    MR_Word check_hlds__cse_detection__New_14;
#line 957 "cse_detection.m"
    MR_Word check_hlds__cse_detection__TypeInfo_20_20;
#line 957 "cse_detection.m"
    MR_Box check_hlds__cse_detection__conv0_New_14;

#line 955 "cse_detection.m"
    {
#line 955 "cse_detection.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(check_hlds__cse_detection__RttiVarMaps_7, check_hlds__cse_detection__Tvar_10, &check_hlds__cse_detection__TypeInfoLocn0_12);
    }
#line 956 "cse_detection.m"
    {
#line 956 "cse_detection.m"
      hlds__hlds_rtti__type_info_locn_var_2_p_0(check_hlds__cse_detection__TypeInfoLocn0_12, &check_hlds__cse_detection__Old_13);
    }
#line 1990 "check_hlds.cse_detection.c"
    check_hlds__cse_detection__TypeInfo_20_20 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
#line 957 "cse_detection.m"
    {
#line 957 "cse_detection.m"
      check_hlds__cse_detection__succeeded = mercury__map__search_3_p_0(check_hlds__cse_detection__TypeInfo_20_20, check_hlds__cse_detection__TypeInfo_20_20, check_hlds__cse_detection__LaterOldNewMap_8, ((MR_Box) (check_hlds__cse_detection__Old_13)), &check_hlds__cse_detection__conv0_New_14);
    }
#line 957 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 957 "cse_detection.m"
      {
#line 957 "cse_detection.m"
        check_hlds__cse_detection__New_14 = ((MR_Word) check_hlds__cse_detection__conv0_New_14);
#line 957 "cse_detection.m"
        check_hlds__cse_detection__succeeded = MR_TRUE;
#line 957 "cse_detection.m"
      }
#line 965 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 958 "cse_detection.m"
      {
#line 958 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfo_22_22;
#line 958 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfoLocn_15;
#line 958 "cse_detection.m"
        MR_Word check_hlds__cse_detection__NewTvar_16;
#line 959 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv1_NewTvar_16;

#line 958 "cse_detection.m"
        {
#line 958 "cse_detection.m"
          hlds__hlds_rtti__type_info_locn_set_var_3_p_0(check_hlds__cse_detection__New_14, check_hlds__cse_detection__TypeInfoLocn0_12, &check_hlds__cse_detection__TypeInfoLocn_15);
        }
#line 2025 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeInfo_22_22 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[1];
#line 959 "cse_detection.m"
        {
#line 959 "cse_detection.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, check_hlds__cse_detection__TypeInfo_22_22, check_hlds__cse_detection__NewTvarMap_9, ((MR_Box) (check_hlds__cse_detection__TypeInfoLocn_15)), &check_hlds__cse_detection__conv1_NewTvar_16);
        }
#line 959 "cse_detection.m"
        check_hlds__cse_detection__NewTvar_16 = ((MR_Word) check_hlds__cse_detection__conv1_NewTvar_16);
#line 960 "cse_detection.m"
        {
#line 960 "cse_detection.m"
          check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[1], ((MR_Box) (check_hlds__cse_detection__NewTvar_16)), ((MR_Box) (check_hlds__cse_detection__Tvar_10)));
        }
#line 962 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 962 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_Renaming_18 = check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17;
#line 962 "cse_detection.m"
        else
#line 963 "cse_detection.m"
          {
#line 963 "cse_detection.m"
            mercury__map__det_insert_4_p_0(check_hlds__cse_detection__TypeInfo_22_22, check_hlds__cse_detection__TypeInfo_22_22, ((MR_Box) (check_hlds__cse_detection__Tvar_10)), ((MR_Box) (check_hlds__cse_detection__NewTvar_16)), check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17, check_hlds__cse_detection__STATE_VARIABLE_Renaming_18);
#line 963 "cse_detection.m"
            return;
          }
#line 958 "cse_detection.m"
      }
#line 965 "cse_detection.m"
    else
#line 965 "cse_detection.m"
      *check_hlds__cse_detection__STATE_VARIABLE_Renaming_18 = check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17;
#line 954 "cse_detection.m"
  }
#line 950 "cse_detection.m"
}

#line 936 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_type_info_locn_tvar_map_5_p_0(
#line 936 "cse_detection.m"
  MR_Word check_hlds__cse_detection__RttiVarMaps_6,
#line 936 "cse_detection.m"
  MR_Word check_hlds__cse_detection__FirstOldNewMap_7,
#line 936 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Tvar_8,
#line 936 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_0_14,
#line 936 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_15)
#line 936 "cse_detection.m"
{
#line 940 "cse_detection.m"
  {
#line 940 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 940 "cse_detection.m"
    MR_Word check_hlds__cse_detection__TypeInfoLocn0_10;
#line 940 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Old_11;
#line 946 "cse_detection.m"
    MR_Word check_hlds__cse_detection__New_12;
#line 943 "cse_detection.m"
    MR_Word check_hlds__cse_detection__TypeInfo_17_17;
#line 943 "cse_detection.m"
    MR_Box check_hlds__cse_detection__conv0_New_12;

#line 941 "cse_detection.m"
    {
#line 941 "cse_detection.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(check_hlds__cse_detection__RttiVarMaps_6, check_hlds__cse_detection__Tvar_8, &check_hlds__cse_detection__TypeInfoLocn0_10);
    }
#line 942 "cse_detection.m"
    {
#line 942 "cse_detection.m"
      hlds__hlds_rtti__type_info_locn_var_2_p_0(check_hlds__cse_detection__TypeInfoLocn0_10, &check_hlds__cse_detection__Old_11);
    }
#line 2103 "check_hlds.cse_detection.c"
    check_hlds__cse_detection__TypeInfo_17_17 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
#line 943 "cse_detection.m"
    {
#line 943 "cse_detection.m"
      check_hlds__cse_detection__succeeded = mercury__map__search_3_p_0(check_hlds__cse_detection__TypeInfo_17_17, check_hlds__cse_detection__TypeInfo_17_17, check_hlds__cse_detection__FirstOldNewMap_7, ((MR_Box) (check_hlds__cse_detection__Old_11)), &check_hlds__cse_detection__conv0_New_12);
    }
#line 943 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 943 "cse_detection.m"
      {
#line 943 "cse_detection.m"
        check_hlds__cse_detection__New_12 = ((MR_Word) check_hlds__cse_detection__conv0_New_12);
#line 943 "cse_detection.m"
        check_hlds__cse_detection__succeeded = MR_TRUE;
#line 943 "cse_detection.m"
      }
#line 946 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 944 "cse_detection.m"
      {
#line 944 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfoLocn_13;

#line 944 "cse_detection.m"
        {
#line 944 "cse_detection.m"
          hlds__hlds_rtti__type_info_locn_set_var_3_p_0(check_hlds__cse_detection__New_12, check_hlds__cse_detection__TypeInfoLocn0_10, &check_hlds__cse_detection__TypeInfoLocn_13);
        }
#line 945 "cse_detection.m"
        {
#line 945 "cse_detection.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, (MR_Word) &check_hlds__cse_detection_scalar_common_1[1], ((MR_Box) (check_hlds__cse_detection__TypeInfoLocn_13)), ((MR_Box) (check_hlds__cse_detection__Tvar_8)), check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_0_14, check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_15);
#line 945 "cse_detection.m"
          return;
        }
#line 944 "cse_detection.m"
      }
#line 946 "cse_detection.m"
    else
#line 946 "cse_detection.m"
      *check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_15 = check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_0_14;
#line 940 "cse_detection.m"
  }
#line 936 "cse_detection.m"
}

#line 922 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_2(
#line 922 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 922 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 922 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 922 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3)
#line 922 "cse_detection.m"
{
#line 922 "cse_detection.m"
  {
#line 922 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 922 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv2_STATE_VARIABLE_Renaming_18;

#line 922 "cse_detection.m"
    {
#line 922 "cse_detection.m"
      check_hlds__cse_detection__find_merged_tvars_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv2_STATE_VARIABLE_Renaming_18);
    }
#line 922 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv2_STATE_VARIABLE_Renaming_18));
#line 922 "cse_detection.m"
  }
#line 922 "cse_detection.m"
}

#line 915 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_1(
#line 915 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 915 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 915 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 915 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3)
#line 915 "cse_detection.m"
{
#line 915 "cse_detection.m"
  {
#line 915 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 915 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv0_STATE_VARIABLE_NewTvarMap_15;

#line 915 "cse_detection.m"
    {
#line 915 "cse_detection.m"
      check_hlds__cse_detection__find_type_info_locn_tvar_map_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv0_STATE_VARIABLE_NewTvarMap_15);
    }
#line 915 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv0_STATE_VARIABLE_NewTvarMap_15));
#line 915 "cse_detection.m"
  }
#line 915 "cse_detection.m"
}

#line 879 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(
#line 879 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Unify_6,
#line 879 "cse_detection.m"
  MR_Word check_hlds__cse_detection__FirstOldNew_7,
#line 879 "cse_detection.m"
  MR_Word check_hlds__cse_detection__LaterOldNew_8,
#line 879 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25,
#line 879 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26)
#line 879 "cse_detection.m"
{
#line 894 "cse_detection.m"
  {
#line 894 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 886 "cse_detection.m"
    MR_Word check_hlds__cse_detection__UnifyInfo_13;
#line 886 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Var_16;
#line 886 "cse_detection.m"
    MR_Word check_hlds__cse_detection__ConsId_17;
#line 886 "cse_detection.m"
    MR_Word check_hlds__cse_detection__ModuleInfo_22;
#line 886 "cse_detection.m"
    MR_Word check_hlds__cse_detection__VarTypes_23;
#line 886 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Type_24;
#line 886 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Unify_6, (MR_Integer) 0)));
#line 886 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Unify_6, (MR_Integer) 1)));
#line 886 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_10_10;
#line 886 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_11_11;
#line 886 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_12_12;
#line 886 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_14_14;
#line 887 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_18_18;
#line 887 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_19_19;
#line 887 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_20_20;
#line 887 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_21_21;
#line 888 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_29_29;
#line 888 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_31_31;

#line 886 "cse_detection.m"
    check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 886 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 886 "cse_detection.m"
      {
#line 886 "cse_detection.m"
        check_hlds__cse_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 0)));
#line 886 "cse_detection.m"
        check_hlds__cse_detection__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 1)));
#line 886 "cse_detection.m"
        check_hlds__cse_detection__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 2)));
#line 886 "cse_detection.m"
        check_hlds__cse_detection__UnifyInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 3)));
#line 886 "cse_detection.m"
        check_hlds__cse_detection__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 4)));
#line 887 "cse_detection.m"
        check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__UnifyInfo_13)) == (MR_mktag((MR_Integer) 1)));
#line 887 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 887 "cse_detection.m"
          {
#line 887 "cse_detection.m"
            check_hlds__cse_detection__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 0)));
#line 887 "cse_detection.m"
            check_hlds__cse_detection__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 1)));
#line 887 "cse_detection.m"
            check_hlds__cse_detection__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 2)));
#line 887 "cse_detection.m"
            check_hlds__cse_detection__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 3)));
#line 887 "cse_detection.m"
            check_hlds__cse_detection__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 4)));
#line 887 "cse_detection.m"
            check_hlds__cse_detection__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 5)));
#line 888 "cse_detection.m"
            check_hlds__cse_detection__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 0)));
#line 888 "cse_detection.m"
            check_hlds__cse_detection__VarTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 1)));
#line 888 "cse_detection.m"
            check_hlds__cse_detection__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 2)));
#line 888 "cse_detection.m"
            check_hlds__cse_detection__ModuleInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 3)));
#line 890 "cse_detection.m"
            {
#line 890 "cse_detection.m"
              hlds__vartypes__lookup_var_type_3_p_0(check_hlds__cse_detection__VarTypes_23, check_hlds__cse_detection__Var_16, &check_hlds__cse_detection__Type_24);
            }
#line 891 "cse_detection.m"
            {
#line 891 "cse_detection.m"
              check_hlds__cse_detection__succeeded = check_hlds__type_util__cons_id_is_existq_cons_3_p_0(check_hlds__cse_detection__ModuleInfo_22, check_hlds__cse_detection__Type_24, check_hlds__cse_detection__ConsId_17);
            }
#line 887 "cse_detection.m"
          }
#line 886 "cse_detection.m"
      }
#line 894 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 902 "cse_detection.m"
      {
#line 902 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfo_43_73 = (MR_Word) &check_hlds__cse_detection_scalar_common_2[0];
#line 902 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfo_44_74;
#line 902 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfo_49_79;
#line 902 "cse_detection.m"
        MR_Word check_hlds__cse_detection__LaterOldNew_40;
#line 902 "cse_detection.m"
        MR_Word check_hlds__cse_detection__FirstOldNewMap_41;
#line 902 "cse_detection.m"
        MR_Word check_hlds__cse_detection__LaterOldNewMap_42;
#line 902 "cse_detection.m"
        MR_Word check_hlds__cse_detection__RttiVarMaps0_43;
#line 902 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarTypes0_44;
#line 902 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TvarsList_45;
#line 902 "cse_detection.m"
        MR_Word check_hlds__cse_detection__NewTvarMap_46;
#line 902 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Renaming_47;
#line 902 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OldNew_48;
#line 902 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OldNewMap_49;
#line 902 "cse_detection.m"
        MR_Word check_hlds__cse_detection__RttiVarMaps_50;
#line 902 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarTypes_51;
#line 902 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_52_52;
#line 902 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_53_53;
#line 902 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_54_54;
#line 902 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_55_55;
#line 902 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_56_56;
#line 902 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_65_65;
#line 902 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_68_68;
#line 907 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_59_59;
#line 907 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_61_61;
#line 915 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv1_NewTvarMap_46;
#line 922 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv3_Renaming_47;
#line 933 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_66_66;
#line 933 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_67_67;

#line 903 "cse_detection.m"
        {
#line 903 "cse_detection.m"
          mercury__list__condense_2_p_0(check_hlds__cse_detection__TypeInfo_43_73, check_hlds__cse_detection__LaterOldNew_8, &check_hlds__cse_detection__LaterOldNew_40);
        }
#line 2392 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeInfo_44_74 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
#line 904 "cse_detection.m"
        {
#line 904 "cse_detection.m"
          mercury__map__from_assoc_list_2_p_0(check_hlds__cse_detection__TypeInfo_44_74, check_hlds__cse_detection__TypeInfo_44_74, check_hlds__cse_detection__FirstOldNew_7, &check_hlds__cse_detection__FirstOldNewMap_41);
        }
#line 905 "cse_detection.m"
        {
#line 905 "cse_detection.m"
          mercury__map__from_assoc_list_2_p_0(check_hlds__cse_detection__TypeInfo_44_74, check_hlds__cse_detection__TypeInfo_44_74, check_hlds__cse_detection__LaterOldNew_40, &check_hlds__cse_detection__LaterOldNewMap_42);
        }
#line 907 "cse_detection.m"
        check_hlds__cse_detection__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 0)));
#line 907 "cse_detection.m"
        check_hlds__cse_detection__VarTypes0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 1)));
#line 907 "cse_detection.m"
        check_hlds__cse_detection__RttiVarMaps0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 2)));
#line 907 "cse_detection.m"
        check_hlds__cse_detection__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 3)));
#line 914 "cse_detection.m"
        {
#line 914 "cse_detection.m"
          hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(check_hlds__cse_detection__RttiVarMaps0_43, &check_hlds__cse_detection__TvarsList_45);
        }
#line 915 "cse_detection.m"
        {
#line 915 "cse_detection.m"
          check_hlds__cse_detection__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 915 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 0) = ((MR_Box) (&check_hlds__cse_detection_scalar_common_4[0]));
#line 915 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 1) = ((MR_Box) (check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_1));
#line 915 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 915 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 3) = ((MR_Box) (check_hlds__cse_detection__RttiVarMaps0_43));
#line 915 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 4) = ((MR_Box) (check_hlds__cse_detection__FirstOldNewMap_41));
#line 915 "cse_detection.m"
        }
#line 2433 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeInfo_49_79 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[1];
#line 916 "cse_detection.m"
        {
#line 916 "cse_detection.m"
          check_hlds__cse_detection__V_53_53 = mercury__map__init_0_f_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, check_hlds__cse_detection__TypeInfo_49_79);
        }
#line 915 "cse_detection.m"
        {
#line 915 "cse_detection.m"
          mercury__list__foldl_4_p_0(check_hlds__cse_detection__TypeInfo_49_79, (MR_Word) &check_hlds__cse_detection_scalar_common_2[1], check_hlds__cse_detection__V_52_52, check_hlds__cse_detection__TvarsList_45, ((MR_Box) (check_hlds__cse_detection__V_53_53)), &check_hlds__cse_detection__conv1_NewTvarMap_46);
        }
#line 915 "cse_detection.m"
        check_hlds__cse_detection__NewTvarMap_46 = ((MR_Word) check_hlds__cse_detection__conv1_NewTvarMap_46);
#line 922 "cse_detection.m"
        {
#line 922 "cse_detection.m"
          check_hlds__cse_detection__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 922 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 0) = ((MR_Box) (&check_hlds__cse_detection_scalar_common_5[0]));
#line 922 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 1) = ((MR_Box) (check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_2));
#line 922 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 922 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 3) = ((MR_Box) (check_hlds__cse_detection__RttiVarMaps0_43));
#line 922 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 4) = ((MR_Box) (check_hlds__cse_detection__LaterOldNewMap_42));
#line 922 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 5) = ((MR_Box) (check_hlds__cse_detection__NewTvarMap_46));
#line 922 "cse_detection.m"
        }
#line 923 "cse_detection.m"
        {
#line 923 "cse_detection.m"
          check_hlds__cse_detection__V_55_55 = mercury__map__init_0_f_0(check_hlds__cse_detection__TypeInfo_49_79, check_hlds__cse_detection__TypeInfo_49_79);
        }
#line 922 "cse_detection.m"
        {
#line 922 "cse_detection.m"
          mercury__list__foldl_4_p_0(check_hlds__cse_detection__TypeInfo_49_79, (MR_Word) &check_hlds__cse_detection_scalar_common_2[2], check_hlds__cse_detection__V_54_54, check_hlds__cse_detection__TvarsList_45, ((MR_Box) (check_hlds__cse_detection__V_55_55)), &check_hlds__cse_detection__conv3_Renaming_47);
        }
#line 922 "cse_detection.m"
        check_hlds__cse_detection__Renaming_47 = ((MR_Word) check_hlds__cse_detection__conv3_Renaming_47);
#line 927 "cse_detection.m"
        {
#line 927 "cse_detection.m"
          mercury__list__append_3_p_1(check_hlds__cse_detection__TypeInfo_43_73, check_hlds__cse_detection__FirstOldNew_7, check_hlds__cse_detection__LaterOldNew_40, &check_hlds__cse_detection__OldNew_48);
        }
#line 928 "cse_detection.m"
        {
#line 928 "cse_detection.m"
          mercury__map__from_assoc_list_2_p_0(check_hlds__cse_detection__TypeInfo_44_74, check_hlds__cse_detection__TypeInfo_44_74, check_hlds__cse_detection__OldNew_48, &check_hlds__cse_detection__OldNewMap_49);
        }
#line 929 "cse_detection.m"
        {
#line 929 "cse_detection.m"
          check_hlds__cse_detection__V_56_56 = mercury__map__init_0_f_0(check_hlds__cse_detection__TypeInfo_49_79, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        }
#line 929 "cse_detection.m"
        {
#line 929 "cse_detection.m"
          hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(check_hlds__cse_detection__Renaming_47, check_hlds__cse_detection__V_56_56, check_hlds__cse_detection__OldNewMap_49, check_hlds__cse_detection__RttiVarMaps0_43, &check_hlds__cse_detection__RttiVarMaps_50);
        }
#line 931 "cse_detection.m"
        {
#line 931 "cse_detection.m"
          hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0(check_hlds__cse_detection__Renaming_47, check_hlds__cse_detection__VarTypes0_44, &check_hlds__cse_detection__VarTypes_51);
        }
#line 933 "cse_detection.m"
        check_hlds__cse_detection__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 0)));
#line 933 "cse_detection.m"
        check_hlds__cse_detection__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 1)));
#line 933 "cse_detection.m"
        check_hlds__cse_detection__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 2)));
#line 933 "cse_detection.m"
        check_hlds__cse_detection__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 3)));
#line 934 "cse_detection.m"
        {
#line 934 "cse_detection.m"
          MR_Word base;
#line 934 "cse_detection.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 934 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26 = base;
#line 934 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__cse_detection__V_65_65));
#line 934 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__cse_detection__VarTypes_51));
#line 934 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__cse_detection__RttiVarMaps_50));
#line 934 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__cse_detection__V_68_68));
#line 934 "cse_detection.m"
        }
#line 902 "cse_detection.m"
      }
#line 894 "cse_detection.m"
    else
#line 894 "cse_detection.m"
      *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25;
#line 894 "cse_detection.m"
  }
#line 879 "cse_detection.m"
}

#line 795 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__pair_subterms_4_p_0(
#line 795 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 795 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 795 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3,
#line 795 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__4_4)
#line 795 "cse_detection.m"
{
#line 798 "cse_detection.m"
  {
#line 798 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 798 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 798 "cse_detection.m"
      *check_hlds__cse_detection__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 798 "cse_detection.m"
    else
#line 800 "cse_detection.m"
      {
#line 800 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OldVar_7;
#line 800 "cse_detection.m"
        MR_Word check_hlds__cse_detection__HoistedVar_8;
#line 800 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OldHoistedVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 800 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Replacements1_13;
#line 800 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));

#line 799 "cse_detection.m"
        check_hlds__cse_detection__OldVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_17_17, (MR_Integer) 0)));
#line 799 "cse_detection.m"
        check_hlds__cse_detection__HoistedVar_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_17_17, (MR_Integer) 1)));
#line 801 "cse_detection.m"
        {
#line 801 "cse_detection.m"
          check_hlds__cse_detection__pair_subterms_4_p_0(check_hlds__cse_detection__OldHoistedVars_9, check_hlds__cse_detection__HeadVar__2_2, check_hlds__cse_detection__HeadVar__3_3, &check_hlds__cse_detection__Replacements1_13);
        }
#line 802 "cse_detection.m"
        {
#line 802 "cse_detection.m"
          check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[0], ((MR_Box) (check_hlds__cse_detection__OldVar_7)), ((MR_Box) (check_hlds__cse_detection__HoistedVar_8)));
        }
#line 804 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 803 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__4_4 = check_hlds__cse_detection__Replacements1_13;
#line 804 "cse_detection.m"
        else
#line 805 "cse_detection.m"
          {
#line 805 "cse_detection.m"
            MR_Word check_hlds__cse_detection__MainCtxt_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 805 "cse_detection.m"
            MR_Word check_hlds__cse_detection__SubCtxt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 805 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goal_16;
#line 805 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_18_18;

#line 810 "cse_detection.m"
            {
#line 810 "cse_detection.m"
              check_hlds__cse_detection__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 810 "cse_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_18_18, 0) = ((MR_Box) (check_hlds__cse_detection__OldVar_7));
#line 810 "cse_detection.m"
            }
#line 810 "cse_detection.m"
            {
#line 810 "cse_detection.m"
              hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__cse_detection__HoistedVar_8, check_hlds__cse_detection__V_18_18, check_hlds__cse_detection__HeadVar__2_2, check_hlds__cse_detection__MainCtxt_14, check_hlds__cse_detection__SubCtxt_15, &check_hlds__cse_detection__Goal_16);
            }
#line 812 "cse_detection.m"
            {
#line 812 "cse_detection.m"
              MR_Word base;
#line 812 "cse_detection.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__4_4 = base;
#line 812 "cse_detection.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal_16));
#line 812 "cse_detection.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Replacements1_13));
#line 812 "cse_detection.m"
            }
#line 805 "cse_detection.m"
          }
#line 800 "cse_detection.m"
      }
#line 798 "cse_detection.m"
  }
#line 795 "cse_detection.m"
}

#line 771 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__find_similar_deconstruct_5_p_0(
#line 771 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HoistedUnifyGoal_6,
#line 771 "cse_detection.m"
  MR_Word check_hlds__cse_detection__OldUnifyGoal_7,
#line 771 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Context_8,
#line 771 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__OldHoistedVars_9,
#line 771 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Replacements_10)
#line 771 "cse_detection.m"
{
#line 791 "cse_detection.m"
  {
#line 791 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 791 "cse_detection.m"
    MR_Word check_hlds__cse_detection__OC_15;
#line 791 "cse_detection.m"
    MR_Word check_hlds__cse_detection__HoistedFunctor_18;
#line 791 "cse_detection.m"
    MR_Word check_hlds__cse_detection__HoistedVars_19;
#line 791 "cse_detection.m"
    MR_Word check_hlds__cse_detection__OldFunctor_30;
#line 791 "cse_detection.m"
    MR_Word check_hlds__cse_detection__OldVars_31;
#line 778 "cse_detection.m"
    MR_Word check_hlds__cse_detection__HoistedUnifyInfo_14;
#line 778 "cse_detection.m"
    MR_Word check_hlds__cse_detection__OldUnifyInfo_26;
#line 778 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HoistedUnifyGoal_6, (MR_Integer) 0)));
#line 778 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_38_38;
#line 778 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HoistedUnifyGoal_6, (MR_Integer) 1)));
#line 778 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_11_11;
#line 778 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_12_12;
#line 778 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_13_13;
#line 779 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_17_17;
#line 779 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_20_20;
#line 779 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_21_21;
#line 779 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_22_22;
#line 781 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_28_28;
#line 781 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_23_23;
#line 781 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_24_24;
#line 781 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_25_25;
#line 781 "cse_detection.m"
    MR_Word check_hlds__cse_detection___NC_27;
#line 782 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_29_29;
#line 782 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_32_32;
#line 782 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_33_33;
#line 782 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_34_34;

#line 778 "cse_detection.m"
    check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 778 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 778 "cse_detection.m"
      {
#line 778 "cse_detection.m"
        check_hlds__cse_detection__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 0)));
#line 778 "cse_detection.m"
        check_hlds__cse_detection__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 1)));
#line 778 "cse_detection.m"
        check_hlds__cse_detection__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 2)));
#line 778 "cse_detection.m"
        check_hlds__cse_detection__HoistedUnifyInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 3)));
#line 778 "cse_detection.m"
        check_hlds__cse_detection__OC_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 4)));
#line 779 "cse_detection.m"
        check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__HoistedUnifyInfo_14)) == (MR_mktag((MR_Integer) 1)));
#line 779 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 779 "cse_detection.m"
          {
#line 779 "cse_detection.m"
            check_hlds__cse_detection__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 0)));
#line 779 "cse_detection.m"
            check_hlds__cse_detection__HoistedFunctor_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 1)));
#line 779 "cse_detection.m"
            check_hlds__cse_detection__HoistedVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 2)));
#line 779 "cse_detection.m"
            check_hlds__cse_detection__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 3)));
#line 779 "cse_detection.m"
            check_hlds__cse_detection__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 4)));
#line 779 "cse_detection.m"
            check_hlds__cse_detection__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 5)));
#line 781 "cse_detection.m"
            check_hlds__cse_detection__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__OldUnifyGoal_7, (MR_Integer) 0)));
#line 781 "cse_detection.m"
            check_hlds__cse_detection__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__OldUnifyGoal_7, (MR_Integer) 1)));
#line 781 "cse_detection.m"
            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 781 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 781 "cse_detection.m"
              {
#line 781 "cse_detection.m"
                check_hlds__cse_detection__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 0)));
#line 781 "cse_detection.m"
                check_hlds__cse_detection__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 1)));
#line 781 "cse_detection.m"
                check_hlds__cse_detection__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 2)));
#line 781 "cse_detection.m"
                check_hlds__cse_detection__OldUnifyInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 3)));
#line 781 "cse_detection.m"
                check_hlds__cse_detection___NC_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 4)));
#line 782 "cse_detection.m"
                check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__OldUnifyInfo_26)) == (MR_mktag((MR_Integer) 1)));
#line 782 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 782 "cse_detection.m"
                  {
#line 782 "cse_detection.m"
                    check_hlds__cse_detection__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 0)));
#line 782 "cse_detection.m"
                    check_hlds__cse_detection__OldFunctor_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 1)));
#line 782 "cse_detection.m"
                    check_hlds__cse_detection__OldVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 2)));
#line 782 "cse_detection.m"
                    check_hlds__cse_detection__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 3)));
#line 782 "cse_detection.m"
                    check_hlds__cse_detection__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 4)));
#line 782 "cse_detection.m"
                    check_hlds__cse_detection__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 5)));
#line 782 "cse_detection.m"
                  }
#line 781 "cse_detection.m"
              }
#line 779 "cse_detection.m"
          }
#line 778 "cse_detection.m"
      }
#line 791 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 784 "cse_detection.m"
      {
#line 784 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfo_42_42;
#line 784 "cse_detection.m"
        MR_Integer check_hlds__cse_detection__HoistedVarsCount_35;
#line 784 "cse_detection.m"
        MR_Integer check_hlds__cse_detection__OldVarsCount_36;

#line 784 "cse_detection.m"
        {
#line 784 "cse_detection.m"
          check_hlds__cse_detection__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__cse_detection__HoistedFunctor_18, check_hlds__cse_detection__OldFunctor_30);
        }
#line 784 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 784 "cse_detection.m"
          {
#line 2815 "check_hlds.cse_detection.c"
            check_hlds__cse_detection__TypeInfo_42_42 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
#line 785 "cse_detection.m"
            {
#line 785 "cse_detection.m"
              mercury__list__length_2_p_0(check_hlds__cse_detection__TypeInfo_42_42, check_hlds__cse_detection__HoistedVars_19, &check_hlds__cse_detection__HoistedVarsCount_35);
            }
#line 786 "cse_detection.m"
            {
#line 786 "cse_detection.m"
              mercury__list__length_2_p_0(check_hlds__cse_detection__TypeInfo_42_42, check_hlds__cse_detection__OldVars_31, &check_hlds__cse_detection__OldVarsCount_36);
            }
#line 787 "cse_detection.m"
            check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__HoistedVarsCount_35 == check_hlds__cse_detection__OldVarsCount_36);
#line 784 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 784 "cse_detection.m"
              {
#line 788 "cse_detection.m"
                {
#line 788 "cse_detection.m"
                  mercury__assoc_list__from_corresponding_lists_3_p_0(check_hlds__cse_detection__TypeInfo_42_42, check_hlds__cse_detection__TypeInfo_42_42, check_hlds__cse_detection__OldVars_31, check_hlds__cse_detection__HoistedVars_19, check_hlds__cse_detection__OldHoistedVars_9);
                }
#line 790 "cse_detection.m"
                {
#line 790 "cse_detection.m"
                  check_hlds__cse_detection__pair_subterms_4_p_0(*check_hlds__cse_detection__OldHoistedVars_9, check_hlds__cse_detection__Context_8, check_hlds__cse_detection__OC_15, check_hlds__cse_detection__Replacements_10);
                }
#line 790 "cse_detection.m"
                check_hlds__cse_detection__succeeded = MR_TRUE;
#line 784 "cse_detection.m"
              }
#line 784 "cse_detection.m"
          }
#line 784 "cse_detection.m"
      }
#line 791 "cse_detection.m"
    else
#line 792 "cse_detection.m"
      {
#line 792 "cse_detection.m"
        {
#line 792 "cse_detection.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.find_similar_deconstruct\'/5", (MR_String) "non-deconstruct unify");
        }
#line 792 "cse_detection.m"
        check_hlds__cse_detection__succeeded = MR_TRUE;
#line 792 "cse_detection.m"
      }
#line 791 "cse_detection.m"
    return check_hlds__cse_detection__succeeded;
#line 791 "cse_detection.m"
  }
#line 771 "cse_detection.m"
}

#line 733 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__create_parallel_subterms_7_p_0(
#line 733 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 733 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Context_2,
#line 733 "cse_detection.m"
  MR_Word check_hlds__cse_detection__UnifyContext_3,
#line 733 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_4,
#line 733 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_5,
#line 733 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6,
#line 733 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7)
#line 733 "cse_detection.m"
{
#line 737 "cse_detection.m"
  {
#line 737 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 737 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 737 "cse_detection.m"
      {
#line 737 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 737 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 737 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_5 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_4;
#line 737 "cse_detection.m"
      }
#line 737 "cse_detection.m"
    else
#line 739 "cse_detection.m"
      {
#line 739 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OFV_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 739 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OFV0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 739 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OldNewVars1_20;
#line 739 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Replacements1_21;
#line 739 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_22;
#line 739 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25;
#line 739 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarSet0_37;
#line 739 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarTypes0_38;
#line 739 "cse_detection.m"
        MR_Word check_hlds__cse_detection__NFV_39;
#line 739 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarSet_40;
#line 739 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Type_41;
#line 739 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarTypes_42;
#line 739 "cse_detection.m"
        MR_Word check_hlds__cse_detection__MainCtxt_43;
#line 739 "cse_detection.m"
        MR_Word check_hlds__cse_detection__SubCtxt_44;
#line 739 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_46_46;
#line 739 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_47_47;
#line 739 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_58_58;
#line 739 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_59_59;
#line 753 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_51_51;
#line 753 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_52_52;
#line 766 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_56_56;
#line 766 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_57_57;

#line 740 "cse_detection.m"
        {
#line 740 "cse_detection.m"
          check_hlds__cse_detection__create_parallel_subterms_7_p_0(check_hlds__cse_detection__OFV0_14, check_hlds__cse_detection__Context_2, check_hlds__cse_detection__UnifyContext_3, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_4, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, &check_hlds__cse_detection__OldNewVars1_20, &check_hlds__cse_detection__Replacements1_21);
        }
#line 753 "cse_detection.m"
        check_hlds__cse_detection__VarSet0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 0)));
#line 753 "cse_detection.m"
        check_hlds__cse_detection__VarTypes0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 1)));
#line 753 "cse_detection.m"
        check_hlds__cse_detection__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 2)));
#line 753 "cse_detection.m"
        check_hlds__cse_detection__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 3)));
#line 755 "cse_detection.m"
        {
#line 755 "cse_detection.m"
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__cse_detection__NFV_39, check_hlds__cse_detection__VarSet0_37, &check_hlds__cse_detection__VarSet_40);
        }
#line 756 "cse_detection.m"
        {
#line 756 "cse_detection.m"
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__cse_detection__VarTypes0_38, check_hlds__cse_detection__OFV_13, &check_hlds__cse_detection__Type_41);
        }
#line 757 "cse_detection.m"
        {
#line 757 "cse_detection.m"
          hlds__vartypes__add_var_type_4_p_0(check_hlds__cse_detection__NFV_39, check_hlds__cse_detection__Type_41, check_hlds__cse_detection__VarTypes0_38, &check_hlds__cse_detection__VarTypes_42);
        }
#line 758 "cse_detection.m"
        {
#line 758 "cse_detection.m"
          check_hlds__cse_detection__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 758 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_46_46, 0) = ((MR_Box) (check_hlds__cse_detection__OFV_13));
#line 758 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_46_46, 1) = ((MR_Box) (check_hlds__cse_detection__NFV_39));
#line 758 "cse_detection.m"
        }
#line 758 "cse_detection.m"
        {
#line 758 "cse_detection.m"
          MR_Word base;
#line 758 "cse_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__6_6 = base;
#line 758 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__V_46_46));
#line 758 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__OldNewVars1_20));
#line 758 "cse_detection.m"
        }
#line 759 "cse_detection.m"
        check_hlds__cse_detection__MainCtxt_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__UnifyContext_3, (MR_Integer) 0)));
#line 759 "cse_detection.m"
        check_hlds__cse_detection__SubCtxt_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__UnifyContext_3, (MR_Integer) 1)));
#line 764 "cse_detection.m"
        {
#line 764 "cse_detection.m"
          check_hlds__cse_detection__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 764 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_47_47, 0) = ((MR_Box) (check_hlds__cse_detection__NFV_39));
#line 764 "cse_detection.m"
        }
#line 764 "cse_detection.m"
        {
#line 764 "cse_detection.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__cse_detection__OFV_13, check_hlds__cse_detection__V_47_47, check_hlds__cse_detection__Context_2, check_hlds__cse_detection__MainCtxt_43, check_hlds__cse_detection__SubCtxt_44, &check_hlds__cse_detection__Goal_22);
        }
#line 766 "cse_detection.m"
        check_hlds__cse_detection__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 0)));
#line 766 "cse_detection.m"
        check_hlds__cse_detection__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 1)));
#line 766 "cse_detection.m"
        check_hlds__cse_detection__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 2)));
#line 766 "cse_detection.m"
        check_hlds__cse_detection__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 3)));
#line 767 "cse_detection.m"
        {
#line 767 "cse_detection.m"
          MR_Word base;
#line 767 "cse_detection.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 767 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_5 = base;
#line 767 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__cse_detection__VarSet_40));
#line 767 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__cse_detection__VarTypes_42));
#line 767 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__cse_detection__V_58_58));
#line 767 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__cse_detection__V_59_59));
#line 767 "cse_detection.m"
        }
#line 744 "cse_detection.m"
        {
#line 744 "cse_detection.m"
          MR_Word base;
#line 744 "cse_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__7_7 = base;
#line 744 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal_22));
#line 744 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Replacements1_21));
#line 744 "cse_detection.m"
        }
#line 739 "cse_detection.m"
      }
#line 737 "cse_detection.m"
  }
#line 733 "cse_detection.m"
}

#line 669 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(
#line 669 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Var_8,
#line 669 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_9,
#line 669 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goals_10,
#line 669 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22,
#line 669 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_23,
#line 669 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24,
#line 669 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25)
#line 669 "cse_detection.m"
{
#line 676 "cse_detection.m"
  {
#line 676 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 676 "cse_detection.m"
#line 676 "cse_detection.m"
    switch (MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22)) {
#line 676 "cse_detection.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 676 "cse_detection.m"
      case (MR_Integer) 0:
#line 676 "cse_detection.m"
#line 676 "cse_detection.m"
        switch (MR_unmkbody(check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22)) {
#line 676 "cse_detection.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 676 "cse_detection.m"
          case (MR_Integer) 0:
#line 676 "cse_detection.m"
            {
#line 676 "cse_detection.m"
              MR_Word check_hlds__cse_detection__OldNewVars_13;
#line 676 "cse_detection.m"
              MR_Word check_hlds__cse_detection__HoistedGoal_14;
#line 676 "cse_detection.m"
              MR_Word check_hlds__cse_detection__GoalExpr0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_9, (MR_Integer) 0)));
#line 676 "cse_detection.m"
              MR_Word check_hlds__cse_detection__GoalInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_9, (MR_Integer) 1)));
#line 729 "cse_detection.m"
              MR_Word check_hlds__cse_detection__RHS_47;
#line 729 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Umode_48;
#line 729 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Ucontext_50;
#line 729 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Consid_52;
#line 729 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Args_53;
#line 729 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Submodes_54;
#line 729 "cse_detection.m"
              MR_Word check_hlds__cse_detection__CanFail_55;
#line 729 "cse_detection.m"
              MR_Word check_hlds__cse_detection__CanCGC_56;
#line 710 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Unif0_49;
#line 710 "cse_detection.m"
              MR_Word check_hlds__cse_detection__V_46_46;
#line 711 "cse_detection.m"
              MR_Word check_hlds__cse_detection__V_51_51;

#line 710 "cse_detection.m"
              check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__GoalExpr0_43)) == (MR_mktag((MR_Integer) 1)));
#line 710 "cse_detection.m"
              if (check_hlds__cse_detection__succeeded)
#line 710 "cse_detection.m"
                {
#line 710 "cse_detection.m"
                  check_hlds__cse_detection__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_43, (MR_Integer) 0)));
#line 710 "cse_detection.m"
                  check_hlds__cse_detection__RHS_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_43, (MR_Integer) 1)));
#line 710 "cse_detection.m"
                  check_hlds__cse_detection__Umode_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_43, (MR_Integer) 2)));
#line 710 "cse_detection.m"
                  check_hlds__cse_detection__Unif0_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_43, (MR_Integer) 3)));
#line 710 "cse_detection.m"
                  check_hlds__cse_detection__Ucontext_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_43, (MR_Integer) 4)));
#line 711 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__Unif0_49)) == (MR_mktag((MR_Integer) 1)));
#line 711 "cse_detection.m"
                  if (check_hlds__cse_detection__succeeded)
#line 711 "cse_detection.m"
                    {
#line 711 "cse_detection.m"
                      check_hlds__cse_detection__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_49, (MR_Integer) 0)));
#line 711 "cse_detection.m"
                      check_hlds__cse_detection__Consid_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_49, (MR_Integer) 1)));
#line 711 "cse_detection.m"
                      check_hlds__cse_detection__Args_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_49, (MR_Integer) 2)));
#line 711 "cse_detection.m"
                      check_hlds__cse_detection__Submodes_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_49, (MR_Integer) 3)));
#line 711 "cse_detection.m"
                      check_hlds__cse_detection__CanFail_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_49, (MR_Integer) 4)));
#line 711 "cse_detection.m"
                      check_hlds__cse_detection__CanCGC_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_49, (MR_Integer) 5)));
#line 711 "cse_detection.m"
                    }
#line 710 "cse_detection.m"
                }
#line 729 "cse_detection.m"
              if (check_hlds__cse_detection__succeeded)
#line 713 "cse_detection.m"
                {
#line 713 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__TypeInfo_53_82;
#line 713 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__Unif_57;
#line 713 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__GoalExpr1_61;
#line 713 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__Context_72;
#line 713 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__Sub_73;
#line 713 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_78_78;

#line 713 "cse_detection.m"
                  {
#line 713 "cse_detection.m"
                    check_hlds__cse_detection__Unif_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 713 "cse_detection.m"
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_57, 0) = ((MR_Box) (check_hlds__cse_detection__Var_8));
#line 713 "cse_detection.m"
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_57, 1) = ((MR_Box) (check_hlds__cse_detection__Consid_52));
#line 713 "cse_detection.m"
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_57, 2) = ((MR_Box) (check_hlds__cse_detection__Args_53));
#line 713 "cse_detection.m"
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_57, 3) = ((MR_Box) (check_hlds__cse_detection__Submodes_54));
#line 713 "cse_detection.m"
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_57, 4) = ((MR_Box) (check_hlds__cse_detection__CanFail_55));
#line 713 "cse_detection.m"
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_57, 5) = ((MR_Box) (check_hlds__cse_detection__CanCGC_56));
#line 713 "cse_detection.m"
                  }
#line 717 "cse_detection.m"
#line 717 "cse_detection.m"
                  switch (MR_tag((MR_Word) check_hlds__cse_detection__RHS_47)) {
#line 717 "cse_detection.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 717 "cse_detection.m"
                    case (MR_Integer) 0:
#line 717 "cse_detection.m"
                    case (MR_Integer) 2:
#line 720 "cse_detection.m"
                      {
#line 721 "cse_detection.m"
                        {
#line 721 "cse_detection.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.construct_common_unify\'/7", (MR_String) "non-functor unify");
#line 721 "cse_detection.m"
                          return;
                        }
#line 720 "cse_detection.m"
                      }
#line 717 "cse_detection.m"
                      break;
#line 717 "cse_detection.m"
                    case (MR_Integer) 1:
#line 716 "cse_detection.m"
                      {
#line 716 "cse_detection.m"
                        check_hlds__cse_detection__GoalExpr1_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 716 "cse_detection.m"
                        MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_61, 0) = ((MR_Box) (check_hlds__cse_detection__Var_8));
#line 716 "cse_detection.m"
                        MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_61, 1) = ((MR_Box) (check_hlds__cse_detection__RHS_47));
#line 716 "cse_detection.m"
                        MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_61, 2) = ((MR_Box) (check_hlds__cse_detection__Umode_48));
#line 716 "cse_detection.m"
                        MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_61, 3) = ((MR_Box) (check_hlds__cse_detection__Unif_57));
#line 716 "cse_detection.m"
                        MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_61, 4) = ((MR_Box) (check_hlds__cse_detection__Ucontext_50));
#line 716 "cse_detection.m"
                      }
#line 717 "cse_detection.m"
                      break;
#line 717 "cse_detection.m"
                  }
#line 723 "cse_detection.m"
                  {
#line 723 "cse_detection.m"
                    check_hlds__cse_detection__Context_72 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__cse_detection__GoalInfo_44);
                  }
#line 724 "cse_detection.m"
                  {
#line 724 "cse_detection.m"
                    check_hlds__cse_detection__create_parallel_subterms_7_p_0(check_hlds__cse_detection__Args_53, check_hlds__cse_detection__Context_72, check_hlds__cse_detection__Ucontext_50, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25, &check_hlds__cse_detection__OldNewVars_13, check_hlds__cse_detection__Goals_10);
                  }
#line 3270 "check_hlds.cse_detection.c"
                  check_hlds__cse_detection__TypeInfo_53_82 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
#line 726 "cse_detection.m"
                  {
#line 726 "cse_detection.m"
                    mercury__map__from_assoc_list_2_p_0(check_hlds__cse_detection__TypeInfo_53_82, check_hlds__cse_detection__TypeInfo_53_82, check_hlds__cse_detection__OldNewVars_13, &check_hlds__cse_detection__Sub_73);
                  }
#line 727 "cse_detection.m"
                  {
#line 727 "cse_detection.m"
                    check_hlds__cse_detection__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 727 "cse_detection.m"
                    MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_78_78, 0) = ((MR_Box) (check_hlds__cse_detection__GoalExpr1_61));
#line 727 "cse_detection.m"
                    MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_78_78, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_44));
#line 727 "cse_detection.m"
                  }
#line 727 "cse_detection.m"
                  {
#line 727 "cse_detection.m"
                    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(check_hlds__cse_detection__Sub_73, check_hlds__cse_detection__V_78_78, &check_hlds__cse_detection__HoistedGoal_14);
                  }
#line 713 "cse_detection.m"
                }
#line 729 "cse_detection.m"
              else
#line 730 "cse_detection.m"
                {
#line 730 "cse_detection.m"
                  {
#line 730 "cse_detection.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.construct_common_unify\'/7", (MR_String) "non-unify goal");
#line 730 "cse_detection.m"
                    return;
                  }
#line 730 "cse_detection.m"
                }
#line 679 "cse_detection.m"
              {
#line 679 "cse_detection.m"
                MR_Word base;
#line 679 "cse_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 679 "cse_detection.m"
                *check_hlds__cse_detection__STATE_VARIABLE_CseState_23 = base;
#line 679 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__HoistedGoal_14));
#line 679 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__OldNewVars_13));
#line 679 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 679 "cse_detection.m"
              }
#line 676 "cse_detection.m"
            }
#line 676 "cse_detection.m"
            break;
#line 676 "cse_detection.m"
          case (MR_Integer) 1:
#line 698 "cse_detection.m"
            {
#line 699 "cse_detection.m"
              {
#line 699 "cse_detection.m"
                MR_Word base;
#line 699 "cse_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "cse_detection.m"
                *check_hlds__cse_detection__Goals_10 = base;
#line 699 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal0_9));
#line 699 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 699 "cse_detection.m"
              }
#line 700 "cse_detection.m"
              *check_hlds__cse_detection__STATE_VARIABLE_CseState_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 698 "cse_detection.m"
              *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24;
#line 698 "cse_detection.m"
            }
#line 676 "cse_detection.m"
            break;
#line 676 "cse_detection.m"
        }
#line 676 "cse_detection.m"
        break;
#line 676 "cse_detection.m"
      case (MR_Integer) 1:
#line 682 "cse_detection.m"
        {
#line 682 "cse_detection.m"
          MR_Word check_hlds__cse_detection__FirstOldNewVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22, (MR_Integer) 1)));
#line 682 "cse_detection.m"
          MR_Word check_hlds__cse_detection__LaterOldNewVars0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22, (MR_Integer) 2)));
#line 682 "cse_detection.m"
          MR_Word check_hlds__cse_detection__GoalInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_9, (MR_Integer) 1)));
#line 682 "cse_detection.m"
          MR_Word check_hlds__cse_detection__Context_19;
#line 682 "cse_detection.m"
          MR_Word check_hlds__cse_detection__HoistedGoal_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22, (MR_Integer) 0)));
#line 683 "cse_detection.m"
          MR_Word check_hlds__cse_detection__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_9, (MR_Integer) 0)));
#line 693 "cse_detection.m"
          MR_Word check_hlds__cse_detection__Goals0_20;
#line 693 "cse_detection.m"
          MR_Word check_hlds__cse_detection__OldNewVars_34;

#line 684 "cse_detection.m"
          {
#line 684 "cse_detection.m"
            check_hlds__cse_detection__Context_19 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__cse_detection__GoalInfo_18);
          }
#line 686 "cse_detection.m"
          {
#line 686 "cse_detection.m"
            check_hlds__cse_detection__succeeded = check_hlds__cse_detection__find_similar_deconstruct_5_p_0(check_hlds__cse_detection__HoistedGoal_36, check_hlds__cse_detection__Goal0_9, check_hlds__cse_detection__Context_19, &check_hlds__cse_detection__OldNewVars_34, &check_hlds__cse_detection__Goals0_20);
          }
#line 693 "cse_detection.m"
          if (check_hlds__cse_detection__succeeded)
#line 689 "cse_detection.m"
            {
#line 689 "cse_detection.m"
              MR_Word check_hlds__cse_detection__LaterOldNewVars_21;

#line 689 "cse_detection.m"
              *check_hlds__cse_detection__Goals_10 = check_hlds__cse_detection__Goals0_20;
#line 690 "cse_detection.m"
              {
#line 690 "cse_detection.m"
                check_hlds__cse_detection__LaterOldNewVars_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "cse_detection.m"
                MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNewVars_21, 0) = ((MR_Box) (check_hlds__cse_detection__OldNewVars_34));
#line 690 "cse_detection.m"
                MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNewVars_21, 1) = ((MR_Box) (check_hlds__cse_detection__LaterOldNewVars0_16));
#line 690 "cse_detection.m"
              }
#line 691 "cse_detection.m"
              {
#line 691 "cse_detection.m"
                MR_Word base;
#line 691 "cse_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 691 "cse_detection.m"
                *check_hlds__cse_detection__STATE_VARIABLE_CseState_23 = base;
#line 691 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__HoistedGoal_36));
#line 691 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__FirstOldNewVars_15));
#line 691 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__cse_detection__LaterOldNewVars_21));
#line 691 "cse_detection.m"
              }
#line 689 "cse_detection.m"
            }
#line 693 "cse_detection.m"
          else
#line 694 "cse_detection.m"
            {
#line 694 "cse_detection.m"
              {
#line 694 "cse_detection.m"
                MR_Word base;
#line 694 "cse_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "cse_detection.m"
                *check_hlds__cse_detection__Goals_10 = base;
#line 694 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal0_9));
#line 694 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 694 "cse_detection.m"
              }
#line 695 "cse_detection.m"
              *check_hlds__cse_detection__STATE_VARIABLE_CseState_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 694 "cse_detection.m"
            }
#line 682 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24;
#line 682 "cse_detection.m"
        }
#line 676 "cse_detection.m"
        break;
#line 676 "cse_detection.m"
    }
#line 676 "cse_detection.m"
  }
#line 669 "cse_detection.m"
}

#line 634 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0_1(
#line 634 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 634 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 634 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 634 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 634 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 634 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 634 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 634 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7)
#line 634 "cse_detection.m"
{
#line 634 "cse_detection.m"
  {
#line 634 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 634 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv2_Goals_10;
#line 634 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23;
#line 634 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25;

#line 634 "cse_detection.m"
    {
#line 634 "cse_detection.m"
      check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv2_Goals_10, ((MR_Word) check_hlds__cse_detection__wrapper_arg_4), &check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23, ((MR_Word) check_hlds__cse_detection__wrapper_arg_6), &check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25);
    }
#line 634 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv2_Goals_10));
#line 634 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23));
#line 634 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_7 = ((MR_Box) (check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25));
#line 634 "cse_detection.m"
  }
#line 634 "cse_detection.m"
}

#line 626 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(
#line 626 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 626 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 626 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3,
#line 626 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_4,
#line 626 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 626 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 626 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7)
#line 626 "cse_detection.m"
{
#line 630 "cse_detection.m"
  {
#line 630 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 630 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 630 "cse_detection.m"
      {
#line 630 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 630 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5;
#line 630 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseState_4 = check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3;
#line 630 "cse_detection.m"
        check_hlds__cse_detection__succeeded = MR_TRUE;
#line 630 "cse_detection.m"
      }
#line 630 "cse_detection.m"
    else
#line 632 "cse_detection.m"
      {
#line 632 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Case0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 632 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Cases0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 632 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Case_20;
#line 632 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Cases_21;
#line 632 "cse_detection.m"
        MR_Word check_hlds__cse_detection__MainConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_15, (MR_Integer) 0)));
#line 632 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OtherConsIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_15, (MR_Integer) 1)));
#line 632 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_15, (MR_Integer) 2)));
#line 632 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_25;
#line 632 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34;
#line 632 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_35_35;
#line 632 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_48_48;
#line 634 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_34_34;
#line 634 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_35_35;
#line 637 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_26_26;
#line 637 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_27_27;
#line 637 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_28_28;

#line 634 "cse_detection.m"
        {
#line 634 "cse_detection.m"
          check_hlds__switch_detection__find_bind_var_9_p_0((MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0, (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0, check_hlds__cse_detection__HeadVar__2_2, (MR_Word) &check_hlds__cse_detection_scalar_common_2[7], check_hlds__cse_detection__Goal0_24, &check_hlds__cse_detection__Goal_25, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3)), &check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_34_34, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5)), &check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_35_35, &check_hlds__cse_detection__V_48_48);
        }
#line 634 "cse_detection.m"
        check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34 = ((MR_Word) check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_34_34);
#line 634 "cse_detection.m"
        check_hlds__cse_detection__STATE_VARIABLE_CseInfo_35_35 = ((MR_Word) check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_35_35);
#line 634 "cse_detection.m"
        check_hlds__cse_detection__succeeded = ((MR_Integer) 0 == check_hlds__cse_detection__V_48_48);
#line 632 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 632 "cse_detection.m"
          {
#line 637 "cse_detection.m"
            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 637 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 637 "cse_detection.m"
              {
#line 637 "cse_detection.m"
                check_hlds__cse_detection__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34, (MR_Integer) 0)));
#line 637 "cse_detection.m"
                check_hlds__cse_detection__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34, (MR_Integer) 1)));
#line 637 "cse_detection.m"
                check_hlds__cse_detection__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34, (MR_Integer) 2)));
#line 636 "cse_detection.m"
                {
#line 636 "cse_detection.m"
                  check_hlds__cse_detection__Case_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 636 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_20, 0) = ((MR_Box) (check_hlds__cse_detection__MainConsId_22));
#line 636 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_20, 1) = ((MR_Box) (check_hlds__cse_detection__OtherConsIds_23));
#line 636 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_20, 2) = ((MR_Box) (check_hlds__cse_detection__Goal_25));
#line 636 "cse_detection.m"
                }
#line 638 "cse_detection.m"
                {
#line 638 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(check_hlds__cse_detection__Cases0_16, check_hlds__cse_detection__HeadVar__2_2, check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34, check_hlds__cse_detection__STATE_VARIABLE_CseState_4, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_35_35, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6, &check_hlds__cse_detection__Cases_21);
                }
#line 632 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 632 "cse_detection.m"
                  {
#line 632 "cse_detection.m"
                    {
#line 632 "cse_detection.m"
                      MR_Word base;
#line 632 "cse_detection.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 632 "cse_detection.m"
                      *check_hlds__cse_detection__HeadVar__7_7 = base;
#line 632 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Case_20));
#line 632 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Cases_21));
#line 632 "cse_detection.m"
                    }
#line 632 "cse_detection.m"
                    check_hlds__cse_detection__succeeded = MR_TRUE;
#line 632 "cse_detection.m"
                  }
#line 637 "cse_detection.m"
              }
#line 632 "cse_detection.m"
          }
#line 632 "cse_detection.m"
      }
#line 630 "cse_detection.m"
    return check_hlds__cse_detection__succeeded;
#line 630 "cse_detection.m"
  }
#line 626 "cse_detection.m"
}

#line 609 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0_1(
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 609 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 609 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 609 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7)
#line 609 "cse_detection.m"
{
#line 609 "cse_detection.m"
  {
#line 609 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 609 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv2_Goals_10;
#line 609 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23;
#line 609 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25;

#line 609 "cse_detection.m"
    {
#line 609 "cse_detection.m"
      check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv2_Goals_10, ((MR_Word) check_hlds__cse_detection__wrapper_arg_4), &check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23, ((MR_Word) check_hlds__cse_detection__wrapper_arg_6), &check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25);
    }
#line 609 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv2_Goals_10));
#line 609 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23));
#line 609 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_7 = ((MR_Box) (check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25));
#line 609 "cse_detection.m"
  }
#line 609 "cse_detection.m"
}

#line 602 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0(
#line 602 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 602 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 602 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3,
#line 602 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_4,
#line 602 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 602 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 602 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7)
#line 602 "cse_detection.m"
{
#line 606 "cse_detection.m"
  {
#line 606 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 606 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 606 "cse_detection.m"
      {
#line 606 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 606 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5;
#line 606 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseState_4 = check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3;
#line 606 "cse_detection.m"
        check_hlds__cse_detection__succeeded = MR_TRUE;
#line 606 "cse_detection.m"
      }
#line 606 "cse_detection.m"
    else
#line 608 "cse_detection.m"
      {
#line 608 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 608 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 608 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_20;
#line 608 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goals_21;
#line 608 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30;
#line 608 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_31;
#line 608 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_44_44;
#line 609 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_30;
#line 609 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_31;
#line 611 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_22_22;
#line 611 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_23_23;
#line 611 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_24_24;

#line 609 "cse_detection.m"
        {
#line 609 "cse_detection.m"
          check_hlds__switch_detection__find_bind_var_9_p_0((MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0, (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0, check_hlds__cse_detection__HeadVar__2_2, (MR_Word) &check_hlds__cse_detection_scalar_common_2[6], check_hlds__cse_detection__Goal0_15, &check_hlds__cse_detection__Goal_20, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3)), &check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_30, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5)), &check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_31, &check_hlds__cse_detection__V_44_44);
        }
#line 609 "cse_detection.m"
        check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30 = ((MR_Word) check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_30);
#line 609 "cse_detection.m"
        check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_31 = ((MR_Word) check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_31);
#line 609 "cse_detection.m"
        check_hlds__cse_detection__succeeded = ((MR_Integer) 0 == check_hlds__cse_detection__V_44_44);
#line 608 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 608 "cse_detection.m"
          {
#line 611 "cse_detection.m"
            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 611 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 611 "cse_detection.m"
              {
#line 611 "cse_detection.m"
                check_hlds__cse_detection__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30, (MR_Integer) 0)));
#line 611 "cse_detection.m"
                check_hlds__cse_detection__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30, (MR_Integer) 1)));
#line 611 "cse_detection.m"
                check_hlds__cse_detection__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30, (MR_Integer) 2)));
#line 612 "cse_detection.m"
                {
#line 612 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = check_hlds__cse_detection__common_deconstruct_2_7_p_0(check_hlds__cse_detection__Goals0_16, check_hlds__cse_detection__HeadVar__2_2, check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30, check_hlds__cse_detection__STATE_VARIABLE_CseState_4, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_31, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6, &check_hlds__cse_detection__Goals_21);
                }
#line 608 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 608 "cse_detection.m"
                  {
#line 608 "cse_detection.m"
                    {
#line 608 "cse_detection.m"
                      MR_Word base;
#line 608 "cse_detection.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "cse_detection.m"
                      *check_hlds__cse_detection__HeadVar__7_7 = base;
#line 608 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal_20));
#line 608 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_21));
#line 608 "cse_detection.m"
                    }
#line 608 "cse_detection.m"
                    check_hlds__cse_detection__succeeded = MR_TRUE;
#line 608 "cse_detection.m"
                  }
#line 611 "cse_detection.m"
              }
#line 608 "cse_detection.m"
          }
#line 608 "cse_detection.m"
      }
#line 606 "cse_detection.m"
    return check_hlds__cse_detection__succeeded;
#line 606 "cse_detection.m"
  }
#line 602 "cse_detection.m"
}

#line 564 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_arms_10_p_0(
#line 564 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cond0_11,
#line 564 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Cond_12,
#line 564 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Then0_13,
#line 564 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Then_14,
#line 564 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Else0_15,
#line 564 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Else_16,
#line 564 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25,
#line 564 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26,
#line 564 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_18,
#line 564 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_19)
#line 564 "cse_detection.m"
{
#line 569 "cse_detection.m"
  {
#line 569 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 569 "cse_detection.m"
    MR_Word check_hlds__cse_detection__InstMap1_20;
#line 569 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Redo1_21;
#line 569 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Redo2_22;
#line 569 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Redo3_23;
#line 569 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Redo12_24;
#line 569 "cse_detection.m"
    MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_27_27;
#line 569 "cse_detection.m"
    MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_28_28;
#line 569 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalExpr0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Cond0_11, (MR_Integer) 0)));
#line 569 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Cond0_11, (MR_Integer) 1)));
#line 569 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalExpr_40;
#line 569 "cse_detection.m"
    MR_Word check_hlds__cse_detection__InstMapDelta_41;
#line 294 "cse_detection.m"
    MR_Word check_hlds__cse_detection___InstMap_50;
#line 294 "cse_detection.m"
    MR_Word check_hlds__cse_detection___InstMap_59;

#line 307 "cse_detection.m"
    {
#line 307 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(check_hlds__cse_detection__GoalExpr0_38, &check_hlds__cse_detection__GoalExpr_40, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_27_27, check_hlds__cse_detection__GoalInfo_39, check_hlds__cse_detection__InstMap0_18, &check_hlds__cse_detection__Redo1_21);
    }
#line 309 "cse_detection.m"
    {
#line 309 "cse_detection.m"
      MR_Word base;
#line 309 "cse_detection.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "cse_detection.m"
      *check_hlds__cse_detection__Cond_12 = base;
#line 309 "cse_detection.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__cse_detection__GoalExpr_40));
#line 309 "cse_detection.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_39));
#line 309 "cse_detection.m"
    }
#line 310 "cse_detection.m"
    {
#line 310 "cse_detection.m"
      check_hlds__cse_detection__InstMapDelta_41 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__cse_detection__GoalInfo_39);
    }
#line 311 "cse_detection.m"
    {
#line 311 "cse_detection.m"
      hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__cse_detection__InstMap0_18, check_hlds__cse_detection__InstMapDelta_41, &check_hlds__cse_detection__InstMap1_20);
    }
#line 294 "cse_detection.m"
    {
#line 294 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Then0_13, check_hlds__cse_detection__Then_14, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_27_27, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_28_28, check_hlds__cse_detection__InstMap1_20, &check_hlds__cse_detection___InstMap_50, &check_hlds__cse_detection__Redo2_22);
    }
#line 294 "cse_detection.m"
    {
#line 294 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Else0_15, check_hlds__cse_detection__Else_16, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_28_28, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26, check_hlds__cse_detection__InstMap0_18, &check_hlds__cse_detection___InstMap_59, &check_hlds__cse_detection__Redo3_23);
    }
#line 574 "cse_detection.m"
    {
#line 574 "cse_detection.m"
      mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_21, check_hlds__cse_detection__Redo2_22, &check_hlds__cse_detection__Redo12_24);
    }
#line 575 "cse_detection.m"
    {
#line 575 "cse_detection.m"
      mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo12_24, check_hlds__cse_detection__Redo3_23, check_hlds__cse_detection__Redo_19);
#line 575 "cse_detection.m"
      return;
    }
#line 569 "cse_detection.m"
  }
#line 564 "cse_detection.m"
}

#line 609 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0_2(
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 609 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 609 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 609 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7)
#line 609 "cse_detection.m"
{
#line 609 "cse_detection.m"
  {
#line 609 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 609 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv7_Goals_10;
#line 609 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv6_STATE_VARIABLE_CseState_23;
#line 609 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv5_STATE_VARIABLE_CseInfo_25;

#line 609 "cse_detection.m"
    {
#line 609 "cse_detection.m"
      check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv7_Goals_10, ((MR_Word) check_hlds__cse_detection__wrapper_arg_4), &check_hlds__cse_detection__conv6_STATE_VARIABLE_CseState_23, ((MR_Word) check_hlds__cse_detection__wrapper_arg_6), &check_hlds__cse_detection__conv5_STATE_VARIABLE_CseInfo_25);
    }
#line 609 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv7_Goals_10));
#line 609 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__cse_detection__conv6_STATE_VARIABLE_CseState_23));
#line 609 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_7 = ((MR_Box) (check_hlds__cse_detection__conv5_STATE_VARIABLE_CseInfo_25));
#line 609 "cse_detection.m"
  }
#line 609 "cse_detection.m"
}

#line 609 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0_1(
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 609 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 609 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 609 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 609 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7)
#line 609 "cse_detection.m"
{
#line 609 "cse_detection.m"
  {
#line 609 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 609 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv2_Goals_10;
#line 609 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23;
#line 609 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25;

#line 609 "cse_detection.m"
    {
#line 609 "cse_detection.m"
      check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv2_Goals_10, ((MR_Word) check_hlds__cse_detection__wrapper_arg_4), &check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23, ((MR_Word) check_hlds__cse_detection__wrapper_arg_6), &check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25);
    }
#line 609 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv2_Goals_10));
#line 609 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23));
#line 609 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_7 = ((MR_Box) (check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25));
#line 609 "cse_detection.m"
  }
#line 609 "cse_detection.m"
}

#line 533 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0(
#line 533 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 533 "cse_detection.m"
  MR_Word check_hlds__cse_detection__IfVars_2,
#line 533 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cond0_3,
#line 533 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Then0_4,
#line 533 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Else0_5,
#line 533 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo_6,
#line 533 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap_7,
#line 533 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8,
#line 533 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_9,
#line 533 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_10,
#line 533 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__11_11)
#line 533 "cse_detection.m"
{
#line 539 "cse_detection.m"
  while (MR_TRUE)
#line 539 "cse_detection.m"
    {
#line 539 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 539 "cse_detection.m"
      {
#line 539 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;

#line 539 "cse_detection.m"
        if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 539 "cse_detection.m"
          {
#line 539 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Cond_20;
#line 539 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Then_21;
#line 539 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Else_22;

#line 540 "cse_detection.m"
            {
#line 540 "cse_detection.m"
              check_hlds__cse_detection__detect_cse_in_ite_arms_10_p_0(check_hlds__cse_detection__Cond0_3, &check_hlds__cse_detection__Cond_20, check_hlds__cse_detection__Then0_4, &check_hlds__cse_detection__Then_21, check_hlds__cse_detection__Else0_5, &check_hlds__cse_detection__Else_22, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_9, check_hlds__cse_detection__InstMap_7, check_hlds__cse_detection__Redo_10);
            }
#line 539 "cse_detection.m"
            {
#line 539 "cse_detection.m"
              MR_Word base;
#line 539 "cse_detection.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 539 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__11_11 = base;
#line 539 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 539 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__IfVars_2));
#line 539 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__Cond_20));
#line 539 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__cse_detection__Then_21));
#line 539 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__cse_detection__Else_22));
#line 539 "cse_detection.m"
            }
#line 539 "cse_detection.m"
          }
#line 539 "cse_detection.m"
        else
#line 543 "cse_detection.m"
          {
#line 543 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 543 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Vars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 559 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Unify_39;
#line 559 "cse_detection.m"
            MR_Word check_hlds__cse_detection__FirstOldNew_40;
#line 559 "cse_detection.m"
            MR_Word check_hlds__cse_detection__LaterOldNew_41;
#line 559 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Then_43;
#line 559 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Else_44;
#line 559 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_49_49;
#line 545 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeCtorInfo_42_112;
#line 545 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeCtorInfo_43_113;
#line 545 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeCtorInfo_42_156;
#line 545 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeCtorInfo_43_157;
#line 545 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ModuleInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 3)));
#line 545 "cse_detection.m"
            MR_Word check_hlds__cse_detection__VarInst0_38;
#line 545 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_51_51;
#line 545 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_75_75;
#line 545 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals0_86;
#line 545 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_99_99;
#line 545 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100;
#line 545 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_101;
#line 545 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_102_102;
#line 545 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_114_114;
#line 545 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goal0_129;
#line 545 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals_135;
#line 545 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_143_143;
#line 545 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144;
#line 545 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_146_146;
#line 545 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_158_158;
#line 545 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 0)));
#line 545 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 1)));
#line 545 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 2)));
#line 609 "cse_detection.m"
            MR_Box check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_100;
#line 609 "cse_detection.m"
            MR_Box check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_101;
#line 611 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_92_92;
#line 611 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_93_93;
#line 611 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_94_94;
#line 607 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals0_130;
#line 609 "cse_detection.m"
            MR_Box check_hlds__cse_detection__conv9_STATE_VARIABLE_CseState_30_144;
#line 609 "cse_detection.m"
            MR_Box check_hlds__cse_detection__conv8_STATE_VARIABLE_CseInfo_49_49;
#line 600 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_73_73;
#line 600 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_74_74;
#line 608 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals_91;

#line 546 "cse_detection.m"
            {
#line 546 "cse_detection.m"
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__cse_detection__InstMap_7, check_hlds__cse_detection__Var_26, &check_hlds__cse_detection__VarInst0_38);
            }
#line 549 "cse_detection.m"
            {
#line 549 "cse_detection.m"
              check_hlds__cse_detection__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_p_0(check_hlds__cse_detection__ModuleInfo_37, check_hlds__cse_detection__VarInst0_38);
            }
#line 545 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 545 "cse_detection.m"
              {
#line 550 "cse_detection.m"
                check_hlds__cse_detection__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 598 "cse_detection.m"
                check_hlds__cse_detection__V_75_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "cse_detection.m"
                {
#line 550 "cse_detection.m"
                  check_hlds__cse_detection__Goals0_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals0_86, 0) = ((MR_Box) (check_hlds__cse_detection__Else0_5));
#line 550 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals0_86, 1) = ((MR_Box) (check_hlds__cse_detection__V_51_51));
#line 550 "cse_detection.m"
                }
#line 609 "cse_detection.m"
                check_hlds__cse_detection__V_99_99 = (MR_Word) &check_hlds__cse_detection_scalar_common_2[4];
#line 610 "cse_detection.m"
                check_hlds__cse_detection__V_102_102 = (MR_Integer) 0;
#line 4249 "check_hlds.cse_detection.c"
                check_hlds__cse_detection__TypeCtorInfo_42_112 = (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0;
#line 4251 "check_hlds.cse_detection.c"
                check_hlds__cse_detection__TypeCtorInfo_43_113 = (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0;
#line 609 "cse_detection.m"
                {
#line 609 "cse_detection.m"
                  check_hlds__switch_detection__find_bind_var_9_p_0(check_hlds__cse_detection__TypeCtorInfo_42_112, check_hlds__cse_detection__TypeCtorInfo_43_113, check_hlds__cse_detection__Var_26, check_hlds__cse_detection__V_99_99, check_hlds__cse_detection__Then0_4, &check_hlds__cse_detection__Then_43, ((MR_Box) (check_hlds__cse_detection__V_75_75)), &check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_100, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8)), &check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_101, &check_hlds__cse_detection__V_114_114);
                }
#line 609 "cse_detection.m"
                check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100 = ((MR_Word) check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_100);
#line 609 "cse_detection.m"
                check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_101 = ((MR_Word) check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_101);
#line 609 "cse_detection.m"
                check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_102_102 == check_hlds__cse_detection__V_114_114);
#line 545 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 545 "cse_detection.m"
                  {
#line 611 "cse_detection.m"
                    check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100)) == (MR_mktag((MR_Integer) 1)));
#line 611 "cse_detection.m"
                    if (check_hlds__cse_detection__succeeded)
#line 611 "cse_detection.m"
                      {
#line 611 "cse_detection.m"
                        check_hlds__cse_detection__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100, (MR_Integer) 0)));
#line 611 "cse_detection.m"
                        check_hlds__cse_detection__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100, (MR_Integer) 1)));
#line 611 "cse_detection.m"
                        check_hlds__cse_detection__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100, (MR_Integer) 2)));
#line 607 "cse_detection.m"
                        check_hlds__cse_detection__Goal0_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals0_86, (MR_Integer) 0)));
#line 607 "cse_detection.m"
                        check_hlds__cse_detection__Goals0_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals0_86, (MR_Integer) 1)));
#line 609 "cse_detection.m"
                        check_hlds__cse_detection__V_143_143 = (MR_Word) &check_hlds__cse_detection_scalar_common_2[5];
#line 610 "cse_detection.m"
                        check_hlds__cse_detection__V_146_146 = (MR_Integer) 0;
#line 4288 "check_hlds.cse_detection.c"
                        check_hlds__cse_detection__TypeCtorInfo_42_156 = (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0;
#line 4290 "check_hlds.cse_detection.c"
                        check_hlds__cse_detection__TypeCtorInfo_43_157 = (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0;
#line 609 "cse_detection.m"
                        {
#line 609 "cse_detection.m"
                          check_hlds__switch_detection__find_bind_var_9_p_0(check_hlds__cse_detection__TypeCtorInfo_42_156, check_hlds__cse_detection__TypeCtorInfo_43_157, check_hlds__cse_detection__Var_26, check_hlds__cse_detection__V_143_143, check_hlds__cse_detection__Goal0_129, &check_hlds__cse_detection__Else_44, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100)), &check_hlds__cse_detection__conv9_STATE_VARIABLE_CseState_30_144, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_101)), &check_hlds__cse_detection__conv8_STATE_VARIABLE_CseInfo_49_49, &check_hlds__cse_detection__V_158_158);
                        }
#line 609 "cse_detection.m"
                        check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144 = ((MR_Word) check_hlds__cse_detection__conv9_STATE_VARIABLE_CseState_30_144);
#line 609 "cse_detection.m"
                        check_hlds__cse_detection__STATE_VARIABLE_CseInfo_49_49 = ((MR_Word) check_hlds__cse_detection__conv8_STATE_VARIABLE_CseInfo_49_49);
#line 609 "cse_detection.m"
                        check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_146_146 == check_hlds__cse_detection__V_158_158);
#line 545 "cse_detection.m"
                        if (check_hlds__cse_detection__succeeded)
#line 545 "cse_detection.m"
                          {
#line 611 "cse_detection.m"
                            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144)) == (MR_mktag((MR_Integer) 1)));
#line 611 "cse_detection.m"
                            if (check_hlds__cse_detection__succeeded)
#line 611 "cse_detection.m"
                              {
#line 611 "cse_detection.m"
                                check_hlds__cse_detection__Unify_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144, (MR_Integer) 0)));
#line 611 "cse_detection.m"
                                check_hlds__cse_detection__FirstOldNew_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144, (MR_Integer) 1)));
#line 611 "cse_detection.m"
                                check_hlds__cse_detection__LaterOldNew_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144, (MR_Integer) 2)));
#line 606 "cse_detection.m"
                                check_hlds__cse_detection__Goals_135 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 600 "cse_detection.m"
                                check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__LaterOldNew_41)) == (MR_mktag((MR_Integer) 1)));
#line 600 "cse_detection.m"
                                if (check_hlds__cse_detection__succeeded)
#line 600 "cse_detection.m"
                                  {
#line 600 "cse_detection.m"
                                    check_hlds__cse_detection__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_41, (MR_Integer) 0)));
#line 600 "cse_detection.m"
                                    check_hlds__cse_detection__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_41, (MR_Integer) 1)));
#line 608 "cse_detection.m"
                                    {
#line 608 "cse_detection.m"
                                      check_hlds__cse_detection__Goals_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "cse_detection.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals_91, 0) = ((MR_Box) (check_hlds__cse_detection__Else_44));
#line 608 "cse_detection.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals_91, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_135));
#line 608 "cse_detection.m"
                                    }
#line 552 "cse_detection.m"
                                    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__Goals_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 600 "cse_detection.m"
                                  }
#line 611 "cse_detection.m"
                              }
#line 545 "cse_detection.m"
                          }
#line 611 "cse_detection.m"
                      }
#line 545 "cse_detection.m"
                  }
#line 545 "cse_detection.m"
              }
#line 559 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 555 "cse_detection.m"
              {
#line 555 "cse_detection.m"
                MR_Word check_hlds__cse_detection__IfGoal_45;
#line 555 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_55_55;
#line 555 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_57_57;
#line 555 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_58_58;

#line 554 "cse_detection.m"
                {
#line 554 "cse_detection.m"
                  check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(check_hlds__cse_detection__Unify_39, check_hlds__cse_detection__FirstOldNew_40, check_hlds__cse_detection__LaterOldNew_41, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_49_49, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_9);
                }
#line 556 "cse_detection.m"
                {
#line 556 "cse_detection.m"
                  check_hlds__cse_detection__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 556 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 556 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 1) = ((MR_Box) (check_hlds__cse_detection__IfVars_2));
#line 556 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 2) = ((MR_Box) (check_hlds__cse_detection__Cond0_3));
#line 556 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 3) = ((MR_Box) (check_hlds__cse_detection__Then_43));
#line 556 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 4) = ((MR_Box) (check_hlds__cse_detection__Else_44));
#line 556 "cse_detection.m"
                }
#line 556 "cse_detection.m"
                {
#line 556 "cse_detection.m"
                  check_hlds__cse_detection__IfGoal_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 556 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__IfGoal_45, 0) = ((MR_Box) (check_hlds__cse_detection__V_55_55));
#line 556 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__IfGoal_45, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_6));
#line 556 "cse_detection.m"
                }
#line 557 "cse_detection.m"
                {
#line 557 "cse_detection.m"
                  check_hlds__cse_detection__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, 0) = ((MR_Box) (check_hlds__cse_detection__IfGoal_45));
#line 557 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 557 "cse_detection.m"
                }
#line 557 "cse_detection.m"
                {
#line 557 "cse_detection.m"
                  check_hlds__cse_detection__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_57_57, 0) = ((MR_Box) (check_hlds__cse_detection__Unify_39));
#line 557 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_57_57, 1) = ((MR_Box) (check_hlds__cse_detection__V_58_58));
#line 557 "cse_detection.m"
                }
#line 557 "cse_detection.m"
                {
#line 557 "cse_detection.m"
                  MR_Word base;
#line 557 "cse_detection.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 557 "cse_detection.m"
                  *check_hlds__cse_detection__HeadVar__11_11 = base;
#line 557 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 557 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 557 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__V_57_57));
#line 557 "cse_detection.m"
                }
#line 558 "cse_detection.m"
                *check_hlds__cse_detection__Redo_10 = (MR_Integer) 1;
#line 555 "cse_detection.m"
              }
#line 559 "cse_detection.m"
            else
#line 560 "cse_detection.m"
              {
#line 560 "cse_detection.m"
                /* direct tailcall eliminated */
#line 560 "cse_detection.m"
                {
#line 560 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__HeadVar__1__tmp_copy_1 = check_hlds__cse_detection__Vars_27;

#line 560 "cse_detection.m"
                  check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__HeadVar__1__tmp_copy_1;
#line 560 "cse_detection.m"
                }
#line 560 "cse_detection.m"
                continue;
#line 560 "cse_detection.m"
              }
#line 543 "cse_detection.m"
          }
#line 539 "cse_detection.m"
      }
#line 539 "cse_detection.m"
      break;
#line 539 "cse_detection.m"
    }
#line 533 "cse_detection.m"
}

#line 521 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_arms_6_p_0(
#line 521 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 521 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 521 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 521 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 521 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_5,
#line 521 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6)
#line 521 "cse_detection.m"
{
#line 524 "cse_detection.m"
  {
#line 524 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 524 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 524 "cse_detection.m"
      {
#line 524 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 524 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__6_6 = (MR_Integer) 0;
#line 524 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3;
#line 524 "cse_detection.m"
      }
#line 524 "cse_detection.m"
    else
#line 526 "cse_detection.m"
      {
#line 526 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Case0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 526 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 526 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Case_13;
#line 526 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Cases_14;
#line 526 "cse_detection.m"
        MR_Word check_hlds__cse_detection__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_11, (MR_Integer) 0)));
#line 526 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_11, (MR_Integer) 1)));
#line 526 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_11, (MR_Integer) 2)));
#line 526 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_21;
#line 526 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo1_22;
#line 526 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo2_23;
#line 526 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26_26;
#line 294 "cse_detection.m"
        MR_Word check_hlds__cse_detection___InstMap_35;

#line 294 "cse_detection.m"
        {
#line 294 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Goal0_20, &check_hlds__cse_detection__Goal_21, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26_26, check_hlds__cse_detection__InstMap0_5, &check_hlds__cse_detection___InstMap_35, &check_hlds__cse_detection__Redo1_22);
        }
#line 529 "cse_detection.m"
        {
#line 529 "cse_detection.m"
          check_hlds__cse_detection__Case_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 529 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_13, 0) = ((MR_Box) (check_hlds__cse_detection__MainConsId_18));
#line 529 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_13, 1) = ((MR_Box) (check_hlds__cse_detection__OtherConsIds_19));
#line 529 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_13, 2) = ((MR_Box) (check_hlds__cse_detection__Goal_21));
#line 529 "cse_detection.m"
        }
#line 530 "cse_detection.m"
        {
#line 530 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_cases_arms_6_p_0(check_hlds__cse_detection__Cases0_12, &check_hlds__cse_detection__Cases_14, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26_26, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4, check_hlds__cse_detection__InstMap0_5, &check_hlds__cse_detection__Redo2_23);
        }
#line 525 "cse_detection.m"
        {
#line 525 "cse_detection.m"
          MR_Word base;
#line 525 "cse_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__2_2 = base;
#line 525 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Case_13));
#line 525 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Cases_14));
#line 525 "cse_detection.m"
        }
#line 531 "cse_detection.m"
        {
#line 531 "cse_detection.m"
          mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_22, check_hlds__cse_detection__Redo2_23, check_hlds__cse_detection__HeadVar__6_6);
#line 531 "cse_detection.m"
          return;
        }
#line 526 "cse_detection.m"
      }
#line 524 "cse_detection.m"
  }
#line 521 "cse_detection.m"
}

#line 492 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_10_p_0(
#line 492 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 492 "cse_detection.m"
  MR_Word check_hlds__cse_detection__SwitchVar_2,
#line 492 "cse_detection.m"
  MR_Word check_hlds__cse_detection__CanFail_3,
#line 492 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cases0_4,
#line 492 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__5_5,
#line 492 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_6,
#line 492 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7,
#line 492 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_8,
#line 492 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_9,
#line 492 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__10_10)
#line 492 "cse_detection.m"
{
#line 497 "cse_detection.m"
  while (MR_TRUE)
#line 497 "cse_detection.m"
    {
#line 497 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 497 "cse_detection.m"
      {
#line 497 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;

#line 497 "cse_detection.m"
        if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 497 "cse_detection.m"
          {
#line 497 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Cases_18;

#line 498 "cse_detection.m"
            {
#line 498 "cse_detection.m"
              check_hlds__cse_detection__detect_cse_in_cases_arms_6_p_0(check_hlds__cse_detection__Cases0_4, &check_hlds__cse_detection__Cases_18, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_8, check_hlds__cse_detection__InstMap0_6, check_hlds__cse_detection__Redo_9);
            }
#line 497 "cse_detection.m"
            {
#line 497 "cse_detection.m"
              MR_Word base;
#line 497 "cse_detection.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 497 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__10_10 = base;
#line 497 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 497 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__SwitchVar_2));
#line 497 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__CanFail_3));
#line 497 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__cse_detection__Cases_18));
#line 497 "cse_detection.m"
            }
#line 497 "cse_detection.m"
          }
#line 497 "cse_detection.m"
        else
#line 500 "cse_detection.m"
          {
#line 500 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 500 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 516 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Unify_34;
#line 516 "cse_detection.m"
            MR_Word check_hlds__cse_detection__FirstOldNew_35;
#line 516 "cse_detection.m"
            MR_Word check_hlds__cse_detection__LaterOldNew_36;
#line 516 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Cases_37;
#line 516 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_40_40;
#line 502 "cse_detection.m"
            MR_Word check_hlds__cse_detection__VarInst0_32;
#line 502 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ModuleInfo_33;
#line 502 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_64_64;
#line 502 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_65_65;
#line 504 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_49_49;
#line 504 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_50_50;
#line 504 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_51_51;
#line 624 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_62_62;
#line 624 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_63_63;

#line 502 "cse_detection.m"
            {
#line 502 "cse_detection.m"
              check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[0], ((MR_Box) (check_hlds__cse_detection__Var_22)), ((MR_Box) (check_hlds__cse_detection__SwitchVar_2)));
            }
#line 502 "cse_detection.m"
            check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 502 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 502 "cse_detection.m"
              {
#line 503 "cse_detection.m"
                {
#line 503 "cse_detection.m"
                  hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__cse_detection__InstMap0_6, check_hlds__cse_detection__Var_22, &check_hlds__cse_detection__VarInst0_32);
                }
#line 504 "cse_detection.m"
                check_hlds__cse_detection__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 0)));
#line 504 "cse_detection.m"
                check_hlds__cse_detection__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 1)));
#line 504 "cse_detection.m"
                check_hlds__cse_detection__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 2)));
#line 504 "cse_detection.m"
                check_hlds__cse_detection__ModuleInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 3)));
#line 507 "cse_detection.m"
                {
#line 507 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_p_0(check_hlds__cse_detection__ModuleInfo_33, check_hlds__cse_detection__VarInst0_32);
                }
#line 502 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 502 "cse_detection.m"
                  {
#line 622 "cse_detection.m"
                    check_hlds__cse_detection__V_64_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 622 "cse_detection.m"
                    {
#line 622 "cse_detection.m"
                      check_hlds__cse_detection__succeeded = check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(check_hlds__cse_detection__Cases0_4, check_hlds__cse_detection__Var_22, check_hlds__cse_detection__V_64_64, &check_hlds__cse_detection__V_65_65, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_40_40, &check_hlds__cse_detection__Cases_37);
                    }
#line 502 "cse_detection.m"
                    if (check_hlds__cse_detection__succeeded)
#line 502 "cse_detection.m"
                      {
#line 623 "cse_detection.m"
                        check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_65_65)) == (MR_mktag((MR_Integer) 1)));
#line 623 "cse_detection.m"
                        if (check_hlds__cse_detection__succeeded)
#line 623 "cse_detection.m"
                          {
#line 623 "cse_detection.m"
                            check_hlds__cse_detection__Unify_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_65_65, (MR_Integer) 0)));
#line 623 "cse_detection.m"
                            check_hlds__cse_detection__FirstOldNew_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_65_65, (MR_Integer) 1)));
#line 623 "cse_detection.m"
                            check_hlds__cse_detection__LaterOldNew_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_65_65, (MR_Integer) 2)));
#line 624 "cse_detection.m"
                            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__LaterOldNew_36)) == (MR_mktag((MR_Integer) 1)));
#line 624 "cse_detection.m"
                            if (check_hlds__cse_detection__succeeded)
#line 624 "cse_detection.m"
                              {
#line 624 "cse_detection.m"
                                check_hlds__cse_detection__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_36, (MR_Integer) 0)));
#line 624 "cse_detection.m"
                                check_hlds__cse_detection__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_36, (MR_Integer) 1)));
#line 624 "cse_detection.m"
                              }
#line 623 "cse_detection.m"
                          }
#line 502 "cse_detection.m"
                      }
#line 502 "cse_detection.m"
                  }
#line 502 "cse_detection.m"
              }
#line 516 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 512 "cse_detection.m"
              {
#line 512 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_43_43;
#line 512 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_44_44;
#line 512 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_45_45;
#line 512 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_46_46;

#line 511 "cse_detection.m"
                {
#line 511 "cse_detection.m"
                  check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(check_hlds__cse_detection__Unify_34, check_hlds__cse_detection__FirstOldNew_35, check_hlds__cse_detection__LaterOldNew_36, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_40_40, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_8);
                }
#line 514 "cse_detection.m"
                {
#line 514 "cse_detection.m"
                  check_hlds__cse_detection__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 514 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 514 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_46_46, 1) = ((MR_Box) (check_hlds__cse_detection__SwitchVar_2));
#line 514 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_46_46, 2) = ((MR_Box) (check_hlds__cse_detection__CanFail_3));
#line 514 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_46_46, 3) = ((MR_Box) (check_hlds__cse_detection__Cases_37));
#line 514 "cse_detection.m"
                }
#line 514 "cse_detection.m"
                {
#line 514 "cse_detection.m"
                  check_hlds__cse_detection__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 514 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_45_45, 0) = ((MR_Box) (check_hlds__cse_detection__V_46_46));
#line 514 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_45_45, 1) = ((MR_Box) (check_hlds__cse_detection__HeadVar__5_5));
#line 514 "cse_detection.m"
                }
#line 514 "cse_detection.m"
                {
#line 514 "cse_detection.m"
                  check_hlds__cse_detection__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_44_44, 0) = ((MR_Box) (check_hlds__cse_detection__V_45_45));
#line 514 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 514 "cse_detection.m"
                }
#line 514 "cse_detection.m"
                {
#line 514 "cse_detection.m"
                  check_hlds__cse_detection__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_43_43, 0) = ((MR_Box) (check_hlds__cse_detection__Unify_34));
#line 514 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_43_43, 1) = ((MR_Box) (check_hlds__cse_detection__V_44_44));
#line 514 "cse_detection.m"
                }
#line 513 "cse_detection.m"
                {
#line 513 "cse_detection.m"
                  MR_Word base;
#line 513 "cse_detection.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 513 "cse_detection.m"
                  *check_hlds__cse_detection__HeadVar__10_10 = base;
#line 513 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 513 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 513 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__V_43_43));
#line 513 "cse_detection.m"
                }
#line 515 "cse_detection.m"
                *check_hlds__cse_detection__Redo_9 = (MR_Integer) 1;
#line 512 "cse_detection.m"
              }
#line 516 "cse_detection.m"
            else
#line 517 "cse_detection.m"
              {
#line 517 "cse_detection.m"
                /* direct tailcall eliminated */
#line 517 "cse_detection.m"
                {
#line 517 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__HeadVar__1__tmp_copy_1 = check_hlds__cse_detection__Vars_23;

#line 517 "cse_detection.m"
                  check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__HeadVar__1__tmp_copy_1;
#line 517 "cse_detection.m"
                }
#line 517 "cse_detection.m"
                continue;
#line 517 "cse_detection.m"
              }
#line 500 "cse_detection.m"
          }
#line 497 "cse_detection.m"
      }
#line 497 "cse_detection.m"
      break;
#line 497 "cse_detection.m"
    }
#line 492 "cse_detection.m"
}

#line 481 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(
#line 481 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 481 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 481 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 481 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 481 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_5,
#line 481 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6)
#line 481 "cse_detection.m"
{
#line 485 "cse_detection.m"
  {
#line 485 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 485 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 485 "cse_detection.m"
      {
#line 485 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 485 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__6_6 = (MR_Integer) 0;
#line 485 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3;
#line 485 "cse_detection.m"
      }
#line 485 "cse_detection.m"
    else
#line 487 "cse_detection.m"
      {
#line 487 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 487 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 487 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_13;
#line 487 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goals_14;
#line 487 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo1_18;
#line 487 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo2_19;
#line 487 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_22_22;
#line 294 "cse_detection.m"
        MR_Word check_hlds__cse_detection___InstMap_31;

#line 294 "cse_detection.m"
        {
#line 294 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Goal0_11, &check_hlds__cse_detection__Goal_13, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_22_22, check_hlds__cse_detection__InstMap0_5, &check_hlds__cse_detection___InstMap_31, &check_hlds__cse_detection__Redo1_18);
        }
#line 489 "cse_detection.m"
        {
#line 489 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(check_hlds__cse_detection__Goals0_12, &check_hlds__cse_detection__Goals_14, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_22_22, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4, check_hlds__cse_detection__InstMap0_5, &check_hlds__cse_detection__Redo2_19);
        }
#line 486 "cse_detection.m"
        {
#line 486 "cse_detection.m"
          MR_Word base;
#line 486 "cse_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__2_2 = base;
#line 486 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal_13));
#line 486 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_14));
#line 486 "cse_detection.m"
        }
#line 490 "cse_detection.m"
        {
#line 490 "cse_detection.m"
          mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_18, check_hlds__cse_detection__Redo2_19, check_hlds__cse_detection__HeadVar__6_6);
#line 490 "cse_detection.m"
          return;
        }
#line 487 "cse_detection.m"
      }
#line 485 "cse_detection.m"
  }
#line 481 "cse_detection.m"
}

#line 454 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_disj_8_p_0(
#line 454 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 454 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goals0_2,
#line 454 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo0_3,
#line 454 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__4_4,
#line 454 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 454 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 454 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_7,
#line 454 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__8_8)
#line 454 "cse_detection.m"
{
#line 458 "cse_detection.m"
  while (MR_TRUE)
#line 458 "cse_detection.m"
    {
#line 458 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 458 "cse_detection.m"
      {
#line 458 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;

#line 458 "cse_detection.m"
        if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 458 "cse_detection.m"
          {
#line 458 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals_14;

#line 459 "cse_detection.m"
            {
#line 459 "cse_detection.m"
              check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(check_hlds__cse_detection__Goals0_2, &check_hlds__cse_detection__Goals_14, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6, check_hlds__cse_detection__HeadVar__4_4, check_hlds__cse_detection__Redo_7);
            }
#line 458 "cse_detection.m"
            {
#line 458 "cse_detection.m"
              MR_Word base;
#line 458 "cse_detection.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 458 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__8_8 = base;
#line 458 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 458 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_14));
#line 458 "cse_detection.m"
            }
#line 458 "cse_detection.m"
          }
#line 458 "cse_detection.m"
        else
#line 461 "cse_detection.m"
          {
#line 461 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 461 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 476 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Unify_28;
#line 476 "cse_detection.m"
            MR_Word check_hlds__cse_detection__FirstOldNew_29;
#line 476 "cse_detection.m"
            MR_Word check_hlds__cse_detection__LaterOldNew_30;
#line 476 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals_31;
#line 476 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_34_34;
#line 463 "cse_detection.m"
            MR_Word check_hlds__cse_detection__VarInst0_26;
#line 463 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ModuleInfo_27;
#line 463 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_57_57;
#line 463 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_58_58;
#line 464 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_43_43;
#line 464 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_44_44;
#line 464 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_45_45;
#line 600 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_55_55;
#line 600 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_56_56;

#line 463 "cse_detection.m"
            {
#line 463 "cse_detection.m"
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__cse_detection__HeadVar__4_4, check_hlds__cse_detection__Var_18, &check_hlds__cse_detection__VarInst0_26);
            }
#line 464 "cse_detection.m"
            check_hlds__cse_detection__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 0)));
#line 464 "cse_detection.m"
            check_hlds__cse_detection__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 1)));
#line 464 "cse_detection.m"
            check_hlds__cse_detection__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 2)));
#line 464 "cse_detection.m"
            check_hlds__cse_detection__ModuleInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 3)));
#line 467 "cse_detection.m"
            {
#line 467 "cse_detection.m"
              check_hlds__cse_detection__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_p_0(check_hlds__cse_detection__ModuleInfo_27, check_hlds__cse_detection__VarInst0_26);
            }
#line 463 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 463 "cse_detection.m"
              {
#line 598 "cse_detection.m"
                check_hlds__cse_detection__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 598 "cse_detection.m"
                {
#line 598 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = check_hlds__cse_detection__common_deconstruct_2_7_p_0(check_hlds__cse_detection__Goals0_2, check_hlds__cse_detection__Var_18, check_hlds__cse_detection__V_57_57, &check_hlds__cse_detection__V_58_58, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_34_34, &check_hlds__cse_detection__Goals_31);
                }
#line 463 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 463 "cse_detection.m"
                  {
#line 599 "cse_detection.m"
                    check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 599 "cse_detection.m"
                    if (check_hlds__cse_detection__succeeded)
#line 599 "cse_detection.m"
                      {
#line 599 "cse_detection.m"
                        check_hlds__cse_detection__Unify_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, (MR_Integer) 0)));
#line 599 "cse_detection.m"
                        check_hlds__cse_detection__FirstOldNew_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, (MR_Integer) 1)));
#line 599 "cse_detection.m"
                        check_hlds__cse_detection__LaterOldNew_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, (MR_Integer) 2)));
#line 600 "cse_detection.m"
                        check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__LaterOldNew_30)) == (MR_mktag((MR_Integer) 1)));
#line 600 "cse_detection.m"
                        if (check_hlds__cse_detection__succeeded)
#line 600 "cse_detection.m"
                          {
#line 600 "cse_detection.m"
                            check_hlds__cse_detection__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_30, (MR_Integer) 0)));
#line 600 "cse_detection.m"
                            check_hlds__cse_detection__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_30, (MR_Integer) 1)));
#line 600 "cse_detection.m"
                          }
#line 599 "cse_detection.m"
                      }
#line 463 "cse_detection.m"
                  }
#line 463 "cse_detection.m"
              }
#line 476 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 472 "cse_detection.m"
              {
#line 472 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_37_37;
#line 472 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_38_38;
#line 472 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_39_39;
#line 472 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_40_40;

#line 471 "cse_detection.m"
                {
#line 471 "cse_detection.m"
                  check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(check_hlds__cse_detection__Unify_28, check_hlds__cse_detection__FirstOldNew_29, check_hlds__cse_detection__LaterOldNew_30, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_34_34, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6);
                }
#line 474 "cse_detection.m"
                {
#line 474 "cse_detection.m"
                  check_hlds__cse_detection__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 474 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_40_40, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_31));
#line 474 "cse_detection.m"
                }
#line 474 "cse_detection.m"
                {
#line 474 "cse_detection.m"
                  check_hlds__cse_detection__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 474 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_39_39, 0) = ((MR_Box) (check_hlds__cse_detection__V_40_40));
#line 474 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_39_39, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo0_3));
#line 474 "cse_detection.m"
                }
#line 474 "cse_detection.m"
                {
#line 474 "cse_detection.m"
                  check_hlds__cse_detection__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, 0) = ((MR_Box) (check_hlds__cse_detection__V_39_39));
#line 474 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 474 "cse_detection.m"
                }
#line 474 "cse_detection.m"
                {
#line 474 "cse_detection.m"
                  check_hlds__cse_detection__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, 0) = ((MR_Box) (check_hlds__cse_detection__Unify_28));
#line 474 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, 1) = ((MR_Box) (check_hlds__cse_detection__V_38_38));
#line 474 "cse_detection.m"
                }
#line 473 "cse_detection.m"
                {
#line 473 "cse_detection.m"
                  MR_Word base;
#line 473 "cse_detection.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 473 "cse_detection.m"
                  *check_hlds__cse_detection__HeadVar__8_8 = base;
#line 473 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 473 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 473 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__V_37_37));
#line 473 "cse_detection.m"
                }
#line 475 "cse_detection.m"
                *check_hlds__cse_detection__Redo_7 = (MR_Integer) 1;
#line 472 "cse_detection.m"
              }
#line 476 "cse_detection.m"
            else
#line 477 "cse_detection.m"
              {
#line 477 "cse_detection.m"
                /* direct tailcall eliminated */
#line 477 "cse_detection.m"
                {
#line 477 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__HeadVar__1__tmp_copy_1 = check_hlds__cse_detection__Vars_19;

#line 477 "cse_detection.m"
                  check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__HeadVar__1__tmp_copy_1;
#line 477 "cse_detection.m"
                }
#line 477 "cse_detection.m"
                continue;
#line 477 "cse_detection.m"
              }
#line 461 "cse_detection.m"
          }
#line 458 "cse_detection.m"
      }
#line 458 "cse_detection.m"
      break;
#line 458 "cse_detection.m"
    }
#line 454 "cse_detection.m"
}

#line 427 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_conj_7_p_0(
#line 427 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 427 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 427 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 427 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 427 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__5_5,
#line 427 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__6_6,
#line 427 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7)
#line 427 "cse_detection.m"
{
#line 430 "cse_detection.m"
  {
#line 430 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 430 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 430 "cse_detection.m"
      {
#line 430 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 430 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__7_7 = (MR_Integer) 0;
#line 430 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3;
#line 430 "cse_detection.m"
      }
#line 430 "cse_detection.m"
    else
#line 432 "cse_detection.m"
      {
#line 432 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 432 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 432 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_20;
#line 432 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo1_21;
#line 432 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TailGoals_22;
#line 432 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo2_23;
#line 432 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_30_30;
#line 432 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_InstMap_31_31;
#line 432 "cse_detection.m"
        MR_Word check_hlds__cse_detection__GoalExpr0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_13, (MR_Integer) 0)));
#line 432 "cse_detection.m"
        MR_Word check_hlds__cse_detection__GoalInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_13, (MR_Integer) 1)));
#line 432 "cse_detection.m"
        MR_Word check_hlds__cse_detection__GoalExpr_45;
#line 432 "cse_detection.m"
        MR_Word check_hlds__cse_detection__InstMapDelta_46;
#line 442 "cse_detection.m"
        MR_Word check_hlds__cse_detection__ConjGoals_25;
#line 438 "cse_detection.m"
        MR_Word check_hlds__cse_detection__InnerConjType_24;
#line 438 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_33_33;
#line 438 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_26_26;

#line 307 "cse_detection.m"
        {
#line 307 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(check_hlds__cse_detection__GoalExpr0_43, &check_hlds__cse_detection__GoalExpr_45, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_30_30, check_hlds__cse_detection__GoalInfo_44, check_hlds__cse_detection__HeadVar__6_6, &check_hlds__cse_detection__Redo1_21);
        }
#line 309 "cse_detection.m"
        {
#line 309 "cse_detection.m"
          check_hlds__cse_detection__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal_20, 0) = ((MR_Box) (check_hlds__cse_detection__GoalExpr_45));
#line 309 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal_20, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_44));
#line 309 "cse_detection.m"
        }
#line 310 "cse_detection.m"
        {
#line 310 "cse_detection.m"
          check_hlds__cse_detection__InstMapDelta_46 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__cse_detection__GoalInfo_44);
        }
#line 311 "cse_detection.m"
        {
#line 311 "cse_detection.m"
          hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__cse_detection__HeadVar__6_6, check_hlds__cse_detection__InstMapDelta_46, &check_hlds__cse_detection__STATE_VARIABLE_InstMap_31_31);
        }
#line 434 "cse_detection.m"
        {
#line 434 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_conj_7_p_0(check_hlds__cse_detection__Goals0_14, &check_hlds__cse_detection__TailGoals_22, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_30_30, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4, check_hlds__cse_detection__HeadVar__5_5, check_hlds__cse_detection__STATE_VARIABLE_InstMap_31_31, &check_hlds__cse_detection__Redo2_23);
        }
#line 438 "cse_detection.m"
        check_hlds__cse_detection__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal_20, (MR_Integer) 0)));
#line 438 "cse_detection.m"
        check_hlds__cse_detection__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal_20, (MR_Integer) 1)));
#line 438 "cse_detection.m"
        check_hlds__cse_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__cse_detection__V_33_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_33_33, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 438 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 438 "cse_detection.m"
          {
#line 438 "cse_detection.m"
            check_hlds__cse_detection__InnerConjType_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_33_33, (MR_Integer) 1)));
#line 438 "cse_detection.m"
            check_hlds__cse_detection__ConjGoals_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_33_33, (MR_Integer) 2)));
#line 439 "cse_detection.m"
            check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__HeadVar__5_5 == check_hlds__cse_detection__InnerConjType_24);
#line 438 "cse_detection.m"
          }
#line 442 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 441 "cse_detection.m"
          {
#line 441 "cse_detection.m"
            {
#line 441 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__cse_detection__ConjGoals_25, check_hlds__cse_detection__TailGoals_22);
            }
#line 441 "cse_detection.m"
          }
#line 442 "cse_detection.m"
        else
#line 443 "cse_detection.m"
          {
#line 443 "cse_detection.m"
            MR_Word base;
#line 443 "cse_detection.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "cse_detection.m"
            *check_hlds__cse_detection__HeadVar__2_2 = base;
#line 443 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal_20));
#line 443 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__TailGoals_22));
#line 443 "cse_detection.m"
          }
#line 445 "cse_detection.m"
        {
#line 445 "cse_detection.m"
          mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_21, check_hlds__cse_detection__Redo2_23, check_hlds__cse_detection__HeadVar__7_7);
#line 445 "cse_detection.m"
          return;
        }
#line 432 "cse_detection.m"
      }
#line 430 "cse_detection.m"
  }
#line 427 "cse_detection.m"
}

#line 315 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(
#line 315 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalExpr0_8,
#line 315 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__GoalExpr_9,
#line 315 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90,
#line 315 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91,
#line 315 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo_11,
#line 315 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_12,
#line 315 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_13)
#line 315 "cse_detection.m"
{
#line 325 "cse_detection.m"
  {
#line 325 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 325 "cse_detection.m"
#line 325 "cse_detection.m"
    switch (MR_tag((MR_Word) check_hlds__cse_detection__GoalExpr0_8)) {
#line 325 "cse_detection.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 325 "cse_detection.m"
      case (MR_Integer) 0:
#line 349 "cse_detection.m"
        {
#line 349 "cse_detection.m"
          MR_Word check_hlds__cse_detection__SubGoal0_54 = (MR_Word) MR_body(((MR_Word) check_hlds__cse_detection__GoalExpr0_8), (MR_Integer) 0);
#line 349 "cse_detection.m"
          MR_Word check_hlds__cse_detection__SubGoal_55;

#line 350 "cse_detection.m"
          {
#line 350 "cse_detection.m"
            check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__SubGoal0_54, &check_hlds__cse_detection__SubGoal_55, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__Redo_13);
          }
#line 351 "cse_detection.m"
          *check_hlds__cse_detection__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__cse_detection__SubGoal_55);
#line 349 "cse_detection.m"
        }
#line 325 "cse_detection.m"
        break;
#line 325 "cse_detection.m"
      case (MR_Integer) 1:
#line 329 "cse_detection.m"
        {
#line 329 "cse_detection.m"
          MR_Word check_hlds__cse_detection__LHS_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 0)));
#line 329 "cse_detection.m"
          MR_Word check_hlds__cse_detection__RHS0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 329 "cse_detection.m"
          MR_Word check_hlds__cse_detection__Mode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
#line 329 "cse_detection.m"
          MR_Word check_hlds__cse_detection__Unify_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 3)));
#line 329 "cse_detection.m"
          MR_Word check_hlds__cse_detection__UnifyContext_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 4)));
#line 329 "cse_detection.m"
          MR_Word check_hlds__cse_detection__RHS_49;

#line 340 "cse_detection.m"
#line 340 "cse_detection.m"
          switch (MR_tag((MR_Word) check_hlds__cse_detection__RHS0_33)) {
#line 340 "cse_detection.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 340 "cse_detection.m"
            case (MR_Integer) 0:
#line 340 "cse_detection.m"
            case (MR_Integer) 1:
#line 343 "cse_detection.m"
              {
#line 344 "cse_detection.m"
                check_hlds__cse_detection__RHS_49 = check_hlds__cse_detection__RHS0_33;
#line 345 "cse_detection.m"
                *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
#line 343 "cse_detection.m"
                *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90;
#line 343 "cse_detection.m"
              }
#line 340 "cse_detection.m"
              break;
#line 340 "cse_detection.m"
            case (MR_Integer) 2:
#line 332 "cse_detection.m"
              {
#line 332 "cse_detection.m"
                MR_Word check_hlds__cse_detection__Purity_37 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 332 "cse_detection.m"
                MR_Word check_hlds__cse_detection__Groundness_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 332 "cse_detection.m"
                MR_Word check_hlds__cse_detection__PredOrFunc_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 332 "cse_detection.m"
                MR_Word check_hlds__cse_detection__NonLocalVars_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 2)));
#line 332 "cse_detection.m"
                MR_Word check_hlds__cse_detection__Vars_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 3)));
#line 332 "cse_detection.m"
                MR_Word check_hlds__cse_detection__Modes_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 4)));
#line 332 "cse_detection.m"
                MR_Word check_hlds__cse_detection__Det_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 5)));
#line 332 "cse_detection.m"
                MR_Word check_hlds__cse_detection__LambdaGoal0_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 6)));
#line 332 "cse_detection.m"
                MR_Word check_hlds__cse_detection__ModuleInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, (MR_Integer) 3)));
#line 332 "cse_detection.m"
                MR_Word check_hlds__cse_detection__InstMap1_47;
#line 332 "cse_detection.m"
                MR_Word check_hlds__cse_detection__LambdaGoal_48;
#line 333 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, (MR_Integer) 0)));
#line 333 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, (MR_Integer) 1)));
#line 333 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, (MR_Integer) 2)));

#line 334 "cse_detection.m"
                {
#line 334 "cse_detection.m"
                  hlds__instmap__pre_lambda_update_5_p_0(check_hlds__cse_detection__ModuleInfo_46, check_hlds__cse_detection__Vars_42, check_hlds__cse_detection__Modes_43, check_hlds__cse_detection__InstMap0_12, &check_hlds__cse_detection__InstMap1_47);
                }
#line 336 "cse_detection.m"
                {
#line 336 "cse_detection.m"
                  check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__LambdaGoal0_45, &check_hlds__cse_detection__LambdaGoal_48, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__InstMap1_47, check_hlds__cse_detection__Redo_13);
                }
#line 338 "cse_detection.m"
                {
#line 338 "cse_detection.m"
                  check_hlds__cse_detection__RHS_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 338 "cse_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 0) = ((MR_Box) ((check_hlds__cse_detection__Purity_37 | ((((check_hlds__cse_detection__Groundness_38 << (MR_Integer) 2)) | ((check_hlds__cse_detection__PredOrFunc_39 << (MR_Integer) 3)))))));
#line 338 "cse_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 1) = (MR_Integer) 0;
#line 338 "cse_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 2) = ((MR_Box) (check_hlds__cse_detection__NonLocalVars_41));
#line 338 "cse_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 3) = ((MR_Box) (check_hlds__cse_detection__Vars_42));
#line 338 "cse_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 4) = ((MR_Box) (check_hlds__cse_detection__Modes_43));
#line 338 "cse_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 5) = ((MR_Box) (check_hlds__cse_detection__Det_44));
#line 338 "cse_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 6) = ((MR_Box) (check_hlds__cse_detection__LambdaGoal_48));
#line 338 "cse_detection.m"
                }
#line 332 "cse_detection.m"
              }
#line 340 "cse_detection.m"
              break;
#line 340 "cse_detection.m"
          }
#line 347 "cse_detection.m"
          {
#line 347 "cse_detection.m"
            MR_Word base;
#line 347 "cse_detection.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 347 "cse_detection.m"
            *check_hlds__cse_detection__GoalExpr_9 = base;
#line 347 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__LHS_32));
#line 347 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__RHS_49));
#line 347 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__cse_detection__Mode_34));
#line 347 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__cse_detection__Unify_35));
#line 347 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__cse_detection__UnifyContext_36));
#line 347 "cse_detection.m"
          }
#line 329 "cse_detection.m"
        }
#line 325 "cse_detection.m"
        break;
#line 325 "cse_detection.m"
      case (MR_Integer) 2:
#line 325 "cse_detection.m"
        {
#line 326 "cse_detection.m"
          *check_hlds__cse_detection__GoalExpr_9 = check_hlds__cse_detection__GoalExpr0_8;
#line 327 "cse_detection.m"
          *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
#line 325 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90;
#line 325 "cse_detection.m"
        }
#line 325 "cse_detection.m"
        break;
#line 325 "cse_detection.m"
      case (MR_Integer) 3:
#line 325 "cse_detection.m"
#line 325 "cse_detection.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 0)))) {
#line 325 "cse_detection.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 325 "cse_detection.m"
          case (MR_Integer) 0:
#line 325 "cse_detection.m"
          case (MR_Integer) 1:
#line 325 "cse_detection.m"
            {
#line 326 "cse_detection.m"
              *check_hlds__cse_detection__GoalExpr_9 = check_hlds__cse_detection__GoalExpr0_8;
#line 327 "cse_detection.m"
              *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
#line 325 "cse_detection.m"
              *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90;
#line 325 "cse_detection.m"
            }
#line 325 "cse_detection.m"
            break;
#line 325 "cse_detection.m"
          case (MR_Integer) 2:
#line 372 "cse_detection.m"
            {
#line 372 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ConjType_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 372 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Goals0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
#line 372 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Goals_62;

#line 373 "cse_detection.m"
              {
#line 373 "cse_detection.m"
                check_hlds__cse_detection__detect_cse_in_conj_7_p_0(check_hlds__cse_detection__Goals0_61, &check_hlds__cse_detection__Goals_62, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__ConjType_60, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__Redo_13);
              }
#line 374 "cse_detection.m"
              {
#line 374 "cse_detection.m"
                MR_Word base;
#line 374 "cse_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 374 "cse_detection.m"
                *check_hlds__cse_detection__GoalExpr_9 = base;
#line 374 "cse_detection.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 374 "cse_detection.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__ConjType_60));
#line 374 "cse_detection.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__Goals_62));
#line 374 "cse_detection.m"
              }
#line 372 "cse_detection.m"
            }
#line 325 "cse_detection.m"
            break;
#line 325 "cse_detection.m"
          case (MR_Integer) 3:
#line 376 "cse_detection.m"
            {
#line 376 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Goals0_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));

#line 381 "cse_detection.m"
              if ((check_hlds__cse_detection__Goals0_112 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "cse_detection.m"
                {
#line 379 "cse_detection.m"
                  *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
#line 380 "cse_detection.m"
                  *check_hlds__cse_detection__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__cse_detection_scalar_common_1[5]);
#line 378 "cse_detection.m"
                  *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90;
#line 378 "cse_detection.m"
                }
#line 381 "cse_detection.m"
              else
#line 382 "cse_detection.m"
                {
#line 382 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__NonLocals_65;
#line 382 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__NonLocalsList_66;

#line 383 "cse_detection.m"
                  {
#line 383 "cse_detection.m"
                    check_hlds__cse_detection__NonLocals_65 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__cse_detection__GoalInfo_11);
                  }
#line 384 "cse_detection.m"
                  {
#line 384 "cse_detection.m"
                    check_hlds__cse_detection__NonLocalsList_66 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__cse_detection__NonLocals_65);
                  }
#line 385 "cse_detection.m"
                  {
#line 385 "cse_detection.m"
                    check_hlds__cse_detection__detect_cse_in_disj_8_p_0(check_hlds__cse_detection__NonLocalsList_66, check_hlds__cse_detection__Goals0_112, check_hlds__cse_detection__GoalInfo_11, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__Redo_13, check_hlds__cse_detection__GoalExpr_9);
#line 385 "cse_detection.m"
                    return;
                  }
#line 382 "cse_detection.m"
                }
#line 376 "cse_detection.m"
            }
#line 325 "cse_detection.m"
            break;
#line 325 "cse_detection.m"
          case (MR_Integer) 4:
#line 389 "cse_detection.m"
            {
#line 389 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 389 "cse_detection.m"
              MR_Word check_hlds__cse_detection__CanFail_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
#line 389 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Cases0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 3)));
#line 389 "cse_detection.m"
              MR_Word check_hlds__cse_detection__NonLocals_113;
#line 389 "cse_detection.m"
              MR_Word check_hlds__cse_detection__NonLocalsList_114;

#line 390 "cse_detection.m"
              {
#line 390 "cse_detection.m"
                check_hlds__cse_detection__NonLocals_113 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__cse_detection__GoalInfo_11);
              }
#line 391 "cse_detection.m"
              {
#line 391 "cse_detection.m"
                check_hlds__cse_detection__NonLocalsList_114 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__cse_detection__NonLocals_113);
              }
#line 392 "cse_detection.m"
              {
#line 392 "cse_detection.m"
                check_hlds__cse_detection__detect_cse_in_cases_10_p_0(check_hlds__cse_detection__NonLocalsList_114, check_hlds__cse_detection__Var_67, check_hlds__cse_detection__CanFail_68, check_hlds__cse_detection__Cases0_69, check_hlds__cse_detection__GoalInfo_11, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__Redo_13, check_hlds__cse_detection__GoalExpr_9);
#line 392 "cse_detection.m"
                return;
              }
#line 389 "cse_detection.m"
            }
#line 325 "cse_detection.m"
            break;
#line 325 "cse_detection.m"
          case (MR_Integer) 5:
#line 353 "cse_detection.m"
            {
#line 353 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Reason0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 353 "cse_detection.m"
              MR_Word check_hlds__cse_detection__SubGoal0_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
#line 354 "cse_detection.m"
              MR_Word check_hlds__cse_detection__V_103_103;
#line 354 "cse_detection.m"
              MR_Word check_hlds__cse_detection__V_57_57;

#line 354 "cse_detection.m"
              check_hlds__cse_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__cse_detection__Reason0_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 354 "cse_detection.m"
              if (check_hlds__cse_detection__succeeded)
#line 354 "cse_detection.m"
                {
#line 354 "cse_detection.m"
                  check_hlds__cse_detection__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 1)));
#line 354 "cse_detection.m"
                  check_hlds__cse_detection__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 2)));
#line 354 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_103_103 == (MR_Integer) 1);
#line 354 "cse_detection.m"
                }
#line 358 "cse_detection.m"
              if (check_hlds__cse_detection__succeeded)
#line 356 "cse_detection.m"
                {
#line 356 "cse_detection.m"
                  *check_hlds__cse_detection__GoalExpr_9 = check_hlds__cse_detection__GoalExpr0_8;
#line 357 "cse_detection.m"
                  *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
#line 356 "cse_detection.m"
                  *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90;
#line 356 "cse_detection.m"
                }
#line 358 "cse_detection.m"
              else
#line 359 "cse_detection.m"
                {
#line 359 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__SubGoal_108;
#line 361 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_105_105;
#line 362 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_58_58;

#line 359 "cse_detection.m"
                  {
#line 359 "cse_detection.m"
                    check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__SubGoal0_110, &check_hlds__cse_detection__SubGoal_108, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__Redo_13);
                  }
#line 361 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = (*check_hlds__cse_detection__Redo_13 == (MR_Integer) 1);
#line 361 "cse_detection.m"
                  if (check_hlds__cse_detection__succeeded)
#line 361 "cse_detection.m"
                    {
#line 362 "cse_detection.m"
                      check_hlds__cse_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__cse_detection__Reason0_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 362 "cse_detection.m"
                      if (check_hlds__cse_detection__succeeded)
#line 362 "cse_detection.m"
                        {
#line 362 "cse_detection.m"
                          check_hlds__cse_detection__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 1)));
#line 362 "cse_detection.m"
                          check_hlds__cse_detection__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 2)));
#line 362 "cse_detection.m"
                          check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_105_105 == (MR_Integer) 2);
#line 362 "cse_detection.m"
                        }
#line 361 "cse_detection.m"
                    }
#line 367 "cse_detection.m"
                  if (check_hlds__cse_detection__succeeded)
#line 366 "cse_detection.m"
                    {
#line 366 "cse_detection.m"
                      MR_Word check_hlds__cse_detection__V_59_59;

#line 366 "cse_detection.m"
                      *check_hlds__cse_detection__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__SubGoal_108, (MR_Integer) 0)));
#line 366 "cse_detection.m"
                      check_hlds__cse_detection__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__SubGoal_108, (MR_Integer) 1)));
#line 366 "cse_detection.m"
                    }
#line 367 "cse_detection.m"
                  else
#line 368 "cse_detection.m"
                    {
#line 368 "cse_detection.m"
                      MR_Word base;
#line 368 "cse_detection.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 368 "cse_detection.m"
                      *check_hlds__cse_detection__GoalExpr_9 = base;
#line 368 "cse_detection.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 368 "cse_detection.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__Reason0_56));
#line 368 "cse_detection.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__SubGoal_108));
#line 368 "cse_detection.m"
                    }
#line 359 "cse_detection.m"
                }
#line 353 "cse_detection.m"
            }
#line 325 "cse_detection.m"
            break;
#line 325 "cse_detection.m"
          case (MR_Integer) 6:
#line 395 "cse_detection.m"
            {
#line 395 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Cond0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
#line 395 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Then0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 3)));
#line 395 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Else0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 4)));
#line 395 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Vars_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 395 "cse_detection.m"
              MR_Word check_hlds__cse_detection__NonLocals_116;
#line 395 "cse_detection.m"
              MR_Word check_hlds__cse_detection__NonLocalsList_117;

#line 396 "cse_detection.m"
              {
#line 396 "cse_detection.m"
                check_hlds__cse_detection__NonLocals_116 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__cse_detection__GoalInfo_11);
              }
#line 397 "cse_detection.m"
              {
#line 397 "cse_detection.m"
                check_hlds__cse_detection__NonLocalsList_117 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__cse_detection__NonLocals_116);
              }
#line 398 "cse_detection.m"
              {
#line 398 "cse_detection.m"
                check_hlds__cse_detection__detect_cse_in_ite_11_p_0(check_hlds__cse_detection__NonLocalsList_117, check_hlds__cse_detection__Vars_115, check_hlds__cse_detection__Cond0_70, check_hlds__cse_detection__Then0_71, check_hlds__cse_detection__Else0_72, check_hlds__cse_detection__GoalInfo_11, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__Redo_13, check_hlds__cse_detection__GoalExpr_9);
#line 398 "cse_detection.m"
                return;
              }
#line 395 "cse_detection.m"
            }
#line 325 "cse_detection.m"
            break;
#line 325 "cse_detection.m"
          case (MR_Integer) 7:
#line 401 "cse_detection.m"
            {
#line 401 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ShortHand0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 401 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ShortHand_85;

#line 411 "cse_detection.m"
#line 411 "cse_detection.m"
              switch (MR_tag((MR_Word) check_hlds__cse_detection__ShortHand0_73)) {
#line 411 "cse_detection.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 411 "cse_detection.m"
                case (MR_Integer) 0:
#line 412 "cse_detection.m"
                  {
#line 414 "cse_detection.m"
                    {
#line 414 "cse_detection.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_goal_expr\'/7", (MR_String) "bi_implication");
#line 414 "cse_detection.m"
                      return;
                    }
#line 412 "cse_detection.m"
                  }
#line 411 "cse_detection.m"
                  break;
#line 411 "cse_detection.m"
                case (MR_Integer) 1:
#line 404 "cse_detection.m"
                  {
#line 404 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__AtomicGoalType_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 0)));
#line 404 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__Outer_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 1)));
#line 404 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__Inner_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 2)));
#line 404 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__MaybeOutputVars_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 3)));
#line 404 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__MainGoal0_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 4)));
#line 404 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__OrElseGoals0_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 5)));
#line 404 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__OrElseInners_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 6)));
#line 404 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__MainGoal_81;
#line 404 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__Redo1_82;
#line 404 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__OrElseGoals_83;
#line 404 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__Redo2_84;
#line 404 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_96_96;

#line 405 "cse_detection.m"
                    {
#line 405 "cse_detection.m"
                      check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__MainGoal0_78, &check_hlds__cse_detection__MainGoal_81, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_96_96, check_hlds__cse_detection__InstMap0_12, &check_hlds__cse_detection__Redo1_82);
                    }
#line 406 "cse_detection.m"
                    {
#line 406 "cse_detection.m"
                      check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(check_hlds__cse_detection__OrElseGoals0_79, &check_hlds__cse_detection__OrElseGoals_83, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_96_96, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__InstMap0_12, &check_hlds__cse_detection__Redo2_84);
                    }
#line 408 "cse_detection.m"
                    {
#line 408 "cse_detection.m"
                      check_hlds__cse_detection__ShortHand_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 408 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 0) = ((MR_Box) (check_hlds__cse_detection__AtomicGoalType_74));
#line 408 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 1) = ((MR_Box) (check_hlds__cse_detection__Outer_75));
#line 408 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 2) = ((MR_Box) (check_hlds__cse_detection__Inner_76));
#line 408 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 3) = ((MR_Box) (check_hlds__cse_detection__MaybeOutputVars_77));
#line 408 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 4) = ((MR_Box) (check_hlds__cse_detection__MainGoal_81));
#line 408 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 5) = ((MR_Box) (check_hlds__cse_detection__OrElseGoals_83));
#line 408 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 6) = ((MR_Box) (check_hlds__cse_detection__OrElseInners_80));
#line 408 "cse_detection.m"
                    }
#line 410 "cse_detection.m"
                    {
#line 410 "cse_detection.m"
                      mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_82, check_hlds__cse_detection__Redo2_84, check_hlds__cse_detection__Redo_13);
                    }
#line 404 "cse_detection.m"
                  }
#line 411 "cse_detection.m"
                  break;
#line 411 "cse_detection.m"
                case (MR_Integer) 2:
#line 416 "cse_detection.m"
                  {
#line 416 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__MaybeIO_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 0)));
#line 416 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__ResultVar_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 1)));
#line 416 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__SubGoal0_118 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 2)));
#line 416 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__SubGoal_119;

#line 419 "cse_detection.m"
                    {
#line 419 "cse_detection.m"
                      check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__SubGoal0_118, &check_hlds__cse_detection__SubGoal_119, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__Redo_13);
                    }
#line 420 "cse_detection.m"
                    {
#line 420 "cse_detection.m"
                      check_hlds__cse_detection__ShortHand_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 420 "cse_detection.m"
                      MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand_85, 0) = ((MR_Box) (check_hlds__cse_detection__MaybeIO_88));
#line 420 "cse_detection.m"
                      MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand_85, 1) = ((MR_Box) (check_hlds__cse_detection__ResultVar_89));
#line 420 "cse_detection.m"
                      MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand_85, 2) = ((MR_Box) (check_hlds__cse_detection__SubGoal_119));
#line 420 "cse_detection.m"
                    }
#line 416 "cse_detection.m"
                  }
#line 411 "cse_detection.m"
                  break;
#line 411 "cse_detection.m"
              }
#line 422 "cse_detection.m"
              {
#line 422 "cse_detection.m"
                MR_Word base;
#line 422 "cse_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "cse_detection.m"
                *check_hlds__cse_detection__GoalExpr_9 = base;
#line 422 "cse_detection.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 422 "cse_detection.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__ShortHand_85));
#line 422 "cse_detection.m"
              }
#line 401 "cse_detection.m"
            }
#line 325 "cse_detection.m"
            break;
#line 325 "cse_detection.m"
        }
#line 325 "cse_detection.m"
        break;
#line 325 "cse_detection.m"
    }
#line 325 "cse_detection.m"
  }
#line 315 "cse_detection.m"
}

#line 301 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(
#line 301 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_8,
#line 301 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goal_9,
#line 301 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_18,
#line 301 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_19,
#line 301 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_11,
#line 301 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__InstMap_12,
#line 301 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_13)
#line 301 "cse_detection.m"
{
#line 305 "cse_detection.m"
  {
#line 305 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 305 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalExpr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_8, (MR_Integer) 0)));
#line 305 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_8, (MR_Integer) 1)));
#line 305 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalExpr_16;
#line 305 "cse_detection.m"
    MR_Word check_hlds__cse_detection__InstMapDelta_17;

#line 307 "cse_detection.m"
    {
#line 307 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(check_hlds__cse_detection__GoalExpr0_14, &check_hlds__cse_detection__GoalExpr_16, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_18, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_19, check_hlds__cse_detection__GoalInfo_15, check_hlds__cse_detection__InstMap0_11, check_hlds__cse_detection__Redo_13);
    }
#line 309 "cse_detection.m"
    {
#line 309 "cse_detection.m"
      MR_Word base;
#line 309 "cse_detection.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "cse_detection.m"
      *check_hlds__cse_detection__Goal_9 = base;
#line 309 "cse_detection.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__cse_detection__GoalExpr_16));
#line 309 "cse_detection.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_15));
#line 309 "cse_detection.m"
    }
#line 310 "cse_detection.m"
    {
#line 310 "cse_detection.m"
      check_hlds__cse_detection__InstMapDelta_17 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__cse_detection__GoalInfo_15);
    }
#line 311 "cse_detection.m"
    {
#line 311 "cse_detection.m"
      hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__cse_detection__InstMap0_11, check_hlds__cse_detection__InstMapDelta_17, check_hlds__cse_detection__InstMap_12);
#line 311 "cse_detection.m"
      return;
    }
#line 305 "cse_detection.m"
  }
#line 301 "cse_detection.m"
}

#line 290 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_6_p_0(
#line 290 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_7,
#line 290 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goal_8,
#line 290 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_13,
#line 290 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_14,
#line 290 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_10,
#line 290 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_11)
#line 290 "cse_detection.m"
{
#line 294 "cse_detection.m"
  {
#line 294 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 294 "cse_detection.m"
    MR_Word check_hlds__cse_detection___InstMap_12;

#line 294 "cse_detection.m"
    {
#line 294 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Goal0_7, check_hlds__cse_detection__Goal_8, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_13, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_14, check_hlds__cse_detection__InstMap0_10, &check_hlds__cse_detection___InstMap_12, check_hlds__cse_detection__Redo_11);
    }
#line 294 "cse_detection.m"
  }
#line 290 "cse_detection.m"
}

#line 246 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_proc_pass_4_p_0(
#line 246 "cse_detection.m"
  MR_Word check_hlds__cse_detection__ModuleInfo_5,
#line 246 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_6,
#line 246 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26,
#line 246 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_27)
#line 246 "cse_detection.m"
{
#line 249 "cse_detection.m"
  {
#line 249 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 249 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Goal0_8;
#line 249 "cse_detection.m"
    MR_Word check_hlds__cse_detection__InstMap0_9;
#line 249 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Varset0_10;
#line 249 "cse_detection.m"
    MR_Word check_hlds__cse_detection__VarTypes0_11;
#line 249 "cse_detection.m"
    MR_Word check_hlds__cse_detection__RttiVarMaps0_12;
#line 249 "cse_detection.m"
    MR_Word check_hlds__cse_detection__CseInfo0_13;
#line 249 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Goal1_14;
#line 249 "cse_detection.m"
    MR_Word check_hlds__cse_detection__CseInfo_15;
#line 294 "cse_detection.m"
    MR_Word check_hlds__cse_detection___InstMap_40;

#line 254 "cse_detection.m"
    {
#line 254 "cse_detection.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__Goal0_8);
    }
#line 255 "cse_detection.m"
    {
#line 255 "cse_detection.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, check_hlds__cse_detection__ModuleInfo_5, &check_hlds__cse_detection__InstMap0_9);
    }
#line 256 "cse_detection.m"
    {
#line 256 "cse_detection.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__Varset0_10);
    }
#line 257 "cse_detection.m"
    {
#line 257 "cse_detection.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__VarTypes0_11);
    }
#line 258 "cse_detection.m"
    {
#line 258 "cse_detection.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__RttiVarMaps0_12);
    }
#line 259 "cse_detection.m"
    {
#line 259 "cse_detection.m"
      check_hlds__cse_detection__CseInfo0_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 259 "cse_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo0_13, 0) = ((MR_Box) (check_hlds__cse_detection__Varset0_10));
#line 259 "cse_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo0_13, 1) = ((MR_Box) (check_hlds__cse_detection__VarTypes0_11));
#line 259 "cse_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo0_13, 2) = ((MR_Box) (check_hlds__cse_detection__RttiVarMaps0_12));
#line 259 "cse_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo0_13, 3) = ((MR_Box) (check_hlds__cse_detection__ModuleInfo_5));
#line 259 "cse_detection.m"
    }
#line 294 "cse_detection.m"
    {
#line 294 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Goal0_8, &check_hlds__cse_detection__Goal1_14, check_hlds__cse_detection__CseInfo0_13, &check_hlds__cse_detection__CseInfo_15, check_hlds__cse_detection__InstMap0_9, &check_hlds__cse_detection___InstMap_40, check_hlds__cse_detection__Redo_6);
    }
#line 264 "cse_detection.m"
#line 264 "cse_detection.m"
    switch (*check_hlds__cse_detection__Redo_6) {
#line 264 "cse_detection.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 264 "cse_detection.m"
      case (MR_Integer) 0:
#line 263 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_27 = check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26;
#line 264 "cse_detection.m"
        break;
#line 264 "cse_detection.m"
      case (MR_Integer) 1:
#line 265 "cse_detection.m"
        {
#line 265 "cse_detection.m"
          MR_Word check_hlds__cse_detection__VarSet1_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo_15, (MR_Integer) 0)));
#line 265 "cse_detection.m"
          MR_Word check_hlds__cse_detection__VarTypes1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo_15, (MR_Integer) 1)));
#line 265 "cse_detection.m"
          MR_Word check_hlds__cse_detection__RttiVarMaps1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo_15, (MR_Integer) 2)));
#line 265 "cse_detection.m"
          MR_Word check_hlds__cse_detection__HeadVars_20;
#line 265 "cse_detection.m"
          MR_Word check_hlds__cse_detection__Goal_22;
#line 265 "cse_detection.m"
          MR_Word check_hlds__cse_detection__VarSet_23;
#line 265 "cse_detection.m"
          MR_Word check_hlds__cse_detection__VarTypes_24;
#line 265 "cse_detection.m"
          MR_Word check_hlds__cse_detection__RttiVarMaps_25;
#line 265 "cse_detection.m"
          MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_29_29;
#line 265 "cse_detection.m"
          MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_30_30;
#line 265 "cse_detection.m"
          MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_31_31;
#line 268 "cse_detection.m"
          MR_Word check_hlds__cse_detection__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo_15, (MR_Integer) 3)));
#line 271 "cse_detection.m"
          MR_Word check_hlds__cse_detection___Warnings_21;

#line 269 "cse_detection.m"
          {
#line 269 "cse_detection.m"
            hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__HeadVars_20);
          }
#line 271 "cse_detection.m"
          {
#line 271 "cse_detection.m"
            hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, check_hlds__cse_detection__HeadVars_20, &check_hlds__cse_detection___Warnings_21, check_hlds__cse_detection__Goal1_14, &check_hlds__cse_detection__Goal_22, check_hlds__cse_detection__VarSet1_16, &check_hlds__cse_detection__VarSet_23, check_hlds__cse_detection__VarTypes1_17, &check_hlds__cse_detection__VarTypes_24, check_hlds__cse_detection__RttiVarMaps1_18, &check_hlds__cse_detection__RttiVarMaps_25);
          }
#line 277 "cse_detection.m"
          {
#line 277 "cse_detection.m"
            hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__cse_detection__Goal_22, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_29_29);
          }
#line 278 "cse_detection.m"
          {
#line 278 "cse_detection.m"
            hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__cse_detection__VarSet_23, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_29_29, &check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_30_30);
          }
#line 279 "cse_detection.m"
          {
#line 279 "cse_detection.m"
            hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__cse_detection__VarTypes_24, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_30_30, &check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_31_31);
          }
#line 280 "cse_detection.m"
          {
#line 280 "cse_detection.m"
            hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(check_hlds__cse_detection__RttiVarMaps_25, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_31_31, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_27);
#line 280 "cse_detection.m"
            return;
          }
#line 265 "cse_detection.m"
        }
#line 264 "cse_detection.m"
        break;
#line 264 "cse_detection.m"
    }
#line 249 "cse_detection.m"
  }
#line 246 "cse_detection.m"
}

#line 129 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_procs_4_p_0(
#line 129 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 129 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 129 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3,
#line 129 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_4)
#line 129 "cse_detection.m"
{
#line 132 "cse_detection.m"
  while (MR_TRUE)
#line 132 "cse_detection.m"
    {
#line 132 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 132 "cse_detection.m"
      {
#line 132 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;

#line 132 "cse_detection.m"
        if ((check_hlds__cse_detection__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 132 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_4 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3;
#line 132 "cse_detection.m"
        else
#line 133 "cse_detection.m"
          {
#line 133 "cse_detection.m"
            MR_Integer check_hlds__cse_detection__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 133 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ProcIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 133 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_15_15;

#line 134 "cse_detection.m"
            {
#line 134 "cse_detection.m"
              check_hlds__cse_detection__detect_cse_in_proc_4_p_0(check_hlds__cse_detection__HeadVar__1_1, check_hlds__cse_detection__ProcId_10, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_15_15);
            }
#line 135 "cse_detection.m"
            /* direct tailcall eliminated */
#line 135 "cse_detection.m"
            {
#line 135 "cse_detection.m"
              MR_Word check_hlds__cse_detection__HeadVar__2__tmp_copy_2 = check_hlds__cse_detection__ProcIds_11;
#line 135 "cse_detection.m"
              MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_15_15;

#line 135 "cse_detection.m"
              check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 135 "cse_detection.m"
              check_hlds__cse_detection__HeadVar__2_2 = check_hlds__cse_detection__HeadVar__2__tmp_copy_2;
#line 135 "cse_detection.m"
            }
#line 135 "cse_detection.m"
            continue;
#line 133 "cse_detection.m"
          }
#line 132 "cse_detection.m"
      }
#line 132 "cse_detection.m"
      break;
#line 132 "cse_detection.m"
    }
#line 129 "cse_detection.m"
}

#line 112 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_preds_3_p_0(
#line 112 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 112 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2,
#line 112 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_3)
#line 112 "cse_detection.m"
{
#line 115 "cse_detection.m"
  while (MR_TRUE)
#line 115 "cse_detection.m"
    {
#line 115 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 115 "cse_detection.m"
      {
#line 115 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;

#line 115 "cse_detection.m"
        if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 115 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_3 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2;
#line 115 "cse_detection.m"
        else
#line 116 "cse_detection.m"
          {
#line 116 "cse_detection.m"
            MR_Word check_hlds__cse_detection__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 116 "cse_detection.m"
            MR_Word check_hlds__cse_detection__PredIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 116 "cse_detection.m"
            MR_Word check_hlds__cse_detection__PredTable_10;
#line 116 "cse_detection.m"
            MR_Word check_hlds__cse_detection__PredInfo_11;
#line 116 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_14_14;
#line 116 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ProcIds_23;
#line 118 "cse_detection.m"
            MR_Box check_hlds__cse_detection__conv0_PredInfo_11;

#line 117 "cse_detection.m"
            {
#line 117 "cse_detection.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2, &check_hlds__cse_detection__PredTable_10);
            }
#line 118 "cse_detection.m"
            {
#line 118 "cse_detection.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__cse_detection__PredTable_10, ((MR_Box) (check_hlds__cse_detection__PredId_7)), &check_hlds__cse_detection__conv0_PredInfo_11);
            }
#line 118 "cse_detection.m"
            check_hlds__cse_detection__PredInfo_11 = ((MR_Word) check_hlds__cse_detection__conv0_PredInfo_11);
#line 126 "cse_detection.m"
            {
#line 126 "cse_detection.m"
              check_hlds__cse_detection__ProcIds_23 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(check_hlds__cse_detection__PredInfo_11);
            }
#line 127 "cse_detection.m"
            {
#line 127 "cse_detection.m"
              check_hlds__cse_detection__detect_cse_in_procs_4_p_0(check_hlds__cse_detection__PredId_7, check_hlds__cse_detection__ProcIds_23, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_14_14);
            }
#line 120 "cse_detection.m"
            /* direct tailcall eliminated */
#line 120 "cse_detection.m"
            {
#line 120 "cse_detection.m"
              MR_Word check_hlds__cse_detection__HeadVar__1__tmp_copy_1 = check_hlds__cse_detection__PredIds_8;
#line 120 "cse_detection.m"
              MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_14_14;

#line 120 "cse_detection.m"
              check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
#line 120 "cse_detection.m"
              check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__HeadVar__1__tmp_copy_1;
#line 120 "cse_detection.m"
            }
#line 120 "cse_detection.m"
            continue;
#line 116 "cse_detection.m"
          }
#line 115 "cse_detection.m"
      }
#line 115 "cse_detection.m"
      break;
#line 115 "cse_detection.m"
    }
#line 112 "cse_detection.m"
}

#line 64 "cse_detection.m"
void MR_CALL 
check_hlds__cse_detection__detect_cse_in_proc_4_p_0(
#line 64 "cse_detection.m"
  MR_Word check_hlds__cse_detection__PredId_5,
#line 64 "cse_detection.m"
  MR_Integer check_hlds__cse_detection__ProcId_6,
#line 64 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33,
#line 64 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_34)
#line 64 "cse_detection.m"
{
#line 137 "cse_detection.m"
  while (MR_TRUE)
#line 137 "cse_detection.m"
    {
#line 137 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 137 "cse_detection.m"
      {
#line 137 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;
#line 137 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeCtorInfo_76_76;
#line 137 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeCtorInfo_77_77;
#line 137 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeCtorInfo_79_79;
#line 137 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Globals_8;
#line 137 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VeryVerbose_9;
#line 137 "cse_detection.m"
        MR_Word check_hlds__cse_detection__PredTable0_11;
#line 137 "cse_detection.m"
        MR_Word check_hlds__cse_detection__PredInfo0_12;
#line 137 "cse_detection.m"
        MR_Word check_hlds__cse_detection__ProcTable0_13;
#line 137 "cse_detection.m"
        MR_Word check_hlds__cse_detection__ProcInfo0_14;
#line 137 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo_15;
#line 137 "cse_detection.m"
        MR_Word check_hlds__cse_detection__ProcInfo1_16;
#line 137 "cse_detection.m"
        MR_Word check_hlds__cse_detection__ProcTable1_17;
#line 137 "cse_detection.m"
        MR_Word check_hlds__cse_detection__PredInfo1_18;
#line 137 "cse_detection.m"
        MR_Word check_hlds__cse_detection__PredTable1_19;
#line 137 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Statistics_20;
#line 137 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42;
#line 154 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv0_PredInfo0_12;
#line 156 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv1_ProcInfo0_14;

#line 138 "cse_detection.m"
        {
#line 138 "cse_detection.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__cse_detection__Globals_8);
        }
#line 139 "cse_detection.m"
        {
#line 139 "cse_detection.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__cse_detection__Globals_8, (MR_Integer) 46, &check_hlds__cse_detection__VeryVerbose_9);
        }
#line 147 "cse_detection.m"
#line 147 "cse_detection.m"
        switch (check_hlds__cse_detection__VeryVerbose_9) {
#line 147 "cse_detection.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 147 "cse_detection.m"
          case (MR_Integer) 0:
#line 148 "cse_detection.m"
            {
#line 148 "cse_detection.m"
            }
#line 147 "cse_detection.m"
            break;
#line 147 "cse_detection.m"
          case (MR_Integer) 1:
#line 142 "cse_detection.m"
            {
#line 143 "cse_detection.m"
              {
#line 143 "cse_detection.m"
                mercury__io__write_string_3_p_0((MR_String) "% Detecting common deconstructions for ");
              }
#line 144 "cse_detection.m"
              {
#line 144 "cse_detection.m"
                hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, check_hlds__cse_detection__PredId_5);
              }
#line 145 "cse_detection.m"
              {
#line 145 "cse_detection.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
#line 142 "cse_detection.m"
            }
#line 147 "cse_detection.m"
            break;
#line 147 "cse_detection.m"
        }
#line 153 "cse_detection.m"
        {
#line 153 "cse_detection.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__cse_detection__PredTable0_11);
        }
#line 6599 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeCtorInfo_76_76 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 6601 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeCtorInfo_77_77 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 154 "cse_detection.m"
        {
#line 154 "cse_detection.m"
          mercury__map__lookup_3_p_0(check_hlds__cse_detection__TypeCtorInfo_76_76, check_hlds__cse_detection__TypeCtorInfo_77_77, check_hlds__cse_detection__PredTable0_11, ((MR_Box) (check_hlds__cse_detection__PredId_5)), &check_hlds__cse_detection__conv0_PredInfo0_12);
        }
#line 154 "cse_detection.m"
        check_hlds__cse_detection__PredInfo0_12 = ((MR_Word) check_hlds__cse_detection__conv0_PredInfo0_12);
#line 155 "cse_detection.m"
        {
#line 155 "cse_detection.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__cse_detection__PredInfo0_12, &check_hlds__cse_detection__ProcTable0_13);
        }
#line 6615 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeCtorInfo_79_79 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 156 "cse_detection.m"
        {
#line 156 "cse_detection.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__cse_detection__TypeCtorInfo_79_79, check_hlds__cse_detection__ProcTable0_13, check_hlds__cse_detection__ProcId_6, &check_hlds__cse_detection__conv1_ProcInfo0_14);
        }
#line 156 "cse_detection.m"
        check_hlds__cse_detection__ProcInfo0_14 = ((MR_Word) check_hlds__cse_detection__conv1_ProcInfo0_14);
#line 158 "cse_detection.m"
        {
#line 158 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_proc_pass_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__cse_detection__Redo_15, check_hlds__cse_detection__ProcInfo0_14, &check_hlds__cse_detection__ProcInfo1_16);
        }
#line 160 "cse_detection.m"
        {
#line 160 "cse_detection.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__cse_detection__TypeCtorInfo_79_79, check_hlds__cse_detection__ProcId_6, ((MR_Box) (check_hlds__cse_detection__ProcInfo1_16)), check_hlds__cse_detection__ProcTable0_13, &check_hlds__cse_detection__ProcTable1_17);
        }
#line 161 "cse_detection.m"
        {
#line 161 "cse_detection.m"
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__cse_detection__ProcTable1_17, check_hlds__cse_detection__PredInfo0_12, &check_hlds__cse_detection__PredInfo1_18);
        }
#line 162 "cse_detection.m"
        {
#line 162 "cse_detection.m"
          mercury__map__det_update_4_p_0(check_hlds__cse_detection__TypeCtorInfo_76_76, check_hlds__cse_detection__TypeCtorInfo_77_77, ((MR_Box) (check_hlds__cse_detection__PredId_5)), ((MR_Box) (check_hlds__cse_detection__PredInfo1_18)), check_hlds__cse_detection__PredTable0_11, &check_hlds__cse_detection__PredTable1_19);
        }
#line 163 "cse_detection.m"
        {
#line 163 "cse_detection.m"
          hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__cse_detection__PredTable1_19, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42);
        }
#line 165 "cse_detection.m"
        {
#line 165 "cse_detection.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__cse_detection__Globals_8, (MR_Integer) 56, &check_hlds__cse_detection__Statistics_20);
        }
#line 167 "cse_detection.m"
        {
#line 167 "cse_detection.m"
          libs__file_util__maybe_report_stats_3_p_0(check_hlds__cse_detection__Statistics_20);
        }
#line 171 "cse_detection.m"
#line 171 "cse_detection.m"
        switch (check_hlds__cse_detection__Redo_15) {
#line 171 "cse_detection.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 171 "cse_detection.m"
          case (MR_Integer) 0:
#line 170 "cse_detection.m"
            *check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_34 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42;
#line 171 "cse_detection.m"
            break;
#line 171 "cse_detection.m"
          case (MR_Integer) 1:
#line 172 "cse_detection.m"
            {
#line 172 "cse_detection.m"
              MR_Word check_hlds__cse_detection__PredTable2_24;
#line 172 "cse_detection.m"
              MR_Word check_hlds__cse_detection__PredInfo2_25;
#line 172 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ProcTable2_26;
#line 172 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ProcInfo2_27;
#line 172 "cse_detection.m"
              MR_Word check_hlds__cse_detection__SwitchDetectInfo_28;
#line 172 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ProcInfo_29;
#line 172 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ProcTable3_30;
#line 172 "cse_detection.m"
              MR_Word check_hlds__cse_detection__PredInfo3_31;
#line 172 "cse_detection.m"
              MR_Word check_hlds__cse_detection__PredTable3_32;
#line 172 "cse_detection.m"
              MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52;
#line 172 "cse_detection.m"
              MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_64_64;
#line 209 "cse_detection.m"
              MR_Box check_hlds__cse_detection__conv2_PredInfo2_25;
#line 211 "cse_detection.m"
              MR_Box check_hlds__cse_detection__conv3_ProcInfo2_27;

#line 6701 "check_hlds.cse_detection.c"
#line 6702 "check_hlds.cse_detection.c"
              switch (check_hlds__cse_detection__VeryVerbose_9) {
#line 6704 "check_hlds.cse_detection.c"
                default: /*NOTREACHED*/ MR_assert(0);
#line 6706 "check_hlds.cse_detection.c"
                case (MR_Integer) 0:
#line 6708 "check_hlds.cse_detection.c"
                  {
#line 6710 "check_hlds.cse_detection.c"
                    MR_Word check_hlds__cse_detection__ModeSpecs_21;
#line 6712 "check_hlds.cse_detection.c"
                    MR_Word check_hlds__cse_detection__ContainsErrors_23;
#line 183 "cse_detection.m"
                    MR_Word check_hlds__cse_detection___Changed_22;

#line 183 "cse_detection.m"
                    {
#line 183 "cse_detection.m"
                      check_hlds__modes__modecheck_proc_6_p_0(check_hlds__cse_detection__ProcId_6, check_hlds__cse_detection__PredId_5, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__cse_detection__ModeSpecs_21, &check_hlds__cse_detection___Changed_22);
                    }
#line 185 "cse_detection.m"
                    {
#line 185 "cse_detection.m"
                      libs__file_util__maybe_report_stats_3_p_0(check_hlds__cse_detection__Statistics_20);
                    }
#line 187 "cse_detection.m"
                    {
#line 187 "cse_detection.m"
                      check_hlds__cse_detection__ContainsErrors_23 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__cse_detection__Globals_8, check_hlds__cse_detection__ModeSpecs_21);
                    }
#line 191 "cse_detection.m"
#line 191 "cse_detection.m"
                    switch (check_hlds__cse_detection__ContainsErrors_23) {
#line 191 "cse_detection.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 191 "cse_detection.m"
                      case (MR_Integer) 0:
#line 192 "cse_detection.m"
                        {
#line 192 "cse_detection.m"
                        }
#line 191 "cse_detection.m"
                        break;
#line 191 "cse_detection.m"
                      case (MR_Integer) 1:
#line 189 "cse_detection.m"
                        {
#line 190 "cse_detection.m"
                          {
#line 190 "cse_detection.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_proc\'/4", (MR_String) "mode check fails when repeated");
#line 190 "cse_detection.m"
                            return;
                          }
#line 189 "cse_detection.m"
                        }
#line 191 "cse_detection.m"
                        break;
#line 191 "cse_detection.m"
                    }
#line 6762 "check_hlds.cse_detection.c"
                  }
#line 6764 "check_hlds.cse_detection.c"
                  break;
#line 6766 "check_hlds.cse_detection.c"
                case (MR_Integer) 1:
#line 6768 "check_hlds.cse_detection.c"
                  {
#line 6770 "check_hlds.cse_detection.c"
                    MR_Word check_hlds__cse_detection__ModeSpecs_91;
#line 6772 "check_hlds.cse_detection.c"
                    MR_Word check_hlds__cse_detection__ContainsErrors_93;
#line 183 "cse_detection.m"
                    MR_Word check_hlds__cse_detection___Changed_80;

#line 176 "cse_detection.m"
                    {
#line 176 "cse_detection.m"
                      mercury__io__write_string_3_p_0((MR_String) "% Repeating mode check for ");
                    }
#line 177 "cse_detection.m"
                    {
#line 177 "cse_detection.m"
                      hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42, check_hlds__cse_detection__PredId_5);
                    }
#line 178 "cse_detection.m"
                    {
#line 178 "cse_detection.m"
                      mercury__io__write_string_3_p_0((MR_String) "\n");
                    }
#line 183 "cse_detection.m"
                    {
#line 183 "cse_detection.m"
                      check_hlds__modes__modecheck_proc_6_p_0(check_hlds__cse_detection__ProcId_6, check_hlds__cse_detection__PredId_5, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__cse_detection__ModeSpecs_91, &check_hlds__cse_detection___Changed_80);
                    }
#line 185 "cse_detection.m"
                    {
#line 185 "cse_detection.m"
                      libs__file_util__maybe_report_stats_3_p_0(check_hlds__cse_detection__Statistics_20);
                    }
#line 187 "cse_detection.m"
                    {
#line 187 "cse_detection.m"
                      check_hlds__cse_detection__ContainsErrors_93 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__cse_detection__Globals_8, check_hlds__cse_detection__ModeSpecs_91);
                    }
#line 191 "cse_detection.m"
#line 191 "cse_detection.m"
                    switch (check_hlds__cse_detection__ContainsErrors_93) {
#line 191 "cse_detection.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 191 "cse_detection.m"
                      case (MR_Integer) 0:
#line 192 "cse_detection.m"
                        {
#line 192 "cse_detection.m"
                        }
#line 191 "cse_detection.m"
                        break;
#line 191 "cse_detection.m"
                      case (MR_Integer) 1:
#line 189 "cse_detection.m"
                        {
#line 190 "cse_detection.m"
                          {
#line 190 "cse_detection.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_proc\'/4", (MR_String) "mode check fails when repeated");
#line 190 "cse_detection.m"
                            return;
                          }
#line 189 "cse_detection.m"
                        }
#line 191 "cse_detection.m"
                        break;
#line 191 "cse_detection.m"
                    }
#line 200 "cse_detection.m"
                    {
#line 200 "cse_detection.m"
                      mercury__io__write_string_3_p_0((MR_String) "% Repeating switch detection for ");
                    }
#line 201 "cse_detection.m"
                    {
#line 201 "cse_detection.m"
                      hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, check_hlds__cse_detection__PredId_5);
                    }
#line 202 "cse_detection.m"
                    {
#line 202 "cse_detection.m"
                      mercury__io__write_string_3_p_0((MR_String) "\n");
                    }
#line 6852 "check_hlds.cse_detection.c"
                  }
#line 6854 "check_hlds.cse_detection.c"
                  break;
#line 6856 "check_hlds.cse_detection.c"
              }
#line 208 "cse_detection.m"
              {
#line 208 "cse_detection.m"
                hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__cse_detection__PredTable2_24);
              }
#line 209 "cse_detection.m"
              {
#line 209 "cse_detection.m"
                mercury__map__lookup_3_p_0(check_hlds__cse_detection__TypeCtorInfo_76_76, check_hlds__cse_detection__TypeCtorInfo_77_77, check_hlds__cse_detection__PredTable2_24, ((MR_Box) (check_hlds__cse_detection__PredId_5)), &check_hlds__cse_detection__conv2_PredInfo2_25);
              }
#line 209 "cse_detection.m"
              check_hlds__cse_detection__PredInfo2_25 = ((MR_Word) check_hlds__cse_detection__conv2_PredInfo2_25);
#line 210 "cse_detection.m"
              {
#line 210 "cse_detection.m"
                hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__cse_detection__PredInfo2_25, &check_hlds__cse_detection__ProcTable2_26);
              }
#line 211 "cse_detection.m"
              {
#line 211 "cse_detection.m"
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__cse_detection__TypeCtorInfo_79_79, check_hlds__cse_detection__ProcTable2_26, check_hlds__cse_detection__ProcId_6, &check_hlds__cse_detection__conv3_ProcInfo2_27);
              }
#line 211 "cse_detection.m"
              check_hlds__cse_detection__ProcInfo2_27 = ((MR_Word) check_hlds__cse_detection__conv3_ProcInfo2_27);
#line 213 "cse_detection.m"
              {
#line 213 "cse_detection.m"
                check_hlds__cse_detection__SwitchDetectInfo_28 = check_hlds__switch_detection__init_switch_detect_info_1_f_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52);
              }
#line 214 "cse_detection.m"
              {
#line 214 "cse_detection.m"
                check_hlds__switch_detection__detect_switches_in_proc_3_p_0(check_hlds__cse_detection__SwitchDetectInfo_28, check_hlds__cse_detection__ProcInfo2_27, &check_hlds__cse_detection__ProcInfo_29);
              }
#line 216 "cse_detection.m"
              {
#line 216 "cse_detection.m"
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__cse_detection__TypeCtorInfo_79_79, check_hlds__cse_detection__ProcId_6, ((MR_Box) (check_hlds__cse_detection__ProcInfo_29)), check_hlds__cse_detection__ProcTable2_26, &check_hlds__cse_detection__ProcTable3_30);
              }
#line 217 "cse_detection.m"
              {
#line 217 "cse_detection.m"
                hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__cse_detection__ProcTable3_30, check_hlds__cse_detection__PredInfo2_25, &check_hlds__cse_detection__PredInfo3_31);
              }
#line 218 "cse_detection.m"
              {
#line 218 "cse_detection.m"
                mercury__map__det_update_4_p_0(check_hlds__cse_detection__TypeCtorInfo_76_76, check_hlds__cse_detection__TypeCtorInfo_77_77, ((MR_Box) (check_hlds__cse_detection__PredId_5)), ((MR_Box) (check_hlds__cse_detection__PredInfo3_31)), check_hlds__cse_detection__PredTable2_24, &check_hlds__cse_detection__PredTable3_32);
              }
#line 219 "cse_detection.m"
              {
#line 219 "cse_detection.m"
                hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__cse_detection__PredTable3_32, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_64_64);
              }
#line 222 "cse_detection.m"
              {
#line 222 "cse_detection.m"
                libs__file_util__maybe_report_stats_3_p_0(check_hlds__cse_detection__Statistics_20);
              }
#line 232 "cse_detection.m"
#line 232 "cse_detection.m"
              switch (check_hlds__cse_detection__VeryVerbose_9) {
#line 232 "cse_detection.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 232 "cse_detection.m"
                case (MR_Integer) 0:
#line 233 "cse_detection.m"
                  {
#line 233 "cse_detection.m"
                  }
#line 232 "cse_detection.m"
                  break;
#line 232 "cse_detection.m"
                case (MR_Integer) 1:
#line 226 "cse_detection.m"
                  {
#line 227 "cse_detection.m"
                    {
#line 227 "cse_detection.m"
                      mercury__io__write_string_3_p_0((MR_String) "% Repeating common deconstruction detection for ");
                    }
#line 229 "cse_detection.m"
                    {
#line 229 "cse_detection.m"
                      hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_64_64, check_hlds__cse_detection__PredId_5);
                    }
#line 230 "cse_detection.m"
                    {
#line 230 "cse_detection.m"
                      mercury__io__write_string_3_p_0((MR_String) "\n");
                    }
#line 226 "cse_detection.m"
                  }
#line 232 "cse_detection.m"
                  break;
#line 232 "cse_detection.m"
              }
#line 235 "cse_detection.m"
              /* direct tailcall eliminated */
#line 235 "cse_detection.m"
              {
#line 235 "cse_detection.m"
                MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_33 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_64_64;

#line 235 "cse_detection.m"
                check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_33;
#line 235 "cse_detection.m"
              }
#line 235 "cse_detection.m"
              continue;
#line 172 "cse_detection.m"
            }
#line 171 "cse_detection.m"
            break;
#line 171 "cse_detection.m"
        }
#line 137 "cse_detection.m"
      }
#line 137 "cse_detection.m"
      break;
#line 137 "cse_detection.m"
    }
#line 64 "cse_detection.m"
}

#line 62 "cse_detection.m"
void MR_CALL 
check_hlds__cse_detection__detect_cse_in_module_2_p_0(
#line 62 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_5,
#line 62 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_6)
#line 62 "cse_detection.m"
{
#line 106 "cse_detection.m"
  {
#line 106 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 106 "cse_detection.m"
    MR_Word check_hlds__cse_detection__PredIds_4;

#line 109 "cse_detection.m"
    {
#line 109 "cse_detection.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_5, &check_hlds__cse_detection__PredIds_4);
    }
#line 110 "cse_detection.m"
    {
#line 110 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_preds_3_p_0(check_hlds__cse_detection__PredIds_4, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_5, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_6);
#line 110 "cse_detection.m"
      return;
    }
#line 106 "cse_detection.m"
  }
#line 62 "cse_detection.m"
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
