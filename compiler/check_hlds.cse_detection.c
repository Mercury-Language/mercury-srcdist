/*
** Automatically generated from `cse_detection.m'
** by the Mercury compiler,
** version rotd-2015-06-22
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




#line 145 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 148 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 151 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 154 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 157 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 160 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 163 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 166 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 169 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 172 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 175 "check_hlds.cse_detection.c"
static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_info_0_0[4];

#line 178 "check_hlds.cse_detection.c"
static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_info_0_0[4];

#line 181 "check_hlds.cse_detection.c"
static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0;

#line 184 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_info_0_0[1];

#line 187 "check_hlds.cse_detection.c"
static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_info_0[1];

#line 190 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_info_0[1];

#line 193 "check_hlds.cse_detection.c"
static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_info_0[1];

#line 196 "check_hlds.cse_detection.c"
static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_0;

#line 199 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 202 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 205 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 208 "check_hlds.cse_detection.c"
static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_state_0_1[3];

#line 211 "check_hlds.cse_detection.c"
static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_state_0_1[3];

#line 214 "check_hlds.cse_detection.c"
static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1;

#line 217 "check_hlds.cse_detection.c"
static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_2;

#line 220 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_0[2];

#line 223 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_1[1];

#line 226 "check_hlds.cse_detection.c"
static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_state_0[2];

#line 229 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_state_0[3];

#line 232 "check_hlds.cse_detection.c"
static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_state_0[3];

#line 235 "check_hlds.cse_detection.c"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0_10001(
#line 238 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 240 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2);

#line 243 "check_hlds.cse_detection.c"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0_10001(
#line 246 "check_hlds.cse_detection.c"
  MR_Box * check_hlds__cse_detection__wrapper_arg_1,
#line 248 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 250 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_3);

#line 253 "check_hlds.cse_detection.c"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0_10001(
#line 256 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 258 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2);

#line 261 "check_hlds.cse_detection.c"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0_10001(
#line 264 "check_hlds.cse_detection.c"
  MR_Box * check_hlds__cse_detection__wrapper_arg_1,
#line 266 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 268 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_3);

#line 661 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0(
#line 661 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__1_1,
#line 661 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 661 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3);

#line 661 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0(
#line 661 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 661 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2);

#line 239 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0(
#line 239 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__1_1,
#line 239 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 239 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3);

#line 239 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0(
#line 239 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 239 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2);

#line 952 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_merged_tvars_6_p_0(
#line 952 "cse_detection.m"
  MR_Word check_hlds__cse_detection__RttiVarMaps_7,
#line 952 "cse_detection.m"
  MR_Word check_hlds__cse_detection__LaterOldNewMap_8,
#line 952 "cse_detection.m"
  MR_Word check_hlds__cse_detection__NewTvarMap_9,
#line 952 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Tvar_10,
#line 952 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17,
#line 952 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_Renaming_18);

#line 938 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_type_info_locn_tvar_map_5_p_0(
#line 938 "cse_detection.m"
  MR_Word check_hlds__cse_detection__RttiVarMaps_6,
#line 938 "cse_detection.m"
  MR_Word check_hlds__cse_detection__FirstOldNewMap_7,
#line 938 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Tvar_8,
#line 938 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_0_14,
#line 938 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_15);

#line 932 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_3(
#line 932 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 932 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 932 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_2);

#line 923 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_2(
#line 923 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 923 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 923 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 923 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3);

#line 916 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_1(
#line 916 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 916 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 916 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 916 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3);

#line 880 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(
#line 880 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Unify_6,
#line 880 "cse_detection.m"
  MR_Word check_hlds__cse_detection__FirstOldNew_7,
#line 880 "cse_detection.m"
  MR_Word check_hlds__cse_detection__LaterOldNew_8,
#line 880 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25,
#line 880 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26);

#line 796 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__pair_subterms_4_p_0(
#line 796 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 796 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 796 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3,
#line 796 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__4_4);

#line 772 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__find_similar_deconstruct_5_p_0(
#line 772 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HoistedUnifyGoal_6,
#line 772 "cse_detection.m"
  MR_Word check_hlds__cse_detection__OldUnifyGoal_7,
#line 772 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Context_8,
#line 772 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__OldHoistedVars_9,
#line 772 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Replacements_10);

#line 734 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__create_parallel_subterms_7_p_0(
#line 734 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 734 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Context_2,
#line 734 "cse_detection.m"
  MR_Word check_hlds__cse_detection__UnifyContext_3,
#line 734 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_4,
#line 734 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_5,
#line 734 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6,
#line 734 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7);

#line 670 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(
#line 670 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Var_8,
#line 670 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_9,
#line 670 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goals_10,
#line 670 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22,
#line 670 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_23,
#line 670 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24,
#line 670 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25);

#line 635 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0_1(
#line 635 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 635 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 635 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 635 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 635 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 635 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 635 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 635 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7);

#line 627 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(
#line 627 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 627 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 627 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3,
#line 627 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_4,
#line 627 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 627 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 627 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7);

#line 610 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0_1(
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 610 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 610 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 610 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7);

#line 603 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0(
#line 603 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 603 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 603 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3,
#line 603 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_4,
#line 603 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 603 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 603 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7);

#line 565 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_arms_10_p_0(
#line 565 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cond0_11,
#line 565 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Cond_12,
#line 565 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Then0_13,
#line 565 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Then_14,
#line 565 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Else0_15,
#line 565 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Else_16,
#line 565 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25,
#line 565 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26,
#line 565 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_18,
#line 565 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_19);

#line 610 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0_2(
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 610 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 610 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 610 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7);

#line 610 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0_1(
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 610 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 610 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 610 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7);

#line 534 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0(
#line 534 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 534 "cse_detection.m"
  MR_Word check_hlds__cse_detection__IfVars_2,
#line 534 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cond0_3,
#line 534 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Then0_4,
#line 534 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Else0_5,
#line 534 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo_6,
#line 534 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap_7,
#line 534 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8,
#line 534 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_9,
#line 534 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_10,
#line 534 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__11_11);

#line 522 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_arms_6_p_0(
#line 522 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 522 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 522 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 522 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 522 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_5,
#line 522 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6);

#line 493 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_10_p_0(
#line 493 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 493 "cse_detection.m"
  MR_Word check_hlds__cse_detection__SwitchVar_2,
#line 493 "cse_detection.m"
  MR_Word check_hlds__cse_detection__CanFail_3,
#line 493 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cases0_4,
#line 493 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__5_5,
#line 493 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_6,
#line 493 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7,
#line 493 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_8,
#line 493 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_9,
#line 493 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__10_10);

#line 482 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(
#line 482 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 482 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 482 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 482 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 482 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_5,
#line 482 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6);

#line 455 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_disj_8_p_0(
#line 455 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 455 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goals0_2,
#line 455 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo0_3,
#line 455 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__4_4,
#line 455 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 455 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 455 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_7,
#line 455 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__8_8);

#line 428 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_conj_7_p_0(
#line 428 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 428 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 428 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 428 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 428 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__5_5,
#line 428 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__6_6,
#line 428 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7);

#line 316 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(
#line 316 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalExpr0_8,
#line 316 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__GoalExpr_9,
#line 316 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90,
#line 316 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91,
#line 316 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo_11,
#line 316 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_12,
#line 316 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_13);

#line 302 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(
#line 302 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_8,
#line 302 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goal_9,
#line 302 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_18,
#line 302 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_19,
#line 302 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_11,
#line 302 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__InstMap_12,
#line 302 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_13);

#line 291 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_6_p_0(
#line 291 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_7,
#line 291 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goal_8,
#line 291 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_13,
#line 291 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_14,
#line 291 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_10,
#line 291 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_11);

#line 247 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_proc_pass_4_p_0(
#line 247 "cse_detection.m"
  MR_Word check_hlds__cse_detection__ModuleInfo_5,
#line 247 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_6,
#line 247 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26,
#line 247 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_27);

#line 130 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_procs_4_p_0(
#line 130 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 130 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 130 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3,
#line 130 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_4);

#line 113 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_preds_3_p_0(
#line 113 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 113 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2,
#line 113 "cse_detection.m"
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
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "bitmap.mh"



#line 961 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 969 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 977 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 985 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 994 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1002 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1010 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0,
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1019 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1028 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1036 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1045 "check_hlds.cse_detection.c"
static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_info_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__cse_detection__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__cse_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0
};

#line 1053 "check_hlds.cse_detection.c"
static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_info_0_0[4] = {
  (MR_String) "csei_varset",
  (MR_String) "csei_vartypes",
  (MR_String) "csei_rtti_varmaps",
  (MR_String) "csei_module_info"
};

#line 1061 "check_hlds.cse_detection.c"
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

#line 1076 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_info_0_0[1] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0
};

#line 1081 "check_hlds.cse_detection.c"
static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_info_0_0
  }
};

#line 1090 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_info_0[1] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0
};

#line 1095 "check_hlds.cse_detection.c"
static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_info_0[1] = {
  (MR_Integer) 0
};

#line 1100 "check_hlds.cse_detection.c"
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

#line 1117 "check_hlds.cse_detection.c"
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

#line 1132 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1141 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__cse_detection__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1149 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1157 "check_hlds.cse_detection.c"
static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_state_0_1[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__cse_detection__list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1164 "check_hlds.cse_detection.c"
static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_state_0_1[3] = {
  (MR_String) "goal",
  (MR_String) "first_old_new",
  (MR_String) "later_old_new"
};

#line 1171 "check_hlds.cse_detection.c"
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

#line 1186 "check_hlds.cse_detection.c"
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

#line 1201 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_0[2] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_0,
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_2
};

#line 1207 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_1[1] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1
};

#line 1212 "check_hlds.cse_detection.c"
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

#line 1226 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_state_0[3] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_0,
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1,
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_2
};

#line 1233 "check_hlds.cse_detection.c"
static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_state_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1240 "check_hlds.cse_detection.c"
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

#line 1257 "check_hlds.cse_detection.c"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0_10001(
#line 1260 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 1262 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2)
#line 1264 "check_hlds.cse_detection.c"
{
#line 1266 "check_hlds.cse_detection.c"
  {
#line 1268 "check_hlds.cse_detection.c"
    MR_bool check_hlds__cse_detection__succeeded;

#line 1271 "check_hlds.cse_detection.c"
    {
#line 1273 "check_hlds.cse_detection.c"
      check_hlds__cse_detection__succeeded = check_hlds__cse_detection____Unify____cse_info_0_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2));
    }
#line 1276 "check_hlds.cse_detection.c"
    return check_hlds__cse_detection__succeeded;
#line 1278 "check_hlds.cse_detection.c"
  }
#line 1280 "check_hlds.cse_detection.c"
}

#line 1283 "check_hlds.cse_detection.c"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0_10001(
#line 1286 "check_hlds.cse_detection.c"
  MR_Box * check_hlds__cse_detection__wrapper_arg_1,
#line 1288 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 1290 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_3)
#line 1292 "check_hlds.cse_detection.c"
{
#line 1294 "check_hlds.cse_detection.c"
  {
#line 1296 "check_hlds.cse_detection.c"
    MR_Word check_hlds__cse_detection__conv0_HeadVar__1_1;

#line 1299 "check_hlds.cse_detection.c"
    {
#line 1301 "check_hlds.cse_detection.c"
      check_hlds__cse_detection____Compare____cse_info_0_0(&check_hlds__cse_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), ((MR_Word) check_hlds__cse_detection__wrapper_arg_3));
    }
#line 1304 "check_hlds.cse_detection.c"
    *check_hlds__cse_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__cse_detection__conv0_HeadVar__1_1));
#line 1306 "check_hlds.cse_detection.c"
  }
#line 1308 "check_hlds.cse_detection.c"
}

#line 1311 "check_hlds.cse_detection.c"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0_10001(
#line 1314 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 1316 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2)
#line 1318 "check_hlds.cse_detection.c"
{
#line 1320 "check_hlds.cse_detection.c"
  {
#line 1322 "check_hlds.cse_detection.c"
    MR_bool check_hlds__cse_detection__succeeded;

#line 1325 "check_hlds.cse_detection.c"
    {
#line 1327 "check_hlds.cse_detection.c"
      check_hlds__cse_detection__succeeded = check_hlds__cse_detection____Unify____cse_state_0_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2));
    }
#line 1330 "check_hlds.cse_detection.c"
    return check_hlds__cse_detection__succeeded;
#line 1332 "check_hlds.cse_detection.c"
  }
#line 1334 "check_hlds.cse_detection.c"
}

#line 1337 "check_hlds.cse_detection.c"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0_10001(
#line 1340 "check_hlds.cse_detection.c"
  MR_Box * check_hlds__cse_detection__wrapper_arg_1,
#line 1342 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 1344 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_3)
#line 1346 "check_hlds.cse_detection.c"
{
#line 1348 "check_hlds.cse_detection.c"
  {
#line 1350 "check_hlds.cse_detection.c"
    MR_Word check_hlds__cse_detection__conv0_HeadVar__1_1;

#line 1353 "check_hlds.cse_detection.c"
    {
#line 1355 "check_hlds.cse_detection.c"
      check_hlds__cse_detection____Compare____cse_state_0_0(&check_hlds__cse_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), ((MR_Word) check_hlds__cse_detection__wrapper_arg_3));
    }
#line 1358 "check_hlds.cse_detection.c"
    *check_hlds__cse_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__cse_detection__conv0_HeadVar__1_1));
#line 1360 "check_hlds.cse_detection.c"
  }
#line 1362 "check_hlds.cse_detection.c"
}

#line 661 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0(
#line 661 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__1_1,
#line 661 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 661 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3)
#line 661 "cse_detection.m"
{
#line 661 "cse_detection.m"
  {
#line 661 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 661 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastX_24 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;
#line 661 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastY_25 = (MR_Integer) check_hlds__cse_detection__HeadVar__3_3;

#line 661 "cse_detection.m"
    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastX_24 == check_hlds__cse_detection__CastY_25);
#line 661 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 1389 "check_hlds.cse_detection.c"
      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 661 "cse_detection.m"
    else
#line 661 "cse_detection.m"
#line 661 "cse_detection.m"
      switch (MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__2_2)) {
#line 661 "cse_detection.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 661 "cse_detection.m"
        case (MR_Integer) 0:
#line 661 "cse_detection.m"
#line 661 "cse_detection.m"
          switch (MR_unmkbody(check_hlds__cse_detection__HeadVar__2_2)) {
#line 661 "cse_detection.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 661 "cse_detection.m"
            case (MR_Integer) 0:
#line 661 "cse_detection.m"
#line 661 "cse_detection.m"
              switch (MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__3_3)) {
#line 661 "cse_detection.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 661 "cse_detection.m"
                case (MR_Integer) 0:
#line 661 "cse_detection.m"
#line 661 "cse_detection.m"
                  switch (MR_unmkbody(check_hlds__cse_detection__HeadVar__3_3)) {
#line 661 "cse_detection.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 661 "cse_detection.m"
                    case (MR_Integer) 0:
#line 661 "cse_detection.m"
                      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 661 "cse_detection.m"
                      break;
#line 661 "cse_detection.m"
                    case (MR_Integer) 1:
#line 661 "cse_detection.m"
                      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 1;
#line 661 "cse_detection.m"
                      break;
#line 661 "cse_detection.m"
                  }
#line 661 "cse_detection.m"
                  break;
#line 661 "cse_detection.m"
                case (MR_Integer) 1:
#line 1437 "check_hlds.cse_detection.c"
                  *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 1;
#line 661 "cse_detection.m"
                  break;
#line 661 "cse_detection.m"
              }
#line 661 "cse_detection.m"
              break;
#line 661 "cse_detection.m"
            case (MR_Integer) 1:
#line 661 "cse_detection.m"
#line 661 "cse_detection.m"
              switch (MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__3_3)) {
#line 661 "cse_detection.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 661 "cse_detection.m"
                case (MR_Integer) 0:
#line 661 "cse_detection.m"
#line 661 "cse_detection.m"
                  switch (MR_unmkbody(check_hlds__cse_detection__HeadVar__3_3)) {
#line 661 "cse_detection.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 661 "cse_detection.m"
                    case (MR_Integer) 0:
#line 661 "cse_detection.m"
                      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 2;
#line 661 "cse_detection.m"
                      break;
#line 661 "cse_detection.m"
                    case (MR_Integer) 1:
#line 661 "cse_detection.m"
                      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 661 "cse_detection.m"
                      break;
#line 661 "cse_detection.m"
                  }
#line 661 "cse_detection.m"
                  break;
#line 661 "cse_detection.m"
                case (MR_Integer) 1:
#line 1477 "check_hlds.cse_detection.c"
                  *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 2;
#line 661 "cse_detection.m"
                  break;
#line 661 "cse_detection.m"
              }
#line 661 "cse_detection.m"
              break;
#line 661 "cse_detection.m"
          }
#line 661 "cse_detection.m"
          break;
#line 661 "cse_detection.m"
        case (MR_Integer) 1:
#line 661 "cse_detection.m"
          {
#line 661 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 661 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 661 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));

#line 661 "cse_detection.m"
#line 661 "cse_detection.m"
            switch (MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__3_3)) {
#line 661 "cse_detection.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 661 "cse_detection.m"
              case (MR_Integer) 0:
#line 661 "cse_detection.m"
#line 661 "cse_detection.m"
                switch (MR_unmkbody(check_hlds__cse_detection__HeadVar__3_3)) {
#line 661 "cse_detection.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 661 "cse_detection.m"
                  case (MR_Integer) 0:
#line 1514 "check_hlds.cse_detection.c"
                    *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 2;
#line 661 "cse_detection.m"
                    break;
#line 661 "cse_detection.m"
                  case (MR_Integer) 1:
#line 1520 "check_hlds.cse_detection.c"
                    *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 1;
#line 661 "cse_detection.m"
                    break;
#line 661 "cse_detection.m"
                }
#line 661 "cse_detection.m"
                break;
#line 661 "cse_detection.m"
              case (MR_Integer) 1:
#line 661 "cse_detection.m"
                {
#line 661 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 661 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 661 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 2)));
#line 661 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_16_16;

#line 661 "cse_detection.m"
                  {
#line 661 "cse_detection.m"
                    hlds__hlds_goal____Compare____hlds_goal_0_0(&check_hlds__cse_detection__V_16_16, check_hlds__cse_detection__V_31_31, check_hlds__cse_detection__V_13_13);
                  }
#line 1546 "check_hlds.cse_detection.c"
                  check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_16_16 == (MR_Integer) 0);
#line 661 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 661 "cse_detection.m"
                  if (check_hlds__cse_detection__succeeded)
#line 661 "cse_detection.m"
                    *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_16_16;
#line 661 "cse_detection.m"
                  else
#line 661 "cse_detection.m"
                    {
#line 661 "cse_detection.m"
                      MR_Word check_hlds__cse_detection__V_17_17;

#line 661 "cse_detection.m"
                      {
#line 661 "cse_detection.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[3], &check_hlds__cse_detection__V_17_17, ((MR_Box) (check_hlds__cse_detection__V_30_30)), ((MR_Box) (check_hlds__cse_detection__V_14_14)));
                      }
#line 1566 "check_hlds.cse_detection.c"
                      check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_17_17 == (MR_Integer) 0);
#line 661 "cse_detection.m"
                      check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 661 "cse_detection.m"
                      if (check_hlds__cse_detection__succeeded)
#line 661 "cse_detection.m"
                        *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_17_17;
#line 661 "cse_detection.m"
                      else
#line 661 "cse_detection.m"
                        {
#line 661 "cse_detection.m"
                          {
#line 661 "cse_detection.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[4], check_hlds__cse_detection__HeadVar__1_1, ((MR_Box) (check_hlds__cse_detection__V_29_29)), ((MR_Box) (check_hlds__cse_detection__V_15_15)));
#line 661 "cse_detection.m"
                            return;
                          }
#line 661 "cse_detection.m"
                        }
#line 661 "cse_detection.m"
                    }
#line 661 "cse_detection.m"
                }
#line 661 "cse_detection.m"
                break;
#line 661 "cse_detection.m"
            }
#line 661 "cse_detection.m"
          }
#line 661 "cse_detection.m"
          break;
#line 661 "cse_detection.m"
      }
#line 661 "cse_detection.m"
  }
#line 661 "cse_detection.m"
}

#line 661 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0(
#line 661 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 661 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2)
#line 661 "cse_detection.m"
{
#line 661 "cse_detection.m"
  {
#line 661 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 661 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastX_13 = (MR_Integer) check_hlds__cse_detection__HeadVar__1_1;
#line 661 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastY_14 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;

#line 661 "cse_detection.m"
    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastX_13 == check_hlds__cse_detection__CastY_14);
#line 661 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 661 "cse_detection.m"
      check_hlds__cse_detection__succeeded = MR_TRUE;
#line 661 "cse_detection.m"
    else
#line 661 "cse_detection.m"
#line 661 "cse_detection.m"
      switch (MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__1_1)) {
#line 661 "cse_detection.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 661 "cse_detection.m"
        case (MR_Integer) 0:
#line 661 "cse_detection.m"
#line 661 "cse_detection.m"
          switch (MR_unmkbody(check_hlds__cse_detection__HeadVar__1_1)) {
#line 661 "cse_detection.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 661 "cse_detection.m"
            case (MR_Integer) 0:
#line 661 "cse_detection.m"
              {
#line 661 "cse_detection.m"
                MR_Integer check_hlds__cse_detection__CastX_3 = (MR_Integer) check_hlds__cse_detection__HeadVar__1_1;
#line 661 "cse_detection.m"
                MR_Integer check_hlds__cse_detection__CastY_4 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;

#line 661 "cse_detection.m"
                check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastY_4 == check_hlds__cse_detection__CastX_3);
#line 661 "cse_detection.m"
              }
#line 661 "cse_detection.m"
              break;
#line 661 "cse_detection.m"
            case (MR_Integer) 1:
#line 661 "cse_detection.m"
              {
#line 661 "cse_detection.m"
                MR_Integer check_hlds__cse_detection__CastX_11 = (MR_Integer) check_hlds__cse_detection__HeadVar__1_1;
#line 661 "cse_detection.m"
                MR_Integer check_hlds__cse_detection__CastY_12 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;

#line 661 "cse_detection.m"
                check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastY_12 == check_hlds__cse_detection__CastX_11);
#line 661 "cse_detection.m"
              }
#line 661 "cse_detection.m"
              break;
#line 661 "cse_detection.m"
          }
#line 661 "cse_detection.m"
          break;
#line 661 "cse_detection.m"
        case (MR_Integer) 1:
#line 661 "cse_detection.m"
          {
#line 661 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeInfo_16_16;
#line 661 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeInfo_17_17;
#line 661 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 661 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 661 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 2)));
#line 661 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_8_8;
#line 661 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_9_9;
#line 661 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_10_10;

#line 661 "cse_detection.m"
            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 661 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 661 "cse_detection.m"
              {
#line 661 "cse_detection.m"
                check_hlds__cse_detection__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 661 "cse_detection.m"
                check_hlds__cse_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 661 "cse_detection.m"
                check_hlds__cse_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 1711 "check_hlds.cse_detection.c"
                {
#line 1713 "check_hlds.cse_detection.c"
                  check_hlds__cse_detection__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(check_hlds__cse_detection__V_5_5, check_hlds__cse_detection__V_8_8);
                }
#line 661 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 661 "cse_detection.m"
                  {
#line 1720 "check_hlds.cse_detection.c"
                    check_hlds__cse_detection__TypeInfo_16_16 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[3];
#line 1722 "check_hlds.cse_detection.c"
                    {
#line 1724 "check_hlds.cse_detection.c"
                      check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__cse_detection__TypeInfo_16_16, ((MR_Box) (check_hlds__cse_detection__V_6_6)), ((MR_Box) (check_hlds__cse_detection__V_9_9)));
                    }
#line 661 "cse_detection.m"
                    if (check_hlds__cse_detection__succeeded)
#line 661 "cse_detection.m"
                      {
#line 1731 "check_hlds.cse_detection.c"
                        check_hlds__cse_detection__TypeInfo_17_17 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[4];
#line 1733 "check_hlds.cse_detection.c"
                        {
#line 1735 "check_hlds.cse_detection.c"
                          return check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__cse_detection__TypeInfo_17_17, ((MR_Box) (check_hlds__cse_detection__V_7_7)), ((MR_Box) (check_hlds__cse_detection__V_10_10)));
                        }
#line 661 "cse_detection.m"
                      }
#line 661 "cse_detection.m"
                  }
#line 661 "cse_detection.m"
              }
#line 661 "cse_detection.m"
          }
#line 661 "cse_detection.m"
          break;
#line 661 "cse_detection.m"
      }
#line 661 "cse_detection.m"
    return check_hlds__cse_detection__succeeded;
#line 661 "cse_detection.m"
  }
#line 661 "cse_detection.m"
}

#line 239 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0(
#line 239 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__1_1,
#line 239 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 239 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3)
#line 239 "cse_detection.m"
{
#line 239 "cse_detection.m"
  {
#line 239 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 239 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastX_15 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;
#line 239 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastY_16 = (MR_Integer) check_hlds__cse_detection__HeadVar__3_3;

#line 239 "cse_detection.m"
    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastX_15 == check_hlds__cse_detection__CastY_16);
#line 239 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 1781 "check_hlds.cse_detection.c"
      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 239 "cse_detection.m"
    else
#line 239 "cse_detection.m"
      {
#line 239 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 239 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 239 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 239 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 3)));
#line 239 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 239 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 239 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 2)));
#line 239 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 3)));
#line 239 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_12_12;

#line 239 "cse_detection.m"
        {
#line 239 "cse_detection.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[2], &check_hlds__cse_detection__V_12_12, ((MR_Box) (check_hlds__cse_detection__V_4_4)), ((MR_Box) (check_hlds__cse_detection__V_8_8)));
        }
#line 1811 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_12_12 == (MR_Integer) 0);
#line 239 "cse_detection.m"
        check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 239 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 239 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_12_12;
#line 239 "cse_detection.m"
        else
#line 239 "cse_detection.m"
          {
#line 239 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_13_13;

#line 239 "cse_detection.m"
            {
#line 239 "cse_detection.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &check_hlds__cse_detection__V_13_13, ((MR_Box) (check_hlds__cse_detection__V_5_5)), ((MR_Box) (check_hlds__cse_detection__V_9_9)));
            }
#line 1831 "check_hlds.cse_detection.c"
            check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_13_13 == (MR_Integer) 0);
#line 239 "cse_detection.m"
            check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 239 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 239 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_13_13;
#line 239 "cse_detection.m"
            else
#line 239 "cse_detection.m"
              {
#line 239 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_14_14;

#line 239 "cse_detection.m"
                {
#line 239 "cse_detection.m"
                  hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&check_hlds__cse_detection__V_14_14, check_hlds__cse_detection__V_6_6, check_hlds__cse_detection__V_10_10);
                }
#line 1851 "check_hlds.cse_detection.c"
                check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_14_14 == (MR_Integer) 0);
#line 239 "cse_detection.m"
                check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 239 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 239 "cse_detection.m"
                  *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_14_14;
#line 239 "cse_detection.m"
                else
#line 239 "cse_detection.m"
                  {
#line 239 "cse_detection.m"
                    hlds__hlds_module____Compare____module_info_0_0(check_hlds__cse_detection__HeadVar__1_1, check_hlds__cse_detection__V_7_7, check_hlds__cse_detection__V_11_11);
#line 239 "cse_detection.m"
                    return;
                  }
#line 239 "cse_detection.m"
              }
#line 239 "cse_detection.m"
          }
#line 239 "cse_detection.m"
      }
#line 239 "cse_detection.m"
  }
#line 239 "cse_detection.m"
}

#line 239 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0(
#line 239 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 239 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2)
#line 239 "cse_detection.m"
{
#line 239 "cse_detection.m"
  {
#line 239 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 239 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastX_11 = (MR_Integer) check_hlds__cse_detection__HeadVar__1_1;
#line 239 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastY_12 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;

#line 239 "cse_detection.m"
    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastX_11 == check_hlds__cse_detection__CastY_12);
#line 239 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 239 "cse_detection.m"
      check_hlds__cse_detection__succeeded = MR_TRUE;
#line 239 "cse_detection.m"
    else
#line 239 "cse_detection.m"
      {
#line 239 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeCtorInfo_14_14;
#line 239 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 239 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 239 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 2)));
#line 239 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 3)));
#line 239 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 239 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 239 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 239 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 3)));

#line 1926 "check_hlds.cse_detection.c"
        {
#line 1928 "check_hlds.cse_detection.c"
          check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[2], ((MR_Box) (check_hlds__cse_detection__V_3_3)), ((MR_Box) (check_hlds__cse_detection__V_7_7)));
        }
#line 239 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 239 "cse_detection.m"
          {
#line 1935 "check_hlds.cse_detection.c"
            check_hlds__cse_detection__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 1937 "check_hlds.cse_detection.c"
            {
#line 1939 "check_hlds.cse_detection.c"
              check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__cse_detection__TypeCtorInfo_14_14, ((MR_Box) (check_hlds__cse_detection__V_4_4)), ((MR_Box) (check_hlds__cse_detection__V_8_8)));
            }
#line 239 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 239 "cse_detection.m"
              {
#line 1946 "check_hlds.cse_detection.c"
                {
#line 1948 "check_hlds.cse_detection.c"
                  check_hlds__cse_detection__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(check_hlds__cse_detection__V_5_5, check_hlds__cse_detection__V_9_9);
                }
#line 239 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 1953 "check_hlds.cse_detection.c"
                  {
#line 1955 "check_hlds.cse_detection.c"
                    return check_hlds__cse_detection__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__cse_detection__V_6_6, check_hlds__cse_detection__V_10_10);
                  }
#line 239 "cse_detection.m"
              }
#line 239 "cse_detection.m"
          }
#line 239 "cse_detection.m"
      }
#line 239 "cse_detection.m"
    return check_hlds__cse_detection__succeeded;
#line 239 "cse_detection.m"
  }
#line 239 "cse_detection.m"
}

#line 952 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_merged_tvars_6_p_0(
#line 952 "cse_detection.m"
  MR_Word check_hlds__cse_detection__RttiVarMaps_7,
#line 952 "cse_detection.m"
  MR_Word check_hlds__cse_detection__LaterOldNewMap_8,
#line 952 "cse_detection.m"
  MR_Word check_hlds__cse_detection__NewTvarMap_9,
#line 952 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Tvar_10,
#line 952 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17,
#line 952 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_Renaming_18)
#line 952 "cse_detection.m"
{
#line 956 "cse_detection.m"
  {
#line 956 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 956 "cse_detection.m"
    MR_Word check_hlds__cse_detection__TypeInfoLocn0_12;
#line 956 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Old_13;
#line 967 "cse_detection.m"
    MR_Word check_hlds__cse_detection__New_14;
#line 959 "cse_detection.m"
    MR_Word check_hlds__cse_detection__TypeInfo_20_20;
#line 959 "cse_detection.m"
    MR_Box check_hlds__cse_detection__conv0_New_14;

#line 957 "cse_detection.m"
    {
#line 957 "cse_detection.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(check_hlds__cse_detection__RttiVarMaps_7, check_hlds__cse_detection__Tvar_10, &check_hlds__cse_detection__TypeInfoLocn0_12);
    }
#line 958 "cse_detection.m"
    {
#line 958 "cse_detection.m"
      hlds__hlds_rtti__type_info_locn_var_2_p_0(check_hlds__cse_detection__TypeInfoLocn0_12, &check_hlds__cse_detection__Old_13);
    }
#line 2013 "check_hlds.cse_detection.c"
    check_hlds__cse_detection__TypeInfo_20_20 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
#line 959 "cse_detection.m"
    {
#line 959 "cse_detection.m"
      check_hlds__cse_detection__succeeded = mercury__map__search_3_p_0(check_hlds__cse_detection__TypeInfo_20_20, check_hlds__cse_detection__TypeInfo_20_20, check_hlds__cse_detection__LaterOldNewMap_8, ((MR_Box) (check_hlds__cse_detection__Old_13)), &check_hlds__cse_detection__conv0_New_14);
    }
#line 959 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 959 "cse_detection.m"
      {
#line 959 "cse_detection.m"
        check_hlds__cse_detection__New_14 = ((MR_Word) check_hlds__cse_detection__conv0_New_14);
#line 959 "cse_detection.m"
        check_hlds__cse_detection__succeeded = MR_TRUE;
#line 959 "cse_detection.m"
      }
#line 967 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 960 "cse_detection.m"
      {
#line 960 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfo_22_22;
#line 960 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfoLocn_15;
#line 960 "cse_detection.m"
        MR_Word check_hlds__cse_detection__NewTvar_16;
#line 961 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv1_NewTvar_16;

#line 960 "cse_detection.m"
        {
#line 960 "cse_detection.m"
          hlds__hlds_rtti__type_info_locn_set_var_3_p_0(check_hlds__cse_detection__New_14, check_hlds__cse_detection__TypeInfoLocn0_12, &check_hlds__cse_detection__TypeInfoLocn_15);
        }
#line 2048 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeInfo_22_22 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[1];
#line 961 "cse_detection.m"
        {
#line 961 "cse_detection.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, check_hlds__cse_detection__TypeInfo_22_22, check_hlds__cse_detection__NewTvarMap_9, ((MR_Box) (check_hlds__cse_detection__TypeInfoLocn_15)), &check_hlds__cse_detection__conv1_NewTvar_16);
        }
#line 961 "cse_detection.m"
        check_hlds__cse_detection__NewTvar_16 = ((MR_Word) check_hlds__cse_detection__conv1_NewTvar_16);
#line 962 "cse_detection.m"
        {
#line 962 "cse_detection.m"
          check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[1], ((MR_Box) (check_hlds__cse_detection__NewTvar_16)), ((MR_Box) (check_hlds__cse_detection__Tvar_10)));
        }
#line 964 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 964 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_Renaming_18 = check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17;
#line 964 "cse_detection.m"
        else
#line 965 "cse_detection.m"
          {
#line 965 "cse_detection.m"
            mercury__map__det_insert_4_p_0(check_hlds__cse_detection__TypeInfo_22_22, check_hlds__cse_detection__TypeInfo_22_22, ((MR_Box) (check_hlds__cse_detection__Tvar_10)), ((MR_Box) (check_hlds__cse_detection__NewTvar_16)), check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17, check_hlds__cse_detection__STATE_VARIABLE_Renaming_18);
#line 965 "cse_detection.m"
            return;
          }
#line 960 "cse_detection.m"
      }
#line 967 "cse_detection.m"
    else
#line 967 "cse_detection.m"
      *check_hlds__cse_detection__STATE_VARIABLE_Renaming_18 = check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17;
#line 956 "cse_detection.m"
  }
#line 952 "cse_detection.m"
}

#line 938 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_type_info_locn_tvar_map_5_p_0(
#line 938 "cse_detection.m"
  MR_Word check_hlds__cse_detection__RttiVarMaps_6,
#line 938 "cse_detection.m"
  MR_Word check_hlds__cse_detection__FirstOldNewMap_7,
#line 938 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Tvar_8,
#line 938 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_0_14,
#line 938 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_15)
#line 938 "cse_detection.m"
{
#line 942 "cse_detection.m"
  {
#line 942 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 942 "cse_detection.m"
    MR_Word check_hlds__cse_detection__TypeInfoLocn0_10;
#line 942 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Old_11;
#line 948 "cse_detection.m"
    MR_Word check_hlds__cse_detection__New_12;
#line 945 "cse_detection.m"
    MR_Word check_hlds__cse_detection__TypeInfo_17_17;
#line 945 "cse_detection.m"
    MR_Box check_hlds__cse_detection__conv0_New_12;

#line 943 "cse_detection.m"
    {
#line 943 "cse_detection.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(check_hlds__cse_detection__RttiVarMaps_6, check_hlds__cse_detection__Tvar_8, &check_hlds__cse_detection__TypeInfoLocn0_10);
    }
#line 944 "cse_detection.m"
    {
#line 944 "cse_detection.m"
      hlds__hlds_rtti__type_info_locn_var_2_p_0(check_hlds__cse_detection__TypeInfoLocn0_10, &check_hlds__cse_detection__Old_11);
    }
#line 2126 "check_hlds.cse_detection.c"
    check_hlds__cse_detection__TypeInfo_17_17 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
#line 945 "cse_detection.m"
    {
#line 945 "cse_detection.m"
      check_hlds__cse_detection__succeeded = mercury__map__search_3_p_0(check_hlds__cse_detection__TypeInfo_17_17, check_hlds__cse_detection__TypeInfo_17_17, check_hlds__cse_detection__FirstOldNewMap_7, ((MR_Box) (check_hlds__cse_detection__Old_11)), &check_hlds__cse_detection__conv0_New_12);
    }
#line 945 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 945 "cse_detection.m"
      {
#line 945 "cse_detection.m"
        check_hlds__cse_detection__New_12 = ((MR_Word) check_hlds__cse_detection__conv0_New_12);
#line 945 "cse_detection.m"
        check_hlds__cse_detection__succeeded = MR_TRUE;
#line 945 "cse_detection.m"
      }
#line 948 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 946 "cse_detection.m"
      {
#line 946 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfoLocn_13;

#line 946 "cse_detection.m"
        {
#line 946 "cse_detection.m"
          hlds__hlds_rtti__type_info_locn_set_var_3_p_0(check_hlds__cse_detection__New_12, check_hlds__cse_detection__TypeInfoLocn0_10, &check_hlds__cse_detection__TypeInfoLocn_13);
        }
#line 947 "cse_detection.m"
        {
#line 947 "cse_detection.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, (MR_Word) &check_hlds__cse_detection_scalar_common_1[1], ((MR_Box) (check_hlds__cse_detection__TypeInfoLocn_13)), ((MR_Box) (check_hlds__cse_detection__Tvar_8)), check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_0_14, check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_15);
#line 947 "cse_detection.m"
          return;
        }
#line 946 "cse_detection.m"
      }
#line 948 "cse_detection.m"
    else
#line 948 "cse_detection.m"
      *check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_15 = check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_0_14;
#line 942 "cse_detection.m"
  }
#line 938 "cse_detection.m"
}

#line 932 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_3(
#line 932 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 932 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 932 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_2)
#line 932 "cse_detection.m"
{
#line 932 "cse_detection.m"
  {
#line 932 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 932 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv4_HeadVar__3_3;

#line 932 "cse_detection.m"
    {
#line 932 "cse_detection.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__cse_detection__wrapper_arg_1), &check_hlds__cse_detection__conv4_HeadVar__3_3);
    }
#line 932 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_2 = ((MR_Box) (check_hlds__cse_detection__conv4_HeadVar__3_3));
#line 932 "cse_detection.m"
  }
#line 932 "cse_detection.m"
}

#line 923 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_2(
#line 923 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 923 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 923 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 923 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3)
#line 923 "cse_detection.m"
{
#line 923 "cse_detection.m"
  {
#line 923 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 923 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv2_STATE_VARIABLE_Renaming_18;

#line 923 "cse_detection.m"
    {
#line 923 "cse_detection.m"
      check_hlds__cse_detection__find_merged_tvars_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv2_STATE_VARIABLE_Renaming_18);
    }
#line 923 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv2_STATE_VARIABLE_Renaming_18));
#line 923 "cse_detection.m"
  }
#line 923 "cse_detection.m"
}

#line 916 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_1(
#line 916 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 916 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 916 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 916 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3)
#line 916 "cse_detection.m"
{
#line 916 "cse_detection.m"
  {
#line 916 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 916 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv0_STATE_VARIABLE_NewTvarMap_15;

#line 916 "cse_detection.m"
    {
#line 916 "cse_detection.m"
      check_hlds__cse_detection__find_type_info_locn_tvar_map_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv0_STATE_VARIABLE_NewTvarMap_15);
    }
#line 916 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv0_STATE_VARIABLE_NewTvarMap_15));
#line 916 "cse_detection.m"
  }
#line 916 "cse_detection.m"
}

#line 880 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(
#line 880 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Unify_6,
#line 880 "cse_detection.m"
  MR_Word check_hlds__cse_detection__FirstOldNew_7,
#line 880 "cse_detection.m"
  MR_Word check_hlds__cse_detection__LaterOldNew_8,
#line 880 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25,
#line 880 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26)
#line 880 "cse_detection.m"
{
#line 895 "cse_detection.m"
  {
#line 895 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 887 "cse_detection.m"
    MR_Word check_hlds__cse_detection__UnifyInfo_13;
#line 887 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Var_16;
#line 887 "cse_detection.m"
    MR_Word check_hlds__cse_detection__ConsId_17;
#line 887 "cse_detection.m"
    MR_Word check_hlds__cse_detection__ModuleInfo_22;
#line 887 "cse_detection.m"
    MR_Word check_hlds__cse_detection__VarTypes_23;
#line 887 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Type_24;
#line 887 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Unify_6, (MR_Integer) 0)));
#line 887 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Unify_6, (MR_Integer) 1)));
#line 887 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_10_10;
#line 887 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_11_11;
#line 887 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_12_12;
#line 887 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_14_14;
#line 888 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_18_18;
#line 888 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_19_19;
#line 888 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_20_20;
#line 888 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_21_21;
#line 889 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_29_29;
#line 889 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_31_31;

#line 887 "cse_detection.m"
    check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 887 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 887 "cse_detection.m"
      {
#line 887 "cse_detection.m"
        check_hlds__cse_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 0)));
#line 887 "cse_detection.m"
        check_hlds__cse_detection__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 1)));
#line 887 "cse_detection.m"
        check_hlds__cse_detection__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 2)));
#line 887 "cse_detection.m"
        check_hlds__cse_detection__UnifyInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 3)));
#line 887 "cse_detection.m"
        check_hlds__cse_detection__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 4)));
#line 888 "cse_detection.m"
        check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__UnifyInfo_13)) == (MR_mktag((MR_Integer) 1)));
#line 888 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 888 "cse_detection.m"
          {
#line 888 "cse_detection.m"
            check_hlds__cse_detection__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 0)));
#line 888 "cse_detection.m"
            check_hlds__cse_detection__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 1)));
#line 888 "cse_detection.m"
            check_hlds__cse_detection__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 2)));
#line 888 "cse_detection.m"
            check_hlds__cse_detection__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 3)));
#line 888 "cse_detection.m"
            check_hlds__cse_detection__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 4)));
#line 888 "cse_detection.m"
            check_hlds__cse_detection__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 5)));
#line 889 "cse_detection.m"
            check_hlds__cse_detection__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 0)));
#line 889 "cse_detection.m"
            check_hlds__cse_detection__VarTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 1)));
#line 889 "cse_detection.m"
            check_hlds__cse_detection__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 2)));
#line 889 "cse_detection.m"
            check_hlds__cse_detection__ModuleInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 3)));
#line 891 "cse_detection.m"
            {
#line 891 "cse_detection.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__cse_detection__VarTypes_23, check_hlds__cse_detection__Var_16, &check_hlds__cse_detection__Type_24);
            }
#line 892 "cse_detection.m"
            {
#line 892 "cse_detection.m"
              check_hlds__cse_detection__succeeded = check_hlds__type_util__cons_id_is_existq_cons_3_p_0(check_hlds__cse_detection__ModuleInfo_22, check_hlds__cse_detection__Type_24, check_hlds__cse_detection__ConsId_17);
            }
#line 888 "cse_detection.m"
          }
#line 887 "cse_detection.m"
      }
#line 895 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 903 "cse_detection.m"
      {
#line 903 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfo_44_74 = (MR_Word) &check_hlds__cse_detection_scalar_common_2[0];
#line 903 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfo_45_75;
#line 903 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfo_50_80;
#line 903 "cse_detection.m"
        MR_Word check_hlds__cse_detection__LaterOldNew_40;
#line 903 "cse_detection.m"
        MR_Word check_hlds__cse_detection__FirstOldNewMap_41;
#line 903 "cse_detection.m"
        MR_Word check_hlds__cse_detection__LaterOldNewMap_42;
#line 903 "cse_detection.m"
        MR_Word check_hlds__cse_detection__RttiVarMaps0_43;
#line 903 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarTypes0_44;
#line 903 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TvarsList_45;
#line 903 "cse_detection.m"
        MR_Word check_hlds__cse_detection__NewTvarMap_46;
#line 903 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Renaming_47;
#line 903 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OldNew_48;
#line 903 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OldNewMap_49;
#line 903 "cse_detection.m"
        MR_Word check_hlds__cse_detection__RttiVarMaps_50;
#line 903 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarTypes_51;
#line 903 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_52_52;
#line 903 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_53_53;
#line 903 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_54_54;
#line 903 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_55_55;
#line 903 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_56_56;
#line 903 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_57_57;
#line 903 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_66_66;
#line 903 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_69_69;
#line 908 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_60_60;
#line 908 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_62_62;
#line 916 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv1_NewTvarMap_46;
#line 923 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv3_Renaming_47;
#line 935 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_67_67;
#line 935 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_68_68;

#line 904 "cse_detection.m"
        {
#line 904 "cse_detection.m"
          mercury__list__condense_2_p_0(check_hlds__cse_detection__TypeInfo_44_74, check_hlds__cse_detection__LaterOldNew_8, &check_hlds__cse_detection__LaterOldNew_40);
        }
#line 2447 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeInfo_45_75 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
#line 905 "cse_detection.m"
        {
#line 905 "cse_detection.m"
          mercury__map__from_assoc_list_2_p_0(check_hlds__cse_detection__TypeInfo_45_75, check_hlds__cse_detection__TypeInfo_45_75, check_hlds__cse_detection__FirstOldNew_7, &check_hlds__cse_detection__FirstOldNewMap_41);
        }
#line 906 "cse_detection.m"
        {
#line 906 "cse_detection.m"
          mercury__map__from_assoc_list_2_p_0(check_hlds__cse_detection__TypeInfo_45_75, check_hlds__cse_detection__TypeInfo_45_75, check_hlds__cse_detection__LaterOldNew_40, &check_hlds__cse_detection__LaterOldNewMap_42);
        }
#line 908 "cse_detection.m"
        check_hlds__cse_detection__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 0)));
#line 908 "cse_detection.m"
        check_hlds__cse_detection__VarTypes0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 1)));
#line 908 "cse_detection.m"
        check_hlds__cse_detection__RttiVarMaps0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 2)));
#line 908 "cse_detection.m"
        check_hlds__cse_detection__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 3)));
#line 915 "cse_detection.m"
        {
#line 915 "cse_detection.m"
          hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(check_hlds__cse_detection__RttiVarMaps0_43, &check_hlds__cse_detection__TvarsList_45);
        }
#line 916 "cse_detection.m"
        {
#line 916 "cse_detection.m"
          check_hlds__cse_detection__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 916 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 0) = ((MR_Box) (&check_hlds__cse_detection_scalar_common_4[0]));
#line 916 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 1) = ((MR_Box) (check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_1));
#line 916 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 916 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 3) = ((MR_Box) (check_hlds__cse_detection__RttiVarMaps0_43));
#line 916 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 4) = ((MR_Box) (check_hlds__cse_detection__FirstOldNewMap_41));
#line 916 "cse_detection.m"
        }
#line 2488 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeInfo_50_80 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[1];
#line 917 "cse_detection.m"
        {
#line 917 "cse_detection.m"
          check_hlds__cse_detection__V_53_53 = mercury__map__init_0_f_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, check_hlds__cse_detection__TypeInfo_50_80);
        }
#line 916 "cse_detection.m"
        {
#line 916 "cse_detection.m"
          mercury__list__foldl_4_p_0(check_hlds__cse_detection__TypeInfo_50_80, (MR_Word) &check_hlds__cse_detection_scalar_common_2[1], check_hlds__cse_detection__V_52_52, check_hlds__cse_detection__TvarsList_45, ((MR_Box) (check_hlds__cse_detection__V_53_53)), &check_hlds__cse_detection__conv1_NewTvarMap_46);
        }
#line 916 "cse_detection.m"
        check_hlds__cse_detection__NewTvarMap_46 = ((MR_Word) check_hlds__cse_detection__conv1_NewTvarMap_46);
#line 923 "cse_detection.m"
        {
#line 923 "cse_detection.m"
          check_hlds__cse_detection__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 923 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 0) = ((MR_Box) (&check_hlds__cse_detection_scalar_common_5[0]));
#line 923 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 1) = ((MR_Box) (check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_2));
#line 923 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 923 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 3) = ((MR_Box) (check_hlds__cse_detection__RttiVarMaps0_43));
#line 923 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 4) = ((MR_Box) (check_hlds__cse_detection__LaterOldNewMap_42));
#line 923 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 5) = ((MR_Box) (check_hlds__cse_detection__NewTvarMap_46));
#line 923 "cse_detection.m"
        }
#line 924 "cse_detection.m"
        {
#line 924 "cse_detection.m"
          check_hlds__cse_detection__V_55_55 = mercury__map__init_0_f_0(check_hlds__cse_detection__TypeInfo_50_80, check_hlds__cse_detection__TypeInfo_50_80);
        }
#line 923 "cse_detection.m"
        {
#line 923 "cse_detection.m"
          mercury__list__foldl_4_p_0(check_hlds__cse_detection__TypeInfo_50_80, (MR_Word) &check_hlds__cse_detection_scalar_common_2[2], check_hlds__cse_detection__V_54_54, check_hlds__cse_detection__TvarsList_45, ((MR_Box) (check_hlds__cse_detection__V_55_55)), &check_hlds__cse_detection__conv3_Renaming_47);
        }
#line 923 "cse_detection.m"
        check_hlds__cse_detection__Renaming_47 = ((MR_Word) check_hlds__cse_detection__conv3_Renaming_47);
#line 928 "cse_detection.m"
        {
#line 928 "cse_detection.m"
          mercury__list__append_3_p_1(check_hlds__cse_detection__TypeInfo_44_74, check_hlds__cse_detection__FirstOldNew_7, check_hlds__cse_detection__LaterOldNew_40, &check_hlds__cse_detection__OldNew_48);
        }
#line 929 "cse_detection.m"
        {
#line 929 "cse_detection.m"
          mercury__map__from_assoc_list_2_p_0(check_hlds__cse_detection__TypeInfo_45_75, check_hlds__cse_detection__TypeInfo_45_75, check_hlds__cse_detection__OldNew_48, &check_hlds__cse_detection__OldNewMap_49);
        }
#line 930 "cse_detection.m"
        {
#line 930 "cse_detection.m"
          check_hlds__cse_detection__V_56_56 = mercury__map__init_0_f_0(check_hlds__cse_detection__TypeInfo_50_80, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        }
#line 930 "cse_detection.m"
        {
#line 930 "cse_detection.m"
          hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(check_hlds__cse_detection__Renaming_47, check_hlds__cse_detection__V_56_56, check_hlds__cse_detection__OldNewMap_49, check_hlds__cse_detection__RttiVarMaps0_43, &check_hlds__cse_detection__RttiVarMaps_50);
        }
#line 932 "cse_detection.m"
        {
#line 932 "cse_detection.m"
          check_hlds__cse_detection__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 932 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_57_57, 0) = ((MR_Box) (&check_hlds__cse_detection_scalar_common_6[0]));
#line 932 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_57_57, 1) = ((MR_Box) (check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_3));
#line 932 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 932 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_57_57, 3) = ((MR_Box) (check_hlds__cse_detection__Renaming_47));
#line 932 "cse_detection.m"
        }
#line 932 "cse_detection.m"
        {
#line 932 "cse_detection.m"
          parse_tree__prog_data__transform_var_types_3_p_0(check_hlds__cse_detection__V_57_57, check_hlds__cse_detection__VarTypes0_44, &check_hlds__cse_detection__VarTypes_51);
        }
#line 935 "cse_detection.m"
        check_hlds__cse_detection__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 0)));
#line 935 "cse_detection.m"
        check_hlds__cse_detection__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 1)));
#line 935 "cse_detection.m"
        check_hlds__cse_detection__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 2)));
#line 935 "cse_detection.m"
        check_hlds__cse_detection__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 3)));
#line 936 "cse_detection.m"
        {
#line 936 "cse_detection.m"
          MR_Word base;
#line 936 "cse_detection.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 936 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26 = base;
#line 936 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__cse_detection__V_66_66));
#line 936 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__cse_detection__VarTypes_51));
#line 936 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__cse_detection__RttiVarMaps_50));
#line 936 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__cse_detection__V_69_69));
#line 936 "cse_detection.m"
        }
#line 903 "cse_detection.m"
      }
#line 895 "cse_detection.m"
    else
#line 895 "cse_detection.m"
      *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25;
#line 895 "cse_detection.m"
  }
#line 880 "cse_detection.m"
}

#line 796 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__pair_subterms_4_p_0(
#line 796 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 796 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 796 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3,
#line 796 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__4_4)
#line 796 "cse_detection.m"
{
#line 799 "cse_detection.m"
  {
#line 799 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 799 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 799 "cse_detection.m"
      *check_hlds__cse_detection__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 799 "cse_detection.m"
    else
#line 801 "cse_detection.m"
      {
#line 801 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OldVar_7;
#line 801 "cse_detection.m"
        MR_Word check_hlds__cse_detection__HoistedVar_8;
#line 801 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OldHoistedVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 801 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Replacements1_13;
#line 801 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));

#line 800 "cse_detection.m"
        check_hlds__cse_detection__OldVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_17_17, (MR_Integer) 0)));
#line 800 "cse_detection.m"
        check_hlds__cse_detection__HoistedVar_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_17_17, (MR_Integer) 1)));
#line 802 "cse_detection.m"
        {
#line 802 "cse_detection.m"
          check_hlds__cse_detection__pair_subterms_4_p_0(check_hlds__cse_detection__OldHoistedVars_9, check_hlds__cse_detection__HeadVar__2_2, check_hlds__cse_detection__HeadVar__3_3, &check_hlds__cse_detection__Replacements1_13);
        }
#line 803 "cse_detection.m"
        {
#line 803 "cse_detection.m"
          check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[0], ((MR_Box) (check_hlds__cse_detection__OldVar_7)), ((MR_Box) (check_hlds__cse_detection__HoistedVar_8)));
        }
#line 805 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 804 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__4_4 = check_hlds__cse_detection__Replacements1_13;
#line 805 "cse_detection.m"
        else
#line 806 "cse_detection.m"
          {
#line 806 "cse_detection.m"
            MR_Word check_hlds__cse_detection__MainCtxt_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 806 "cse_detection.m"
            MR_Word check_hlds__cse_detection__SubCtxt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 806 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goal_16;
#line 806 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_18_18;

#line 811 "cse_detection.m"
            {
#line 811 "cse_detection.m"
              check_hlds__cse_detection__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 811 "cse_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_18_18, 0) = ((MR_Box) (check_hlds__cse_detection__OldVar_7));
#line 811 "cse_detection.m"
            }
#line 811 "cse_detection.m"
            {
#line 811 "cse_detection.m"
              hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__cse_detection__HoistedVar_8, check_hlds__cse_detection__V_18_18, check_hlds__cse_detection__HeadVar__2_2, check_hlds__cse_detection__MainCtxt_14, check_hlds__cse_detection__SubCtxt_15, &check_hlds__cse_detection__Goal_16);
            }
#line 813 "cse_detection.m"
            {
#line 813 "cse_detection.m"
              MR_Word base;
#line 813 "cse_detection.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__4_4 = base;
#line 813 "cse_detection.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal_16));
#line 813 "cse_detection.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Replacements1_13));
#line 813 "cse_detection.m"
            }
#line 806 "cse_detection.m"
          }
#line 801 "cse_detection.m"
      }
#line 799 "cse_detection.m"
  }
#line 796 "cse_detection.m"
}

#line 772 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__find_similar_deconstruct_5_p_0(
#line 772 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HoistedUnifyGoal_6,
#line 772 "cse_detection.m"
  MR_Word check_hlds__cse_detection__OldUnifyGoal_7,
#line 772 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Context_8,
#line 772 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__OldHoistedVars_9,
#line 772 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Replacements_10)
#line 772 "cse_detection.m"
{
#line 792 "cse_detection.m"
  {
#line 792 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 792 "cse_detection.m"
    MR_Word check_hlds__cse_detection__OC_15;
#line 792 "cse_detection.m"
    MR_Word check_hlds__cse_detection__HoistedFunctor_18;
#line 792 "cse_detection.m"
    MR_Word check_hlds__cse_detection__HoistedVars_19;
#line 792 "cse_detection.m"
    MR_Word check_hlds__cse_detection__OldFunctor_30;
#line 792 "cse_detection.m"
    MR_Word check_hlds__cse_detection__OldVars_31;
#line 779 "cse_detection.m"
    MR_Word check_hlds__cse_detection__HoistedUnifyInfo_14;
#line 779 "cse_detection.m"
    MR_Word check_hlds__cse_detection__OldUnifyInfo_26;
#line 779 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HoistedUnifyGoal_6, (MR_Integer) 0)));
#line 779 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_38_38;
#line 779 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HoistedUnifyGoal_6, (MR_Integer) 1)));
#line 779 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_11_11;
#line 779 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_12_12;
#line 779 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_13_13;
#line 780 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_17_17;
#line 780 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_20_20;
#line 780 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_21_21;
#line 780 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_22_22;
#line 782 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_28_28;
#line 782 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_23_23;
#line 782 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_24_24;
#line 782 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_25_25;
#line 782 "cse_detection.m"
    MR_Word check_hlds__cse_detection___NC_27;
#line 783 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_29_29;
#line 783 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_32_32;
#line 783 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_33_33;
#line 783 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_34_34;

#line 779 "cse_detection.m"
    check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 779 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 779 "cse_detection.m"
      {
#line 779 "cse_detection.m"
        check_hlds__cse_detection__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 0)));
#line 779 "cse_detection.m"
        check_hlds__cse_detection__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 1)));
#line 779 "cse_detection.m"
        check_hlds__cse_detection__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 2)));
#line 779 "cse_detection.m"
        check_hlds__cse_detection__HoistedUnifyInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 3)));
#line 779 "cse_detection.m"
        check_hlds__cse_detection__OC_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 4)));
#line 780 "cse_detection.m"
        check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__HoistedUnifyInfo_14)) == (MR_mktag((MR_Integer) 1)));
#line 780 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 780 "cse_detection.m"
          {
#line 780 "cse_detection.m"
            check_hlds__cse_detection__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 0)));
#line 780 "cse_detection.m"
            check_hlds__cse_detection__HoistedFunctor_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 1)));
#line 780 "cse_detection.m"
            check_hlds__cse_detection__HoistedVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 2)));
#line 780 "cse_detection.m"
            check_hlds__cse_detection__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 3)));
#line 780 "cse_detection.m"
            check_hlds__cse_detection__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 4)));
#line 780 "cse_detection.m"
            check_hlds__cse_detection__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 5)));
#line 782 "cse_detection.m"
            check_hlds__cse_detection__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__OldUnifyGoal_7, (MR_Integer) 0)));
#line 782 "cse_detection.m"
            check_hlds__cse_detection__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__OldUnifyGoal_7, (MR_Integer) 1)));
#line 782 "cse_detection.m"
            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 782 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 782 "cse_detection.m"
              {
#line 782 "cse_detection.m"
                check_hlds__cse_detection__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 0)));
#line 782 "cse_detection.m"
                check_hlds__cse_detection__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 1)));
#line 782 "cse_detection.m"
                check_hlds__cse_detection__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 2)));
#line 782 "cse_detection.m"
                check_hlds__cse_detection__OldUnifyInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 3)));
#line 782 "cse_detection.m"
                check_hlds__cse_detection___NC_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 4)));
#line 783 "cse_detection.m"
                check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__OldUnifyInfo_26)) == (MR_mktag((MR_Integer) 1)));
#line 783 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 783 "cse_detection.m"
                  {
#line 783 "cse_detection.m"
                    check_hlds__cse_detection__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 0)));
#line 783 "cse_detection.m"
                    check_hlds__cse_detection__OldFunctor_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 1)));
#line 783 "cse_detection.m"
                    check_hlds__cse_detection__OldVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 2)));
#line 783 "cse_detection.m"
                    check_hlds__cse_detection__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 3)));
#line 783 "cse_detection.m"
                    check_hlds__cse_detection__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 4)));
#line 783 "cse_detection.m"
                    check_hlds__cse_detection__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 5)));
#line 783 "cse_detection.m"
                  }
#line 782 "cse_detection.m"
              }
#line 780 "cse_detection.m"
          }
#line 779 "cse_detection.m"
      }
#line 792 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 785 "cse_detection.m"
      {
#line 785 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfo_42_42;
#line 785 "cse_detection.m"
        MR_Integer check_hlds__cse_detection__HoistedVarsCount_35;
#line 785 "cse_detection.m"
        MR_Integer check_hlds__cse_detection__OldVarsCount_36;

#line 785 "cse_detection.m"
        {
#line 785 "cse_detection.m"
          check_hlds__cse_detection__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__cse_detection__HoistedFunctor_18, check_hlds__cse_detection__OldFunctor_30);
        }
#line 785 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 785 "cse_detection.m"
          {
#line 2884 "check_hlds.cse_detection.c"
            check_hlds__cse_detection__TypeInfo_42_42 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
#line 786 "cse_detection.m"
            {
#line 786 "cse_detection.m"
              mercury__list__length_2_p_0(check_hlds__cse_detection__TypeInfo_42_42, check_hlds__cse_detection__HoistedVars_19, &check_hlds__cse_detection__HoistedVarsCount_35);
            }
#line 787 "cse_detection.m"
            {
#line 787 "cse_detection.m"
              mercury__list__length_2_p_0(check_hlds__cse_detection__TypeInfo_42_42, check_hlds__cse_detection__OldVars_31, &check_hlds__cse_detection__OldVarsCount_36);
            }
#line 788 "cse_detection.m"
            check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__HoistedVarsCount_35 == check_hlds__cse_detection__OldVarsCount_36);
#line 785 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 785 "cse_detection.m"
              {
#line 789 "cse_detection.m"
                {
#line 789 "cse_detection.m"
                  mercury__assoc_list__from_corresponding_lists_3_p_0(check_hlds__cse_detection__TypeInfo_42_42, check_hlds__cse_detection__TypeInfo_42_42, check_hlds__cse_detection__OldVars_31, check_hlds__cse_detection__HoistedVars_19, check_hlds__cse_detection__OldHoistedVars_9);
                }
#line 791 "cse_detection.m"
                {
#line 791 "cse_detection.m"
                  check_hlds__cse_detection__pair_subterms_4_p_0(*check_hlds__cse_detection__OldHoistedVars_9, check_hlds__cse_detection__Context_8, check_hlds__cse_detection__OC_15, check_hlds__cse_detection__Replacements_10);
                }
#line 791 "cse_detection.m"
                check_hlds__cse_detection__succeeded = MR_TRUE;
#line 785 "cse_detection.m"
              }
#line 785 "cse_detection.m"
          }
#line 785 "cse_detection.m"
      }
#line 792 "cse_detection.m"
    else
#line 793 "cse_detection.m"
      {
#line 793 "cse_detection.m"
        {
#line 793 "cse_detection.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.find_similar_deconstruct\'/5", (MR_String) "non-deconstruct unify");
        }
#line 793 "cse_detection.m"
        check_hlds__cse_detection__succeeded = MR_TRUE;
#line 793 "cse_detection.m"
      }
#line 792 "cse_detection.m"
    return check_hlds__cse_detection__succeeded;
#line 792 "cse_detection.m"
  }
#line 772 "cse_detection.m"
}

#line 734 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__create_parallel_subterms_7_p_0(
#line 734 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 734 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Context_2,
#line 734 "cse_detection.m"
  MR_Word check_hlds__cse_detection__UnifyContext_3,
#line 734 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_4,
#line 734 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_5,
#line 734 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6,
#line 734 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7)
#line 734 "cse_detection.m"
{
#line 738 "cse_detection.m"
  {
#line 738 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 738 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 738 "cse_detection.m"
      {
#line 738 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 738 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 738 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_5 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_4;
#line 738 "cse_detection.m"
      }
#line 738 "cse_detection.m"
    else
#line 740 "cse_detection.m"
      {
#line 740 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OFV_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 740 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OFV0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 740 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OldNewVars1_20;
#line 740 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Replacements1_21;
#line 740 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_22;
#line 740 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25;
#line 740 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarSet0_37;
#line 740 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarTypes0_38;
#line 740 "cse_detection.m"
        MR_Word check_hlds__cse_detection__NFV_39;
#line 740 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarSet_40;
#line 740 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Type_41;
#line 740 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarTypes_42;
#line 740 "cse_detection.m"
        MR_Word check_hlds__cse_detection__MainCtxt_43;
#line 740 "cse_detection.m"
        MR_Word check_hlds__cse_detection__SubCtxt_44;
#line 740 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_46_46;
#line 740 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_47_47;
#line 740 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_58_58;
#line 740 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_59_59;
#line 754 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_51_51;
#line 754 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_52_52;
#line 767 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_56_56;
#line 767 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_57_57;

#line 741 "cse_detection.m"
        {
#line 741 "cse_detection.m"
          check_hlds__cse_detection__create_parallel_subterms_7_p_0(check_hlds__cse_detection__OFV0_14, check_hlds__cse_detection__Context_2, check_hlds__cse_detection__UnifyContext_3, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_4, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, &check_hlds__cse_detection__OldNewVars1_20, &check_hlds__cse_detection__Replacements1_21);
        }
#line 754 "cse_detection.m"
        check_hlds__cse_detection__VarSet0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 0)));
#line 754 "cse_detection.m"
        check_hlds__cse_detection__VarTypes0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 1)));
#line 754 "cse_detection.m"
        check_hlds__cse_detection__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 2)));
#line 754 "cse_detection.m"
        check_hlds__cse_detection__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 3)));
#line 756 "cse_detection.m"
        {
#line 756 "cse_detection.m"
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__cse_detection__NFV_39, check_hlds__cse_detection__VarSet0_37, &check_hlds__cse_detection__VarSet_40);
        }
#line 757 "cse_detection.m"
        {
#line 757 "cse_detection.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__cse_detection__VarTypes0_38, check_hlds__cse_detection__OFV_13, &check_hlds__cse_detection__Type_41);
        }
#line 758 "cse_detection.m"
        {
#line 758 "cse_detection.m"
          parse_tree__prog_data__add_var_type_4_p_0(check_hlds__cse_detection__NFV_39, check_hlds__cse_detection__Type_41, check_hlds__cse_detection__VarTypes0_38, &check_hlds__cse_detection__VarTypes_42);
        }
#line 759 "cse_detection.m"
        {
#line 759 "cse_detection.m"
          check_hlds__cse_detection__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 759 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_46_46, 0) = ((MR_Box) (check_hlds__cse_detection__OFV_13));
#line 759 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_46_46, 1) = ((MR_Box) (check_hlds__cse_detection__NFV_39));
#line 759 "cse_detection.m"
        }
#line 759 "cse_detection.m"
        {
#line 759 "cse_detection.m"
          MR_Word base;
#line 759 "cse_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__6_6 = base;
#line 759 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__V_46_46));
#line 759 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__OldNewVars1_20));
#line 759 "cse_detection.m"
        }
#line 760 "cse_detection.m"
        check_hlds__cse_detection__MainCtxt_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__UnifyContext_3, (MR_Integer) 0)));
#line 760 "cse_detection.m"
        check_hlds__cse_detection__SubCtxt_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__UnifyContext_3, (MR_Integer) 1)));
#line 765 "cse_detection.m"
        {
#line 765 "cse_detection.m"
          check_hlds__cse_detection__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 765 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_47_47, 0) = ((MR_Box) (check_hlds__cse_detection__NFV_39));
#line 765 "cse_detection.m"
        }
#line 765 "cse_detection.m"
        {
#line 765 "cse_detection.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__cse_detection__OFV_13, check_hlds__cse_detection__V_47_47, check_hlds__cse_detection__Context_2, check_hlds__cse_detection__MainCtxt_43, check_hlds__cse_detection__SubCtxt_44, &check_hlds__cse_detection__Goal_22);
        }
#line 767 "cse_detection.m"
        check_hlds__cse_detection__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 0)));
#line 767 "cse_detection.m"
        check_hlds__cse_detection__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 1)));
#line 767 "cse_detection.m"
        check_hlds__cse_detection__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 2)));
#line 767 "cse_detection.m"
        check_hlds__cse_detection__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 3)));
#line 768 "cse_detection.m"
        {
#line 768 "cse_detection.m"
          MR_Word base;
#line 768 "cse_detection.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 768 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_5 = base;
#line 768 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__cse_detection__VarSet_40));
#line 768 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__cse_detection__VarTypes_42));
#line 768 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__cse_detection__V_58_58));
#line 768 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__cse_detection__V_59_59));
#line 768 "cse_detection.m"
        }
#line 745 "cse_detection.m"
        {
#line 745 "cse_detection.m"
          MR_Word base;
#line 745 "cse_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__7_7 = base;
#line 745 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal_22));
#line 745 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Replacements1_21));
#line 745 "cse_detection.m"
        }
#line 740 "cse_detection.m"
      }
#line 738 "cse_detection.m"
  }
#line 734 "cse_detection.m"
}

#line 670 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(
#line 670 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Var_8,
#line 670 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_9,
#line 670 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goals_10,
#line 670 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22,
#line 670 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_23,
#line 670 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24,
#line 670 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25)
#line 670 "cse_detection.m"
{
#line 677 "cse_detection.m"
  {
#line 677 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 677 "cse_detection.m"
#line 677 "cse_detection.m"
    switch (MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22)) {
#line 677 "cse_detection.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 677 "cse_detection.m"
      case (MR_Integer) 0:
#line 677 "cse_detection.m"
#line 677 "cse_detection.m"
        switch (MR_unmkbody(check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22)) {
#line 677 "cse_detection.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 677 "cse_detection.m"
          case (MR_Integer) 0:
#line 677 "cse_detection.m"
            {
#line 677 "cse_detection.m"
              MR_Word check_hlds__cse_detection__OldNewVars_13;
#line 677 "cse_detection.m"
              MR_Word check_hlds__cse_detection__HoistedGoal_14;
#line 677 "cse_detection.m"
              MR_Word check_hlds__cse_detection__GoalExpr0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_9, (MR_Integer) 0)));
#line 677 "cse_detection.m"
              MR_Word check_hlds__cse_detection__GoalInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_9, (MR_Integer) 1)));
#line 730 "cse_detection.m"
              MR_Word check_hlds__cse_detection__RHS_47;
#line 730 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Umode_48;
#line 730 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Ucontext_50;
#line 730 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Consid_52;
#line 730 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Args_53;
#line 730 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Submodes_54;
#line 730 "cse_detection.m"
              MR_Word check_hlds__cse_detection__CanFail_55;
#line 730 "cse_detection.m"
              MR_Word check_hlds__cse_detection__CanCGC_56;
#line 711 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Unif0_49;
#line 711 "cse_detection.m"
              MR_Word check_hlds__cse_detection__V_46_46;
#line 712 "cse_detection.m"
              MR_Word check_hlds__cse_detection__V_51_51;

#line 711 "cse_detection.m"
              check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__GoalExpr0_43)) == (MR_mktag((MR_Integer) 1)));
#line 711 "cse_detection.m"
              if (check_hlds__cse_detection__succeeded)
#line 711 "cse_detection.m"
                {
#line 711 "cse_detection.m"
                  check_hlds__cse_detection__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_43, (MR_Integer) 0)));
#line 711 "cse_detection.m"
                  check_hlds__cse_detection__RHS_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_43, (MR_Integer) 1)));
#line 711 "cse_detection.m"
                  check_hlds__cse_detection__Umode_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_43, (MR_Integer) 2)));
#line 711 "cse_detection.m"
                  check_hlds__cse_detection__Unif0_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_43, (MR_Integer) 3)));
#line 711 "cse_detection.m"
                  check_hlds__cse_detection__Ucontext_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_43, (MR_Integer) 4)));
#line 712 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__Unif0_49)) == (MR_mktag((MR_Integer) 1)));
#line 712 "cse_detection.m"
                  if (check_hlds__cse_detection__succeeded)
#line 712 "cse_detection.m"
                    {
#line 712 "cse_detection.m"
                      check_hlds__cse_detection__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_49, (MR_Integer) 0)));
#line 712 "cse_detection.m"
                      check_hlds__cse_detection__Consid_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_49, (MR_Integer) 1)));
#line 712 "cse_detection.m"
                      check_hlds__cse_detection__Args_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_49, (MR_Integer) 2)));
#line 712 "cse_detection.m"
                      check_hlds__cse_detection__Submodes_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_49, (MR_Integer) 3)));
#line 712 "cse_detection.m"
                      check_hlds__cse_detection__CanFail_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_49, (MR_Integer) 4)));
#line 712 "cse_detection.m"
                      check_hlds__cse_detection__CanCGC_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_49, (MR_Integer) 5)));
#line 712 "cse_detection.m"
                    }
#line 711 "cse_detection.m"
                }
#line 730 "cse_detection.m"
              if (check_hlds__cse_detection__succeeded)
#line 714 "cse_detection.m"
                {
#line 714 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__TypeInfo_53_82;
#line 714 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__Unif_57;
#line 714 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__GoalExpr1_61;
#line 714 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__Context_72;
#line 714 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__Sub_73;
#line 714 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_78_78;

#line 714 "cse_detection.m"
                  {
#line 714 "cse_detection.m"
                    check_hlds__cse_detection__Unif_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 714 "cse_detection.m"
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_57, 0) = ((MR_Box) (check_hlds__cse_detection__Var_8));
#line 714 "cse_detection.m"
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_57, 1) = ((MR_Box) (check_hlds__cse_detection__Consid_52));
#line 714 "cse_detection.m"
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_57, 2) = ((MR_Box) (check_hlds__cse_detection__Args_53));
#line 714 "cse_detection.m"
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_57, 3) = ((MR_Box) (check_hlds__cse_detection__Submodes_54));
#line 714 "cse_detection.m"
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_57, 4) = ((MR_Box) (check_hlds__cse_detection__CanFail_55));
#line 714 "cse_detection.m"
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_57, 5) = ((MR_Box) (check_hlds__cse_detection__CanCGC_56));
#line 714 "cse_detection.m"
                  }
#line 718 "cse_detection.m"
#line 718 "cse_detection.m"
                  switch (MR_tag((MR_Word) check_hlds__cse_detection__RHS_47)) {
#line 718 "cse_detection.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 718 "cse_detection.m"
                    case (MR_Integer) 0:
#line 718 "cse_detection.m"
                    case (MR_Integer) 2:
#line 721 "cse_detection.m"
                      {
#line 722 "cse_detection.m"
                        {
#line 722 "cse_detection.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.construct_common_unify\'/7", (MR_String) "non-functor unify");
#line 722 "cse_detection.m"
                          return;
                        }
#line 721 "cse_detection.m"
                      }
#line 718 "cse_detection.m"
                      break;
#line 718 "cse_detection.m"
                    case (MR_Integer) 1:
#line 717 "cse_detection.m"
                      {
#line 717 "cse_detection.m"
                        check_hlds__cse_detection__GoalExpr1_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 717 "cse_detection.m"
                        MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_61, 0) = ((MR_Box) (check_hlds__cse_detection__Var_8));
#line 717 "cse_detection.m"
                        MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_61, 1) = ((MR_Box) (check_hlds__cse_detection__RHS_47));
#line 717 "cse_detection.m"
                        MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_61, 2) = ((MR_Box) (check_hlds__cse_detection__Umode_48));
#line 717 "cse_detection.m"
                        MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_61, 3) = ((MR_Box) (check_hlds__cse_detection__Unif_57));
#line 717 "cse_detection.m"
                        MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_61, 4) = ((MR_Box) (check_hlds__cse_detection__Ucontext_50));
#line 717 "cse_detection.m"
                      }
#line 718 "cse_detection.m"
                      break;
#line 718 "cse_detection.m"
                  }
#line 724 "cse_detection.m"
                  {
#line 724 "cse_detection.m"
                    check_hlds__cse_detection__Context_72 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__cse_detection__GoalInfo_44);
                  }
#line 725 "cse_detection.m"
                  {
#line 725 "cse_detection.m"
                    check_hlds__cse_detection__create_parallel_subterms_7_p_0(check_hlds__cse_detection__Args_53, check_hlds__cse_detection__Context_72, check_hlds__cse_detection__Ucontext_50, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25, &check_hlds__cse_detection__OldNewVars_13, check_hlds__cse_detection__Goals_10);
                  }
#line 3339 "check_hlds.cse_detection.c"
                  check_hlds__cse_detection__TypeInfo_53_82 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
#line 727 "cse_detection.m"
                  {
#line 727 "cse_detection.m"
                    mercury__map__from_assoc_list_2_p_0(check_hlds__cse_detection__TypeInfo_53_82, check_hlds__cse_detection__TypeInfo_53_82, check_hlds__cse_detection__OldNewVars_13, &check_hlds__cse_detection__Sub_73);
                  }
#line 728 "cse_detection.m"
                  {
#line 728 "cse_detection.m"
                    check_hlds__cse_detection__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 728 "cse_detection.m"
                    MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_78_78, 0) = ((MR_Box) (check_hlds__cse_detection__GoalExpr1_61));
#line 728 "cse_detection.m"
                    MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_78_78, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_44));
#line 728 "cse_detection.m"
                  }
#line 728 "cse_detection.m"
                  {
#line 728 "cse_detection.m"
                    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(check_hlds__cse_detection__Sub_73, check_hlds__cse_detection__V_78_78, &check_hlds__cse_detection__HoistedGoal_14);
                  }
#line 714 "cse_detection.m"
                }
#line 730 "cse_detection.m"
              else
#line 731 "cse_detection.m"
                {
#line 731 "cse_detection.m"
                  {
#line 731 "cse_detection.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.construct_common_unify\'/7", (MR_String) "non-unify goal");
#line 731 "cse_detection.m"
                    return;
                  }
#line 731 "cse_detection.m"
                }
#line 680 "cse_detection.m"
              {
#line 680 "cse_detection.m"
                MR_Word base;
#line 680 "cse_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 680 "cse_detection.m"
                *check_hlds__cse_detection__STATE_VARIABLE_CseState_23 = base;
#line 680 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__HoistedGoal_14));
#line 680 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__OldNewVars_13));
#line 680 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 680 "cse_detection.m"
              }
#line 677 "cse_detection.m"
            }
#line 677 "cse_detection.m"
            break;
#line 677 "cse_detection.m"
          case (MR_Integer) 1:
#line 699 "cse_detection.m"
            {
#line 700 "cse_detection.m"
              {
#line 700 "cse_detection.m"
                MR_Word base;
#line 700 "cse_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "cse_detection.m"
                *check_hlds__cse_detection__Goals_10 = base;
#line 700 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal0_9));
#line 700 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 700 "cse_detection.m"
              }
#line 701 "cse_detection.m"
              *check_hlds__cse_detection__STATE_VARIABLE_CseState_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 699 "cse_detection.m"
              *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24;
#line 699 "cse_detection.m"
            }
#line 677 "cse_detection.m"
            break;
#line 677 "cse_detection.m"
        }
#line 677 "cse_detection.m"
        break;
#line 677 "cse_detection.m"
      case (MR_Integer) 1:
#line 683 "cse_detection.m"
        {
#line 683 "cse_detection.m"
          MR_Word check_hlds__cse_detection__FirstOldNewVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22, (MR_Integer) 1)));
#line 683 "cse_detection.m"
          MR_Word check_hlds__cse_detection__LaterOldNewVars0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22, (MR_Integer) 2)));
#line 683 "cse_detection.m"
          MR_Word check_hlds__cse_detection__GoalInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_9, (MR_Integer) 1)));
#line 683 "cse_detection.m"
          MR_Word check_hlds__cse_detection__Context_19;
#line 683 "cse_detection.m"
          MR_Word check_hlds__cse_detection__HoistedGoal_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22, (MR_Integer) 0)));
#line 684 "cse_detection.m"
          MR_Word check_hlds__cse_detection__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_9, (MR_Integer) 0)));
#line 694 "cse_detection.m"
          MR_Word check_hlds__cse_detection__Goals0_20;
#line 694 "cse_detection.m"
          MR_Word check_hlds__cse_detection__OldNewVars_34;

#line 685 "cse_detection.m"
          {
#line 685 "cse_detection.m"
            check_hlds__cse_detection__Context_19 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__cse_detection__GoalInfo_18);
          }
#line 687 "cse_detection.m"
          {
#line 687 "cse_detection.m"
            check_hlds__cse_detection__succeeded = check_hlds__cse_detection__find_similar_deconstruct_5_p_0(check_hlds__cse_detection__HoistedGoal_36, check_hlds__cse_detection__Goal0_9, check_hlds__cse_detection__Context_19, &check_hlds__cse_detection__OldNewVars_34, &check_hlds__cse_detection__Goals0_20);
          }
#line 694 "cse_detection.m"
          if (check_hlds__cse_detection__succeeded)
#line 690 "cse_detection.m"
            {
#line 690 "cse_detection.m"
              MR_Word check_hlds__cse_detection__LaterOldNewVars_21;

#line 690 "cse_detection.m"
              *check_hlds__cse_detection__Goals_10 = check_hlds__cse_detection__Goals0_20;
#line 691 "cse_detection.m"
              {
#line 691 "cse_detection.m"
                check_hlds__cse_detection__LaterOldNewVars_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "cse_detection.m"
                MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNewVars_21, 0) = ((MR_Box) (check_hlds__cse_detection__OldNewVars_34));
#line 691 "cse_detection.m"
                MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNewVars_21, 1) = ((MR_Box) (check_hlds__cse_detection__LaterOldNewVars0_16));
#line 691 "cse_detection.m"
              }
#line 692 "cse_detection.m"
              {
#line 692 "cse_detection.m"
                MR_Word base;
#line 692 "cse_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 692 "cse_detection.m"
                *check_hlds__cse_detection__STATE_VARIABLE_CseState_23 = base;
#line 692 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__HoistedGoal_36));
#line 692 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__FirstOldNewVars_15));
#line 692 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__cse_detection__LaterOldNewVars_21));
#line 692 "cse_detection.m"
              }
#line 690 "cse_detection.m"
            }
#line 694 "cse_detection.m"
          else
#line 695 "cse_detection.m"
            {
#line 695 "cse_detection.m"
              {
#line 695 "cse_detection.m"
                MR_Word base;
#line 695 "cse_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "cse_detection.m"
                *check_hlds__cse_detection__Goals_10 = base;
#line 695 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal0_9));
#line 695 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 695 "cse_detection.m"
              }
#line 696 "cse_detection.m"
              *check_hlds__cse_detection__STATE_VARIABLE_CseState_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 695 "cse_detection.m"
            }
#line 683 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24;
#line 683 "cse_detection.m"
        }
#line 677 "cse_detection.m"
        break;
#line 677 "cse_detection.m"
    }
#line 677 "cse_detection.m"
  }
#line 670 "cse_detection.m"
}

#line 635 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0_1(
#line 635 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 635 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 635 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 635 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 635 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 635 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 635 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 635 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7)
#line 635 "cse_detection.m"
{
#line 635 "cse_detection.m"
  {
#line 635 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 635 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv2_Goals_10;
#line 635 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23;
#line 635 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25;

#line 635 "cse_detection.m"
    {
#line 635 "cse_detection.m"
      check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv2_Goals_10, ((MR_Word) check_hlds__cse_detection__wrapper_arg_4), &check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23, ((MR_Word) check_hlds__cse_detection__wrapper_arg_6), &check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25);
    }
#line 635 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv2_Goals_10));
#line 635 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23));
#line 635 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_7 = ((MR_Box) (check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25));
#line 635 "cse_detection.m"
  }
#line 635 "cse_detection.m"
}

#line 627 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(
#line 627 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 627 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 627 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3,
#line 627 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_4,
#line 627 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 627 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 627 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7)
#line 627 "cse_detection.m"
{
#line 631 "cse_detection.m"
  {
#line 631 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 631 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 631 "cse_detection.m"
      {
#line 631 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 631 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5;
#line 631 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseState_4 = check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3;
#line 631 "cse_detection.m"
        check_hlds__cse_detection__succeeded = MR_TRUE;
#line 631 "cse_detection.m"
      }
#line 631 "cse_detection.m"
    else
#line 633 "cse_detection.m"
      {
#line 633 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Case0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 633 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Cases0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 633 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Case_20;
#line 633 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Cases_21;
#line 633 "cse_detection.m"
        MR_Word check_hlds__cse_detection__MainConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_15, (MR_Integer) 0)));
#line 633 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OtherConsIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_15, (MR_Integer) 1)));
#line 633 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_15, (MR_Integer) 2)));
#line 633 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_25;
#line 633 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34;
#line 633 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_35_35;
#line 633 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_48_48;
#line 635 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_34_34;
#line 635 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_35_35;
#line 638 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_26_26;
#line 638 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_27_27;
#line 638 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_28_28;

#line 635 "cse_detection.m"
        {
#line 635 "cse_detection.m"
          check_hlds__switch_detection__find_bind_var_9_p_0((MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0, (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0, check_hlds__cse_detection__HeadVar__2_2, (MR_Word) &check_hlds__cse_detection_scalar_common_2[6], check_hlds__cse_detection__Goal0_24, &check_hlds__cse_detection__Goal_25, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3)), &check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_34_34, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5)), &check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_35_35, &check_hlds__cse_detection__V_48_48);
        }
#line 635 "cse_detection.m"
        check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34 = ((MR_Word) check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_34_34);
#line 635 "cse_detection.m"
        check_hlds__cse_detection__STATE_VARIABLE_CseInfo_35_35 = ((MR_Word) check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_35_35);
#line 635 "cse_detection.m"
        check_hlds__cse_detection__succeeded = ((MR_Integer) 0 == check_hlds__cse_detection__V_48_48);
#line 633 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 633 "cse_detection.m"
          {
#line 638 "cse_detection.m"
            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 638 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 638 "cse_detection.m"
              {
#line 638 "cse_detection.m"
                check_hlds__cse_detection__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34, (MR_Integer) 0)));
#line 638 "cse_detection.m"
                check_hlds__cse_detection__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34, (MR_Integer) 1)));
#line 638 "cse_detection.m"
                check_hlds__cse_detection__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34, (MR_Integer) 2)));
#line 637 "cse_detection.m"
                {
#line 637 "cse_detection.m"
                  check_hlds__cse_detection__Case_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 637 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_20, 0) = ((MR_Box) (check_hlds__cse_detection__MainConsId_22));
#line 637 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_20, 1) = ((MR_Box) (check_hlds__cse_detection__OtherConsIds_23));
#line 637 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_20, 2) = ((MR_Box) (check_hlds__cse_detection__Goal_25));
#line 637 "cse_detection.m"
                }
#line 639 "cse_detection.m"
                {
#line 639 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(check_hlds__cse_detection__Cases0_16, check_hlds__cse_detection__HeadVar__2_2, check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34, check_hlds__cse_detection__STATE_VARIABLE_CseState_4, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_35_35, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6, &check_hlds__cse_detection__Cases_21);
                }
#line 633 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 633 "cse_detection.m"
                  {
#line 633 "cse_detection.m"
                    {
#line 633 "cse_detection.m"
                      MR_Word base;
#line 633 "cse_detection.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "cse_detection.m"
                      *check_hlds__cse_detection__HeadVar__7_7 = base;
#line 633 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Case_20));
#line 633 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Cases_21));
#line 633 "cse_detection.m"
                    }
#line 633 "cse_detection.m"
                    check_hlds__cse_detection__succeeded = MR_TRUE;
#line 633 "cse_detection.m"
                  }
#line 638 "cse_detection.m"
              }
#line 633 "cse_detection.m"
          }
#line 633 "cse_detection.m"
      }
#line 631 "cse_detection.m"
    return check_hlds__cse_detection__succeeded;
#line 631 "cse_detection.m"
  }
#line 627 "cse_detection.m"
}

#line 610 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0_1(
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 610 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 610 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 610 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7)
#line 610 "cse_detection.m"
{
#line 610 "cse_detection.m"
  {
#line 610 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 610 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv2_Goals_10;
#line 610 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23;
#line 610 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25;

#line 610 "cse_detection.m"
    {
#line 610 "cse_detection.m"
      check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv2_Goals_10, ((MR_Word) check_hlds__cse_detection__wrapper_arg_4), &check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23, ((MR_Word) check_hlds__cse_detection__wrapper_arg_6), &check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25);
    }
#line 610 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv2_Goals_10));
#line 610 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23));
#line 610 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_7 = ((MR_Box) (check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25));
#line 610 "cse_detection.m"
  }
#line 610 "cse_detection.m"
}

#line 603 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0(
#line 603 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 603 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 603 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3,
#line 603 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_4,
#line 603 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 603 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 603 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7)
#line 603 "cse_detection.m"
{
#line 607 "cse_detection.m"
  {
#line 607 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 607 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 607 "cse_detection.m"
      {
#line 607 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 607 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5;
#line 607 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseState_4 = check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3;
#line 607 "cse_detection.m"
        check_hlds__cse_detection__succeeded = MR_TRUE;
#line 607 "cse_detection.m"
      }
#line 607 "cse_detection.m"
    else
#line 609 "cse_detection.m"
      {
#line 609 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 609 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 609 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_20;
#line 609 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goals_21;
#line 609 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30;
#line 609 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_31;
#line 609 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_44_44;
#line 610 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_30;
#line 610 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_31;
#line 612 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_22_22;
#line 612 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_23_23;
#line 612 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_24_24;

#line 610 "cse_detection.m"
        {
#line 610 "cse_detection.m"
          check_hlds__switch_detection__find_bind_var_9_p_0((MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0, (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0, check_hlds__cse_detection__HeadVar__2_2, (MR_Word) &check_hlds__cse_detection_scalar_common_2[5], check_hlds__cse_detection__Goal0_15, &check_hlds__cse_detection__Goal_20, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3)), &check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_30, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5)), &check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_31, &check_hlds__cse_detection__V_44_44);
        }
#line 610 "cse_detection.m"
        check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30 = ((MR_Word) check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_30);
#line 610 "cse_detection.m"
        check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_31 = ((MR_Word) check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_31);
#line 610 "cse_detection.m"
        check_hlds__cse_detection__succeeded = ((MR_Integer) 0 == check_hlds__cse_detection__V_44_44);
#line 609 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 609 "cse_detection.m"
          {
#line 612 "cse_detection.m"
            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 612 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 612 "cse_detection.m"
              {
#line 612 "cse_detection.m"
                check_hlds__cse_detection__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30, (MR_Integer) 0)));
#line 612 "cse_detection.m"
                check_hlds__cse_detection__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30, (MR_Integer) 1)));
#line 612 "cse_detection.m"
                check_hlds__cse_detection__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30, (MR_Integer) 2)));
#line 613 "cse_detection.m"
                {
#line 613 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = check_hlds__cse_detection__common_deconstruct_2_7_p_0(check_hlds__cse_detection__Goals0_16, check_hlds__cse_detection__HeadVar__2_2, check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30, check_hlds__cse_detection__STATE_VARIABLE_CseState_4, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_31, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6, &check_hlds__cse_detection__Goals_21);
                }
#line 609 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 609 "cse_detection.m"
                  {
#line 609 "cse_detection.m"
                    {
#line 609 "cse_detection.m"
                      MR_Word base;
#line 609 "cse_detection.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "cse_detection.m"
                      *check_hlds__cse_detection__HeadVar__7_7 = base;
#line 609 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal_20));
#line 609 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_21));
#line 609 "cse_detection.m"
                    }
#line 609 "cse_detection.m"
                    check_hlds__cse_detection__succeeded = MR_TRUE;
#line 609 "cse_detection.m"
                  }
#line 612 "cse_detection.m"
              }
#line 609 "cse_detection.m"
          }
#line 609 "cse_detection.m"
      }
#line 607 "cse_detection.m"
    return check_hlds__cse_detection__succeeded;
#line 607 "cse_detection.m"
  }
#line 603 "cse_detection.m"
}

#line 565 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_arms_10_p_0(
#line 565 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cond0_11,
#line 565 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Cond_12,
#line 565 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Then0_13,
#line 565 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Then_14,
#line 565 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Else0_15,
#line 565 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Else_16,
#line 565 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25,
#line 565 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26,
#line 565 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_18,
#line 565 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_19)
#line 565 "cse_detection.m"
{
#line 570 "cse_detection.m"
  {
#line 570 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 570 "cse_detection.m"
    MR_Word check_hlds__cse_detection__InstMap1_20;
#line 570 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Redo1_21;
#line 570 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Redo2_22;
#line 570 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Redo3_23;
#line 570 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Redo12_24;
#line 570 "cse_detection.m"
    MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_27_27;
#line 570 "cse_detection.m"
    MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_28_28;
#line 570 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalExpr0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Cond0_11, (MR_Integer) 0)));
#line 570 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Cond0_11, (MR_Integer) 1)));
#line 570 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalExpr_40;
#line 570 "cse_detection.m"
    MR_Word check_hlds__cse_detection__InstMapDelta_41;
#line 295 "cse_detection.m"
    MR_Word check_hlds__cse_detection___InstMap_50;
#line 295 "cse_detection.m"
    MR_Word check_hlds__cse_detection___InstMap_59;

#line 308 "cse_detection.m"
    {
#line 308 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(check_hlds__cse_detection__GoalExpr0_38, &check_hlds__cse_detection__GoalExpr_40, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_27_27, check_hlds__cse_detection__GoalInfo_39, check_hlds__cse_detection__InstMap0_18, &check_hlds__cse_detection__Redo1_21);
    }
#line 310 "cse_detection.m"
    {
#line 310 "cse_detection.m"
      MR_Word base;
#line 310 "cse_detection.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "cse_detection.m"
      *check_hlds__cse_detection__Cond_12 = base;
#line 310 "cse_detection.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__cse_detection__GoalExpr_40));
#line 310 "cse_detection.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_39));
#line 310 "cse_detection.m"
    }
#line 311 "cse_detection.m"
    {
#line 311 "cse_detection.m"
      check_hlds__cse_detection__InstMapDelta_41 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__cse_detection__GoalInfo_39);
    }
#line 312 "cse_detection.m"
    {
#line 312 "cse_detection.m"
      hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__cse_detection__InstMap0_18, check_hlds__cse_detection__InstMapDelta_41, &check_hlds__cse_detection__InstMap1_20);
    }
#line 295 "cse_detection.m"
    {
#line 295 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Then0_13, check_hlds__cse_detection__Then_14, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_27_27, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_28_28, check_hlds__cse_detection__InstMap1_20, &check_hlds__cse_detection___InstMap_50, &check_hlds__cse_detection__Redo2_22);
    }
#line 295 "cse_detection.m"
    {
#line 295 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Else0_15, check_hlds__cse_detection__Else_16, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_28_28, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26, check_hlds__cse_detection__InstMap0_18, &check_hlds__cse_detection___InstMap_59, &check_hlds__cse_detection__Redo3_23);
    }
#line 575 "cse_detection.m"
    {
#line 575 "cse_detection.m"
      mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_21, check_hlds__cse_detection__Redo2_22, &check_hlds__cse_detection__Redo12_24);
    }
#line 576 "cse_detection.m"
    {
#line 576 "cse_detection.m"
      mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo12_24, check_hlds__cse_detection__Redo3_23, check_hlds__cse_detection__Redo_19);
#line 576 "cse_detection.m"
      return;
    }
#line 570 "cse_detection.m"
  }
#line 565 "cse_detection.m"
}

#line 610 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0_2(
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 610 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 610 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 610 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7)
#line 610 "cse_detection.m"
{
#line 610 "cse_detection.m"
  {
#line 610 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 610 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv7_Goals_10;
#line 610 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv6_STATE_VARIABLE_CseState_23;
#line 610 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv5_STATE_VARIABLE_CseInfo_25;

#line 610 "cse_detection.m"
    {
#line 610 "cse_detection.m"
      check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv7_Goals_10, ((MR_Word) check_hlds__cse_detection__wrapper_arg_4), &check_hlds__cse_detection__conv6_STATE_VARIABLE_CseState_23, ((MR_Word) check_hlds__cse_detection__wrapper_arg_6), &check_hlds__cse_detection__conv5_STATE_VARIABLE_CseInfo_25);
    }
#line 610 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv7_Goals_10));
#line 610 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__cse_detection__conv6_STATE_VARIABLE_CseState_23));
#line 610 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_7 = ((MR_Box) (check_hlds__cse_detection__conv5_STATE_VARIABLE_CseInfo_25));
#line 610 "cse_detection.m"
  }
#line 610 "cse_detection.m"
}

#line 610 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0_1(
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 610 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 610 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 610 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 610 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7)
#line 610 "cse_detection.m"
{
#line 610 "cse_detection.m"
  {
#line 610 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 610 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv2_Goals_10;
#line 610 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23;
#line 610 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25;

#line 610 "cse_detection.m"
    {
#line 610 "cse_detection.m"
      check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv2_Goals_10, ((MR_Word) check_hlds__cse_detection__wrapper_arg_4), &check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23, ((MR_Word) check_hlds__cse_detection__wrapper_arg_6), &check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25);
    }
#line 610 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv2_Goals_10));
#line 610 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23));
#line 610 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_7 = ((MR_Box) (check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25));
#line 610 "cse_detection.m"
  }
#line 610 "cse_detection.m"
}

#line 534 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0(
#line 534 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 534 "cse_detection.m"
  MR_Word check_hlds__cse_detection__IfVars_2,
#line 534 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cond0_3,
#line 534 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Then0_4,
#line 534 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Else0_5,
#line 534 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo_6,
#line 534 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap_7,
#line 534 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8,
#line 534 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_9,
#line 534 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_10,
#line 534 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__11_11)
#line 534 "cse_detection.m"
{
#line 540 "cse_detection.m"
  while (MR_TRUE)
#line 540 "cse_detection.m"
    {
#line 540 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 540 "cse_detection.m"
      {
#line 540 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;

#line 540 "cse_detection.m"
        if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 540 "cse_detection.m"
          {
#line 540 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Cond_20;
#line 540 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Then_21;
#line 540 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Else_22;

#line 541 "cse_detection.m"
            {
#line 541 "cse_detection.m"
              check_hlds__cse_detection__detect_cse_in_ite_arms_10_p_0(check_hlds__cse_detection__Cond0_3, &check_hlds__cse_detection__Cond_20, check_hlds__cse_detection__Then0_4, &check_hlds__cse_detection__Then_21, check_hlds__cse_detection__Else0_5, &check_hlds__cse_detection__Else_22, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_9, check_hlds__cse_detection__InstMap_7, check_hlds__cse_detection__Redo_10);
            }
#line 540 "cse_detection.m"
            {
#line 540 "cse_detection.m"
              MR_Word base;
#line 540 "cse_detection.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 540 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__11_11 = base;
#line 540 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 540 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__IfVars_2));
#line 540 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__Cond_20));
#line 540 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__cse_detection__Then_21));
#line 540 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__cse_detection__Else_22));
#line 540 "cse_detection.m"
            }
#line 540 "cse_detection.m"
          }
#line 540 "cse_detection.m"
        else
#line 544 "cse_detection.m"
          {
#line 544 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 544 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Vars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 560 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Unify_39;
#line 560 "cse_detection.m"
            MR_Word check_hlds__cse_detection__FirstOldNew_40;
#line 560 "cse_detection.m"
            MR_Word check_hlds__cse_detection__LaterOldNew_41;
#line 560 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Then_43;
#line 560 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Else_44;
#line 560 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_49_49;
#line 546 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeCtorInfo_42_112;
#line 546 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeCtorInfo_43_113;
#line 546 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeCtorInfo_42_156;
#line 546 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeCtorInfo_43_157;
#line 546 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ModuleInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 3)));
#line 546 "cse_detection.m"
            MR_Word check_hlds__cse_detection__VarInst0_38;
#line 546 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_51_51;
#line 546 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_75_75;
#line 546 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals0_86;
#line 546 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_99_99;
#line 546 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100;
#line 546 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_101;
#line 546 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_102_102;
#line 546 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_114_114;
#line 546 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goal0_129;
#line 546 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals_135;
#line 546 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_143_143;
#line 546 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144;
#line 546 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_146_146;
#line 546 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_158_158;
#line 546 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 0)));
#line 546 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 1)));
#line 546 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 2)));
#line 610 "cse_detection.m"
            MR_Box check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_100;
#line 610 "cse_detection.m"
            MR_Box check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_101;
#line 612 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_92_92;
#line 612 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_93_93;
#line 612 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_94_94;
#line 608 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals0_130;
#line 610 "cse_detection.m"
            MR_Box check_hlds__cse_detection__conv9_STATE_VARIABLE_CseState_30_144;
#line 610 "cse_detection.m"
            MR_Box check_hlds__cse_detection__conv8_STATE_VARIABLE_CseInfo_49_49;
#line 601 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_73_73;
#line 601 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_74_74;
#line 609 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals_91;

#line 547 "cse_detection.m"
            {
#line 547 "cse_detection.m"
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__cse_detection__InstMap_7, check_hlds__cse_detection__Var_26, &check_hlds__cse_detection__VarInst0_38);
            }
#line 550 "cse_detection.m"
            {
#line 550 "cse_detection.m"
              check_hlds__cse_detection__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_p_0(check_hlds__cse_detection__ModuleInfo_37, check_hlds__cse_detection__VarInst0_38);
            }
#line 546 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 546 "cse_detection.m"
              {
#line 551 "cse_detection.m"
                check_hlds__cse_detection__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 599 "cse_detection.m"
                check_hlds__cse_detection__V_75_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 551 "cse_detection.m"
                {
#line 551 "cse_detection.m"
                  check_hlds__cse_detection__Goals0_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals0_86, 0) = ((MR_Box) (check_hlds__cse_detection__Else0_5));
#line 551 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals0_86, 1) = ((MR_Box) (check_hlds__cse_detection__V_51_51));
#line 551 "cse_detection.m"
                }
#line 610 "cse_detection.m"
                check_hlds__cse_detection__V_99_99 = (MR_Word) &check_hlds__cse_detection_scalar_common_2[3];
#line 611 "cse_detection.m"
                check_hlds__cse_detection__V_102_102 = (MR_Integer) 0;
#line 4318 "check_hlds.cse_detection.c"
                check_hlds__cse_detection__TypeCtorInfo_42_112 = (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0;
#line 4320 "check_hlds.cse_detection.c"
                check_hlds__cse_detection__TypeCtorInfo_43_113 = (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0;
#line 610 "cse_detection.m"
                {
#line 610 "cse_detection.m"
                  check_hlds__switch_detection__find_bind_var_9_p_0(check_hlds__cse_detection__TypeCtorInfo_42_112, check_hlds__cse_detection__TypeCtorInfo_43_113, check_hlds__cse_detection__Var_26, check_hlds__cse_detection__V_99_99, check_hlds__cse_detection__Then0_4, &check_hlds__cse_detection__Then_43, ((MR_Box) (check_hlds__cse_detection__V_75_75)), &check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_100, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8)), &check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_101, &check_hlds__cse_detection__V_114_114);
                }
#line 610 "cse_detection.m"
                check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100 = ((MR_Word) check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_100);
#line 610 "cse_detection.m"
                check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_101 = ((MR_Word) check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_101);
#line 610 "cse_detection.m"
                check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_102_102 == check_hlds__cse_detection__V_114_114);
#line 546 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 546 "cse_detection.m"
                  {
#line 612 "cse_detection.m"
                    check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100)) == (MR_mktag((MR_Integer) 1)));
#line 612 "cse_detection.m"
                    if (check_hlds__cse_detection__succeeded)
#line 612 "cse_detection.m"
                      {
#line 612 "cse_detection.m"
                        check_hlds__cse_detection__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100, (MR_Integer) 0)));
#line 612 "cse_detection.m"
                        check_hlds__cse_detection__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100, (MR_Integer) 1)));
#line 612 "cse_detection.m"
                        check_hlds__cse_detection__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100, (MR_Integer) 2)));
#line 608 "cse_detection.m"
                        check_hlds__cse_detection__Goal0_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals0_86, (MR_Integer) 0)));
#line 608 "cse_detection.m"
                        check_hlds__cse_detection__Goals0_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals0_86, (MR_Integer) 1)));
#line 610 "cse_detection.m"
                        check_hlds__cse_detection__V_143_143 = (MR_Word) &check_hlds__cse_detection_scalar_common_2[4];
#line 611 "cse_detection.m"
                        check_hlds__cse_detection__V_146_146 = (MR_Integer) 0;
#line 4357 "check_hlds.cse_detection.c"
                        check_hlds__cse_detection__TypeCtorInfo_42_156 = (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0;
#line 4359 "check_hlds.cse_detection.c"
                        check_hlds__cse_detection__TypeCtorInfo_43_157 = (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0;
#line 610 "cse_detection.m"
                        {
#line 610 "cse_detection.m"
                          check_hlds__switch_detection__find_bind_var_9_p_0(check_hlds__cse_detection__TypeCtorInfo_42_156, check_hlds__cse_detection__TypeCtorInfo_43_157, check_hlds__cse_detection__Var_26, check_hlds__cse_detection__V_143_143, check_hlds__cse_detection__Goal0_129, &check_hlds__cse_detection__Else_44, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100)), &check_hlds__cse_detection__conv9_STATE_VARIABLE_CseState_30_144, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_101)), &check_hlds__cse_detection__conv8_STATE_VARIABLE_CseInfo_49_49, &check_hlds__cse_detection__V_158_158);
                        }
#line 610 "cse_detection.m"
                        check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144 = ((MR_Word) check_hlds__cse_detection__conv9_STATE_VARIABLE_CseState_30_144);
#line 610 "cse_detection.m"
                        check_hlds__cse_detection__STATE_VARIABLE_CseInfo_49_49 = ((MR_Word) check_hlds__cse_detection__conv8_STATE_VARIABLE_CseInfo_49_49);
#line 610 "cse_detection.m"
                        check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_146_146 == check_hlds__cse_detection__V_158_158);
#line 546 "cse_detection.m"
                        if (check_hlds__cse_detection__succeeded)
#line 546 "cse_detection.m"
                          {
#line 612 "cse_detection.m"
                            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144)) == (MR_mktag((MR_Integer) 1)));
#line 612 "cse_detection.m"
                            if (check_hlds__cse_detection__succeeded)
#line 612 "cse_detection.m"
                              {
#line 612 "cse_detection.m"
                                check_hlds__cse_detection__Unify_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144, (MR_Integer) 0)));
#line 612 "cse_detection.m"
                                check_hlds__cse_detection__FirstOldNew_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144, (MR_Integer) 1)));
#line 612 "cse_detection.m"
                                check_hlds__cse_detection__LaterOldNew_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144, (MR_Integer) 2)));
#line 607 "cse_detection.m"
                                check_hlds__cse_detection__Goals_135 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 601 "cse_detection.m"
                                check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__LaterOldNew_41)) == (MR_mktag((MR_Integer) 1)));
#line 601 "cse_detection.m"
                                if (check_hlds__cse_detection__succeeded)
#line 601 "cse_detection.m"
                                  {
#line 601 "cse_detection.m"
                                    check_hlds__cse_detection__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_41, (MR_Integer) 0)));
#line 601 "cse_detection.m"
                                    check_hlds__cse_detection__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_41, (MR_Integer) 1)));
#line 609 "cse_detection.m"
                                    {
#line 609 "cse_detection.m"
                                      check_hlds__cse_detection__Goals_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "cse_detection.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals_91, 0) = ((MR_Box) (check_hlds__cse_detection__Else_44));
#line 609 "cse_detection.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals_91, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_135));
#line 609 "cse_detection.m"
                                    }
#line 553 "cse_detection.m"
                                    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__Goals_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 601 "cse_detection.m"
                                  }
#line 612 "cse_detection.m"
                              }
#line 546 "cse_detection.m"
                          }
#line 612 "cse_detection.m"
                      }
#line 546 "cse_detection.m"
                  }
#line 546 "cse_detection.m"
              }
#line 560 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 556 "cse_detection.m"
              {
#line 556 "cse_detection.m"
                MR_Word check_hlds__cse_detection__IfGoal_45;
#line 556 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_55_55;
#line 556 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_57_57;
#line 556 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_58_58;

#line 555 "cse_detection.m"
                {
#line 555 "cse_detection.m"
                  check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(check_hlds__cse_detection__Unify_39, check_hlds__cse_detection__FirstOldNew_40, check_hlds__cse_detection__LaterOldNew_41, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_49_49, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_9);
                }
#line 557 "cse_detection.m"
                {
#line 557 "cse_detection.m"
                  check_hlds__cse_detection__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 557 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 557 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 1) = ((MR_Box) (check_hlds__cse_detection__IfVars_2));
#line 557 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 2) = ((MR_Box) (check_hlds__cse_detection__Cond0_3));
#line 557 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 3) = ((MR_Box) (check_hlds__cse_detection__Then_43));
#line 557 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 4) = ((MR_Box) (check_hlds__cse_detection__Else_44));
#line 557 "cse_detection.m"
                }
#line 557 "cse_detection.m"
                {
#line 557 "cse_detection.m"
                  check_hlds__cse_detection__IfGoal_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 557 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__IfGoal_45, 0) = ((MR_Box) (check_hlds__cse_detection__V_55_55));
#line 557 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__IfGoal_45, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_6));
#line 557 "cse_detection.m"
                }
#line 558 "cse_detection.m"
                {
#line 558 "cse_detection.m"
                  check_hlds__cse_detection__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, 0) = ((MR_Box) (check_hlds__cse_detection__IfGoal_45));
#line 558 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 558 "cse_detection.m"
                }
#line 558 "cse_detection.m"
                {
#line 558 "cse_detection.m"
                  check_hlds__cse_detection__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_57_57, 0) = ((MR_Box) (check_hlds__cse_detection__Unify_39));
#line 558 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_57_57, 1) = ((MR_Box) (check_hlds__cse_detection__V_58_58));
#line 558 "cse_detection.m"
                }
#line 558 "cse_detection.m"
                {
#line 558 "cse_detection.m"
                  MR_Word base;
#line 558 "cse_detection.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 558 "cse_detection.m"
                  *check_hlds__cse_detection__HeadVar__11_11 = base;
#line 558 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 558 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 558 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__V_57_57));
#line 558 "cse_detection.m"
                }
#line 559 "cse_detection.m"
                *check_hlds__cse_detection__Redo_10 = (MR_Integer) 1;
#line 556 "cse_detection.m"
              }
#line 560 "cse_detection.m"
            else
#line 561 "cse_detection.m"
              {
#line 561 "cse_detection.m"
                /* direct tailcall eliminated */
