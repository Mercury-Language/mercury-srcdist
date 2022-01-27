/*
** Automatically generated from `cse_detection.m'
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


/* :- module check_hlds.cse_detection. */
/* :- implementation. */

/*
INIT mercury__check_hlds__cse_detection__init
ENDINIT
*/

#include "check_hlds.cse_detection.mih"


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
#include "check_hlds.inst_test.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.file_util.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
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
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 152 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 155 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 158 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 161 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 164 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 167 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 170 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 173 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 176 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 179 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 182 "check_hlds.cse_detection.c"
static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_info_0_0[4];

#line 185 "check_hlds.cse_detection.c"
static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_info_0_0[4];

#line 188 "check_hlds.cse_detection.c"
static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0;

#line 191 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_info_0_0[1];

#line 194 "check_hlds.cse_detection.c"
static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_info_0[1];

#line 197 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_info_0[1];

#line 200 "check_hlds.cse_detection.c"
static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_info_0[1];

#line 203 "check_hlds.cse_detection.c"
static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_0;

#line 206 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 209 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 212 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 215 "check_hlds.cse_detection.c"
static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_state_0_1[3];

#line 218 "check_hlds.cse_detection.c"
static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_state_0_1[3];

#line 221 "check_hlds.cse_detection.c"
static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1;

#line 224 "check_hlds.cse_detection.c"
static const MR_DuFunctorDesc check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_2;

#line 227 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_0[2];

#line 230 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_1[1];

#line 233 "check_hlds.cse_detection.c"
static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_state_0[2];

#line 236 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_state_0[3];

#line 239 "check_hlds.cse_detection.c"
static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_state_0[3];

#line 242 "check_hlds.cse_detection.c"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0_10001(
#line 245 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 247 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2);

#line 250 "check_hlds.cse_detection.c"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0_10001(
#line 253 "check_hlds.cse_detection.c"
  MR_Box * check_hlds__cse_detection__wrapper_arg_1,
#line 255 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 257 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_3);

#line 260 "check_hlds.cse_detection.c"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0_10001(
#line 263 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 265 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2);

#line 268 "check_hlds.cse_detection.c"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0_10001(
#line 271 "check_hlds.cse_detection.c"
  MR_Box * check_hlds__cse_detection__wrapper_arg_1,
#line 273 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 275 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_3);

#line 682 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0(
#line 682 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__1_1,
#line 682 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 682 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3);

#line 682 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0(
#line 682 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 682 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2);

#line 259 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0(
#line 259 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__1_1,
#line 259 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 259 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3);

#line 259 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0(
#line 259 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 259 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2);

#line 1015 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_merged_tvars_6_p_0(
#line 1015 "cse_detection.m"
  MR_Word check_hlds__cse_detection__RttiVarMaps_7,
#line 1015 "cse_detection.m"
  MR_Word check_hlds__cse_detection__LaterOldNewMap_8,
#line 1015 "cse_detection.m"
  MR_Word check_hlds__cse_detection__NewTvarMap_9,
#line 1015 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Tvar_10,
#line 1015 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17,
#line 1015 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_Renaming_18);

#line 1001 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_type_info_locn_tvar_map_5_p_0(
#line 1001 "cse_detection.m"
  MR_Word check_hlds__cse_detection__RttiVarMaps_6,
#line 1001 "cse_detection.m"
  MR_Word check_hlds__cse_detection__FirstOldNewMap_7,
#line 1001 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Tvar_8,
#line 1001 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_0_14,
#line 1001 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_15);

#line 987 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_2(
#line 987 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 987 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 987 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 987 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3);

#line 980 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_1(
#line 980 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 980 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 980 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 980 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3);

#line 944 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(
#line 944 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Unify_6,
#line 944 "cse_detection.m"
  MR_Word check_hlds__cse_detection__FirstOldNew_7,
#line 944 "cse_detection.m"
  MR_Word check_hlds__cse_detection__LaterOldNew_8,
#line 944 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25,
#line 944 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26);

#line 859 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__pair_subterms_4_p_0(
#line 859 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 859 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 859 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3,
#line 859 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__4_4);

#line 835 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__find_similar_deconstruct_5_p_0(
#line 835 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HoistedUnifyGoal_6,
#line 835 "cse_detection.m"
  MR_Word check_hlds__cse_detection__OldUnifyGoal_7,
#line 835 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Context_8,
#line 835 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__OldHoistedVars_9,
#line 835 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Replacements_10);

#line 756 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__create_new_arg_vars_7_p_0(
#line 756 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 756 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Context_2,
#line 756 "cse_detection.m"
  MR_Word check_hlds__cse_detection__UnifyContext_3,
#line 756 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_4,
#line 756 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_5,
#line 756 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6,
#line 756 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7);

#line 691 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(
#line 691 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Var_8,
#line 691 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_9,
#line 691 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goals_10,
#line 691 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22,
#line 691 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_23,
#line 691 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24,
#line 691 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25);

#line 656 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0_1(
#line 656 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 656 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 656 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 656 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 656 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 656 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 656 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 656 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7);

#line 648 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(
#line 648 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 648 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 648 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3,
#line 648 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_4,
#line 648 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 648 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 648 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7);

#line 631 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0_1(
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 631 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 631 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 631 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7);

#line 624 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0(
#line 624 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 624 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 624 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3,
#line 624 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_4,
#line 624 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 624 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 624 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7);

#line 586 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_arms_10_p_0(
#line 586 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cond0_11,
#line 586 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Cond_12,
#line 586 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Then0_13,
#line 586 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Then_14,
#line 586 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Else0_15,
#line 586 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Else_16,
#line 586 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25,
#line 586 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26,
#line 586 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_18,
#line 586 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_19);

#line 631 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0_2(
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 631 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 631 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 631 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7);

#line 631 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0_1(
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 631 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 631 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 631 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7);

#line 555 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0(
#line 555 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 555 "cse_detection.m"
  MR_Word check_hlds__cse_detection__IfVars_2,
#line 555 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cond0_3,
#line 555 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Then0_4,
#line 555 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Else0_5,
#line 555 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo_6,
#line 555 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap_7,
#line 555 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8,
#line 555 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_9,
#line 555 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_10,
#line 555 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__11_11);

#line 543 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_arms_6_p_0(
#line 543 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 543 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 543 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 543 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 543 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_5,
#line 543 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6);

#line 514 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_10_p_0(
#line 514 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 514 "cse_detection.m"
  MR_Word check_hlds__cse_detection__SwitchVar_2,
#line 514 "cse_detection.m"
  MR_Word check_hlds__cse_detection__CanFail_3,
#line 514 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cases0_4,
#line 514 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__5_5,
#line 514 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_6,
#line 514 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7,
#line 514 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_8,
#line 514 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_9,
#line 514 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__10_10);

#line 503 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(
#line 503 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 503 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 503 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 503 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 503 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_5,
#line 503 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6);

#line 476 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_disj_8_p_0(
#line 476 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 476 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goals0_2,
#line 476 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo0_3,
#line 476 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__4_4,
#line 476 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 476 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 476 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_7,
#line 476 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__8_8);

#line 448 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_conj_7_p_0(
#line 448 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 448 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 448 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 448 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 448 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__5_5,
#line 448 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__6_6,
#line 448 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7);

#line 336 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(
#line 336 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalExpr0_8,
#line 336 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__GoalExpr_9,
#line 336 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90,
#line 336 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91,
#line 336 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo_11,
#line 336 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_12,
#line 336 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_13);

#line 322 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(
#line 322 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_8,
#line 322 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goal_9,
#line 322 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_18,
#line 322 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_19,
#line 322 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_11,
#line 322 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__InstMap_12,
#line 322 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_13);

#line 311 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_6_p_0(
#line 311 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_7,
#line 311 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goal_8,
#line 311 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_13,
#line 311 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_14,
#line 311 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_10,
#line 311 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_11);

#line 267 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_proc_pass_4_p_0(
#line 267 "cse_detection.m"
  MR_Word check_hlds__cse_detection__ModuleInfo_5,
#line 267 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_6,
#line 267 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26,
#line 267 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_27);

#line 150 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_procs_4_p_0(
#line 150 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 150 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 150 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3,
#line 150 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_4);

#line 133 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_preds_3_p_0(
#line 133 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 133 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2,
#line 133 "cse_detection.m"
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



#line 942 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 950 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 958 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 966 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 975 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__cse_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 983 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 991 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0,
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1000 "check_hlds.cse_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__cse_detection__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1009 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1017 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1026 "check_hlds.cse_detection.c"
static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_info_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__cse_detection__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__cse_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0
};

#line 1034 "check_hlds.cse_detection.c"
static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_info_0_0[4] = {
  (MR_String) "csei_varset",
  (MR_String) "csei_vartypes",
  (MR_String) "csei_rtti_varmaps",
  (MR_String) "csei_module_info"
};

#line 1042 "check_hlds.cse_detection.c"
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

#line 1057 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_info_0_0[1] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0
};

#line 1062 "check_hlds.cse_detection.c"
static const MR_DuPtagLayout check_hlds__cse_detection__check_hlds__cse_detection__du_ptag_ordered_cse_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_info_0_0
  }
};

#line 1071 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_info_0[1] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_info_0_0
};

#line 1076 "check_hlds.cse_detection.c"
static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_info_0[1] = {
  (MR_Integer) 0
};

#line 1081 "check_hlds.cse_detection.c"
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

#line 1098 "check_hlds.cse_detection.c"
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

#line 1113 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__cse_detection__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__cse_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1122 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__cse_detection__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1130 "check_hlds.cse_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__cse_detection__list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1138 "check_hlds.cse_detection.c"
static const MR_PseudoTypeInfo check_hlds__cse_detection__check_hlds__cse_detection__field_types_cse_state_0_1[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__cse_detection__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__cse_detection__list__ti_list_1list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1145 "check_hlds.cse_detection.c"
static const MR_ConstString check_hlds__cse_detection__check_hlds__cse_detection__field_names_cse_state_0_1[3] = {
  (MR_String) "hc_goal",
  (MR_String) "hc_first_old_new",
  (MR_String) "hc_later_old_new"
};

#line 1152 "check_hlds.cse_detection.c"
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

#line 1167 "check_hlds.cse_detection.c"
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

#line 1182 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_0[2] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_0,
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_2
};

#line 1188 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_stag_ordered_cse_state_0_1[1] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1
};

#line 1193 "check_hlds.cse_detection.c"
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

#line 1207 "check_hlds.cse_detection.c"
static const MR_DuFunctorDescPtr check_hlds__cse_detection__check_hlds__cse_detection__du_name_ordered_cse_state_0[3] = {
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_0,
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_1,
  &check_hlds__cse_detection__check_hlds__cse_detection__du_functor_desc_cse_state_0_2
};

#line 1214 "check_hlds.cse_detection.c"
static const MR_Integer check_hlds__cse_detection__check_hlds__cse_detection__functor_number_map_cse_state_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1221 "check_hlds.cse_detection.c"
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

#line 1238 "check_hlds.cse_detection.c"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0_10001(
#line 1241 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 1243 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2)
#line 1245 "check_hlds.cse_detection.c"
{
#line 1247 "check_hlds.cse_detection.c"
  {
#line 1249 "check_hlds.cse_detection.c"
    MR_bool check_hlds__cse_detection__succeeded;

#line 1252 "check_hlds.cse_detection.c"
    {
#line 1254 "check_hlds.cse_detection.c"
      check_hlds__cse_detection__succeeded = check_hlds__cse_detection____Unify____cse_info_0_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2));
    }
#line 1257 "check_hlds.cse_detection.c"
    return check_hlds__cse_detection__succeeded;
#line 1259 "check_hlds.cse_detection.c"
  }
#line 1261 "check_hlds.cse_detection.c"
}

#line 1264 "check_hlds.cse_detection.c"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0_10001(
#line 1267 "check_hlds.cse_detection.c"
  MR_Box * check_hlds__cse_detection__wrapper_arg_1,
#line 1269 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 1271 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_3)
#line 1273 "check_hlds.cse_detection.c"
{
#line 1275 "check_hlds.cse_detection.c"
  {
#line 1277 "check_hlds.cse_detection.c"
    MR_Word check_hlds__cse_detection__conv0_HeadVar__1_1;

#line 1280 "check_hlds.cse_detection.c"
    {
#line 1282 "check_hlds.cse_detection.c"
      check_hlds__cse_detection____Compare____cse_info_0_0(&check_hlds__cse_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), ((MR_Word) check_hlds__cse_detection__wrapper_arg_3));
    }
#line 1285 "check_hlds.cse_detection.c"
    *check_hlds__cse_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__cse_detection__conv0_HeadVar__1_1));
#line 1287 "check_hlds.cse_detection.c"
  }
#line 1289 "check_hlds.cse_detection.c"
}

#line 1292 "check_hlds.cse_detection.c"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0_10001(
#line 1295 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 1297 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2)
#line 1299 "check_hlds.cse_detection.c"
{
#line 1301 "check_hlds.cse_detection.c"
  {
#line 1303 "check_hlds.cse_detection.c"
    MR_bool check_hlds__cse_detection__succeeded;

#line 1306 "check_hlds.cse_detection.c"
    {
#line 1308 "check_hlds.cse_detection.c"
      check_hlds__cse_detection__succeeded = check_hlds__cse_detection____Unify____cse_state_0_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2));
    }
#line 1311 "check_hlds.cse_detection.c"
    return check_hlds__cse_detection__succeeded;
#line 1313 "check_hlds.cse_detection.c"
  }
#line 1315 "check_hlds.cse_detection.c"
}

#line 1318 "check_hlds.cse_detection.c"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0_10001(
#line 1321 "check_hlds.cse_detection.c"
  MR_Box * check_hlds__cse_detection__wrapper_arg_1,
#line 1323 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 1325 "check_hlds.cse_detection.c"
  MR_Box check_hlds__cse_detection__wrapper_arg_3)
#line 1327 "check_hlds.cse_detection.c"
{
#line 1329 "check_hlds.cse_detection.c"
  {
#line 1331 "check_hlds.cse_detection.c"
    MR_Word check_hlds__cse_detection__conv0_HeadVar__1_1;

#line 1334 "check_hlds.cse_detection.c"
    {
#line 1336 "check_hlds.cse_detection.c"
      check_hlds__cse_detection____Compare____cse_state_0_0(&check_hlds__cse_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), ((MR_Word) check_hlds__cse_detection__wrapper_arg_3));
    }
#line 1339 "check_hlds.cse_detection.c"
    *check_hlds__cse_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__cse_detection__conv0_HeadVar__1_1));
#line 1341 "check_hlds.cse_detection.c"
  }
#line 1343 "check_hlds.cse_detection.c"
}

#line 682 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_state_0_0(
#line 682 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__1_1,
#line 682 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 682 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3)
#line 682 "cse_detection.m"
{
#line 682 "cse_detection.m"
  {
#line 682 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 682 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastX_24 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;
#line 682 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastY_25 = (MR_Integer) check_hlds__cse_detection__HeadVar__3_3;

#line 682 "cse_detection.m"
    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastX_24 == check_hlds__cse_detection__CastY_25);
#line 682 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 1370 "check_hlds.cse_detection.c"
      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 682 "cse_detection.m"
    else
#line 682 "cse_detection.m"
#line 682 "cse_detection.m"
      switch (MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__2_2)) {
#line 682 "cse_detection.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 682 "cse_detection.m"
        case (MR_Integer) 0:
#line 682 "cse_detection.m"
#line 682 "cse_detection.m"
          switch (MR_unmkbody(check_hlds__cse_detection__HeadVar__2_2)) {
#line 682 "cse_detection.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 682 "cse_detection.m"
            case (MR_Integer) 0:
#line 682 "cse_detection.m"
#line 682 "cse_detection.m"
              switch (MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__3_3)) {
#line 682 "cse_detection.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 682 "cse_detection.m"
                case (MR_Integer) 0:
#line 682 "cse_detection.m"
#line 682 "cse_detection.m"
                  switch (MR_unmkbody(check_hlds__cse_detection__HeadVar__3_3)) {
#line 682 "cse_detection.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 682 "cse_detection.m"
                    case (MR_Integer) 0:
#line 682 "cse_detection.m"
                      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 682 "cse_detection.m"
                      break;
#line 682 "cse_detection.m"
                    case (MR_Integer) 1:
#line 682 "cse_detection.m"
                      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 1;
#line 682 "cse_detection.m"
                      break;
#line 682 "cse_detection.m"
                  }
#line 682 "cse_detection.m"
                  break;
#line 682 "cse_detection.m"
                case (MR_Integer) 1:
#line 1418 "check_hlds.cse_detection.c"
                  *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 1;
#line 682 "cse_detection.m"
                  break;
#line 682 "cse_detection.m"
              }
#line 682 "cse_detection.m"
              break;
#line 682 "cse_detection.m"
            case (MR_Integer) 1:
#line 682 "cse_detection.m"
#line 682 "cse_detection.m"
              switch (MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__3_3)) {
#line 682 "cse_detection.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 682 "cse_detection.m"
                case (MR_Integer) 0:
#line 682 "cse_detection.m"
#line 682 "cse_detection.m"
                  switch (MR_unmkbody(check_hlds__cse_detection__HeadVar__3_3)) {
#line 682 "cse_detection.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 682 "cse_detection.m"
                    case (MR_Integer) 0:
#line 682 "cse_detection.m"
                      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 2;
#line 682 "cse_detection.m"
                      break;
#line 682 "cse_detection.m"
                    case (MR_Integer) 1:
#line 682 "cse_detection.m"
                      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 682 "cse_detection.m"
                      break;
#line 682 "cse_detection.m"
                  }
#line 682 "cse_detection.m"
                  break;
#line 682 "cse_detection.m"
                case (MR_Integer) 1:
#line 1458 "check_hlds.cse_detection.c"
                  *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 2;
#line 682 "cse_detection.m"
                  break;
#line 682 "cse_detection.m"
              }
#line 682 "cse_detection.m"
              break;
#line 682 "cse_detection.m"
          }
#line 682 "cse_detection.m"
          break;
#line 682 "cse_detection.m"
        case (MR_Integer) 1:
#line 682 "cse_detection.m"
          {
#line 682 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 682 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 682 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));

#line 682 "cse_detection.m"
#line 682 "cse_detection.m"
            switch (MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__3_3)) {
#line 682 "cse_detection.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 682 "cse_detection.m"
              case (MR_Integer) 0:
#line 682 "cse_detection.m"
#line 682 "cse_detection.m"
                switch (MR_unmkbody(check_hlds__cse_detection__HeadVar__3_3)) {
#line 682 "cse_detection.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 682 "cse_detection.m"
                  case (MR_Integer) 0:
#line 1495 "check_hlds.cse_detection.c"
                    *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 2;
#line 682 "cse_detection.m"
                    break;
#line 682 "cse_detection.m"
                  case (MR_Integer) 1:
#line 1501 "check_hlds.cse_detection.c"
                    *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 1;
#line 682 "cse_detection.m"
                    break;
#line 682 "cse_detection.m"
                }
#line 682 "cse_detection.m"
                break;
#line 682 "cse_detection.m"
              case (MR_Integer) 1:
#line 682 "cse_detection.m"
                {
#line 682 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 682 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 682 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 2)));
#line 682 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_16_16;

#line 682 "cse_detection.m"
                  {
#line 682 "cse_detection.m"
                    hlds__hlds_goal____Compare____hlds_goal_0_0(&check_hlds__cse_detection__V_16_16, check_hlds__cse_detection__V_31_31, check_hlds__cse_detection__V_13_13);
                  }
#line 1527 "check_hlds.cse_detection.c"
                  check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_16_16 == (MR_Integer) 0);
#line 682 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 682 "cse_detection.m"
                  if (check_hlds__cse_detection__succeeded)
#line 682 "cse_detection.m"
                    *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_16_16;
#line 682 "cse_detection.m"
                  else
#line 682 "cse_detection.m"
                    {
#line 682 "cse_detection.m"
                      MR_Word check_hlds__cse_detection__V_17_17;

#line 682 "cse_detection.m"
                      {
#line 682 "cse_detection.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[3], &check_hlds__cse_detection__V_17_17, ((MR_Box) (check_hlds__cse_detection__V_30_30)), ((MR_Box) (check_hlds__cse_detection__V_14_14)));
                      }
#line 1547 "check_hlds.cse_detection.c"
                      check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_17_17 == (MR_Integer) 0);
#line 682 "cse_detection.m"
                      check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 682 "cse_detection.m"
                      if (check_hlds__cse_detection__succeeded)
#line 682 "cse_detection.m"
                        *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_17_17;
#line 682 "cse_detection.m"
                      else
#line 682 "cse_detection.m"
                        {
#line 682 "cse_detection.m"
                          {
#line 682 "cse_detection.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[4], check_hlds__cse_detection__HeadVar__1_1, ((MR_Box) (check_hlds__cse_detection__V_29_29)), ((MR_Box) (check_hlds__cse_detection__V_15_15)));
                          }
#line 682 "cse_detection.m"
                        }
#line 682 "cse_detection.m"
                    }
#line 682 "cse_detection.m"
                }
#line 682 "cse_detection.m"
                break;
#line 682 "cse_detection.m"
            }
#line 682 "cse_detection.m"
          }
#line 682 "cse_detection.m"
          break;
#line 682 "cse_detection.m"
      }
#line 682 "cse_detection.m"
  }
#line 682 "cse_detection.m"
}

#line 682 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_state_0_0(
#line 682 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 682 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2)
#line 682 "cse_detection.m"
{
#line 682 "cse_detection.m"
  {
#line 682 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 682 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastX_13 = (MR_Integer) check_hlds__cse_detection__HeadVar__1_1;
#line 682 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastY_14 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;

#line 682 "cse_detection.m"
    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastX_13 == check_hlds__cse_detection__CastY_14);
#line 682 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 682 "cse_detection.m"
      check_hlds__cse_detection__succeeded = MR_TRUE;
#line 682 "cse_detection.m"
    else
#line 682 "cse_detection.m"
#line 682 "cse_detection.m"
      switch (MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__1_1)) {
#line 682 "cse_detection.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 682 "cse_detection.m"
        case (MR_Integer) 0:
#line 682 "cse_detection.m"
#line 682 "cse_detection.m"
          switch (MR_unmkbody(check_hlds__cse_detection__HeadVar__1_1)) {
#line 682 "cse_detection.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 682 "cse_detection.m"
            case (MR_Integer) 0:
#line 682 "cse_detection.m"
              {
#line 682 "cse_detection.m"
                MR_Integer check_hlds__cse_detection__CastX_3 = (MR_Integer) check_hlds__cse_detection__HeadVar__1_1;
#line 682 "cse_detection.m"
                MR_Integer check_hlds__cse_detection__CastY_4 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;

#line 682 "cse_detection.m"
                check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastY_4 == check_hlds__cse_detection__CastX_3);
#line 682 "cse_detection.m"
              }
#line 682 "cse_detection.m"
              break;
#line 682 "cse_detection.m"
            case (MR_Integer) 1:
#line 682 "cse_detection.m"
              {
#line 682 "cse_detection.m"
                MR_Integer check_hlds__cse_detection__CastX_11 = (MR_Integer) check_hlds__cse_detection__HeadVar__1_1;
#line 682 "cse_detection.m"
                MR_Integer check_hlds__cse_detection__CastY_12 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;

#line 682 "cse_detection.m"
                check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastY_12 == check_hlds__cse_detection__CastX_11);
#line 682 "cse_detection.m"
              }
#line 682 "cse_detection.m"
              break;
#line 682 "cse_detection.m"
          }
#line 682 "cse_detection.m"
          break;
#line 682 "cse_detection.m"
        case (MR_Integer) 1:
#line 682 "cse_detection.m"
          {
#line 682 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeInfo_16_16;
#line 682 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeInfo_17_17;
#line 682 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 682 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 682 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 2)));
#line 682 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_8_8;
#line 682 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_9_9;
#line 682 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_10_10;

#line 682 "cse_detection.m"
            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 682 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 682 "cse_detection.m"
              {
#line 682 "cse_detection.m"
                check_hlds__cse_detection__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 682 "cse_detection.m"
                check_hlds__cse_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 682 "cse_detection.m"
                check_hlds__cse_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 1690 "check_hlds.cse_detection.c"
                {
#line 1692 "check_hlds.cse_detection.c"
                  check_hlds__cse_detection__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(check_hlds__cse_detection__V_5_5, check_hlds__cse_detection__V_8_8);
                }
#line 682 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 682 "cse_detection.m"
                  {
#line 1699 "check_hlds.cse_detection.c"
                    check_hlds__cse_detection__TypeInfo_16_16 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[3];
#line 1701 "check_hlds.cse_detection.c"
                    {
#line 1703 "check_hlds.cse_detection.c"
                      check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__cse_detection__TypeInfo_16_16, ((MR_Box) (check_hlds__cse_detection__V_6_6)), ((MR_Box) (check_hlds__cse_detection__V_9_9)));
                    }
#line 682 "cse_detection.m"
                    if (check_hlds__cse_detection__succeeded)
#line 682 "cse_detection.m"
                      {
#line 1710 "check_hlds.cse_detection.c"
                        check_hlds__cse_detection__TypeInfo_17_17 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[4];
#line 1712 "check_hlds.cse_detection.c"
                        {
#line 1714 "check_hlds.cse_detection.c"
                          check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__cse_detection__TypeInfo_17_17, ((MR_Box) (check_hlds__cse_detection__V_7_7)), ((MR_Box) (check_hlds__cse_detection__V_10_10)));
                        }
#line 682 "cse_detection.m"
                      }
#line 682 "cse_detection.m"
                  }