#line 561 "cse_detection.m"
                {
#line 561 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__HeadVar__1__tmp_copy_1 = check_hlds__cse_detection__Vars_27;

#line 561 "cse_detection.m"
                  check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__HeadVar__1__tmp_copy_1;
#line 561 "cse_detection.m"
                }
#line 561 "cse_detection.m"
                continue;
#line 561 "cse_detection.m"
              }
#line 544 "cse_detection.m"
          }
#line 540 "cse_detection.m"
      }
#line 540 "cse_detection.m"
      break;
#line 540 "cse_detection.m"
    }
#line 534 "cse_detection.m"
}

#line 522 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_arms_6_p_0(
#line 522 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 522 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 522 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 522 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 522 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_5,
#line 522 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6)
#line 522 "cse_detection.m"
{
#line 525 "cse_detection.m"
  {
#line 525 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 525 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 525 "cse_detection.m"
      {
#line 525 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 525 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__6_6 = (MR_Integer) 0;
#line 525 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3;
#line 525 "cse_detection.m"
      }
#line 525 "cse_detection.m"
    else
#line 527 "cse_detection.m"
      {
#line 527 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Case0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 527 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 527 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Case_13;
#line 527 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Cases_14;
#line 527 "cse_detection.m"
        MR_Word check_hlds__cse_detection__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_11, (MR_Integer) 0)));
#line 527 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_11, (MR_Integer) 1)));
#line 527 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_11, (MR_Integer) 2)));
#line 527 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_21;
#line 527 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo1_22;
#line 527 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo2_23;
#line 527 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26_26;
#line 295 "cse_detection.m"
        MR_Word check_hlds__cse_detection___InstMap_35;

#line 295 "cse_detection.m"
        {
#line 295 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Goal0_20, &check_hlds__cse_detection__Goal_21, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26_26, check_hlds__cse_detection__InstMap0_5, &check_hlds__cse_detection___InstMap_35, &check_hlds__cse_detection__Redo1_22);
        }
#line 530 "cse_detection.m"
        {
#line 530 "cse_detection.m"
          check_hlds__cse_detection__Case_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 530 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_13, 0) = ((MR_Box) (check_hlds__cse_detection__MainConsId_18));
#line 530 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_13, 1) = ((MR_Box) (check_hlds__cse_detection__OtherConsIds_19));
#line 530 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_13, 2) = ((MR_Box) (check_hlds__cse_detection__Goal_21));
#line 530 "cse_detection.m"
        }
#line 531 "cse_detection.m"
        {
#line 531 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_cases_arms_6_p_0(check_hlds__cse_detection__Cases0_12, &check_hlds__cse_detection__Cases_14, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26_26, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4, check_hlds__cse_detection__InstMap0_5, &check_hlds__cse_detection__Redo2_23);
        }