#line 682 "cse_detection.m"
              }
#line 682 "cse_detection.m"
          }
#line 682 "cse_detection.m"
          break;
#line 682 "cse_detection.m"
      }
#line 682 "cse_detection.m"
    return check_hlds__cse_detection__succeeded;
#line 682 "cse_detection.m"
  }
#line 682 "cse_detection.m"
}

#line 259 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection____Compare____cse_info_0_0(
#line 259 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__1_1,
#line 259 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 259 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3)
#line 259 "cse_detection.m"
{
#line 259 "cse_detection.m"
  {
#line 259 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 259 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastX_15 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;
#line 259 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastY_16 = (MR_Integer) check_hlds__cse_detection__HeadVar__3_3;

#line 259 "cse_detection.m"
    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastX_15 == check_hlds__cse_detection__CastY_16);
#line 259 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 1760 "check_hlds.cse_detection.c"
      *check_hlds__cse_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 259 "cse_detection.m"
    else
#line 259 "cse_detection.m"
      {
#line 259 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 259 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 259 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 259 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 3)));
#line 259 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 259 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 259 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 2)));
#line 259 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 3)));
#line 259 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_12_12;

#line 259 "cse_detection.m"
        {
#line 259 "cse_detection.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[2], &check_hlds__cse_detection__V_12_12, ((MR_Box) (check_hlds__cse_detection__V_4_4)), ((MR_Box) (check_hlds__cse_detection__V_8_8)));
        }
#line 1790 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_12_12 == (MR_Integer) 0);
#line 259 "cse_detection.m"
        check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 259 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 259 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_12_12;
#line 259 "cse_detection.m"
        else
#line 259 "cse_detection.m"
          {
#line 259 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_13_13;

#line 259 "cse_detection.m"
            {
#line 259 "cse_detection.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_2[3], &check_hlds__cse_detection__V_13_13, ((MR_Box) (check_hlds__cse_detection__V_5_5)), ((MR_Box) (check_hlds__cse_detection__V_9_9)));
            }
#line 1810 "check_hlds.cse_detection.c"
            check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_13_13 == (MR_Integer) 0);
#line 259 "cse_detection.m"
            check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 259 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 259 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_13_13;
#line 259 "cse_detection.m"
            else
#line 259 "cse_detection.m"
              {
#line 259 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_14_14;

#line 259 "cse_detection.m"
                {
#line 259 "cse_detection.m"
                  hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&check_hlds__cse_detection__V_14_14, check_hlds__cse_detection__V_6_6, check_hlds__cse_detection__V_10_10);
                }
#line 1830 "check_hlds.cse_detection.c"
                check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_14_14 == (MR_Integer) 0);
#line 259 "cse_detection.m"
                check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 259 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 259 "cse_detection.m"
                  *check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__V_14_14;
#line 259 "cse_detection.m"
                else
#line 259 "cse_detection.m"
                  {
#line 259 "cse_detection.m"
                    hlds__hlds_module____Compare____module_info_0_0(check_hlds__cse_detection__HeadVar__1_1, check_hlds__cse_detection__V_7_7, check_hlds__cse_detection__V_11_11);
                  }
#line 259 "cse_detection.m"
              }
#line 259 "cse_detection.m"
          }
#line 259 "cse_detection.m"
      }
#line 259 "cse_detection.m"
  }
#line 259 "cse_detection.m"
}

#line 259 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection____Unify____cse_info_0_0(
#line 259 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 259 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2)
#line 259 "cse_detection.m"
{
#line 259 "cse_detection.m"
  {
#line 259 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 259 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastX_11 = (MR_Integer) check_hlds__cse_detection__HeadVar__1_1;
#line 259 "cse_detection.m"
    MR_Integer check_hlds__cse_detection__CastY_12 = (MR_Integer) check_hlds__cse_detection__HeadVar__2_2;

#line 259 "cse_detection.m"
    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__CastX_11 == check_hlds__cse_detection__CastY_12);
#line 259 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 259 "cse_detection.m"
      check_hlds__cse_detection__succeeded = MR_TRUE;
#line 259 "cse_detection.m"
    else
#line 259 "cse_detection.m"
      {
#line 259 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfo_14_14;
#line 259 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 259 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 259 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 2)));
#line 259 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 3)));
#line 259 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 259 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 259 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 259 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 3)));

#line 1903 "check_hlds.cse_detection.c"
        {
#line 1905 "check_hlds.cse_detection.c"
          check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[2], ((MR_Box) (check_hlds__cse_detection__V_3_3)), ((MR_Box) (check_hlds__cse_detection__V_7_7)));
        }
#line 259 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 259 "cse_detection.m"
          {
#line 1912 "check_hlds.cse_detection.c"
            check_hlds__cse_detection__TypeInfo_14_14 = (MR_Word) &check_hlds__cse_detection_scalar_common_2[3];
#line 1914 "check_hlds.cse_detection.c"
            {
#line 1916 "check_hlds.cse_detection.c"
              check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__cse_detection__TypeInfo_14_14, ((MR_Box) (check_hlds__cse_detection__V_4_4)), ((MR_Box) (check_hlds__cse_detection__V_8_8)));
            }
#line 259 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 259 "cse_detection.m"
              {
#line 1923 "check_hlds.cse_detection.c"
                {
#line 1925 "check_hlds.cse_detection.c"
                  check_hlds__cse_detection__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(check_hlds__cse_detection__V_5_5, check_hlds__cse_detection__V_9_9);
                }
#line 259 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 1930 "check_hlds.cse_detection.c"
                  {
#line 1932 "check_hlds.cse_detection.c"
                    check_hlds__cse_detection__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__cse_detection__V_6_6, check_hlds__cse_detection__V_10_10);
                  }
#line 259 "cse_detection.m"
              }
#line 259 "cse_detection.m"
          }
#line 259 "cse_detection.m"
      }
#line 259 "cse_detection.m"
    return check_hlds__cse_detection__succeeded;
#line 259 "cse_detection.m"
  }
#line 259 "cse_detection.m"
}

#line 1015 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_merged_tvars_6_p_0(
#line 1015 "cse_detection.m"
  MR_Word check_hlds__cse_detection__RttiVarMaps_7,
#line 1015 "cse_detection.m"
  MR_Word check_hlds__cse_detection__LaterOldNewMap_8,
#line 1015 "cse_detection.m"
  MR_Word check_hlds__cse_detection__NewTvarMap_9,
#line 1015 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Tvar_10,
#line 1015 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17,
#line 1015 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_Renaming_18)
#line 1015 "cse_detection.m"
{
#line 1019 "cse_detection.m"
  {
#line 1019 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 1019 "cse_detection.m"
    MR_Word check_hlds__cse_detection__TypeInfoLocn0_12;
#line 1019 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Old_13;
#line 1022 "cse_detection.m"
    MR_Word check_hlds__cse_detection__New_14;
#line 1022 "cse_detection.m"
    MR_Word check_hlds__cse_detection__TypeInfo_20_20;
#line 1022 "cse_detection.m"
    MR_Box check_hlds__cse_detection__conv0_New_14;

#line 1020 "cse_detection.m"
    {
#line 1020 "cse_detection.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(check_hlds__cse_detection__RttiVarMaps_7, check_hlds__cse_detection__Tvar_10, &check_hlds__cse_detection__TypeInfoLocn0_12);
    }
#line 1021 "cse_detection.m"
    {
#line 1021 "cse_detection.m"
      hlds__hlds_rtti__type_info_locn_var_2_p_0(check_hlds__cse_detection__TypeInfoLocn0_12, &check_hlds__cse_detection__Old_13);
    }
#line 1990 "check_hlds.cse_detection.c"
    check_hlds__cse_detection__TypeInfo_20_20 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
#line 1022 "cse_detection.m"
    {
#line 1022 "cse_detection.m"
      check_hlds__cse_detection__succeeded = mercury__map__search_3_p_0(check_hlds__cse_detection__TypeInfo_20_20, check_hlds__cse_detection__TypeInfo_20_20, check_hlds__cse_detection__LaterOldNewMap_8, ((MR_Box) (check_hlds__cse_detection__Old_13)), &check_hlds__cse_detection__conv0_New_14);
    }
#line 1022 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 1022 "cse_detection.m"
      {
#line 1022 "cse_detection.m"
        check_hlds__cse_detection__New_14 = ((MR_Word) check_hlds__cse_detection__conv0_New_14);
#line 1022 "cse_detection.m"
        check_hlds__cse_detection__succeeded = MR_TRUE;
#line 1022 "cse_detection.m"
      }
#line 1022 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 1023 "cse_detection.m"
      {
#line 1023 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfo_22_22;
#line 1023 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfoLocn_15;
#line 1023 "cse_detection.m"
        MR_Word check_hlds__cse_detection__NewTvar_16;
#line 1024 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv1_NewTvar_16;

#line 1023 "cse_detection.m"
        {
#line 1023 "cse_detection.m"
          hlds__hlds_rtti__type_info_locn_set_var_3_p_0(check_hlds__cse_detection__New_14, check_hlds__cse_detection__TypeInfoLocn0_12, &check_hlds__cse_detection__TypeInfoLocn_15);
        }
#line 2025 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeInfo_22_22 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[1];
#line 1024 "cse_detection.m"
        {
#line 1024 "cse_detection.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, check_hlds__cse_detection__TypeInfo_22_22, check_hlds__cse_detection__NewTvarMap_9, ((MR_Box) (check_hlds__cse_detection__TypeInfoLocn_15)), &check_hlds__cse_detection__conv1_NewTvar_16);
        }
#line 1024 "cse_detection.m"
        check_hlds__cse_detection__NewTvar_16 = ((MR_Word) check_hlds__cse_detection__conv1_NewTvar_16);
#line 1025 "cse_detection.m"
        {
#line 1025 "cse_detection.m"
          check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[1], ((MR_Box) (check_hlds__cse_detection__NewTvar_16)), ((MR_Box) (check_hlds__cse_detection__Tvar_10)));
        }
#line 1025 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 1025 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_Renaming_18 = check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17;
#line 1025 "cse_detection.m"
        else
#line 1028 "cse_detection.m"
          {
#line 1028 "cse_detection.m"
            mercury__map__det_insert_4_p_0(check_hlds__cse_detection__TypeInfo_22_22, check_hlds__cse_detection__TypeInfo_22_22, ((MR_Box) (check_hlds__cse_detection__Tvar_10)), ((MR_Box) (check_hlds__cse_detection__NewTvar_16)), check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17, check_hlds__cse_detection__STATE_VARIABLE_Renaming_18);
          }
#line 1023 "cse_detection.m"
      }
#line 1022 "cse_detection.m"
    else
#line 1022 "cse_detection.m"
      *check_hlds__cse_detection__STATE_VARIABLE_Renaming_18 = check_hlds__cse_detection__STATE_VARIABLE_Renaming_0_17;
#line 1019 "cse_detection.m"
  }
#line 1015 "cse_detection.m"
}

#line 1001 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_type_info_locn_tvar_map_5_p_0(
#line 1001 "cse_detection.m"
  MR_Word check_hlds__cse_detection__RttiVarMaps_6,
#line 1001 "cse_detection.m"
  MR_Word check_hlds__cse_detection__FirstOldNewMap_7,
#line 1001 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Tvar_8,
#line 1001 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_0_14,
#line 1001 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_15)
#line 1001 "cse_detection.m"
{
#line 1005 "cse_detection.m"
  {
#line 1005 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 1005 "cse_detection.m"
    MR_Word check_hlds__cse_detection__TypeInfoLocn0_10;
#line 1005 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Old_11;
#line 1008 "cse_detection.m"
    MR_Word check_hlds__cse_detection__New_12;
#line 1008 "cse_detection.m"
    MR_Word check_hlds__cse_detection__TypeInfo_17_17;
#line 1008 "cse_detection.m"
    MR_Box check_hlds__cse_detection__conv0_New_12;

#line 1006 "cse_detection.m"
    {
#line 1006 "cse_detection.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(check_hlds__cse_detection__RttiVarMaps_6, check_hlds__cse_detection__Tvar_8, &check_hlds__cse_detection__TypeInfoLocn0_10);
    }
#line 1007 "cse_detection.m"
    {
#line 1007 "cse_detection.m"
      hlds__hlds_rtti__type_info_locn_var_2_p_0(check_hlds__cse_detection__TypeInfoLocn0_10, &check_hlds__cse_detection__Old_11);
    }
#line 2101 "check_hlds.cse_detection.c"
    check_hlds__cse_detection__TypeInfo_17_17 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
#line 1008 "cse_detection.m"
    {
#line 1008 "cse_detection.m"
      check_hlds__cse_detection__succeeded = mercury__map__search_3_p_0(check_hlds__cse_detection__TypeInfo_17_17, check_hlds__cse_detection__TypeInfo_17_17, check_hlds__cse_detection__FirstOldNewMap_7, ((MR_Box) (check_hlds__cse_detection__Old_11)), &check_hlds__cse_detection__conv0_New_12);
    }
#line 1008 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 1008 "cse_detection.m"
      {
#line 1008 "cse_detection.m"
        check_hlds__cse_detection__New_12 = ((MR_Word) check_hlds__cse_detection__conv0_New_12);
#line 1008 "cse_detection.m"
        check_hlds__cse_detection__succeeded = MR_TRUE;
#line 1008 "cse_detection.m"
      }
#line 1008 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 1009 "cse_detection.m"
      {
#line 1009 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfoLocn_13;

#line 1009 "cse_detection.m"
        {
#line 1009 "cse_detection.m"
          hlds__hlds_rtti__type_info_locn_set_var_3_p_0(check_hlds__cse_detection__New_12, check_hlds__cse_detection__TypeInfoLocn0_10, &check_hlds__cse_detection__TypeInfoLocn_13);
        }
#line 1010 "cse_detection.m"
        {
#line 1010 "cse_detection.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, (MR_Word) &check_hlds__cse_detection_scalar_common_1[1], ((MR_Box) (check_hlds__cse_detection__TypeInfoLocn_13)), ((MR_Box) (check_hlds__cse_detection__Tvar_8)), check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_0_14, check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_15);
        }
#line 1009 "cse_detection.m"
      }
#line 1008 "cse_detection.m"
    else
#line 1008 "cse_detection.m"
      *check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_15 = check_hlds__cse_detection__STATE_VARIABLE_NewTvarMap_0_14;
#line 1005 "cse_detection.m"
  }
#line 1001 "cse_detection.m"
}

#line 987 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_2(
#line 987 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 987 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 987 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 987 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3)
#line 987 "cse_detection.m"
{
#line 987 "cse_detection.m"
  {
#line 987 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 987 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv2_STATE_VARIABLE_Renaming_18;

#line 987 "cse_detection.m"
    {
#line 987 "cse_detection.m"
      check_hlds__cse_detection__find_merged_tvars_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv2_STATE_VARIABLE_Renaming_18);
    }
#line 987 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv2_STATE_VARIABLE_Renaming_18));
#line 987 "cse_detection.m"
  }
#line 987 "cse_detection.m"
}

#line 980 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_1(
#line 980 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 980 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 980 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 980 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3)
#line 980 "cse_detection.m"
{
#line 980 "cse_detection.m"
  {
#line 980 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 980 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv0_STATE_VARIABLE_NewTvarMap_15;

#line 980 "cse_detection.m"
    {
#line 980 "cse_detection.m"
      check_hlds__cse_detection__find_type_info_locn_tvar_map_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv0_STATE_VARIABLE_NewTvarMap_15);
    }
#line 980 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv0_STATE_VARIABLE_NewTvarMap_15));
#line 980 "cse_detection.m"
  }
#line 980 "cse_detection.m"
}

#line 944 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(
#line 944 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Unify_6,
#line 944 "cse_detection.m"
  MR_Word check_hlds__cse_detection__FirstOldNew_7,
#line 944 "cse_detection.m"
  MR_Word check_hlds__cse_detection__LaterOldNew_8,
#line 944 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25,
#line 944 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26)
#line 944 "cse_detection.m"
{
#line 950 "cse_detection.m"
  {
#line 950 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 951 "cse_detection.m"
    MR_Word check_hlds__cse_detection__UnifyInfo_13;
#line 951 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Var_16;
#line 951 "cse_detection.m"
    MR_Word check_hlds__cse_detection__ConsId_17;
#line 951 "cse_detection.m"
    MR_Word check_hlds__cse_detection__ModuleInfo_22;
#line 951 "cse_detection.m"
    MR_Word check_hlds__cse_detection__VarTypes_23;
#line 951 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Type_24;
#line 951 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Unify_6, (MR_Integer) 0)));
#line 951 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Unify_6, (MR_Integer) 1)));
#line 951 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_10_10;
#line 951 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_11_11;
#line 951 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_12_12;
#line 951 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_14_14;
#line 952 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_18_18;
#line 952 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_19_19;
#line 952 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_20_20;
#line 952 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_21_21;
#line 953 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_29_29;
#line 953 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_31_31;

#line 951 "cse_detection.m"
    check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 951 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 951 "cse_detection.m"
      {
#line 951 "cse_detection.m"
        check_hlds__cse_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 0)));
#line 951 "cse_detection.m"
        check_hlds__cse_detection__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 1)));
#line 951 "cse_detection.m"
        check_hlds__cse_detection__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 2)));
#line 951 "cse_detection.m"
        check_hlds__cse_detection__UnifyInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 3)));
#line 951 "cse_detection.m"
        check_hlds__cse_detection__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_27_27, (MR_Integer) 4)));
#line 952 "cse_detection.m"
        check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__UnifyInfo_13)) == (MR_mktag((MR_Integer) 1)));
#line 952 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 952 "cse_detection.m"
          {
#line 952 "cse_detection.m"
            check_hlds__cse_detection__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 0)));
#line 952 "cse_detection.m"
            check_hlds__cse_detection__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 1)));
#line 952 "cse_detection.m"
            check_hlds__cse_detection__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 2)));
#line 952 "cse_detection.m"
            check_hlds__cse_detection__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 3)));
#line 952 "cse_detection.m"
            check_hlds__cse_detection__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 4)));
#line 952 "cse_detection.m"
            check_hlds__cse_detection__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__UnifyInfo_13, (MR_Integer) 5)));
#line 953 "cse_detection.m"
            check_hlds__cse_detection__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 0)));
#line 953 "cse_detection.m"
            check_hlds__cse_detection__VarTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 1)));
#line 953 "cse_detection.m"
            check_hlds__cse_detection__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 2)));
#line 953 "cse_detection.m"
            check_hlds__cse_detection__ModuleInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 3)));
#line 955 "cse_detection.m"
            {
#line 955 "cse_detection.m"
              hlds__vartypes__lookup_var_type_3_p_0(check_hlds__cse_detection__VarTypes_23, check_hlds__cse_detection__Var_16, &check_hlds__cse_detection__Type_24);
            }
#line 956 "cse_detection.m"
            {
#line 956 "cse_detection.m"
              check_hlds__cse_detection__succeeded = check_hlds__type_util__cons_id_is_existq_cons_3_p_0(check_hlds__cse_detection__ModuleInfo_22, check_hlds__cse_detection__Type_24, check_hlds__cse_detection__ConsId_17);
            }
#line 952 "cse_detection.m"
          }
#line 951 "cse_detection.m"
      }
#line 950 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 967 "cse_detection.m"
      {
#line 967 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfo_43_73 = (MR_Word) &check_hlds__cse_detection_scalar_common_2[0];
#line 967 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfo_44_74;
#line 967 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfo_49_79;
#line 967 "cse_detection.m"
        MR_Word check_hlds__cse_detection__LaterOldNew_40;
#line 967 "cse_detection.m"
        MR_Word check_hlds__cse_detection__FirstOldNewMap_41;
#line 967 "cse_detection.m"
        MR_Word check_hlds__cse_detection__LaterOldNewMap_42;
#line 967 "cse_detection.m"
        MR_Word check_hlds__cse_detection__RttiVarMaps0_43;
#line 967 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarTypes0_44;
#line 967 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TvarsList_45;
#line 967 "cse_detection.m"
        MR_Word check_hlds__cse_detection__NewTvarMap_46;
#line 967 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Renaming_47;
#line 967 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OldNew_48;
#line 967 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OldNewMap_49;
#line 967 "cse_detection.m"
        MR_Word check_hlds__cse_detection__RttiVarMaps_50;
#line 967 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarTypes_51;
#line 967 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_52_52;
#line 967 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_53_53;
#line 967 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_54_54;
#line 967 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_55_55;
#line 967 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_56_56;
#line 967 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_65_65;
#line 967 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_68_68;
#line 972 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_59_59;
#line 972 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_61_61;
#line 980 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv1_NewTvarMap_46;
#line 987 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv3_Renaming_47;
#line 998 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_66_66;
#line 998 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_67_67;

#line 968 "cse_detection.m"
        {
#line 968 "cse_detection.m"
          mercury__list__condense_2_p_0(check_hlds__cse_detection__TypeInfo_43_73, check_hlds__cse_detection__LaterOldNew_8, &check_hlds__cse_detection__LaterOldNew_40);
        }
#line 2388 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeInfo_44_74 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
#line 969 "cse_detection.m"
        {
#line 969 "cse_detection.m"
          mercury__map__from_assoc_list_2_p_0(check_hlds__cse_detection__TypeInfo_44_74, check_hlds__cse_detection__TypeInfo_44_74, check_hlds__cse_detection__FirstOldNew_7, &check_hlds__cse_detection__FirstOldNewMap_41);
        }
#line 970 "cse_detection.m"
        {
#line 970 "cse_detection.m"
          mercury__map__from_assoc_list_2_p_0(check_hlds__cse_detection__TypeInfo_44_74, check_hlds__cse_detection__TypeInfo_44_74, check_hlds__cse_detection__LaterOldNew_40, &check_hlds__cse_detection__LaterOldNewMap_42);
        }
#line 972 "cse_detection.m"
        check_hlds__cse_detection__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 0)));
#line 972 "cse_detection.m"
        check_hlds__cse_detection__VarTypes0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 1)));
#line 972 "cse_detection.m"
        check_hlds__cse_detection__RttiVarMaps0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 2)));
#line 972 "cse_detection.m"
        check_hlds__cse_detection__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 3)));
#line 979 "cse_detection.m"
        {
#line 979 "cse_detection.m"
          hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(check_hlds__cse_detection__RttiVarMaps0_43, &check_hlds__cse_detection__TvarsList_45);
        }
#line 980 "cse_detection.m"
        {
#line 980 "cse_detection.m"
          check_hlds__cse_detection__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 980 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 0) = ((MR_Box) (&check_hlds__cse_detection_scalar_common_4[0]));
#line 980 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 1) = ((MR_Box) (check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_1));
#line 980 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 980 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 3) = ((MR_Box) (check_hlds__cse_detection__RttiVarMaps0_43));
#line 980 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 4) = ((MR_Box) (check_hlds__cse_detection__FirstOldNewMap_41));
#line 980 "cse_detection.m"
        }
#line 2429 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeInfo_49_79 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[1];
#line 981 "cse_detection.m"
        {
#line 981 "cse_detection.m"
          check_hlds__cse_detection__V_53_53 = mercury__map__init_0_f_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, check_hlds__cse_detection__TypeInfo_49_79);
        }
#line 980 "cse_detection.m"
        {
#line 980 "cse_detection.m"
          mercury__list__foldl_4_p_0(check_hlds__cse_detection__TypeInfo_49_79, (MR_Word) &check_hlds__cse_detection_scalar_common_2[1], check_hlds__cse_detection__V_52_52, check_hlds__cse_detection__TvarsList_45, ((MR_Box) (check_hlds__cse_detection__V_53_53)), &check_hlds__cse_detection__conv1_NewTvarMap_46);
        }
#line 980 "cse_detection.m"
        check_hlds__cse_detection__NewTvarMap_46 = ((MR_Word) check_hlds__cse_detection__conv1_NewTvarMap_46);
#line 987 "cse_detection.m"
        {
#line 987 "cse_detection.m"
          check_hlds__cse_detection__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 987 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 0) = ((MR_Box) (&check_hlds__cse_detection_scalar_common_5[0]));
#line 987 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 1) = ((MR_Box) (check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0_2));
#line 987 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 987 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 3) = ((MR_Box) (check_hlds__cse_detection__RttiVarMaps0_43));
#line 987 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 4) = ((MR_Box) (check_hlds__cse_detection__LaterOldNewMap_42));
#line 987 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_54_54, 5) = ((MR_Box) (check_hlds__cse_detection__NewTvarMap_46));
#line 987 "cse_detection.m"
        }
#line 988 "cse_detection.m"
        {
#line 988 "cse_detection.m"
          check_hlds__cse_detection__V_55_55 = mercury__map__init_0_f_0(check_hlds__cse_detection__TypeInfo_49_79, check_hlds__cse_detection__TypeInfo_49_79);
        }
#line 987 "cse_detection.m"
        {
#line 987 "cse_detection.m"
          mercury__list__foldl_4_p_0(check_hlds__cse_detection__TypeInfo_49_79, (MR_Word) &check_hlds__cse_detection_scalar_common_2[2], check_hlds__cse_detection__V_54_54, check_hlds__cse_detection__TvarsList_45, ((MR_Box) (check_hlds__cse_detection__V_55_55)), &check_hlds__cse_detection__conv3_Renaming_47);
        }