#line 526 "cse_detection.m"
        {
#line 526 "cse_detection.m"
          MR_Word base;
#line 526 "cse_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 526 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__2_2 = base;
#line 526 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Case_13));
#line 526 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Cases_14));
#line 526 "cse_detection.m"
        }
#line 532 "cse_detection.m"
        {
#line 532 "cse_detection.m"
          mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_22, check_hlds__cse_detection__Redo2_23, check_hlds__cse_detection__HeadVar__6_6);
#line 532 "cse_detection.m"
          return;
        }
#line 527 "cse_detection.m"
      }
#line 525 "cse_detection.m"
  }
#line 522 "cse_detection.m"
}

#line 493 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_10_p_0(
#line 493 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 493 "cse_detection.m"
  MR_Word check_hlds__cse_detection__SwitchVar_2,
#line 493 "cse_detection.m"
  MR_Word check_hlds__cse_detection__CanFail_3,
#line 493 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cases0_4,
#line 493 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__5_5,
#line 493 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_6,
#line 493 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7,
#line 493 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_8,
#line 493 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_9,
#line 493 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__10_10)
#line 493 "cse_detection.m"
{
#line 498 "cse_detection.m"
  while (MR_TRUE)
#line 498 "cse_detection.m"
    {
#line 498 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 498 "cse_detection.m"
      {
#line 498 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;

#line 498 "cse_detection.m"
        if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 498 "cse_detection.m"
          {
#line 498 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Cases_18;

#line 499 "cse_detection.m"
            {
#line 499 "cse_detection.m"
              check_hlds__cse_detection__detect_cse_in_cases_arms_6_p_0(check_hlds__cse_detection__Cases0_4, &check_hlds__cse_detection__Cases_18, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_8, check_hlds__cse_detection__InstMap0_6, check_hlds__cse_detection__Redo_9);
            }
#line 498 "cse_detection.m"
            {
#line 498 "cse_detection.m"
              MR_Word base;
#line 498 "cse_detection.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 498 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__10_10 = base;
#line 498 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 498 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__SwitchVar_2));
#line 498 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__CanFail_3));
#line 498 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__cse_detection__Cases_18));
#line 498 "cse_detection.m"
            }
#line 498 "cse_detection.m"
          }
#line 498 "cse_detection.m"
        else
#line 501 "cse_detection.m"
          {
#line 501 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 501 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 517 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Unify_34;
#line 517 "cse_detection.m"
            MR_Word check_hlds__cse_detection__FirstOldNew_35;
#line 517 "cse_detection.m"
            MR_Word check_hlds__cse_detection__LaterOldNew_36;
#line 517 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Cases_37;
#line 517 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_40_40;
#line 503 "cse_detection.m"
            MR_Word check_hlds__cse_detection__VarInst0_32;
#line 503 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ModuleInfo_33;
#line 503 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_64_64;
#line 503 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_65_65;
#line 505 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_49_49;
#line 505 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_50_50;
#line 505 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_51_51;
#line 625 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_62_62;
#line 625 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_63_63;

#line 503 "cse_detection.m"
            {
#line 503 "cse_detection.m"
              check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[0], ((MR_Box) (check_hlds__cse_detection__Var_22)), ((MR_Box) (check_hlds__cse_detection__SwitchVar_2)));
            }
#line 503 "cse_detection.m"
            check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 503 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 503 "cse_detection.m"
              {
#line 504 "cse_detection.m"
                {
#line 504 "cse_detection.m"
                  hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__cse_detection__InstMap0_6, check_hlds__cse_detection__Var_22, &check_hlds__cse_detection__VarInst0_32);
                }
#line 505 "cse_detection.m"
                check_hlds__cse_detection__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 0)));
#line 505 "cse_detection.m"
                check_hlds__cse_detection__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 1)));
#line 505 "cse_detection.m"
                check_hlds__cse_detection__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 2)));
#line 505 "cse_detection.m"
                check_hlds__cse_detection__ModuleInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 3)));
#line 508 "cse_detection.m"
                {
#line 508 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_p_0(check_hlds__cse_detection__ModuleInfo_33, check_hlds__cse_detection__VarInst0_32);
                }
#line 503 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 503 "cse_detection.m"
                  {
#line 623 "cse_detection.m"
                    check_hlds__cse_detection__V_64_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 623 "cse_detection.m"
                    {
#line 623 "cse_detection.m"
                      check_hlds__cse_detection__succeeded = check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(check_hlds__cse_detection__Cases0_4, check_hlds__cse_detection__Var_22, check_hlds__cse_detection__V_64_64, &check_hlds__cse_detection__V_65_65, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_40_40, &check_hlds__cse_detection__Cases_37);
                    }
#line 503 "cse_detection.m"
                    if (check_hlds__cse_detection__succeeded)
#line 503 "cse_detection.m"
                      {
#line 624 "cse_detection.m"
                        check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_65_65)) == (MR_mktag((MR_Integer) 1)));
#line 624 "cse_detection.m"
                        if (check_hlds__cse_detection__succeeded)
#line 624 "cse_detection.m"
                          {
#line 624 "cse_detection.m"
                            check_hlds__cse_detection__Unify_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_65_65, (MR_Integer) 0)));
#line 624 "cse_detection.m"
                            check_hlds__cse_detection__FirstOldNew_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_65_65, (MR_Integer) 1)));
#line 624 "cse_detection.m"
                            check_hlds__cse_detection__LaterOldNew_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_65_65, (MR_Integer) 2)));
#line 625 "cse_detection.m"
                            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__LaterOldNew_36)) == (MR_mktag((MR_Integer) 1)));
#line 625 "cse_detection.m"
                            if (check_hlds__cse_detection__succeeded)
#line 625 "cse_detection.m"
                              {
#line 625 "cse_detection.m"
                                check_hlds__cse_detection__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_36, (MR_Integer) 0)));
#line 625 "cse_detection.m"
                                check_hlds__cse_detection__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_36, (MR_Integer) 1)));
#line 625 "cse_detection.m"
                              }
#line 624 "cse_detection.m"
                          }
#line 503 "cse_detection.m"
                      }
#line 503 "cse_detection.m"
                  }
#line 503 "cse_detection.m"
              }