#line 987 "cse_detection.m"
        check_hlds__cse_detection__Renaming_47 = ((MR_Word) check_hlds__cse_detection__conv3_Renaming_47);
#line 992 "cse_detection.m"
        {
#line 992 "cse_detection.m"
          mercury__list__append_3_p_1(check_hlds__cse_detection__TypeInfo_43_73, check_hlds__cse_detection__FirstOldNew_7, check_hlds__cse_detection__LaterOldNew_40, &check_hlds__cse_detection__OldNew_48);
        }
#line 993 "cse_detection.m"
        {
#line 993 "cse_detection.m"
          mercury__map__from_assoc_list_2_p_0(check_hlds__cse_detection__TypeInfo_44_74, check_hlds__cse_detection__TypeInfo_44_74, check_hlds__cse_detection__OldNew_48, &check_hlds__cse_detection__OldNewMap_49);
        }
#line 994 "cse_detection.m"
        {
#line 994 "cse_detection.m"
          check_hlds__cse_detection__V_56_56 = mercury__map__init_0_f_0(check_hlds__cse_detection__TypeInfo_49_79, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        }
#line 994 "cse_detection.m"
        {
#line 994 "cse_detection.m"
          hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(check_hlds__cse_detection__Renaming_47, check_hlds__cse_detection__V_56_56, check_hlds__cse_detection__OldNewMap_49, check_hlds__cse_detection__RttiVarMaps0_43, &check_hlds__cse_detection__RttiVarMaps_50);
        }
#line 996 "cse_detection.m"
        {
#line 996 "cse_detection.m"
          hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0(check_hlds__cse_detection__Renaming_47, check_hlds__cse_detection__VarTypes0_44, &check_hlds__cse_detection__VarTypes_51);
        }
#line 998 "cse_detection.m"
        check_hlds__cse_detection__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 0)));
#line 998 "cse_detection.m"
        check_hlds__cse_detection__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 1)));
#line 998 "cse_detection.m"
        check_hlds__cse_detection__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 2)));
#line 998 "cse_detection.m"
        check_hlds__cse_detection__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, (MR_Integer) 3)));
#line 999 "cse_detection.m"
        {
#line 999 "cse_detection.m"
          MR_Word base;
#line 999 "cse_detection.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 999 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26 = base;
#line 999 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__cse_detection__V_65_65));
#line 999 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__cse_detection__VarTypes_51));
#line 999 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__cse_detection__RttiVarMaps_50));
#line 999 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__cse_detection__V_68_68));
#line 999 "cse_detection.m"
        }
#line 967 "cse_detection.m"
      }
#line 950 "cse_detection.m"
    else
#line 950 "cse_detection.m"
      *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25;
#line 950 "cse_detection.m"
  }
#line 944 "cse_detection.m"
}

#line 859 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__pair_subterms_4_p_0(
#line 859 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 859 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 859 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__3_3,
#line 859 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__4_4)
#line 859 "cse_detection.m"
{
#line 862 "cse_detection.m"
  {
#line 862 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 862 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 862 "cse_detection.m"
      *check_hlds__cse_detection__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 862 "cse_detection.m"
    else
#line 864 "cse_detection.m"
      {
#line 864 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OldVar_7;
#line 864 "cse_detection.m"
        MR_Word check_hlds__cse_detection__HoistedVar_8;
#line 864 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OldHoistedVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 864 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Replacements1_13;
#line 864 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));

#line 863 "cse_detection.m"
        check_hlds__cse_detection__OldVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_17_17, (MR_Integer) 0)));
#line 863 "cse_detection.m"
        check_hlds__cse_detection__HoistedVar_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_17_17, (MR_Integer) 1)));
#line 865 "cse_detection.m"
        {
#line 865 "cse_detection.m"
          check_hlds__cse_detection__pair_subterms_4_p_0(check_hlds__cse_detection__OldHoistedVars_9, check_hlds__cse_detection__HeadVar__2_2, check_hlds__cse_detection__HeadVar__3_3, &check_hlds__cse_detection__Replacements1_13);
        }
#line 866 "cse_detection.m"
        {
#line 866 "cse_detection.m"
          check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[0], ((MR_Box) (check_hlds__cse_detection__OldVar_7)), ((MR_Box) (check_hlds__cse_detection__HoistedVar_8)));
        }
#line 866 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 867 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__4_4 = check_hlds__cse_detection__Replacements1_13;
#line 866 "cse_detection.m"
        else
#line 869 "cse_detection.m"
          {
#line 869 "cse_detection.m"
            MR_Word check_hlds__cse_detection__MainCtxt_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 869 "cse_detection.m"
            MR_Word check_hlds__cse_detection__SubCtxt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 869 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goal_16;
#line 869 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_18_18;

#line 874 "cse_detection.m"
            {
#line 874 "cse_detection.m"
              check_hlds__cse_detection__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 874 "cse_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_18_18, 0) = ((MR_Box) (check_hlds__cse_detection__OldVar_7));
#line 874 "cse_detection.m"
            }
#line 874 "cse_detection.m"
            {
#line 874 "cse_detection.m"
              hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__cse_detection__HoistedVar_8, check_hlds__cse_detection__V_18_18, check_hlds__cse_detection__HeadVar__2_2, check_hlds__cse_detection__MainCtxt_14, check_hlds__cse_detection__SubCtxt_15, &check_hlds__cse_detection__Goal_16);
            }
#line 876 "cse_detection.m"
            {
#line 876 "cse_detection.m"
              MR_Word base;
#line 876 "cse_detection.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 876 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__4_4 = base;
#line 876 "cse_detection.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal_16));
#line 876 "cse_detection.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Replacements1_13));
#line 876 "cse_detection.m"
            }
#line 869 "cse_detection.m"
          }
#line 864 "cse_detection.m"
      }
#line 862 "cse_detection.m"
  }
#line 859 "cse_detection.m"
}

#line 835 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__find_similar_deconstruct_5_p_0(
#line 835 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HoistedUnifyGoal_6,
#line 835 "cse_detection.m"
  MR_Word check_hlds__cse_detection__OldUnifyGoal_7,
#line 835 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Context_8,
#line 835 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__OldHoistedVars_9,
#line 835 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Replacements_10)
#line 835 "cse_detection.m"
{
#line 841 "cse_detection.m"
  {
#line 841 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 841 "cse_detection.m"
    MR_Word check_hlds__cse_detection__OC_15;
#line 841 "cse_detection.m"
    MR_Word check_hlds__cse_detection__HoistedFunctor_18;
#line 841 "cse_detection.m"
    MR_Word check_hlds__cse_detection__HoistedVars_19;
#line 841 "cse_detection.m"
    MR_Word check_hlds__cse_detection__OldFunctor_30;
#line 841 "cse_detection.m"
    MR_Word check_hlds__cse_detection__OldVars_31;
#line 842 "cse_detection.m"
    MR_Word check_hlds__cse_detection__HoistedUnifyInfo_14;
#line 842 "cse_detection.m"
    MR_Word check_hlds__cse_detection__OldUnifyInfo_26;
#line 842 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HoistedUnifyGoal_6, (MR_Integer) 0)));
#line 842 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_38_38;
#line 842 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__HoistedUnifyGoal_6, (MR_Integer) 1)));
#line 842 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_11_11;
#line 842 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_12_12;
#line 842 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_13_13;
#line 843 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_17_17;
#line 843 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_20_20;
#line 843 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_21_21;
#line 843 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_22_22;
#line 845 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_28_28;
#line 845 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_23_23;
#line 845 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_24_24;
#line 845 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_25_25;
#line 845 "cse_detection.m"
    MR_Word check_hlds__cse_detection___NC_27;
#line 846 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_29_29;
#line 846 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_32_32;
#line 846 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_33_33;
#line 846 "cse_detection.m"
    MR_Word check_hlds__cse_detection__V_34_34;

#line 842 "cse_detection.m"
    check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 842 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 842 "cse_detection.m"
      {
#line 842 "cse_detection.m"
        check_hlds__cse_detection__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 0)));
#line 842 "cse_detection.m"
        check_hlds__cse_detection__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 1)));
#line 842 "cse_detection.m"
        check_hlds__cse_detection__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 2)));
#line 842 "cse_detection.m"
        check_hlds__cse_detection__HoistedUnifyInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 3)));
#line 842 "cse_detection.m"
        check_hlds__cse_detection__OC_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, (MR_Integer) 4)));
#line 843 "cse_detection.m"
        check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__HoistedUnifyInfo_14)) == (MR_mktag((MR_Integer) 1)));
#line 843 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 843 "cse_detection.m"
          {
#line 843 "cse_detection.m"
            check_hlds__cse_detection__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 0)));
#line 843 "cse_detection.m"
            check_hlds__cse_detection__HoistedFunctor_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 1)));
#line 843 "cse_detection.m"
            check_hlds__cse_detection__HoistedVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 2)));
#line 843 "cse_detection.m"
            check_hlds__cse_detection__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 3)));
#line 843 "cse_detection.m"
            check_hlds__cse_detection__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 4)));
#line 843 "cse_detection.m"
            check_hlds__cse_detection__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HoistedUnifyInfo_14, (MR_Integer) 5)));
#line 845 "cse_detection.m"
            check_hlds__cse_detection__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__OldUnifyGoal_7, (MR_Integer) 0)));
#line 845 "cse_detection.m"
            check_hlds__cse_detection__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__OldUnifyGoal_7, (MR_Integer) 1)));
#line 845 "cse_detection.m"
            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 845 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 845 "cse_detection.m"
              {
#line 845 "cse_detection.m"
                check_hlds__cse_detection__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 0)));
#line 845 "cse_detection.m"
                check_hlds__cse_detection__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 1)));
#line 845 "cse_detection.m"
                check_hlds__cse_detection__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 2)));
#line 845 "cse_detection.m"
                check_hlds__cse_detection__OldUnifyInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 3)));
#line 845 "cse_detection.m"
                check_hlds__cse_detection___NC_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, (MR_Integer) 4)));
#line 846 "cse_detection.m"
                check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__OldUnifyInfo_26)) == (MR_mktag((MR_Integer) 1)));
#line 846 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 846 "cse_detection.m"
                  {
#line 846 "cse_detection.m"
                    check_hlds__cse_detection__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 0)));
#line 846 "cse_detection.m"
                    check_hlds__cse_detection__OldFunctor_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 1)));
#line 846 "cse_detection.m"
                    check_hlds__cse_detection__OldVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 2)));
#line 846 "cse_detection.m"
                    check_hlds__cse_detection__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 3)));
#line 846 "cse_detection.m"
                    check_hlds__cse_detection__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 4)));
#line 846 "cse_detection.m"
                    check_hlds__cse_detection__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__OldUnifyInfo_26, (MR_Integer) 5)));
#line 846 "cse_detection.m"
                  }
#line 845 "cse_detection.m"
              }
#line 843 "cse_detection.m"
          }
#line 842 "cse_detection.m"
      }
#line 841 "cse_detection.m"
    if (check_hlds__cse_detection__succeeded)
#line 848 "cse_detection.m"
      {
#line 848 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeInfo_42_42;
#line 848 "cse_detection.m"
        MR_Integer check_hlds__cse_detection__HoistedVarsCount_35;
#line 848 "cse_detection.m"
        MR_Integer check_hlds__cse_detection__OldVarsCount_36;

#line 848 "cse_detection.m"
        {
#line 848 "cse_detection.m"
          check_hlds__cse_detection__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__cse_detection__HoistedFunctor_18, check_hlds__cse_detection__OldFunctor_30);
        }
#line 848 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 848 "cse_detection.m"
          {
#line 2811 "check_hlds.cse_detection.c"
            check_hlds__cse_detection__TypeInfo_42_42 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
#line 849 "cse_detection.m"
            {
#line 849 "cse_detection.m"
              mercury__list__length_2_p_0(check_hlds__cse_detection__TypeInfo_42_42, check_hlds__cse_detection__HoistedVars_19, &check_hlds__cse_detection__HoistedVarsCount_35);
            }
#line 850 "cse_detection.m"
            {
#line 850 "cse_detection.m"
              mercury__list__length_2_p_0(check_hlds__cse_detection__TypeInfo_42_42, check_hlds__cse_detection__OldVars_31, &check_hlds__cse_detection__OldVarsCount_36);
            }
#line 851 "cse_detection.m"
            check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__HoistedVarsCount_35 == check_hlds__cse_detection__OldVarsCount_36);
#line 848 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 848 "cse_detection.m"
              {
#line 852 "cse_detection.m"
                {
#line 852 "cse_detection.m"
                  mercury__assoc_list__from_corresponding_lists_3_p_0(check_hlds__cse_detection__TypeInfo_42_42, check_hlds__cse_detection__TypeInfo_42_42, check_hlds__cse_detection__OldVars_31, check_hlds__cse_detection__HoistedVars_19, check_hlds__cse_detection__OldHoistedVars_9);
                }
#line 854 "cse_detection.m"
                {
#line 854 "cse_detection.m"
                  check_hlds__cse_detection__pair_subterms_4_p_0(*check_hlds__cse_detection__OldHoistedVars_9, check_hlds__cse_detection__Context_8, check_hlds__cse_detection__OC_15, check_hlds__cse_detection__Replacements_10);
                }
#line 854 "cse_detection.m"
                check_hlds__cse_detection__succeeded = MR_TRUE;
#line 848 "cse_detection.m"
              }
#line 848 "cse_detection.m"
          }
#line 848 "cse_detection.m"
      }
#line 841 "cse_detection.m"
    else
#line 856 "cse_detection.m"
      {
#line 856 "cse_detection.m"
        {
#line 856 "cse_detection.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.find_similar_deconstruct\'/5", (MR_String) "non-deconstruct unify");
        }
#line 856 "cse_detection.m"
        check_hlds__cse_detection__succeeded = MR_TRUE;
#line 856 "cse_detection.m"
      }
#line 841 "cse_detection.m"
    return check_hlds__cse_detection__succeeded;
#line 841 "cse_detection.m"
  }
#line 835 "cse_detection.m"
}

#line 756 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__create_new_arg_vars_7_p_0(
#line 756 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 756 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Context_2,
#line 756 "cse_detection.m"
  MR_Word check_hlds__cse_detection__UnifyContext_3,
#line 756 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_4,
#line 756 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_5,
#line 756 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6,
#line 756 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7)
#line 756 "cse_detection.m"
{
#line 760 "cse_detection.m"
  {
#line 760 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 760 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 760 "cse_detection.m"
      {
#line 760 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 760 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 760 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_5 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_4;
#line 760 "cse_detection.m"
      }
#line 760 "cse_detection.m"
    else
#line 762 "cse_detection.m"
      {
#line 762 "cse_detection.m"
        MR_Word check_hlds__cse_detection__HeadOldArgVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 762 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TailOldArgVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 762 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TailReplacementGoals_20;
#line 762 "cse_detection.m"
        MR_Word check_hlds__cse_detection__HeadReplacementGoal_21;
#line 762 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25;
#line 762 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_OldNewVars_26_26;
#line 762 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarSet0_39;
#line 762 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarTypes0_40;
#line 762 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Type_41;
#line 762 "cse_detection.m"
        MR_Word check_hlds__cse_detection__ModuleInfo_42;
#line 762 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeCat_43;
#line 762 "cse_detection.m"
        MR_Word check_hlds__cse_detection__NewArgVar_46;
#line 762 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarSet_47;
#line 762 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VarTypes_48;
#line 762 "cse_detection.m"
        MR_Word check_hlds__cse_detection__MainCtxt_49;
#line 762 "cse_detection.m"
        MR_Word check_hlds__cse_detection__SubCtxt_50;
#line 762 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_52_52;
#line 762 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_53_53;
#line 762 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_67_67;
#line 762 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_68_68;
#line 808 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_57_57;
#line 808 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_58_58;
#line 811 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_62_62;
#line 811 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_63_63;
#line 811 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_64_64;
#line 813 "cse_detection.m"
        MR_String check_hlds__cse_detection__OldName_45;
#line 814 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeCtorInfo_53_73;
#line 814 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_44_44;
#line 830 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_65_65;
#line 830 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_66_66;

#line 763 "cse_detection.m"
        {
#line 763 "cse_detection.m"
          check_hlds__cse_detection__create_new_arg_vars_7_p_0(check_hlds__cse_detection__TailOldArgVars_14, check_hlds__cse_detection__Context_2, check_hlds__cse_detection__UnifyContext_3, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_4, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, &check_hlds__cse_detection__STATE_VARIABLE_OldNewVars_26_26, &check_hlds__cse_detection__TailReplacementGoals_20);
        }
#line 808 "cse_detection.m"
        check_hlds__cse_detection__VarSet0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 0)));
#line 808 "cse_detection.m"
        check_hlds__cse_detection__VarTypes0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 1)));
#line 808 "cse_detection.m"
        check_hlds__cse_detection__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 2)));
#line 808 "cse_detection.m"
        check_hlds__cse_detection__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 3)));
#line 810 "cse_detection.m"
        {
#line 810 "cse_detection.m"
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__cse_detection__VarTypes0_40, check_hlds__cse_detection__HeadOldArgVar_13, &check_hlds__cse_detection__Type_41);
        }
#line 811 "cse_detection.m"
        check_hlds__cse_detection__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 0)));
#line 811 "cse_detection.m"
        check_hlds__cse_detection__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 1)));
#line 811 "cse_detection.m"
        check_hlds__cse_detection__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 2)));
#line 811 "cse_detection.m"
        check_hlds__cse_detection__ModuleInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 3)));
#line 812 "cse_detection.m"
        {
#line 812 "cse_detection.m"
          check_hlds__cse_detection__TypeCat_43 = check_hlds__type_util__classify_type_2_f_0(check_hlds__cse_detection__ModuleInfo_42, check_hlds__cse_detection__Type_41);
        }
#line 814 "cse_detection.m"
        check_hlds__cse_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__cse_detection__TypeCat_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__TypeCat_43, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 814 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 814 "cse_detection.m"
          {
#line 814 "cse_detection.m"
            check_hlds__cse_detection__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__TypeCat_43, (MR_Integer) 1)));
#line 3007 "check_hlds.cse_detection.c"
            check_hlds__cse_detection__TypeCtorInfo_53_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 815 "cse_detection.m"
            {
#line 815 "cse_detection.m"
              check_hlds__cse_detection__succeeded = mercury__varset__search_name_3_p_0(check_hlds__cse_detection__TypeCtorInfo_53_73, check_hlds__cse_detection__VarSet0_39, check_hlds__cse_detection__HeadOldArgVar_13, &check_hlds__cse_detection__OldName_45);
            }
#line 814 "cse_detection.m"
          }
#line 813 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 817 "cse_detection.m"
          {
#line 817 "cse_detection.m"
            {
#line 817 "cse_detection.m"
              mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__cse_detection__OldName_45, &check_hlds__cse_detection__NewArgVar_46, check_hlds__cse_detection__VarSet0_39, &check_hlds__cse_detection__VarSet_47);
            }
#line 817 "cse_detection.m"
          }
#line 813 "cse_detection.m"
        else
#line 819 "cse_detection.m"
          {
#line 819 "cse_detection.m"
            {
#line 819 "cse_detection.m"
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__cse_detection__NewArgVar_46, check_hlds__cse_detection__VarSet0_39, &check_hlds__cse_detection__VarSet_47);
            }
#line 819 "cse_detection.m"
          }
#line 821 "cse_detection.m"
        {
#line 821 "cse_detection.m"
          hlds__vartypes__add_var_type_4_p_0(check_hlds__cse_detection__NewArgVar_46, check_hlds__cse_detection__Type_41, check_hlds__cse_detection__VarTypes0_40, &check_hlds__cse_detection__VarTypes_48);
        }
#line 822 "cse_detection.m"
        {
#line 822 "cse_detection.m"
          check_hlds__cse_detection__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 822 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 0) = ((MR_Box) (check_hlds__cse_detection__HeadOldArgVar_13));
#line 822 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_52_52, 1) = ((MR_Box) (check_hlds__cse_detection__NewArgVar_46));
#line 822 "cse_detection.m"
        }
#line 822 "cse_detection.m"
        {
#line 822 "cse_detection.m"
          MR_Word base;
#line 822 "cse_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__6_6 = base;
#line 822 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__V_52_52));
#line 822 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_OldNewVars_26_26));
#line 822 "cse_detection.m"
        }
#line 823 "cse_detection.m"
        check_hlds__cse_detection__MainCtxt_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__UnifyContext_3, (MR_Integer) 0)));
#line 823 "cse_detection.m"
        check_hlds__cse_detection__SubCtxt_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__UnifyContext_3, (MR_Integer) 1)));
#line 828 "cse_detection.m"
        {
#line 828 "cse_detection.m"
          check_hlds__cse_detection__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 828 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_53_53, 0) = ((MR_Box) (check_hlds__cse_detection__NewArgVar_46));
#line 828 "cse_detection.m"
        }
#line 828 "cse_detection.m"
        {
#line 828 "cse_detection.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__cse_detection__HeadOldArgVar_13, check_hlds__cse_detection__V_53_53, check_hlds__cse_detection__Context_2, check_hlds__cse_detection__MainCtxt_49, check_hlds__cse_detection__SubCtxt_50, &check_hlds__cse_detection__HeadReplacementGoal_21);
        }
#line 830 "cse_detection.m"
        check_hlds__cse_detection__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 0)));
#line 830 "cse_detection.m"
        check_hlds__cse_detection__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 1)));
#line 830 "cse_detection.m"
        check_hlds__cse_detection__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 2)));
#line 830 "cse_detection.m"
        check_hlds__cse_detection__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25_25, (MR_Integer) 3)));
#line 831 "cse_detection.m"
        {
#line 831 "cse_detection.m"
          MR_Word base;
#line 831 "cse_detection.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 831 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_5 = base;
#line 831 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__cse_detection__VarSet_47));
#line 831 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__cse_detection__VarTypes_48));
#line 831 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__cse_detection__V_67_67));
#line 831 "cse_detection.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__cse_detection__V_68_68));
#line 831 "cse_detection.m"
        }
#line 767 "cse_detection.m"
        {
#line 767 "cse_detection.m"
          MR_Word base;
#line 767 "cse_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 767 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__7_7 = base;
#line 767 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__HeadReplacementGoal_21));
#line 767 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__TailReplacementGoals_20));
#line 767 "cse_detection.m"
        }
#line 762 "cse_detection.m"
      }
#line 760 "cse_detection.m"
  }
#line 756 "cse_detection.m"
}

#line 691 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(
#line 691 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Var_8,
#line 691 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_9,
#line 691 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goals_10,
#line 691 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22,
#line 691 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_23,
#line 691 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24,
#line 691 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25)
#line 691 "cse_detection.m"
{
#line 698 "cse_detection.m"
  {
#line 698 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 698 "cse_detection.m"
#line 698 "cse_detection.m"
    switch (MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22)) {
#line 698 "cse_detection.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 698 "cse_detection.m"
      case (MR_Integer) 0:
#line 698 "cse_detection.m"
#line 698 "cse_detection.m"
        switch (MR_unmkbody(check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22)) {
#line 698 "cse_detection.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 698 "cse_detection.m"
          case (MR_Integer) 0:
#line 698 "cse_detection.m"
            {
#line 698 "cse_detection.m"
              MR_Word check_hlds__cse_detection__OldNewVars_13;
#line 698 "cse_detection.m"
              MR_Word check_hlds__cse_detection__HoistedGoal_14;
#line 698 "cse_detection.m"
              MR_Word check_hlds__cse_detection__GoalExpr0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_9, (MR_Integer) 0)));
#line 698 "cse_detection.m"
              MR_Word check_hlds__cse_detection__GoalInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_9, (MR_Integer) 1)));
#line 732 "cse_detection.m"
              MR_Word check_hlds__cse_detection__RHS_48;
#line 732 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Umode_49;
#line 732 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Ucontext_51;
#line 732 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ConsId_53;
#line 732 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ArgVars_54;
#line 732 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Submodes_55;
#line 732 "cse_detection.m"
              MR_Word check_hlds__cse_detection__CanFail_56;
#line 732 "cse_detection.m"
              MR_Word check_hlds__cse_detection__CanCGC_57;
#line 733 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Unif0_50;
#line 733 "cse_detection.m"
              MR_Word check_hlds__cse_detection__V_47_47;
#line 734 "cse_detection.m"
              MR_Word check_hlds__cse_detection__V_52_52;

#line 733 "cse_detection.m"
              check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__GoalExpr0_45)) == (MR_mktag((MR_Integer) 1)));
#line 733 "cse_detection.m"
              if (check_hlds__cse_detection__succeeded)
#line 733 "cse_detection.m"
                {
#line 733 "cse_detection.m"
                  check_hlds__cse_detection__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_45, (MR_Integer) 0)));
#line 733 "cse_detection.m"
                  check_hlds__cse_detection__RHS_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_45, (MR_Integer) 1)));
#line 733 "cse_detection.m"
                  check_hlds__cse_detection__Umode_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_45, (MR_Integer) 2)));
#line 733 "cse_detection.m"
                  check_hlds__cse_detection__Unif0_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_45, (MR_Integer) 3)));
#line 733 "cse_detection.m"
                  check_hlds__cse_detection__Ucontext_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_45, (MR_Integer) 4)));