#line 517 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 513 "cse_detection.m"
              {
#line 513 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_43_43;
#line 513 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_44_44;
#line 513 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_45_45;
#line 513 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_46_46;

#line 512 "cse_detection.m"
                {
#line 512 "cse_detection.m"
                  check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(check_hlds__cse_detection__Unify_34, check_hlds__cse_detection__FirstOldNew_35, check_hlds__cse_detection__LaterOldNew_36, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_40_40, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_8);
                }
#line 515 "cse_detection.m"
                {
#line 515 "cse_detection.m"
                  check_hlds__cse_detection__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 515 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 515 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_46_46, 1) = ((MR_Box) (check_hlds__cse_detection__SwitchVar_2));
#line 515 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_46_46, 2) = ((MR_Box) (check_hlds__cse_detection__CanFail_3));
#line 515 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_46_46, 3) = ((MR_Box) (check_hlds__cse_detection__Cases_37));
#line 515 "cse_detection.m"
                }
#line 515 "cse_detection.m"
                {
#line 515 "cse_detection.m"
                  check_hlds__cse_detection__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 515 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_45_45, 0) = ((MR_Box) (check_hlds__cse_detection__V_46_46));
#line 515 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_45_45, 1) = ((MR_Box) (check_hlds__cse_detection__HeadVar__5_5));
#line 515 "cse_detection.m"
                }
#line 515 "cse_detection.m"
                {
#line 515 "cse_detection.m"
                  check_hlds__cse_detection__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_44_44, 0) = ((MR_Box) (check_hlds__cse_detection__V_45_45));
#line 515 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 515 "cse_detection.m"
                }
#line 515 "cse_detection.m"
                {
#line 515 "cse_detection.m"
                  check_hlds__cse_detection__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_43_43, 0) = ((MR_Box) (check_hlds__cse_detection__Unify_34));
#line 515 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_43_43, 1) = ((MR_Box) (check_hlds__cse_detection__V_44_44));
#line 515 "cse_detection.m"
                }
#line 514 "cse_detection.m"
                {
#line 514 "cse_detection.m"
                  MR_Word base;
#line 514 "cse_detection.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 514 "cse_detection.m"
                  *check_hlds__cse_detection__HeadVar__10_10 = base;
#line 514 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 514 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 514 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__V_43_43));
#line 514 "cse_detection.m"
                }
#line 516 "cse_detection.m"
                *check_hlds__cse_detection__Redo_9 = (MR_Integer) 1;
#line 513 "cse_detection.m"
              }
#line 517 "cse_detection.m"
            else
#line 518 "cse_detection.m"
              {
#line 518 "cse_detection.m"
                /* direct tailcall eliminated */
#line 518 "cse_detection.m"
                {
#line 518 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__HeadVar__1__tmp_copy_1 = check_hlds__cse_detection__Vars_23;

#line 518 "cse_detection.m"
                  check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__HeadVar__1__tmp_copy_1;
#line 518 "cse_detection.m"
                }
#line 518 "cse_detection.m"
                continue;
#line 518 "cse_detection.m"
              }
#line 501 "cse_detection.m"
          }
#line 498 "cse_detection.m"
      }
#line 498 "cse_detection.m"
      break;
#line 498 "cse_detection.m"
    }
#line 493 "cse_detection.m"
}

#line 482 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(
#line 482 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 482 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 482 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 482 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 482 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_5,
#line 482 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6)
#line 482 "cse_detection.m"
{
#line 486 "cse_detection.m"
  {
#line 486 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 486 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "cse_detection.m"
      {
#line 486 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 486 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__6_6 = (MR_Integer) 0;
#line 486 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3;
#line 486 "cse_detection.m"
      }
#line 486 "cse_detection.m"
    else
#line 488 "cse_detection.m"
      {
#line 488 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 488 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 488 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_13;
#line 488 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goals_14;
#line 488 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo1_18;
#line 488 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo2_19;
#line 488 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_22_22;
#line 295 "cse_detection.m"
        MR_Word check_hlds__cse_detection___InstMap_31;

#line 295 "cse_detection.m"
        {
#line 295 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Goal0_11, &check_hlds__cse_detection__Goal_13, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_22_22, check_hlds__cse_detection__InstMap0_5, &check_hlds__cse_detection___InstMap_31, &check_hlds__cse_detection__Redo1_18);
        }
#line 490 "cse_detection.m"
        {
#line 490 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(check_hlds__cse_detection__Goals0_12, &check_hlds__cse_detection__Goals_14, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_22_22, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4, check_hlds__cse_detection__InstMap0_5, &check_hlds__cse_detection__Redo2_19);
        }
#line 487 "cse_detection.m"
        {
#line 487 "cse_detection.m"
          MR_Word base;
#line 487 "cse_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__2_2 = base;
#line 487 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal_13));
#line 487 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_14));
#line 487 "cse_detection.m"
        }
#line 491 "cse_detection.m"
        {
#line 491 "cse_detection.m"
          mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_18, check_hlds__cse_detection__Redo2_19, check_hlds__cse_detection__HeadVar__6_6);
#line 491 "cse_detection.m"
          return;
        }
#line 488 "cse_detection.m"
      }
#line 486 "cse_detection.m"
  }
#line 482 "cse_detection.m"
}

#line 455 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_disj_8_p_0(
#line 455 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 455 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goals0_2,
#line 455 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo0_3,
#line 455 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__4_4,
#line 455 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 455 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 455 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_7,
#line 455 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__8_8)
#line 455 "cse_detection.m"
{
#line 459 "cse_detection.m"
  while (MR_TRUE)
#line 459 "cse_detection.m"
    {
#line 459 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 459 "cse_detection.m"
      {
#line 459 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;

#line 459 "cse_detection.m"
        if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 459 "cse_detection.m"
          {
#line 459 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals_14;

#line 460 "cse_detection.m"
            {
#line 460 "cse_detection.m"
              check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(check_hlds__cse_detection__Goals0_2, &check_hlds__cse_detection__Goals_14, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6, check_hlds__cse_detection__HeadVar__4_4, check_hlds__cse_detection__Redo_7);
            }
#line 459 "cse_detection.m"
            {
#line 459 "cse_detection.m"
              MR_Word base;
#line 459 "cse_detection.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__8_8 = base;
#line 459 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 459 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_14));
#line 459 "cse_detection.m"
            }
#line 459 "cse_detection.m"
          }
#line 459 "cse_detection.m"
        else
#line 462 "cse_detection.m"
          {
#line 462 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 462 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 477 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Unify_28;
#line 477 "cse_detection.m"
            MR_Word check_hlds__cse_detection__FirstOldNew_29;
#line 477 "cse_detection.m"
            MR_Word check_hlds__cse_detection__LaterOldNew_30;
#line 477 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals_31;
#line 477 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_34_34;
#line 464 "cse_detection.m"
            MR_Word check_hlds__cse_detection__VarInst0_26;
#line 464 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ModuleInfo_27;
#line 464 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_57_57;
#line 464 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_58_58;
#line 465 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_43_43;
#line 465 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_44_44;
#line 465 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_45_45;
#line 601 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_55_55;
#line 601 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_56_56;

#line 464 "cse_detection.m"
            {
#line 464 "cse_detection.m"
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__cse_detection__HeadVar__4_4, check_hlds__cse_detection__Var_18, &check_hlds__cse_detection__VarInst0_26);
            }
#line 465 "cse_detection.m"
            check_hlds__cse_detection__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 0)));
#line 465 "cse_detection.m"
            check_hlds__cse_detection__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 1)));
#line 465 "cse_detection.m"
            check_hlds__cse_detection__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 2)));
#line 465 "cse_detection.m"
            check_hlds__cse_detection__ModuleInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 3)));
#line 468 "cse_detection.m"
            {
#line 468 "cse_detection.m"
              check_hlds__cse_detection__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_p_0(check_hlds__cse_detection__ModuleInfo_27, check_hlds__cse_detection__VarInst0_26);
            }
#line 464 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 464 "cse_detection.m"
              {
#line 599 "cse_detection.m"
                check_hlds__cse_detection__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 599 "cse_detection.m"
                {
#line 599 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = check_hlds__cse_detection__common_deconstruct_2_7_p_0(check_hlds__cse_detection__Goals0_2, check_hlds__cse_detection__Var_18, check_hlds__cse_detection__V_57_57, &check_hlds__cse_detection__V_58_58, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_34_34, &check_hlds__cse_detection__Goals_31);
                }
#line 464 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 464 "cse_detection.m"
                  {
#line 600 "cse_detection.m"
                    check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 600 "cse_detection.m"
                    if (check_hlds__cse_detection__succeeded)
#line 600 "cse_detection.m"
                      {
#line 600 "cse_detection.m"
                        check_hlds__cse_detection__Unify_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, (MR_Integer) 0)));
#line 600 "cse_detection.m"
                        check_hlds__cse_detection__FirstOldNew_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, (MR_Integer) 1)));
#line 600 "cse_detection.m"
                        check_hlds__cse_detection__LaterOldNew_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, (MR_Integer) 2)));
#line 601 "cse_detection.m"
                        check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__LaterOldNew_30)) == (MR_mktag((MR_Integer) 1)));
#line 601 "cse_detection.m"
                        if (check_hlds__cse_detection__succeeded)
#line 601 "cse_detection.m"
                          {
#line 601 "cse_detection.m"
                            check_hlds__cse_detection__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_30, (MR_Integer) 0)));
#line 601 "cse_detection.m"
                            check_hlds__cse_detection__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_30, (MR_Integer) 1)));
#line 601 "cse_detection.m"
                          }
#line 600 "cse_detection.m"
                      }
#line 464 "cse_detection.m"
                  }
#line 464 "cse_detection.m"
              }
#line 477 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 473 "cse_detection.m"
              {
#line 473 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_37_37;
#line 473 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_38_38;
#line 473 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_39_39;
#line 473 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_40_40;

#line 472 "cse_detection.m"
                {
#line 472 "cse_detection.m"
                  check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(check_hlds__cse_detection__Unify_28, check_hlds__cse_detection__FirstOldNew_29, check_hlds__cse_detection__LaterOldNew_30, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_34_34, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6);
                }
#line 475 "cse_detection.m"
                {
#line 475 "cse_detection.m"
                  check_hlds__cse_detection__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 475 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_40_40, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_31));
#line 475 "cse_detection.m"
                }
#line 475 "cse_detection.m"
                {
#line 475 "cse_detection.m"
                  check_hlds__cse_detection__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 475 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_39_39, 0) = ((MR_Box) (check_hlds__cse_detection__V_40_40));
#line 475 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_39_39, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo0_3));
#line 475 "cse_detection.m"
                }
#line 475 "cse_detection.m"
                {
#line 475 "cse_detection.m"
                  check_hlds__cse_detection__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, 0) = ((MR_Box) (check_hlds__cse_detection__V_39_39));
#line 475 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 475 "cse_detection.m"
                }
#line 475 "cse_detection.m"
                {
#line 475 "cse_detection.m"
                  check_hlds__cse_detection__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, 0) = ((MR_Box) (check_hlds__cse_detection__Unify_28));
#line 475 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, 1) = ((MR_Box) (check_hlds__cse_detection__V_38_38));
#line 475 "cse_detection.m"
                }
#line 474 "cse_detection.m"
                {
#line 474 "cse_detection.m"
                  MR_Word base;
#line 474 "cse_detection.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 474 "cse_detection.m"
                  *check_hlds__cse_detection__HeadVar__8_8 = base;
#line 474 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 474 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 474 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__V_37_37));
#line 474 "cse_detection.m"
                }
#line 476 "cse_detection.m"
                *check_hlds__cse_detection__Redo_7 = (MR_Integer) 1;
#line 473 "cse_detection.m"
              }
#line 477 "cse_detection.m"
            else
#line 478 "cse_detection.m"
              {
#line 478 "cse_detection.m"
                /* direct tailcall eliminated */
#line 478 "cse_detection.m"
                {
#line 478 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__HeadVar__1__tmp_copy_1 = check_hlds__cse_detection__Vars_19;

#line 478 "cse_detection.m"
                  check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__HeadVar__1__tmp_copy_1;
#line 478 "cse_detection.m"
                }
#line 478 "cse_detection.m"
                continue;
#line 478 "cse_detection.m"
              }
#line 462 "cse_detection.m"
          }
#line 459 "cse_detection.m"
      }
#line 459 "cse_detection.m"
      break;
#line 459 "cse_detection.m"
    }
#line 455 "cse_detection.m"
}

#line 428 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_conj_7_p_0(
#line 428 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 428 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 428 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 428 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 428 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__5_5,
#line 428 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__6_6,
#line 428 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7)
#line 428 "cse_detection.m"
{
#line 431 "cse_detection.m"
  {
#line 431 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 431 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 431 "cse_detection.m"
      {
#line 431 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 431 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__7_7 = (MR_Integer) 0;
#line 431 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3;
#line 431 "cse_detection.m"
      }
#line 431 "cse_detection.m"
    else
#line 433 "cse_detection.m"
      {
#line 433 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 433 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 433 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_20;
#line 433 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo1_21;
#line 433 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TailGoals_22;
#line 433 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo2_23;
#line 433 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_30_30;
#line 433 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_InstMap_31_31;
#line 433 "cse_detection.m"
        MR_Word check_hlds__cse_detection__GoalExpr0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_13, (MR_Integer) 0)));
#line 433 "cse_detection.m"
        MR_Word check_hlds__cse_detection__GoalInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_13, (MR_Integer) 1)));
#line 433 "cse_detection.m"
        MR_Word check_hlds__cse_detection__GoalExpr_45;
#line 433 "cse_detection.m"
        MR_Word check_hlds__cse_detection__InstMapDelta_46;
#line 443 "cse_detection.m"
        MR_Word check_hlds__cse_detection__ConjGoals_25;
#line 439 "cse_detection.m"
        MR_Word check_hlds__cse_detection__InnerConjType_24;
#line 439 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_33_33;
#line 439 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_26_26;

#line 308 "cse_detection.m"
        {
#line 308 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(check_hlds__cse_detection__GoalExpr0_43, &check_hlds__cse_detection__GoalExpr_45, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_30_30, check_hlds__cse_detection__GoalInfo_44, check_hlds__cse_detection__HeadVar__6_6, &check_hlds__cse_detection__Redo1_21);
        }
#line 310 "cse_detection.m"
        {
#line 310 "cse_detection.m"
          check_hlds__cse_detection__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal_20, 0) = ((MR_Box) (check_hlds__cse_detection__GoalExpr_45));
#line 310 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal_20, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_44));
#line 310 "cse_detection.m"
        }
#line 311 "cse_detection.m"
        {
#line 311 "cse_detection.m"
          check_hlds__cse_detection__InstMapDelta_46 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__cse_detection__GoalInfo_44);
        }
#line 312 "cse_detection.m"
        {
#line 312 "cse_detection.m"
          hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__cse_detection__HeadVar__6_6, check_hlds__cse_detection__InstMapDelta_46, &check_hlds__cse_detection__STATE_VARIABLE_InstMap_31_31);
        }
#line 435 "cse_detection.m"
        {
#line 435 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_conj_7_p_0(check_hlds__cse_detection__Goals0_14, &check_hlds__cse_detection__TailGoals_22, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_30_30, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4, check_hlds__cse_detection__HeadVar__5_5, check_hlds__cse_detection__STATE_VARIABLE_InstMap_31_31, &check_hlds__cse_detection__Redo2_23);
        }
#line 439 "cse_detection.m"
        check_hlds__cse_detection__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal_20, (MR_Integer) 0)));
#line 439 "cse_detection.m"
        check_hlds__cse_detection__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal_20, (MR_Integer) 1)));
#line 439 "cse_detection.m"
        check_hlds__cse_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__cse_detection__V_33_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_33_33, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 439 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 439 "cse_detection.m"
          {
#line 439 "cse_detection.m"
            check_hlds__cse_detection__InnerConjType_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_33_33, (MR_Integer) 1)));
#line 439 "cse_detection.m"
            check_hlds__cse_detection__ConjGoals_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_33_33, (MR_Integer) 2)));
#line 440 "cse_detection.m"
            check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__HeadVar__5_5 == check_hlds__cse_detection__InnerConjType_24);
#line 439 "cse_detection.m"
          }
#line 443 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 442 "cse_detection.m"
          {
#line 442 "cse_detection.m"
            {
#line 442 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__cse_detection__ConjGoals_25, check_hlds__cse_detection__TailGoals_22);
            }
#line 442 "cse_detection.m"
          }
#line 443 "cse_detection.m"
        else
#line 444 "cse_detection.m"
          {
#line 444 "cse_detection.m"
            MR_Word base;
#line 444 "cse_detection.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "cse_detection.m"
            *check_hlds__cse_detection__HeadVar__2_2 = base;
#line 444 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal_20));
#line 444 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__TailGoals_22));
#line 444 "cse_detection.m"
          }
#line 446 "cse_detection.m"
        {
#line 446 "cse_detection.m"
          mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_21, check_hlds__cse_detection__Redo2_23, check_hlds__cse_detection__HeadVar__7_7);
#line 446 "cse_detection.m"
          return;
        }
#line 433 "cse_detection.m"
      }
#line 431 "cse_detection.m"
  }
#line 428 "cse_detection.m"
}

#line 316 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(
#line 316 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalExpr0_8,
#line 316 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__GoalExpr_9,
#line 316 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90,
#line 316 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91,
#line 316 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo_11,
#line 316 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_12,
#line 316 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_13)
#line 316 "cse_detection.m"
{
#line 326 "cse_detection.m"
  {
#line 326 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 326 "cse_detection.m"
#line 326 "cse_detection.m"
    switch (MR_tag((MR_Word) check_hlds__cse_detection__GoalExpr0_8)) {
#line 326 "cse_detection.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 326 "cse_detection.m"
      case (MR_Integer) 0:
#line 350 "cse_detection.m"
        {
#line 350 "cse_detection.m"
          MR_Word check_hlds__cse_detection__SubGoal0_54 = (MR_Word) MR_body(((MR_Word) check_hlds__cse_detection__GoalExpr0_8), (MR_Integer) 0);
#line 350 "cse_detection.m"
          MR_Word check_hlds__cse_detection__SubGoal_55;

#line 351 "cse_detection.m"
          {
#line 351 "cse_detection.m"
            check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__SubGoal0_54, &check_hlds__cse_detection__SubGoal_55, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__Redo_13);
          }
#line 352 "cse_detection.m"
          *check_hlds__cse_detection__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__cse_detection__SubGoal_55);
#line 350 "cse_detection.m"
        }
#line 326 "cse_detection.m"
        break;
#line 326 "cse_detection.m"
      case (MR_Integer) 1:
#line 330 "cse_detection.m"
        {
#line 330 "cse_detection.m"
          MR_Word check_hlds__cse_detection__LHS_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 0)));
#line 330 "cse_detection.m"
          MR_Word check_hlds__cse_detection__RHS0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 330 "cse_detection.m"
          MR_Word check_hlds__cse_detection__Mode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
#line 330 "cse_detection.m"
          MR_Word check_hlds__cse_detection__Unify_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 3)));
#line 330 "cse_detection.m"
          MR_Word check_hlds__cse_detection__UnifyContext_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 4)));
#line 330 "cse_detection.m"
          MR_Word check_hlds__cse_detection__RHS_49;

#line 341 "cse_detection.m"
#line 341 "cse_detection.m"
          switch (MR_tag((MR_Word) check_hlds__cse_detection__RHS0_33)) {
#line 341 "cse_detection.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 341 "cse_detection.m"
            case (MR_Integer) 0:
#line 341 "cse_detection.m"
            case (MR_Integer) 1:
#line 344 "cse_detection.m"
              {
#line 345 "cse_detection.m"
                check_hlds__cse_detection__RHS_49 = check_hlds__cse_detection__RHS0_33;
#line 346 "cse_detection.m"
                *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
#line 344 "cse_detection.m"
                *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90;
#line 344 "cse_detection.m"
              }
#line 341 "cse_detection.m"
              break;
#line 341 "cse_detection.m"
            case (MR_Integer) 2:
#line 333 "cse_detection.m"
              {
#line 333 "cse_detection.m"
                MR_Word check_hlds__cse_detection__Purity_37 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 333 "cse_detection.m"
                MR_Word check_hlds__cse_detection__Groundness_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 333 "cse_detection.m"
                MR_Word check_hlds__cse_detection__PredOrFunc_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 333 "cse_detection.m"
                MR_Word check_hlds__cse_detection__NonLocalVars_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 2)));
#line 333 "cse_detection.m"
                MR_Word check_hlds__cse_detection__Vars_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 3)));
#line 333 "cse_detection.m"
                MR_Word check_hlds__cse_detection__Modes_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 4)));
#line 333 "cse_detection.m"
                MR_Word check_hlds__cse_detection__Det_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 5)));
#line 333 "cse_detection.m"
                MR_Word check_hlds__cse_detection__LambdaGoal0_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 6)));
#line 333 "cse_detection.m"
                MR_Word check_hlds__cse_detection__ModuleInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, (MR_Integer) 3)));
#line 333 "cse_detection.m"
                MR_Word check_hlds__cse_detection__InstMap1_47;
#line 333 "cse_detection.m"
                MR_Word check_hlds__cse_detection__LambdaGoal_48;
#line 334 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, (MR_Integer) 0)));
#line 334 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, (MR_Integer) 1)));
#line 334 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, (MR_Integer) 2)));

#line 335 "cse_detection.m"
                {
#line 335 "cse_detection.m"
                  hlds__instmap__pre_lambda_update_5_p_0(check_hlds__cse_detection__ModuleInfo_46, check_hlds__cse_detection__Vars_42, check_hlds__cse_detection__Modes_43, check_hlds__cse_detection__InstMap0_12, &check_hlds__cse_detection__InstMap1_47);
                }
#line 337 "cse_detection.m"
                {
#line 337 "cse_detection.m"
                  check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__LambdaGoal0_45, &check_hlds__cse_detection__LambdaGoal_48, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__InstMap1_47, check_hlds__cse_detection__Redo_13);
                }
#line 339 "cse_detection.m"
                {
#line 339 "cse_detection.m"
                  check_hlds__cse_detection__RHS_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 339 "cse_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 0) = ((MR_Box) ((check_hlds__cse_detection__Purity_37 | ((((check_hlds__cse_detection__Groundness_38 << (MR_Integer) 2)) | ((check_hlds__cse_detection__PredOrFunc_39 << (MR_Integer) 3)))))));
#line 339 "cse_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 1) = (MR_Integer) 0;
#line 339 "cse_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 2) = ((MR_Box) (check_hlds__cse_detection__NonLocalVars_41));
#line 339 "cse_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 3) = ((MR_Box) (check_hlds__cse_detection__Vars_42));
#line 339 "cse_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 4) = ((MR_Box) (check_hlds__cse_detection__Modes_43));
#line 339 "cse_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 5) = ((MR_Box) (check_hlds__cse_detection__Det_44));
#line 339 "cse_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 6) = ((MR_Box) (check_hlds__cse_detection__LambdaGoal_48));
#line 339 "cse_detection.m"
                }
#line 333 "cse_detection.m"
              }
#line 341 "cse_detection.m"
              break;
#line 341 "cse_detection.m"
          }
#line 348 "cse_detection.m"
          {
#line 348 "cse_detection.m"
            MR_Word base;
#line 348 "cse_detection.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 348 "cse_detection.m"
            *check_hlds__cse_detection__GoalExpr_9 = base;
#line 348 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__LHS_32));
#line 348 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__RHS_49));
#line 348 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__cse_detection__Mode_34));
#line 348 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__cse_detection__Unify_35));
#line 348 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__cse_detection__UnifyContext_36));
#line 348 "cse_detection.m"
          }
#line 330 "cse_detection.m"
        }
#line 326 "cse_detection.m"
        break;
#line 326 "cse_detection.m"
      case (MR_Integer) 2:
#line 326 "cse_detection.m"
        {
#line 327 "cse_detection.m"
          *check_hlds__cse_detection__GoalExpr_9 = check_hlds__cse_detection__GoalExpr0_8;
#line 328 "cse_detection.m"
          *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
#line 326 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90;
#line 326 "cse_detection.m"
        }
#line 326 "cse_detection.m"
        break;
#line 326 "cse_detection.m"
      case (MR_Integer) 3:
#line 326 "cse_detection.m"
#line 326 "cse_detection.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 0)))) {
#line 326 "cse_detection.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 326 "cse_detection.m"
          case (MR_Integer) 0:
#line 326 "cse_detection.m"
          case (MR_Integer) 1:
#line 326 "cse_detection.m"
            {
#line 327 "cse_detection.m"
              *check_hlds__cse_detection__GoalExpr_9 = check_hlds__cse_detection__GoalExpr0_8;
#line 328 "cse_detection.m"
              *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
#line 326 "cse_detection.m"
              *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90;
#line 326 "cse_detection.m"
            }
#line 326 "cse_detection.m"
            break;
#line 326 "cse_detection.m"
          case (MR_Integer) 2:
#line 373 "cse_detection.m"
            {
#line 373 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ConjType_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 373 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Goals0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
#line 373 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Goals_62;

#line 374 "cse_detection.m"
              {
#line 374 "cse_detection.m"
                check_hlds__cse_detection__detect_cse_in_conj_7_p_0(check_hlds__cse_detection__Goals0_61, &check_hlds__cse_detection__Goals_62, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__ConjType_60, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__Redo_13);
              }
#line 375 "cse_detection.m"
              {
#line 375 "cse_detection.m"
                MR_Word base;
#line 375 "cse_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 375 "cse_detection.m"
                *check_hlds__cse_detection__GoalExpr_9 = base;
#line 375 "cse_detection.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 375 "cse_detection.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__ConjType_60));
#line 375 "cse_detection.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__Goals_62));
#line 375 "cse_detection.m"
              }
#line 373 "cse_detection.m"
            }
#line 326 "cse_detection.m"
            break;
#line 326 "cse_detection.m"
          case (MR_Integer) 3:
#line 377 "cse_detection.m"
            {
#line 377 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Goals0_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));

#line 382 "cse_detection.m"
              if ((check_hlds__cse_detection__Goals0_112 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 379 "cse_detection.m"
                {
#line 380 "cse_detection.m"
                  *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
#line 381 "cse_detection.m"
                  *check_hlds__cse_detection__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__cse_detection_scalar_common_1[5]);
#line 379 "cse_detection.m"
                  *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90;
#line 379 "cse_detection.m"
                }
#line 382 "cse_detection.m"
              else
#line 383 "cse_detection.m"
                {
#line 383 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__NonLocals_65;
#line 383 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__NonLocalsList_66;

#line 384 "cse_detection.m"
                  {
#line 384 "cse_detection.m"
                    check_hlds__cse_detection__NonLocals_65 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__cse_detection__GoalInfo_11);
                  }
#line 385 "cse_detection.m"
                  {
#line 385 "cse_detection.m"
                    check_hlds__cse_detection__NonLocalsList_66 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__cse_detection__NonLocals_65);
                  }
#line 386 "cse_detection.m"
                  {
#line 386 "cse_detection.m"
                    check_hlds__cse_detection__detect_cse_in_disj_8_p_0(check_hlds__cse_detection__NonLocalsList_66, check_hlds__cse_detection__Goals0_112, check_hlds__cse_detection__GoalInfo_11, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__Redo_13, check_hlds__cse_detection__GoalExpr_9);
#line 386 "cse_detection.m"
                    return;
                  }
#line 383 "cse_detection.m"
                }
#line 377 "cse_detection.m"
            }
#line 326 "cse_detection.m"
            break;
#line 326 "cse_detection.m"
          case (MR_Integer) 4:
#line 390 "cse_detection.m"
            {
#line 390 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 390 "cse_detection.m"
              MR_Word check_hlds__cse_detection__CanFail_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
#line 390 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Cases0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 3)));
#line 390 "cse_detection.m"
              MR_Word check_hlds__cse_detection__NonLocals_113;
#line 390 "cse_detection.m"
              MR_Word check_hlds__cse_detection__NonLocalsList_114;

#line 391 "cse_detection.m"
              {
#line 391 "cse_detection.m"
                check_hlds__cse_detection__NonLocals_113 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__cse_detection__GoalInfo_11);
              }
#line 392 "cse_detection.m"
              {
#line 392 "cse_detection.m"
                check_hlds__cse_detection__NonLocalsList_114 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__cse_detection__NonLocals_113);
              }
#line 393 "cse_detection.m"
              {
#line 393 "cse_detection.m"
                check_hlds__cse_detection__detect_cse_in_cases_10_p_0(check_hlds__cse_detection__NonLocalsList_114, check_hlds__cse_detection__Var_67, check_hlds__cse_detection__CanFail_68, check_hlds__cse_detection__Cases0_69, check_hlds__cse_detection__GoalInfo_11, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__Redo_13, check_hlds__cse_detection__GoalExpr_9);
#line 393 "cse_detection.m"
                return;
              }
#line 390 "cse_detection.m"
            }
#line 326 "cse_detection.m"
            break;
#line 326 "cse_detection.m"
          case (MR_Integer) 5:
#line 354 "cse_detection.m"
            {
#line 354 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Reason0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 354 "cse_detection.m"
              MR_Word check_hlds__cse_detection__SubGoal0_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
#line 355 "cse_detection.m"
              MR_Word check_hlds__cse_detection__V_103_103;
#line 355 "cse_detection.m"
              MR_Word check_hlds__cse_detection__V_57_57;

#line 355 "cse_detection.m"
              check_hlds__cse_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__cse_detection__Reason0_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 355 "cse_detection.m"
              if (check_hlds__cse_detection__succeeded)
#line 355 "cse_detection.m"
                {
#line 355 "cse_detection.m"
                  check_hlds__cse_detection__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 1)));
#line 355 "cse_detection.m"
                  check_hlds__cse_detection__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 2)));
#line 355 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_103_103 == (MR_Integer) 1);
#line 355 "cse_detection.m"
                }
#line 359 "cse_detection.m"
              if (check_hlds__cse_detection__succeeded)
#line 357 "cse_detection.m"
                {
#line 357 "cse_detection.m"
                  *check_hlds__cse_detection__GoalExpr_9 = check_hlds__cse_detection__GoalExpr0_8;
#line 358 "cse_detection.m"
                  *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
#line 357 "cse_detection.m"
                  *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90;
#line 357 "cse_detection.m"
                }
#line 359 "cse_detection.m"
              else
#line 360 "cse_detection.m"
                {
#line 360 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__SubGoal_108;
#line 362 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_105_105;
#line 363 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_58_58;

#line 360 "cse_detection.m"
                  {
#line 360 "cse_detection.m"
                    check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__SubGoal0_110, &check_hlds__cse_detection__SubGoal_108, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__Redo_13);
                  }
#line 362 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = (*check_hlds__cse_detection__Redo_13 == (MR_Integer) 1);
#line 362 "cse_detection.m"
                  if (check_hlds__cse_detection__succeeded)
#line 362 "cse_detection.m"
                    {
#line 363 "cse_detection.m"
                      check_hlds__cse_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__cse_detection__Reason0_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 363 "cse_detection.m"
                      if (check_hlds__cse_detection__succeeded)
#line 363 "cse_detection.m"
                        {
#line 363 "cse_detection.m"
                          check_hlds__cse_detection__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 1)));
#line 363 "cse_detection.m"
                          check_hlds__cse_detection__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 2)));
#line 363 "cse_detection.m"
                          check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_105_105 == (MR_Integer) 2);
#line 363 "cse_detection.m"
                        }
#line 362 "cse_detection.m"
                    }
#line 368 "cse_detection.m"
                  if (check_hlds__cse_detection__succeeded)
#line 367 "cse_detection.m"
                    {
#line 367 "cse_detection.m"
                      MR_Word check_hlds__cse_detection__V_59_59;

#line 367 "cse_detection.m"
                      *check_hlds__cse_detection__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__SubGoal_108, (MR_Integer) 0)));
#line 367 "cse_detection.m"
                      check_hlds__cse_detection__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__SubGoal_108, (MR_Integer) 1)));
#line 367 "cse_detection.m"
                    }
#line 368 "cse_detection.m"
                  else
#line 369 "cse_detection.m"
                    {
#line 369 "cse_detection.m"
                      MR_Word base;
#line 369 "cse_detection.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 369 "cse_detection.m"
                      *check_hlds__cse_detection__GoalExpr_9 = base;
#line 369 "cse_detection.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 369 "cse_detection.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__Reason0_56));
#line 369 "cse_detection.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__SubGoal_108));
#line 369 "cse_detection.m"
                    }
#line 360 "cse_detection.m"
                }
#line 354 "cse_detection.m"
            }
#line 326 "cse_detection.m"
            break;
#line 326 "cse_detection.m"
          case (MR_Integer) 6:
#line 396 "cse_detection.m"
            {
#line 396 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Cond0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
#line 396 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Then0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 3)));
#line 396 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Else0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 4)));
#line 396 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Vars_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 396 "cse_detection.m"
              MR_Word check_hlds__cse_detection__NonLocals_116;
#line 396 "cse_detection.m"
              MR_Word check_hlds__cse_detection__NonLocalsList_117;

#line 397 "cse_detection.m"
              {
#line 397 "cse_detection.m"
                check_hlds__cse_detection__NonLocals_116 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__cse_detection__GoalInfo_11);
              }
#line 398 "cse_detection.m"
              {
#line 398 "cse_detection.m"
                check_hlds__cse_detection__NonLocalsList_117 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__cse_detection__NonLocals_116);
              }
#line 399 "cse_detection.m"
              {
#line 399 "cse_detection.m"
                check_hlds__cse_detection__detect_cse_in_ite_11_p_0(check_hlds__cse_detection__NonLocalsList_117, check_hlds__cse_detection__Vars_115, check_hlds__cse_detection__Cond0_70, check_hlds__cse_detection__Then0_71, check_hlds__cse_detection__Else0_72, check_hlds__cse_detection__GoalInfo_11, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__Redo_13, check_hlds__cse_detection__GoalExpr_9);
#line 399 "cse_detection.m"
                return;
              }
#line 396 "cse_detection.m"
            }
#line 326 "cse_detection.m"
            break;
#line 326 "cse_detection.m"
          case (MR_Integer) 7:
#line 402 "cse_detection.m"
            {
#line 402 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ShortHand0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 402 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ShortHand_85;

#line 412 "cse_detection.m"
#line 412 "cse_detection.m"
              switch (MR_tag((MR_Word) check_hlds__cse_detection__ShortHand0_73)) {
#line 412 "cse_detection.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 412 "cse_detection.m"
                case (MR_Integer) 0:
#line 413 "cse_detection.m"
                  {
#line 415 "cse_detection.m"
                    {
#line 415 "cse_detection.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_goal_expr\'/7", (MR_String) "bi_implication");
#line 415 "cse_detection.m"
                      return;
                    }
#line 413 "cse_detection.m"
                  }
#line 412 "cse_detection.m"
                  break;
#line 412 "cse_detection.m"
                case (MR_Integer) 1:
#line 405 "cse_detection.m"
                  {
#line 405 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__AtomicGoalType_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 0)));
#line 405 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__Outer_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 1)));
#line 405 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__Inner_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 2)));
#line 405 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__MaybeOutputVars_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 3)));
#line 405 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__MainGoal0_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 4)));
#line 405 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__OrElseGoals0_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 5)));
#line 405 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__OrElseInners_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 6)));
#line 405 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__MainGoal_81;
#line 405 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__Redo1_82;
#line 405 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__OrElseGoals_83;
#line 405 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__Redo2_84;
#line 405 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_96_96;

#line 406 "cse_detection.m"
                    {
#line 406 "cse_detection.m"
                      check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__MainGoal0_78, &check_hlds__cse_detection__MainGoal_81, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_96_96, check_hlds__cse_detection__InstMap0_12, &check_hlds__cse_detection__Redo1_82);
                    }
#line 407 "cse_detection.m"
                    {
#line 407 "cse_detection.m"
                      check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(check_hlds__cse_detection__OrElseGoals0_79, &check_hlds__cse_detection__OrElseGoals_83, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_96_96, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__InstMap0_12, &check_hlds__cse_detection__Redo2_84);
                    }
#line 409 "cse_detection.m"
                    {
#line 409 "cse_detection.m"
                      check_hlds__cse_detection__ShortHand_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 409 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 0) = ((MR_Box) (check_hlds__cse_detection__AtomicGoalType_74));
#line 409 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 1) = ((MR_Box) (check_hlds__cse_detection__Outer_75));
#line 409 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 2) = ((MR_Box) (check_hlds__cse_detection__Inner_76));
#line 409 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 3) = ((MR_Box) (check_hlds__cse_detection__MaybeOutputVars_77));
#line 409 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 4) = ((MR_Box) (check_hlds__cse_detection__MainGoal_81));
#line 409 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 5) = ((MR_Box) (check_hlds__cse_detection__OrElseGoals_83));
#line 409 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 6) = ((MR_Box) (check_hlds__cse_detection__OrElseInners_80));
#line 409 "cse_detection.m"
                    }
#line 411 "cse_detection.m"
                    {
#line 411 "cse_detection.m"
                      mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_82, check_hlds__cse_detection__Redo2_84, check_hlds__cse_detection__Redo_13);
                    }
#line 405 "cse_detection.m"
                  }
#line 412 "cse_detection.m"
                  break;
#line 412 "cse_detection.m"
                case (MR_Integer) 2:
#line 417 "cse_detection.m"
                  {
#line 417 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__MaybeIO_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 0)));
#line 417 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__ResultVar_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 1)));
#line 417 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__SubGoal0_118 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 2)));
#line 417 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__SubGoal_119;

#line 420 "cse_detection.m"
                    {
#line 420 "cse_detection.m"
                      check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__SubGoal0_118, &check_hlds__cse_detection__SubGoal_119, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__Redo_13);
                    }
#line 421 "cse_detection.m"
                    {
#line 421 "cse_detection.m"
                      check_hlds__cse_detection__ShortHand_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 421 "cse_detection.m"
                      MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand_85, 0) = ((MR_Box) (check_hlds__cse_detection__MaybeIO_88));
#line 421 "cse_detection.m"
                      MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand_85, 1) = ((MR_Box) (check_hlds__cse_detection__ResultVar_89));
#line 421 "cse_detection.m"
                      MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand_85, 2) = ((MR_Box) (check_hlds__cse_detection__SubGoal_119));
#line 421 "cse_detection.m"
                    }
#line 417 "cse_detection.m"
                  }
#line 412 "cse_detection.m"
                  break;
#line 412 "cse_detection.m"
              }
#line 423 "cse_detection.m"
              {
#line 423 "cse_detection.m"
                MR_Word base;
#line 423 "cse_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "cse_detection.m"
                *check_hlds__cse_detection__GoalExpr_9 = base;
#line 423 "cse_detection.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 423 "cse_detection.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__ShortHand_85));
#line 423 "cse_detection.m"
              }
#line 402 "cse_detection.m"
            }
#line 326 "cse_detection.m"
            break;
#line 326 "cse_detection.m"
        }
#line 326 "cse_detection.m"
        break;
#line 326 "cse_detection.m"
    }
#line 326 "cse_detection.m"
  }
#line 316 "cse_detection.m"
}

#line 302 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(
#line 302 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_8,
#line 302 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goal_9,
#line 302 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_18,
#line 302 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_19,
#line 302 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_11,
#line 302 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__InstMap_12,
#line 302 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_13)
#line 302 "cse_detection.m"
{
#line 306 "cse_detection.m"
  {
#line 306 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 306 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalExpr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_8, (MR_Integer) 0)));
#line 306 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_8, (MR_Integer) 1)));
#line 306 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalExpr_16;
#line 306 "cse_detection.m"
    MR_Word check_hlds__cse_detection__InstMapDelta_17;

#line 308 "cse_detection.m"
    {
#line 308 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(check_hlds__cse_detection__GoalExpr0_14, &check_hlds__cse_detection__GoalExpr_16, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_18, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_19, check_hlds__cse_detection__GoalInfo_15, check_hlds__cse_detection__InstMap0_11, check_hlds__cse_detection__Redo_13);
    }
#line 310 "cse_detection.m"
    {
#line 310 "cse_detection.m"
      MR_Word base;
#line 310 "cse_detection.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "cse_detection.m"
      *check_hlds__cse_detection__Goal_9 = base;
#line 310 "cse_detection.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__cse_detection__GoalExpr_16));
#line 310 "cse_detection.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_15));
#line 310 "cse_detection.m"
    }
#line 311 "cse_detection.m"
    {
#line 311 "cse_detection.m"
      check_hlds__cse_detection__InstMapDelta_17 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__cse_detection__GoalInfo_15);
    }
#line 312 "cse_detection.m"
    {
#line 312 "cse_detection.m"
      hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__cse_detection__InstMap0_11, check_hlds__cse_detection__InstMapDelta_17, check_hlds__cse_detection__InstMap_12);
#line 312 "cse_detection.m"
      return;
    }
#line 306 "cse_detection.m"
  }
#line 302 "cse_detection.m"
}

#line 291 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_6_p_0(
#line 291 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_7,
#line 291 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goal_8,
#line 291 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_13,
#line 291 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_14,
#line 291 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_10,
#line 291 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_11)
#line 291 "cse_detection.m"
{
#line 295 "cse_detection.m"
  {
#line 295 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 295 "cse_detection.m"
    MR_Word check_hlds__cse_detection___InstMap_12;

#line 295 "cse_detection.m"
    {
#line 295 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Goal0_7, check_hlds__cse_detection__Goal_8, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_13, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_14, check_hlds__cse_detection__InstMap0_10, &check_hlds__cse_detection___InstMap_12, check_hlds__cse_detection__Redo_11);
    }
#line 295 "cse_detection.m"
  }
#line 291 "cse_detection.m"
}

#line 247 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_proc_pass_4_p_0(
#line 247 "cse_detection.m"
  MR_Word check_hlds__cse_detection__ModuleInfo_5,
#line 247 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_6,
#line 247 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26,
#line 247 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_27)
#line 247 "cse_detection.m"
{
#line 250 "cse_detection.m"
  {
#line 250 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 250 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Goal0_8;
#line 250 "cse_detection.m"
    MR_Word check_hlds__cse_detection__InstMap0_9;
#line 250 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Varset0_10;
#line 250 "cse_detection.m"
    MR_Word check_hlds__cse_detection__VarTypes0_11;
#line 250 "cse_detection.m"
    MR_Word check_hlds__cse_detection__RttiVarMaps0_12;
#line 250 "cse_detection.m"
    MR_Word check_hlds__cse_detection__CseInfo0_13;
#line 250 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Goal1_14;
#line 250 "cse_detection.m"
    MR_Word check_hlds__cse_detection__CseInfo_15;
#line 295 "cse_detection.m"
    MR_Word check_hlds__cse_detection___InstMap_40;

#line 255 "cse_detection.m"
    {
#line 255 "cse_detection.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__Goal0_8);
    }
#line 256 "cse_detection.m"
    {
#line 256 "cse_detection.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, check_hlds__cse_detection__ModuleInfo_5, &check_hlds__cse_detection__InstMap0_9);
    }
#line 257 "cse_detection.m"
    {
#line 257 "cse_detection.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__Varset0_10);
    }
#line 258 "cse_detection.m"
    {
#line 258 "cse_detection.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__VarTypes0_11);
    }
#line 259 "cse_detection.m"
    {
#line 259 "cse_detection.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__RttiVarMaps0_12);
    }
#line 260 "cse_detection.m"
    {
#line 260 "cse_detection.m"
      check_hlds__cse_detection__CseInfo0_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 260 "cse_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo0_13, 0) = ((MR_Box) (check_hlds__cse_detection__Varset0_10));
#line 260 "cse_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo0_13, 1) = ((MR_Box) (check_hlds__cse_detection__VarTypes0_11));
#line 260 "cse_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo0_13, 2) = ((MR_Box) (check_hlds__cse_detection__RttiVarMaps0_12));
#line 260 "cse_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo0_13, 3) = ((MR_Box) (check_hlds__cse_detection__ModuleInfo_5));
#line 260 "cse_detection.m"
    }
#line 295 "cse_detection.m"
    {
#line 295 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Goal0_8, &check_hlds__cse_detection__Goal1_14, check_hlds__cse_detection__CseInfo0_13, &check_hlds__cse_detection__CseInfo_15, check_hlds__cse_detection__InstMap0_9, &check_hlds__cse_detection___InstMap_40, check_hlds__cse_detection__Redo_6);
    }
#line 265 "cse_detection.m"
#line 265 "cse_detection.m"
    switch (*check_hlds__cse_detection__Redo_6) {
#line 265 "cse_detection.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 265 "cse_detection.m"
      case (MR_Integer) 0:
#line 264 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_27 = check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26;
#line 265 "cse_detection.m"
        break;
#line 265 "cse_detection.m"
      case (MR_Integer) 1:
#line 266 "cse_detection.m"
        {
#line 266 "cse_detection.m"
          MR_Word check_hlds__cse_detection__VarSet1_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo_15, (MR_Integer) 0)));
#line 266 "cse_detection.m"
          MR_Word check_hlds__cse_detection__VarTypes1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo_15, (MR_Integer) 1)));
#line 266 "cse_detection.m"
          MR_Word check_hlds__cse_detection__RttiVarMaps1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo_15, (MR_Integer) 2)));
#line 266 "cse_detection.m"
          MR_Word check_hlds__cse_detection__HeadVars_20;
#line 266 "cse_detection.m"
          MR_Word check_hlds__cse_detection__Goal_22;
#line 266 "cse_detection.m"
          MR_Word check_hlds__cse_detection__VarSet_23;
#line 266 "cse_detection.m"
          MR_Word check_hlds__cse_detection__VarTypes_24;
#line 266 "cse_detection.m"
          MR_Word check_hlds__cse_detection__RttiVarMaps_25;
#line 266 "cse_detection.m"
          MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_29_29;
#line 266 "cse_detection.m"
          MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_30_30;
#line 266 "cse_detection.m"
          MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_31_31;
#line 269 "cse_detection.m"
          MR_Word check_hlds__cse_detection__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo_15, (MR_Integer) 3)));
#line 272 "cse_detection.m"
          MR_Word check_hlds__cse_detection___Warnings_21;

#line 270 "cse_detection.m"
          {
#line 270 "cse_detection.m"
            hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__HeadVars_20);
          }
#line 272 "cse_detection.m"
          {
#line 272 "cse_detection.m"
            hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, check_hlds__cse_detection__HeadVars_20, &check_hlds__cse_detection___Warnings_21, check_hlds__cse_detection__Goal1_14, &check_hlds__cse_detection__Goal_22, check_hlds__cse_detection__VarSet1_16, &check_hlds__cse_detection__VarSet_23, check_hlds__cse_detection__VarTypes1_17, &check_hlds__cse_detection__VarTypes_24, check_hlds__cse_detection__RttiVarMaps1_18, &check_hlds__cse_detection__RttiVarMaps_25);
          }
#line 278 "cse_detection.m"
          {
#line 278 "cse_detection.m"
            hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__cse_detection__Goal_22, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_29_29);
          }
#line 279 "cse_detection.m"
          {
#line 279 "cse_detection.m"
            hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__cse_detection__VarSet_23, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_29_29, &check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_30_30);
          }
#line 280 "cse_detection.m"
          {
#line 280 "cse_detection.m"
            hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__cse_detection__VarTypes_24, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_30_30, &check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_31_31);
          }
#line 281 "cse_detection.m"
          {
#line 281 "cse_detection.m"
            hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(check_hlds__cse_detection__RttiVarMaps_25, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_31_31, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_27);
#line 281 "cse_detection.m"
            return;
          }
#line 266 "cse_detection.m"
        }
#line 265 "cse_detection.m"
        break;
#line 265 "cse_detection.m"
    }
#line 250 "cse_detection.m"
  }
#line 247 "cse_detection.m"
}