#line 734 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__Unif0_50)) == (MR_mktag((MR_Integer) 1)));
#line 734 "cse_detection.m"
                  if (check_hlds__cse_detection__succeeded)
#line 734 "cse_detection.m"
                    {
#line 734 "cse_detection.m"
                      check_hlds__cse_detection__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_50, (MR_Integer) 0)));
#line 734 "cse_detection.m"
                      check_hlds__cse_detection__ConsId_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_50, (MR_Integer) 1)));
#line 734 "cse_detection.m"
                      check_hlds__cse_detection__ArgVars_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_50, (MR_Integer) 2)));
#line 734 "cse_detection.m"
                      check_hlds__cse_detection__Submodes_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_50, (MR_Integer) 3)));
#line 734 "cse_detection.m"
                      check_hlds__cse_detection__CanFail_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_50, (MR_Integer) 4)));
#line 734 "cse_detection.m"
                      check_hlds__cse_detection__CanCGC_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif0_50, (MR_Integer) 5)));
#line 734 "cse_detection.m"
                    }
#line 733 "cse_detection.m"
                }
#line 732 "cse_detection.m"
              if (check_hlds__cse_detection__succeeded)
#line 736 "cse_detection.m"
                {
#line 736 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__TypeInfo_54_83;
#line 736 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__Unif_58;
#line 736 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__GoalExpr1_62;
#line 736 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__Context_73;
#line 736 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__Subn_74;
#line 736 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_79_79;

#line 736 "cse_detection.m"
                  {
#line 736 "cse_detection.m"
                    check_hlds__cse_detection__Unif_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 736 "cse_detection.m"
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_58, 0) = ((MR_Box) (check_hlds__cse_detection__Var_8));
#line 736 "cse_detection.m"
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_58, 1) = ((MR_Box) (check_hlds__cse_detection__ConsId_53));
#line 736 "cse_detection.m"
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_58, 2) = ((MR_Box) (check_hlds__cse_detection__ArgVars_54));
#line 736 "cse_detection.m"
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_58, 3) = ((MR_Box) (check_hlds__cse_detection__Submodes_55));
#line 736 "cse_detection.m"
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_58, 4) = ((MR_Box) (check_hlds__cse_detection__CanFail_56));
#line 736 "cse_detection.m"
                    MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Unif_58, 5) = ((MR_Box) (check_hlds__cse_detection__CanCGC_57));
#line 736 "cse_detection.m"
                  }
#line 740 "cse_detection.m"
#line 740 "cse_detection.m"
                  switch (MR_tag((MR_Word) check_hlds__cse_detection__RHS_48)) {
#line 740 "cse_detection.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 740 "cse_detection.m"
                    case (MR_Integer) 0:
#line 740 "cse_detection.m"
                    case (MR_Integer) 2:
#line 743 "cse_detection.m"
                      {
#line 744 "cse_detection.m"
                        {
#line 744 "cse_detection.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.construct_common_unify\'/7", (MR_String) "non-functor unify");
#line 744 "cse_detection.m"
                          return;
                        }
#line 743 "cse_detection.m"
                      }
#line 740 "cse_detection.m"
                      break;
#line 740 "cse_detection.m"
                    case (MR_Integer) 1:
#line 739 "cse_detection.m"
                      {
#line 739 "cse_detection.m"
                        check_hlds__cse_detection__GoalExpr1_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 739 "cse_detection.m"
                        MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_62, 0) = ((MR_Box) (check_hlds__cse_detection__Var_8));
#line 739 "cse_detection.m"
                        MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_62, 1) = ((MR_Box) (check_hlds__cse_detection__RHS_48));
#line 739 "cse_detection.m"
                        MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_62, 2) = ((MR_Box) (check_hlds__cse_detection__Umode_49));
#line 739 "cse_detection.m"
                        MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_62, 3) = ((MR_Box) (check_hlds__cse_detection__Unif_58));
#line 739 "cse_detection.m"
                        MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr1_62, 4) = ((MR_Box) (check_hlds__cse_detection__Ucontext_51));
#line 739 "cse_detection.m"
                      }
#line 740 "cse_detection.m"
                      break;
#line 740 "cse_detection.m"
                  }
#line 746 "cse_detection.m"
                  {
#line 746 "cse_detection.m"
                    check_hlds__cse_detection__Context_73 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__cse_detection__GoalInfo_46);
                  }
#line 747 "cse_detection.m"
                  {
#line 747 "cse_detection.m"
                    check_hlds__cse_detection__create_new_arg_vars_7_p_0(check_hlds__cse_detection__ArgVars_54, check_hlds__cse_detection__Context_73, check_hlds__cse_detection__Ucontext_51, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25, &check_hlds__cse_detection__OldNewVars_13, check_hlds__cse_detection__Goals_10);
                  }
#line 3329 "check_hlds.cse_detection.c"
                  check_hlds__cse_detection__TypeInfo_54_83 = (MR_Word) &check_hlds__cse_detection_scalar_common_1[0];
#line 749 "cse_detection.m"
                  {
#line 749 "cse_detection.m"
                    mercury__map__from_assoc_list_2_p_0(check_hlds__cse_detection__TypeInfo_54_83, check_hlds__cse_detection__TypeInfo_54_83, check_hlds__cse_detection__OldNewVars_13, &check_hlds__cse_detection__Subn_74);
                  }
#line 750 "cse_detection.m"
                  {
#line 750 "cse_detection.m"
                    check_hlds__cse_detection__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 750 "cse_detection.m"
                    MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_79_79, 0) = ((MR_Box) (check_hlds__cse_detection__GoalExpr1_62));
#line 750 "cse_detection.m"
                    MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_79_79, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_46));
#line 750 "cse_detection.m"
                  }
#line 750 "cse_detection.m"
                  {
#line 750 "cse_detection.m"
                    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(check_hlds__cse_detection__Subn_74, check_hlds__cse_detection__V_79_79, &check_hlds__cse_detection__HoistedGoal_14);
                  }
#line 736 "cse_detection.m"
                }
#line 732 "cse_detection.m"
              else
#line 753 "cse_detection.m"
                {
#line 753 "cse_detection.m"
                  {
#line 753 "cse_detection.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.construct_common_unify\'/7", (MR_String) "non-unify goal");
#line 753 "cse_detection.m"
                    return;
                  }
#line 753 "cse_detection.m"
                }
#line 701 "cse_detection.m"
              {
#line 701 "cse_detection.m"
                MR_Word base;
#line 701 "cse_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 701 "cse_detection.m"
                *check_hlds__cse_detection__STATE_VARIABLE_CseState_23 = base;
#line 701 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__HoistedGoal_14));
#line 701 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__OldNewVars_13));
#line 701 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 701 "cse_detection.m"
              }
#line 698 "cse_detection.m"
            }
#line 698 "cse_detection.m"
            break;
#line 698 "cse_detection.m"
          case (MR_Integer) 1:
#line 720 "cse_detection.m"
            {
#line 721 "cse_detection.m"
              {
#line 721 "cse_detection.m"
                MR_Word base;
#line 721 "cse_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 721 "cse_detection.m"
                *check_hlds__cse_detection__Goals_10 = base;
#line 721 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal0_9));
#line 721 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 721 "cse_detection.m"
              }
#line 722 "cse_detection.m"
              *check_hlds__cse_detection__STATE_VARIABLE_CseState_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 720 "cse_detection.m"
              *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24;
#line 720 "cse_detection.m"
            }
#line 698 "cse_detection.m"
            break;
#line 698 "cse_detection.m"
        }
#line 698 "cse_detection.m"
        break;
#line 698 "cse_detection.m"
      case (MR_Integer) 1:
#line 704 "cse_detection.m"
        {
#line 704 "cse_detection.m"
          MR_Word check_hlds__cse_detection__FirstOldNewVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22, (MR_Integer) 1)));
#line 704 "cse_detection.m"
          MR_Word check_hlds__cse_detection__LaterOldNewVars0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22, (MR_Integer) 2)));
#line 704 "cse_detection.m"
          MR_Word check_hlds__cse_detection__GoalInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_9, (MR_Integer) 1)));
#line 704 "cse_detection.m"
          MR_Word check_hlds__cse_detection__Context_19;
#line 704 "cse_detection.m"
          MR_Word check_hlds__cse_detection__HoistedGoal_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_0_22, (MR_Integer) 0)));
#line 705 "cse_detection.m"
          MR_Word check_hlds__cse_detection__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_9, (MR_Integer) 0)));
#line 707 "cse_detection.m"
          MR_Word check_hlds__cse_detection__Goals0_20;
#line 707 "cse_detection.m"
          MR_Word check_hlds__cse_detection__OldNewVars_34;

#line 706 "cse_detection.m"
          {
#line 706 "cse_detection.m"
            check_hlds__cse_detection__Context_19 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__cse_detection__GoalInfo_18);
          }
#line 708 "cse_detection.m"
          {
#line 708 "cse_detection.m"
            check_hlds__cse_detection__succeeded = check_hlds__cse_detection__find_similar_deconstruct_5_p_0(check_hlds__cse_detection__HoistedGoal_36, check_hlds__cse_detection__Goal0_9, check_hlds__cse_detection__Context_19, &check_hlds__cse_detection__OldNewVars_34, &check_hlds__cse_detection__Goals0_20);
          }
#line 707 "cse_detection.m"
          if (check_hlds__cse_detection__succeeded)
#line 711 "cse_detection.m"
            {
#line 711 "cse_detection.m"
              MR_Word check_hlds__cse_detection__LaterOldNewVars_21;

#line 711 "cse_detection.m"
              *check_hlds__cse_detection__Goals_10 = check_hlds__cse_detection__Goals0_20;
#line 712 "cse_detection.m"
              {
#line 712 "cse_detection.m"
                check_hlds__cse_detection__LaterOldNewVars_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "cse_detection.m"
                MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNewVars_21, 0) = ((MR_Box) (check_hlds__cse_detection__OldNewVars_34));
#line 712 "cse_detection.m"
                MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNewVars_21, 1) = ((MR_Box) (check_hlds__cse_detection__LaterOldNewVars0_16));
#line 712 "cse_detection.m"
              }
#line 713 "cse_detection.m"
              {
#line 713 "cse_detection.m"
                MR_Word base;
#line 713 "cse_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 713 "cse_detection.m"
                *check_hlds__cse_detection__STATE_VARIABLE_CseState_23 = base;
#line 713 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__HoistedGoal_36));
#line 713 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__FirstOldNewVars_15));
#line 713 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__cse_detection__LaterOldNewVars_21));
#line 713 "cse_detection.m"
              }
#line 711 "cse_detection.m"
            }
#line 707 "cse_detection.m"
          else
#line 716 "cse_detection.m"
            {
#line 716 "cse_detection.m"
              {
#line 716 "cse_detection.m"
                MR_Word base;
#line 716 "cse_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "cse_detection.m"
                *check_hlds__cse_detection__Goals_10 = base;
#line 716 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal0_9));
#line 716 "cse_detection.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 716 "cse_detection.m"
              }
#line 717 "cse_detection.m"
              *check_hlds__cse_detection__STATE_VARIABLE_CseState_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 716 "cse_detection.m"
            }
#line 704 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_25 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_24;
#line 704 "cse_detection.m"
        }
#line 698 "cse_detection.m"
        break;
#line 698 "cse_detection.m"
    }
#line 698 "cse_detection.m"
  }
#line 691 "cse_detection.m"
}

#line 656 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0_1(
#line 656 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 656 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 656 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 656 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 656 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 656 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 656 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 656 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7)
#line 656 "cse_detection.m"
{
#line 656 "cse_detection.m"
  {
#line 656 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 656 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv2_Goals_10;
#line 656 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23;
#line 656 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25;

#line 656 "cse_detection.m"
    {
#line 656 "cse_detection.m"
      check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv2_Goals_10, ((MR_Word) check_hlds__cse_detection__wrapper_arg_4), &check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23, ((MR_Word) check_hlds__cse_detection__wrapper_arg_6), &check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25);
    }
#line 656 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv2_Goals_10));
#line 656 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23));
#line 656 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_7 = ((MR_Box) (check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25));
#line 656 "cse_detection.m"
  }
#line 656 "cse_detection.m"
}

#line 648 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(
#line 648 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 648 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 648 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3,
#line 648 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_4,
#line 648 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 648 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 648 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7)
#line 648 "cse_detection.m"
{
#line 652 "cse_detection.m"
  {
#line 652 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 652 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 652 "cse_detection.m"
      {
#line 652 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 652 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5;
#line 652 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseState_4 = check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3;
#line 652 "cse_detection.m"
        check_hlds__cse_detection__succeeded = MR_TRUE;
#line 652 "cse_detection.m"
      }
#line 652 "cse_detection.m"
    else
#line 654 "cse_detection.m"
      {
#line 654 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Case0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 654 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Cases0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 654 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Case_20;
#line 654 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Cases_21;
#line 654 "cse_detection.m"
        MR_Word check_hlds__cse_detection__MainConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_15, (MR_Integer) 0)));
#line 654 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OtherConsIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_15, (MR_Integer) 1)));
#line 654 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_15, (MR_Integer) 2)));
#line 654 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_25;
#line 654 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34;
#line 654 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_35_35;
#line 654 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_48_48;
#line 656 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_34_34;
#line 656 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_35_35;
#line 659 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_26_26;
#line 659 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_27_27;
#line 659 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_28_28;

#line 656 "cse_detection.m"
        {
#line 656 "cse_detection.m"
          check_hlds__switch_detection__find_bind_var_9_p_0((MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0, (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0, check_hlds__cse_detection__HeadVar__2_2, (MR_Word) &check_hlds__cse_detection_scalar_common_2[7], check_hlds__cse_detection__Goal0_24, &check_hlds__cse_detection__Goal_25, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3)), &check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_34_34, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5)), &check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_35_35, &check_hlds__cse_detection__V_48_48);
        }
#line 656 "cse_detection.m"
        check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34 = ((MR_Word) check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_34_34);
#line 656 "cse_detection.m"
        check_hlds__cse_detection__STATE_VARIABLE_CseInfo_35_35 = ((MR_Word) check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_35_35);
#line 656 "cse_detection.m"
        check_hlds__cse_detection__succeeded = ((MR_Integer) 0 == check_hlds__cse_detection__V_48_48);
#line 654 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 654 "cse_detection.m"
          {
#line 659 "cse_detection.m"
            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 659 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 659 "cse_detection.m"
              {
#line 659 "cse_detection.m"
                check_hlds__cse_detection__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34, (MR_Integer) 0)));
#line 659 "cse_detection.m"
                check_hlds__cse_detection__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34, (MR_Integer) 1)));
#line 659 "cse_detection.m"
                check_hlds__cse_detection__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34, (MR_Integer) 2)));
#line 658 "cse_detection.m"
                {
#line 658 "cse_detection.m"
                  check_hlds__cse_detection__Case_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 658 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_20, 0) = ((MR_Box) (check_hlds__cse_detection__MainConsId_22));
#line 658 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_20, 1) = ((MR_Box) (check_hlds__cse_detection__OtherConsIds_23));
#line 658 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_20, 2) = ((MR_Box) (check_hlds__cse_detection__Goal_25));
#line 658 "cse_detection.m"
                }
#line 660 "cse_detection.m"
                {
#line 660 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(check_hlds__cse_detection__Cases0_16, check_hlds__cse_detection__HeadVar__2_2, check_hlds__cse_detection__STATE_VARIABLE_CseState_34_34, check_hlds__cse_detection__STATE_VARIABLE_CseState_4, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_35_35, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6, &check_hlds__cse_detection__Cases_21);
                }
#line 654 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 654 "cse_detection.m"
                  {
#line 654 "cse_detection.m"
                    {
#line 654 "cse_detection.m"
                      MR_Word base;
#line 654 "cse_detection.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "cse_detection.m"
                      *check_hlds__cse_detection__HeadVar__7_7 = base;
#line 654 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Case_20));
#line 654 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Cases_21));
#line 654 "cse_detection.m"
                    }
#line 654 "cse_detection.m"
                    check_hlds__cse_detection__succeeded = MR_TRUE;
#line 654 "cse_detection.m"
                  }
#line 659 "cse_detection.m"
              }
#line 654 "cse_detection.m"
          }
#line 654 "cse_detection.m"
      }
#line 652 "cse_detection.m"
    return check_hlds__cse_detection__succeeded;
#line 652 "cse_detection.m"
  }
#line 648 "cse_detection.m"
}

#line 631 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0_1(
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 631 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 631 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 631 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7)
#line 631 "cse_detection.m"
{
#line 631 "cse_detection.m"
  {
#line 631 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 631 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv2_Goals_10;
#line 631 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23;
#line 631 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25;

#line 631 "cse_detection.m"
    {
#line 631 "cse_detection.m"
      check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv2_Goals_10, ((MR_Word) check_hlds__cse_detection__wrapper_arg_4), &check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23, ((MR_Word) check_hlds__cse_detection__wrapper_arg_6), &check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25);
    }
#line 631 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv2_Goals_10));
#line 631 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23));
#line 631 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_7 = ((MR_Box) (check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25));
#line 631 "cse_detection.m"
  }
#line 631 "cse_detection.m"
}

#line 624 "cse_detection.m"
static MR_bool MR_CALL 
check_hlds__cse_detection__common_deconstruct_2_7_p_0(
#line 624 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 624 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 624 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3,
#line 624 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseState_4,
#line 624 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 624 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 624 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7)
#line 624 "cse_detection.m"
{
#line 628 "cse_detection.m"
  {
#line 628 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 628 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 628 "cse_detection.m"
      {
#line 628 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 628 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5;
#line 628 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseState_4 = check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3;
#line 628 "cse_detection.m"
        check_hlds__cse_detection__succeeded = MR_TRUE;
#line 628 "cse_detection.m"
      }
#line 628 "cse_detection.m"
    else
#line 630 "cse_detection.m"
      {
#line 630 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 630 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 630 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_20;
#line 630 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goals_21;
#line 630 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30;
#line 630 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_31;
#line 630 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_44_44;
#line 631 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_30;
#line 631 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_31;
#line 633 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_22_22;
#line 633 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_23_23;
#line 633 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_24_24;

#line 631 "cse_detection.m"
        {
#line 631 "cse_detection.m"
          check_hlds__switch_detection__find_bind_var_9_p_0((MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0, (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0, check_hlds__cse_detection__HeadVar__2_2, (MR_Word) &check_hlds__cse_detection_scalar_common_2[6], check_hlds__cse_detection__Goal0_15, &check_hlds__cse_detection__Goal_20, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseState_0_3)), &check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_30, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5)), &check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_31, &check_hlds__cse_detection__V_44_44);
        }
#line 631 "cse_detection.m"
        check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30 = ((MR_Word) check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_30);
#line 631 "cse_detection.m"
        check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_31 = ((MR_Word) check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_31);
#line 631 "cse_detection.m"
        check_hlds__cse_detection__succeeded = ((MR_Integer) 0 == check_hlds__cse_detection__V_44_44);
#line 630 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 630 "cse_detection.m"
          {
#line 633 "cse_detection.m"
            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 633 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 633 "cse_detection.m"
              {
#line 633 "cse_detection.m"
                check_hlds__cse_detection__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30, (MR_Integer) 0)));
#line 633 "cse_detection.m"
                check_hlds__cse_detection__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30, (MR_Integer) 1)));
#line 633 "cse_detection.m"
                check_hlds__cse_detection__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30, (MR_Integer) 2)));
#line 634 "cse_detection.m"
                {
#line 634 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = check_hlds__cse_detection__common_deconstruct_2_7_p_0(check_hlds__cse_detection__Goals0_16, check_hlds__cse_detection__HeadVar__2_2, check_hlds__cse_detection__STATE_VARIABLE_CseState_30_30, check_hlds__cse_detection__STATE_VARIABLE_CseState_4, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_31, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6, &check_hlds__cse_detection__Goals_21);
                }
#line 630 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 630 "cse_detection.m"
                  {
#line 630 "cse_detection.m"
                    {
#line 630 "cse_detection.m"
                      MR_Word base;
#line 630 "cse_detection.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "cse_detection.m"
                      *check_hlds__cse_detection__HeadVar__7_7 = base;
#line 630 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal_20));
#line 630 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_21));
#line 630 "cse_detection.m"
                    }
#line 630 "cse_detection.m"
                    check_hlds__cse_detection__succeeded = MR_TRUE;
#line 630 "cse_detection.m"
                  }
#line 633 "cse_detection.m"
              }
#line 630 "cse_detection.m"
          }
#line 630 "cse_detection.m"
      }
#line 628 "cse_detection.m"
    return check_hlds__cse_detection__succeeded;
#line 628 "cse_detection.m"
  }
#line 624 "cse_detection.m"
}

#line 586 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_arms_10_p_0(
#line 586 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cond0_11,
#line 586 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Cond_12,
#line 586 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Then0_13,
#line 586 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Then_14,
#line 586 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Else0_15,
#line 586 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Else_16,
#line 586 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25,
#line 586 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26,
#line 586 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_18,
#line 586 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_19)
#line 586 "cse_detection.m"
{
#line 591 "cse_detection.m"
  {
#line 591 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 591 "cse_detection.m"
    MR_Word check_hlds__cse_detection__InstMap1_20;
#line 591 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Redo1_21;
#line 591 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Redo2_22;
#line 591 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Redo3_23;
#line 591 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Redo12_24;
#line 591 "cse_detection.m"
    MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_27_27;
#line 591 "cse_detection.m"
    MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_28_28;
#line 591 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalExpr0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Cond0_11, (MR_Integer) 0)));
#line 591 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Cond0_11, (MR_Integer) 1)));
#line 591 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalExpr_40;
#line 591 "cse_detection.m"
    MR_Word check_hlds__cse_detection__InstMapDelta_41;
#line 315 "cse_detection.m"
    MR_Word check_hlds__cse_detection___InstMap_50;
#line 315 "cse_detection.m"
    MR_Word check_hlds__cse_detection___InstMap_59;

#line 328 "cse_detection.m"
    {
#line 328 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(check_hlds__cse_detection__GoalExpr0_38, &check_hlds__cse_detection__GoalExpr_40, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_25, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_27_27, check_hlds__cse_detection__GoalInfo_39, check_hlds__cse_detection__InstMap0_18, &check_hlds__cse_detection__Redo1_21);
    }
#line 330 "cse_detection.m"
    {
#line 330 "cse_detection.m"
      MR_Word base;
#line 330 "cse_detection.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 330 "cse_detection.m"
      *check_hlds__cse_detection__Cond_12 = base;
#line 330 "cse_detection.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__cse_detection__GoalExpr_40));
#line 330 "cse_detection.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_39));
#line 330 "cse_detection.m"
    }
#line 331 "cse_detection.m"
    {
#line 331 "cse_detection.m"
      check_hlds__cse_detection__InstMapDelta_41 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__cse_detection__GoalInfo_39);
    }
#line 332 "cse_detection.m"
    {
#line 332 "cse_detection.m"
      hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__cse_detection__InstMap0_18, check_hlds__cse_detection__InstMapDelta_41, &check_hlds__cse_detection__InstMap1_20);
    }
#line 315 "cse_detection.m"
    {
#line 315 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Then0_13, check_hlds__cse_detection__Then_14, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_27_27, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_28_28, check_hlds__cse_detection__InstMap1_20, &check_hlds__cse_detection___InstMap_50, &check_hlds__cse_detection__Redo2_22);
    }
#line 315 "cse_detection.m"
    {
#line 315 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Else0_15, check_hlds__cse_detection__Else_16, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_28_28, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26, check_hlds__cse_detection__InstMap0_18, &check_hlds__cse_detection___InstMap_59, &check_hlds__cse_detection__Redo3_23);
    }
#line 596 "cse_detection.m"
    {
#line 596 "cse_detection.m"
      mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_21, check_hlds__cse_detection__Redo2_22, &check_hlds__cse_detection__Redo12_24);
    }
#line 597 "cse_detection.m"
    {
#line 597 "cse_detection.m"
      mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo12_24, check_hlds__cse_detection__Redo3_23, check_hlds__cse_detection__Redo_19);
    }
#line 591 "cse_detection.m"
  }
#line 586 "cse_detection.m"
}

#line 631 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0_2(
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 631 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 631 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 631 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7)
#line 631 "cse_detection.m"
{
#line 631 "cse_detection.m"
  {
#line 631 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 631 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv7_Goals_10;
#line 631 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv6_STATE_VARIABLE_CseState_23;
#line 631 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv5_STATE_VARIABLE_CseInfo_25;

#line 631 "cse_detection.m"
    {
#line 631 "cse_detection.m"
      check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv7_Goals_10, ((MR_Word) check_hlds__cse_detection__wrapper_arg_4), &check_hlds__cse_detection__conv6_STATE_VARIABLE_CseState_23, ((MR_Word) check_hlds__cse_detection__wrapper_arg_6), &check_hlds__cse_detection__conv5_STATE_VARIABLE_CseInfo_25);
    }
#line 631 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv7_Goals_10));
#line 631 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__cse_detection__conv6_STATE_VARIABLE_CseState_23));
#line 631 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_7 = ((MR_Box) (check_hlds__cse_detection__conv5_STATE_VARIABLE_CseInfo_25));
#line 631 "cse_detection.m"
  }
#line 631 "cse_detection.m"
}

#line 631 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0_1(
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__closure_arg,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_1,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_2,
#line 631 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_3,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_4,
#line 631 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_5,
#line 631 "cse_detection.m"
  MR_Box check_hlds__cse_detection__wrapper_arg_6,
#line 631 "cse_detection.m"
  MR_Box * check_hlds__cse_detection__wrapper_arg_7)
#line 631 "cse_detection.m"
{
#line 631 "cse_detection.m"
  {
#line 631 "cse_detection.m"
    MR_Box check_hlds__cse_detection__closure = check_hlds__cse_detection__closure_arg;
#line 631 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv2_Goals_10;
#line 631 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23;
#line 631 "cse_detection.m"
    MR_Word check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25;

#line 631 "cse_detection.m"
    {
#line 631 "cse_detection.m"
      check_hlds__cse_detection__find_bind_var_for_cse_in_deconstruct_7_p_0(((MR_Word) check_hlds__cse_detection__wrapper_arg_1), ((MR_Word) check_hlds__cse_detection__wrapper_arg_2), &check_hlds__cse_detection__conv2_Goals_10, ((MR_Word) check_hlds__cse_detection__wrapper_arg_4), &check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23, ((MR_Word) check_hlds__cse_detection__wrapper_arg_6), &check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25);
    }
#line 631 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__cse_detection__conv2_Goals_10));
#line 631 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__cse_detection__conv1_STATE_VARIABLE_CseState_23));
#line 631 "cse_detection.m"
    *check_hlds__cse_detection__wrapper_arg_7 = ((MR_Box) (check_hlds__cse_detection__conv0_STATE_VARIABLE_CseInfo_25));
#line 631 "cse_detection.m"
  }
#line 631 "cse_detection.m"
}

#line 555 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_ite_11_p_0(
#line 555 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 555 "cse_detection.m"
  MR_Word check_hlds__cse_detection__IfVars_2,
#line 555 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cond0_3,
#line 555 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Then0_4,
#line 555 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Else0_5,
#line 555 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo_6,
#line 555 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap_7,
#line 555 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8,
#line 555 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_9,
#line 555 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_10,
#line 555 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__11_11)
#line 555 "cse_detection.m"
{
#line 561 "cse_detection.m"
  while (MR_TRUE)
#line 561 "cse_detection.m"
    {
#line 561 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 561 "cse_detection.m"
      {
#line 561 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;

#line 561 "cse_detection.m"
        if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 561 "cse_detection.m"
          {
#line 561 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Cond_20;
#line 561 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Then_21;
#line 561 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Else_22;

#line 562 "cse_detection.m"
            {
#line 562 "cse_detection.m"
              check_hlds__cse_detection__detect_cse_in_ite_arms_10_p_0(check_hlds__cse_detection__Cond0_3, &check_hlds__cse_detection__Cond_20, check_hlds__cse_detection__Then0_4, &check_hlds__cse_detection__Then_21, check_hlds__cse_detection__Else0_5, &check_hlds__cse_detection__Else_22, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_9, check_hlds__cse_detection__InstMap_7, check_hlds__cse_detection__Redo_10);
            }
#line 561 "cse_detection.m"
            {
#line 561 "cse_detection.m"
              MR_Word base;
#line 561 "cse_detection.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 561 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__11_11 = base;
#line 561 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 561 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__IfVars_2));
#line 561 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__Cond_20));
#line 561 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__cse_detection__Then_21));
#line 561 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__cse_detection__Else_22));
#line 561 "cse_detection.m"
            }
#line 561 "cse_detection.m"
          }
#line 561 "cse_detection.m"
        else
#line 565 "cse_detection.m"
          {
#line 565 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 565 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Vars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 565 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ModuleInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 3)));
#line 565 "cse_detection.m"
            MR_Word check_hlds__cse_detection__VarInst0_38;
#line 566 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 0)));
#line 566 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 1)));
#line 566 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8, (MR_Integer) 2)));
#line 568 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Unify_39;
#line 568 "cse_detection.m"
            MR_Word check_hlds__cse_detection__FirstOldNew_40;
#line 568 "cse_detection.m"
            MR_Word check_hlds__cse_detection__LaterOldNew_41;
#line 568 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Then_43;
#line 568 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Else_44;
#line 568 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_49_49;
#line 571 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeCtorInfo_42_112;
#line 571 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeCtorInfo_43_113;
#line 571 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeCtorInfo_42_156;
#line 571 "cse_detection.m"
            MR_Word check_hlds__cse_detection__TypeCtorInfo_43_157;
#line 571 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_51_51;
#line 571 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_75_75;
#line 571 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals0_86;
#line 571 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_99_99;
#line 571 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100;
#line 571 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_101;
#line 571 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_102_102;
#line 571 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_114_114;
#line 571 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goal0_129;
#line 571 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals_135;
#line 571 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_143_143;
#line 571 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144;
#line 571 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_146_146;
#line 571 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_158_158;
#line 631 "cse_detection.m"
            MR_Box check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_100;
#line 631 "cse_detection.m"
            MR_Box check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_101;
#line 633 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_92_92;
#line 633 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_93_93;
#line 633 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_94_94;
#line 629 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals0_130;
#line 631 "cse_detection.m"
            MR_Box check_hlds__cse_detection__conv9_STATE_VARIABLE_CseState_30_144;
#line 631 "cse_detection.m"
            MR_Box check_hlds__cse_detection__conv8_STATE_VARIABLE_CseInfo_49_49;
#line 622 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_73_73;
#line 622 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_74_74;
#line 630 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals_91;

#line 567 "cse_detection.m"
            {
#line 567 "cse_detection.m"
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__cse_detection__InstMap_7, check_hlds__cse_detection__Var_26, &check_hlds__cse_detection__VarInst0_38);
            }
#line 571 "cse_detection.m"
            {
#line 571 "cse_detection.m"
              check_hlds__cse_detection__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(check_hlds__cse_detection__ModuleInfo_37, check_hlds__cse_detection__VarInst0_38);
            }
#line 571 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 571 "cse_detection.m"
              {
#line 572 "cse_detection.m"
                check_hlds__cse_detection__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "cse_detection.m"
                check_hlds__cse_detection__V_75_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 572 "cse_detection.m"
                {
#line 572 "cse_detection.m"
                  check_hlds__cse_detection__Goals0_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals0_86, 0) = ((MR_Box) (check_hlds__cse_detection__Else0_5));
#line 572 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals0_86, 1) = ((MR_Box) (check_hlds__cse_detection__V_51_51));
#line 572 "cse_detection.m"
                }
#line 631 "cse_detection.m"
                check_hlds__cse_detection__V_99_99 = (MR_Word) &check_hlds__cse_detection_scalar_common_2[4];
#line 632 "cse_detection.m"
                check_hlds__cse_detection__V_102_102 = (MR_Integer) 0;
#line 4306 "check_hlds.cse_detection.c"
                check_hlds__cse_detection__TypeCtorInfo_42_112 = (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0;
#line 4308 "check_hlds.cse_detection.c"
                check_hlds__cse_detection__TypeCtorInfo_43_113 = (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0;
#line 631 "cse_detection.m"
                {
#line 631 "cse_detection.m"
                  check_hlds__switch_detection__find_bind_var_9_p_0(check_hlds__cse_detection__TypeCtorInfo_42_112, check_hlds__cse_detection__TypeCtorInfo_43_113, check_hlds__cse_detection__Var_26, check_hlds__cse_detection__V_99_99, check_hlds__cse_detection__Then0_4, &check_hlds__cse_detection__Then_43, ((MR_Box) (check_hlds__cse_detection__V_75_75)), &check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_100, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_8)), &check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_101, &check_hlds__cse_detection__V_114_114);
                }
#line 631 "cse_detection.m"
                check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100 = ((MR_Word) check_hlds__cse_detection__conv4_STATE_VARIABLE_CseState_30_100);
#line 631 "cse_detection.m"
                check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_101 = ((MR_Word) check_hlds__cse_detection__conv3_STATE_VARIABLE_CseInfo_31_101);
#line 631 "cse_detection.m"
                check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_102_102 == check_hlds__cse_detection__V_114_114);
#line 571 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 571 "cse_detection.m"
                  {
#line 633 "cse_detection.m"
                    check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100)) == (MR_mktag((MR_Integer) 1)));
#line 633 "cse_detection.m"
                    if (check_hlds__cse_detection__succeeded)
#line 633 "cse_detection.m"
                      {
#line 633 "cse_detection.m"
                        check_hlds__cse_detection__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100, (MR_Integer) 0)));
#line 633 "cse_detection.m"
                        check_hlds__cse_detection__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100, (MR_Integer) 1)));
#line 633 "cse_detection.m"
                        check_hlds__cse_detection__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100, (MR_Integer) 2)));
#line 629 "cse_detection.m"
                        check_hlds__cse_detection__Goal0_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals0_86, (MR_Integer) 0)));
#line 629 "cse_detection.m"
                        check_hlds__cse_detection__Goals0_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals0_86, (MR_Integer) 1)));
#line 631 "cse_detection.m"
                        check_hlds__cse_detection__V_143_143 = (MR_Word) &check_hlds__cse_detection_scalar_common_2[5];
#line 632 "cse_detection.m"
                        check_hlds__cse_detection__V_146_146 = (MR_Integer) 0;
#line 4345 "check_hlds.cse_detection.c"
                        check_hlds__cse_detection__TypeCtorInfo_42_156 = (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_state_0;
#line 4347 "check_hlds.cse_detection.c"
                        check_hlds__cse_detection__TypeCtorInfo_43_157 = (MR_Word) &check_hlds__cse_detection__check_hlds__cse_detection__type_ctor_info_cse_info_0;
#line 631 "cse_detection.m"
                        {
#line 631 "cse_detection.m"
                          check_hlds__switch_detection__find_bind_var_9_p_0(check_hlds__cse_detection__TypeCtorInfo_42_156, check_hlds__cse_detection__TypeCtorInfo_43_157, check_hlds__cse_detection__Var_26, check_hlds__cse_detection__V_143_143, check_hlds__cse_detection__Goal0_129, &check_hlds__cse_detection__Else_44, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseState_30_100)), &check_hlds__cse_detection__conv9_STATE_VARIABLE_CseState_30_144, ((MR_Box) (check_hlds__cse_detection__STATE_VARIABLE_CseInfo_31_101)), &check_hlds__cse_detection__conv8_STATE_VARIABLE_CseInfo_49_49, &check_hlds__cse_detection__V_158_158);
                        }
#line 631 "cse_detection.m"
                        check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144 = ((MR_Word) check_hlds__cse_detection__conv9_STATE_VARIABLE_CseState_30_144);
#line 631 "cse_detection.m"
                        check_hlds__cse_detection__STATE_VARIABLE_CseInfo_49_49 = ((MR_Word) check_hlds__cse_detection__conv8_STATE_VARIABLE_CseInfo_49_49);
#line 631 "cse_detection.m"
                        check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_146_146 == check_hlds__cse_detection__V_158_158);
#line 571 "cse_detection.m"
                        if (check_hlds__cse_detection__succeeded)
#line 571 "cse_detection.m"
                          {
#line 633 "cse_detection.m"
                            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144)) == (MR_mktag((MR_Integer) 1)));
#line 633 "cse_detection.m"
                            if (check_hlds__cse_detection__succeeded)
#line 633 "cse_detection.m"
                              {
#line 633 "cse_detection.m"
                                check_hlds__cse_detection__Unify_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144, (MR_Integer) 0)));
#line 633 "cse_detection.m"
                                check_hlds__cse_detection__FirstOldNew_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144, (MR_Integer) 1)));
#line 633 "cse_detection.m"
                                check_hlds__cse_detection__LaterOldNew_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__STATE_VARIABLE_CseState_30_144, (MR_Integer) 2)));
#line 628 "cse_detection.m"
                                check_hlds__cse_detection__Goals_135 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 622 "cse_detection.m"
                                check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__LaterOldNew_41)) == (MR_mktag((MR_Integer) 1)));
#line 622 "cse_detection.m"
                                if (check_hlds__cse_detection__succeeded)
#line 622 "cse_detection.m"
                                  {
#line 622 "cse_detection.m"
                                    check_hlds__cse_detection__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_41, (MR_Integer) 0)));
#line 622 "cse_detection.m"
                                    check_hlds__cse_detection__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_41, (MR_Integer) 1)));
#line 630 "cse_detection.m"
                                    {
#line 630 "cse_detection.m"
                                      check_hlds__cse_detection__Goals_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "cse_detection.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals_91, 0) = ((MR_Box) (check_hlds__cse_detection__Else_44));
#line 630 "cse_detection.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__Goals_91, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_135));
#line 630 "cse_detection.m"
                                    }
#line 574 "cse_detection.m"
                                    check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__Goals_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 622 "cse_detection.m"
                                  }
#line 633 "cse_detection.m"
                              }
#line 571 "cse_detection.m"
                          }
#line 633 "cse_detection.m"
                      }
#line 571 "cse_detection.m"
                  }
#line 571 "cse_detection.m"
              }
#line 568 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 577 "cse_detection.m"
              {
#line 577 "cse_detection.m"
                MR_Word check_hlds__cse_detection__IfGoal_45;
#line 577 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_55_55;
#line 577 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_57_57;
#line 577 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_58_58;

#line 576 "cse_detection.m"
                {
#line 576 "cse_detection.m"
                  check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(check_hlds__cse_detection__Unify_39, check_hlds__cse_detection__FirstOldNew_40, check_hlds__cse_detection__LaterOldNew_41, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_49_49, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_9);
                }
#line 578 "cse_detection.m"
                {
#line 578 "cse_detection.m"
                  check_hlds__cse_detection__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 578 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 578 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 1) = ((MR_Box) (check_hlds__cse_detection__IfVars_2));
#line 578 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 2) = ((MR_Box) (check_hlds__cse_detection__Cond0_3));
#line 578 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 3) = ((MR_Box) (check_hlds__cse_detection__Then_43));
#line 578 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_55_55, 4) = ((MR_Box) (check_hlds__cse_detection__Else_44));
#line 578 "cse_detection.m"
                }
#line 578 "cse_detection.m"
                {
#line 578 "cse_detection.m"
                  check_hlds__cse_detection__IfGoal_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 578 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__IfGoal_45, 0) = ((MR_Box) (check_hlds__cse_detection__V_55_55));
#line 578 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__IfGoal_45, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_6));
#line 578 "cse_detection.m"
                }
#line 579 "cse_detection.m"
                {
#line 579 "cse_detection.m"
                  check_hlds__cse_detection__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, 0) = ((MR_Box) (check_hlds__cse_detection__IfGoal_45));
#line 579 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 579 "cse_detection.m"
                }
#line 579 "cse_detection.m"
                {
#line 579 "cse_detection.m"
                  check_hlds__cse_detection__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_57_57, 0) = ((MR_Box) (check_hlds__cse_detection__Unify_39));
#line 579 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_57_57, 1) = ((MR_Box) (check_hlds__cse_detection__V_58_58));
#line 579 "cse_detection.m"
                }
#line 579 "cse_detection.m"
                {
#line 579 "cse_detection.m"
                  MR_Word base;
#line 579 "cse_detection.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 579 "cse_detection.m"
                  *check_hlds__cse_detection__HeadVar__11_11 = base;
#line 579 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 579 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 579 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__V_57_57));
#line 579 "cse_detection.m"
                }
#line 580 "cse_detection.m"
                *check_hlds__cse_detection__Redo_10 = (MR_Integer) 1;
#line 577 "cse_detection.m"
              }
#line 568 "cse_detection.m"
            else
#line 582 "cse_detection.m"
              {
#line 582 "cse_detection.m"
                /* direct tailcall eliminated */
#line 582 "cse_detection.m"
                {
#line 582 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__HeadVar__1__tmp_copy_1 = check_hlds__cse_detection__Vars_27;

#line 582 "cse_detection.m"
                  check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__HeadVar__1__tmp_copy_1;
#line 582 "cse_detection.m"
                }
#line 582 "cse_detection.m"
                continue;
#line 582 "cse_detection.m"
              }
#line 565 "cse_detection.m"
          }
#line 561 "cse_detection.m"
      }
#line 561 "cse_detection.m"
      break;
#line 561 "cse_detection.m"
    }
#line 555 "cse_detection.m"
}

#line 543 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_arms_6_p_0(
#line 543 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 543 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 543 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 543 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 543 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_5,
#line 543 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6)
#line 543 "cse_detection.m"
{
#line 546 "cse_detection.m"
  {
#line 546 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 546 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 546 "cse_detection.m"
      {
#line 546 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 546 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__6_6 = (MR_Integer) 0;
#line 546 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3;
#line 546 "cse_detection.m"
      }
#line 546 "cse_detection.m"
    else
#line 548 "cse_detection.m"
      {
#line 548 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Case0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 548 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 548 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Case_13;
#line 548 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Cases_14;
#line 548 "cse_detection.m"
        MR_Word check_hlds__cse_detection__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_11, (MR_Integer) 0)));
#line 548 "cse_detection.m"
        MR_Word check_hlds__cse_detection__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_11, (MR_Integer) 1)));
#line 548 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case0_11, (MR_Integer) 2)));
#line 548 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_21;
#line 548 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo1_22;
#line 548 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo2_23;
#line 548 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26_26;
#line 315 "cse_detection.m"
        MR_Word check_hlds__cse_detection___InstMap_35;

#line 315 "cse_detection.m"
        {
#line 315 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Goal0_20, &check_hlds__cse_detection__Goal_21, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26_26, check_hlds__cse_detection__InstMap0_5, &check_hlds__cse_detection___InstMap_35, &check_hlds__cse_detection__Redo1_22);
        }
#line 551 "cse_detection.m"
        {
#line 551 "cse_detection.m"
          check_hlds__cse_detection__Case_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 551 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_13, 0) = ((MR_Box) (check_hlds__cse_detection__MainConsId_18));
#line 551 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_13, 1) = ((MR_Box) (check_hlds__cse_detection__OtherConsIds_19));
#line 551 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Case_13, 2) = ((MR_Box) (check_hlds__cse_detection__Goal_21));
#line 551 "cse_detection.m"
        }
#line 552 "cse_detection.m"
        {
#line 552 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_cases_arms_6_p_0(check_hlds__cse_detection__Cases0_12, &check_hlds__cse_detection__Cases_14, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_26_26, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4, check_hlds__cse_detection__InstMap0_5, &check_hlds__cse_detection__Redo2_23);
        }
#line 547 "cse_detection.m"
        {
#line 547 "cse_detection.m"
          MR_Word base;
#line 547 "cse_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 547 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__2_2 = base;
#line 547 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Case_13));
#line 547 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Cases_14));
#line 547 "cse_detection.m"
        }
#line 553 "cse_detection.m"
        {
#line 553 "cse_detection.m"
          mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_22, check_hlds__cse_detection__Redo2_23, check_hlds__cse_detection__HeadVar__6_6);
        }
#line 548 "cse_detection.m"
      }
#line 546 "cse_detection.m"
  }
#line 543 "cse_detection.m"
}

#line 514 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_cases_10_p_0(
#line 514 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 514 "cse_detection.m"
  MR_Word check_hlds__cse_detection__SwitchVar_2,
#line 514 "cse_detection.m"
  MR_Word check_hlds__cse_detection__CanFail_3,
#line 514 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Cases0_4,
#line 514 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__5_5,
#line 514 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_6,
#line 514 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7,
#line 514 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_8,
#line 514 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_9,
#line 514 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__10_10)
#line 514 "cse_detection.m"
{
#line 519 "cse_detection.m"
  while (MR_TRUE)
#line 519 "cse_detection.m"
    {
#line 519 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 519 "cse_detection.m"
      {
#line 519 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;

#line 519 "cse_detection.m"
        if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 519 "cse_detection.m"
          {
#line 519 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Cases_18;

#line 520 "cse_detection.m"
            {
#line 520 "cse_detection.m"
              check_hlds__cse_detection__detect_cse_in_cases_arms_6_p_0(check_hlds__cse_detection__Cases0_4, &check_hlds__cse_detection__Cases_18, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_8, check_hlds__cse_detection__InstMap0_6, check_hlds__cse_detection__Redo_9);
            }
#line 519 "cse_detection.m"
            {
#line 519 "cse_detection.m"
              MR_Word base;
#line 519 "cse_detection.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 519 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__10_10 = base;
#line 519 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 519 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__SwitchVar_2));
#line 519 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__CanFail_3));
#line 519 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__cse_detection__Cases_18));
#line 519 "cse_detection.m"
            }
#line 519 "cse_detection.m"
          }
#line 519 "cse_detection.m"
        else
#line 522 "cse_detection.m"
          {
#line 522 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 522 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 523 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Unify_34;
#line 523 "cse_detection.m"
            MR_Word check_hlds__cse_detection__FirstOldNew_35;
#line 523 "cse_detection.m"
            MR_Word check_hlds__cse_detection__LaterOldNew_36;
#line 523 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Cases_37;
#line 523 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_40_40;
#line 524 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ModuleInfo_32;
#line 524 "cse_detection.m"
            MR_Word check_hlds__cse_detection__VarInst0_33;
#line 524 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_64_64;
#line 524 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_65_65;
#line 525 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_49_49;
#line 525 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_50_50;
#line 525 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_51_51;
#line 646 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_62_62;
#line 646 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_63_63;

#line 524 "cse_detection.m"
            {
#line 524 "cse_detection.m"
              check_hlds__cse_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__cse_detection_scalar_common_1[0], ((MR_Box) (check_hlds__cse_detection__Var_22)), ((MR_Box) (check_hlds__cse_detection__SwitchVar_2)));
            }
#line 524 "cse_detection.m"
            check_hlds__cse_detection__succeeded = !(check_hlds__cse_detection__succeeded);
#line 524 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 524 "cse_detection.m"
              {
#line 525 "cse_detection.m"
                check_hlds__cse_detection__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 0)));
#line 525 "cse_detection.m"
                check_hlds__cse_detection__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 1)));
#line 525 "cse_detection.m"
                check_hlds__cse_detection__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 2)));
#line 525 "cse_detection.m"
                check_hlds__cse_detection__ModuleInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, (MR_Integer) 3)));
#line 526 "cse_detection.m"
                {
#line 526 "cse_detection.m"
                  hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__cse_detection__InstMap0_6, check_hlds__cse_detection__Var_22, &check_hlds__cse_detection__VarInst0_33);
                }
#line 529 "cse_detection.m"
                {
#line 529 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(check_hlds__cse_detection__ModuleInfo_32, check_hlds__cse_detection__VarInst0_33);
                }
#line 524 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 524 "cse_detection.m"
                  {
#line 644 "cse_detection.m"
                    check_hlds__cse_detection__V_64_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "cse_detection.m"
                    {
#line 644 "cse_detection.m"
                      check_hlds__cse_detection__succeeded = check_hlds__cse_detection__common_deconstruct_cases_2_7_p_0(check_hlds__cse_detection__Cases0_4, check_hlds__cse_detection__Var_22, check_hlds__cse_detection__V_64_64, &check_hlds__cse_detection__V_65_65, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_7, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_40_40, &check_hlds__cse_detection__Cases_37);
                    }
#line 524 "cse_detection.m"
                    if (check_hlds__cse_detection__succeeded)
#line 524 "cse_detection.m"
                      {
#line 645 "cse_detection.m"
                        check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_65_65)) == (MR_mktag((MR_Integer) 1)));
#line 645 "cse_detection.m"
                        if (check_hlds__cse_detection__succeeded)
#line 645 "cse_detection.m"
                          {
#line 645 "cse_detection.m"
                            check_hlds__cse_detection__Unify_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_65_65, (MR_Integer) 0)));
#line 645 "cse_detection.m"
                            check_hlds__cse_detection__FirstOldNew_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_65_65, (MR_Integer) 1)));
#line 645 "cse_detection.m"
                            check_hlds__cse_detection__LaterOldNew_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_65_65, (MR_Integer) 2)));
#line 646 "cse_detection.m"
                            check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__LaterOldNew_36)) == (MR_mktag((MR_Integer) 1)));
#line 646 "cse_detection.m"
                            if (check_hlds__cse_detection__succeeded)
#line 646 "cse_detection.m"
                              {
#line 646 "cse_detection.m"
                                check_hlds__cse_detection__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_36, (MR_Integer) 0)));
#line 646 "cse_detection.m"
                                check_hlds__cse_detection__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_36, (MR_Integer) 1)));
#line 646 "cse_detection.m"
                              }
#line 645 "cse_detection.m"
                          }
#line 524 "cse_detection.m"
                      }
#line 524 "cse_detection.m"
                  }
#line 524 "cse_detection.m"
              }
#line 523 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 534 "cse_detection.m"
              {
#line 534 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_43_43;
#line 534 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_44_44;
#line 534 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_45_45;
#line 534 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_46_46;

#line 533 "cse_detection.m"
                {
#line 533 "cse_detection.m"
                  check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(check_hlds__cse_detection__Unify_34, check_hlds__cse_detection__FirstOldNew_35, check_hlds__cse_detection__LaterOldNew_36, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_40_40, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_8);
                }
#line 536 "cse_detection.m"
                {
#line 536 "cse_detection.m"
                  check_hlds__cse_detection__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 536 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 536 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_46_46, 1) = ((MR_Box) (check_hlds__cse_detection__SwitchVar_2));
#line 536 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_46_46, 2) = ((MR_Box) (check_hlds__cse_detection__CanFail_3));
#line 536 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_46_46, 3) = ((MR_Box) (check_hlds__cse_detection__Cases_37));
#line 536 "cse_detection.m"
                }