#line 130 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_procs_4_p_0(
#line 130 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 130 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 130 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3,
#line 130 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_4)
#line 130 "cse_detection.m"
{
#line 133 "cse_detection.m"
  while (MR_TRUE)
#line 133 "cse_detection.m"
    {
#line 133 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 133 "cse_detection.m"
      {
#line 133 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;

#line 133 "cse_detection.m"
        if ((check_hlds__cse_detection__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 133 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_4 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3;
#line 133 "cse_detection.m"
        else
#line 134 "cse_detection.m"
          {
#line 134 "cse_detection.m"
            MR_Integer check_hlds__cse_detection__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 134 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ProcIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 134 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_15_15;

#line 135 "cse_detection.m"
            {
#line 135 "cse_detection.m"
              check_hlds__cse_detection__detect_cse_in_proc_4_p_0(check_hlds__cse_detection__HeadVar__1_1, check_hlds__cse_detection__ProcId_10, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_15_15);
            }
#line 136 "cse_detection.m"
            /* direct tailcall eliminated */
#line 136 "cse_detection.m"
            {
#line 136 "cse_detection.m"
              MR_Word check_hlds__cse_detection__HeadVar__2__tmp_copy_2 = check_hlds__cse_detection__ProcIds_11;
#line 136 "cse_detection.m"
              MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_15_15;

#line 136 "cse_detection.m"
              check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 136 "cse_detection.m"
              check_hlds__cse_detection__HeadVar__2_2 = check_hlds__cse_detection__HeadVar__2__tmp_copy_2;
#line 136 "cse_detection.m"
            }
#line 136 "cse_detection.m"
            continue;
#line 134 "cse_detection.m"
          }
#line 133 "cse_detection.m"
      }
#line 133 "cse_detection.m"
      break;
#line 133 "cse_detection.m"
    }
#line 130 "cse_detection.m"
}

#line 113 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_preds_3_p_0(
#line 113 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 113 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2,
#line 113 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_3)
#line 113 "cse_detection.m"
{
#line 116 "cse_detection.m"
  while (MR_TRUE)
#line 116 "cse_detection.m"
    {
#line 116 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 116 "cse_detection.m"
      {
#line 116 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;

#line 116 "cse_detection.m"
        if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 116 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_3 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2;
#line 116 "cse_detection.m"
        else
#line 117 "cse_detection.m"
          {
#line 117 "cse_detection.m"
            MR_Word check_hlds__cse_detection__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 117 "cse_detection.m"
            MR_Word check_hlds__cse_detection__PredIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 117 "cse_detection.m"
            MR_Word check_hlds__cse_detection__PredTable_10;
#line 117 "cse_detection.m"
            MR_Word check_hlds__cse_detection__PredInfo_11;
#line 117 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_14_14;
#line 117 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ProcIds_23;
#line 119 "cse_detection.m"
            MR_Box check_hlds__cse_detection__conv0_PredInfo_11;

#line 118 "cse_detection.m"
            {
#line 118 "cse_detection.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2, &check_hlds__cse_detection__PredTable_10);
            }
#line 119 "cse_detection.m"
            {
#line 119 "cse_detection.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__cse_detection__PredTable_10, ((MR_Box) (check_hlds__cse_detection__PredId_7)), &check_hlds__cse_detection__conv0_PredInfo_11);
            }
#line 119 "cse_detection.m"
            check_hlds__cse_detection__PredInfo_11 = ((MR_Word) check_hlds__cse_detection__conv0_PredInfo_11);
#line 127 "cse_detection.m"
            {
#line 127 "cse_detection.m"
              check_hlds__cse_detection__ProcIds_23 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(check_hlds__cse_detection__PredInfo_11);
            }
#line 128 "cse_detection.m"
            {
#line 128 "cse_detection.m"
              check_hlds__cse_detection__detect_cse_in_procs_4_p_0(check_hlds__cse_detection__PredId_7, check_hlds__cse_detection__ProcIds_23, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_14_14);
            }
#line 121 "cse_detection.m"
            /* direct tailcall eliminated */
#line 121 "cse_detection.m"
            {
#line 121 "cse_detection.m"
              MR_Word check_hlds__cse_detection__HeadVar__1__tmp_copy_1 = check_hlds__cse_detection__PredIds_8;
#line 121 "cse_detection.m"
              MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_14_14;

#line 121 "cse_detection.m"
              check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
#line 121 "cse_detection.m"
              check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__HeadVar__1__tmp_copy_1;
#line 121 "cse_detection.m"
            }
#line 121 "cse_detection.m"
            continue;
#line 117 "cse_detection.m"
          }
#line 116 "cse_detection.m"
      }
#line 116 "cse_detection.m"
      break;
#line 116 "cse_detection.m"
    }
#line 113 "cse_detection.m"
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
#line 138 "cse_detection.m"
  while (MR_TRUE)
#line 138 "cse_detection.m"
    {
#line 138 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 138 "cse_detection.m"
      {
#line 138 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;
#line 138 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeCtorInfo_76_76;
#line 138 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeCtorInfo_77_77;
#line 138 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeCtorInfo_78_78;
#line 138 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeCtorInfo_79_79;
#line 138 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Globals_8;
#line 138 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VeryVerbose_9;
#line 138 "cse_detection.m"
        MR_Word check_hlds__cse_detection__PredTable0_11;
#line 138 "cse_detection.m"
        MR_Word check_hlds__cse_detection__PredInfo0_12;
#line 138 "cse_detection.m"
        MR_Word check_hlds__cse_detection__ProcTable0_13;
#line 138 "cse_detection.m"
        MR_Word check_hlds__cse_detection__ProcInfo0_14;
#line 138 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo_15;
#line 138 "cse_detection.m"
        MR_Word check_hlds__cse_detection__ProcInfo1_16;
#line 138 "cse_detection.m"
        MR_Word check_hlds__cse_detection__ProcTable1_17;
#line 138 "cse_detection.m"
        MR_Word check_hlds__cse_detection__PredInfo1_18;
#line 138 "cse_detection.m"
        MR_Word check_hlds__cse_detection__PredTable1_19;
#line 138 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Statistics_20;
#line 138 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42;
#line 155 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv0_PredInfo0_12;
#line 157 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv1_ProcInfo0_14;

#line 139 "cse_detection.m"
        {
#line 139 "cse_detection.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__cse_detection__Globals_8);
        }
#line 140 "cse_detection.m"
        {
#line 140 "cse_detection.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__cse_detection__Globals_8, (MR_Integer) 46, &check_hlds__cse_detection__VeryVerbose_9);
        }
#line 148 "cse_detection.m"
#line 148 "cse_detection.m"
        switch (check_hlds__cse_detection__VeryVerbose_9) {
#line 148 "cse_detection.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 148 "cse_detection.m"
          case (MR_Integer) 0:
#line 149 "cse_detection.m"
            {
#line 149 "cse_detection.m"
            }
#line 148 "cse_detection.m"
            break;
#line 148 "cse_detection.m"
          case (MR_Integer) 1:
#line 143 "cse_detection.m"
            {
#line 144 "cse_detection.m"
              {
#line 144 "cse_detection.m"
                mercury__io__write_string_3_p_0((MR_String) "% Detecting common deconstructions for ");
              }
#line 145 "cse_detection.m"
              {
#line 145 "cse_detection.m"
                hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, check_hlds__cse_detection__PredId_5);
              }
#line 146 "cse_detection.m"
              {
#line 146 "cse_detection.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
#line 143 "cse_detection.m"
            }
#line 148 "cse_detection.m"
            break;
#line 148 "cse_detection.m"
        }
#line 154 "cse_detection.m"
        {
#line 154 "cse_detection.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__cse_detection__PredTable0_11);
        }
#line 6670 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeCtorInfo_76_76 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 6672 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeCtorInfo_77_77 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 155 "cse_detection.m"
        {
#line 155 "cse_detection.m"
          mercury__map__lookup_3_p_0(check_hlds__cse_detection__TypeCtorInfo_76_76, check_hlds__cse_detection__TypeCtorInfo_77_77, check_hlds__cse_detection__PredTable0_11, ((MR_Box) (check_hlds__cse_detection__PredId_5)), &check_hlds__cse_detection__conv0_PredInfo0_12);
        }
#line 155 "cse_detection.m"
        check_hlds__cse_detection__PredInfo0_12 = ((MR_Word) check_hlds__cse_detection__conv0_PredInfo0_12);
#line 156 "cse_detection.m"
        {
#line 156 "cse_detection.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__cse_detection__PredInfo0_12, &check_hlds__cse_detection__ProcTable0_13);
        }
#line 6686 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeCtorInfo_78_78 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 6688 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeCtorInfo_79_79 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 157 "cse_detection.m"
        {
#line 157 "cse_detection.m"
          mercury__map__lookup_3_p_0(check_hlds__cse_detection__TypeCtorInfo_78_78, check_hlds__cse_detection__TypeCtorInfo_79_79, check_hlds__cse_detection__ProcTable0_13, ((MR_Box) (check_hlds__cse_detection__ProcId_6)), &check_hlds__cse_detection__conv1_ProcInfo0_14);
        }
#line 157 "cse_detection.m"
        check_hlds__cse_detection__ProcInfo0_14 = ((MR_Word) check_hlds__cse_detection__conv1_ProcInfo0_14);
#line 159 "cse_detection.m"
        {
#line 159 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_proc_pass_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__cse_detection__Redo_15, check_hlds__cse_detection__ProcInfo0_14, &check_hlds__cse_detection__ProcInfo1_16);
        }
#line 161 "cse_detection.m"
        {
#line 161 "cse_detection.m"
          mercury__map__det_update_4_p_0(check_hlds__cse_detection__TypeCtorInfo_78_78, check_hlds__cse_detection__TypeCtorInfo_79_79, ((MR_Box) (check_hlds__cse_detection__ProcId_6)), ((MR_Box) (check_hlds__cse_detection__ProcInfo1_16)), check_hlds__cse_detection__ProcTable0_13, &check_hlds__cse_detection__ProcTable1_17);
        }
#line 162 "cse_detection.m"
        {
#line 162 "cse_detection.m"
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__cse_detection__ProcTable1_17, check_hlds__cse_detection__PredInfo0_12, &check_hlds__cse_detection__PredInfo1_18);
        }
#line 163 "cse_detection.m"
        {
#line 163 "cse_detection.m"
          mercury__map__det_update_4_p_0(check_hlds__cse_detection__TypeCtorInfo_76_76, check_hlds__cse_detection__TypeCtorInfo_77_77, ((MR_Box) (check_hlds__cse_detection__PredId_5)), ((MR_Box) (check_hlds__cse_detection__PredInfo1_18)), check_hlds__cse_detection__PredTable0_11, &check_hlds__cse_detection__PredTable1_19);
        }
#line 164 "cse_detection.m"
        {
#line 164 "cse_detection.m"
          hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__cse_detection__PredTable1_19, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42);
        }
#line 166 "cse_detection.m"
        {
#line 166 "cse_detection.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__cse_detection__Globals_8, (MR_Integer) 56, &check_hlds__cse_detection__Statistics_20);
        }
#line 168 "cse_detection.m"
        {
#line 168 "cse_detection.m"
          libs__file_util__maybe_report_stats_3_p_0(check_hlds__cse_detection__Statistics_20);
        }
#line 172 "cse_detection.m"
#line 172 "cse_detection.m"
        switch (check_hlds__cse_detection__Redo_15) {
#line 172 "cse_detection.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 172 "cse_detection.m"
          case (MR_Integer) 0:
#line 171 "cse_detection.m"
            *check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_34 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42;
#line 172 "cse_detection.m"
            break;
#line 172 "cse_detection.m"
          case (MR_Integer) 1:
#line 173 "cse_detection.m"
            {
#line 173 "cse_detection.m"
              MR_Word check_hlds__cse_detection__PredTable2_24;
#line 173 "cse_detection.m"
              MR_Word check_hlds__cse_detection__PredInfo2_25;
#line 173 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ProcTable2_26;
#line 173 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ProcInfo2_27;
#line 173 "cse_detection.m"
              MR_Word check_hlds__cse_detection__SwitchDetectInfo_28;
#line 173 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ProcInfo_29;
#line 173 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ProcTable3_30;
#line 173 "cse_detection.m"
              MR_Word check_hlds__cse_detection__PredInfo3_31;
#line 173 "cse_detection.m"
              MR_Word check_hlds__cse_detection__PredTable3_32;
#line 173 "cse_detection.m"
              MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52;
#line 173 "cse_detection.m"
              MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_64_64;
#line 210 "cse_detection.m"
              MR_Box check_hlds__cse_detection__conv2_PredInfo2_25;
#line 212 "cse_detection.m"
              MR_Box check_hlds__cse_detection__conv3_ProcInfo2_27;

#line 6774 "check_hlds.cse_detection.c"
#line 6775 "check_hlds.cse_detection.c"
              switch (check_hlds__cse_detection__VeryVerbose_9) {
#line 6777 "check_hlds.cse_detection.c"
                default: /*NOTREACHED*/ MR_assert(0);
#line 6779 "check_hlds.cse_detection.c"
                case (MR_Integer) 0:
#line 6781 "check_hlds.cse_detection.c"
                  {
#line 6783 "check_hlds.cse_detection.c"
                    MR_Word check_hlds__cse_detection__ModeSpecs_21;
#line 6785 "check_hlds.cse_detection.c"
                    MR_Word check_hlds__cse_detection__ContainsErrors_23;
#line 184 "cse_detection.m"
                    MR_Word check_hlds__cse_detection___Changed_22;

#line 184 "cse_detection.m"
                    {
#line 184 "cse_detection.m"
                      check_hlds__modes__modecheck_proc_6_p_0(check_hlds__cse_detection__ProcId_6, check_hlds__cse_detection__PredId_5, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__cse_detection__ModeSpecs_21, &check_hlds__cse_detection___Changed_22);
                    }
#line 186 "cse_detection.m"
                    {
#line 186 "cse_detection.m"
                      libs__file_util__maybe_report_stats_3_p_0(check_hlds__cse_detection__Statistics_20);
                    }
#line 188 "cse_detection.m"
                    {
#line 188 "cse_detection.m"
                      check_hlds__cse_detection__ContainsErrors_23 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__cse_detection__Globals_8, check_hlds__cse_detection__ModeSpecs_21);
                    }
#line 192 "cse_detection.m"
#line 192 "cse_detection.m"
                    switch (check_hlds__cse_detection__ContainsErrors_23) {
#line 192 "cse_detection.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 192 "cse_detection.m"
                      case (MR_Integer) 0:
#line 193 "cse_detection.m"
                        {
#line 193 "cse_detection.m"
                        }
#line 192 "cse_detection.m"
                        break;
#line 192 "cse_detection.m"
                      case (MR_Integer) 1:
#line 190 "cse_detection.m"
                        {
#line 191 "cse_detection.m"
                          {
#line 191 "cse_detection.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_proc\'/4", (MR_String) "mode check fails when repeated");
#line 191 "cse_detection.m"
                            return;
                          }
#line 190 "cse_detection.m"
                        }
#line 192 "cse_detection.m"
                        break;
#line 192 "cse_detection.m"
                    }
#line 6835 "check_hlds.cse_detection.c"
                  }
#line 6837 "check_hlds.cse_detection.c"
                  break;
#line 6839 "check_hlds.cse_detection.c"
                case (MR_Integer) 1:
#line 6841 "check_hlds.cse_detection.c"
                  {
#line 6843 "check_hlds.cse_detection.c"
                    MR_Word check_hlds__cse_detection__ModeSpecs_91;
#line 6845 "check_hlds.cse_detection.c"
                    MR_Word check_hlds__cse_detection__ContainsErrors_93;
#line 184 "cse_detection.m"
                    MR_Word check_hlds__cse_detection___Changed_80;

#line 177 "cse_detection.m"
                    {
#line 177 "cse_detection.m"
                      mercury__io__write_string_3_p_0((MR_String) "% Repeating mode check for ");
                    }
#line 178 "cse_detection.m"
                    {
#line 178 "cse_detection.m"
                      hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42, check_hlds__cse_detection__PredId_5);
                    }
#line 179 "cse_detection.m"
                    {
#line 179 "cse_detection.m"
                      mercury__io__write_string_3_p_0((MR_String) "\n");
                    }
#line 184 "cse_detection.m"
                    {
#line 184 "cse_detection.m"
                      check_hlds__modes__modecheck_proc_6_p_0(check_hlds__cse_detection__ProcId_6, check_hlds__cse_detection__PredId_5, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__cse_detection__ModeSpecs_91, &check_hlds__cse_detection___Changed_80);
                    }
#line 186 "cse_detection.m"
                    {
#line 186 "cse_detection.m"
                      libs__file_util__maybe_report_stats_3_p_0(check_hlds__cse_detection__Statistics_20);
                    }
#line 188 "cse_detection.m"
                    {
#line 188 "cse_detection.m"
                      check_hlds__cse_detection__ContainsErrors_93 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__cse_detection__Globals_8, check_hlds__cse_detection__ModeSpecs_91);
                    }
#line 192 "cse_detection.m"
#line 192 "cse_detection.m"
                    switch (check_hlds__cse_detection__ContainsErrors_93) {
#line 192 "cse_detection.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 192 "cse_detection.m"
                      case (MR_Integer) 0:
#line 193 "cse_detection.m"
                        {
#line 193 "cse_detection.m"
                        }
#line 192 "cse_detection.m"
                        break;
#line 192 "cse_detection.m"
                      case (MR_Integer) 1:
#line 190 "cse_detection.m"
                        {
#line 191 "cse_detection.m"
                          {
#line 191 "cse_detection.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_proc\'/4", (MR_String) "mode check fails when repeated");
#line 191 "cse_detection.m"
                            return;
                          }
#line 190 "cse_detection.m"
                        }
#line 192 "cse_detection.m"
                        break;
#line 192 "cse_detection.m"
                    }
#line 201 "cse_detection.m"
                    {
#line 201 "cse_detection.m"
                      mercury__io__write_string_3_p_0((MR_String) "% Repeating switch detection for ");
                    }
#line 202 "cse_detection.m"
                    {
#line 202 "cse_detection.m"
                      hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, check_hlds__cse_detection__PredId_5);
                    }
#line 203 "cse_detection.m"
                    {
#line 203 "cse_detection.m"
                      mercury__io__write_string_3_p_0((MR_String) "\n");
                    }
#line 6925 "check_hlds.cse_detection.c"
                  }
#line 6927 "check_hlds.cse_detection.c"
                  break;
#line 6929 "check_hlds.cse_detection.c"
              }
#line 209 "cse_detection.m"
              {
#line 209 "cse_detection.m"
                hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__cse_detection__PredTable2_24);
              }
#line 210 "cse_detection.m"
              {
#line 210 "cse_detection.m"
                mercury__map__lookup_3_p_0(check_hlds__cse_detection__TypeCtorInfo_76_76, check_hlds__cse_detection__TypeCtorInfo_77_77, check_hlds__cse_detection__PredTable2_24, ((MR_Box) (check_hlds__cse_detection__PredId_5)), &check_hlds__cse_detection__conv2_PredInfo2_25);
              }
#line 210 "cse_detection.m"
              check_hlds__cse_detection__PredInfo2_25 = ((MR_Word) check_hlds__cse_detection__conv2_PredInfo2_25);
#line 211 "cse_detection.m"
              {
#line 211 "cse_detection.m"
                hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__cse_detection__PredInfo2_25, &check_hlds__cse_detection__ProcTable2_26);
              }
#line 212 "cse_detection.m"
              {
#line 212 "cse_detection.m"
                mercury__map__lookup_3_p_0(check_hlds__cse_detection__TypeCtorInfo_78_78, check_hlds__cse_detection__TypeCtorInfo_79_79, check_hlds__cse_detection__ProcTable2_26, ((MR_Box) (check_hlds__cse_detection__ProcId_6)), &check_hlds__cse_detection__conv3_ProcInfo2_27);
              }
#line 212 "cse_detection.m"
              check_hlds__cse_detection__ProcInfo2_27 = ((MR_Word) check_hlds__cse_detection__conv3_ProcInfo2_27);
#line 214 "cse_detection.m"
              {
#line 214 "cse_detection.m"
                check_hlds__cse_detection__SwitchDetectInfo_28 = check_hlds__switch_detection__init_switch_detect_info_1_f_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52);
              }
#line 215 "cse_detection.m"
              {
#line 215 "cse_detection.m"
                check_hlds__switch_detection__detect_switches_in_proc_3_p_0(check_hlds__cse_detection__SwitchDetectInfo_28, check_hlds__cse_detection__ProcInfo2_27, &check_hlds__cse_detection__ProcInfo_29);
              }
#line 217 "cse_detection.m"
              {
#line 217 "cse_detection.m"
                mercury__map__det_update_4_p_0(check_hlds__cse_detection__TypeCtorInfo_78_78, check_hlds__cse_detection__TypeCtorInfo_79_79, ((MR_Box) (check_hlds__cse_detection__ProcId_6)), ((MR_Box) (check_hlds__cse_detection__ProcInfo_29)), check_hlds__cse_detection__ProcTable2_26, &check_hlds__cse_detection__ProcTable3_30);
              }
#line 218 "cse_detection.m"
              {
#line 218 "cse_detection.m"
                hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__cse_detection__ProcTable3_30, check_hlds__cse_detection__PredInfo2_25, &check_hlds__cse_detection__PredInfo3_31);
              }
#line 219 "cse_detection.m"
              {
#line 219 "cse_detection.m"
                mercury__map__det_update_4_p_0(check_hlds__cse_detection__TypeCtorInfo_76_76, check_hlds__cse_detection__TypeCtorInfo_77_77, ((MR_Box) (check_hlds__cse_detection__PredId_5)), ((MR_Box) (check_hlds__cse_detection__PredInfo3_31)), check_hlds__cse_detection__PredTable2_24, &check_hlds__cse_detection__PredTable3_32);
              }
#line 220 "cse_detection.m"
              {
#line 220 "cse_detection.m"
                hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__cse_detection__PredTable3_32, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_64_64);
              }
#line 223 "cse_detection.m"
              {
#line 223 "cse_detection.m"
                libs__file_util__maybe_report_stats_3_p_0(check_hlds__cse_detection__Statistics_20);
              }
#line 233 "cse_detection.m"
#line 233 "cse_detection.m"
              switch (check_hlds__cse_detection__VeryVerbose_9) {
#line 233 "cse_detection.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 233 "cse_detection.m"
                case (MR_Integer) 0:
#line 234 "cse_detection.m"
                  {
#line 234 "cse_detection.m"
                  }
#line 233 "cse_detection.m"
                  break;
#line 233 "cse_detection.m"
                case (MR_Integer) 1:
#line 227 "cse_detection.m"
                  {
#line 228 "cse_detection.m"
                    {
#line 228 "cse_detection.m"
                      mercury__io__write_string_3_p_0((MR_String) "% Repeating common deconstruction detection for ");
                    }
#line 230 "cse_detection.m"
                    {
#line 230 "cse_detection.m"
                      hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_64_64, check_hlds__cse_detection__PredId_5);
                    }
#line 231 "cse_detection.m"
                    {
#line 231 "cse_detection.m"
                      mercury__io__write_string_3_p_0((MR_String) "\n");
                    }
#line 227 "cse_detection.m"
                  }
#line 233 "cse_detection.m"
                  break;
#line 233 "cse_detection.m"
              }
#line 236 "cse_detection.m"
              /* direct tailcall eliminated */
#line 236 "cse_detection.m"
              {
#line 236 "cse_detection.m"
                MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_33 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_64_64;

#line 236 "cse_detection.m"
                check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_33;
#line 236 "cse_detection.m"
              }
#line 236 "cse_detection.m"
              continue;
#line 173 "cse_detection.m"
            }
#line 172 "cse_detection.m"
            break;
#line 172 "cse_detection.m"
        }
#line 138 "cse_detection.m"
      }
#line 138 "cse_detection.m"
      break;
#line 138 "cse_detection.m"
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
#line 107 "cse_detection.m"
  {
#line 107 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 107 "cse_detection.m"
    MR_Word check_hlds__cse_detection__PredIds_4;

#line 110 "cse_detection.m"
    {
#line 110 "cse_detection.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_5, &check_hlds__cse_detection__PredIds_4);
    }
#line 111 "cse_detection.m"
    {
#line 111 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_preds_3_p_0(check_hlds__cse_detection__PredIds_4, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_5, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_6);
#line 111 "cse_detection.m"
      return;
    }
#line 107 "cse_detection.m"
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