#line 536 "cse_detection.m"
                {
#line 536 "cse_detection.m"
                  check_hlds__cse_detection__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 536 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_45_45, 0) = ((MR_Box) (check_hlds__cse_detection__V_46_46));
#line 536 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_45_45, 1) = ((MR_Box) (check_hlds__cse_detection__HeadVar__5_5));
#line 536 "cse_detection.m"
                }
#line 536 "cse_detection.m"
                {
#line 536 "cse_detection.m"
                  check_hlds__cse_detection__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 536 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_44_44, 0) = ((MR_Box) (check_hlds__cse_detection__V_45_45));
#line 536 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 536 "cse_detection.m"
                }
#line 536 "cse_detection.m"
                {
#line 536 "cse_detection.m"
                  check_hlds__cse_detection__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 536 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_43_43, 0) = ((MR_Box) (check_hlds__cse_detection__Unify_34));
#line 536 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_43_43, 1) = ((MR_Box) (check_hlds__cse_detection__V_44_44));
#line 536 "cse_detection.m"
                }
#line 535 "cse_detection.m"
                {
#line 535 "cse_detection.m"
                  MR_Word base;
#line 535 "cse_detection.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 535 "cse_detection.m"
                  *check_hlds__cse_detection__HeadVar__10_10 = base;
#line 535 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 535 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 535 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__V_43_43));
#line 535 "cse_detection.m"
                }
#line 537 "cse_detection.m"
                *check_hlds__cse_detection__Redo_9 = (MR_Integer) 1;
#line 534 "cse_detection.m"
              }
#line 523 "cse_detection.m"
            else
#line 539 "cse_detection.m"
              {
#line 539 "cse_detection.m"
                /* direct tailcall eliminated */
#line 539 "cse_detection.m"
                {
#line 539 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__HeadVar__1__tmp_copy_1 = check_hlds__cse_detection__Vars_23;

#line 539 "cse_detection.m"
                  check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__HeadVar__1__tmp_copy_1;
#line 539 "cse_detection.m"
                }
#line 539 "cse_detection.m"
                continue;
#line 539 "cse_detection.m"
              }
#line 522 "cse_detection.m"
          }
#line 519 "cse_detection.m"
      }
#line 519 "cse_detection.m"
      break;
#line 519 "cse_detection.m"
    }
#line 514 "cse_detection.m"
}

#line 503 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(
#line 503 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 503 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 503 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 503 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 503 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_5,
#line 503 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__6_6)
#line 503 "cse_detection.m"
{
#line 507 "cse_detection.m"
  {
#line 507 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 507 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 507 "cse_detection.m"
      {
#line 507 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 507 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__6_6 = (MR_Integer) 0;
#line 507 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3;
#line 507 "cse_detection.m"
      }
#line 507 "cse_detection.m"
    else
#line 509 "cse_detection.m"
      {
#line 509 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 509 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 509 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_13;
#line 509 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goals_14;
#line 509 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo1_18;
#line 509 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo2_19;
#line 509 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_22_22;
#line 315 "cse_detection.m"
        MR_Word check_hlds__cse_detection___InstMap_31;

#line 315 "cse_detection.m"
        {
#line 315 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Goal0_11, &check_hlds__cse_detection__Goal_13, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_22_22, check_hlds__cse_detection__InstMap0_5, &check_hlds__cse_detection___InstMap_31, &check_hlds__cse_detection__Redo1_18);
        }
#line 511 "cse_detection.m"
        {
#line 511 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(check_hlds__cse_detection__Goals0_12, &check_hlds__cse_detection__Goals_14, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_22_22, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4, check_hlds__cse_detection__InstMap0_5, &check_hlds__cse_detection__Redo2_19);
        }
#line 508 "cse_detection.m"
        {
#line 508 "cse_detection.m"
          MR_Word base;
#line 508 "cse_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "cse_detection.m"
          *check_hlds__cse_detection__HeadVar__2_2 = base;
#line 508 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal_13));
#line 508 "cse_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_14));
#line 508 "cse_detection.m"
        }
#line 512 "cse_detection.m"
        {
#line 512 "cse_detection.m"
          mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_18, check_hlds__cse_detection__Redo2_19, check_hlds__cse_detection__HeadVar__6_6);
        }
#line 509 "cse_detection.m"
      }
#line 507 "cse_detection.m"
  }
#line 503 "cse_detection.m"
}

#line 476 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_disj_8_p_0(
#line 476 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 476 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goals0_2,
#line 476 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo0_3,
#line 476 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__4_4,
#line 476 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5,
#line 476 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6,
#line 476 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_7,
#line 476 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__8_8)
#line 476 "cse_detection.m"
{
#line 480 "cse_detection.m"
  while (MR_TRUE)
#line 480 "cse_detection.m"
    {
#line 480 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 480 "cse_detection.m"
      {
#line 480 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;

#line 480 "cse_detection.m"
        if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 480 "cse_detection.m"
          {
#line 480 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals_14;

#line 481 "cse_detection.m"
            {
#line 481 "cse_detection.m"
              check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(check_hlds__cse_detection__Goals0_2, &check_hlds__cse_detection__Goals_14, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6, check_hlds__cse_detection__HeadVar__4_4, check_hlds__cse_detection__Redo_7);
            }
#line 480 "cse_detection.m"
            {
#line 480 "cse_detection.m"
              MR_Word base;
#line 480 "cse_detection.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__8_8 = base;
#line 480 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 480 "cse_detection.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_14));
#line 480 "cse_detection.m"
            }
#line 480 "cse_detection.m"
          }
#line 480 "cse_detection.m"
        else
#line 483 "cse_detection.m"
          {
#line 483 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 483 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 483 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ModuleInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 3)));
#line 483 "cse_detection.m"
            MR_Word check_hlds__cse_detection__VarInst0_27;
#line 484 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 0)));
#line 484 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 1)));
#line 484 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, (MR_Integer) 2)));
#line 486 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Unify_28;
#line 486 "cse_detection.m"
            MR_Word check_hlds__cse_detection__FirstOldNew_29;
#line 486 "cse_detection.m"
            MR_Word check_hlds__cse_detection__LaterOldNew_30;
#line 486 "cse_detection.m"
            MR_Word check_hlds__cse_detection__Goals_31;
#line 486 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_34_34;
#line 489 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_57_57;
#line 489 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_58_58;
#line 622 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_55_55;
#line 622 "cse_detection.m"
            MR_Word check_hlds__cse_detection__V_56_56;

#line 485 "cse_detection.m"
            {
#line 485 "cse_detection.m"
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__cse_detection__HeadVar__4_4, check_hlds__cse_detection__Var_18, &check_hlds__cse_detection__VarInst0_27);
            }
#line 489 "cse_detection.m"
            {
#line 489 "cse_detection.m"
              check_hlds__cse_detection__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(check_hlds__cse_detection__ModuleInfo_26, check_hlds__cse_detection__VarInst0_27);
            }
#line 489 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 489 "cse_detection.m"
              {
#line 620 "cse_detection.m"
                check_hlds__cse_detection__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "cse_detection.m"
                {
#line 620 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = check_hlds__cse_detection__common_deconstruct_2_7_p_0(check_hlds__cse_detection__Goals0_2, check_hlds__cse_detection__Var_18, check_hlds__cse_detection__V_57_57, &check_hlds__cse_detection__V_58_58, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_5, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_34_34, &check_hlds__cse_detection__Goals_31);
                }
#line 489 "cse_detection.m"
                if (check_hlds__cse_detection__succeeded)
#line 489 "cse_detection.m"
                  {
#line 621 "cse_detection.m"
                    check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__V_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 621 "cse_detection.m"
                    if (check_hlds__cse_detection__succeeded)
#line 621 "cse_detection.m"
                      {
#line 621 "cse_detection.m"
                        check_hlds__cse_detection__Unify_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, (MR_Integer) 0)));
#line 621 "cse_detection.m"
                        check_hlds__cse_detection__FirstOldNew_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, (MR_Integer) 1)));
#line 621 "cse_detection.m"
                        check_hlds__cse_detection__LaterOldNew_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_58_58, (MR_Integer) 2)));
#line 622 "cse_detection.m"
                        check_hlds__cse_detection__succeeded = ((MR_tag((MR_Word) check_hlds__cse_detection__LaterOldNew_30)) == (MR_mktag((MR_Integer) 1)));
#line 622 "cse_detection.m"
                        if (check_hlds__cse_detection__succeeded)
#line 622 "cse_detection.m"
                          {
#line 622 "cse_detection.m"
                            check_hlds__cse_detection__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_30, (MR_Integer) 0)));
#line 622 "cse_detection.m"
                            check_hlds__cse_detection__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__LaterOldNew_30, (MR_Integer) 1)));
#line 622 "cse_detection.m"
                          }
#line 621 "cse_detection.m"
                      }
#line 489 "cse_detection.m"
                  }
#line 489 "cse_detection.m"
              }
#line 486 "cse_detection.m"
            if (check_hlds__cse_detection__succeeded)
#line 494 "cse_detection.m"
              {
#line 494 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_37_37;
#line 494 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_38_38;
#line 494 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_39_39;
#line 494 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_40_40;

#line 493 "cse_detection.m"
                {
#line 493 "cse_detection.m"
                  check_hlds__cse_detection__maybe_update_existential_data_structures_5_p_0(check_hlds__cse_detection__Unify_28, check_hlds__cse_detection__FirstOldNew_29, check_hlds__cse_detection__LaterOldNew_30, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_34_34, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_6);
                }
#line 496 "cse_detection.m"
                {
#line 496 "cse_detection.m"
                  check_hlds__cse_detection__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 496 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_40_40, 1) = ((MR_Box) (check_hlds__cse_detection__Goals_31));
#line 496 "cse_detection.m"
                }
#line 496 "cse_detection.m"
                {
#line 496 "cse_detection.m"
                  check_hlds__cse_detection__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 496 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_39_39, 0) = ((MR_Box) (check_hlds__cse_detection__V_40_40));
#line 496 "cse_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__cse_detection__V_39_39, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo0_3));
#line 496 "cse_detection.m"
                }
#line 496 "cse_detection.m"
                {
#line 496 "cse_detection.m"
                  check_hlds__cse_detection__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, 0) = ((MR_Box) (check_hlds__cse_detection__V_39_39));
#line 496 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 496 "cse_detection.m"
                }
#line 496 "cse_detection.m"
                {
#line 496 "cse_detection.m"
                  check_hlds__cse_detection__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, 0) = ((MR_Box) (check_hlds__cse_detection__Unify_28));
#line 496 "cse_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__cse_detection__V_37_37, 1) = ((MR_Box) (check_hlds__cse_detection__V_38_38));
#line 496 "cse_detection.m"
                }
#line 495 "cse_detection.m"
                {
#line 495 "cse_detection.m"
                  MR_Word base;
#line 495 "cse_detection.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 495 "cse_detection.m"
                  *check_hlds__cse_detection__HeadVar__8_8 = base;
#line 495 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 495 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 495 "cse_detection.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__V_37_37));
#line 495 "cse_detection.m"
                }
#line 497 "cse_detection.m"
                *check_hlds__cse_detection__Redo_7 = (MR_Integer) 1;
#line 494 "cse_detection.m"
              }
#line 486 "cse_detection.m"
            else
#line 499 "cse_detection.m"
              {
#line 499 "cse_detection.m"
                /* direct tailcall eliminated */
#line 499 "cse_detection.m"
                {
#line 499 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__HeadVar__1__tmp_copy_1 = check_hlds__cse_detection__Vars_19;

#line 499 "cse_detection.m"
                  check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__HeadVar__1__tmp_copy_1;
#line 499 "cse_detection.m"
                }
#line 499 "cse_detection.m"
                continue;
#line 499 "cse_detection.m"
              }
#line 483 "cse_detection.m"
          }
#line 480 "cse_detection.m"
      }
#line 480 "cse_detection.m"
      break;
#line 480 "cse_detection.m"
    }
#line 476 "cse_detection.m"
}

#line 448 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_conj_7_p_0(
#line 448 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 448 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__2_2,
#line 448 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3,
#line 448 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4,
#line 448 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__5_5,
#line 448 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__6_6,
#line 448 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__HeadVar__7_7)
#line 448 "cse_detection.m"
{
#line 451 "cse_detection.m"
  {
#line 451 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 451 "cse_detection.m"
    if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 451 "cse_detection.m"
      {
#line 451 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 451 "cse_detection.m"
        *check_hlds__cse_detection__HeadVar__7_7 = (MR_Integer) 0;
#line 451 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3;
#line 451 "cse_detection.m"
      }
#line 451 "cse_detection.m"
    else
#line 453 "cse_detection.m"
      {
#line 453 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 453 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 453 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Goal_20;
#line 453 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo1_21;
#line 453 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TailGoals_22;
#line 453 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo2_23;
#line 453 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_30_30;
#line 453 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_InstMap_31_31;
#line 453 "cse_detection.m"
        MR_Word check_hlds__cse_detection__GoalExpr0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_13, (MR_Integer) 0)));
#line 453 "cse_detection.m"
        MR_Word check_hlds__cse_detection__GoalInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_13, (MR_Integer) 1)));
#line 453 "cse_detection.m"
        MR_Word check_hlds__cse_detection__GoalExpr_45;
#line 453 "cse_detection.m"
        MR_Word check_hlds__cse_detection__InstMapDelta_46;
#line 458 "cse_detection.m"
        MR_Word check_hlds__cse_detection__ConjGoals_25;
#line 459 "cse_detection.m"
        MR_Word check_hlds__cse_detection__InnerConjType_24;
#line 459 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_33_33;
#line 459 "cse_detection.m"
        MR_Word check_hlds__cse_detection__V_26_26;

#line 328 "cse_detection.m"
        {
#line 328 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(check_hlds__cse_detection__GoalExpr0_43, &check_hlds__cse_detection__GoalExpr_45, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_3, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_30_30, check_hlds__cse_detection__GoalInfo_44, check_hlds__cse_detection__HeadVar__6_6, &check_hlds__cse_detection__Redo1_21);
        }
#line 330 "cse_detection.m"
        {
#line 330 "cse_detection.m"
          check_hlds__cse_detection__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 330 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal_20, 0) = ((MR_Box) (check_hlds__cse_detection__GoalExpr_45));
#line 330 "cse_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal_20, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_44));
#line 330 "cse_detection.m"
        }
#line 331 "cse_detection.m"
        {
#line 331 "cse_detection.m"
          check_hlds__cse_detection__InstMapDelta_46 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__cse_detection__GoalInfo_44);
        }
#line 332 "cse_detection.m"
        {
#line 332 "cse_detection.m"
          hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__cse_detection__HeadVar__6_6, check_hlds__cse_detection__InstMapDelta_46, &check_hlds__cse_detection__STATE_VARIABLE_InstMap_31_31);
        }
#line 455 "cse_detection.m"
        {
#line 455 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_conj_7_p_0(check_hlds__cse_detection__Goals0_14, &check_hlds__cse_detection__TailGoals_22, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_30_30, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_4, check_hlds__cse_detection__HeadVar__5_5, check_hlds__cse_detection__STATE_VARIABLE_InstMap_31_31, &check_hlds__cse_detection__Redo2_23);
        }
#line 459 "cse_detection.m"
        check_hlds__cse_detection__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal_20, (MR_Integer) 0)));
#line 459 "cse_detection.m"
        check_hlds__cse_detection__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal_20, (MR_Integer) 1)));
#line 459 "cse_detection.m"
        check_hlds__cse_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__cse_detection__V_33_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_33_33, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 459 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 459 "cse_detection.m"
          {
#line 459 "cse_detection.m"
            check_hlds__cse_detection__InnerConjType_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_33_33, (MR_Integer) 1)));
#line 459 "cse_detection.m"
            check_hlds__cse_detection__ConjGoals_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__V_33_33, (MR_Integer) 2)));
#line 460 "cse_detection.m"
            check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__HeadVar__5_5 == check_hlds__cse_detection__InnerConjType_24);
#line 459 "cse_detection.m"
          }
#line 458 "cse_detection.m"
        if (check_hlds__cse_detection__succeeded)
#line 462 "cse_detection.m"
          {
#line 462 "cse_detection.m"
            {
#line 462 "cse_detection.m"
              *check_hlds__cse_detection__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__cse_detection__ConjGoals_25, check_hlds__cse_detection__TailGoals_22);
            }
#line 462 "cse_detection.m"
          }
#line 458 "cse_detection.m"
        else
#line 464 "cse_detection.m"
          {
#line 464 "cse_detection.m"
            MR_Word base;
#line 464 "cse_detection.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "cse_detection.m"
            *check_hlds__cse_detection__HeadVar__2_2 = base;
#line 464 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__Goal_20));
#line 464 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__TailGoals_22));
#line 464 "cse_detection.m"
          }
#line 466 "cse_detection.m"
        {
#line 466 "cse_detection.m"
          mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_21, check_hlds__cse_detection__Redo2_23, check_hlds__cse_detection__HeadVar__7_7);
        }
#line 453 "cse_detection.m"
      }
#line 451 "cse_detection.m"
  }
#line 448 "cse_detection.m"
}

#line 336 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(
#line 336 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalExpr0_8,
#line 336 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__GoalExpr_9,
#line 336 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90,
#line 336 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91,
#line 336 "cse_detection.m"
  MR_Word check_hlds__cse_detection__GoalInfo_11,
#line 336 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_12,
#line 336 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_13)
#line 336 "cse_detection.m"
{
#line 346 "cse_detection.m"
  {
#line 346 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;

#line 346 "cse_detection.m"
#line 346 "cse_detection.m"
    switch (MR_tag((MR_Word) check_hlds__cse_detection__GoalExpr0_8)) {
#line 346 "cse_detection.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 346 "cse_detection.m"
      case (MR_Integer) 0:
#line 370 "cse_detection.m"
        {
#line 370 "cse_detection.m"
          MR_Word check_hlds__cse_detection__SubGoal0_54 = (MR_Word) MR_body(((MR_Word) check_hlds__cse_detection__GoalExpr0_8), (MR_Integer) 0);
#line 370 "cse_detection.m"
          MR_Word check_hlds__cse_detection__SubGoal_55;

#line 371 "cse_detection.m"
          {
#line 371 "cse_detection.m"
            check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__SubGoal0_54, &check_hlds__cse_detection__SubGoal_55, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__Redo_13);
          }
#line 372 "cse_detection.m"
          *check_hlds__cse_detection__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__cse_detection__SubGoal_55);
#line 370 "cse_detection.m"
        }
#line 346 "cse_detection.m"
        break;
#line 346 "cse_detection.m"
      case (MR_Integer) 1:
#line 350 "cse_detection.m"
        {
#line 350 "cse_detection.m"
          MR_Word check_hlds__cse_detection__LHS_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 0)));
#line 350 "cse_detection.m"
          MR_Word check_hlds__cse_detection__RHS0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 350 "cse_detection.m"
          MR_Word check_hlds__cse_detection__Mode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
#line 350 "cse_detection.m"
          MR_Word check_hlds__cse_detection__Unify_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 3)));
#line 350 "cse_detection.m"
          MR_Word check_hlds__cse_detection__UnifyContext_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 4)));
#line 350 "cse_detection.m"
          MR_Word check_hlds__cse_detection__RHS_49;

#line 361 "cse_detection.m"
#line 361 "cse_detection.m"
          switch (MR_tag((MR_Word) check_hlds__cse_detection__RHS0_33)) {
#line 361 "cse_detection.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 361 "cse_detection.m"
            case (MR_Integer) 0:
#line 361 "cse_detection.m"
            case (MR_Integer) 1:
#line 364 "cse_detection.m"
              {
#line 365 "cse_detection.m"
                check_hlds__cse_detection__RHS_49 = check_hlds__cse_detection__RHS0_33;
#line 366 "cse_detection.m"
                *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
#line 364 "cse_detection.m"
                *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90;
#line 364 "cse_detection.m"
              }
#line 361 "cse_detection.m"
              break;
#line 361 "cse_detection.m"
            case (MR_Integer) 2:
#line 353 "cse_detection.m"
              {
#line 353 "cse_detection.m"
                MR_Word check_hlds__cse_detection__Purity_37 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 353 "cse_detection.m"
                MR_Word check_hlds__cse_detection__Groundness_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 353 "cse_detection.m"
                MR_Word check_hlds__cse_detection__PredOrFunc_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 353 "cse_detection.m"
                MR_Word check_hlds__cse_detection__NonLocalVars_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 2)));
#line 353 "cse_detection.m"
                MR_Word check_hlds__cse_detection__Vars_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 3)));
#line 353 "cse_detection.m"
                MR_Word check_hlds__cse_detection__Modes_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 4)));
#line 353 "cse_detection.m"
                MR_Word check_hlds__cse_detection__Det_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 5)));
#line 353 "cse_detection.m"
                MR_Word check_hlds__cse_detection__LambdaGoal0_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS0_33, (MR_Integer) 6)));
#line 353 "cse_detection.m"
                MR_Word check_hlds__cse_detection__ModuleInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, (MR_Integer) 3)));
#line 353 "cse_detection.m"
                MR_Word check_hlds__cse_detection__InstMap1_47;
#line 353 "cse_detection.m"
                MR_Word check_hlds__cse_detection__LambdaGoal_48;
#line 354 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, (MR_Integer) 0)));
#line 354 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, (MR_Integer) 1)));
#line 354 "cse_detection.m"
                MR_Word check_hlds__cse_detection__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, (MR_Integer) 2)));

#line 355 "cse_detection.m"
                {
#line 355 "cse_detection.m"
                  hlds__instmap__pre_lambda_update_5_p_0(check_hlds__cse_detection__ModuleInfo_46, check_hlds__cse_detection__Vars_42, check_hlds__cse_detection__Modes_43, check_hlds__cse_detection__InstMap0_12, &check_hlds__cse_detection__InstMap1_47);
                }
#line 357 "cse_detection.m"
                {
#line 357 "cse_detection.m"
                  check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__LambdaGoal0_45, &check_hlds__cse_detection__LambdaGoal_48, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__InstMap1_47, check_hlds__cse_detection__Redo_13);
                }
#line 359 "cse_detection.m"
                {
#line 359 "cse_detection.m"
                  check_hlds__cse_detection__RHS_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 359 "cse_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 0) = ((MR_Box) ((check_hlds__cse_detection__Purity_37 | ((((check_hlds__cse_detection__Groundness_38 << (MR_Integer) 2)) | ((check_hlds__cse_detection__PredOrFunc_39 << (MR_Integer) 3)))))));
#line 359 "cse_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 1) = (MR_Integer) 0;
#line 359 "cse_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 2) = ((MR_Box) (check_hlds__cse_detection__NonLocalVars_41));
#line 359 "cse_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 3) = ((MR_Box) (check_hlds__cse_detection__Vars_42));
#line 359 "cse_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 4) = ((MR_Box) (check_hlds__cse_detection__Modes_43));
#line 359 "cse_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 5) = ((MR_Box) (check_hlds__cse_detection__Det_44));
#line 359 "cse_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__cse_detection__RHS_49, 6) = ((MR_Box) (check_hlds__cse_detection__LambdaGoal_48));
#line 359 "cse_detection.m"
                }
#line 353 "cse_detection.m"
              }
#line 361 "cse_detection.m"
              break;
#line 361 "cse_detection.m"
          }
#line 368 "cse_detection.m"
          {
#line 368 "cse_detection.m"
            MR_Word base;
#line 368 "cse_detection.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 368 "cse_detection.m"
            *check_hlds__cse_detection__GoalExpr_9 = base;
#line 368 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__cse_detection__LHS_32));
#line 368 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__cse_detection__RHS_49));
#line 368 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__cse_detection__Mode_34));
#line 368 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__cse_detection__Unify_35));
#line 368 "cse_detection.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__cse_detection__UnifyContext_36));
#line 368 "cse_detection.m"
          }
#line 350 "cse_detection.m"
        }
#line 346 "cse_detection.m"
        break;
#line 346 "cse_detection.m"
      case (MR_Integer) 2:
#line 346 "cse_detection.m"
        {
#line 347 "cse_detection.m"
          *check_hlds__cse_detection__GoalExpr_9 = check_hlds__cse_detection__GoalExpr0_8;
#line 348 "cse_detection.m"
          *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
#line 346 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90;
#line 346 "cse_detection.m"
        }
#line 346 "cse_detection.m"
        break;
#line 346 "cse_detection.m"
      case (MR_Integer) 3:
#line 346 "cse_detection.m"
#line 346 "cse_detection.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 0)))) {
#line 346 "cse_detection.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 346 "cse_detection.m"
          case (MR_Integer) 0:
#line 346 "cse_detection.m"
          case (MR_Integer) 1:
#line 346 "cse_detection.m"
            {
#line 347 "cse_detection.m"
              *check_hlds__cse_detection__GoalExpr_9 = check_hlds__cse_detection__GoalExpr0_8;
#line 348 "cse_detection.m"
              *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
#line 346 "cse_detection.m"
              *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90;
#line 346 "cse_detection.m"
            }
#line 346 "cse_detection.m"
            break;
#line 346 "cse_detection.m"
          case (MR_Integer) 2:
#line 393 "cse_detection.m"
            {
#line 393 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ConjType_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 393 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Goals0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
#line 393 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Goals_62;

#line 394 "cse_detection.m"
              {
#line 394 "cse_detection.m"
                check_hlds__cse_detection__detect_cse_in_conj_7_p_0(check_hlds__cse_detection__Goals0_61, &check_hlds__cse_detection__Goals_62, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__ConjType_60, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__Redo_13);
              }
#line 395 "cse_detection.m"
              {
#line 395 "cse_detection.m"
                MR_Word base;
#line 395 "cse_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 395 "cse_detection.m"
                *check_hlds__cse_detection__GoalExpr_9 = base;
#line 395 "cse_detection.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 395 "cse_detection.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__ConjType_60));
#line 395 "cse_detection.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__Goals_62));
#line 395 "cse_detection.m"
              }
#line 393 "cse_detection.m"
            }
#line 346 "cse_detection.m"
            break;
#line 346 "cse_detection.m"
          case (MR_Integer) 3:
#line 397 "cse_detection.m"
            {
#line 397 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Goals0_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));

#line 402 "cse_detection.m"
              if ((check_hlds__cse_detection__Goals0_112 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 399 "cse_detection.m"
                {
#line 400 "cse_detection.m"
                  *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
#line 401 "cse_detection.m"
                  *check_hlds__cse_detection__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__cse_detection_scalar_common_1[5]);
#line 399 "cse_detection.m"
                  *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90;
#line 399 "cse_detection.m"
                }
#line 402 "cse_detection.m"
              else
#line 403 "cse_detection.m"
                {
#line 403 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__NonLocals_65;
#line 403 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__NonLocalsList_66;

#line 404 "cse_detection.m"
                  {
#line 404 "cse_detection.m"
                    check_hlds__cse_detection__NonLocals_65 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__cse_detection__GoalInfo_11);
                  }
#line 405 "cse_detection.m"
                  {
#line 405 "cse_detection.m"
                    check_hlds__cse_detection__NonLocalsList_66 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__cse_detection__NonLocals_65);
                  }
#line 406 "cse_detection.m"
                  {
#line 406 "cse_detection.m"
                    check_hlds__cse_detection__detect_cse_in_disj_8_p_0(check_hlds__cse_detection__NonLocalsList_66, check_hlds__cse_detection__Goals0_112, check_hlds__cse_detection__GoalInfo_11, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__Redo_13, check_hlds__cse_detection__GoalExpr_9);
                  }
#line 403 "cse_detection.m"
                }
#line 397 "cse_detection.m"
            }
#line 346 "cse_detection.m"
            break;
#line 346 "cse_detection.m"
          case (MR_Integer) 4:
#line 410 "cse_detection.m"
            {
#line 410 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 410 "cse_detection.m"
              MR_Word check_hlds__cse_detection__CanFail_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
#line 410 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Cases0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 3)));
#line 410 "cse_detection.m"
              MR_Word check_hlds__cse_detection__NonLocals_113;
#line 410 "cse_detection.m"
              MR_Word check_hlds__cse_detection__NonLocalsList_114;

#line 411 "cse_detection.m"
              {
#line 411 "cse_detection.m"
                check_hlds__cse_detection__NonLocals_113 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__cse_detection__GoalInfo_11);
              }
#line 412 "cse_detection.m"
              {
#line 412 "cse_detection.m"
                check_hlds__cse_detection__NonLocalsList_114 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__cse_detection__NonLocals_113);
              }
#line 413 "cse_detection.m"
              {
#line 413 "cse_detection.m"
                check_hlds__cse_detection__detect_cse_in_cases_10_p_0(check_hlds__cse_detection__NonLocalsList_114, check_hlds__cse_detection__Var_67, check_hlds__cse_detection__CanFail_68, check_hlds__cse_detection__Cases0_69, check_hlds__cse_detection__GoalInfo_11, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__Redo_13, check_hlds__cse_detection__GoalExpr_9);
              }
#line 410 "cse_detection.m"
            }
#line 346 "cse_detection.m"
            break;
#line 346 "cse_detection.m"
          case (MR_Integer) 5:
#line 374 "cse_detection.m"
            {
#line 374 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Reason0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 374 "cse_detection.m"
              MR_Word check_hlds__cse_detection__SubGoal0_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
#line 375 "cse_detection.m"
              MR_Word check_hlds__cse_detection__V_103_103;
#line 375 "cse_detection.m"
              MR_Word check_hlds__cse_detection__V_57_57;

#line 375 "cse_detection.m"
              check_hlds__cse_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__cse_detection__Reason0_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 375 "cse_detection.m"
              if (check_hlds__cse_detection__succeeded)
#line 375 "cse_detection.m"
                {
#line 375 "cse_detection.m"
                  check_hlds__cse_detection__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 1)));
#line 375 "cse_detection.m"
                  check_hlds__cse_detection__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 2)));
#line 375 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_103_103 == (MR_Integer) 1);
#line 375 "cse_detection.m"
                }
#line 375 "cse_detection.m"
              if (check_hlds__cse_detection__succeeded)
#line 377 "cse_detection.m"
                {
#line 377 "cse_detection.m"
                  *check_hlds__cse_detection__GoalExpr_9 = check_hlds__cse_detection__GoalExpr0_8;
#line 378 "cse_detection.m"
                  *check_hlds__cse_detection__Redo_13 = (MR_Integer) 0;
#line 377 "cse_detection.m"
                  *check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91 = check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90;
#line 377 "cse_detection.m"
                }
#line 375 "cse_detection.m"
              else
#line 380 "cse_detection.m"
                {
#line 380 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__SubGoal_108;
#line 382 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_105_105;
#line 383 "cse_detection.m"
                  MR_Word check_hlds__cse_detection__V_58_58;

#line 380 "cse_detection.m"
                  {
#line 380 "cse_detection.m"
                    check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__SubGoal0_110, &check_hlds__cse_detection__SubGoal_108, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__Redo_13);
                  }
#line 382 "cse_detection.m"
                  check_hlds__cse_detection__succeeded = (*check_hlds__cse_detection__Redo_13 == (MR_Integer) 1);
#line 382 "cse_detection.m"
                  if (check_hlds__cse_detection__succeeded)
#line 382 "cse_detection.m"
                    {
#line 383 "cse_detection.m"
                      check_hlds__cse_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__cse_detection__Reason0_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 383 "cse_detection.m"
                      if (check_hlds__cse_detection__succeeded)
#line 383 "cse_detection.m"
                        {
#line 383 "cse_detection.m"
                          check_hlds__cse_detection__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 1)));
#line 383 "cse_detection.m"
                          check_hlds__cse_detection__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__Reason0_56, (MR_Integer) 2)));
#line 383 "cse_detection.m"
                          check_hlds__cse_detection__succeeded = (check_hlds__cse_detection__V_105_105 == (MR_Integer) 2);
#line 383 "cse_detection.m"
                        }
#line 382 "cse_detection.m"
                    }
#line 381 "cse_detection.m"
                  if (check_hlds__cse_detection__succeeded)
#line 387 "cse_detection.m"
                    {
#line 387 "cse_detection.m"
                      MR_Word check_hlds__cse_detection__V_59_59;

#line 387 "cse_detection.m"
                      *check_hlds__cse_detection__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__SubGoal_108, (MR_Integer) 0)));
#line 387 "cse_detection.m"
                      check_hlds__cse_detection__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__SubGoal_108, (MR_Integer) 1)));
#line 387 "cse_detection.m"
                    }
#line 381 "cse_detection.m"
                  else
#line 389 "cse_detection.m"
                    {
#line 389 "cse_detection.m"
                      MR_Word base;
#line 389 "cse_detection.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 389 "cse_detection.m"
                      *check_hlds__cse_detection__GoalExpr_9 = base;
#line 389 "cse_detection.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 389 "cse_detection.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__Reason0_56));
#line 389 "cse_detection.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__cse_detection__SubGoal_108));
#line 389 "cse_detection.m"
                    }
#line 380 "cse_detection.m"
                }
#line 374 "cse_detection.m"
            }
#line 346 "cse_detection.m"
            break;
#line 346 "cse_detection.m"
          case (MR_Integer) 6:
#line 416 "cse_detection.m"
            {
#line 416 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Cond0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 2)));
#line 416 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Then0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 3)));
#line 416 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Else0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 4)));
#line 416 "cse_detection.m"
              MR_Word check_hlds__cse_detection__Vars_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 416 "cse_detection.m"
              MR_Word check_hlds__cse_detection__NonLocals_116;
#line 416 "cse_detection.m"
              MR_Word check_hlds__cse_detection__NonLocalsList_117;

#line 417 "cse_detection.m"
              {
#line 417 "cse_detection.m"
                check_hlds__cse_detection__NonLocals_116 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__cse_detection__GoalInfo_11);
              }
#line 418 "cse_detection.m"
              {
#line 418 "cse_detection.m"
                check_hlds__cse_detection__NonLocalsList_117 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__cse_detection__NonLocals_116);
              }
#line 419 "cse_detection.m"
              {
#line 419 "cse_detection.m"
                check_hlds__cse_detection__detect_cse_in_ite_11_p_0(check_hlds__cse_detection__NonLocalsList_117, check_hlds__cse_detection__Vars_115, check_hlds__cse_detection__Cond0_70, check_hlds__cse_detection__Then0_71, check_hlds__cse_detection__Else0_72, check_hlds__cse_detection__GoalInfo_11, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__Redo_13, check_hlds__cse_detection__GoalExpr_9);
              }
#line 416 "cse_detection.m"
            }
#line 346 "cse_detection.m"
            break;
#line 346 "cse_detection.m"
          case (MR_Integer) 7:
#line 422 "cse_detection.m"
            {
#line 422 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ShortHand0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__cse_detection__GoalExpr0_8, (MR_Integer) 1)));
#line 422 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ShortHand_85;

#line 432 "cse_detection.m"
#line 432 "cse_detection.m"
              switch (MR_tag((MR_Word) check_hlds__cse_detection__ShortHand0_73)) {
#line 432 "cse_detection.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 432 "cse_detection.m"
                case (MR_Integer) 0:
#line 433 "cse_detection.m"
                  {
#line 435 "cse_detection.m"
                    {
#line 435 "cse_detection.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_goal_expr\'/7", (MR_String) "bi_implication");
#line 435 "cse_detection.m"
                      return;
                    }
#line 433 "cse_detection.m"
                  }
#line 432 "cse_detection.m"
                  break;
#line 432 "cse_detection.m"
                case (MR_Integer) 1:
#line 425 "cse_detection.m"
                  {
#line 425 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__AtomicGoalType_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 0)));
#line 425 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__Outer_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 1)));
#line 425 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__Inner_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 2)));
#line 425 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__MaybeOutputVars_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 3)));
#line 425 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__MainGoal0_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 4)));
#line 425 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__OrElseGoals0_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 5)));
#line 425 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__OrElseInners_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 6)));
#line 425 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__MainGoal_81;
#line 425 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__Redo1_82;
#line 425 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__OrElseGoals_83;
#line 425 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__Redo2_84;
#line 425 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_96_96;

#line 426 "cse_detection.m"
                    {
#line 426 "cse_detection.m"
                      check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__MainGoal0_78, &check_hlds__cse_detection__MainGoal_81, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, &check_hlds__cse_detection__STATE_VARIABLE_CseInfo_96_96, check_hlds__cse_detection__InstMap0_12, &check_hlds__cse_detection__Redo1_82);
                    }
#line 427 "cse_detection.m"
                    {
#line 427 "cse_detection.m"
                      check_hlds__cse_detection__detect_cse_in_independent_goals_6_p_0(check_hlds__cse_detection__OrElseGoals0_79, &check_hlds__cse_detection__OrElseGoals_83, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_96_96, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__InstMap0_12, &check_hlds__cse_detection__Redo2_84);
                    }
#line 429 "cse_detection.m"
                    {
#line 429 "cse_detection.m"
                      check_hlds__cse_detection__ShortHand_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 429 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 0) = ((MR_Box) (check_hlds__cse_detection__AtomicGoalType_74));
#line 429 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 1) = ((MR_Box) (check_hlds__cse_detection__Outer_75));
#line 429 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 2) = ((MR_Box) (check_hlds__cse_detection__Inner_76));
#line 429 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 3) = ((MR_Box) (check_hlds__cse_detection__MaybeOutputVars_77));
#line 429 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 4) = ((MR_Box) (check_hlds__cse_detection__MainGoal_81));
#line 429 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 5) = ((MR_Box) (check_hlds__cse_detection__OrElseGoals_83));
#line 429 "cse_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__cse_detection__ShortHand_85, 6) = ((MR_Box) (check_hlds__cse_detection__OrElseInners_80));
#line 429 "cse_detection.m"
                    }
#line 431 "cse_detection.m"
                    {
#line 431 "cse_detection.m"
                      mercury__bool__or_3_p_0(check_hlds__cse_detection__Redo1_82, check_hlds__cse_detection__Redo2_84, check_hlds__cse_detection__Redo_13);
                    }
#line 425 "cse_detection.m"
                  }
#line 432 "cse_detection.m"
                  break;
#line 432 "cse_detection.m"
                case (MR_Integer) 2:
#line 437 "cse_detection.m"
                  {
#line 437 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__MaybeIO_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 0)));
#line 437 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__ResultVar_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 1)));
#line 437 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__SubGoal0_118 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand0_73, (MR_Integer) 2)));
#line 437 "cse_detection.m"
                    MR_Word check_hlds__cse_detection__SubGoal_119;

#line 440 "cse_detection.m"
                    {
#line 440 "cse_detection.m"
                      check_hlds__cse_detection__detect_cse_in_goal_6_p_0(check_hlds__cse_detection__SubGoal0_118, &check_hlds__cse_detection__SubGoal_119, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_90, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_91, check_hlds__cse_detection__InstMap0_12, check_hlds__cse_detection__Redo_13);
                    }
#line 441 "cse_detection.m"
                    {
#line 441 "cse_detection.m"
                      check_hlds__cse_detection__ShortHand_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 441 "cse_detection.m"
                      MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand_85, 0) = ((MR_Box) (check_hlds__cse_detection__MaybeIO_88));
#line 441 "cse_detection.m"
                      MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand_85, 1) = ((MR_Box) (check_hlds__cse_detection__ResultVar_89));
#line 441 "cse_detection.m"
                      MR_hl_field(MR_mktag(2), check_hlds__cse_detection__ShortHand_85, 2) = ((MR_Box) (check_hlds__cse_detection__SubGoal_119));
#line 441 "cse_detection.m"
                    }
#line 437 "cse_detection.m"
                  }
#line 432 "cse_detection.m"
                  break;
#line 432 "cse_detection.m"
              }
#line 443 "cse_detection.m"
              {
#line 443 "cse_detection.m"
                MR_Word base;
#line 443 "cse_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "cse_detection.m"
                *check_hlds__cse_detection__GoalExpr_9 = base;
#line 443 "cse_detection.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 443 "cse_detection.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__cse_detection__ShortHand_85));
#line 443 "cse_detection.m"
              }
#line 422 "cse_detection.m"
            }
#line 346 "cse_detection.m"
            break;
#line 346 "cse_detection.m"
        }
#line 346 "cse_detection.m"
        break;
#line 346 "cse_detection.m"
    }
#line 346 "cse_detection.m"
  }
#line 336 "cse_detection.m"
}

#line 322 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(
#line 322 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_8,
#line 322 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goal_9,
#line 322 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_18,
#line 322 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_19,
#line 322 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_11,
#line 322 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__InstMap_12,
#line 322 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_13)
#line 322 "cse_detection.m"
{
#line 326 "cse_detection.m"
  {
#line 326 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 326 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalExpr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_8, (MR_Integer) 0)));
#line 326 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__Goal0_8, (MR_Integer) 1)));
#line 326 "cse_detection.m"
    MR_Word check_hlds__cse_detection__GoalExpr_16;
#line 326 "cse_detection.m"
    MR_Word check_hlds__cse_detection__InstMapDelta_17;

#line 328 "cse_detection.m"
    {
#line 328 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_expr_7_p_0(check_hlds__cse_detection__GoalExpr0_14, &check_hlds__cse_detection__GoalExpr_16, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_18, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_19, check_hlds__cse_detection__GoalInfo_15, check_hlds__cse_detection__InstMap0_11, check_hlds__cse_detection__Redo_13);
    }
#line 330 "cse_detection.m"
    {
#line 330 "cse_detection.m"
      MR_Word base;
#line 330 "cse_detection.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 330 "cse_detection.m"
      *check_hlds__cse_detection__Goal_9 = base;
#line 330 "cse_detection.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__cse_detection__GoalExpr_16));
#line 330 "cse_detection.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__cse_detection__GoalInfo_15));
#line 330 "cse_detection.m"
    }
#line 331 "cse_detection.m"
    {
#line 331 "cse_detection.m"
      check_hlds__cse_detection__InstMapDelta_17 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__cse_detection__GoalInfo_15);
    }
#line 332 "cse_detection.m"
    {
#line 332 "cse_detection.m"
      hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__cse_detection__InstMap0_11, check_hlds__cse_detection__InstMapDelta_17, check_hlds__cse_detection__InstMap_12);
    }
#line 326 "cse_detection.m"
  }
#line 322 "cse_detection.m"
}

#line 311 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_goal_6_p_0(
#line 311 "cse_detection.m"
  MR_Word check_hlds__cse_detection__Goal0_7,
#line 311 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Goal_8,
#line 311 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_13,
#line 311 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_CseInfo_14,
#line 311 "cse_detection.m"
  MR_Word check_hlds__cse_detection__InstMap0_10,
#line 311 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_11)
#line 311 "cse_detection.m"
{
#line 315 "cse_detection.m"
  {
#line 315 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 315 "cse_detection.m"
    MR_Word check_hlds__cse_detection___InstMap_12;

#line 315 "cse_detection.m"
    {
#line 315 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Goal0_7, check_hlds__cse_detection__Goal_8, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_0_13, check_hlds__cse_detection__STATE_VARIABLE_CseInfo_14, check_hlds__cse_detection__InstMap0_10, &check_hlds__cse_detection___InstMap_12, check_hlds__cse_detection__Redo_11);
    }
#line 315 "cse_detection.m"
  }
#line 311 "cse_detection.m"
}

#line 267 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_proc_pass_4_p_0(
#line 267 "cse_detection.m"
  MR_Word check_hlds__cse_detection__ModuleInfo_5,
#line 267 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__Redo_6,
#line 267 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26,
#line 267 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_27)
#line 267 "cse_detection.m"
{
#line 270 "cse_detection.m"
  {
#line 270 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 270 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Goal0_8;
#line 270 "cse_detection.m"
    MR_Word check_hlds__cse_detection__InstMap0_9;
#line 270 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Varset0_10;
#line 270 "cse_detection.m"
    MR_Word check_hlds__cse_detection__VarTypes0_11;
#line 270 "cse_detection.m"
    MR_Word check_hlds__cse_detection__RttiVarMaps0_12;
#line 270 "cse_detection.m"
    MR_Word check_hlds__cse_detection__CseInfo0_13;
#line 270 "cse_detection.m"
    MR_Word check_hlds__cse_detection__Goal1_14;
#line 270 "cse_detection.m"
    MR_Word check_hlds__cse_detection__CseInfo_15;
#line 315 "cse_detection.m"
    MR_Word check_hlds__cse_detection___InstMap_40;

#line 275 "cse_detection.m"
    {
#line 275 "cse_detection.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__Goal0_8);
    }
#line 276 "cse_detection.m"
    {
#line 276 "cse_detection.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, check_hlds__cse_detection__ModuleInfo_5, &check_hlds__cse_detection__InstMap0_9);
    }
#line 277 "cse_detection.m"
    {
#line 277 "cse_detection.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__Varset0_10);
    }
#line 278 "cse_detection.m"
    {
#line 278 "cse_detection.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__VarTypes0_11);
    }
#line 279 "cse_detection.m"
    {
#line 279 "cse_detection.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__RttiVarMaps0_12);
    }
#line 280 "cse_detection.m"
    {
#line 280 "cse_detection.m"
      check_hlds__cse_detection__CseInfo0_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 280 "cse_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo0_13, 0) = ((MR_Box) (check_hlds__cse_detection__Varset0_10));
#line 280 "cse_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo0_13, 1) = ((MR_Box) (check_hlds__cse_detection__VarTypes0_11));
#line 280 "cse_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo0_13, 2) = ((MR_Box) (check_hlds__cse_detection__RttiVarMaps0_12));
#line 280 "cse_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo0_13, 3) = ((MR_Box) (check_hlds__cse_detection__ModuleInfo_5));
#line 280 "cse_detection.m"
    }
#line 315 "cse_detection.m"
    {
#line 315 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_goal_update_instmap_7_p_0(check_hlds__cse_detection__Goal0_8, &check_hlds__cse_detection__Goal1_14, check_hlds__cse_detection__CseInfo0_13, &check_hlds__cse_detection__CseInfo_15, check_hlds__cse_detection__InstMap0_9, &check_hlds__cse_detection___InstMap_40, check_hlds__cse_detection__Redo_6);
    }
#line 285 "cse_detection.m"
#line 285 "cse_detection.m"
    switch (*check_hlds__cse_detection__Redo_6) {
#line 285 "cse_detection.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 285 "cse_detection.m"
      case (MR_Integer) 0:
#line 284 "cse_detection.m"
        *check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_27 = check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26;
#line 285 "cse_detection.m"
        break;
#line 285 "cse_detection.m"
      case (MR_Integer) 1:
#line 286 "cse_detection.m"
        {
#line 286 "cse_detection.m"
          MR_Word check_hlds__cse_detection__VarSet1_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo_15, (MR_Integer) 0)));
#line 286 "cse_detection.m"
          MR_Word check_hlds__cse_detection__VarTypes1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo_15, (MR_Integer) 1)));
#line 286 "cse_detection.m"
          MR_Word check_hlds__cse_detection__RttiVarMaps1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo_15, (MR_Integer) 2)));
#line 286 "cse_detection.m"
          MR_Word check_hlds__cse_detection__HeadVars_20;
#line 286 "cse_detection.m"
          MR_Word check_hlds__cse_detection__Goal_22;
#line 286 "cse_detection.m"
          MR_Word check_hlds__cse_detection__VarSet_23;
#line 286 "cse_detection.m"
          MR_Word check_hlds__cse_detection__VarTypes_24;
#line 286 "cse_detection.m"
          MR_Word check_hlds__cse_detection__RttiVarMaps_25;
#line 286 "cse_detection.m"
          MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_29_29;
#line 286 "cse_detection.m"
          MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_30_30;
#line 286 "cse_detection.m"
          MR_Word check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_31_31;
#line 289 "cse_detection.m"
          MR_Word check_hlds__cse_detection__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__cse_detection__CseInfo_15, (MR_Integer) 3)));
#line 292 "cse_detection.m"
          MR_Word check_hlds__cse_detection___Warnings_21;

#line 290 "cse_detection.m"
          {
#line 290 "cse_detection.m"
            hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__HeadVars_20);
          }
#line 292 "cse_detection.m"
          {
#line 292 "cse_detection.m"
            hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, check_hlds__cse_detection__HeadVars_20, &check_hlds__cse_detection___Warnings_21, check_hlds__cse_detection__Goal1_14, &check_hlds__cse_detection__Goal_22, check_hlds__cse_detection__VarSet1_16, &check_hlds__cse_detection__VarSet_23, check_hlds__cse_detection__VarTypes1_17, &check_hlds__cse_detection__VarTypes_24, check_hlds__cse_detection__RttiVarMaps1_18, &check_hlds__cse_detection__RttiVarMaps_25);
          }
#line 298 "cse_detection.m"
          {
#line 298 "cse_detection.m"
            hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__cse_detection__Goal_22, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_0_26, &check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_29_29);
          }
#line 299 "cse_detection.m"
          {
#line 299 "cse_detection.m"
            hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__cse_detection__VarSet_23, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_29_29, &check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_30_30);
          }
#line 300 "cse_detection.m"
          {
#line 300 "cse_detection.m"
            hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__cse_detection__VarTypes_24, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_30_30, &check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_31_31);
          }
#line 301 "cse_detection.m"
          {
#line 301 "cse_detection.m"
            hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(check_hlds__cse_detection__RttiVarMaps_25, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_31_31, check_hlds__cse_detection__STATE_VARIABLE_ProcInfo_27);
          }
#line 286 "cse_detection.m"
        }
#line 285 "cse_detection.m"
        break;
#line 285 "cse_detection.m"
    }
#line 270 "cse_detection.m"
  }
#line 267 "cse_detection.m"
}

#line 150 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_procs_4_p_0(
#line 150 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 150 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__2_2,
#line 150 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3,
#line 150 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_4)
#line 150 "cse_detection.m"
{
#line 153 "cse_detection.m"
  while (MR_TRUE)
#line 153 "cse_detection.m"
    {
#line 153 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 153 "cse_detection.m"
      {
#line 153 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;

#line 153 "cse_detection.m"
        if ((check_hlds__cse_detection__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 153 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_4 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3;
#line 153 "cse_detection.m"
        else
#line 154 "cse_detection.m"
          {
#line 154 "cse_detection.m"
            MR_Integer check_hlds__cse_detection__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 154 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ProcIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 154 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_15_15;

#line 155 "cse_detection.m"
            {
#line 155 "cse_detection.m"
              check_hlds__cse_detection__detect_cse_in_proc_4_p_0(check_hlds__cse_detection__HeadVar__1_1, check_hlds__cse_detection__ProcId_10, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_15_15);
            }
#line 156 "cse_detection.m"
            /* direct tailcall eliminated */
#line 156 "cse_detection.m"
            {
#line 156 "cse_detection.m"
              MR_Word check_hlds__cse_detection__HeadVar__2__tmp_copy_2 = check_hlds__cse_detection__ProcIds_11;
#line 156 "cse_detection.m"
              MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_15_15;

#line 156 "cse_detection.m"
              check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_3 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 156 "cse_detection.m"
              check_hlds__cse_detection__HeadVar__2_2 = check_hlds__cse_detection__HeadVar__2__tmp_copy_2;
#line 156 "cse_detection.m"
            }
#line 156 "cse_detection.m"
            continue;
#line 154 "cse_detection.m"
          }
#line 153 "cse_detection.m"
      }
#line 153 "cse_detection.m"
      break;
#line 153 "cse_detection.m"
    }
#line 150 "cse_detection.m"
}

#line 133 "cse_detection.m"
static void MR_CALL 
check_hlds__cse_detection__detect_cse_in_preds_3_p_0(
#line 133 "cse_detection.m"
  MR_Word check_hlds__cse_detection__HeadVar__1_1,
#line 133 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2,
#line 133 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_3)
#line 133 "cse_detection.m"
{
#line 136 "cse_detection.m"
  while (MR_TRUE)
#line 136 "cse_detection.m"
    {
#line 136 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 136 "cse_detection.m"
      {
#line 136 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;

#line 136 "cse_detection.m"
        if ((check_hlds__cse_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 136 "cse_detection.m"
          *check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_3 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2;
#line 136 "cse_detection.m"
        else
#line 137 "cse_detection.m"
          {
#line 137 "cse_detection.m"
            MR_Word check_hlds__cse_detection__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 137 "cse_detection.m"
            MR_Word check_hlds__cse_detection__PredIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__cse_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 137 "cse_detection.m"
            MR_Word check_hlds__cse_detection__PredTable_10;
#line 137 "cse_detection.m"
            MR_Word check_hlds__cse_detection__PredInfo_11;
#line 137 "cse_detection.m"
            MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_14_14;
#line 137 "cse_detection.m"
            MR_Word check_hlds__cse_detection__ProcIds_23;
#line 139 "cse_detection.m"
            MR_Box check_hlds__cse_detection__conv0_PredInfo_11;

#line 138 "cse_detection.m"
            {
#line 138 "cse_detection.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2, &check_hlds__cse_detection__PredTable_10);
            }
#line 139 "cse_detection.m"
            {
#line 139 "cse_detection.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__cse_detection__PredTable_10, ((MR_Box) (check_hlds__cse_detection__PredId_7)), &check_hlds__cse_detection__conv0_PredInfo_11);
            }
#line 139 "cse_detection.m"
            check_hlds__cse_detection__PredInfo_11 = ((MR_Word) check_hlds__cse_detection__conv0_PredInfo_11);
#line 147 "cse_detection.m"
            {
#line 147 "cse_detection.m"
              check_hlds__cse_detection__ProcIds_23 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(check_hlds__cse_detection__PredInfo_11);
            }
#line 148 "cse_detection.m"
            {
#line 148 "cse_detection.m"
              check_hlds__cse_detection__detect_cse_in_procs_4_p_0(check_hlds__cse_detection__PredId_7, check_hlds__cse_detection__ProcIds_23, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_14_14);
            }
#line 141 "cse_detection.m"
            /* direct tailcall eliminated */
#line 141 "cse_detection.m"
            {
#line 141 "cse_detection.m"
              MR_Word check_hlds__cse_detection__HeadVar__1__tmp_copy_1 = check_hlds__cse_detection__PredIds_8;
#line 141 "cse_detection.m"
              MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_14_14;

#line 141 "cse_detection.m"
              check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_2 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
#line 141 "cse_detection.m"
              check_hlds__cse_detection__HeadVar__1_1 = check_hlds__cse_detection__HeadVar__1__tmp_copy_1;
#line 141 "cse_detection.m"
            }
#line 141 "cse_detection.m"
            continue;
#line 137 "cse_detection.m"
          }
#line 136 "cse_detection.m"
      }
#line 136 "cse_detection.m"
      break;
#line 136 "cse_detection.m"
    }
#line 133 "cse_detection.m"
}

#line 84 "cse_detection.m"
void MR_CALL 
check_hlds__cse_detection__detect_cse_in_proc_4_p_0(
#line 84 "cse_detection.m"
  MR_Word check_hlds__cse_detection__PredId_5,
#line 84 "cse_detection.m"
  MR_Integer check_hlds__cse_detection__ProcId_6,
#line 84 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33,
#line 84 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_34)
#line 84 "cse_detection.m"
{
#line 158 "cse_detection.m"
  while (MR_TRUE)
#line 158 "cse_detection.m"
    {
#line 158 "cse_detection.m"
      /* tailcall optimized into a loop */
#line 158 "cse_detection.m"
      {
#line 158 "cse_detection.m"
        MR_bool check_hlds__cse_detection__succeeded;
#line 158 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeCtorInfo_76_76;
#line 158 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeCtorInfo_77_77;
#line 158 "cse_detection.m"
        MR_Word check_hlds__cse_detection__TypeCtorInfo_79_79;
#line 158 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Globals_8;
#line 158 "cse_detection.m"
        MR_Word check_hlds__cse_detection__VeryVerbose_9;
#line 158 "cse_detection.m"
        MR_Word check_hlds__cse_detection__PredTable0_11;
#line 158 "cse_detection.m"
        MR_Word check_hlds__cse_detection__PredInfo0_12;
#line 158 "cse_detection.m"
        MR_Word check_hlds__cse_detection__ProcTable0_13;
#line 158 "cse_detection.m"
        MR_Word check_hlds__cse_detection__ProcInfo0_14;
#line 158 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Redo_15;
#line 158 "cse_detection.m"
        MR_Word check_hlds__cse_detection__ProcInfo1_16;
#line 158 "cse_detection.m"
        MR_Word check_hlds__cse_detection__ProcTable1_17;
#line 158 "cse_detection.m"
        MR_Word check_hlds__cse_detection__PredInfo1_18;
#line 158 "cse_detection.m"
        MR_Word check_hlds__cse_detection__PredTable1_19;
#line 158 "cse_detection.m"
        MR_Word check_hlds__cse_detection__Statistics_20;
#line 158 "cse_detection.m"
        MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42;
#line 175 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv0_PredInfo0_12;
#line 177 "cse_detection.m"
        MR_Box check_hlds__cse_detection__conv1_ProcInfo0_14;

#line 159 "cse_detection.m"
        {
#line 159 "cse_detection.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__cse_detection__Globals_8);
        }
#line 160 "cse_detection.m"
        {
#line 160 "cse_detection.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__cse_detection__Globals_8, (MR_Integer) 47, &check_hlds__cse_detection__VeryVerbose_9);
        }
#line 168 "cse_detection.m"
#line 168 "cse_detection.m"
        switch (check_hlds__cse_detection__VeryVerbose_9) {
#line 168 "cse_detection.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 168 "cse_detection.m"
          case (MR_Integer) 0:
#line 169 "cse_detection.m"
            {
#line 169 "cse_detection.m"
            }
#line 168 "cse_detection.m"
            break;
#line 168 "cse_detection.m"
          case (MR_Integer) 1:
#line 163 "cse_detection.m"
            {
#line 164 "cse_detection.m"
              {
#line 164 "cse_detection.m"
                mercury__io__write_string_3_p_0((MR_String) "% Detecting common deconstructions for ");
              }
#line 165 "cse_detection.m"
              {
#line 165 "cse_detection.m"
                hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, check_hlds__cse_detection__PredId_5);
              }
#line 166 "cse_detection.m"
              {
#line 166 "cse_detection.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
#line 163 "cse_detection.m"
            }
#line 168 "cse_detection.m"
            break;
#line 168 "cse_detection.m"
        }
#line 174 "cse_detection.m"
        {
#line 174 "cse_detection.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__cse_detection__PredTable0_11);
        }
#line 6632 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeCtorInfo_76_76 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 6634 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeCtorInfo_77_77 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 175 "cse_detection.m"
        {
#line 175 "cse_detection.m"
          mercury__map__lookup_3_p_0(check_hlds__cse_detection__TypeCtorInfo_76_76, check_hlds__cse_detection__TypeCtorInfo_77_77, check_hlds__cse_detection__PredTable0_11, ((MR_Box) (check_hlds__cse_detection__PredId_5)), &check_hlds__cse_detection__conv0_PredInfo0_12);
        }
#line 175 "cse_detection.m"
        check_hlds__cse_detection__PredInfo0_12 = ((MR_Word) check_hlds__cse_detection__conv0_PredInfo0_12);
#line 176 "cse_detection.m"
        {
#line 176 "cse_detection.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__cse_detection__PredInfo0_12, &check_hlds__cse_detection__ProcTable0_13);
        }
#line 6648 "check_hlds.cse_detection.c"
        check_hlds__cse_detection__TypeCtorInfo_79_79 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 177 "cse_detection.m"
        {
#line 177 "cse_detection.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__cse_detection__TypeCtorInfo_79_79, check_hlds__cse_detection__ProcTable0_13, check_hlds__cse_detection__ProcId_6, &check_hlds__cse_detection__conv1_ProcInfo0_14);
        }
#line 177 "cse_detection.m"
        check_hlds__cse_detection__ProcInfo0_14 = ((MR_Word) check_hlds__cse_detection__conv1_ProcInfo0_14);
#line 179 "cse_detection.m"
        {
#line 179 "cse_detection.m"
          check_hlds__cse_detection__detect_cse_in_proc_pass_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__cse_detection__Redo_15, check_hlds__cse_detection__ProcInfo0_14, &check_hlds__cse_detection__ProcInfo1_16);
        }
#line 181 "cse_detection.m"
        {
#line 181 "cse_detection.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__cse_detection__TypeCtorInfo_79_79, check_hlds__cse_detection__ProcId_6, ((MR_Box) (check_hlds__cse_detection__ProcInfo1_16)), check_hlds__cse_detection__ProcTable0_13, &check_hlds__cse_detection__ProcTable1_17);
        }
#line 182 "cse_detection.m"
        {
#line 182 "cse_detection.m"
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__cse_detection__ProcTable1_17, check_hlds__cse_detection__PredInfo0_12, &check_hlds__cse_detection__PredInfo1_18);
        }
#line 183 "cse_detection.m"
        {
#line 183 "cse_detection.m"
          mercury__map__det_update_4_p_0(check_hlds__cse_detection__TypeCtorInfo_76_76, check_hlds__cse_detection__TypeCtorInfo_77_77, ((MR_Box) (check_hlds__cse_detection__PredId_5)), ((MR_Box) (check_hlds__cse_detection__PredInfo1_18)), check_hlds__cse_detection__PredTable0_11, &check_hlds__cse_detection__PredTable1_19);
        }
#line 184 "cse_detection.m"
        {
#line 184 "cse_detection.m"
          hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__cse_detection__PredTable1_19, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42);
        }
#line 186 "cse_detection.m"
        {
#line 186 "cse_detection.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__cse_detection__Globals_8, (MR_Integer) 57, &check_hlds__cse_detection__Statistics_20);
        }
#line 188 "cse_detection.m"
        {
#line 188 "cse_detection.m"
          libs__file_util__maybe_report_stats_3_p_0(check_hlds__cse_detection__Statistics_20);
        }
#line 192 "cse_detection.m"
#line 192 "cse_detection.m"
        switch (check_hlds__cse_detection__Redo_15) {
#line 192 "cse_detection.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 192 "cse_detection.m"
          case (MR_Integer) 0:
#line 191 "cse_detection.m"
            *check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_34 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42;
#line 192 "cse_detection.m"
            break;
#line 192 "cse_detection.m"
          case (MR_Integer) 1:
#line 193 "cse_detection.m"
            {
#line 193 "cse_detection.m"
              MR_Word check_hlds__cse_detection__PredTable2_24;
#line 193 "cse_detection.m"
              MR_Word check_hlds__cse_detection__PredInfo2_25;
#line 193 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ProcTable2_26;
#line 193 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ProcInfo2_27;
#line 193 "cse_detection.m"
              MR_Word check_hlds__cse_detection__SwitchDetectInfo_28;
#line 193 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ProcInfo_29;
#line 193 "cse_detection.m"
              MR_Word check_hlds__cse_detection__ProcTable3_30;
#line 193 "cse_detection.m"
              MR_Word check_hlds__cse_detection__PredInfo3_31;
#line 193 "cse_detection.m"
              MR_Word check_hlds__cse_detection__PredTable3_32;
#line 193 "cse_detection.m"
              MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52;
#line 193 "cse_detection.m"
              MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_64_64;
#line 230 "cse_detection.m"
              MR_Box check_hlds__cse_detection__conv2_PredInfo2_25;
#line 232 "cse_detection.m"
              MR_Box check_hlds__cse_detection__conv3_ProcInfo2_27;

#line 6734 "check_hlds.cse_detection.c"
#line 6735 "check_hlds.cse_detection.c"
              switch (check_hlds__cse_detection__VeryVerbose_9) {
#line 6737 "check_hlds.cse_detection.c"
                default: /*NOTREACHED*/ MR_assert(0);
#line 6739 "check_hlds.cse_detection.c"
                case (MR_Integer) 0:
#line 6741 "check_hlds.cse_detection.c"
                  {
#line 6743 "check_hlds.cse_detection.c"
                    MR_Word check_hlds__cse_detection__ModeSpecs_21;
#line 6745 "check_hlds.cse_detection.c"
                    MR_Word check_hlds__cse_detection__ContainsErrors_23;
#line 204 "cse_detection.m"
                    MR_Word check_hlds__cse_detection___Changed_22;

#line 204 "cse_detection.m"
                    {
#line 204 "cse_detection.m"
                      check_hlds__modes__modecheck_proc_6_p_0(check_hlds__cse_detection__ProcId_6, check_hlds__cse_detection__PredId_5, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__cse_detection__ModeSpecs_21, &check_hlds__cse_detection___Changed_22);
                    }
#line 206 "cse_detection.m"
                    {
#line 206 "cse_detection.m"
                      libs__file_util__maybe_report_stats_3_p_0(check_hlds__cse_detection__Statistics_20);
                    }
#line 208 "cse_detection.m"
                    {
#line 208 "cse_detection.m"
                      check_hlds__cse_detection__ContainsErrors_23 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__cse_detection__Globals_8, check_hlds__cse_detection__ModeSpecs_21);
                    }
#line 212 "cse_detection.m"
#line 212 "cse_detection.m"
                    switch (check_hlds__cse_detection__ContainsErrors_23) {
#line 212 "cse_detection.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 212 "cse_detection.m"
                      case (MR_Integer) 0:
#line 213 "cse_detection.m"
                        {
#line 213 "cse_detection.m"
                        }
#line 212 "cse_detection.m"
                        break;
#line 212 "cse_detection.m"
                      case (MR_Integer) 1:
#line 210 "cse_detection.m"
                        {
#line 211 "cse_detection.m"
                          {
#line 211 "cse_detection.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_proc\'/4", (MR_String) "mode check fails when repeated");
#line 211 "cse_detection.m"
                            return;
                          }
#line 210 "cse_detection.m"
                        }
#line 212 "cse_detection.m"
                        break;
#line 212 "cse_detection.m"
                    }
#line 6795 "check_hlds.cse_detection.c"
                  }
#line 6797 "check_hlds.cse_detection.c"
                  break;
#line 6799 "check_hlds.cse_detection.c"
                case (MR_Integer) 1:
#line 6801 "check_hlds.cse_detection.c"
                  {
#line 6803 "check_hlds.cse_detection.c"
                    MR_Word check_hlds__cse_detection__ModeSpecs_91;
#line 6805 "check_hlds.cse_detection.c"
                    MR_Word check_hlds__cse_detection__ContainsErrors_93;
#line 204 "cse_detection.m"
                    MR_Word check_hlds__cse_detection___Changed_80;

#line 197 "cse_detection.m"
                    {
#line 197 "cse_detection.m"
                      mercury__io__write_string_3_p_0((MR_String) "% Repeating mode check for ");
                    }
#line 198 "cse_detection.m"
                    {
#line 198 "cse_detection.m"
                      hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42, check_hlds__cse_detection__PredId_5);
                    }
#line 199 "cse_detection.m"
                    {
#line 199 "cse_detection.m"
                      mercury__io__write_string_3_p_0((MR_String) "\n");
                    }
#line 204 "cse_detection.m"
                    {
#line 204 "cse_detection.m"
                      check_hlds__modes__modecheck_proc_6_p_0(check_hlds__cse_detection__ProcId_6, check_hlds__cse_detection__PredId_5, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_42_42, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__cse_detection__ModeSpecs_91, &check_hlds__cse_detection___Changed_80);
                    }
#line 206 "cse_detection.m"
                    {
#line 206 "cse_detection.m"
                      libs__file_util__maybe_report_stats_3_p_0(check_hlds__cse_detection__Statistics_20);
                    }
#line 208 "cse_detection.m"
                    {
#line 208 "cse_detection.m"
                      check_hlds__cse_detection__ContainsErrors_93 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__cse_detection__Globals_8, check_hlds__cse_detection__ModeSpecs_91);
                    }
#line 212 "cse_detection.m"
#line 212 "cse_detection.m"
                    switch (check_hlds__cse_detection__ContainsErrors_93) {
#line 212 "cse_detection.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 212 "cse_detection.m"
                      case (MR_Integer) 0:
#line 213 "cse_detection.m"
                        {
#line 213 "cse_detection.m"
                        }
#line 212 "cse_detection.m"
                        break;
#line 212 "cse_detection.m"
                      case (MR_Integer) 1:
#line 210 "cse_detection.m"
                        {
#line 211 "cse_detection.m"
                          {
#line 211 "cse_detection.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.cse_detection", (MR_String) "predicate \140check_hlds.cse_detection.detect_cse_in_proc\'/4", (MR_String) "mode check fails when repeated");
#line 211 "cse_detection.m"
                            return;
                          }
#line 210 "cse_detection.m"
                        }
#line 212 "cse_detection.m"
                        break;
#line 212 "cse_detection.m"
                    }
#line 221 "cse_detection.m"
                    {
#line 221 "cse_detection.m"
                      mercury__io__write_string_3_p_0((MR_String) "% Repeating switch detection for ");
                    }
#line 222 "cse_detection.m"
                    {
#line 222 "cse_detection.m"
                      hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, check_hlds__cse_detection__PredId_5);
                    }
#line 223 "cse_detection.m"
                    {
#line 223 "cse_detection.m"
                      mercury__io__write_string_3_p_0((MR_String) "\n");
                    }
#line 6885 "check_hlds.cse_detection.c"
                  }
#line 6887 "check_hlds.cse_detection.c"
                  break;
#line 6889 "check_hlds.cse_detection.c"
              }
#line 229 "cse_detection.m"
              {
#line 229 "cse_detection.m"
                hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__cse_detection__PredTable2_24);
              }
#line 230 "cse_detection.m"
              {
#line 230 "cse_detection.m"
                mercury__map__lookup_3_p_0(check_hlds__cse_detection__TypeCtorInfo_76_76, check_hlds__cse_detection__TypeCtorInfo_77_77, check_hlds__cse_detection__PredTable2_24, ((MR_Box) (check_hlds__cse_detection__PredId_5)), &check_hlds__cse_detection__conv2_PredInfo2_25);
              }
#line 230 "cse_detection.m"
              check_hlds__cse_detection__PredInfo2_25 = ((MR_Word) check_hlds__cse_detection__conv2_PredInfo2_25);
#line 231 "cse_detection.m"
              {
#line 231 "cse_detection.m"
                hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__cse_detection__PredInfo2_25, &check_hlds__cse_detection__ProcTable2_26);
              }
#line 232 "cse_detection.m"
              {
#line 232 "cse_detection.m"
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__cse_detection__TypeCtorInfo_79_79, check_hlds__cse_detection__ProcTable2_26, check_hlds__cse_detection__ProcId_6, &check_hlds__cse_detection__conv3_ProcInfo2_27);
              }
#line 232 "cse_detection.m"
              check_hlds__cse_detection__ProcInfo2_27 = ((MR_Word) check_hlds__cse_detection__conv3_ProcInfo2_27);
#line 234 "cse_detection.m"
              {
#line 234 "cse_detection.m"
                check_hlds__cse_detection__SwitchDetectInfo_28 = check_hlds__switch_detection__init_switch_detect_info_1_f_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52);
              }
#line 235 "cse_detection.m"
              {
#line 235 "cse_detection.m"
                check_hlds__switch_detection__detect_switches_in_proc_3_p_0(check_hlds__cse_detection__SwitchDetectInfo_28, check_hlds__cse_detection__ProcInfo2_27, &check_hlds__cse_detection__ProcInfo_29);
              }
#line 237 "cse_detection.m"
              {
#line 237 "cse_detection.m"
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__cse_detection__TypeCtorInfo_79_79, check_hlds__cse_detection__ProcId_6, ((MR_Box) (check_hlds__cse_detection__ProcInfo_29)), check_hlds__cse_detection__ProcTable2_26, &check_hlds__cse_detection__ProcTable3_30);
              }
#line 238 "cse_detection.m"
              {
#line 238 "cse_detection.m"
                hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__cse_detection__ProcTable3_30, check_hlds__cse_detection__PredInfo2_25, &check_hlds__cse_detection__PredInfo3_31);
              }
#line 239 "cse_detection.m"
              {
#line 239 "cse_detection.m"
                mercury__map__det_update_4_p_0(check_hlds__cse_detection__TypeCtorInfo_76_76, check_hlds__cse_detection__TypeCtorInfo_77_77, ((MR_Box) (check_hlds__cse_detection__PredId_5)), ((MR_Box) (check_hlds__cse_detection__PredInfo3_31)), check_hlds__cse_detection__PredTable2_24, &check_hlds__cse_detection__PredTable3_32);
              }
#line 240 "cse_detection.m"
              {
#line 240 "cse_detection.m"
                hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__cse_detection__PredTable3_32, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_64_64);
              }
#line 243 "cse_detection.m"
              {
#line 243 "cse_detection.m"
                libs__file_util__maybe_report_stats_3_p_0(check_hlds__cse_detection__Statistics_20);
              }
#line 253 "cse_detection.m"
#line 253 "cse_detection.m"
              switch (check_hlds__cse_detection__VeryVerbose_9) {
#line 253 "cse_detection.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 253 "cse_detection.m"
                case (MR_Integer) 0:
#line 254 "cse_detection.m"
                  {
#line 254 "cse_detection.m"
                  }
#line 253 "cse_detection.m"
                  break;
#line 253 "cse_detection.m"
                case (MR_Integer) 1:
#line 247 "cse_detection.m"
                  {
#line 248 "cse_detection.m"
                    {
#line 248 "cse_detection.m"
                      mercury__io__write_string_3_p_0((MR_String) "% Repeating common deconstruction detection for ");
                    }
#line 250 "cse_detection.m"
                    {
#line 250 "cse_detection.m"
                      hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_64_64, check_hlds__cse_detection__PredId_5);
                    }
#line 251 "cse_detection.m"
                    {
#line 251 "cse_detection.m"
                      mercury__io__write_string_3_p_0((MR_String) "\n");
                    }
#line 247 "cse_detection.m"
                  }
#line 253 "cse_detection.m"
                  break;
#line 253 "cse_detection.m"
              }
#line 256 "cse_detection.m"
              /* direct tailcall eliminated */
#line 256 "cse_detection.m"
              {
#line 256 "cse_detection.m"
                MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_33 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_64_64;

#line 256 "cse_detection.m"
                check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_33 = check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0__tmp_copy_33;
#line 256 "cse_detection.m"
              }
#line 256 "cse_detection.m"
              continue;
#line 193 "cse_detection.m"
            }
#line 192 "cse_detection.m"
            break;
#line 192 "cse_detection.m"
        }
#line 158 "cse_detection.m"
      }
#line 158 "cse_detection.m"
      break;
#line 158 "cse_detection.m"
    }
#line 84 "cse_detection.m"
}

#line 82 "cse_detection.m"
void MR_CALL 
check_hlds__cse_detection__detect_cse_in_module_2_p_0(
#line 82 "cse_detection.m"
  MR_Word check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_5,
#line 82 "cse_detection.m"
  MR_Word * check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_6)
#line 82 "cse_detection.m"
{
#line 127 "cse_detection.m"
  {
#line 127 "cse_detection.m"
    MR_bool check_hlds__cse_detection__succeeded;
#line 127 "cse_detection.m"
    MR_Word check_hlds__cse_detection__PredIds_4;

#line 130 "cse_detection.m"
    {
#line 130 "cse_detection.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_5, &check_hlds__cse_detection__PredIds_4);
    }
#line 131 "cse_detection.m"
    {
#line 131 "cse_detection.m"
      check_hlds__cse_detection__detect_cse_in_preds_3_p_0(check_hlds__cse_detection__PredIds_4, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_0_5, check_hlds__cse_detection__STATE_VARIABLE_ModuleInfo_6);
    }
#line 127 "cse_detection.m"
  }
#line 82 "cse_detection.m"
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
