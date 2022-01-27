/*
** Automatically generated from `common.m'
** by the Mercury compiler,
** version 13.05, configured for x86_64-apple-darwin12.3.0.
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


/* :- module check_hlds.common. */
/* :- implementation. */

/*
INIT mercury__check_hlds__common__init
ENDINIT
*/

#include "check_hlds.common.mih"


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
#include "eqvclass.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
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
#include "transform_hlds.pd_cost.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 138 "check_hlds.common.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__common__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 141 "check_hlds.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 144 "check_hlds.common.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__common__eqvclass__pti_eqvclass_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 147 "check_hlds.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 150 "check_hlds.common.c"
static const MR_PseudoTypeInfo check_hlds__common__check_hlds__common__field_types_call_args_0_0[3];

#line 153 "check_hlds.common.c"
static const MR_DuFunctorDesc check_hlds__common__check_hlds__common__du_functor_desc_call_args_0_0;

#line 156 "check_hlds.common.c"
static const MR_DuFunctorDescPtr check_hlds__common__check_hlds__common__du_stag_ordered_call_args_0_0[1];

#line 159 "check_hlds.common.c"
static const MR_DuPtagLayout check_hlds__common__check_hlds__common__du_ptag_ordered_call_args_0[1];

#line 162 "check_hlds.common.c"
static const MR_DuFunctorDescPtr check_hlds__common__check_hlds__common__du_name_ordered_call_args_0[1];

#line 165 "check_hlds.common.c"
static const MR_Integer check_hlds__common__check_hlds__common__functor_number_map_call_args_0[1];

#line 168 "check_hlds.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__common__eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 171 "check_hlds.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__common__list__ti_list_1check_hlds__common__type_ctor_info_structure_0;

#line 174 "check_hlds.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__common__type_ctor_info_structure_0;

#line 177 "check_hlds.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__common__type_ctor_info_structure_0;

#line 180 "check_hlds.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__common__list__ti_list_1check_hlds__common__type_ctor_info_call_args_0;

#line 183 "check_hlds.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__common__type_ctor_info_call_args_0;

#line 186 "check_hlds.common.c"
static const MR_PseudoTypeInfo check_hlds__common__check_hlds__common__field_types_common_info_0_0[4];

#line 189 "check_hlds.common.c"
static const MR_ConstString check_hlds__common__check_hlds__common__field_names_common_info_0_0[4];

#line 192 "check_hlds.common.c"
static const MR_DuFunctorDesc check_hlds__common__check_hlds__common__du_functor_desc_common_info_0_0;

#line 195 "check_hlds.common.c"
static const MR_DuFunctorDescPtr check_hlds__common__check_hlds__common__du_stag_ordered_common_info_0_0[1];

#line 198 "check_hlds.common.c"
static const MR_DuPtagLayout check_hlds__common__check_hlds__common__du_ptag_ordered_common_info_0[1];

#line 201 "check_hlds.common.c"
static const MR_DuFunctorDescPtr check_hlds__common__check_hlds__common__du_name_ordered_common_info_0[1];

#line 204 "check_hlds.common.c"
static const MR_Integer check_hlds__common__check_hlds__common__functor_number_map_common_info_0[1];

#line 207 "check_hlds.common.c"
static const MR_PseudoTypeInfo check_hlds__common__check_hlds__common__field_types_structure_0_0[2];

#line 210 "check_hlds.common.c"
static const MR_DuFunctorDesc check_hlds__common__check_hlds__common__du_functor_desc_structure_0_0;

#line 213 "check_hlds.common.c"
static const MR_DuFunctorDescPtr check_hlds__common__check_hlds__common__du_stag_ordered_structure_0_0[1];

#line 216 "check_hlds.common.c"
static const MR_DuPtagLayout check_hlds__common__check_hlds__common__du_ptag_ordered_structure_0[1];

#line 219 "check_hlds.common.c"
static const MR_DuFunctorDescPtr check_hlds__common__check_hlds__common__du_name_ordered_structure_0[1];

#line 222 "check_hlds.common.c"
static const MR_Integer check_hlds__common__check_hlds__common__functor_number_map_structure_0[1];

#line 225 "check_hlds.common.c"
static MR_bool MR_CALL 
check_hlds__common____Unify____call_args_0_0_10001(
#line 228 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_1,
#line 230 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2);

#line 233 "check_hlds.common.c"
static void MR_CALL 
check_hlds__common____Compare____call_args_0_0_10001(
#line 236 "check_hlds.common.c"
  MR_Box * check_hlds__common__wrapper_arg_1,
#line 238 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2,
#line 240 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_3);

#line 243 "check_hlds.common.c"
static MR_bool MR_CALL 
check_hlds__common____Unify____common_info_0_0_10001(
#line 246 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_1,
#line 248 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2);

#line 251 "check_hlds.common.c"
static void MR_CALL 
check_hlds__common____Compare____common_info_0_0_10001(
#line 254 "check_hlds.common.c"
  MR_Box * check_hlds__common__wrapper_arg_1,
#line 256 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2,
#line 258 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_3);

#line 261 "check_hlds.common.c"
static MR_bool MR_CALL 
check_hlds__common____Unify____cons_id_map_0_0_10001(
#line 264 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_1,
#line 266 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2);

#line 269 "check_hlds.common.c"
static void MR_CALL 
check_hlds__common____Compare____cons_id_map_0_0_10001(
#line 272 "check_hlds.common.c"
  MR_Box * check_hlds__common__wrapper_arg_1,
#line 274 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2,
#line 276 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_3);

#line 279 "check_hlds.common.c"
static MR_bool MR_CALL 
check_hlds__common____Unify____seen_calls_0_0_10001(
#line 282 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_1,
#line 284 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2);

#line 287 "check_hlds.common.c"
static void MR_CALL 
check_hlds__common____Compare____seen_calls_0_0_10001(
#line 290 "check_hlds.common.c"
  MR_Box * check_hlds__common__wrapper_arg_1,
#line 292 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2,
#line 294 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_3);

#line 297 "check_hlds.common.c"
static MR_bool MR_CALL 
check_hlds__common____Unify____struct_map_0_0_10001(
#line 300 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_1,
#line 302 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2);

#line 305 "check_hlds.common.c"
static void MR_CALL 
check_hlds__common____Compare____struct_map_0_0_10001(
#line 308 "check_hlds.common.c"
  MR_Box * check_hlds__common__wrapper_arg_1,
#line 310 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2,
#line 312 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_3);

#line 315 "check_hlds.common.c"
static MR_bool MR_CALL 
check_hlds__common____Unify____structure_0_0_10001(
#line 318 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_1,
#line 320 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2);

#line 323 "check_hlds.common.c"
static void MR_CALL 
check_hlds__common____Compare____structure_0_0_10001(
#line 326 "check_hlds.common.c"
  MR_Box * check_hlds__common__wrapper_arg_1,
#line 328 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2,
#line 330 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_3);

#line 333 "check_hlds.common.c"
static MR_bool MR_CALL 
check_hlds__common____Unify____structures_0_0_10001(
#line 336 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_1,
#line 338 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2);

#line 341 "check_hlds.common.c"
static void MR_CALL 
check_hlds__common____Compare____structures_0_0_10001(
#line 344 "check_hlds.common.c"
  MR_Box * check_hlds__common__wrapper_arg_1,
#line 346 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2,
#line 348 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_3);

#line 291 "common.m"
static void MR_CALL 
check_hlds__common__IntroducedFrom__pred__common_optimise_construct__291__1_4_p_0(
#line 291 "common.m"
  MR_Word check_hlds__common__HeadVar__1_68,
#line 291 "common.m"
  MR_Integer * check_hlds__common__HeadVar__2_69,
#line 291 "common.m"
  MR_Word check_hlds__common__HeadVar__3_70,
#line 291 "common.m"
  MR_Word * check_hlds__common__HeadVar__4_71);

#line 205 "common.m"
static void MR_CALL 
check_hlds__common____Compare____structures_0_0(
#line 205 "common.m"
  MR_Word * check_hlds__common__HeadVar__1_1,
#line 205 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2,
#line 205 "common.m"
  MR_Word check_hlds__common__HeadVar__3_3);

#line 205 "common.m"
static MR_bool MR_CALL 
check_hlds__common____Unify____structures_0_0(
#line 205 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 205 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2);

#line 206 "common.m"
static void MR_CALL 
check_hlds__common____Compare____structure_0_0(
#line 206 "common.m"
  MR_Word * check_hlds__common__HeadVar__1_1,
#line 206 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2,
#line 206 "common.m"
  MR_Word check_hlds__common__HeadVar__3_3);

#line 206 "common.m"
static MR_bool MR_CALL 
check_hlds__common____Unify____structure_0_0(
#line 206 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 206 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2);

#line 199 "common.m"
static void MR_CALL 
check_hlds__common____Compare____struct_map_0_0(
#line 199 "common.m"
  MR_Word * check_hlds__common__HeadVar__1_1,
#line 199 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2,
#line 199 "common.m"
  MR_Word check_hlds__common__HeadVar__3_3);

#line 199 "common.m"
static MR_bool MR_CALL 
check_hlds__common____Unify____struct_map_0_0(
#line 199 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 199 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2);

#line 209 "common.m"
static void MR_CALL 
check_hlds__common____Compare____seen_calls_0_0(
#line 209 "common.m"
  MR_Word * check_hlds__common__HeadVar__1_1,
#line 209 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2,
#line 209 "common.m"
  MR_Word check_hlds__common__HeadVar__3_3);

#line 209 "common.m"
static MR_bool MR_CALL 
check_hlds__common____Unify____seen_calls_0_0(
#line 209 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 209 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2);

#line 198 "common.m"
static void MR_CALL 
check_hlds__common____Compare____cons_id_map_0_0(
#line 198 "common.m"
  MR_Word * check_hlds__common__HeadVar__1_1,
#line 198 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2,
#line 198 "common.m"
  MR_Word check_hlds__common__HeadVar__3_3);

#line 198 "common.m"
static MR_bool MR_CALL 
check_hlds__common____Unify____cons_id_map_0_0(
#line 198 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 198 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2);

#line 211 "common.m"
static void MR_CALL 
check_hlds__common____Compare____call_args_0_0(
#line 211 "common.m"
  MR_Word * check_hlds__common__HeadVar__1_1,
#line 211 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2,
#line 211 "common.m"
  MR_Word check_hlds__common__HeadVar__3_3);

#line 211 "common.m"
static MR_bool MR_CALL 
check_hlds__common____Unify____call_args_0_0(
#line 211 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 211 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2);

#line 856 "common.m"
static void MR_CALL 
check_hlds__common__apply_induced_substitutions_4_p_0(
#line 856 "common.m"
  MR_Word check_hlds__common__ToVar_5,
#line 856 "common.m"
  MR_Word check_hlds__common__FromVar_6,
#line 856 "common.m"
  MR_Word check_hlds__common__STATE_VARIABLE_Info_0_17,
#line 856 "common.m"
  MR_Word * check_hlds__common__STATE_VARIABLE_Info_18);

#line 830 "common.m"
static MR_bool MR_CALL 
check_hlds__common__types_match_exactly_list_2_p_0(
#line 830 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 830 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2);

#line 806 "common.m"
static MR_bool MR_CALL 
check_hlds__common__types_match_exactly_2_p_0(
#line 806 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 806 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2);

#line 766 "common.m"
static void MR_CALL 
check_hlds__common__generate_assign_8_p_0(
#line 766 "common.m"
  MR_Word check_hlds__common__ToVar_9,
#line 766 "common.m"
  MR_Word check_hlds__common__FromVar_10,
#line 766 "common.m"
  MR_Word check_hlds__common__UniMode_11,
#line 766 "common.m"
  MR_Word check_hlds__common__OldGoalInfo_12,
#line 766 "common.m"
  MR_Word * check_hlds__common__GoalExpr_13,
#line 766 "common.m"
  MR_Word * check_hlds__common__GoalInfo_14,
#line 766 "common.m"
  MR_Word check_hlds__common__STATE_VARIABLE_Info_0_30,
#line 766 "common.m"
  MR_Word * check_hlds__common__STATE_VARIABLE_Info_31);

#line 727 "common.m"
static void MR_CALL 
check_hlds__common__create_output_unifications_7_p_0(
#line 727 "common.m"
  MR_Word check_hlds__common__OldGoalInfo_8,
#line 727 "common.m"
  MR_Word check_hlds__common__OutputArgs_9,
#line 727 "common.m"
  MR_Word check_hlds__common__OldOutputArgs_10,
#line 727 "common.m"
  MR_Word check_hlds__common__UniModes_11,
#line 727 "common.m"
  MR_Word * check_hlds__common__Goals_12,
#line 727 "common.m"
  MR_Word check_hlds__common__STATE_VARIABLE_Info_0_24,
#line 727 "common.m"
  MR_Word * check_hlds__common__STATE_VARIABLE_Info_25);

#line 693 "common.m"
static MR_bool MR_CALL 
check_hlds__common__common_var_lists_are_equiv_3_p_0(
#line 693 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 693 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2,
#line 693 "common.m"
  MR_Word check_hlds__common__HeadVar__3_3);

#line 675 "common.m"
static MR_bool MR_CALL 
check_hlds__common__find_previous_call_5_p_0(
#line 675 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 675 "common.m"
  MR_Word check_hlds__common__InputArgs_8,
#line 675 "common.m"
  MR_Word check_hlds__common__Eqv_9,
#line 675 "common.m"
  MR_Word * check_hlds__common__OutputArgs_10,
#line 675 "common.m"
  MR_Word * check_hlds__common__PrevContext_11);

#line 633 "common.m"
static MR_bool MR_CALL 
check_hlds__common__partition_call_args_7_p_0(
#line 633 "common.m"
  MR_Word check_hlds__common__VarTypes_1,
#line 633 "common.m"
  MR_Word check_hlds__common__ModuleInfo_2,
#line 633 "common.m"
  MR_Word check_hlds__common__HeadVar__3_3,
#line 633 "common.m"
  MR_Word check_hlds__common__HeadVar__4_4,
#line 633 "common.m"
  MR_Word * check_hlds__common__HeadVar__5_5,
#line 633 "common.m"
  MR_Word * check_hlds__common__HeadVar__6_6,
#line 633 "common.m"
  MR_Word * check_hlds__common__HeadVar__7_7);

#line 542 "common.m"
static void MR_CALL 
check_hlds__common__common_optimise_call_2_9_p_0(
#line 542 "common.m"
  MR_Word check_hlds__common__SeenCall_10,
#line 542 "common.m"
  MR_Word check_hlds__common__InputArgs_11,
#line 542 "common.m"
  MR_Word check_hlds__common__OutputArgs_12,
#line 542 "common.m"
  MR_Word check_hlds__common__Modes_13,
#line 542 "common.m"
  MR_Word check_hlds__common__GoalInfo_14,
#line 542 "common.m"
  MR_Word check_hlds__common__GoalExpr0_15,
#line 542 "common.m"
  MR_Word * check_hlds__common__GoalExpr_16,
#line 542 "common.m"
  MR_Word check_hlds__common__STATE_VARIABLE_Info_0_43,
#line 542 "common.m"
  MR_Word * check_hlds__common__STATE_VARIABLE_Info_44);

#line 468 "common.m"
static void MR_CALL 
check_hlds__common__do_record_cell_in_struct_map_5_p_0(
#line 468 "common.m"
  MR_Word check_hlds__common__TypeCtor_6,
#line 468 "common.m"
  MR_Word check_hlds__common__ConsId_7,
#line 468 "common.m"
  MR_Word check_hlds__common__Struct_8,
#line 468 "common.m"
  MR_Word check_hlds__common__STATE_VARIABLE_StructMap_0_14,
#line 468 "common.m"
  MR_Word * check_hlds__common__STATE_VARIABLE_StructMap_15);

#line 450 "common.m"
static void MR_CALL 
check_hlds__common__record_cell_in_maps_6_p_0(
#line 450 "common.m"
  MR_Word check_hlds__common__TypeCtor_7,
#line 450 "common.m"
  MR_Word check_hlds__common__ConsId_8,
#line 450 "common.m"
  MR_Word check_hlds__common__Struct_9,
#line 450 "common.m"
  MR_Word check_hlds__common__VarEqv_10,
#line 450 "common.m"
  MR_Word check_hlds__common__STATE_VARIABLE_Info_0_17,
#line 450 "common.m"
  MR_Word * check_hlds__common__STATE_VARIABLE_Info_18);

#line 432 "common.m"
static MR_bool MR_CALL 
check_hlds__common__ids_vars_match_3_p_0(
#line 432 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 432 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2,
#line 432 "common.m"
  MR_Word check_hlds__common__HeadVar__3_3);

#line 421 "common.m"
static MR_bool MR_CALL 
check_hlds__common__find_matching_cell_deconstruct_4_p_0(
#line 421 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 421 "common.m"
  MR_Word check_hlds__common__VarEqv_7,
#line 421 "common.m"
  MR_Integer check_hlds__common__VarId_8,
#line 421 "common.m"
  MR_Word * check_hlds__common__Match_9);

#line 410 "common.m"
static MR_bool MR_CALL 
check_hlds__common__find_matching_cell_construct_4_p_0(
#line 410 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 410 "common.m"
  MR_Word check_hlds__common__VarEqv_7,
#line 410 "common.m"
  MR_Word check_hlds__common__ArgVarIds_8,
#line 410 "common.m"
  MR_Word * check_hlds__common__Match_9);

#line 338 "common.m"
static void MR_CALL 
check_hlds__common__common_optimise_deconstruct_12_p_0(
#line 338 "common.m"
  MR_Word check_hlds__common__Var_13,
#line 338 "common.m"
  MR_Word check_hlds__common__ConsId_14,
#line 338 "common.m"
  MR_Word check_hlds__common__ArgVars_15,
#line 338 "common.m"
  MR_Word check_hlds__common__UniModes_16,
#line 338 "common.m"
  MR_Word check_hlds__common__CanFail_17,
#line 338 "common.m"
  MR_Word check_hlds__common__Mode_18,
#line 338 "common.m"
  MR_Word check_hlds__common__GoalExpr0_19,
#line 338 "common.m"
  MR_Word * check_hlds__common__GoalExpr_20,
#line 338 "common.m"
  MR_Word check_hlds__common__GoalInfo0_21,
#line 338 "common.m"
  MR_Word * check_hlds__common__GoalInfo_22,
#line 338 "common.m"
  MR_Word check_hlds__common__STATE_VARIABLE_Info_0_45,
#line 338 "common.m"
  MR_Word * check_hlds__common__STATE_VARIABLE_Info_46);

#line 291 "common.m"
static void MR_CALL 
check_hlds__common__common_optimise_construct_10_p_0_1(
#line 291 "common.m"
  MR_Box check_hlds__common__closure_arg,
#line 291 "common.m"
  MR_Box check_hlds__common__wrapper_arg_1,
#line 291 "common.m"
  MR_Box * check_hlds__common__wrapper_arg_2,
#line 291 "common.m"
  MR_Box check_hlds__common__wrapper_arg_3,
#line 291 "common.m"
  MR_Box * check_hlds__common__wrapper_arg_4);

#line 272 "common.m"
static void MR_CALL 
check_hlds__common__common_optimise_construct_10_p_0(
#line 272 "common.m"
  MR_Word check_hlds__common__Var_11,
#line 272 "common.m"
  MR_Word check_hlds__common__ConsId_12,
#line 272 "common.m"
  MR_Word check_hlds__common__ArgVars_13,
#line 272 "common.m"
  MR_Word check_hlds__common__Mode_14,
#line 272 "common.m"
  MR_Word check_hlds__common__GoalExpr0_15,
#line 272 "common.m"
  MR_Word * check_hlds__common__GoalExpr_16,
#line 272 "common.m"
  MR_Word check_hlds__common__GoalInfo0_17,
#line 272 "common.m"
  MR_Word * check_hlds__common__GoalInfo_18,
#line 272 "common.m"
  MR_Word check_hlds__common__STATE_VARIABLE_Info_0_45,
#line 272 "common.m"
  MR_Word * check_hlds__common__STATE_VARIABLE_Info_46);


static /* final */ const MR_Box check_hlds__common_scalar_common_1[11][2];

static /* final */ const MR_Box check_hlds__common_scalar_common_2[4][3];

static /* final */ const MR_Box check_hlds__common_scalar_common_3[1][4];

static /* final */ const MR_Box check_hlds__common_scalar_common_4[1][7];

static /* final */ const MR_Box check_hlds__common_scalar_common_5[2][1];




static /* final */ const MR_Box check_hlds__common_scalar_common_1[11][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__common__check_hlds__common__type_ctor_info_structure_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__common__check_hlds__common__type_ctor_info_call_args_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1)),
    ((MR_Box) (&check_hlds__common_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__common_scalar_common_1[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning: redundant"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__common_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Here is the previous"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__common_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__common_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__common_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0)),
    ((MR_Box) (&check_hlds__common_scalar_common_1[2]))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__common_scalar_common_4[0])),
    ((MR_Box) (check_hlds__common__common_optimise_construct_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__common_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__common_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__common__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__common__eqvclass__pti_eqvclass_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__common__eqvclass__pti_eqvclass_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__common_scalar_common_5[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
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



#line 881 "check_hlds.common.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__common__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 889 "check_hlds.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 897 "check_hlds.common.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__common__eqvclass__pti_eqvclass_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 905 "check_hlds.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 913 "check_hlds.common.c"
static const MR_PseudoTypeInfo check_hlds__common__check_hlds__common__field_types_call_args_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 920 "check_hlds.common.c"
static const MR_DuFunctorDesc check_hlds__common__check_hlds__common__du_functor_desc_call_args_0_0 = {
  (MR_String) "call_args",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__common__check_hlds__common__field_types_call_args_0_0,
  NULL,
  NULL,
  NULL
};

#line 935 "check_hlds.common.c"
static const MR_DuFunctorDescPtr check_hlds__common__check_hlds__common__du_stag_ordered_call_args_0_0[1] = {
  &check_hlds__common__check_hlds__common__du_functor_desc_call_args_0_0
};

#line 940 "check_hlds.common.c"
static const MR_DuPtagLayout check_hlds__common__check_hlds__common__du_ptag_ordered_call_args_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__common__check_hlds__common__du_stag_ordered_call_args_0_0
  }
};

#line 949 "check_hlds.common.c"
static const MR_DuFunctorDescPtr check_hlds__common__check_hlds__common__du_name_ordered_call_args_0[1] = {
  &check_hlds__common__check_hlds__common__du_functor_desc_call_args_0_0
};

#line 954 "check_hlds.common.c"
static const MR_Integer check_hlds__common__check_hlds__common__functor_number_map_call_args_0[1] = {
  (MR_Integer) 0
};

#line 959 "check_hlds.common.c"
const MR_TypeCtorInfo_Struct check_hlds__common__check_hlds__common__type_ctor_info_call_args_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__common____Unify____call_args_0_0_10001)),
  ((MR_Box) (check_hlds__common____Compare____call_args_0_0_10001)),
  (MR_String) "check_hlds.common",
  (MR_String) "call_args",
  {
    check_hlds__common__check_hlds__common__du_name_ordered_call_args_0
  },
  {
    check_hlds__common__check_hlds__common__du_ptag_ordered_call_args_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__common__check_hlds__common__functor_number_map_call_args_0
};

#line 980 "check_hlds.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__common__eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1,
  {
    (MR_TypeInfo) &check_hlds__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 988 "check_hlds.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__common__list__ti_list_1check_hlds__common__type_ctor_info_structure_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__common__check_hlds__common__type_ctor_info_structure_0
  }
};

#line 996 "check_hlds.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__common__type_ctor_info_structure_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_TypeInfo) &check_hlds__common__list__ti_list_1check_hlds__common__type_ctor_info_structure_0
  }
};

#line 1005 "check_hlds.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__common__type_ctor_info_structure_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &check_hlds__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__common__type_ctor_info_structure_0
  }
};

#line 1014 "check_hlds.common.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__common__list__ti_list_1check_hlds__common__type_ctor_info_call_args_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__common__check_hlds__common__type_ctor_info_call_args_0
  }
};

#line 1022 "check_hlds.common.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__common__type_ctor_info_call_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0,
    (MR_TypeInfo) &check_hlds__common__list__ti_list_1check_hlds__common__type_ctor_info_call_args_0
  }
};

#line 1031 "check_hlds.common.c"
static const MR_PseudoTypeInfo check_hlds__common__check_hlds__common__field_types_common_info_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__common__eqvclass__ti_eqvclass_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__common__type_ctor_info_structure_0,
  (MR_PseudoTypeInfo) &check_hlds__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__common__type_ctor_info_structure_0,
  (MR_PseudoTypeInfo) &check_hlds__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__common__type_ctor_info_call_args_0
};

#line 1039 "check_hlds.common.c"
static const MR_ConstString check_hlds__common__check_hlds__common__field_names_common_info_0_0[4] = {
  (MR_String) "var_eqv",
  (MR_String) "all_structs",
  (MR_String) "since_call_structs",
  (MR_String) "seen_calls"
};

#line 1047 "check_hlds.common.c"
static const MR_DuFunctorDesc check_hlds__common__check_hlds__common__du_functor_desc_common_info_0_0 = {
  (MR_String) "common_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__common__check_hlds__common__field_types_common_info_0_0,
  check_hlds__common__check_hlds__common__field_names_common_info_0_0,
  NULL,
  NULL
};

#line 1062 "check_hlds.common.c"
static const MR_DuFunctorDescPtr check_hlds__common__check_hlds__common__du_stag_ordered_common_info_0_0[1] = {
  &check_hlds__common__check_hlds__common__du_functor_desc_common_info_0_0
};

#line 1067 "check_hlds.common.c"
static const MR_DuPtagLayout check_hlds__common__check_hlds__common__du_ptag_ordered_common_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__common__check_hlds__common__du_stag_ordered_common_info_0_0
  }
};

#line 1076 "check_hlds.common.c"
static const MR_DuFunctorDescPtr check_hlds__common__check_hlds__common__du_name_ordered_common_info_0[1] = {
  &check_hlds__common__check_hlds__common__du_functor_desc_common_info_0_0
};

#line 1081 "check_hlds.common.c"
static const MR_Integer check_hlds__common__check_hlds__common__functor_number_map_common_info_0[1] = {
  (MR_Integer) 0
};

#line 1086 "check_hlds.common.c"
const MR_TypeCtorInfo_Struct check_hlds__common__check_hlds__common__type_ctor_info_common_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__common____Unify____common_info_0_0_10001)),
  ((MR_Box) (check_hlds__common____Compare____common_info_0_0_10001)),
  (MR_String) "check_hlds.common",
  (MR_String) "common_info",
  {
    check_hlds__common__check_hlds__common__du_name_ordered_common_info_0
  },
  {
    check_hlds__common__check_hlds__common__du_ptag_ordered_common_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__common__check_hlds__common__functor_number_map_common_info_0
};

#line 1107 "check_hlds.common.c"
const MR_TypeCtorInfo_Struct check_hlds__common__check_hlds__common__type_ctor_info_cons_id_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__common____Unify____cons_id_map_0_0_10001)),
  ((MR_Box) (check_hlds__common____Compare____cons_id_map_0_0_10001)),
  (MR_String) "check_hlds.common",
  (MR_String) "cons_id_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__common__type_ctor_info_structure_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1128 "check_hlds.common.c"
const MR_TypeCtorInfo_Struct check_hlds__common__check_hlds__common__type_ctor_info_seen_calls_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__common____Unify____seen_calls_0_0_10001)),
  ((MR_Box) (check_hlds__common____Compare____seen_calls_0_0_10001)),
  (MR_String) "check_hlds.common",
  (MR_String) "seen_calls",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__common__tree234__ti_tree234_2check_hlds__det_report__type_ctor_info_seen_call_id_0list__ti_list_1check_hlds__common__type_ctor_info_call_args_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1149 "check_hlds.common.c"
const MR_TypeCtorInfo_Struct check_hlds__common__check_hlds__common__type_ctor_info_struct_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__common____Unify____struct_map_0_0_10001)),
  ((MR_Box) (check_hlds__common____Compare____struct_map_0_0_10001)),
  (MR_String) "check_hlds.common",
  (MR_String) "struct_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__common__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1check_hlds__common__type_ctor_info_structure_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1170 "check_hlds.common.c"
static const MR_PseudoTypeInfo check_hlds__common__check_hlds__common__field_types_structure_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__common__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__common__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1176 "check_hlds.common.c"
static const MR_DuFunctorDesc check_hlds__common__check_hlds__common__du_functor_desc_structure_0_0 = {
  (MR_String) "structure",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__common__check_hlds__common__field_types_structure_0_0,
  NULL,
  NULL,
  NULL
};

#line 1191 "check_hlds.common.c"
static const MR_DuFunctorDescPtr check_hlds__common__check_hlds__common__du_stag_ordered_structure_0_0[1] = {
  &check_hlds__common__check_hlds__common__du_functor_desc_structure_0_0
};

#line 1196 "check_hlds.common.c"
static const MR_DuPtagLayout check_hlds__common__check_hlds__common__du_ptag_ordered_structure_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__common__check_hlds__common__du_stag_ordered_structure_0_0
  }
};

#line 1205 "check_hlds.common.c"
static const MR_DuFunctorDescPtr check_hlds__common__check_hlds__common__du_name_ordered_structure_0[1] = {
  &check_hlds__common__check_hlds__common__du_functor_desc_structure_0_0
};

#line 1210 "check_hlds.common.c"
static const MR_Integer check_hlds__common__check_hlds__common__functor_number_map_structure_0[1] = {
  (MR_Integer) 0
};

#line 1215 "check_hlds.common.c"
const MR_TypeCtorInfo_Struct check_hlds__common__check_hlds__common__type_ctor_info_structure_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__common____Unify____structure_0_0_10001)),
  ((MR_Box) (check_hlds__common____Compare____structure_0_0_10001)),
  (MR_String) "check_hlds.common",
  (MR_String) "structure",
  {
    check_hlds__common__check_hlds__common__du_name_ordered_structure_0
  },
  {
    check_hlds__common__check_hlds__common__du_ptag_ordered_structure_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__common__check_hlds__common__functor_number_map_structure_0
};

#line 1236 "check_hlds.common.c"
const MR_TypeCtorInfo_Struct check_hlds__common__check_hlds__common__type_ctor_info_structures_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__common____Unify____structures_0_0_10001)),
  ((MR_Box) (check_hlds__common____Compare____structures_0_0_10001)),
  (MR_String) "check_hlds.common",
  (MR_String) "structures",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__common__list__ti_list_1check_hlds__common__type_ctor_info_structure_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1257 "check_hlds.common.c"
static MR_bool MR_CALL 
check_hlds__common____Unify____call_args_0_0_10001(
#line 1260 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_1,
#line 1262 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2)
#line 1264 "check_hlds.common.c"
{
#line 1266 "check_hlds.common.c"
  {
#line 1268 "check_hlds.common.c"
    MR_bool check_hlds__common__succeeded;

#line 1271 "check_hlds.common.c"
    {
#line 1273 "check_hlds.common.c"
      check_hlds__common__succeeded = check_hlds__common____Unify____call_args_0_0(((MR_Word) check_hlds__common__wrapper_arg_1), ((MR_Word) check_hlds__common__wrapper_arg_2));
    }
#line 1276 "check_hlds.common.c"
    return check_hlds__common__succeeded;
#line 1278 "check_hlds.common.c"
  }
#line 1280 "check_hlds.common.c"
}

#line 1283 "check_hlds.common.c"
static void MR_CALL 
check_hlds__common____Compare____call_args_0_0_10001(
#line 1286 "check_hlds.common.c"
  MR_Box * check_hlds__common__wrapper_arg_1,
#line 1288 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2,
#line 1290 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_3)
#line 1292 "check_hlds.common.c"
{
#line 1294 "check_hlds.common.c"
  {
#line 1296 "check_hlds.common.c"
    MR_Word check_hlds__common__conv0_HeadVar__1_1;

#line 1299 "check_hlds.common.c"
    {
#line 1301 "check_hlds.common.c"
      check_hlds__common____Compare____call_args_0_0(&check_hlds__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__common__wrapper_arg_2), ((MR_Word) check_hlds__common__wrapper_arg_3));
    }
#line 1304 "check_hlds.common.c"
    *check_hlds__common__wrapper_arg_1 = ((MR_Box) (check_hlds__common__conv0_HeadVar__1_1));
#line 1306 "check_hlds.common.c"
  }
#line 1308 "check_hlds.common.c"
}

#line 1311 "check_hlds.common.c"
static MR_bool MR_CALL 
check_hlds__common____Unify____common_info_0_0_10001(
#line 1314 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_1,
#line 1316 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2)
#line 1318 "check_hlds.common.c"
{
#line 1320 "check_hlds.common.c"
  {
#line 1322 "check_hlds.common.c"
    MR_bool check_hlds__common__succeeded;

#line 1325 "check_hlds.common.c"
    {
#line 1327 "check_hlds.common.c"
      check_hlds__common__succeeded = check_hlds__common____Unify____common_info_0_0(((MR_Word) check_hlds__common__wrapper_arg_1), ((MR_Word) check_hlds__common__wrapper_arg_2));
    }
#line 1330 "check_hlds.common.c"
    return check_hlds__common__succeeded;
#line 1332 "check_hlds.common.c"
  }
#line 1334 "check_hlds.common.c"
}

#line 1337 "check_hlds.common.c"
static void MR_CALL 
check_hlds__common____Compare____common_info_0_0_10001(
#line 1340 "check_hlds.common.c"
  MR_Box * check_hlds__common__wrapper_arg_1,
#line 1342 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2,
#line 1344 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_3)
#line 1346 "check_hlds.common.c"
{
#line 1348 "check_hlds.common.c"
  {
#line 1350 "check_hlds.common.c"
    MR_Word check_hlds__common__conv0_HeadVar__1_1;

#line 1353 "check_hlds.common.c"
    {
#line 1355 "check_hlds.common.c"
      check_hlds__common____Compare____common_info_0_0(&check_hlds__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__common__wrapper_arg_2), ((MR_Word) check_hlds__common__wrapper_arg_3));
    }
#line 1358 "check_hlds.common.c"
    *check_hlds__common__wrapper_arg_1 = ((MR_Box) (check_hlds__common__conv0_HeadVar__1_1));
#line 1360 "check_hlds.common.c"
  }
#line 1362 "check_hlds.common.c"
}

#line 1365 "check_hlds.common.c"
static MR_bool MR_CALL 
check_hlds__common____Unify____cons_id_map_0_0_10001(
#line 1368 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_1,
#line 1370 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2)
#line 1372 "check_hlds.common.c"
{
#line 1374 "check_hlds.common.c"
  {
#line 1376 "check_hlds.common.c"
    MR_bool check_hlds__common__succeeded;

#line 1379 "check_hlds.common.c"
    {
#line 1381 "check_hlds.common.c"
      check_hlds__common__succeeded = check_hlds__common____Unify____cons_id_map_0_0(((MR_Word) check_hlds__common__wrapper_arg_1), ((MR_Word) check_hlds__common__wrapper_arg_2));
    }
#line 1384 "check_hlds.common.c"
    return check_hlds__common__succeeded;
#line 1386 "check_hlds.common.c"
  }
#line 1388 "check_hlds.common.c"
}

#line 1391 "check_hlds.common.c"
static void MR_CALL 
check_hlds__common____Compare____cons_id_map_0_0_10001(
#line 1394 "check_hlds.common.c"
  MR_Box * check_hlds__common__wrapper_arg_1,
#line 1396 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2,
#line 1398 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_3)
#line 1400 "check_hlds.common.c"
{
#line 1402 "check_hlds.common.c"
  {
#line 1404 "check_hlds.common.c"
    MR_Word check_hlds__common__conv0_HeadVar__1_1;

#line 1407 "check_hlds.common.c"
    {
#line 1409 "check_hlds.common.c"
      check_hlds__common____Compare____cons_id_map_0_0(&check_hlds__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__common__wrapper_arg_2), ((MR_Word) check_hlds__common__wrapper_arg_3));
    }
#line 1412 "check_hlds.common.c"
    *check_hlds__common__wrapper_arg_1 = ((MR_Box) (check_hlds__common__conv0_HeadVar__1_1));
#line 1414 "check_hlds.common.c"
  }
#line 1416 "check_hlds.common.c"
}

#line 1419 "check_hlds.common.c"
static MR_bool MR_CALL 
check_hlds__common____Unify____seen_calls_0_0_10001(
#line 1422 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_1,
#line 1424 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2)
#line 1426 "check_hlds.common.c"
{
#line 1428 "check_hlds.common.c"
  {
#line 1430 "check_hlds.common.c"
    MR_bool check_hlds__common__succeeded;

#line 1433 "check_hlds.common.c"
    {
#line 1435 "check_hlds.common.c"
      check_hlds__common__succeeded = check_hlds__common____Unify____seen_calls_0_0(((MR_Word) check_hlds__common__wrapper_arg_1), ((MR_Word) check_hlds__common__wrapper_arg_2));
    }
#line 1438 "check_hlds.common.c"
    return check_hlds__common__succeeded;
#line 1440 "check_hlds.common.c"
  }
#line 1442 "check_hlds.common.c"
}

#line 1445 "check_hlds.common.c"
static void MR_CALL 
check_hlds__common____Compare____seen_calls_0_0_10001(
#line 1448 "check_hlds.common.c"
  MR_Box * check_hlds__common__wrapper_arg_1,
#line 1450 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2,
#line 1452 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_3)
#line 1454 "check_hlds.common.c"
{
#line 1456 "check_hlds.common.c"
  {
#line 1458 "check_hlds.common.c"
    MR_Word check_hlds__common__conv0_HeadVar__1_1;

#line 1461 "check_hlds.common.c"
    {
#line 1463 "check_hlds.common.c"
      check_hlds__common____Compare____seen_calls_0_0(&check_hlds__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__common__wrapper_arg_2), ((MR_Word) check_hlds__common__wrapper_arg_3));
    }
#line 1466 "check_hlds.common.c"
    *check_hlds__common__wrapper_arg_1 = ((MR_Box) (check_hlds__common__conv0_HeadVar__1_1));
#line 1468 "check_hlds.common.c"
  }
#line 1470 "check_hlds.common.c"
}

#line 1473 "check_hlds.common.c"
static MR_bool MR_CALL 
check_hlds__common____Unify____struct_map_0_0_10001(
#line 1476 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_1,
#line 1478 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2)
#line 1480 "check_hlds.common.c"
{
#line 1482 "check_hlds.common.c"
  {
#line 1484 "check_hlds.common.c"
    MR_bool check_hlds__common__succeeded;

#line 1487 "check_hlds.common.c"
    {
#line 1489 "check_hlds.common.c"
      check_hlds__common__succeeded = check_hlds__common____Unify____struct_map_0_0(((MR_Word) check_hlds__common__wrapper_arg_1), ((MR_Word) check_hlds__common__wrapper_arg_2));
    }
#line 1492 "check_hlds.common.c"
    return check_hlds__common__succeeded;
#line 1494 "check_hlds.common.c"
  }
#line 1496 "check_hlds.common.c"
}

#line 1499 "check_hlds.common.c"
static void MR_CALL 
check_hlds__common____Compare____struct_map_0_0_10001(
#line 1502 "check_hlds.common.c"
  MR_Box * check_hlds__common__wrapper_arg_1,
#line 1504 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2,
#line 1506 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_3)
#line 1508 "check_hlds.common.c"
{
#line 1510 "check_hlds.common.c"
  {
#line 1512 "check_hlds.common.c"
    MR_Word check_hlds__common__conv0_HeadVar__1_1;

#line 1515 "check_hlds.common.c"
    {
#line 1517 "check_hlds.common.c"
      check_hlds__common____Compare____struct_map_0_0(&check_hlds__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__common__wrapper_arg_2), ((MR_Word) check_hlds__common__wrapper_arg_3));
    }
#line 1520 "check_hlds.common.c"
    *check_hlds__common__wrapper_arg_1 = ((MR_Box) (check_hlds__common__conv0_HeadVar__1_1));
#line 1522 "check_hlds.common.c"
  }
#line 1524 "check_hlds.common.c"
}

#line 1527 "check_hlds.common.c"
static MR_bool MR_CALL 
check_hlds__common____Unify____structure_0_0_10001(
#line 1530 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_1,
#line 1532 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2)
#line 1534 "check_hlds.common.c"
{
#line 1536 "check_hlds.common.c"
  {
#line 1538 "check_hlds.common.c"
    MR_bool check_hlds__common__succeeded;

#line 1541 "check_hlds.common.c"
    {
#line 1543 "check_hlds.common.c"
      check_hlds__common__succeeded = check_hlds__common____Unify____structure_0_0(((MR_Word) check_hlds__common__wrapper_arg_1), ((MR_Word) check_hlds__common__wrapper_arg_2));
    }
#line 1546 "check_hlds.common.c"
    return check_hlds__common__succeeded;
#line 1548 "check_hlds.common.c"
  }
#line 1550 "check_hlds.common.c"
}

#line 1553 "check_hlds.common.c"
static void MR_CALL 
check_hlds__common____Compare____structure_0_0_10001(
#line 1556 "check_hlds.common.c"
  MR_Box * check_hlds__common__wrapper_arg_1,
#line 1558 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2,
#line 1560 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_3)
#line 1562 "check_hlds.common.c"
{
#line 1564 "check_hlds.common.c"
  {
#line 1566 "check_hlds.common.c"
    MR_Word check_hlds__common__conv0_HeadVar__1_1;

#line 1569 "check_hlds.common.c"
    {
#line 1571 "check_hlds.common.c"
      check_hlds__common____Compare____structure_0_0(&check_hlds__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__common__wrapper_arg_2), ((MR_Word) check_hlds__common__wrapper_arg_3));
    }
#line 1574 "check_hlds.common.c"
    *check_hlds__common__wrapper_arg_1 = ((MR_Box) (check_hlds__common__conv0_HeadVar__1_1));
#line 1576 "check_hlds.common.c"
  }
#line 1578 "check_hlds.common.c"
}

#line 1581 "check_hlds.common.c"
static MR_bool MR_CALL 
check_hlds__common____Unify____structures_0_0_10001(
#line 1584 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_1,
#line 1586 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2)
#line 1588 "check_hlds.common.c"
{
#line 1590 "check_hlds.common.c"
  {
#line 1592 "check_hlds.common.c"
    MR_bool check_hlds__common__succeeded;

#line 1595 "check_hlds.common.c"
    {
#line 1597 "check_hlds.common.c"
      check_hlds__common__succeeded = check_hlds__common____Unify____structures_0_0(((MR_Word) check_hlds__common__wrapper_arg_1), ((MR_Word) check_hlds__common__wrapper_arg_2));
    }
#line 1600 "check_hlds.common.c"
    return check_hlds__common__succeeded;
#line 1602 "check_hlds.common.c"
  }
#line 1604 "check_hlds.common.c"
}

#line 1607 "check_hlds.common.c"
static void MR_CALL 
check_hlds__common____Compare____structures_0_0_10001(
#line 1610 "check_hlds.common.c"
  MR_Box * check_hlds__common__wrapper_arg_1,
#line 1612 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_2,
#line 1614 "check_hlds.common.c"
  MR_Box check_hlds__common__wrapper_arg_3)
#line 1616 "check_hlds.common.c"
{
#line 1618 "check_hlds.common.c"
  {
#line 1620 "check_hlds.common.c"
    MR_Word check_hlds__common__conv0_HeadVar__1_1;

#line 1623 "check_hlds.common.c"
    {
#line 1625 "check_hlds.common.c"
      check_hlds__common____Compare____structures_0_0(&check_hlds__common__conv0_HeadVar__1_1, ((MR_Word) check_hlds__common__wrapper_arg_2), ((MR_Word) check_hlds__common__wrapper_arg_3));
    }
#line 1628 "check_hlds.common.c"
    *check_hlds__common__wrapper_arg_1 = ((MR_Box) (check_hlds__common__conv0_HeadVar__1_1));
#line 1630 "check_hlds.common.c"
  }
#line 1632 "check_hlds.common.c"
}

#line 291 "common.m"
static void MR_CALL 
check_hlds__common__IntroducedFrom__pred__common_optimise_construct__291__1_4_p_0(
#line 291 "common.m"
  MR_Word check_hlds__common__HeadVar__1_68,
#line 291 "common.m"
  MR_Integer * check_hlds__common__HeadVar__2_69,
#line 291 "common.m"
  MR_Word check_hlds__common__HeadVar__3_70,
#line 291 "common.m"
  MR_Word * check_hlds__common__HeadVar__4_71)
#line 291 "common.m"
{
#line 291 "common.m"
  {
#line 291 "common.m"
    MR_bool check_hlds__common__succeeded;

#line 291 "common.m"
    {
#line 291 "common.m"
      mercury__eqvclass__ensure_element_partition_id_4_p_0((MR_Word) &check_hlds__common_scalar_common_1[0], ((MR_Box) (check_hlds__common__HeadVar__1_68)), check_hlds__common__HeadVar__2_69, check_hlds__common__HeadVar__3_70, check_hlds__common__HeadVar__4_71);
#line 291 "common.m"
      return;
    }
#line 291 "common.m"
  }
#line 291 "common.m"
}

#line 205 "common.m"
static void MR_CALL 
check_hlds__common____Compare____structures_0_0(
#line 205 "common.m"
  MR_Word * check_hlds__common__HeadVar__1_1,
#line 205 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2,
#line 205 "common.m"
  MR_Word check_hlds__common__HeadVar__3_3)
#line 205 "common.m"
{
#line 205 "common.m"
  {
#line 205 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 205 "common.m"
    MR_Word check_hlds__common__Cast_HeadVar1_4 = check_hlds__common__HeadVar__2_2;
#line 205 "common.m"
    MR_Word check_hlds__common__Cast_HeadVar2_5 = check_hlds__common__HeadVar__3_3;

#line 205 "common.m"
    {
#line 205 "common.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__common_scalar_common_1[1], check_hlds__common__HeadVar__1_1, ((MR_Box) (check_hlds__common__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__common__Cast_HeadVar2_5)));
#line 205 "common.m"
      return;
    }
#line 205 "common.m"
  }
#line 205 "common.m"
}

#line 205 "common.m"
static MR_bool MR_CALL 
check_hlds__common____Unify____structures_0_0(
#line 205 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 205 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2)
#line 205 "common.m"
{
#line 205 "common.m"
  {
#line 205 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 205 "common.m"
    MR_Word check_hlds__common__Cast_HeadVar1_3 = check_hlds__common__HeadVar__1_1;
#line 205 "common.m"
    MR_Word check_hlds__common__Cast_HeadVar2_4 = check_hlds__common__HeadVar__2_2;

#line 205 "common.m"
    {
#line 205 "common.m"
      return check_hlds__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__common_scalar_common_1[1], ((MR_Box) (check_hlds__common__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__common__Cast_HeadVar2_4)));
    }
#line 205 "common.m"
    return check_hlds__common__succeeded;
#line 205 "common.m"
  }
#line 205 "common.m"
}

#line 206 "common.m"
static void MR_CALL 
check_hlds__common____Compare____structure_0_0(
#line 206 "common.m"
  MR_Word * check_hlds__common__HeadVar__1_1,
#line 206 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2,
#line 206 "common.m"
  MR_Word check_hlds__common__HeadVar__3_3)
#line 206 "common.m"
{
#line 206 "common.m"
  {
#line 206 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 206 "common.m"
    MR_Integer check_hlds__common__CastX_9 = (MR_Integer) check_hlds__common__HeadVar__2_2;
#line 206 "common.m"
    MR_Integer check_hlds__common__CastY_10 = (MR_Integer) check_hlds__common__HeadVar__3_3;

#line 206 "common.m"
    check_hlds__common__succeeded = (check_hlds__common__CastX_9 == check_hlds__common__CastY_10);
#line 206 "common.m"
    if (check_hlds__common__succeeded)
#line 1751 "check_hlds.common.c"
      *check_hlds__common__HeadVar__1_1 = (MR_Integer) 0;
#line 206 "common.m"
    else
#line 206 "common.m"
      {
#line 206 "common.m"
        MR_Word check_hlds__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__2_2, (MR_Integer) 0)));
#line 206 "common.m"
        MR_Word check_hlds__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__2_2, (MR_Integer) 1)));
#line 206 "common.m"
        MR_Word check_hlds__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__3_3, (MR_Integer) 0)));
#line 206 "common.m"
        MR_Word check_hlds__common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__3_3, (MR_Integer) 1)));
#line 206 "common.m"
        MR_Word check_hlds__common__V_8_8;

#line 206 "common.m"
        {
#line 206 "common.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__common_scalar_common_1[0], &check_hlds__common__V_8_8, ((MR_Box) (check_hlds__common__V_4_4)), ((MR_Box) (check_hlds__common__V_6_6)));
        }
#line 1773 "check_hlds.common.c"
        check_hlds__common__succeeded = (check_hlds__common__V_8_8 == (MR_Integer) 0);
#line 206 "common.m"
        check_hlds__common__succeeded = !(check_hlds__common__succeeded);
#line 206 "common.m"
        if (check_hlds__common__succeeded)
#line 206 "common.m"
          *check_hlds__common__HeadVar__1_1 = check_hlds__common__V_8_8;
#line 206 "common.m"
        else
#line 206 "common.m"
          {
#line 206 "common.m"
            {
#line 206 "common.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__common_scalar_common_1[5], check_hlds__common__HeadVar__1_1, ((MR_Box) (check_hlds__common__V_5_5)), ((MR_Box) (check_hlds__common__V_7_7)));
#line 206 "common.m"
              return;
            }
#line 206 "common.m"
          }
#line 206 "common.m"
      }
#line 206 "common.m"
  }
#line 206 "common.m"
}

#line 206 "common.m"
static MR_bool MR_CALL 
check_hlds__common____Unify____structure_0_0(
#line 206 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 206 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2)
#line 206 "common.m"
{
#line 206 "common.m"
  {
#line 206 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 206 "common.m"
    MR_Integer check_hlds__common__CastX_7 = (MR_Integer) check_hlds__common__HeadVar__1_1;
#line 206 "common.m"
    MR_Integer check_hlds__common__CastY_8 = (MR_Integer) check_hlds__common__HeadVar__2_2;

#line 206 "common.m"
    check_hlds__common__succeeded = (check_hlds__common__CastX_7 == check_hlds__common__CastY_8);
#line 206 "common.m"
    if (check_hlds__common__succeeded)
#line 206 "common.m"
      check_hlds__common__succeeded = MR_TRUE;
#line 206 "common.m"
    else
#line 206 "common.m"
      {
#line 206 "common.m"
        MR_Word check_hlds__common__TypeInfo_10_10;
#line 206 "common.m"
        MR_Word check_hlds__common__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__1_1, (MR_Integer) 0)));
#line 206 "common.m"
        MR_Word check_hlds__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__1_1, (MR_Integer) 1)));
#line 206 "common.m"
        MR_Word check_hlds__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__2_2, (MR_Integer) 0)));
#line 206 "common.m"
        MR_Word check_hlds__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__2_2, (MR_Integer) 1)));

#line 1840 "check_hlds.common.c"
        {
#line 1842 "check_hlds.common.c"
          check_hlds__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__common_scalar_common_1[0], ((MR_Box) (check_hlds__common__V_3_3)), ((MR_Box) (check_hlds__common__V_5_5)));
        }
#line 206 "common.m"
        if (check_hlds__common__succeeded)
#line 206 "common.m"
          {
#line 1849 "check_hlds.common.c"
            check_hlds__common__TypeInfo_10_10 = (MR_Word) &check_hlds__common_scalar_common_1[5];
#line 1851 "check_hlds.common.c"
            {
#line 1853 "check_hlds.common.c"
              return check_hlds__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__common__TypeInfo_10_10, ((MR_Box) (check_hlds__common__V_4_4)), ((MR_Box) (check_hlds__common__V_6_6)));
            }
#line 206 "common.m"
          }
#line 206 "common.m"
      }
#line 206 "common.m"
    return check_hlds__common__succeeded;
#line 206 "common.m"
  }
#line 206 "common.m"
}

#line 199 "common.m"
static void MR_CALL 
check_hlds__common____Compare____struct_map_0_0(
#line 199 "common.m"
  MR_Word * check_hlds__common__HeadVar__1_1,
#line 199 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2,
#line 199 "common.m"
  MR_Word check_hlds__common__HeadVar__3_3)
#line 199 "common.m"
{
#line 199 "common.m"
  {
#line 199 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 199 "common.m"
    MR_Word check_hlds__common__Cast_HeadVar1_4 = check_hlds__common__HeadVar__2_2;
#line 199 "common.m"
    MR_Word check_hlds__common__Cast_HeadVar2_5 = check_hlds__common__HeadVar__3_3;

#line 199 "common.m"
    {
#line 199 "common.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__common_scalar_common_2[1], check_hlds__common__HeadVar__1_1, ((MR_Box) (check_hlds__common__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__common__Cast_HeadVar2_5)));
#line 199 "common.m"
      return;
    }
#line 199 "common.m"
  }
#line 199 "common.m"
}

#line 199 "common.m"
static MR_bool MR_CALL 
check_hlds__common____Unify____struct_map_0_0(
#line 199 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 199 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2)
#line 199 "common.m"
{
#line 199 "common.m"
  {
#line 199 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 199 "common.m"
    MR_Word check_hlds__common__Cast_HeadVar1_3 = check_hlds__common__HeadVar__1_1;
#line 199 "common.m"
    MR_Word check_hlds__common__Cast_HeadVar2_4 = check_hlds__common__HeadVar__2_2;

#line 199 "common.m"
    {
#line 199 "common.m"
      return check_hlds__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__common_scalar_common_2[1], ((MR_Box) (check_hlds__common__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__common__Cast_HeadVar2_4)));
    }
#line 199 "common.m"
    return check_hlds__common__succeeded;
#line 199 "common.m"
  }
#line 199 "common.m"
}

#line 209 "common.m"
static void MR_CALL 
check_hlds__common____Compare____seen_calls_0_0(
#line 209 "common.m"
  MR_Word * check_hlds__common__HeadVar__1_1,
#line 209 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2,
#line 209 "common.m"
  MR_Word check_hlds__common__HeadVar__3_3)
#line 209 "common.m"
{
#line 209 "common.m"
  {
#line 209 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 209 "common.m"
    MR_Word check_hlds__common__Cast_HeadVar1_4 = check_hlds__common__HeadVar__2_2;
#line 209 "common.m"
    MR_Word check_hlds__common__Cast_HeadVar2_5 = check_hlds__common__HeadVar__3_3;

#line 209 "common.m"
    {
#line 209 "common.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__common_scalar_common_2[2], check_hlds__common__HeadVar__1_1, ((MR_Box) (check_hlds__common__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__common__Cast_HeadVar2_5)));
#line 209 "common.m"
      return;
    }
#line 209 "common.m"
  }
#line 209 "common.m"
}

#line 209 "common.m"
static MR_bool MR_CALL 
check_hlds__common____Unify____seen_calls_0_0(
#line 209 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 209 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2)
#line 209 "common.m"
{
#line 209 "common.m"
  {
#line 209 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 209 "common.m"
    MR_Word check_hlds__common__Cast_HeadVar1_3 = check_hlds__common__HeadVar__1_1;
#line 209 "common.m"
    MR_Word check_hlds__common__Cast_HeadVar2_4 = check_hlds__common__HeadVar__2_2;

#line 209 "common.m"
    {
#line 209 "common.m"
      return check_hlds__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__common_scalar_common_2[2], ((MR_Box) (check_hlds__common__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__common__Cast_HeadVar2_4)));
    }
#line 209 "common.m"
    return check_hlds__common__succeeded;
#line 209 "common.m"
  }
#line 209 "common.m"
}

#line 198 "common.m"
static void MR_CALL 
check_hlds__common____Compare____cons_id_map_0_0(
#line 198 "common.m"
  MR_Word * check_hlds__common__HeadVar__1_1,
#line 198 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2,
#line 198 "common.m"
  MR_Word check_hlds__common__HeadVar__3_3)
#line 198 "common.m"
{
#line 198 "common.m"
  {
#line 198 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 198 "common.m"
    MR_Word check_hlds__common__Cast_HeadVar1_4 = check_hlds__common__HeadVar__2_2;
#line 198 "common.m"
    MR_Word check_hlds__common__Cast_HeadVar2_5 = check_hlds__common__HeadVar__3_3;

#line 198 "common.m"
    {
#line 198 "common.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__common_scalar_common_2[0], check_hlds__common__HeadVar__1_1, ((MR_Box) (check_hlds__common__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__common__Cast_HeadVar2_5)));
#line 198 "common.m"
      return;
    }
#line 198 "common.m"
  }
#line 198 "common.m"
}

#line 198 "common.m"
static MR_bool MR_CALL 
check_hlds__common____Unify____cons_id_map_0_0(
#line 198 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 198 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2)
#line 198 "common.m"
{
#line 198 "common.m"
  {
#line 198 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 198 "common.m"
    MR_Word check_hlds__common__Cast_HeadVar1_3 = check_hlds__common__HeadVar__1_1;
#line 198 "common.m"
    MR_Word check_hlds__common__Cast_HeadVar2_4 = check_hlds__common__HeadVar__2_2;

#line 198 "common.m"
    {
#line 198 "common.m"
      return check_hlds__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__common_scalar_common_2[0], ((MR_Box) (check_hlds__common__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__common__Cast_HeadVar2_4)));
    }
#line 198 "common.m"
    return check_hlds__common__succeeded;
#line 198 "common.m"
  }
#line 198 "common.m"
}

#line 166 "common.m"
void MR_CALL 
check_hlds__common____Compare____common_info_0_0(
#line 166 "common.m"
  MR_Word * check_hlds__common__HeadVar__1_1,
#line 166 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2,
#line 166 "common.m"
  MR_Word check_hlds__common__HeadVar__3_3)
#line 166 "common.m"
{
#line 166 "common.m"
  {
#line 166 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 166 "common.m"
    MR_Integer check_hlds__common__CastX_15 = (MR_Integer) check_hlds__common__HeadVar__2_2;
#line 166 "common.m"
    MR_Integer check_hlds__common__CastY_16 = (MR_Integer) check_hlds__common__HeadVar__3_3;

#line 166 "common.m"
    check_hlds__common__succeeded = (check_hlds__common__CastX_15 == check_hlds__common__CastY_16);
#line 166 "common.m"
    if (check_hlds__common__succeeded)
#line 2077 "check_hlds.common.c"
      *check_hlds__common__HeadVar__1_1 = (MR_Integer) 0;
#line 166 "common.m"
    else
#line 166 "common.m"
      {
#line 166 "common.m"
        MR_Word check_hlds__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__2_2, (MR_Integer) 0)));
#line 166 "common.m"
        MR_Word check_hlds__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__2_2, (MR_Integer) 1)));
#line 166 "common.m"
        MR_Word check_hlds__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__2_2, (MR_Integer) 2)));
#line 166 "common.m"
        MR_Word check_hlds__common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__2_2, (MR_Integer) 3)));
#line 166 "common.m"
        MR_Word check_hlds__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__3_3, (MR_Integer) 0)));
#line 166 "common.m"
        MR_Word check_hlds__common__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__3_3, (MR_Integer) 1)));
#line 166 "common.m"
        MR_Word check_hlds__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__3_3, (MR_Integer) 2)));
#line 166 "common.m"
        MR_Word check_hlds__common__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__3_3, (MR_Integer) 3)));
#line 166 "common.m"
        MR_Word check_hlds__common__V_12_12;

#line 166 "common.m"
        {
#line 166 "common.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__common_scalar_common_1[3], &check_hlds__common__V_12_12, ((MR_Box) (check_hlds__common__V_4_4)), ((MR_Box) (check_hlds__common__V_8_8)));
        }
#line 2107 "check_hlds.common.c"
        check_hlds__common__succeeded = (check_hlds__common__V_12_12 == (MR_Integer) 0);
#line 166 "common.m"
        check_hlds__common__succeeded = !(check_hlds__common__succeeded);
#line 166 "common.m"
        if (check_hlds__common__succeeded)
#line 166 "common.m"
          *check_hlds__common__HeadVar__1_1 = check_hlds__common__V_12_12;
#line 166 "common.m"
        else
#line 166 "common.m"
          {
#line 166 "common.m"
            MR_Word check_hlds__common__V_13_13;

#line 166 "common.m"
            {
#line 166 "common.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__common_scalar_common_2[1], &check_hlds__common__V_13_13, ((MR_Box) (check_hlds__common__V_5_5)), ((MR_Box) (check_hlds__common__V_9_9)));
            }
#line 2127 "check_hlds.common.c"
            check_hlds__common__succeeded = (check_hlds__common__V_13_13 == (MR_Integer) 0);
#line 166 "common.m"
            check_hlds__common__succeeded = !(check_hlds__common__succeeded);
#line 166 "common.m"
            if (check_hlds__common__succeeded)
#line 166 "common.m"
              *check_hlds__common__HeadVar__1_1 = check_hlds__common__V_13_13;
#line 166 "common.m"
            else
#line 166 "common.m"
              {
#line 166 "common.m"
                MR_Word check_hlds__common__V_14_14;

#line 166 "common.m"
                {
#line 166 "common.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__common_scalar_common_2[1], &check_hlds__common__V_14_14, ((MR_Box) (check_hlds__common__V_6_6)), ((MR_Box) (check_hlds__common__V_10_10)));
                }
#line 2147 "check_hlds.common.c"
                check_hlds__common__succeeded = (check_hlds__common__V_14_14 == (MR_Integer) 0);
#line 166 "common.m"
                check_hlds__common__succeeded = !(check_hlds__common__succeeded);
#line 166 "common.m"
                if (check_hlds__common__succeeded)
#line 166 "common.m"
                  *check_hlds__common__HeadVar__1_1 = check_hlds__common__V_14_14;
#line 166 "common.m"
                else
#line 166 "common.m"
                  {
#line 166 "common.m"
                    {
#line 166 "common.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__common_scalar_common_2[2], check_hlds__common__HeadVar__1_1, ((MR_Box) (check_hlds__common__V_7_7)), ((MR_Box) (check_hlds__common__V_11_11)));
#line 166 "common.m"
                      return;
                    }
#line 166 "common.m"
                  }
#line 166 "common.m"
              }
#line 166 "common.m"
          }
#line 166 "common.m"
      }
#line 166 "common.m"
  }
#line 166 "common.m"
}

#line 166 "common.m"
MR_bool MR_CALL 
check_hlds__common____Unify____common_info_0_0(
#line 166 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 166 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2)
#line 166 "common.m"
{
#line 166 "common.m"
  {
#line 166 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 166 "common.m"
    MR_Integer check_hlds__common__CastX_11 = (MR_Integer) check_hlds__common__HeadVar__1_1;
#line 166 "common.m"
    MR_Integer check_hlds__common__CastY_12 = (MR_Integer) check_hlds__common__HeadVar__2_2;

#line 166 "common.m"
    check_hlds__common__succeeded = (check_hlds__common__CastX_11 == check_hlds__common__CastY_12);
#line 166 "common.m"
    if (check_hlds__common__succeeded)
#line 166 "common.m"
      check_hlds__common__succeeded = MR_TRUE;
#line 166 "common.m"
    else
#line 166 "common.m"
      {
#line 166 "common.m"
        MR_Word check_hlds__common__TypeInfo_14_14;
#line 166 "common.m"
        MR_Word check_hlds__common__TypeInfo_15_15;
#line 166 "common.m"
        MR_Word check_hlds__common__TypeInfo_16_16;
#line 166 "common.m"
        MR_Word check_hlds__common__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__1_1, (MR_Integer) 0)));
#line 166 "common.m"
        MR_Word check_hlds__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__1_1, (MR_Integer) 1)));
#line 166 "common.m"
        MR_Word check_hlds__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__1_1, (MR_Integer) 2)));
#line 166 "common.m"
        MR_Word check_hlds__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__1_1, (MR_Integer) 3)));
#line 166 "common.m"
        MR_Word check_hlds__common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__2_2, (MR_Integer) 0)));
#line 166 "common.m"
        MR_Word check_hlds__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__2_2, (MR_Integer) 1)));
#line 166 "common.m"
        MR_Word check_hlds__common__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__2_2, (MR_Integer) 2)));
#line 166 "common.m"
        MR_Word check_hlds__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__2_2, (MR_Integer) 3)));

#line 2230 "check_hlds.common.c"
        {
#line 2232 "check_hlds.common.c"
          check_hlds__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__common_scalar_common_1[3], ((MR_Box) (check_hlds__common__V_3_3)), ((MR_Box) (check_hlds__common__V_7_7)));
        }
#line 166 "common.m"
        if (check_hlds__common__succeeded)
#line 166 "common.m"
          {
#line 2239 "check_hlds.common.c"
            check_hlds__common__TypeInfo_14_14 = (MR_Word) &check_hlds__common_scalar_common_2[1];
#line 2241 "check_hlds.common.c"
            {
#line 2243 "check_hlds.common.c"
              check_hlds__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__common__TypeInfo_14_14, ((MR_Box) (check_hlds__common__V_4_4)), ((MR_Box) (check_hlds__common__V_8_8)));
            }
#line 166 "common.m"
            if (check_hlds__common__succeeded)
#line 166 "common.m"
              {
#line 2250 "check_hlds.common.c"
                check_hlds__common__TypeInfo_15_15 = (MR_Word) &check_hlds__common_scalar_common_2[1];
#line 2252 "check_hlds.common.c"
                {
#line 2254 "check_hlds.common.c"
                  check_hlds__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__common__TypeInfo_15_15, ((MR_Box) (check_hlds__common__V_5_5)), ((MR_Box) (check_hlds__common__V_9_9)));
                }
#line 166 "common.m"
                if (check_hlds__common__succeeded)
#line 166 "common.m"
                  {
#line 2261 "check_hlds.common.c"
                    check_hlds__common__TypeInfo_16_16 = (MR_Word) &check_hlds__common_scalar_common_2[2];
#line 2263 "check_hlds.common.c"
                    {
#line 2265 "check_hlds.common.c"
                      return check_hlds__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__common__TypeInfo_16_16, ((MR_Box) (check_hlds__common__V_6_6)), ((MR_Box) (check_hlds__common__V_10_10)));
                    }
#line 166 "common.m"
                  }
#line 166 "common.m"
              }
#line 166 "common.m"
          }
#line 166 "common.m"
      }
#line 166 "common.m"
    return check_hlds__common__succeeded;
#line 166 "common.m"
  }
#line 166 "common.m"
}

#line 211 "common.m"
static void MR_CALL 
check_hlds__common____Compare____call_args_0_0(
#line 211 "common.m"
  MR_Word * check_hlds__common__HeadVar__1_1,
#line 211 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2,
#line 211 "common.m"
  MR_Word check_hlds__common__HeadVar__3_3)
#line 211 "common.m"
{
#line 211 "common.m"
  {
#line 211 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 211 "common.m"
    MR_Integer check_hlds__common__CastX_12 = (MR_Integer) check_hlds__common__HeadVar__2_2;
#line 211 "common.m"
    MR_Integer check_hlds__common__CastY_13 = (MR_Integer) check_hlds__common__HeadVar__3_3;

#line 211 "common.m"
    check_hlds__common__succeeded = (check_hlds__common__CastX_12 == check_hlds__common__CastY_13);
#line 211 "common.m"
    if (check_hlds__common__succeeded)
#line 2307 "check_hlds.common.c"
      *check_hlds__common__HeadVar__1_1 = (MR_Integer) 0;
#line 211 "common.m"
    else
#line 211 "common.m"
      {
#line 211 "common.m"
        MR_Word check_hlds__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__2_2, (MR_Integer) 0)));
#line 211 "common.m"
        MR_Word check_hlds__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__2_2, (MR_Integer) 1)));
#line 211 "common.m"
        MR_Word check_hlds__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__2_2, (MR_Integer) 2)));
#line 211 "common.m"
        MR_Word check_hlds__common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__3_3, (MR_Integer) 0)));
#line 211 "common.m"
        MR_Word check_hlds__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__3_3, (MR_Integer) 1)));
#line 211 "common.m"
        MR_Word check_hlds__common__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__3_3, (MR_Integer) 2)));
#line 211 "common.m"
        MR_Word check_hlds__common__V_10_10;

#line 211 "common.m"
        {
#line 211 "common.m"
          mercury__term____Compare____context_0_0(&check_hlds__common__V_10_10, check_hlds__common__V_4_4, check_hlds__common__V_7_7);
        }
#line 2333 "check_hlds.common.c"
        check_hlds__common__succeeded = (check_hlds__common__V_10_10 == (MR_Integer) 0);
#line 211 "common.m"
        check_hlds__common__succeeded = !(check_hlds__common__succeeded);
#line 211 "common.m"
        if (check_hlds__common__succeeded)
#line 211 "common.m"
          *check_hlds__common__HeadVar__1_1 = check_hlds__common__V_10_10;
#line 211 "common.m"
        else
#line 211 "common.m"
          {
#line 211 "common.m"
            MR_Word check_hlds__common__V_11_11;

#line 211 "common.m"
            {
#line 211 "common.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__common_scalar_common_1[5], &check_hlds__common__V_11_11, ((MR_Box) (check_hlds__common__V_5_5)), ((MR_Box) (check_hlds__common__V_8_8)));
            }
#line 2353 "check_hlds.common.c"
            check_hlds__common__succeeded = (check_hlds__common__V_11_11 == (MR_Integer) 0);
#line 211 "common.m"
            check_hlds__common__succeeded = !(check_hlds__common__succeeded);
#line 211 "common.m"
            if (check_hlds__common__succeeded)
#line 211 "common.m"
              *check_hlds__common__HeadVar__1_1 = check_hlds__common__V_11_11;
#line 211 "common.m"
            else
#line 211 "common.m"
              {
#line 211 "common.m"
                {
#line 211 "common.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__common_scalar_common_1[5], check_hlds__common__HeadVar__1_1, ((MR_Box) (check_hlds__common__V_6_6)), ((MR_Box) (check_hlds__common__V_9_9)));
#line 211 "common.m"
                  return;
                }
#line 211 "common.m"
              }
#line 211 "common.m"
          }
#line 211 "common.m"
      }
#line 211 "common.m"
  }
#line 211 "common.m"
}

#line 211 "common.m"
static MR_bool MR_CALL 
check_hlds__common____Unify____call_args_0_0(
#line 211 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 211 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2)
#line 211 "common.m"
{
#line 211 "common.m"
  {
#line 211 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 211 "common.m"
    MR_Integer check_hlds__common__CastX_9 = (MR_Integer) check_hlds__common__HeadVar__1_1;
#line 211 "common.m"
    MR_Integer check_hlds__common__CastY_10 = (MR_Integer) check_hlds__common__HeadVar__2_2;

#line 211 "common.m"
    check_hlds__common__succeeded = (check_hlds__common__CastX_9 == check_hlds__common__CastY_10);
#line 211 "common.m"
    if (check_hlds__common__succeeded)
#line 211 "common.m"
      check_hlds__common__succeeded = MR_TRUE;
#line 211 "common.m"
    else
#line 211 "common.m"
      {
#line 211 "common.m"
        MR_Word check_hlds__common__TypeInfo_12_12;
#line 211 "common.m"
        MR_Word check_hlds__common__TypeInfo_13_13;
#line 211 "common.m"
        MR_Word check_hlds__common__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__1_1, (MR_Integer) 0)));
#line 211 "common.m"
        MR_Word check_hlds__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__1_1, (MR_Integer) 1)));
#line 211 "common.m"
        MR_Word check_hlds__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__1_1, (MR_Integer) 2)));
#line 211 "common.m"
        MR_Word check_hlds__common__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__2_2, (MR_Integer) 0)));
#line 211 "common.m"
        MR_Word check_hlds__common__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__2_2, (MR_Integer) 1)));
#line 211 "common.m"
        MR_Word check_hlds__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__2_2, (MR_Integer) 2)));

#line 2428 "check_hlds.common.c"
        {
#line 2430 "check_hlds.common.c"
          check_hlds__common__succeeded = mercury__term____Unify____context_0_0(check_hlds__common__V_3_3, check_hlds__common__V_6_6);
        }
#line 211 "common.m"
        if (check_hlds__common__succeeded)
#line 211 "common.m"
          {
#line 2437 "check_hlds.common.c"
            check_hlds__common__TypeInfo_12_12 = (MR_Word) &check_hlds__common_scalar_common_1[5];
#line 2439 "check_hlds.common.c"
            {
#line 2441 "check_hlds.common.c"
              check_hlds__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__common__TypeInfo_12_12, ((MR_Box) (check_hlds__common__V_4_4)), ((MR_Box) (check_hlds__common__V_7_7)));
            }
#line 211 "common.m"
            if (check_hlds__common__succeeded)
#line 211 "common.m"
              {
#line 2448 "check_hlds.common.c"
                check_hlds__common__TypeInfo_13_13 = (MR_Word) &check_hlds__common_scalar_common_1[5];
#line 2450 "check_hlds.common.c"
                {
#line 2452 "check_hlds.common.c"
                  return check_hlds__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__common__TypeInfo_13_13, ((MR_Box) (check_hlds__common__V_5_5)), ((MR_Box) (check_hlds__common__V_8_8)));
                }
#line 211 "common.m"
              }
#line 211 "common.m"
          }
#line 211 "common.m"
      }
#line 211 "common.m"
    return check_hlds__common__succeeded;
#line 211 "common.m"
  }
#line 211 "common.m"
}

#line 856 "common.m"
static void MR_CALL 
check_hlds__common__apply_induced_substitutions_4_p_0(
#line 856 "common.m"
  MR_Word check_hlds__common__ToVar_5,
#line 856 "common.m"
  MR_Word check_hlds__common__FromVar_6,
#line 856 "common.m"
  MR_Word check_hlds__common__STATE_VARIABLE_Info_0_17,
#line 856 "common.m"
  MR_Word * check_hlds__common__STATE_VARIABLE_Info_18)
#line 856 "common.m"
{
#line 859 "common.m"
  {
#line 859 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 859 "common.m"
    MR_Word check_hlds__common__RttiVarMaps0_8;
#line 859 "common.m"
    MR_Word check_hlds__common__FromVarRttiInfo_9;
#line 859 "common.m"
    MR_Word check_hlds__common__ToVarRttiInfo_10;
#line 870 "common.m"
    MR_Word check_hlds__common__TSubst_11;

#line 860 "common.m"
    {
#line 860 "common.m"
      check_hlds__simplify__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__common__STATE_VARIABLE_Info_0_17, &check_hlds__common__RttiVarMaps0_8);
    }
#line 861 "common.m"
    {
#line 861 "common.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(check_hlds__common__RttiVarMaps0_8, check_hlds__common__FromVar_6, &check_hlds__common__FromVarRttiInfo_9);
    }
#line 862 "common.m"
    {
#line 862 "common.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(check_hlds__common__RttiVarMaps0_8, check_hlds__common__ToVar_5, &check_hlds__common__ToVarRttiInfo_10);
    }
#line 909 "common.m"
    if ((check_hlds__common__ToVarRttiInfo_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 919 "common.m"
      {
#line 919 "common.m"
        MR_Word check_hlds__common__TypeInfo_18_44;
#line 919 "common.m"
        MR_Word check_hlds__common__TypeCtorInfo_19_45;

#line 919 "common.m"
        check_hlds__common__succeeded = (check_hlds__common__FromVarRttiInfo_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 919 "common.m"
        if (check_hlds__common__succeeded)
#line 919 "common.m"
          {
#line 2524 "check_hlds.common.c"
            check_hlds__common__TypeInfo_18_44 = (MR_Word) &check_hlds__common_scalar_common_1[4];
#line 2526 "check_hlds.common.c"
            check_hlds__common__TypeCtorInfo_19_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 921 "common.m"
            {
#line 921 "common.m"
              mercury__map__init_1_p_0(check_hlds__common__TypeInfo_18_44, check_hlds__common__TypeCtorInfo_19_45, &check_hlds__common__TSubst_11);
            }
#line 921 "common.m"
            check_hlds__common__succeeded = MR_TRUE;
#line 919 "common.m"
          }
#line 919 "common.m"
      }
#line 909 "common.m"
    else
#line 909 "common.m"
      if (((MR_tag((MR_Word) check_hlds__common__ToVarRttiInfo_10)) == (MR_mktag((MR_Integer) 1))))
#line 909 "common.m"
        {
#line 909 "common.m"
          MR_Word check_hlds__common__FromVarTypeInfoType_33;
#line 909 "common.m"
          MR_Word check_hlds__common__ToVarTypeInfoType_34;
#line 909 "common.m"
          MR_Word check_hlds__common__V_40_40;
#line 909 "common.m"
          MR_Word check_hlds__common__V_41_41;
#line 909 "common.m"
          MR_Word check_hlds__common__V_42_42;
#line 909 "common.m"
          MR_Word check_hlds__common__V_43_43;

#line 909 "common.m"
          check_hlds__common__succeeded = ((MR_tag((MR_Word) check_hlds__common__FromVarRttiInfo_9)) == (MR_mktag((MR_Integer) 1)));
#line 909 "common.m"
          if (check_hlds__common__succeeded)
#line 909 "common.m"
            {
#line 909 "common.m"
              check_hlds__common__FromVarTypeInfoType_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__FromVarRttiInfo_9, (MR_Integer) 0)));
#line 910 "common.m"
              check_hlds__common__ToVarTypeInfoType_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__ToVarRttiInfo_10, (MR_Integer) 0)));
#line 911 "common.m"
              check_hlds__common__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 911 "common.m"
              check_hlds__common__V_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 911 "common.m"
              {
#line 911 "common.m"
                check_hlds__common__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "common.m"
                MR_hl_field(MR_mktag(1), check_hlds__common__V_40_40, 0) = ((MR_Box) (check_hlds__common__ToVarTypeInfoType_34));
#line 911 "common.m"
                MR_hl_field(MR_mktag(1), check_hlds__common__V_40_40, 1) = ((MR_Box) (check_hlds__common__V_42_42));
#line 911 "common.m"
              }
#line 911 "common.m"
              {
#line 911 "common.m"
                check_hlds__common__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "common.m"
                MR_hl_field(MR_mktag(1), check_hlds__common__V_41_41, 0) = ((MR_Box) (check_hlds__common__FromVarTypeInfoType_33));
#line 911 "common.m"
                MR_hl_field(MR_mktag(1), check_hlds__common__V_41_41, 1) = ((MR_Box) (check_hlds__common__V_43_43));
#line 911 "common.m"
              }
#line 911 "common.m"
              {
#line 911 "common.m"
                check_hlds__common__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__common__V_40_40, check_hlds__common__V_41_41, &check_hlds__common__TSubst_11);
              }
#line 909 "common.m"
            }
#line 909 "common.m"
        }
#line 909 "common.m"
      else
#line 913 "common.m"
        {
#line 913 "common.m"
          MR_Word check_hlds__common__FromVarConstraint_35;
#line 913 "common.m"
          MR_Word check_hlds__common__ToVarConstraint_36;
#line 913 "common.m"
          MR_Word check_hlds__common__Name_37;
#line 913 "common.m"
          MR_Word check_hlds__common__FromArgs_38;
#line 913 "common.m"
          MR_Word check_hlds__common__ToArgs_39;
#line 913 "common.m"
          MR_Word check_hlds__common__V_46_46;

#line 913 "common.m"
          check_hlds__common__succeeded = ((MR_tag((MR_Word) check_hlds__common__FromVarRttiInfo_9)) == (MR_mktag((MR_Integer) 2)));
#line 913 "common.m"
          if (check_hlds__common__succeeded)
#line 913 "common.m"
            {
#line 913 "common.m"
              check_hlds__common__FromVarConstraint_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__common__FromVarRttiInfo_9, (MR_Integer) 0)));
#line 914 "common.m"
              check_hlds__common__ToVarConstraint_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__common__ToVarRttiInfo_10, (MR_Integer) 0)));
#line 915 "common.m"
              check_hlds__common__Name_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__FromVarConstraint_35, (MR_Integer) 0)));
#line 915 "common.m"
              check_hlds__common__FromArgs_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__FromVarConstraint_35, (MR_Integer) 1)));
#line 916 "common.m"
              check_hlds__common__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__ToVarConstraint_36, (MR_Integer) 0)));
#line 916 "common.m"
              check_hlds__common__ToArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__ToVarConstraint_36, (MR_Integer) 1)));
#line 916 "common.m"
              {
#line 916 "common.m"
                check_hlds__common__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(check_hlds__common__Name_37, check_hlds__common__V_46_46);
              }
#line 913 "common.m"
              if (check_hlds__common__succeeded)
#line 917 "common.m"
                {
#line 917 "common.m"
                  check_hlds__common__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__common__ToArgs_39, check_hlds__common__FromArgs_38, &check_hlds__common__TSubst_11);
                }
#line 913 "common.m"
            }
#line 913 "common.m"
        }
#line 870 "common.m"
    if (check_hlds__common__succeeded)
#line 866 "common.m"
      {
#line 864 "common.m"
        {
#line 864 "common.m"
          check_hlds__common__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &check_hlds__common_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__common__TSubst_11);
        }
#line 866 "common.m"
        if (check_hlds__common__succeeded)
#line 864 "common.m"
          *check_hlds__common__STATE_VARIABLE_Info_18 = check_hlds__common__STATE_VARIABLE_Info_0_17;
#line 866 "common.m"
        else
#line 867 "common.m"
          {
#line 867 "common.m"
            check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_p_0(check_hlds__common__ToVar_5, check_hlds__common__FromVar_6, check_hlds__common__TSubst_11, check_hlds__common__STATE_VARIABLE_Info_0_17, check_hlds__common__STATE_VARIABLE_Info_18);
#line 867 "common.m"
            return;
          }
#line 866 "common.m"
      }
#line 870 "common.m"
    else
#line 880 "common.m"
      if ((check_hlds__common__FromVarRttiInfo_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 876 "common.m"
        {
#line 876 "common.m"
          MR_Word check_hlds__common__RttiVarMaps_12;

#line 877 "common.m"
          {
#line 877 "common.m"
            hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(check_hlds__common__ToVar_5, check_hlds__common__FromVar_6, check_hlds__common__RttiVarMaps0_8, &check_hlds__common__RttiVarMaps_12);
          }
#line 879 "common.m"
          {
#line 879 "common.m"
            check_hlds__simplify__simplify_info_set_rtti_varmaps_3_p_0(check_hlds__common__RttiVarMaps_12, check_hlds__common__STATE_VARIABLE_Info_0_17, check_hlds__common__STATE_VARIABLE_Info_18);
#line 879 "common.m"
            return;
          }
#line 876 "common.m"
        }
#line 880 "common.m"
      else
#line 889 "common.m"
        if ((check_hlds__common__ToVarRttiInfo_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 885 "common.m"
          {
#line 885 "common.m"
            MR_Word check_hlds__common__RttiVarMaps_25;

#line 886 "common.m"
            {
#line 886 "common.m"
              hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(check_hlds__common__FromVar_6, check_hlds__common__ToVar_5, check_hlds__common__RttiVarMaps0_8, &check_hlds__common__RttiVarMaps_25);
            }
#line 888 "common.m"
            {
#line 888 "common.m"
              check_hlds__simplify__simplify_info_set_rtti_varmaps_3_p_0(check_hlds__common__RttiVarMaps_25, check_hlds__common__STATE_VARIABLE_Info_0_17, check_hlds__common__STATE_VARIABLE_Info_18);
#line 888 "common.m"
              return;
            }
#line 885 "common.m"
          }
#line 889 "common.m"
        else
#line 892 "common.m"
          {
#line 896 "common.m"
            {
#line 896 "common.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.common", (MR_String) "predicate \140check_hlds.common.apply_induced_substitutions\'/4", (MR_String) "inconsistent info");
#line 896 "common.m"
              return;
            }
#line 892 "common.m"
          }
#line 859 "common.m"
  }
#line 856 "common.m"
}

#line 830 "common.m"
static MR_bool MR_CALL 
check_hlds__common__types_match_exactly_list_2_p_0(
#line 830 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 830 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2)
#line 830 "common.m"
{
#line 833 "common.m"
  while (MR_TRUE)
#line 833 "common.m"
    {
#line 833 "common.m"
      /* tailcall optimized into a loop */
#line 833 "common.m"
      {
#line 833 "common.m"
        MR_bool check_hlds__common__succeeded;

#line 833 "common.m"
        if ((check_hlds__common__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 833 "common.m"
          check_hlds__common__succeeded = (check_hlds__common__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 833 "common.m"
        else
#line 834 "common.m"
          {
#line 834 "common.m"
            MR_Word check_hlds__common__Type1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__1_1, (MR_Integer) 0)));
#line 834 "common.m"
            MR_Word check_hlds__common__Types1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__1_1, (MR_Integer) 1)));
#line 834 "common.m"
            MR_Word check_hlds__common__Type2_5;
#line 834 "common.m"
            MR_Word check_hlds__common__Types2_6;

#line 834 "common.m"
            check_hlds__common__succeeded = ((MR_tag((MR_Word) check_hlds__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 834 "common.m"
            if (check_hlds__common__succeeded)
#line 834 "common.m"
              {
#line 834 "common.m"
                check_hlds__common__Type2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__2_2, (MR_Integer) 0)));
#line 834 "common.m"
                check_hlds__common__Types2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__2_2, (MR_Integer) 1)));
#line 835 "common.m"
                {
#line 835 "common.m"
                  check_hlds__common__succeeded = check_hlds__common__types_match_exactly_2_p_0(check_hlds__common__Type1_3, check_hlds__common__Type2_5);
                }
#line 834 "common.m"
                if (check_hlds__common__succeeded)
#line 836 "common.m"
                  {
#line 836 "common.m"
                    /* direct tailcall eliminated */
#line 836 "common.m"
                    {
#line 836 "common.m"
                      MR_Word check_hlds__common__HeadVar__1__tmp_copy_1 = check_hlds__common__Types1_4;
#line 836 "common.m"
                      MR_Word check_hlds__common__HeadVar__2__tmp_copy_2 = check_hlds__common__Types2_6;

#line 836 "common.m"
                      check_hlds__common__HeadVar__2_2 = check_hlds__common__HeadVar__2__tmp_copy_2;
#line 836 "common.m"
                      check_hlds__common__HeadVar__1_1 = check_hlds__common__HeadVar__1__tmp_copy_1;
#line 836 "common.m"
                    }
#line 836 "common.m"
                    continue;
#line 836 "common.m"
                  }
#line 834 "common.m"
              }
#line 834 "common.m"
          }
#line 833 "common.m"
        return check_hlds__common__succeeded;
#line 833 "common.m"
      }
#line 833 "common.m"
      break;
#line 833 "common.m"
    }
#line 830 "common.m"
}

#line 806 "common.m"
static MR_bool MR_CALL 
check_hlds__common__types_match_exactly_2_p_0(
#line 806 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 806 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2)
#line 806 "common.m"
{
#line 808 "common.m"
  while (MR_TRUE)
#line 808 "common.m"
    {
#line 808 "common.m"
      /* tailcall optimized into a loop */
#line 808 "common.m"
      {
#line 808 "common.m"
        MR_bool check_hlds__common__succeeded;

#line 808 "common.m"
        if (((MR_tag((MR_Word) check_hlds__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 811 "common.m"
          {
#line 811 "common.m"
            MR_Word check_hlds__common__BuiltinType_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__common__HeadVar__1_1, (MR_Integer) 0)));
#line 811 "common.m"
            MR_Word check_hlds__common__V_37_37;

#line 811 "common.m"
            check_hlds__common__succeeded = ((MR_tag((MR_Word) check_hlds__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 811 "common.m"
            if (check_hlds__common__succeeded)
#line 811 "common.m"
              {
#line 811 "common.m"
                check_hlds__common__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__common__HeadVar__2_2, (MR_Integer) 0)));
#line 811 "common.m"
                check_hlds__common__succeeded = (check_hlds__common__BuiltinType_11 == check_hlds__common__V_37_37);
#line 811 "common.m"
              }
#line 811 "common.m"
          }
#line 808 "common.m"
        else
#line 808 "common.m"
          if (((MR_tag((MR_Word) check_hlds__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 809 "common.m"
            {
#line 809 "common.m"
              MR_Word check_hlds__common__Name_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__1_1, (MR_Integer) 0)));
#line 809 "common.m"
              MR_Word check_hlds__common__As_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__1_1, (MR_Integer) 1)));
#line 809 "common.m"
              MR_Word check_hlds__common__Bs_9;
#line 809 "common.m"
              MR_Word check_hlds__common__V_36_36;
#line 809 "common.m"
              MR_Word check_hlds__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__1_1, (MR_Integer) 2)));
#line 809 "common.m"
              MR_Word check_hlds__common__V_10_10;

#line 809 "common.m"
              check_hlds__common__succeeded = ((MR_tag((MR_Word) check_hlds__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 809 "common.m"
              if (check_hlds__common__succeeded)
#line 809 "common.m"
                {
#line 809 "common.m"
                  check_hlds__common__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__2_2, (MR_Integer) 0)));
#line 809 "common.m"
                  check_hlds__common__Bs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__2_2, (MR_Integer) 1)));
#line 809 "common.m"
                  check_hlds__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__2_2, (MR_Integer) 2)));
#line 809 "common.m"
                  {
#line 809 "common.m"
                    check_hlds__common__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(check_hlds__common__Name_6, check_hlds__common__V_36_36);
                  }
#line 809 "common.m"
                  if (check_hlds__common__succeeded)
#line 810 "common.m"
                    {
#line 810 "common.m"
                      return check_hlds__common__succeeded = check_hlds__common__types_match_exactly_list_2_p_0(check_hlds__common__As_7, check_hlds__common__Bs_9);
                    }
#line 809 "common.m"
                }
#line 809 "common.m"
            }
#line 808 "common.m"
          else
#line 808 "common.m"
            if (((MR_tag((MR_Word) check_hlds__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 808 "common.m"
              {
#line 808 "common.m"
                MR_Word check_hlds__common__TypeInfo_43_43;
#line 808 "common.m"
                MR_Word check_hlds__common__TVar_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__1_1, (MR_Integer) 0)));
#line 808 "common.m"
                MR_Word check_hlds__common__V_35_35;
#line 808 "common.m"
                MR_Word check_hlds__common__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__1_1, (MR_Integer) 1)));
#line 808 "common.m"
                MR_Word check_hlds__common__V_5_5;

#line 808 "common.m"
                check_hlds__common__succeeded = ((MR_tag((MR_Word) check_hlds__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 808 "common.m"
                if (check_hlds__common__succeeded)
#line 808 "common.m"
                  {
#line 808 "common.m"
                    check_hlds__common__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__2_2, (MR_Integer) 0)));
#line 808 "common.m"
                    check_hlds__common__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__HeadVar__2_2, (MR_Integer) 1)));
#line 2947 "check_hlds.common.c"
                    check_hlds__common__TypeInfo_43_43 = (MR_Word) &check_hlds__common_scalar_common_1[4];
#line 808 "common.m"
                    {
#line 808 "common.m"
                      return check_hlds__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__common__TypeInfo_43_43, ((MR_Box) (check_hlds__common__TVar_3)), ((MR_Box) (check_hlds__common__V_35_35)));
                    }
#line 808 "common.m"
                  }
#line 808 "common.m"
              }
#line 808 "common.m"
            else
#line 808 "common.m"
              if (((((MR_tag((MR_Word) check_hlds__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 825 "common.m"
                {
#line 825 "common.m"
                  MR_Word check_hlds__common__TypeInfo_41_41;
#line 825 "common.m"
                  MR_Word check_hlds__common__TVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__HeadVar__1_1, (MR_Integer) 1)));
#line 825 "common.m"
                  MR_Word check_hlds__common__As_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__HeadVar__1_1, (MR_Integer) 2)));
#line 825 "common.m"
                  MR_Word check_hlds__common__Bs_27;
#line 825 "common.m"
                  MR_Word check_hlds__common__V_40_40;
#line 825 "common.m"
                  MR_Word check_hlds__common__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__HeadVar__1_1, (MR_Integer) 3)));
#line 825 "common.m"
                  MR_Word check_hlds__common__V_28_28;

#line 825 "common.m"
                  check_hlds__common__succeeded = ((((MR_tag((MR_Word) check_hlds__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 825 "common.m"
                  if (check_hlds__common__succeeded)
#line 825 "common.m"
                    {
#line 825 "common.m"
                      check_hlds__common__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__HeadVar__2_2, (MR_Integer) 1)));
#line 825 "common.m"
                      check_hlds__common__Bs_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__HeadVar__2_2, (MR_Integer) 2)));
#line 825 "common.m"
                      check_hlds__common__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__HeadVar__2_2, (MR_Integer) 3)));
#line 2991 "check_hlds.common.c"
                      check_hlds__common__TypeInfo_41_41 = (MR_Word) &check_hlds__common_scalar_common_1[4];
#line 825 "common.m"
                      {
#line 825 "common.m"
                        check_hlds__common__succeeded = mercury__builtin__unify_2_p_0(check_hlds__common__TypeInfo_41_41, ((MR_Box) (check_hlds__common__TVar_24)), ((MR_Box) (check_hlds__common__V_40_40)));
                      }
#line 825 "common.m"
                      if (check_hlds__common__succeeded)
#line 826 "common.m"
                        {
#line 826 "common.m"
                          return check_hlds__common__succeeded = check_hlds__common__types_match_exactly_list_2_p_0(check_hlds__common__As_25, check_hlds__common__Bs_27);
                        }
#line 825 "common.m"
                    }
#line 825 "common.m"
                }
#line 808 "common.m"
              else
#line 808 "common.m"
                if (((((MR_tag((MR_Word) check_hlds__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 813 "common.m"
                  {
#line 813 "common.m"
                    MR_Word check_hlds__common__As_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__HeadVar__1_1, (MR_Integer) 1)));
#line 813 "common.m"
                    MR_Word check_hlds__common__AR_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__HeadVar__1_1, (MR_Integer) 2)));
#line 813 "common.m"
                    MR_Word check_hlds__common__P_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__HeadVar__1_1, (MR_Integer) 3)));
#line 813 "common.m"
                    MR_Word check_hlds__common__Bs_16;
#line 813 "common.m"
                    MR_Word check_hlds__common__BR_17;
#line 813 "common.m"
                    MR_Word check_hlds__common__V_38_38;

#line 813 "common.m"
                    check_hlds__common__succeeded = ((((MR_tag((MR_Word) check_hlds__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 813 "common.m"
                    if (check_hlds__common__succeeded)
#line 813 "common.m"
                      {
#line 813 "common.m"
                        check_hlds__common__Bs_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__HeadVar__2_2, (MR_Integer) 1)));
#line 813 "common.m"
                        check_hlds__common__BR_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__HeadVar__2_2, (MR_Integer) 2)));
#line 813 "common.m"
                        check_hlds__common__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__HeadVar__2_2, (MR_Integer) 3)));
#line 813 "common.m"
                        check_hlds__common__succeeded = (check_hlds__common__P_14 == check_hlds__common__V_38_38);
#line 813 "common.m"
                        if (check_hlds__common__succeeded)
#line 813 "common.m"
                          {
#line 813 "common.m"
                            check_hlds__common__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
#line 813 "common.m"
                            if (check_hlds__common__succeeded)
#line 813 "common.m"
                              {
#line 814 "common.m"
                                {
#line 814 "common.m"
                                  check_hlds__common__succeeded = check_hlds__common__types_match_exactly_list_2_p_0(check_hlds__common__As_12, check_hlds__common__Bs_16);
                                }
#line 813 "common.m"
                                if (check_hlds__common__succeeded)
#line 819 "common.m"
                                  {
#line 819 "common.m"
                                    if ((check_hlds__common__AR_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 821 "common.m"
                                      check_hlds__common__succeeded = (check_hlds__common__BR_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 819 "common.m"
                                    else
#line 816 "common.m"
                                      {
#line 816 "common.m"
                                        MR_Word check_hlds__common__A_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__AR_13, (MR_Integer) 0)));
#line 816 "common.m"
                                        MR_Word check_hlds__common__B_19;

#line 817 "common.m"
                                        check_hlds__common__succeeded = ((MR_tag((MR_Word) check_hlds__common__BR_17)) == (MR_mktag((MR_Integer) 1)));
#line 817 "common.m"
                                        if (check_hlds__common__succeeded)
#line 817 "common.m"
                                          {
#line 817 "common.m"
                                            check_hlds__common__B_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__BR_17, (MR_Integer) 0)));
#line 818 "common.m"
                                            /* direct tailcall eliminated */
#line 818 "common.m"
                                            {
#line 818 "common.m"
                                              MR_Word check_hlds__common__HeadVar__1__tmp_copy_1 = check_hlds__common__A_18;
#line 818 "common.m"
                                              MR_Word check_hlds__common__HeadVar__2__tmp_copy_2 = check_hlds__common__B_19;

#line 818 "common.m"
                                              check_hlds__common__HeadVar__2_2 = check_hlds__common__HeadVar__2__tmp_copy_2;
#line 818 "common.m"
                                              check_hlds__common__HeadVar__1_1 = check_hlds__common__HeadVar__1__tmp_copy_1;
#line 818 "common.m"
                                            }
#line 818 "common.m"
                                            continue;
#line 817 "common.m"
                                          }
#line 816 "common.m"
                                      }
#line 819 "common.m"
                                  }
#line 813 "common.m"
                              }
#line 813 "common.m"
                          }
#line 813 "common.m"
                      }
#line 813 "common.m"
                  }
#line 808 "common.m"
                else
#line 808 "common.m"
                  if (((((MR_tag((MR_Word) check_hlds__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 827 "common.m"
                    {
#line 828 "common.m"
                      {
#line 828 "common.m"
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.common", (MR_String) "predicate \140check_hlds.common.types_match_exactly\'/2", (MR_String) "kind annotation");
                      }
#line 827 "common.m"
                      check_hlds__common__succeeded = MR_TRUE;
#line 827 "common.m"
                    }
#line 808 "common.m"
                  else
#line 823 "common.m"
                    {
#line 823 "common.m"
                      MR_Word check_hlds__common__As_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__HeadVar__1_1, (MR_Integer) 1)));
#line 823 "common.m"
                      MR_Word check_hlds__common__Bs_22;
#line 823 "common.m"
                      MR_Word check_hlds__common__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__HeadVar__1_1, (MR_Integer) 2)));
#line 823 "common.m"
                      MR_Word check_hlds__common__V_23_23;

#line 823 "common.m"
                      check_hlds__common__succeeded = ((((MR_tag((MR_Word) check_hlds__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 823 "common.m"
                      if (check_hlds__common__succeeded)
#line 823 "common.m"
                        {
#line 823 "common.m"
                          check_hlds__common__Bs_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__HeadVar__2_2, (MR_Integer) 1)));
#line 823 "common.m"
                          check_hlds__common__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__HeadVar__2_2, (MR_Integer) 2)));
#line 824 "common.m"
                          {
#line 824 "common.m"
                            return check_hlds__common__succeeded = check_hlds__common__types_match_exactly_list_2_p_0(check_hlds__common__As_20, check_hlds__common__Bs_22);
                          }
#line 823 "common.m"
                        }
#line 823 "common.m"
                    }
#line 808 "common.m"
        return check_hlds__common__succeeded;
#line 808 "common.m"
      }
#line 808 "common.m"
      break;
#line 808 "common.m"
    }
#line 806 "common.m"
}

#line 766 "common.m"
static void MR_CALL 
check_hlds__common__generate_assign_8_p_0(
#line 766 "common.m"
  MR_Word check_hlds__common__ToVar_9,
#line 766 "common.m"
  MR_Word check_hlds__common__FromVar_10,
#line 766 "common.m"
  MR_Word check_hlds__common__UniMode_11,
#line 766 "common.m"
  MR_Word check_hlds__common__OldGoalInfo_12,
#line 766 "common.m"
  MR_Word * check_hlds__common__GoalExpr_13,
#line 766 "common.m"
  MR_Word * check_hlds__common__GoalInfo_14,
#line 766 "common.m"
  MR_Word check_hlds__common__STATE_VARIABLE_Info_0_30,
#line 766 "common.m"
  MR_Word * check_hlds__common__STATE_VARIABLE_Info_31)
#line 766 "common.m"
{
#line 771 "common.m"
  {
#line 771 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 771 "common.m"
    MR_Word check_hlds__common__VarTypes_16;
#line 771 "common.m"
    MR_Word check_hlds__common__ToVarType_17;
#line 771 "common.m"
    MR_Word check_hlds__common__FromVarType_18;
#line 771 "common.m"
    MR_Word check_hlds__common__NonLocals_19;
#line 771 "common.m"
    MR_Word check_hlds__common__ToVarInst0_21;
#line 771 "common.m"
    MR_Word check_hlds__common__ToVarInst_23;
#line 771 "common.m"
    MR_Word check_hlds__common__InstMapDelta_27;
#line 771 "common.m"
    MR_Word check_hlds__common__GoalInfo0_28;
#line 771 "common.m"
    MR_Word check_hlds__common__Context_29;
#line 771 "common.m"
    MR_Word check_hlds__common__STATE_VARIABLE_Info_32_32;
#line 771 "common.m"
    MR_Word check_hlds__common__V_33_33;
#line 771 "common.m"
    MR_Word check_hlds__common__V_34_34;
#line 771 "common.m"
    MR_Word check_hlds__common__V_36_36;
#line 771 "common.m"
    MR_Word check_hlds__common__V_37_37;
#line 771 "common.m"
    MR_Word check_hlds__common__V_58_58;
#line 771 "common.m"
    MR_Word check_hlds__common__V_59_59;
#line 771 "common.m"
    MR_Word check_hlds__common__CommonInfo0_70;
#line 771 "common.m"
    MR_Word check_hlds__common__VarEqv0_71;
#line 771 "common.m"
    MR_Word check_hlds__common__VarEqv_72;
#line 771 "common.m"
    MR_Word check_hlds__common__CommonInfo_73;
#line 778 "common.m"
    MR_Word check_hlds__common__V_20_20;
#line 778 "common.m"
    MR_Word check_hlds__common__V_22_22;
#line 492 "common.m"
    MR_Word check_hlds__common__V_75_75;
#line 492 "common.m"
    MR_Word check_hlds__common__V_76_76;
#line 492 "common.m"
    MR_Word check_hlds__common__V_77_77;
#line 494 "common.m"
    MR_Word check_hlds__common__V_79_79;
#line 494 "common.m"
    MR_Word check_hlds__common__V_80_80;
#line 494 "common.m"
    MR_Word check_hlds__common__V_81_81;
#line 494 "common.m"
    MR_Word check_hlds__common__V_78_78;

#line 772 "common.m"
    {
#line 772 "common.m"
      check_hlds__common__apply_induced_substitutions_4_p_0(check_hlds__common__ToVar_9, check_hlds__common__FromVar_10, check_hlds__common__STATE_VARIABLE_Info_0_30, &check_hlds__common__STATE_VARIABLE_Info_32_32);
    }
#line 773 "common.m"
    {
#line 773 "common.m"
      check_hlds__simplify__simplify_info_get_var_types_2_p_0(check_hlds__common__STATE_VARIABLE_Info_32_32, &check_hlds__common__VarTypes_16);
    }
#line 774 "common.m"
    {
#line 774 "common.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__common__VarTypes_16, check_hlds__common__ToVar_9, &check_hlds__common__ToVarType_17);
    }
#line 775 "common.m"
    {
#line 775 "common.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__common__VarTypes_16, check_hlds__common__FromVar_10, &check_hlds__common__FromVarType_18);
    }
#line 777 "common.m"
    {
#line 777 "common.m"
      check_hlds__common__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 777 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__common__V_34_34, 0) = ((MR_Box) (check_hlds__common__FromVar_10));
#line 777 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__common__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 777 "common.m"
    }
#line 777 "common.m"
    {
#line 777 "common.m"
      check_hlds__common__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 777 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__common__V_33_33, 0) = ((MR_Box) (check_hlds__common__ToVar_9));
#line 777 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__common__V_33_33, 1) = ((MR_Box) (check_hlds__common__V_34_34));
#line 777 "common.m"
    }
#line 777 "common.m"
    {
#line 777 "common.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__common__V_33_33, &check_hlds__common__NonLocals_19);
    }
#line 778 "common.m"
    check_hlds__common__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__UniMode_11, (MR_Integer) 0)));
#line 778 "common.m"
    check_hlds__common__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__UniMode_11, (MR_Integer) 1)));
#line 778 "common.m"
    check_hlds__common__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__V_36_36, (MR_Integer) 0)));
#line 778 "common.m"
    check_hlds__common__ToVarInst0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__V_36_36, (MR_Integer) 1)));
#line 778 "common.m"
    check_hlds__common__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__V_37_37, (MR_Integer) 0)));
#line 778 "common.m"
    check_hlds__common__ToVarInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__V_37_37, (MR_Integer) 1)));
#line 779 "common.m"
    {
#line 779 "common.m"
      check_hlds__common__succeeded = check_hlds__common__types_match_exactly_2_p_0(check_hlds__common__ToVarType_17, check_hlds__common__FromVarType_18);
    }
#line 784 "common.m"
    if (check_hlds__common__succeeded)
#line 780 "common.m"
      {
#line 780 "common.m"
        MR_Word check_hlds__common__UnifyMode_24;
#line 780 "common.m"
        MR_Word check_hlds__common__V_38_38;
#line 780 "common.m"
        MR_Word check_hlds__common__V_39_39;
#line 780 "common.m"
        MR_Word check_hlds__common__V_43_43;
#line 780 "common.m"
        MR_Word check_hlds__common__V_44_44;

#line 780 "common.m"
        {
#line 780 "common.m"
          check_hlds__common__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 780 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__common__V_38_38, 0) = ((MR_Box) (check_hlds__common__ToVarInst0_21));
#line 780 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__common__V_38_38, 1) = ((MR_Box) (check_hlds__common__ToVarInst_23));
#line 780 "common.m"
        }
#line 780 "common.m"
        {
#line 780 "common.m"
          check_hlds__common__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 780 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__common__V_39_39, 0) = ((MR_Box) (check_hlds__common__ToVarInst_23));
#line 780 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__common__V_39_39, 1) = ((MR_Box) (check_hlds__common__ToVarInst_23));
#line 780 "common.m"
        }
#line 780 "common.m"
        {
#line 780 "common.m"
          check_hlds__common__UnifyMode_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 780 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__common__UnifyMode_24, 0) = ((MR_Box) (check_hlds__common__V_38_38));
#line 780 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__common__UnifyMode_24, 1) = ((MR_Box) (check_hlds__common__V_39_39));
#line 780 "common.m"
        }
#line 782 "common.m"
        {
#line 782 "common.m"
          check_hlds__common__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 782 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__common__V_43_43, 0) = ((MR_Box) (check_hlds__common__FromVar_10));
#line 782 "common.m"
        }
#line 782 "common.m"
        {
#line 782 "common.m"
          check_hlds__common__V_44_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 782 "common.m"
          MR_hl_field(MR_mktag(2), check_hlds__common__V_44_44, 0) = ((MR_Box) (check_hlds__common__ToVar_9));
#line 782 "common.m"
          MR_hl_field(MR_mktag(2), check_hlds__common__V_44_44, 1) = ((MR_Box) (check_hlds__common__FromVar_10));
#line 782 "common.m"
        }
#line 782 "common.m"
        {
#line 782 "common.m"
          MR_Word base;
#line 782 "common.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 782 "common.m"
          *check_hlds__common__GoalExpr_13 = base;
#line 782 "common.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__common__ToVar_9));
#line 782 "common.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__common__V_43_43));
#line 782 "common.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__common__UnifyMode_24));
#line 782 "common.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__common__V_44_44));
#line 782 "common.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (&check_hlds__common_scalar_common_1[10]));
#line 782 "common.m"
        }
#line 780 "common.m"
      }
#line 784 "common.m"
    else
#line 791 "common.m"
      {
#line 791 "common.m"
        MR_Word check_hlds__common__Modes_26;
#line 791 "common.m"
        MR_Word check_hlds__common__V_45_45;
#line 791 "common.m"
        MR_Word check_hlds__common__V_47_47;
#line 791 "common.m"
        MR_Word check_hlds__common__V_48_48;
#line 791 "common.m"
        MR_Word check_hlds__common__V_53_53;
#line 791 "common.m"
        MR_Word check_hlds__common__V_54_54;

#line 791 "common.m"
        {
#line 791 "common.m"
          check_hlds__common__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 791 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__common__V_45_45, 0) = ((MR_Box) (check_hlds__common__ToVarInst_23));
#line 791 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__common__V_45_45, 1) = ((MR_Box) (check_hlds__common__ToVarInst_23));
#line 791 "common.m"
        }
#line 791 "common.m"
        {
#line 791 "common.m"
          check_hlds__common__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 791 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__common__V_48_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 791 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__common__V_48_48, 1) = ((MR_Box) (check_hlds__common__ToVarInst_23));
#line 791 "common.m"
        }
#line 791 "common.m"
        {
#line 791 "common.m"
          check_hlds__common__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__common__V_47_47, 0) = ((MR_Box) (check_hlds__common__V_48_48));
#line 791 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__common__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 791 "common.m"
        }
#line 791 "common.m"
        {
#line 791 "common.m"
          check_hlds__common__Modes_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__common__Modes_26, 0) = ((MR_Box) (check_hlds__common__V_45_45));
#line 791 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__common__Modes_26, 1) = ((MR_Box) (check_hlds__common__V_47_47));
#line 791 "common.m"
        }
#line 792 "common.m"
        {
#line 792 "common.m"
          check_hlds__common__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__common__V_54_54, 0) = ((MR_Box) (check_hlds__common__ToVar_9));
#line 792 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__common__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 792 "common.m"
        }
#line 792 "common.m"
        {
#line 792 "common.m"
          check_hlds__common__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__common__V_53_53, 0) = ((MR_Box) (check_hlds__common__FromVar_10));
#line 792 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__common__V_53_53, 1) = ((MR_Box) (check_hlds__common__V_54_54));
#line 792 "common.m"
        }
#line 792 "common.m"
        {
#line 792 "common.m"
          MR_Word base;
#line 792 "common.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 792 "common.m"
          *check_hlds__common__GoalExpr_13 = base;
#line 792 "common.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 792 "common.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__common_scalar_common_5[1])));
#line 792 "common.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__common__V_53_53));
#line 792 "common.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__common__Modes_26));
#line 792 "common.m"
          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 792 "common.m"
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Integer) 0));
#line 792 "common.m"
        }
#line 791 "common.m"
      }
#line 798 "common.m"
    {
#line 798 "common.m"
      check_hlds__common__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 798 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__common__V_59_59, 0) = ((MR_Box) (check_hlds__common__ToVar_9));
#line 798 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__common__V_59_59, 1) = ((MR_Box) (check_hlds__common__ToVarInst_23));
#line 798 "common.m"
    }
#line 798 "common.m"
    {
#line 798 "common.m"
      check_hlds__common__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__common__V_58_58, 0) = ((MR_Box) (check_hlds__common__V_59_59));
#line 798 "common.m"
      MR_hl_field(MR_mktag(1), check_hlds__common__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 798 "common.m"
    }
#line 798 "common.m"
    {
#line 798 "common.m"
      check_hlds__common__InstMapDelta_27 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__common__V_58_58);
    }
#line 800 "common.m"
    {
#line 800 "common.m"
      hlds__hlds_goal__goal_info_init_5_p_0(check_hlds__common__NonLocals_19, check_hlds__common__InstMapDelta_27, (MR_Integer) 0, (MR_Integer) 0, &check_hlds__common__GoalInfo0_28);
    }
#line 802 "common.m"
    {
#line 802 "common.m"
      check_hlds__common__Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__common__OldGoalInfo_12);
    }
#line 803 "common.m"
    {
#line 803 "common.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__common__Context_29, check_hlds__common__GoalInfo0_28, check_hlds__common__GoalInfo_14);
    }
#line 491 "common.m"
    {
#line 491 "common.m"
      check_hlds__simplify__simplify_info_get_common_info_2_p_0(check_hlds__common__STATE_VARIABLE_Info_32_32, &check_hlds__common__CommonInfo0_70);
    }
#line 492 "common.m"
    check_hlds__common__VarEqv0_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_70, (MR_Integer) 0)));
#line 492 "common.m"
    check_hlds__common__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_70, (MR_Integer) 1)));
#line 492 "common.m"
    check_hlds__common__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_70, (MR_Integer) 2)));
#line 492 "common.m"
    check_hlds__common__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_70, (MR_Integer) 3)));
#line 493 "common.m"
    {
#line 493 "common.m"
      mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) &check_hlds__common_scalar_common_1[0], ((MR_Box) (check_hlds__common__ToVar_9)), ((MR_Box) (check_hlds__common__FromVar_10)), check_hlds__common__VarEqv0_71, &check_hlds__common__VarEqv_72);
    }
#line 494 "common.m"
    check_hlds__common__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_70, (MR_Integer) 0)));
#line 494 "common.m"
    check_hlds__common__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_70, (MR_Integer) 1)));
#line 494 "common.m"
    check_hlds__common__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_70, (MR_Integer) 2)));
#line 494 "common.m"
    check_hlds__common__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_70, (MR_Integer) 3)));
#line 494 "common.m"
    {
#line 494 "common.m"
      check_hlds__common__CommonInfo_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 494 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_73, 0) = ((MR_Box) (check_hlds__common__VarEqv_72));
#line 494 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_73, 1) = ((MR_Box) (check_hlds__common__V_79_79));
#line 494 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_73, 2) = ((MR_Box) (check_hlds__common__V_80_80));
#line 494 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_73, 3) = ((MR_Box) (check_hlds__common__V_81_81));
#line 494 "common.m"
    }
#line 495 "common.m"
    {
#line 495 "common.m"
      check_hlds__simplify__simplify_info_set_common_info_3_p_0(check_hlds__common__CommonInfo_73, check_hlds__common__STATE_VARIABLE_Info_32_32, check_hlds__common__STATE_VARIABLE_Info_31);
#line 495 "common.m"
      return;
    }
#line 771 "common.m"
  }
#line 766 "common.m"
}

#line 727 "common.m"
static void MR_CALL 
check_hlds__common__create_output_unifications_7_p_0(
#line 727 "common.m"
  MR_Word check_hlds__common__OldGoalInfo_8,
#line 727 "common.m"
  MR_Word check_hlds__common__OutputArgs_9,
#line 727 "common.m"
  MR_Word check_hlds__common__OldOutputArgs_10,
#line 727 "common.m"
  MR_Word check_hlds__common__UniModes_11,
#line 727 "common.m"
  MR_Word * check_hlds__common__Goals_12,
#line 727 "common.m"
  MR_Word check_hlds__common__STATE_VARIABLE_Info_0_24,
#line 727 "common.m"
  MR_Word * check_hlds__common__STATE_VARIABLE_Info_25)
#line 727 "common.m"
{
#line 754 "common.m"
  while (MR_TRUE)
#line 754 "common.m"
    {
#line 754 "common.m"
      /* tailcall optimized into a loop */
#line 754 "common.m"
      {
#line 754 "common.m"
        MR_bool check_hlds__common__succeeded = ((MR_tag((MR_Word) check_hlds__common__OutputArgs_9)) == (MR_mktag((MR_Integer) 1)));
#line 754 "common.m"
        MR_Word check_hlds__common__OutputArg_14;
#line 754 "common.m"
        MR_Word check_hlds__common__OutputArgsTail_15;
#line 754 "common.m"
        MR_Word check_hlds__common__OldOutputArg_16;
#line 754 "common.m"
        MR_Word check_hlds__common__OldOutputArgsTail_17;
#line 754 "common.m"
        MR_Word check_hlds__common__UniMode_18;
#line 754 "common.m"
        MR_Word check_hlds__common__UniModesTail_19;

#line 734 "common.m"
        if (check_hlds__common__succeeded)
#line 734 "common.m"
          {
#line 734 "common.m"
            check_hlds__common__OutputArg_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__OutputArgs_9, (MR_Integer) 0)));
#line 734 "common.m"
            check_hlds__common__OutputArgsTail_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__OutputArgs_9, (MR_Integer) 1)));
#line 735 "common.m"
            check_hlds__common__succeeded = ((MR_tag((MR_Word) check_hlds__common__OldOutputArgs_10)) == (MR_mktag((MR_Integer) 1)));
#line 735 "common.m"
            if (check_hlds__common__succeeded)
#line 735 "common.m"
              {
#line 735 "common.m"
                check_hlds__common__OldOutputArg_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__OldOutputArgs_10, (MR_Integer) 0)));
#line 735 "common.m"
                check_hlds__common__OldOutputArgsTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__OldOutputArgs_10, (MR_Integer) 1)));
#line 736 "common.m"
                check_hlds__common__succeeded = ((MR_tag((MR_Word) check_hlds__common__UniModes_11)) == (MR_mktag((MR_Integer) 1)));
#line 736 "common.m"
                if (check_hlds__common__succeeded)
#line 736 "common.m"
                  {
#line 736 "common.m"
                    check_hlds__common__UniMode_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__UniModes_11, (MR_Integer) 0)));
#line 736 "common.m"
                    check_hlds__common__UniModesTail_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__UniModes_11, (MR_Integer) 1)));
#line 736 "common.m"
                  }
#line 735 "common.m"
              }
#line 734 "common.m"
          }
#line 754 "common.m"
        if (check_hlds__common__succeeded)
#line 750 "common.m"
          {
#line 741 "common.m"
            {
#line 741 "common.m"
              check_hlds__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__common_scalar_common_1[0], ((MR_Box) (check_hlds__common__OutputArg_14)), ((MR_Box) (check_hlds__common__OldOutputArg_16)));
            }
#line 741 "common.m"
            check_hlds__common__succeeded = !(check_hlds__common__succeeded);
#line 750 "common.m"
            if (check_hlds__common__succeeded)
#line 744 "common.m"
              {
#line 744 "common.m"
                MR_Word check_hlds__common__GoalExpr_20;
#line 744 "common.m"
                MR_Word check_hlds__common__GoalInfo_21;
#line 744 "common.m"
                MR_Word check_hlds__common__Goal_22;
#line 744 "common.m"
                MR_Word check_hlds__common__GoalsTail_23;
#line 744 "common.m"
                MR_Word check_hlds__common__STATE_VARIABLE_Info_26_26;

#line 743 "common.m"
                {
#line 743 "common.m"
                  check_hlds__common__generate_assign_8_p_0(check_hlds__common__OutputArg_14, check_hlds__common__OldOutputArg_16, check_hlds__common__UniMode_18, check_hlds__common__OldGoalInfo_8, &check_hlds__common__GoalExpr_20, &check_hlds__common__GoalInfo_21, check_hlds__common__STATE_VARIABLE_Info_0_24, &check_hlds__common__STATE_VARIABLE_Info_26_26);
                }
#line 745 "common.m"
                {
#line 745 "common.m"
                  check_hlds__common__Goal_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 745 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__common__Goal_22, 0) = ((MR_Box) (check_hlds__common__GoalExpr_20));
#line 745 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__common__Goal_22, 1) = ((MR_Box) (check_hlds__common__GoalInfo_21));
#line 745 "common.m"
                }
#line 746 "common.m"
                {
#line 746 "common.m"
                  check_hlds__common__create_output_unifications_7_p_0(check_hlds__common__OldGoalInfo_8, check_hlds__common__OutputArgsTail_15, check_hlds__common__OldOutputArgsTail_17, check_hlds__common__UniModesTail_19, &check_hlds__common__GoalsTail_23, check_hlds__common__STATE_VARIABLE_Info_26_26, check_hlds__common__STATE_VARIABLE_Info_25);
                }
#line 749 "common.m"
                {
#line 749 "common.m"
                  MR_Word base;
#line 749 "common.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "common.m"
                  *check_hlds__common__Goals_12 = base;
#line 749 "common.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__common__Goal_22));
#line 749 "common.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__common__GoalsTail_23));
#line 749 "common.m"
                }
#line 744 "common.m"
              }
#line 750 "common.m"
            else
#line 751 "common.m"
              {
#line 751 "common.m"
                /* direct tailcall eliminated */
#line 751 "common.m"
                {
#line 751 "common.m"
                  MR_Word check_hlds__common__OutputArgs__tmp_copy_9 = check_hlds__common__OutputArgsTail_15;
#line 751 "common.m"
                  MR_Word check_hlds__common__OldOutputArgs__tmp_copy_10 = check_hlds__common__OldOutputArgsTail_17;
#line 751 "common.m"
                  MR_Word check_hlds__common__UniModes__tmp_copy_11 = check_hlds__common__UniModesTail_19;

#line 751 "common.m"
                  check_hlds__common__UniModes_11 = check_hlds__common__UniModes__tmp_copy_11;
#line 751 "common.m"
                  check_hlds__common__OldOutputArgs_10 = check_hlds__common__OldOutputArgs__tmp_copy_10;
#line 751 "common.m"
                  check_hlds__common__OutputArgs_9 = check_hlds__common__OutputArgs__tmp_copy_9;
#line 751 "common.m"
                }
#line 751 "common.m"
                continue;
#line 751 "common.m"
              }
#line 750 "common.m"
          }
#line 754 "common.m"
        else
#line 760 "common.m"
          {
#line 755 "common.m"
            check_hlds__common__succeeded = (check_hlds__common__OutputArgs_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 755 "common.m"
            if (check_hlds__common__succeeded)
#line 755 "common.m"
              {
#line 756 "common.m"
                check_hlds__common__succeeded = (check_hlds__common__OldOutputArgs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 755 "common.m"
                if (check_hlds__common__succeeded)
#line 757 "common.m"
                  check_hlds__common__succeeded = (check_hlds__common__UniModes_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 755 "common.m"
              }
#line 760 "common.m"
            if (check_hlds__common__succeeded)
#line 759 "common.m"
              *check_hlds__common__Goals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 760 "common.m"
            else
#line 761 "common.m"
              {
#line 761 "common.m"
                {
#line 761 "common.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.common", (MR_String) "predicate \140check_hlds.common.create_output_unifications\'/7", (MR_String) "mode mismatch");
#line 761 "common.m"
                  return;
                }
#line 761 "common.m"
              }
#line 761 "common.m"
            *check_hlds__common__STATE_VARIABLE_Info_25 = check_hlds__common__STATE_VARIABLE_Info_0_24;
#line 760 "common.m"
          }
#line 754 "common.m"
      }
#line 754 "common.m"
      break;
#line 754 "common.m"
    }
#line 727 "common.m"
}

#line 693 "common.m"
static MR_bool MR_CALL 
check_hlds__common__common_var_lists_are_equiv_3_p_0(
#line 693 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 693 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2,
#line 693 "common.m"
  MR_Word check_hlds__common__HeadVar__3_3)
#line 693 "common.m"
{
#line 696 "common.m"
  while (MR_TRUE)
#line 696 "common.m"
    {
#line 696 "common.m"
      /* tailcall optimized into a loop */
#line 696 "common.m"
      {
#line 696 "common.m"
        MR_bool check_hlds__common__succeeded;

#line 696 "common.m"
        if ((check_hlds__common__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "common.m"
          check_hlds__common__succeeded = (check_hlds__common__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 696 "common.m"
        else
#line 697 "common.m"
          {
#line 697 "common.m"
            MR_Word check_hlds__common__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__1_1, (MR_Integer) 0)));
#line 697 "common.m"
            MR_Word check_hlds__common__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__1_1, (MR_Integer) 1)));
#line 697 "common.m"
            MR_Word check_hlds__common__Y_7;
#line 697 "common.m"
            MR_Word check_hlds__common__Ys_8;

#line 697 "common.m"
            check_hlds__common__succeeded = ((MR_tag((MR_Word) check_hlds__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 697 "common.m"
            if (check_hlds__common__succeeded)
#line 697 "common.m"
              {
#line 697 "common.m"
                check_hlds__common__Y_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__2_2, (MR_Integer) 0)));
#line 697 "common.m"
                check_hlds__common__Ys_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__2_2, (MR_Integer) 1)));
#line 713 "common.m"
                {
#line 713 "common.m"
                  {
#line 713 "common.m"
                    check_hlds__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__common_scalar_common_1[0], ((MR_Box) (check_hlds__common__X_5)), ((MR_Box) (check_hlds__common__Y_7)));
                  }
#line 713 "common.m"
                }
#line 713 "common.m"
                if (!(check_hlds__common__succeeded))
#line 715 "common.m"
                  {
#line 715 "common.m"
                    MR_Word check_hlds__common__TypeInfo_8_14 = (MR_Word) &check_hlds__common_scalar_common_1[0];
#line 715 "common.m"
                    MR_Integer check_hlds__common__Id_13;
#line 715 "common.m"
                    MR_Integer check_hlds__common__V_15_15;

#line 715 "common.m"
                    {
#line 715 "common.m"
                      check_hlds__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__common__TypeInfo_8_14, check_hlds__common__HeadVar__3_3, ((MR_Box) (check_hlds__common__X_5)), &check_hlds__common__Id_13);
                    }
#line 715 "common.m"
                    if (check_hlds__common__succeeded)
#line 715 "common.m"
                      {
#line 716 "common.m"
                        {
#line 716 "common.m"
                          check_hlds__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__common__TypeInfo_8_14, check_hlds__common__HeadVar__3_3, ((MR_Box) (check_hlds__common__Y_7)), &check_hlds__common__V_15_15);
                        }
#line 715 "common.m"
                        if (check_hlds__common__succeeded)
#line 716 "common.m"
                          check_hlds__common__succeeded = (check_hlds__common__Id_13 == check_hlds__common__V_15_15);
#line 715 "common.m"
                      }
#line 715 "common.m"
                  }
#line 697 "common.m"
                if (check_hlds__common__succeeded)
#line 699 "common.m"
                  {
#line 699 "common.m"
                    /* direct tailcall eliminated */
#line 699 "common.m"
                    {
#line 699 "common.m"
                      MR_Word check_hlds__common__HeadVar__1__tmp_copy_1 = check_hlds__common__Xs_6;
#line 699 "common.m"
                      MR_Word check_hlds__common__HeadVar__2__tmp_copy_2 = check_hlds__common__Ys_8;

#line 699 "common.m"
                      check_hlds__common__HeadVar__2_2 = check_hlds__common__HeadVar__2__tmp_copy_2;
#line 699 "common.m"
                      check_hlds__common__HeadVar__1_1 = check_hlds__common__HeadVar__1__tmp_copy_1;
#line 699 "common.m"
                    }
#line 699 "common.m"
                    continue;
#line 699 "common.m"
                  }
#line 697 "common.m"
              }
#line 697 "common.m"
          }
#line 696 "common.m"
        return check_hlds__common__succeeded;
#line 696 "common.m"
      }
#line 696 "common.m"
      break;
#line 696 "common.m"
    }
#line 693 "common.m"
}

#line 675 "common.m"
static MR_bool MR_CALL 
check_hlds__common__find_previous_call_5_p_0(
#line 675 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 675 "common.m"
  MR_Word check_hlds__common__InputArgs_8,
#line 675 "common.m"
  MR_Word check_hlds__common__Eqv_9,
#line 675 "common.m"
  MR_Word * check_hlds__common__OutputArgs_10,
#line 675 "common.m"
  MR_Word * check_hlds__common__PrevContext_11)
#line 675 "common.m"
{
#line 680 "common.m"
  {
#line 680 "common.m"
    MR_bool check_hlds__common__succeeded = ((MR_tag((MR_Word) check_hlds__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 680 "common.m"
    MR_Word check_hlds__common__SeenCall_6;
#line 680 "common.m"
    MR_Word check_hlds__common__SeenCalls_7;
#line 680 "common.m"
    MR_Word check_hlds__common__InputArgs1_12;
#line 680 "common.m"
    MR_Word check_hlds__common__OutputArgs1_13;

#line 680 "common.m"
    if (check_hlds__common__succeeded)
#line 680 "common.m"
      {
#line 680 "common.m"
        check_hlds__common__SeenCall_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__1_1, (MR_Integer) 0)));
#line 680 "common.m"
        check_hlds__common__SeenCalls_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__1_1, (MR_Integer) 1)));
#line 681 "common.m"
        *check_hlds__common__PrevContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__SeenCall_6, (MR_Integer) 0)));
#line 681 "common.m"
        check_hlds__common__InputArgs1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__SeenCall_6, (MR_Integer) 1)));
#line 681 "common.m"
        check_hlds__common__OutputArgs1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__SeenCall_6, (MR_Integer) 2)));
#line 682 "common.m"
        {
#line 682 "common.m"
          check_hlds__common__succeeded = check_hlds__common__common_var_lists_are_equiv_3_p_0(check_hlds__common__InputArgs_8, check_hlds__common__InputArgs1_12, check_hlds__common__Eqv_9);
        }
#line 684 "common.m"
        if (check_hlds__common__succeeded)
#line 683 "common.m"
          {
#line 683 "common.m"
            *check_hlds__common__OutputArgs_10 = check_hlds__common__OutputArgs1_13;
#line 683 "common.m"
            check_hlds__common__succeeded = MR_TRUE;
#line 683 "common.m"
          }
#line 684 "common.m"
        else
#line 685 "common.m"
          {
#line 685 "common.m"
            MR_Word check_hlds__common__V_14_14;

#line 685 "common.m"
            {
#line 685 "common.m"
              check_hlds__common__succeeded = check_hlds__common__find_previous_call_5_p_0(check_hlds__common__SeenCalls_7, check_hlds__common__InputArgs_8, check_hlds__common__Eqv_9, check_hlds__common__OutputArgs_10, &check_hlds__common__V_14_14);
            }
#line 685 "common.m"
            if (check_hlds__common__succeeded)
#line 685 "common.m"
              {
#line 685 "common.m"
                return check_hlds__common__succeeded = mercury__term____Unify____context_0_0(*check_hlds__common__PrevContext_11, check_hlds__common__V_14_14);
              }
#line 685 "common.m"
          }
#line 680 "common.m"
      }
#line 680 "common.m"
    return check_hlds__common__succeeded;
#line 680 "common.m"
  }
#line 675 "common.m"
}

#line 633 "common.m"
static MR_bool MR_CALL 
check_hlds__common__partition_call_args_7_p_0(
#line 633 "common.m"
  MR_Word check_hlds__common__VarTypes_1,
#line 633 "common.m"
  MR_Word check_hlds__common__ModuleInfo_2,
#line 633 "common.m"
  MR_Word check_hlds__common__HeadVar__3_3,
#line 633 "common.m"
  MR_Word check_hlds__common__HeadVar__4_4,
#line 633 "common.m"
  MR_Word * check_hlds__common__HeadVar__5_5,
#line 633 "common.m"
  MR_Word * check_hlds__common__HeadVar__6_6,
#line 633 "common.m"
  MR_Word * check_hlds__common__HeadVar__7_7)
#line 633 "common.m"
{
#line 637 "common.m"
  {
#line 637 "common.m"
    MR_bool check_hlds__common__succeeded;

#line 637 "common.m"
    if ((check_hlds__common__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 637 "common.m"
      {
#line 637 "common.m"
        if ((check_hlds__common__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 637 "common.m"
          {
#line 637 "common.m"
            *check_hlds__common__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 637 "common.m"
            *check_hlds__common__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 637 "common.m"
            *check_hlds__common__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 637 "common.m"
          }
#line 637 "common.m"
        else
#line 638 "common.m"
          {
#line 639 "common.m"
            {
#line 639 "common.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.common", (MR_String) "predicate \140check_hlds.common.partition_call_args\'/7", (MR_String) "length mismatch (1)");
            }
#line 638 "common.m"
          }
#line 637 "common.m"
        check_hlds__common__succeeded = MR_TRUE;
#line 637 "common.m"
      }
#line 637 "common.m"
    else
#line 637 "common.m"
      {
#line 637 "common.m"
        MR_Word check_hlds__common__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__3_3, (MR_Integer) 1)));
#line 637 "common.m"
        MR_Word check_hlds__common__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__3_3, (MR_Integer) 0)));

#line 637 "common.m"
        if ((check_hlds__common__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 640 "common.m"
          {
#line 641 "common.m"
            {
#line 641 "common.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.common", (MR_String) "predicate \140check_hlds.common.partition_call_args\'/7", (MR_String) "length mismatch (2)");
            }
#line 640 "common.m"
            check_hlds__common__succeeded = MR_TRUE;
#line 640 "common.m"
          }
#line 637 "common.m"
        else
#line 643 "common.m"
          {
#line 643 "common.m"
            MR_Word check_hlds__common__Arg_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__4_4, (MR_Integer) 0)));
#line 643 "common.m"
            MR_Word check_hlds__common__Args_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__4_4, (MR_Integer) 1)));
#line 643 "common.m"
            MR_Word check_hlds__common__InputArgs1_39;
#line 643 "common.m"
            MR_Word check_hlds__common__OutputArgs1_40;
#line 643 "common.m"
            MR_Word check_hlds__common__OutputModes1_41;
#line 643 "common.m"
            MR_Word check_hlds__common__InitialInst_42;
#line 643 "common.m"
            MR_Word check_hlds__common__FinalInst_43;
#line 643 "common.m"
            MR_Word check_hlds__common__Type_44;

#line 644 "common.m"
            {
#line 644 "common.m"
              check_hlds__common__succeeded = check_hlds__common__partition_call_args_7_p_0(check_hlds__common__VarTypes_1, check_hlds__common__ModuleInfo_2, check_hlds__common__V_46_46, check_hlds__common__Args_35, &check_hlds__common__InputArgs1_39, &check_hlds__common__OutputArgs1_40, &check_hlds__common__OutputModes1_41);
            }
#line 643 "common.m"
            if (check_hlds__common__succeeded)
#line 643 "common.m"
              {
#line 646 "common.m"
                {
#line 646 "common.m"
                  check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__common__ModuleInfo_2, check_hlds__common__V_47_47, &check_hlds__common__InitialInst_42, &check_hlds__common__FinalInst_43);
                }
#line 647 "common.m"
                {
#line 647 "common.m"
                  parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__common__VarTypes_1, check_hlds__common__Arg_34, &check_hlds__common__Type_44);
                }
#line 648 "common.m"
                {
#line 648 "common.m"
                  check_hlds__common__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(check_hlds__common__InitialInst_42, check_hlds__common__FinalInst_43, check_hlds__common__Type_44, check_hlds__common__ModuleInfo_2);
                }
#line 652 "common.m"
                if (check_hlds__common__succeeded)
#line 649 "common.m"
                  {
#line 649 "common.m"
                    {
#line 649 "common.m"
                      MR_Word base;
#line 649 "common.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 649 "common.m"
                      *check_hlds__common__HeadVar__5_5 = base;
#line 649 "common.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__common__Arg_34));
#line 649 "common.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__common__InputArgs1_39));
#line 649 "common.m"
                    }
#line 650 "common.m"
                    *check_hlds__common__HeadVar__6_6 = check_hlds__common__OutputArgs1_40;
#line 651 "common.m"
                    *check_hlds__common__HeadVar__7_7 = check_hlds__common__OutputModes1_41;
#line 649 "common.m"
                    check_hlds__common__succeeded = MR_TRUE;
#line 649 "common.m"
                  }
#line 652 "common.m"
                else
#line 655 "common.m"
                  {
#line 655 "common.m"
                    {
#line 655 "common.m"
                      check_hlds__common__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(check_hlds__common__ModuleInfo_2, check_hlds__common__FinalInst_43);
                    }
#line 655 "common.m"
                    if (check_hlds__common__succeeded)
#line 655 "common.m"
                      {
#line 661 "common.m"
                        {
#line 661 "common.m"
                          check_hlds__common__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(check_hlds__common__FinalInst_43, check_hlds__common__FinalInst_43, check_hlds__common__Type_44, check_hlds__common__ModuleInfo_2);
                        }
#line 655 "common.m"
                        if (check_hlds__common__succeeded)
#line 655 "common.m"
                          {
#line 666 "common.m"
                            {
#line 666 "common.m"
                              check_hlds__common__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__common__ModuleInfo_2, check_hlds__common__InitialInst_42);
                            }
#line 655 "common.m"
                            if (check_hlds__common__succeeded)
#line 655 "common.m"
                              {
#line 668 "common.m"
                                *check_hlds__common__HeadVar__5_5 = check_hlds__common__InputArgs1_39;
#line 669 "common.m"
                                {
#line 669 "common.m"
                                  MR_Word base;
#line 669 "common.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "common.m"
                                  *check_hlds__common__HeadVar__6_6 = base;
#line 669 "common.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__common__Arg_34));
#line 669 "common.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__common__OutputArgs1_40));
#line 669 "common.m"
                                }
#line 670 "common.m"
                                {
#line 670 "common.m"
                                  MR_Word base;
#line 670 "common.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "common.m"
                                  *check_hlds__common__HeadVar__7_7 = base;
#line 670 "common.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__common__V_47_47));
#line 670 "common.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__common__OutputModes1_41));
#line 670 "common.m"
                                }
#line 670 "common.m"
                                check_hlds__common__succeeded = MR_TRUE;
#line 655 "common.m"
                              }
#line 655 "common.m"
                          }
#line 655 "common.m"
                      }
#line 655 "common.m"
                  }
#line 643 "common.m"
              }
#line 643 "common.m"
          }
#line 637 "common.m"
      }
#line 637 "common.m"
    return check_hlds__common__succeeded;
#line 637 "common.m"
  }
#line 633 "common.m"
}

#line 542 "common.m"
static void MR_CALL 
check_hlds__common__common_optimise_call_2_9_p_0(
#line 542 "common.m"
  MR_Word check_hlds__common__SeenCall_10,
#line 542 "common.m"
  MR_Word check_hlds__common__InputArgs_11,
#line 542 "common.m"
  MR_Word check_hlds__common__OutputArgs_12,
#line 542 "common.m"
  MR_Word check_hlds__common__Modes_13,
#line 542 "common.m"
  MR_Word check_hlds__common__GoalInfo_14,
#line 542 "common.m"
  MR_Word check_hlds__common__GoalExpr0_15,
#line 542 "common.m"
  MR_Word * check_hlds__common__GoalExpr_16,
#line 542 "common.m"
  MR_Word check_hlds__common__STATE_VARIABLE_Info_0_43,
#line 542 "common.m"
  MR_Word * check_hlds__common__STATE_VARIABLE_Info_44)
#line 542 "common.m"
{
#line 548 "common.m"
  {
#line 548 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 548 "common.m"
    MR_Word check_hlds__common__CommonInfo0_18;
#line 548 "common.m"
    MR_Word check_hlds__common__Eqv0_19;
#line 548 "common.m"
    MR_Word check_hlds__common__SeenCalls0_20;
#line 548 "common.m"
    MR_Word check_hlds__common__CommonInfo_38;
#line 548 "common.m"
    MR_Word check_hlds__common__STATE_VARIABLE_Info_94_94;
#line 550 "common.m"
    MR_Word check_hlds__common__V_103_103;
#line 550 "common.m"
    MR_Word check_hlds__common__V_104_104;
#line 618 "common.m"
    MR_Word check_hlds__common__SeenCallsList0_21;
#line 552 "common.m"
    MR_Box check_hlds__common__conv0_SeenCallsList0_21;

#line 549 "common.m"
    {
#line 549 "common.m"
      check_hlds__simplify__simplify_info_get_common_info_2_p_0(check_hlds__common__STATE_VARIABLE_Info_0_43, &check_hlds__common__CommonInfo0_18);
    }
#line 550 "common.m"
    check_hlds__common__Eqv0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_18, (MR_Integer) 0)));
#line 550 "common.m"
    check_hlds__common__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_18, (MR_Integer) 1)));
#line 550 "common.m"
    check_hlds__common__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_18, (MR_Integer) 2)));
#line 550 "common.m"
    check_hlds__common__SeenCalls0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_18, (MR_Integer) 3)));
#line 552 "common.m"
    {
#line 552 "common.m"
      check_hlds__common__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0, (MR_Word) &check_hlds__common_scalar_common_1[2], check_hlds__common__SeenCalls0_20, ((MR_Box) (check_hlds__common__SeenCall_10)), &check_hlds__common__conv0_SeenCallsList0_21);
    }
#line 552 "common.m"
    if (check_hlds__common__succeeded)
#line 552 "common.m"
      {
#line 552 "common.m"
        check_hlds__common__SeenCallsList0_21 = ((MR_Word) check_hlds__common__conv0_SeenCallsList0_21);
#line 552 "common.m"
        check_hlds__common__succeeded = MR_TRUE;
#line 552 "common.m"
      }
#line 618 "common.m"
    if (check_hlds__common__succeeded)
#line 610 "common.m"
      {
#line 610 "common.m"
        MR_Word check_hlds__common__OutputArgs2_22;
#line 610 "common.m"
        MR_Word check_hlds__common__PrevContext_23;

#line 554 "common.m"
        {
#line 554 "common.m"
          check_hlds__common__succeeded = check_hlds__common__find_previous_call_5_p_0(check_hlds__common__SeenCallsList0_21, check_hlds__common__InputArgs_11, check_hlds__common__Eqv0_19, &check_hlds__common__OutputArgs2_22, &check_hlds__common__PrevContext_23);
        }
#line 610 "common.m"
        if (check_hlds__common__succeeded)
#line 557 "common.m"
          {
#line 557 "common.m"
            MR_Word check_hlds__common__ModuleInfo_24;
#line 557 "common.m"
            MR_Word check_hlds__common__UniModes_25;
#line 557 "common.m"
            MR_Word check_hlds__common__Goals_26;
#line 557 "common.m"
            MR_Word check_hlds__common__VarTypes_27;
#line 557 "common.m"
            MR_Integer check_hlds__common__Cost_39;
#line 557 "common.m"
            MR_Word check_hlds__common__Detism0_40;
#line 557 "common.m"
            MR_Word check_hlds__common__STATE_VARIABLE_Info_46_46;
#line 557 "common.m"
            MR_Word check_hlds__common__STATE_VARIABLE_Info_90_90;
#line 557 "common.m"
            MR_Word check_hlds__common__V_91_91;
#line 557 "common.m"
            MR_Word check_hlds__common__STATE_VARIABLE_Info_92_92;
#line 557 "common.m"
            MR_Word check_hlds__common__STATE_VARIABLE_Info_93_93;
#line 564 "common.m"
            MR_Word check_hlds__common__OutputArgTypes1_28;
#line 564 "common.m"
            MR_Word check_hlds__common__OutputArgTypes2_29;

#line 557 "common.m"
            {
#line 557 "common.m"
              check_hlds__simplify__simplify_info_get_module_info_2_p_0(check_hlds__common__STATE_VARIABLE_Info_0_43, &check_hlds__common__ModuleInfo_24);
            }
#line 558 "common.m"
            {
#line 558 "common.m"
              check_hlds__mode_util__modes_to_uni_modes_4_p_0(check_hlds__common__ModuleInfo_24, check_hlds__common__Modes_13, check_hlds__common__Modes_13, &check_hlds__common__UniModes_25);
            }
#line 559 "common.m"
            {
#line 559 "common.m"
              check_hlds__common__create_output_unifications_7_p_0(check_hlds__common__GoalInfo_14, check_hlds__common__OutputArgs_12, check_hlds__common__OutputArgs2_22, check_hlds__common__UniModes_25, &check_hlds__common__Goals_26, check_hlds__common__STATE_VARIABLE_Info_0_43, &check_hlds__common__STATE_VARIABLE_Info_46_46);
            }
#line 561 "common.m"
            {
#line 561 "common.m"
              MR_Word base;
#line 561 "common.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 561 "common.m"
              *check_hlds__common__GoalExpr_16 = base;
#line 561 "common.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 561 "common.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 561 "common.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__common__Goals_26));
#line 561 "common.m"
            }
#line 562 "common.m"
            {
#line 562 "common.m"
              check_hlds__simplify__simplify_info_get_var_types_2_p_0(check_hlds__common__STATE_VARIABLE_Info_46_46, &check_hlds__common__VarTypes_27);
            }
#line 564 "common.m"
            {
#line 564 "common.m"
              check_hlds__common__succeeded = check_hlds__simplify__simplify_do_warn_duplicate_calls_1_p_0(check_hlds__common__STATE_VARIABLE_Info_46_46);
            }
#line 564 "common.m"
            if (check_hlds__common__succeeded)
#line 564 "common.m"
              {
#line 568 "common.m"
                {
#line 568 "common.m"
                  parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__common__VarTypes_27, check_hlds__common__OutputArgs_12, &check_hlds__common__OutputArgTypes1_28);
                }
#line 569 "common.m"
                {
#line 569 "common.m"
                  parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__common__VarTypes_27, check_hlds__common__OutputArgs2_22, &check_hlds__common__OutputArgTypes2_29);
                }
#line 570 "common.m"
                {
#line 570 "common.m"
                  check_hlds__common__succeeded = check_hlds__common__types_match_exactly_list_2_p_0(check_hlds__common__OutputArgTypes1_28, check_hlds__common__OutputArgTypes2_29);
                }
#line 564 "common.m"
              }
#line 589 "common.m"
            if (check_hlds__common__succeeded)
#line 572 "common.m"
              {
#line 572 "common.m"
                MR_Word check_hlds__common__TypeCtorInfo_119_119;
#line 572 "common.m"
                MR_Word check_hlds__common__Context_30;
#line 572 "common.m"
                MR_Word check_hlds__common__CallPieces_31;
#line 572 "common.m"
                MR_Word check_hlds__common__CurPieces_32;
#line 572 "common.m"
                MR_Word check_hlds__common__PrevPieces_33;
#line 572 "common.m"
                MR_Word check_hlds__common__Msg_35;
#line 572 "common.m"
                MR_Word check_hlds__common__PrevMsg_36;
#line 572 "common.m"
                MR_Word check_hlds__common__Spec_37;
#line 572 "common.m"
                MR_Word check_hlds__common__V_48_48;
#line 572 "common.m"
                MR_Word check_hlds__common__V_51_51;
#line 572 "common.m"
                MR_Word check_hlds__common__V_55_55;
#line 572 "common.m"
                MR_Word check_hlds__common__V_66_66;
#line 572 "common.m"
                MR_Word check_hlds__common__V_67_67;
#line 572 "common.m"
                MR_Word check_hlds__common__V_70_70;
#line 572 "common.m"
                MR_Word check_hlds__common__V_71_71;
#line 572 "common.m"
                MR_Word check_hlds__common__V_74_74;
#line 572 "common.m"
                MR_Word check_hlds__common__V_77_77;
#line 572 "common.m"
                MR_Word check_hlds__common__V_78_78;
#line 572 "common.m"
                MR_Word check_hlds__common__V_81_81;
#line 572 "common.m"
                MR_Word check_hlds__common__V_82_82;
#line 572 "common.m"
                MR_Word check_hlds__common__V_87_87;
#line 572 "common.m"
                MR_Word check_hlds__common__V_88_88;

#line 572 "common.m"
                {
#line 572 "common.m"
                  check_hlds__common__Context_30 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__common__GoalInfo_14);
                }
#line 573 "common.m"
                {
#line 573 "common.m"
                  check_hlds__common__CallPieces_31 = check_hlds__det_report__det_report_seen_call_id_2_f_0(check_hlds__common__ModuleInfo_24, check_hlds__common__SeenCall_10);
                }
#line 4498 "check_hlds.common.c"
                check_hlds__common__TypeCtorInfo_119_119 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 575 "common.m"
                {
#line 575 "common.m"
                  check_hlds__common__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__V_48_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__common_scalar_common_1[6])));
#line 575 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__V_48_48, 1) = ((MR_Box) (check_hlds__common__CallPieces_31));
#line 575 "common.m"
                }
#line 575 "common.m"
                check_hlds__common__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__common_scalar_common_1[8]);
#line 574 "common.m"
                {
#line 574 "common.m"
                  check_hlds__common__CurPieces_32 = mercury__list__f_43_43_2_f_0(check_hlds__common__TypeCtorInfo_119_119, check_hlds__common__V_48_48, check_hlds__common__V_51_51);
                }
#line 577 "common.m"
                {
#line 577 "common.m"
                  check_hlds__common__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__V_55_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__common_scalar_common_1[9])));
#line 577 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__V_55_55, 1) = ((MR_Box) (check_hlds__common__CallPieces_31));
#line 577 "common.m"
                }
#line 576 "common.m"
                {
#line 576 "common.m"
                  check_hlds__common__PrevPieces_33 = mercury__list__f_43_43_2_f_0(check_hlds__common__TypeCtorInfo_119_119, check_hlds__common__V_55_55, check_hlds__common__V_51_51);
                }
#line 582 "common.m"
                {
#line 582 "common.m"
                  check_hlds__common__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 582 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__common__V_71_71, 0) = ((MR_Box) (check_hlds__common__CurPieces_32));
#line 582 "common.m"
                }
#line 581 "common.m"
                {
#line 581 "common.m"
                  check_hlds__common__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__V_70_70, 0) = ((MR_Box) (check_hlds__common__V_71_71));
#line 581 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 581 "common.m"
                }
#line 582 "common.m"
                {
#line 582 "common.m"
                  check_hlds__common__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__V_67_67, 0) = ((MR_Box) (((MR_Integer) 20 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 582 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__V_67_67, 1) = ((MR_Box) (check_hlds__common__V_70_70));
#line 582 "common.m"
                }
#line 580 "common.m"
                {
#line 580 "common.m"
                  check_hlds__common__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__V_66_66, 0) = ((MR_Box) (check_hlds__common__V_67_67));
#line 580 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 580 "common.m"
                }
#line 580 "common.m"
                {
#line 580 "common.m"
                  check_hlds__common__Msg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 580 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__common__Msg_35, 0) = ((MR_Box) (check_hlds__common__Context_30));
#line 580 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__common__Msg_35, 1) = ((MR_Box) (check_hlds__common__V_66_66));
#line 580 "common.m"
                }
#line 583 "common.m"
                {
#line 583 "common.m"
                  check_hlds__common__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 583 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__V_74_74, 0) = ((MR_Box) (check_hlds__common__PrevContext_23));
#line 583 "common.m"
                }
#line 585 "common.m"
                {
#line 585 "common.m"
                  check_hlds__common__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 585 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__common__V_82_82, 0) = ((MR_Box) (check_hlds__common__PrevPieces_33));
#line 585 "common.m"
                }
#line 584 "common.m"
                {
#line 584 "common.m"
                  check_hlds__common__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__V_81_81, 0) = ((MR_Box) (check_hlds__common__V_82_82));
#line 584 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 584 "common.m"
                }
#line 585 "common.m"
                {
#line 585 "common.m"
                  check_hlds__common__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__V_78_78, 0) = ((MR_Box) (((MR_Integer) 20 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 585 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__V_78_78, 1) = ((MR_Box) (check_hlds__common__V_81_81));
#line 585 "common.m"
                }
#line 583 "common.m"
                {
#line 583 "common.m"
                  check_hlds__common__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 583 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__V_77_77, 0) = ((MR_Box) (check_hlds__common__V_78_78));
#line 583 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 583 "common.m"
                }
#line 583 "common.m"
                {
#line 583 "common.m"
                  check_hlds__common__PrevMsg_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 583 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__PrevMsg_36, 0) = ((MR_Box) (check_hlds__common__V_74_74));
#line 583 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__PrevMsg_36, 1) = ((MR_Box) ((MR_Integer) 0));
#line 583 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__PrevMsg_36, 2) = ((MR_Box) ((MR_Integer) 0));
#line 583 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__PrevMsg_36, 3) = ((MR_Box) (check_hlds__common__V_77_77));
#line 583 "common.m"
                }
#line 587 "common.m"
                {
#line 587 "common.m"
                  check_hlds__common__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__V_88_88, 0) = ((MR_Box) (check_hlds__common__PrevMsg_36));
#line 587 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 587 "common.m"
                }
#line 586 "common.m"
                {
#line 586 "common.m"
                  check_hlds__common__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 586 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__V_87_87, 0) = ((MR_Box) (check_hlds__common__Msg_35));
#line 586 "common.m"
                  MR_hl_field(MR_mktag(1), check_hlds__common__V_87_87, 1) = ((MR_Box) (check_hlds__common__V_88_88));
#line 586 "common.m"
                }
#line 586 "common.m"
                {
#line 586 "common.m"
                  check_hlds__common__Spec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 586 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__common__Spec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__common_scalar_common_3[0])));
#line 586 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__common__Spec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__common_scalar_common_5[0])));
#line 586 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__common__Spec_37, 2) = ((MR_Box) (check_hlds__common__V_87_87));
#line 586 "common.m"
                }
#line 588 "common.m"
                {
#line 588 "common.m"
                  check_hlds__simplify__simplify_info_add_error_spec_3_p_0(check_hlds__common__Spec_37, check_hlds__common__STATE_VARIABLE_Info_46_46, &check_hlds__common__STATE_VARIABLE_Info_90_90);
                }
#line 572 "common.m"
              }
#line 589 "common.m"
            else
#line 588 "common.m"
              check_hlds__common__STATE_VARIABLE_Info_90_90 = check_hlds__common__STATE_VARIABLE_Info_46_46;
#line 592 "common.m"
            check_hlds__common__CommonInfo_38 = check_hlds__common__CommonInfo0_18;
#line 593 "common.m"
            {
#line 593 "common.m"
              check_hlds__common__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 593 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__common__V_91_91, 0) = ((MR_Box) (check_hlds__common__GoalExpr0_15));
#line 593 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__common__V_91_91, 1) = ((MR_Box) (check_hlds__common__GoalInfo_14));
#line 593 "common.m"
            }
#line 593 "common.m"
            {
#line 593 "common.m"
              transform_hlds__pd_cost__goal_cost_2_p_0(check_hlds__common__V_91_91, &check_hlds__common__Cost_39);
            }
#line 594 "common.m"
            {
#line 594 "common.m"
              check_hlds__simplify__simplify_info_incr_cost_delta_3_p_0(check_hlds__common__Cost_39, check_hlds__common__STATE_VARIABLE_Info_90_90, &check_hlds__common__STATE_VARIABLE_Info_92_92);
            }
#line 595 "common.m"
            {
#line 595 "common.m"
              check_hlds__simplify__simplify_info_set_requantify_2_p_0(check_hlds__common__STATE_VARIABLE_Info_92_92, &check_hlds__common__STATE_VARIABLE_Info_93_93);
            }
#line 596 "common.m"
            {
#line 596 "common.m"
              check_hlds__common__Detism0_40 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__common__GoalInfo_14);
            }
#line 599 "common.m"
            if ((check_hlds__common__Detism0_40 == (MR_Integer) 0))
#line 598 "common.m"
              check_hlds__common__STATE_VARIABLE_Info_94_94 = check_hlds__common__STATE_VARIABLE_Info_93_93;
#line 599 "common.m"
            else
#line 608 "common.m"
              {
#line 608 "common.m"
                check_hlds__simplify__simplify_info_set_rerun_det_2_p_0(check_hlds__common__STATE_VARIABLE_Info_93_93, &check_hlds__common__STATE_VARIABLE_Info_94_94);
              }
#line 557 "common.m"
          }
#line 610 "common.m"
        else
#line 611 "common.m"
          {
#line 611 "common.m"
            MR_Word check_hlds__common__ThisCall_41;
#line 611 "common.m"
            MR_Word check_hlds__common__SeenCalls_42;
#line 611 "common.m"
            MR_Word check_hlds__common__V_95_95;
#line 611 "common.m"
            MR_Word check_hlds__common__Context_99;
#line 615 "common.m"
            MR_Word check_hlds__common__V_109_109;
#line 615 "common.m"
            MR_Word check_hlds__common__V_110_110;
#line 615 "common.m"
            MR_Word check_hlds__common__V_111_111;
#line 615 "common.m"
            MR_Word check_hlds__common__V_112_112;

#line 611 "common.m"
            {
#line 611 "common.m"
              check_hlds__common__Context_99 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__common__GoalInfo_14);
            }
#line 612 "common.m"
            {
#line 612 "common.m"
              check_hlds__common__ThisCall_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 612 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__common__ThisCall_41, 0) = ((MR_Box) (check_hlds__common__Context_99));
#line 612 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__common__ThisCall_41, 1) = ((MR_Box) (check_hlds__common__InputArgs_11));
#line 612 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__common__ThisCall_41, 2) = ((MR_Box) (check_hlds__common__OutputArgs_12));
#line 612 "common.m"
            }
#line 613 "common.m"
            {
#line 613 "common.m"
              check_hlds__common__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__common__V_95_95, 0) = ((MR_Box) (check_hlds__common__ThisCall_41));
#line 613 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__common__V_95_95, 1) = ((MR_Box) (check_hlds__common__SeenCallsList0_21));
#line 613 "common.m"
            }
#line 613 "common.m"
            {
#line 613 "common.m"
              mercury__map__det_update_4_p_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0, (MR_Word) &check_hlds__common_scalar_common_1[2], ((MR_Box) (check_hlds__common__SeenCall_10)), ((MR_Box) (check_hlds__common__V_95_95)), check_hlds__common__SeenCalls0_20, &check_hlds__common__SeenCalls_42);
            }
#line 615 "common.m"
            check_hlds__common__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_18, (MR_Integer) 0)));
#line 615 "common.m"
            check_hlds__common__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_18, (MR_Integer) 1)));
#line 615 "common.m"
            check_hlds__common__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_18, (MR_Integer) 2)));
#line 615 "common.m"
            check_hlds__common__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_18, (MR_Integer) 3)));
#line 615 "common.m"
            {
#line 615 "common.m"
              check_hlds__common__CommonInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 615 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_38, 0) = ((MR_Box) (check_hlds__common__V_109_109));
#line 615 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_38, 1) = ((MR_Box) (check_hlds__common__V_110_110));
#line 615 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_38, 2) = ((MR_Box) (check_hlds__common__V_111_111));
#line 615 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_38, 3) = ((MR_Box) (check_hlds__common__SeenCalls_42));
#line 615 "common.m"
            }
#line 616 "common.m"
            *check_hlds__common__GoalExpr_16 = check_hlds__common__GoalExpr0_15;
#line 616 "common.m"
            check_hlds__common__STATE_VARIABLE_Info_94_94 = check_hlds__common__STATE_VARIABLE_Info_0_43;
#line 611 "common.m"
          }
#line 610 "common.m"
      }
#line 618 "common.m"
    else
#line 619 "common.m"
      {
#line 619 "common.m"
        MR_Word check_hlds__common__V_96_96;
#line 619 "common.m"
        MR_Word check_hlds__common__Context_100;
#line 619 "common.m"
        MR_Word check_hlds__common__ThisCall_101;
#line 619 "common.m"
        MR_Word check_hlds__common__SeenCalls_102;
#line 622 "common.m"
        MR_Word check_hlds__common__V_113_113;
#line 622 "common.m"
        MR_Word check_hlds__common__V_114_114;
#line 622 "common.m"
        MR_Word check_hlds__common__V_115_115;
#line 622 "common.m"
        MR_Word check_hlds__common__V_116_116;

#line 619 "common.m"
        {
#line 619 "common.m"
          check_hlds__common__Context_100 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__common__GoalInfo_14);
        }
#line 620 "common.m"
        {
#line 620 "common.m"
          check_hlds__common__ThisCall_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 620 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__common__ThisCall_101, 0) = ((MR_Box) (check_hlds__common__Context_100));
#line 620 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__common__ThisCall_101, 1) = ((MR_Box) (check_hlds__common__InputArgs_11));
#line 620 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__common__ThisCall_101, 2) = ((MR_Box) (check_hlds__common__OutputArgs_12));
#line 620 "common.m"
        }
#line 621 "common.m"
        {
#line 621 "common.m"
          check_hlds__common__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__common__V_96_96, 0) = ((MR_Box) (check_hlds__common__ThisCall_101));
#line 621 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__common__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 621 "common.m"
        }
#line 621 "common.m"
        {
#line 621 "common.m"
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0, (MR_Word) &check_hlds__common_scalar_common_1[2], ((MR_Box) (check_hlds__common__SeenCall_10)), ((MR_Box) (check_hlds__common__V_96_96)), check_hlds__common__SeenCalls0_20, &check_hlds__common__SeenCalls_102);
        }
#line 622 "common.m"
        check_hlds__common__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_18, (MR_Integer) 0)));
#line 622 "common.m"
        check_hlds__common__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_18, (MR_Integer) 1)));
#line 622 "common.m"
        check_hlds__common__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_18, (MR_Integer) 2)));
#line 622 "common.m"
        check_hlds__common__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_18, (MR_Integer) 3)));
#line 622 "common.m"
        {
#line 622 "common.m"
          check_hlds__common__CommonInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 622 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_38, 0) = ((MR_Box) (check_hlds__common__V_113_113));
#line 622 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_38, 1) = ((MR_Box) (check_hlds__common__V_114_114));
#line 622 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_38, 2) = ((MR_Box) (check_hlds__common__V_115_115));
#line 622 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_38, 3) = ((MR_Box) (check_hlds__common__SeenCalls_102));
#line 622 "common.m"
        }
#line 623 "common.m"
        *check_hlds__common__GoalExpr_16 = check_hlds__common__GoalExpr0_15;
#line 623 "common.m"
        check_hlds__common__STATE_VARIABLE_Info_94_94 = check_hlds__common__STATE_VARIABLE_Info_0_43;
#line 619 "common.m"
      }
#line 625 "common.m"
    {
#line 625 "common.m"
      check_hlds__simplify__simplify_info_set_common_info_3_p_0(check_hlds__common__CommonInfo_38, check_hlds__common__STATE_VARIABLE_Info_94_94, check_hlds__common__STATE_VARIABLE_Info_44);
#line 625 "common.m"
      return;
    }
#line 548 "common.m"
  }
#line 542 "common.m"
}

#line 468 "common.m"
static void MR_CALL 
check_hlds__common__do_record_cell_in_struct_map_5_p_0(
#line 468 "common.m"
  MR_Word check_hlds__common__TypeCtor_6,
#line 468 "common.m"
  MR_Word check_hlds__common__ConsId_7,
#line 468 "common.m"
  MR_Word check_hlds__common__Struct_8,
#line 468 "common.m"
  MR_Word check_hlds__common__STATE_VARIABLE_StructMap_0_14,
#line 468 "common.m"
  MR_Word * check_hlds__common__STATE_VARIABLE_StructMap_15)
#line 468 "common.m"
{
#line 480 "common.m"
  {
#line 480 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 480 "common.m"
    MR_Word check_hlds__common__ConsIdMap0_10;
#line 472 "common.m"
    MR_Box check_hlds__common__conv0_ConsIdMap0_10;

#line 472 "common.m"
    {
#line 472 "common.m"
      check_hlds__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__common_scalar_common_2[0], check_hlds__common__STATE_VARIABLE_StructMap_0_14, ((MR_Box) (check_hlds__common__TypeCtor_6)), &check_hlds__common__conv0_ConsIdMap0_10);
    }
#line 472 "common.m"
    if (check_hlds__common__succeeded)
#line 472 "common.m"
      {
#line 472 "common.m"
        check_hlds__common__ConsIdMap0_10 = ((MR_Word) check_hlds__common__conv0_ConsIdMap0_10);
#line 472 "common.m"
        check_hlds__common__succeeded = MR_TRUE;
#line 472 "common.m"
      }
#line 480 "common.m"
    if (check_hlds__common__succeeded)
#line 478 "common.m"
      {
#line 478 "common.m"
        MR_Word check_hlds__common__ConsIdMap_13;
#line 476 "common.m"
        MR_Word check_hlds__common__Structs0_11;
#line 473 "common.m"
        MR_Box check_hlds__common__conv1_Structs0_11;

#line 473 "common.m"
        {
#line 473 "common.m"
          check_hlds__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__common_scalar_common_1[1], check_hlds__common__ConsIdMap0_10, ((MR_Box) (check_hlds__common__ConsId_7)), &check_hlds__common__conv1_Structs0_11);
        }
#line 473 "common.m"
        if (check_hlds__common__succeeded)
#line 473 "common.m"
          {
#line 473 "common.m"
            check_hlds__common__Structs0_11 = ((MR_Word) check_hlds__common__conv1_Structs0_11);
#line 473 "common.m"
            check_hlds__common__succeeded = MR_TRUE;
#line 473 "common.m"
          }
#line 476 "common.m"
        if (check_hlds__common__succeeded)
#line 474 "common.m"
          {
#line 474 "common.m"
            MR_Word check_hlds__common__Structs_12;

#line 474 "common.m"
            {
#line 474 "common.m"
              check_hlds__common__Structs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__common__Structs_12, 0) = ((MR_Box) (check_hlds__common__Struct_8));
#line 474 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__common__Structs_12, 1) = ((MR_Box) (check_hlds__common__Structs0_11));
#line 474 "common.m"
            }
#line 475 "common.m"
            {
#line 475 "common.m"
              mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__common_scalar_common_1[1], ((MR_Box) (check_hlds__common__ConsId_7)), ((MR_Box) (check_hlds__common__Structs_12)), check_hlds__common__ConsIdMap0_10, &check_hlds__common__ConsIdMap_13);
            }
#line 474 "common.m"
          }
#line 476 "common.m"
        else
#line 477 "common.m"
          {
#line 477 "common.m"
            MR_Word check_hlds__common__V_16_16;

#line 477 "common.m"
            {
#line 477 "common.m"
              check_hlds__common__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__common__V_16_16, 0) = ((MR_Box) (check_hlds__common__Struct_8));
#line 477 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__common__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 477 "common.m"
            }
#line 477 "common.m"
            {
#line 477 "common.m"
              mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__common_scalar_common_1[1], ((MR_Box) (check_hlds__common__ConsId_7)), ((MR_Box) (check_hlds__common__V_16_16)), check_hlds__common__ConsIdMap0_10, &check_hlds__common__ConsIdMap_13);
            }
#line 477 "common.m"
          }
#line 479 "common.m"
        {
#line 479 "common.m"
          mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__common_scalar_common_2[0], ((MR_Box) (check_hlds__common__TypeCtor_6)), ((MR_Box) (check_hlds__common__ConsIdMap_13)), check_hlds__common__STATE_VARIABLE_StructMap_0_14, check_hlds__common__STATE_VARIABLE_StructMap_15);
#line 479 "common.m"
          return;
        }
#line 478 "common.m"
      }
#line 480 "common.m"
    else
#line 481 "common.m"
      {
#line 481 "common.m"
        MR_Word check_hlds__common__V_19_19;
#line 481 "common.m"
        MR_Word check_hlds__common__ConsIdMap_22;

#line 481 "common.m"
        {
#line 481 "common.m"
          check_hlds__common__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__common__V_19_19, 0) = ((MR_Box) (check_hlds__common__Struct_8));
#line 481 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__common__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 481 "common.m"
        }
#line 481 "common.m"
        {
#line 481 "common.m"
          check_hlds__common__ConsIdMap_22 = mercury__map__singleton_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__common_scalar_common_1[1], ((MR_Box) (check_hlds__common__ConsId_7)), ((MR_Box) (check_hlds__common__V_19_19)));
        }
#line 482 "common.m"
        {
#line 482 "common.m"
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__common_scalar_common_2[0], ((MR_Box) (check_hlds__common__TypeCtor_6)), ((MR_Box) (check_hlds__common__ConsIdMap_22)), check_hlds__common__STATE_VARIABLE_StructMap_0_14, check_hlds__common__STATE_VARIABLE_StructMap_15);
#line 482 "common.m"
          return;
        }
#line 481 "common.m"
      }
#line 480 "common.m"
  }
#line 468 "common.m"
}

#line 450 "common.m"
static void MR_CALL 
check_hlds__common__record_cell_in_maps_6_p_0(
#line 450 "common.m"
  MR_Word check_hlds__common__TypeCtor_7,
#line 450 "common.m"
  MR_Word check_hlds__common__ConsId_8,
#line 450 "common.m"
  MR_Word check_hlds__common__Struct_9,
#line 450 "common.m"
  MR_Word check_hlds__common__VarEqv_10,
#line 450 "common.m"
  MR_Word check_hlds__common__STATE_VARIABLE_Info_0_17,
#line 450 "common.m"
  MR_Word * check_hlds__common__STATE_VARIABLE_Info_18)
#line 450 "common.m"
{
#line 455 "common.m"
  {
#line 455 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 455 "common.m"
    MR_Word check_hlds__common__AllStructMap0_13;
#line 455 "common.m"
    MR_Word check_hlds__common__SinceCallStructMap0_14;
#line 455 "common.m"
    MR_Word check_hlds__common__AllStructMap_15;
#line 455 "common.m"
    MR_Word check_hlds__common__SinceCallStructMap_16;
#line 455 "common.m"
    MR_Word check_hlds__common__STATE_VARIABLE_CommonInfo_19_19;
#line 455 "common.m"
    MR_Word check_hlds__common__STATE_VARIABLE_CommonInfo_22_22;
#line 455 "common.m"
    MR_Word check_hlds__common__V_33_33;
#line 455 "common.m"
    MR_Word check_hlds__common__V_34_34;
#line 455 "common.m"
    MR_Word check_hlds__common__V_37_37;
#line 456 "common.m"
    MR_Word check_hlds__common__V_24_24;
#line 456 "common.m"
    MR_Word check_hlds__common__V_26_26;
#line 480 "common.m"
    MR_Word check_hlds__common__ConsIdMap0_48;
#line 472 "common.m"
    MR_Box check_hlds__common__conv0_ConsIdMap0_48;
#line 462 "common.m"
    MR_Word check_hlds__common__V_30_30;
#line 462 "common.m"
    MR_Word check_hlds__common__V_31_31;
#line 462 "common.m"
    MR_Word check_hlds__common__V_32_32;

#line 455 "common.m"
    {
#line 455 "common.m"
      check_hlds__simplify__simplify_info_get_common_info_2_p_0(check_hlds__common__STATE_VARIABLE_Info_0_17, &check_hlds__common__STATE_VARIABLE_CommonInfo_19_19);
    }
#line 456 "common.m"
    check_hlds__common__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__STATE_VARIABLE_CommonInfo_19_19, (MR_Integer) 0)));
#line 456 "common.m"
    check_hlds__common__AllStructMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__STATE_VARIABLE_CommonInfo_19_19, (MR_Integer) 1)));
#line 456 "common.m"
    check_hlds__common__SinceCallStructMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__STATE_VARIABLE_CommonInfo_19_19, (MR_Integer) 2)));
#line 456 "common.m"
    check_hlds__common__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__STATE_VARIABLE_CommonInfo_19_19, (MR_Integer) 3)));
#line 472 "common.m"
    {
#line 472 "common.m"
      check_hlds__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__common_scalar_common_2[0], check_hlds__common__AllStructMap0_13, ((MR_Box) (check_hlds__common__TypeCtor_7)), &check_hlds__common__conv0_ConsIdMap0_48);
    }
#line 472 "common.m"
    if (check_hlds__common__succeeded)
#line 472 "common.m"
      {
#line 472 "common.m"
        check_hlds__common__ConsIdMap0_48 = ((MR_Word) check_hlds__common__conv0_ConsIdMap0_48);
#line 472 "common.m"
        check_hlds__common__succeeded = MR_TRUE;
#line 472 "common.m"
      }
#line 480 "common.m"
    if (check_hlds__common__succeeded)
#line 478 "common.m"
      {
#line 478 "common.m"
        MR_Word check_hlds__common__ConsIdMap_51;
#line 476 "common.m"
        MR_Word check_hlds__common__Structs0_49;
#line 473 "common.m"
        MR_Box check_hlds__common__conv1_Structs0_49;

#line 473 "common.m"
        {
#line 473 "common.m"
          check_hlds__common__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__common_scalar_common_1[1], check_hlds__common__ConsIdMap0_48, ((MR_Box) (check_hlds__common__ConsId_8)), &check_hlds__common__conv1_Structs0_49);
        }
#line 473 "common.m"
        if (check_hlds__common__succeeded)
#line 473 "common.m"
          {
#line 473 "common.m"
            check_hlds__common__Structs0_49 = ((MR_Word) check_hlds__common__conv1_Structs0_49);
#line 473 "common.m"
            check_hlds__common__succeeded = MR_TRUE;
#line 473 "common.m"
          }
#line 476 "common.m"
        if (check_hlds__common__succeeded)
#line 474 "common.m"
          {
#line 474 "common.m"
            MR_Word check_hlds__common__Structs_50;

#line 474 "common.m"
            {
#line 474 "common.m"
              check_hlds__common__Structs_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__common__Structs_50, 0) = ((MR_Box) (check_hlds__common__Struct_9));
#line 474 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__common__Structs_50, 1) = ((MR_Box) (check_hlds__common__Structs0_49));
#line 474 "common.m"
            }
#line 475 "common.m"
            {
#line 475 "common.m"
              mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__common_scalar_common_1[1], ((MR_Box) (check_hlds__common__ConsId_8)), ((MR_Box) (check_hlds__common__Structs_50)), check_hlds__common__ConsIdMap0_48, &check_hlds__common__ConsIdMap_51);
            }
#line 474 "common.m"
          }
#line 476 "common.m"
        else
#line 477 "common.m"
          {
#line 477 "common.m"
            MR_Word check_hlds__common__V_52_52;

#line 477 "common.m"
            {
#line 477 "common.m"
              check_hlds__common__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__common__V_52_52, 0) = ((MR_Box) (check_hlds__common__Struct_9));
#line 477 "common.m"
              MR_hl_field(MR_mktag(1), check_hlds__common__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 477 "common.m"
            }
#line 477 "common.m"
            {
#line 477 "common.m"
              mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__common_scalar_common_1[1], ((MR_Box) (check_hlds__common__ConsId_8)), ((MR_Box) (check_hlds__common__V_52_52)), check_hlds__common__ConsIdMap0_48, &check_hlds__common__ConsIdMap_51);
            }
#line 477 "common.m"
          }
#line 479 "common.m"
        {
#line 479 "common.m"
          mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__common_scalar_common_2[0], ((MR_Box) (check_hlds__common__TypeCtor_7)), ((MR_Box) (check_hlds__common__ConsIdMap_51)), check_hlds__common__AllStructMap0_13, &check_hlds__common__AllStructMap_15);
        }
#line 478 "common.m"
      }
#line 480 "common.m"
    else
#line 481 "common.m"
      {
#line 481 "common.m"
        MR_Word check_hlds__common__V_55_55;
#line 481 "common.m"
        MR_Word check_hlds__common__ConsIdMap_58;

#line 481 "common.m"
        {
#line 481 "common.m"
          check_hlds__common__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__common__V_55_55, 0) = ((MR_Box) (check_hlds__common__Struct_9));
#line 481 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__common__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 481 "common.m"
        }
#line 481 "common.m"
        {
#line 481 "common.m"
          check_hlds__common__ConsIdMap_58 = mercury__map__singleton_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__common_scalar_common_1[1], ((MR_Box) (check_hlds__common__ConsId_8)), ((MR_Box) (check_hlds__common__V_55_55)));
        }
#line 482 "common.m"
        {
#line 482 "common.m"
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__common_scalar_common_2[0], ((MR_Box) (check_hlds__common__TypeCtor_7)), ((MR_Box) (check_hlds__common__ConsIdMap_58)), check_hlds__common__AllStructMap0_13, &check_hlds__common__AllStructMap_15);
        }
#line 481 "common.m"
      }
#line 460 "common.m"
    {
#line 460 "common.m"
      check_hlds__common__do_record_cell_in_struct_map_5_p_0(check_hlds__common__TypeCtor_7, check_hlds__common__ConsId_8, check_hlds__common__Struct_9, check_hlds__common__SinceCallStructMap0_14, &check_hlds__common__SinceCallStructMap_16);
    }
#line 462 "common.m"
    check_hlds__common__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__STATE_VARIABLE_CommonInfo_19_19, (MR_Integer) 0)));
#line 462 "common.m"
    check_hlds__common__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__STATE_VARIABLE_CommonInfo_19_19, (MR_Integer) 1)));
#line 462 "common.m"
    check_hlds__common__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__STATE_VARIABLE_CommonInfo_19_19, (MR_Integer) 2)));
#line 462 "common.m"
    check_hlds__common__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__STATE_VARIABLE_CommonInfo_19_19, (MR_Integer) 3)));
#line 463 "common.m"
    check_hlds__common__V_34_34 = check_hlds__common__VarEqv_10;
#line 463 "common.m"
    check_hlds__common__V_37_37 = check_hlds__common__V_33_33;
#line 464 "common.m"
    {
#line 464 "common.m"
      check_hlds__common__STATE_VARIABLE_CommonInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 464 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__common__STATE_VARIABLE_CommonInfo_22_22, 0) = ((MR_Box) (check_hlds__common__V_34_34));
#line 464 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__common__STATE_VARIABLE_CommonInfo_22_22, 1) = ((MR_Box) (check_hlds__common__AllStructMap_15));
#line 464 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__common__STATE_VARIABLE_CommonInfo_22_22, 2) = ((MR_Box) (check_hlds__common__SinceCallStructMap_16));
#line 464 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__common__STATE_VARIABLE_CommonInfo_22_22, 3) = ((MR_Box) (check_hlds__common__V_37_37));
#line 464 "common.m"
    }
#line 465 "common.m"
    {
#line 465 "common.m"
      check_hlds__simplify__simplify_info_set_common_info_3_p_0(check_hlds__common__STATE_VARIABLE_CommonInfo_22_22, check_hlds__common__STATE_VARIABLE_Info_0_17, check_hlds__common__STATE_VARIABLE_Info_18);
#line 465 "common.m"
      return;
    }
#line 455 "common.m"
  }
#line 450 "common.m"
}

#line 432 "common.m"
static MR_bool MR_CALL 
check_hlds__common__ids_vars_match_3_p_0(
#line 432 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 432 "common.m"
  MR_Word check_hlds__common__HeadVar__2_2,
#line 432 "common.m"
  MR_Word check_hlds__common__HeadVar__3_3)
#line 432 "common.m"
{
#line 435 "common.m"
  while (MR_TRUE)
#line 435 "common.m"
    {
#line 435 "common.m"
      /* tailcall optimized into a loop */
#line 435 "common.m"
      {
#line 435 "common.m"
        MR_bool check_hlds__common__succeeded;

#line 435 "common.m"
        if ((check_hlds__common__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 435 "common.m"
          check_hlds__common__succeeded = (check_hlds__common__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 435 "common.m"
        else
#line 436 "common.m"
          {
#line 436 "common.m"
            MR_Word check_hlds__common__TypeInfo_8_14;
#line 436 "common.m"
            MR_Integer check_hlds__common__Id_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__1_1, (MR_Integer) 0)));
#line 436 "common.m"
            MR_Word check_hlds__common__Ids_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__1_1, (MR_Integer) 1)));
#line 436 "common.m"
            MR_Word check_hlds__common__Var_7;
#line 436 "common.m"
            MR_Word check_hlds__common__Vars_8;
#line 436 "common.m"
            MR_Integer check_hlds__common__VarId_13;

#line 436 "common.m"
            check_hlds__common__succeeded = ((MR_tag((MR_Word) check_hlds__common__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 436 "common.m"
            if (check_hlds__common__succeeded)
#line 436 "common.m"
              {
#line 436 "common.m"
                check_hlds__common__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__2_2, (MR_Integer) 0)));
#line 436 "common.m"
                check_hlds__common__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__2_2, (MR_Integer) 1)));
#line 5354 "check_hlds.common.c"
                check_hlds__common__TypeInfo_8_14 = (MR_Word) &check_hlds__common_scalar_common_1[0];
#line 445 "common.m"
                {
#line 445 "common.m"
                  check_hlds__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__common__TypeInfo_8_14, check_hlds__common__HeadVar__3_3, ((MR_Box) (check_hlds__common__Var_7)), &check_hlds__common__VarId_13);
                }
#line 436 "common.m"
                if (check_hlds__common__succeeded)
#line 436 "common.m"
                  {
#line 446 "common.m"
                    check_hlds__common__succeeded = (check_hlds__common__Id_5 == check_hlds__common__VarId_13);
#line 436 "common.m"
                    if (check_hlds__common__succeeded)
#line 438 "common.m"
                      {
#line 438 "common.m"
                        /* direct tailcall eliminated */
#line 438 "common.m"
                        {
#line 438 "common.m"
                          MR_Word check_hlds__common__HeadVar__1__tmp_copy_1 = check_hlds__common__Ids_6;
#line 438 "common.m"
                          MR_Word check_hlds__common__HeadVar__2__tmp_copy_2 = check_hlds__common__Vars_8;

#line 438 "common.m"
                          check_hlds__common__HeadVar__2_2 = check_hlds__common__HeadVar__2__tmp_copy_2;
#line 438 "common.m"
                          check_hlds__common__HeadVar__1_1 = check_hlds__common__HeadVar__1__tmp_copy_1;
#line 438 "common.m"
                        }
#line 438 "common.m"
                        continue;
#line 438 "common.m"
                      }
#line 436 "common.m"
                  }
#line 436 "common.m"
              }
#line 436 "common.m"
          }
#line 435 "common.m"
        return check_hlds__common__succeeded;
#line 435 "common.m"
      }
#line 435 "common.m"
      break;
#line 435 "common.m"
    }
#line 432 "common.m"
}

#line 421 "common.m"
static MR_bool MR_CALL 
check_hlds__common__find_matching_cell_deconstruct_4_p_0(
#line 421 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 421 "common.m"
  MR_Word check_hlds__common__VarEqv_7,
#line 421 "common.m"
  MR_Integer check_hlds__common__VarId_8,
#line 421 "common.m"
  MR_Word * check_hlds__common__Match_9)
#line 421 "common.m"
{
#line 424 "common.m"
  while (MR_TRUE)
#line 424 "common.m"
    {
#line 424 "common.m"
      /* tailcall optimized into a loop */
#line 424 "common.m"
      {
#line 424 "common.m"
        MR_bool check_hlds__common__succeeded = ((MR_tag((MR_Word) check_hlds__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 424 "common.m"
        MR_Word check_hlds__common__Struct_5;
#line 424 "common.m"
        MR_Word check_hlds__common__Structs_6;
#line 424 "common.m"
        MR_Word check_hlds__common__Var_10;
#line 425 "common.m"
        MR_Word check_hlds__common___Vars_11;
#line 444 "common.m"
        MR_Word check_hlds__common__TypeInfo_8_16;
#line 444 "common.m"
        MR_Integer check_hlds__common__VarId_15;

#line 424 "common.m"
        if (check_hlds__common__succeeded)
#line 424 "common.m"
          {
#line 424 "common.m"
            check_hlds__common__Struct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__1_1, (MR_Integer) 0)));
#line 424 "common.m"
            check_hlds__common__Structs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__1_1, (MR_Integer) 1)));
#line 425 "common.m"
            check_hlds__common__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__Struct_5, (MR_Integer) 0)));
#line 425 "common.m"
            check_hlds__common___Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__Struct_5, (MR_Integer) 1)));
#line 5455 "check_hlds.common.c"
            check_hlds__common__TypeInfo_8_16 = (MR_Word) &check_hlds__common_scalar_common_1[0];
#line 445 "common.m"
            {
#line 445 "common.m"
              check_hlds__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__common__TypeInfo_8_16, check_hlds__common__VarEqv_7, ((MR_Box) (check_hlds__common__Var_10)), &check_hlds__common__VarId_15);
            }
#line 444 "common.m"
            if (check_hlds__common__succeeded)
#line 446 "common.m"
              check_hlds__common__succeeded = (check_hlds__common__VarId_8 == check_hlds__common__VarId_15);
#line 428 "common.m"
            if (check_hlds__common__succeeded)
#line 427 "common.m"
              {
#line 427 "common.m"
                *check_hlds__common__Match_9 = check_hlds__common__Struct_5;
#line 427 "common.m"
                check_hlds__common__succeeded = MR_TRUE;
#line 427 "common.m"
              }
#line 428 "common.m"
            else
#line 429 "common.m"
              {
#line 429 "common.m"
                /* direct tailcall eliminated */
#line 429 "common.m"
                {
#line 429 "common.m"
                  MR_Word check_hlds__common__HeadVar__1__tmp_copy_1 = check_hlds__common__Structs_6;

#line 429 "common.m"
                  check_hlds__common__HeadVar__1_1 = check_hlds__common__HeadVar__1__tmp_copy_1;
#line 429 "common.m"
                }
#line 429 "common.m"
                continue;
#line 429 "common.m"
              }
#line 424 "common.m"
          }
#line 424 "common.m"
        return check_hlds__common__succeeded;
#line 424 "common.m"
      }
#line 424 "common.m"
      break;
#line 424 "common.m"
    }
#line 421 "common.m"
}

#line 410 "common.m"
static MR_bool MR_CALL 
check_hlds__common__find_matching_cell_construct_4_p_0(
#line 410 "common.m"
  MR_Word check_hlds__common__HeadVar__1_1,
#line 410 "common.m"
  MR_Word check_hlds__common__VarEqv_7,
#line 410 "common.m"
  MR_Word check_hlds__common__ArgVarIds_8,
#line 410 "common.m"
  MR_Word * check_hlds__common__Match_9)
#line 410 "common.m"
{
#line 413 "common.m"
  while (MR_TRUE)
#line 413 "common.m"
    {
#line 413 "common.m"
      /* tailcall optimized into a loop */
#line 413 "common.m"
      {
#line 413 "common.m"
        MR_bool check_hlds__common__succeeded = ((MR_tag((MR_Word) check_hlds__common__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 413 "common.m"
        MR_Word check_hlds__common__Struct_5;
#line 413 "common.m"
        MR_Word check_hlds__common__Structs_6;
#line 413 "common.m"
        MR_Word check_hlds__common__Vars_11;
#line 414 "common.m"
        MR_Word check_hlds__common___Var_10;

#line 413 "common.m"
        if (check_hlds__common__succeeded)
#line 413 "common.m"
          {
#line 413 "common.m"
            check_hlds__common__Struct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__1_1, (MR_Integer) 0)));
#line 413 "common.m"
            check_hlds__common__Structs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__HeadVar__1_1, (MR_Integer) 1)));
#line 414 "common.m"
            check_hlds__common___Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__Struct_5, (MR_Integer) 0)));
#line 414 "common.m"
            check_hlds__common__Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__Struct_5, (MR_Integer) 1)));
#line 415 "common.m"
            {
#line 415 "common.m"
              check_hlds__common__succeeded = check_hlds__common__ids_vars_match_3_p_0(check_hlds__common__ArgVarIds_8, check_hlds__common__Vars_11, check_hlds__common__VarEqv_7);
            }
#line 417 "common.m"
            if (check_hlds__common__succeeded)
#line 416 "common.m"
              {
#line 416 "common.m"
                *check_hlds__common__Match_9 = check_hlds__common__Struct_5;
#line 416 "common.m"
                check_hlds__common__succeeded = MR_TRUE;
#line 416 "common.m"
              }
#line 417 "common.m"
            else
#line 418 "common.m"
              {
#line 418 "common.m"
                /* direct tailcall eliminated */
#line 418 "common.m"
                {
#line 418 "common.m"
                  MR_Word check_hlds__common__HeadVar__1__tmp_copy_1 = check_hlds__common__Structs_6;

#line 418 "common.m"
                  check_hlds__common__HeadVar__1_1 = check_hlds__common__HeadVar__1__tmp_copy_1;
#line 418 "common.m"
                }
#line 418 "common.m"
                continue;
#line 418 "common.m"
              }
#line 413 "common.m"
          }
#line 413 "common.m"
        return check_hlds__common__succeeded;
#line 413 "common.m"
      }
#line 413 "common.m"
      break;
#line 413 "common.m"
    }
#line 410 "common.m"
}

#line 338 "common.m"
static void MR_CALL 
check_hlds__common__common_optimise_deconstruct_12_p_0(
#line 338 "common.m"
  MR_Word check_hlds__common__Var_13,
#line 338 "common.m"
  MR_Word check_hlds__common__ConsId_14,
#line 338 "common.m"
  MR_Word check_hlds__common__ArgVars_15,
#line 338 "common.m"
  MR_Word check_hlds__common__UniModes_16,
#line 338 "common.m"
  MR_Word check_hlds__common__CanFail_17,
#line 338 "common.m"
  MR_Word check_hlds__common__Mode_18,
#line 338 "common.m"
  MR_Word check_hlds__common__GoalExpr0_19,
#line 338 "common.m"
  MR_Word * check_hlds__common__GoalExpr_20,
#line 338 "common.m"
  MR_Word check_hlds__common__GoalInfo0_21,
#line 338 "common.m"
  MR_Word * check_hlds__common__GoalInfo_22,
#line 338 "common.m"
  MR_Word check_hlds__common__STATE_VARIABLE_Info_0_45,
#line 338 "common.m"
  MR_Word * check_hlds__common__STATE_VARIABLE_Info_46)
#line 338 "common.m"
{
#line 345 "common.m"
  {
#line 345 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 345 "common.m"
    MR_Word check_hlds__common__ModuleInfo_24;
#line 352 "common.m"
    MR_Word check_hlds__common__LVarMode_25;
#line 352 "common.m"
    MR_Word check_hlds__common__Inst0_27;
#line 352 "common.m"
    MR_Word check_hlds__common__V_26_26;
#line 353 "common.m"
    MR_Word check_hlds__common__V_28_28;

#line 346 "common.m"
    {
#line 346 "common.m"
      check_hlds__simplify__simplify_info_get_module_info_2_p_0(check_hlds__common__STATE_VARIABLE_Info_0_45, &check_hlds__common__ModuleInfo_24);
    }
#line 397 "common.m"
    *check_hlds__common__GoalInfo_22 = check_hlds__common__GoalInfo0_21;
#line 352 "common.m"
    check_hlds__common__LVarMode_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__Mode_18, (MR_Integer) 0)));
#line 352 "common.m"
    check_hlds__common__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__Mode_18, (MR_Integer) 1)));
#line 353 "common.m"
    {
#line 353 "common.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__common__ModuleInfo_24, check_hlds__common__LVarMode_25, &check_hlds__common__Inst0_27, &check_hlds__common__V_28_28);
    }
#line 354 "common.m"
    {
#line 354 "common.m"
      check_hlds__common__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__common__ModuleInfo_24, check_hlds__common__Inst0_27);
    }
#line 354 "common.m"
    check_hlds__common__succeeded = !(check_hlds__common__succeeded);
#line 357 "common.m"
    if (check_hlds__common__succeeded)
#line 356 "common.m"
      {
#line 356 "common.m"
        *check_hlds__common__GoalExpr_20 = check_hlds__common__GoalExpr0_19;
#line 356 "common.m"
        *check_hlds__common__STATE_VARIABLE_Info_46 = check_hlds__common__STATE_VARIABLE_Info_0_45;
#line 356 "common.m"
      }
#line 357 "common.m"
    else
#line 358 "common.m"
      {
#line 358 "common.m"
        MR_Word check_hlds__common__TypeInfo_67_67;
#line 358 "common.m"
        MR_Word check_hlds__common__TypeCtor_29;
#line 358 "common.m"
        MR_Word check_hlds__common__CommonInfo0_30;
#line 358 "common.m"
        MR_Word check_hlds__common__VarEqv0_31;
#line 358 "common.m"
        MR_Integer check_hlds__common__VarId_32;
#line 358 "common.m"
        MR_Word check_hlds__common__VarEqv1_33;
#line 358 "common.m"
        MR_Word check_hlds__common__SinceCallStructMap0_34;
#line 358 "common.m"
        MR_Word check_hlds__common__VarTypes_75;
#line 358 "common.m"
        MR_Word check_hlds__common__Type_76;
#line 360 "common.m"
        MR_Word check_hlds__common__V_57_57;
#line 360 "common.m"
        MR_Word check_hlds__common__V_58_58;
#line 360 "common.m"
        MR_Word check_hlds__common__V_59_59;
#line 362 "common.m"
        MR_Word check_hlds__common__V_60_60;
#line 362 "common.m"
        MR_Word check_hlds__common__V_61_61;
#line 362 "common.m"
        MR_Word check_hlds__common__V_62_62;
#line 391 "common.m"
        MR_Word check_hlds__common__OldStruct_37;
#line 367 "common.m"
        MR_Word check_hlds__common__TypeCtorInfo_68_68;
#line 367 "common.m"
        MR_Word check_hlds__common__TypeInfo_69_69;
#line 367 "common.m"
        MR_Word check_hlds__common__TypeCtorInfo_70_70;
#line 367 "common.m"
        MR_Word check_hlds__common__TypeInfo_71_71;
#line 367 "common.m"
        MR_Word check_hlds__common__ConsIdMap0_35;
#line 367 "common.m"
        MR_Word check_hlds__common__Structs_36;
#line 368 "common.m"
        MR_Word check_hlds__common__V_48_48;
#line 370 "common.m"
        MR_Box check_hlds__common__conv0_ConsIdMap0_35;
#line 371 "common.m"
        MR_Box check_hlds__common__conv1_Structs_36;

#line 402 "common.m"
        {
#line 402 "common.m"
          check_hlds__simplify__simplify_info_get_var_types_2_p_0(check_hlds__common__STATE_VARIABLE_Info_0_45, &check_hlds__common__VarTypes_75);
        }
#line 403 "common.m"
        {
#line 403 "common.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__common__VarTypes_75, check_hlds__common__Var_13, &check_hlds__common__Type_76);
        }
#line 406 "common.m"
        {
#line 406 "common.m"
          parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__common__Type_76, &check_hlds__common__TypeCtor_29);
        }
#line 359 "common.m"
        {
#line 359 "common.m"
          check_hlds__simplify__simplify_info_get_common_info_2_p_0(check_hlds__common__STATE_VARIABLE_Info_0_45, &check_hlds__common__CommonInfo0_30);
        }
#line 360 "common.m"
        check_hlds__common__VarEqv0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_30, (MR_Integer) 0)));
#line 360 "common.m"
        check_hlds__common__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_30, (MR_Integer) 1)));
#line 360 "common.m"
        check_hlds__common__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_30, (MR_Integer) 2)));
#line 360 "common.m"
        check_hlds__common__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_30, (MR_Integer) 3)));
#line 5759 "check_hlds.common.c"
        check_hlds__common__TypeInfo_67_67 = (MR_Word) &check_hlds__common_scalar_common_1[0];
#line 361 "common.m"
        {
#line 361 "common.m"
          mercury__eqvclass__ensure_element_partition_id_4_p_0(check_hlds__common__TypeInfo_67_67, ((MR_Box) (check_hlds__common__Var_13)), &check_hlds__common__VarId_32, check_hlds__common__VarEqv0_31, &check_hlds__common__VarEqv1_33);
        }
#line 362 "common.m"
        check_hlds__common__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_30, (MR_Integer) 0)));
#line 362 "common.m"
        check_hlds__common__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_30, (MR_Integer) 1)));
#line 362 "common.m"
        check_hlds__common__SinceCallStructMap0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_30, (MR_Integer) 2)));
#line 362 "common.m"
        check_hlds__common__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_30, (MR_Integer) 3)));
#line 367 "common.m"
        {
#line 367 "common.m"
          check_hlds__common__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(*check_hlds__common__GoalInfo_22, (MR_Integer) 3);
        }
#line 367 "common.m"
        check_hlds__common__succeeded = !(check_hlds__common__succeeded);
#line 367 "common.m"
        if (check_hlds__common__succeeded)
#line 367 "common.m"
          {
#line 368 "common.m"
            check_hlds__common__V_48_48 = (MR_Integer) 4;
#line 368 "common.m"
            {
#line 368 "common.m"
              check_hlds__common__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(*check_hlds__common__GoalInfo_22, check_hlds__common__V_48_48);
            }
#line 368 "common.m"
            check_hlds__common__succeeded = !(check_hlds__common__succeeded);
#line 367 "common.m"
            if (check_hlds__common__succeeded)
#line 367 "common.m"
              {
#line 5798 "check_hlds.common.c"
                check_hlds__common__TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 5800 "check_hlds.common.c"
                check_hlds__common__TypeInfo_69_69 = (MR_Word) &check_hlds__common_scalar_common_2[0];
#line 370 "common.m"
                {
#line 370 "common.m"
                  check_hlds__common__succeeded = mercury__map__search_3_p_0(check_hlds__common__TypeCtorInfo_68_68, check_hlds__common__TypeInfo_69_69, check_hlds__common__SinceCallStructMap0_34, ((MR_Box) (check_hlds__common__TypeCtor_29)), &check_hlds__common__conv0_ConsIdMap0_35);
                }
#line 370 "common.m"
                if (check_hlds__common__succeeded)
#line 370 "common.m"
                  {
#line 370 "common.m"
                    check_hlds__common__ConsIdMap0_35 = ((MR_Word) check_hlds__common__conv0_ConsIdMap0_35);
#line 370 "common.m"
                    check_hlds__common__succeeded = MR_TRUE;
#line 370 "common.m"
                  }
#line 367 "common.m"
                if (check_hlds__common__succeeded)
#line 367 "common.m"
                  {
#line 5821 "check_hlds.common.c"
                    check_hlds__common__TypeCtorInfo_70_70 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 5823 "check_hlds.common.c"
                    check_hlds__common__TypeInfo_71_71 = (MR_Word) &check_hlds__common_scalar_common_1[1];
#line 371 "common.m"
                    {
#line 371 "common.m"
                      check_hlds__common__succeeded = mercury__map__search_3_p_0(check_hlds__common__TypeCtorInfo_70_70, check_hlds__common__TypeInfo_71_71, check_hlds__common__ConsIdMap0_35, ((MR_Box) (check_hlds__common__ConsId_14)), &check_hlds__common__conv1_Structs_36);
                    }
#line 371 "common.m"
                    if (check_hlds__common__succeeded)
#line 371 "common.m"
                      {
#line 371 "common.m"
                        check_hlds__common__Structs_36 = ((MR_Word) check_hlds__common__conv1_Structs_36);
#line 371 "common.m"
                        check_hlds__common__succeeded = MR_TRUE;
#line 371 "common.m"
                      }
#line 367 "common.m"
                    if (check_hlds__common__succeeded)
#line 372 "common.m"
                      {
#line 372 "common.m"
                        check_hlds__common__succeeded = check_hlds__common__find_matching_cell_deconstruct_4_p_0(check_hlds__common__Structs_36, check_hlds__common__VarEqv1_33, check_hlds__common__VarId_32, &check_hlds__common__OldStruct_37);
                      }
#line 367 "common.m"
                  }
#line 367 "common.m"
              }
#line 367 "common.m"
          }
#line 391 "common.m"
        if (check_hlds__common__succeeded)
#line 374 "common.m"
          {
#line 374 "common.m"
            MR_Word check_hlds__common__OldArgVars_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__OldStruct_37, (MR_Integer) 1)));
#line 374 "common.m"
            MR_Word check_hlds__common__VarEqv_40;
#line 374 "common.m"
            MR_Word check_hlds__common__CommonInfo_41;
#line 374 "common.m"
            MR_Word check_hlds__common__Goals_42;
#line 374 "common.m"
            MR_Integer check_hlds__common__Cost_43;
#line 374 "common.m"
            MR_Word check_hlds__common__STATE_VARIABLE_Info_49_49;
#line 374 "common.m"
            MR_Word check_hlds__common__STATE_VARIABLE_Info_50_50;
#line 374 "common.m"
            MR_Word check_hlds__common__V_52_52;
#line 374 "common.m"
            MR_Word check_hlds__common__STATE_VARIABLE_Info_53_53;
#line 374 "common.m"
            MR_Word check_hlds__common__STATE_VARIABLE_Info_54_54;
#line 374 "common.m"
            MR_Word check_hlds__common__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__OldStruct_37, (MR_Integer) 0)));
#line 377 "common.m"
            MR_Word check_hlds__common__V_64_64;
#line 377 "common.m"
            MR_Word check_hlds__common__V_65_65;
#line 377 "common.m"
            MR_Word check_hlds__common__V_66_66;
#line 377 "common.m"
            MR_Word check_hlds__common__V_63_63;

#line 375 "common.m"
            {
#line 375 "common.m"
              mercury__eqvclass__ensure_corresponding_equivalences_4_p_0(check_hlds__common__TypeInfo_67_67, check_hlds__common__ArgVars_15, check_hlds__common__OldArgVars_39, check_hlds__common__VarEqv1_33, &check_hlds__common__VarEqv_40);
            }
#line 377 "common.m"
            check_hlds__common__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_30, (MR_Integer) 0)));
#line 377 "common.m"
            check_hlds__common__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_30, (MR_Integer) 1)));
#line 377 "common.m"
            check_hlds__common__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_30, (MR_Integer) 2)));
#line 377 "common.m"
            check_hlds__common__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_30, (MR_Integer) 3)));
#line 377 "common.m"
            {
#line 377 "common.m"
              check_hlds__common__CommonInfo_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 377 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_41, 0) = ((MR_Box) (check_hlds__common__VarEqv_40));
#line 377 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_41, 1) = ((MR_Box) (check_hlds__common__V_64_64));
#line 377 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_41, 2) = ((MR_Box) (check_hlds__common__V_65_65));
#line 377 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_41, 3) = ((MR_Box) (check_hlds__common__V_66_66));
#line 377 "common.m"
            }
#line 378 "common.m"
            {
#line 378 "common.m"
              check_hlds__simplify__simplify_info_set_common_info_3_p_0(check_hlds__common__CommonInfo_41, check_hlds__common__STATE_VARIABLE_Info_0_45, &check_hlds__common__STATE_VARIABLE_Info_49_49);
            }
#line 379 "common.m"
            {
#line 379 "common.m"
              check_hlds__common__create_output_unifications_7_p_0(check_hlds__common__GoalInfo0_21, check_hlds__common__ArgVars_15, check_hlds__common__OldArgVars_39, check_hlds__common__UniModes_16, &check_hlds__common__Goals_42, check_hlds__common__STATE_VARIABLE_Info_49_49, &check_hlds__common__STATE_VARIABLE_Info_50_50);
            }
#line 381 "common.m"
            {
#line 381 "common.m"
              MR_Word base;
#line 381 "common.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 381 "common.m"
              *check_hlds__common__GoalExpr_20 = base;
#line 381 "common.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 381 "common.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 381 "common.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__common__Goals_42));
#line 381 "common.m"
            }
#line 382 "common.m"
            {
#line 382 "common.m"
              check_hlds__common__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 382 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__common__V_52_52, 0) = ((MR_Box) (check_hlds__common__GoalExpr0_19));
#line 382 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__common__V_52_52, 1) = ((MR_Box) (check_hlds__common__GoalInfo0_21));
#line 382 "common.m"
            }
#line 382 "common.m"
            {
#line 382 "common.m"
              transform_hlds__pd_cost__goal_cost_2_p_0(check_hlds__common__V_52_52, &check_hlds__common__Cost_43);
            }
#line 383 "common.m"
            {
#line 383 "common.m"
              check_hlds__simplify__simplify_info_incr_cost_delta_3_p_0(check_hlds__common__Cost_43, check_hlds__common__STATE_VARIABLE_Info_50_50, &check_hlds__common__STATE_VARIABLE_Info_53_53);
            }
#line 384 "common.m"
            {
#line 384 "common.m"
              check_hlds__simplify__simplify_info_set_requantify_2_p_0(check_hlds__common__STATE_VARIABLE_Info_53_53, &check_hlds__common__STATE_VARIABLE_Info_54_54);
            }
#line 388 "common.m"
            if ((check_hlds__common__CanFail_17 == (MR_Integer) 0))
#line 387 "common.m"
              {
#line 387 "common.m"
                check_hlds__simplify__simplify_info_set_rerun_det_2_p_0(check_hlds__common__STATE_VARIABLE_Info_54_54, check_hlds__common__STATE_VARIABLE_Info_46);
#line 387 "common.m"
                return;
              }
#line 388 "common.m"
            else
#line 389 "common.m"
              *check_hlds__common__STATE_VARIABLE_Info_46 = check_hlds__common__STATE_VARIABLE_Info_54_54;
#line 374 "common.m"
          }
#line 391 "common.m"
        else
#line 392 "common.m"
          {
#line 392 "common.m"
            MR_Word check_hlds__common__Struct_44;

#line 392 "common.m"
            *check_hlds__common__GoalExpr_20 = check_hlds__common__GoalExpr0_19;
#line 393 "common.m"
            {
#line 393 "common.m"
              check_hlds__common__Struct_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__common__Struct_44, 0) = ((MR_Box) (check_hlds__common__Var_13));
#line 393 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__common__Struct_44, 1) = ((MR_Box) (check_hlds__common__ArgVars_15));
#line 393 "common.m"
            }
#line 394 "common.m"
            {
#line 394 "common.m"
              check_hlds__common__record_cell_in_maps_6_p_0(check_hlds__common__TypeCtor_29, check_hlds__common__ConsId_14, check_hlds__common__Struct_44, check_hlds__common__VarEqv1_33, check_hlds__common__STATE_VARIABLE_Info_0_45, check_hlds__common__STATE_VARIABLE_Info_46);
#line 394 "common.m"
              return;
            }
#line 392 "common.m"
          }
#line 358 "common.m"
      }
#line 345 "common.m"
  }
#line 338 "common.m"
}

#line 291 "common.m"
static void MR_CALL 
check_hlds__common__common_optimise_construct_10_p_0_1(
#line 291 "common.m"
  MR_Box check_hlds__common__closure_arg,
#line 291 "common.m"
  MR_Box check_hlds__common__wrapper_arg_1,
#line 291 "common.m"
  MR_Box * check_hlds__common__wrapper_arg_2,
#line 291 "common.m"
  MR_Box check_hlds__common__wrapper_arg_3,
#line 291 "common.m"
  MR_Box * check_hlds__common__wrapper_arg_4)
#line 291 "common.m"
{
#line 291 "common.m"
  {
#line 291 "common.m"
    MR_Box check_hlds__common__closure = check_hlds__common__closure_arg;
#line 291 "common.m"
    MR_Integer check_hlds__common__conv1_HeadVar__2_69;
#line 291 "common.m"
    MR_Word check_hlds__common__conv0_HeadVar__4_71;

#line 291 "common.m"
    {
#line 291 "common.m"
      check_hlds__common__IntroducedFrom__pred__common_optimise_construct__291__1_4_p_0(((MR_Word) check_hlds__common__wrapper_arg_1), &check_hlds__common__conv1_HeadVar__2_69, ((MR_Word) check_hlds__common__wrapper_arg_3), &check_hlds__common__conv0_HeadVar__4_71);
    }
#line 291 "common.m"
    *check_hlds__common__wrapper_arg_2 = ((MR_Box) (check_hlds__common__conv1_HeadVar__2_69));
#line 291 "common.m"
    *check_hlds__common__wrapper_arg_4 = ((MR_Box) (check_hlds__common__conv0_HeadVar__4_71));
#line 291 "common.m"
  }
#line 291 "common.m"
}

#line 272 "common.m"
static void MR_CALL 
check_hlds__common__common_optimise_construct_10_p_0(
#line 272 "common.m"
  MR_Word check_hlds__common__Var_11,
#line 272 "common.m"
  MR_Word check_hlds__common__ConsId_12,
#line 272 "common.m"
  MR_Word check_hlds__common__ArgVars_13,
#line 272 "common.m"
  MR_Word check_hlds__common__Mode_14,
#line 272 "common.m"
  MR_Word check_hlds__common__GoalExpr0_15,
#line 272 "common.m"
  MR_Word * check_hlds__common__GoalExpr_16,
#line 272 "common.m"
  MR_Word check_hlds__common__GoalInfo0_17,
#line 272 "common.m"
  MR_Word * check_hlds__common__GoalInfo_18,
#line 272 "common.m"
  MR_Word check_hlds__common__STATE_VARIABLE_Info_0_45,
#line 272 "common.m"
  MR_Word * check_hlds__common__STATE_VARIABLE_Info_46)
#line 272 "common.m"
{
#line 279 "common.m"
  {
#line 279 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 279 "common.m"
    MR_Word check_hlds__common__LVarMode_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__Mode_14, (MR_Integer) 0)));
#line 279 "common.m"
    MR_Word check_hlds__common__ModuleInfo_22;
#line 279 "common.m"
    MR_Word check_hlds__common__Inst_24;
#line 280 "common.m"
    MR_Word check_hlds__common__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__Mode_14, (MR_Integer) 1)));
#line 282 "common.m"
    MR_Word check_hlds__common__V_23_23;

#line 281 "common.m"
    {
#line 281 "common.m"
      check_hlds__simplify__simplify_info_get_module_info_2_p_0(check_hlds__common__STATE_VARIABLE_Info_0_45, &check_hlds__common__ModuleInfo_22);
    }
#line 282 "common.m"
    {
#line 282 "common.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__common__ModuleInfo_22, check_hlds__common__LVarMode_20, &check_hlds__common__V_23_23, &check_hlds__common__Inst_24);
    }
#line 287 "common.m"
    {
#line 287 "common.m"
      check_hlds__common__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__common__ModuleInfo_22, check_hlds__common__Inst_24);
    }
#line 333 "common.m"
    if (check_hlds__common__succeeded)
#line 288 "common.m"
      {
#line 288 "common.m"
        MR_Word check_hlds__common__TypeInfo_73_73;
#line 288 "common.m"
        MR_Word check_hlds__common__TypeCtor_25;
#line 288 "common.m"
        MR_Word check_hlds__common__CommonInfo0_26;
#line 288 "common.m"
        MR_Word check_hlds__common__VarEqv0_27;
#line 288 "common.m"
        MR_Word check_hlds__common__ArgVarIds_28;
#line 288 "common.m"
        MR_Word check_hlds__common__VarEqv1_29;
#line 288 "common.m"
        MR_Word check_hlds__common__AllStructMap0_30;
#line 288 "common.m"
        MR_Word check_hlds__common__VarTypes_83;
#line 288 "common.m"
        MR_Word check_hlds__common__Type_84;
#line 290 "common.m"
        MR_Word check_hlds__common__V_58_58;
#line 290 "common.m"
        MR_Word check_hlds__common__V_59_59;
#line 290 "common.m"
        MR_Word check_hlds__common__V_60_60;
#line 291 "common.m"
        MR_Box check_hlds__common__conv2_VarEqv1_29;
#line 293 "common.m"
        MR_Word check_hlds__common__V_61_61;
#line 293 "common.m"
        MR_Word check_hlds__common__V_62_62;
#line 293 "common.m"
        MR_Word check_hlds__common__V_63_63;
#line 327 "common.m"
        MR_Word check_hlds__common__OldStruct_35;
#line 299 "common.m"
        MR_Word check_hlds__common__TypeCtorInfo_76_76;
#line 299 "common.m"
        MR_Word check_hlds__common__TypeInfo_77_77;
#line 299 "common.m"
        MR_Word check_hlds__common__TypeCtorInfo_78_78;
#line 299 "common.m"
        MR_Word check_hlds__common__TypeInfo_79_79;
#line 299 "common.m"
        MR_Word check_hlds__common__InstMapDelta_31;
#line 299 "common.m"
        MR_Word check_hlds__common__ConsIdMap0_33;
#line 299 "common.m"
        MR_Word check_hlds__common__Structs_34;
#line 300 "common.m"
        MR_Word check_hlds__common__V_32_32;
#line 302 "common.m"
        MR_Box check_hlds__common__conv3_ConsIdMap0_33;
#line 303 "common.m"
        MR_Box check_hlds__common__conv4_Structs_34;

#line 402 "common.m"
        {
#line 402 "common.m"
          check_hlds__simplify__simplify_info_get_var_types_2_p_0(check_hlds__common__STATE_VARIABLE_Info_0_45, &check_hlds__common__VarTypes_83);
        }
#line 403 "common.m"
        {
#line 403 "common.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__common__VarTypes_83, check_hlds__common__Var_11, &check_hlds__common__Type_84);
        }
#line 406 "common.m"
        {
#line 406 "common.m"
          parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__common__Type_84, &check_hlds__common__TypeCtor_25);
        }
#line 289 "common.m"
        {
#line 289 "common.m"
          check_hlds__simplify__simplify_info_get_common_info_2_p_0(check_hlds__common__STATE_VARIABLE_Info_0_45, &check_hlds__common__CommonInfo0_26);
        }
#line 290 "common.m"
        check_hlds__common__VarEqv0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_26, (MR_Integer) 0)));
#line 290 "common.m"
        check_hlds__common__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_26, (MR_Integer) 1)));
#line 290 "common.m"
        check_hlds__common__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_26, (MR_Integer) 2)));
#line 290 "common.m"
        check_hlds__common__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_26, (MR_Integer) 3)));
#line 6196 "check_hlds.common.c"
        check_hlds__common__TypeInfo_73_73 = (MR_Word) &check_hlds__common_scalar_common_1[0];
#line 291 "common.m"
        {
#line 291 "common.m"
          mercury__list__map_foldl_5_p_1(check_hlds__common__TypeInfo_73_73, (MR_Word) &mercury__eqvclass__eqvclass__type_ctor_info_partition_id_0, (MR_Word) &check_hlds__common_scalar_common_1[3], (MR_Word) &check_hlds__common_scalar_common_2[3], check_hlds__common__ArgVars_13, &check_hlds__common__ArgVarIds_28, ((MR_Box) (check_hlds__common__VarEqv0_27)), &check_hlds__common__conv2_VarEqv1_29);
        }
#line 291 "common.m"
        check_hlds__common__VarEqv1_29 = ((MR_Word) check_hlds__common__conv2_VarEqv1_29);
#line 293 "common.m"
        check_hlds__common__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_26, (MR_Integer) 0)));
#line 293 "common.m"
        check_hlds__common__AllStructMap0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_26, (MR_Integer) 1)));
#line 293 "common.m"
        check_hlds__common__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_26, (MR_Integer) 2)));
#line 293 "common.m"
        check_hlds__common__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_26, (MR_Integer) 3)));
#line 299 "common.m"
        {
#line 299 "common.m"
          check_hlds__common__InstMapDelta_31 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__common__GoalInfo0_17);
        }
#line 300 "common.m"
        {
#line 300 "common.m"
          check_hlds__common__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(check_hlds__common__InstMapDelta_31, check_hlds__common__Var_11, &check_hlds__common__V_32_32);
        }
#line 299 "common.m"
        if (check_hlds__common__succeeded)
#line 299 "common.m"
          {
#line 6227 "check_hlds.common.c"
            check_hlds__common__TypeCtorInfo_76_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 6229 "check_hlds.common.c"
            check_hlds__common__TypeInfo_77_77 = (MR_Word) &check_hlds__common_scalar_common_2[0];
#line 302 "common.m"
            {
#line 302 "common.m"
              check_hlds__common__succeeded = mercury__map__search_3_p_0(check_hlds__common__TypeCtorInfo_76_76, check_hlds__common__TypeInfo_77_77, check_hlds__common__AllStructMap0_30, ((MR_Box) (check_hlds__common__TypeCtor_25)), &check_hlds__common__conv3_ConsIdMap0_33);
            }
#line 302 "common.m"
            if (check_hlds__common__succeeded)
#line 302 "common.m"
              {
#line 302 "common.m"
                check_hlds__common__ConsIdMap0_33 = ((MR_Word) check_hlds__common__conv3_ConsIdMap0_33);
#line 302 "common.m"
                check_hlds__common__succeeded = MR_TRUE;
#line 302 "common.m"
              }
#line 299 "common.m"
            if (check_hlds__common__succeeded)
#line 299 "common.m"
              {
#line 6250 "check_hlds.common.c"
                check_hlds__common__TypeCtorInfo_78_78 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 6252 "check_hlds.common.c"
                check_hlds__common__TypeInfo_79_79 = (MR_Word) &check_hlds__common_scalar_common_1[1];
#line 303 "common.m"
                {
#line 303 "common.m"
                  check_hlds__common__succeeded = mercury__map__search_3_p_0(check_hlds__common__TypeCtorInfo_78_78, check_hlds__common__TypeInfo_79_79, check_hlds__common__ConsIdMap0_33, ((MR_Box) (check_hlds__common__ConsId_12)), &check_hlds__common__conv4_Structs_34);
                }
#line 303 "common.m"
                if (check_hlds__common__succeeded)
#line 303 "common.m"
                  {
#line 303 "common.m"
                    check_hlds__common__Structs_34 = ((MR_Word) check_hlds__common__conv4_Structs_34);
#line 303 "common.m"
                    check_hlds__common__succeeded = MR_TRUE;
#line 303 "common.m"
                  }
#line 299 "common.m"
                if (check_hlds__common__succeeded)
#line 304 "common.m"
                  {
#line 304 "common.m"
                    check_hlds__common__succeeded = check_hlds__common__find_matching_cell_construct_4_p_0(check_hlds__common__Structs_34, check_hlds__common__VarEqv1_29, check_hlds__common__ArgVarIds_28, &check_hlds__common__OldStruct_35);
                  }
#line 299 "common.m"
              }
#line 299 "common.m"
          }
#line 327 "common.m"
        if (check_hlds__common__succeeded)
#line 307 "common.m"
          {
#line 307 "common.m"
            MR_Word check_hlds__common__OldVar_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__OldStruct_35, (MR_Integer) 0)));
#line 307 "common.m"
            MR_Word check_hlds__common__VarEqv_38;
#line 307 "common.m"
            MR_Word check_hlds__common__CommonInfo_39;
#line 307 "common.m"
            MR_Word check_hlds__common__STATE_VARIABLE_Info_48_48;
#line 307 "common.m"
            MR_Word check_hlds__common__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__OldStruct_35, (MR_Integer) 1)));
#line 309 "common.m"
            MR_Word check_hlds__common__V_65_65;
#line 309 "common.m"
            MR_Word check_hlds__common__V_66_66;
#line 309 "common.m"
            MR_Word check_hlds__common__V_67_67;
#line 309 "common.m"
            MR_Word check_hlds__common__V_64_64;

#line 308 "common.m"
            {
#line 308 "common.m"
              mercury__eqvclass__ensure_equivalence_4_p_0(check_hlds__common__TypeInfo_73_73, ((MR_Box) (check_hlds__common__Var_11)), ((MR_Box) (check_hlds__common__OldVar_36)), check_hlds__common__VarEqv1_29, &check_hlds__common__VarEqv_38);
            }
#line 309 "common.m"
            check_hlds__common__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_26, (MR_Integer) 0)));
#line 309 "common.m"
            check_hlds__common__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_26, (MR_Integer) 1)));
#line 309 "common.m"
            check_hlds__common__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_26, (MR_Integer) 2)));
#line 309 "common.m"
            check_hlds__common__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_26, (MR_Integer) 3)));
#line 309 "common.m"
            {
#line 309 "common.m"
              check_hlds__common__CommonInfo_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 309 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_39, 0) = ((MR_Box) (check_hlds__common__VarEqv_38));
#line 309 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_39, 1) = ((MR_Box) (check_hlds__common__V_65_65));
#line 309 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_39, 2) = ((MR_Box) (check_hlds__common__V_66_66));
#line 309 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_39, 3) = ((MR_Box) (check_hlds__common__V_67_67));
#line 309 "common.m"
            }
#line 310 "common.m"
            {
#line 310 "common.m"
              check_hlds__simplify__simplify_info_set_common_info_3_p_0(check_hlds__common__CommonInfo_39, check_hlds__common__STATE_VARIABLE_Info_0_45, &check_hlds__common__STATE_VARIABLE_Info_48_48);
            }
#line 318 "common.m"
            if ((check_hlds__common__ArgVars_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 312 "common.m"
              {
#line 316 "common.m"
                *check_hlds__common__GoalExpr_16 = check_hlds__common__GoalExpr0_15;
#line 317 "common.m"
                *check_hlds__common__GoalInfo_18 = check_hlds__common__GoalInfo0_17;
#line 317 "common.m"
                *check_hlds__common__STATE_VARIABLE_Info_46 = check_hlds__common__STATE_VARIABLE_Info_48_48;
#line 312 "common.m"
              }
#line 318 "common.m"
            else
#line 319 "common.m"
              {
#line 319 "common.m"
                MR_Word check_hlds__common__UniMode_42;
#line 319 "common.m"
                MR_Integer check_hlds__common__Cost_43;
#line 319 "common.m"
                MR_Word check_hlds__common__V_49_49;
#line 319 "common.m"
                MR_Word check_hlds__common__V_51_51;
#line 319 "common.m"
                MR_Word check_hlds__common__STATE_VARIABLE_Info_53_53;
#line 319 "common.m"
                MR_Word check_hlds__common__STATE_VARIABLE_Info_54_54;
#line 319 "common.m"
                MR_Word check_hlds__common__V_55_55;

#line 320 "common.m"
                {
#line 320 "common.m"
                  check_hlds__common__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 320 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__common__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 320 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__common__V_49_49, 1) = ((MR_Box) (check_hlds__common__Inst_24));
#line 320 "common.m"
                }
#line 320 "common.m"
                {
#line 320 "common.m"
                  check_hlds__common__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 320 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__common__V_51_51, 0) = ((MR_Box) (check_hlds__common__Inst_24));
#line 320 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__common__V_51_51, 1) = ((MR_Box) (check_hlds__common__Inst_24));
#line 320 "common.m"
                }
#line 320 "common.m"
                {
#line 320 "common.m"
                  check_hlds__common__UniMode_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 320 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__common__UniMode_42, 0) = ((MR_Box) (check_hlds__common__V_49_49));
#line 320 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__common__UniMode_42, 1) = ((MR_Box) (check_hlds__common__V_51_51));
#line 320 "common.m"
                }
#line 321 "common.m"
                {
#line 321 "common.m"
                  check_hlds__common__generate_assign_8_p_0(check_hlds__common__Var_11, check_hlds__common__OldVar_36, check_hlds__common__UniMode_42, check_hlds__common__GoalInfo0_17, check_hlds__common__GoalExpr_16, check_hlds__common__GoalInfo_18, check_hlds__common__STATE_VARIABLE_Info_48_48, &check_hlds__common__STATE_VARIABLE_Info_53_53);
                }
#line 323 "common.m"
                {
#line 323 "common.m"
                  check_hlds__simplify__simplify_info_set_requantify_2_p_0(check_hlds__common__STATE_VARIABLE_Info_53_53, &check_hlds__common__STATE_VARIABLE_Info_54_54);
                }
#line 324 "common.m"
                {
#line 324 "common.m"
                  check_hlds__common__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 324 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__common__V_55_55, 0) = ((MR_Box) (check_hlds__common__GoalExpr0_15));
#line 324 "common.m"
                  MR_hl_field(MR_mktag(0), check_hlds__common__V_55_55, 1) = ((MR_Box) (check_hlds__common__GoalInfo0_17));
#line 324 "common.m"
                }
#line 324 "common.m"
                {
#line 324 "common.m"
                  transform_hlds__pd_cost__goal_cost_2_p_0(check_hlds__common__V_55_55, &check_hlds__common__Cost_43);
                }
#line 325 "common.m"
                {
#line 325 "common.m"
                  check_hlds__simplify__simplify_info_incr_cost_delta_3_p_0(check_hlds__common__Cost_43, check_hlds__common__STATE_VARIABLE_Info_54_54, check_hlds__common__STATE_VARIABLE_Info_46);
#line 325 "common.m"
                  return;
                }
#line 319 "common.m"
              }
#line 307 "common.m"
          }
#line 327 "common.m"
        else
#line 328 "common.m"
          {
#line 328 "common.m"
            MR_Word check_hlds__common__Struct_44;

#line 328 "common.m"
            *check_hlds__common__GoalExpr_16 = check_hlds__common__GoalExpr0_15;
#line 329 "common.m"
            *check_hlds__common__GoalInfo_18 = check_hlds__common__GoalInfo0_17;
#line 330 "common.m"
            {
#line 330 "common.m"
              check_hlds__common__Struct_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 330 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__common__Struct_44, 0) = ((MR_Box) (check_hlds__common__Var_11));
#line 330 "common.m"
              MR_hl_field(MR_mktag(0), check_hlds__common__Struct_44, 1) = ((MR_Box) (check_hlds__common__ArgVars_13));
#line 330 "common.m"
            }
#line 331 "common.m"
            {
#line 331 "common.m"
              check_hlds__common__record_cell_in_maps_6_p_0(check_hlds__common__TypeCtor_25, check_hlds__common__ConsId_12, check_hlds__common__Struct_44, check_hlds__common__VarEqv1_29, check_hlds__common__STATE_VARIABLE_Info_0_45, check_hlds__common__STATE_VARIABLE_Info_46);
#line 331 "common.m"
              return;
            }
#line 328 "common.m"
          }
#line 288 "common.m"
      }
#line 333 "common.m"
    else
#line 334 "common.m"
      {
#line 334 "common.m"
        *check_hlds__common__GoalExpr_16 = check_hlds__common__GoalExpr0_15;
#line 335 "common.m"
        *check_hlds__common__GoalInfo_18 = check_hlds__common__GoalInfo0_17;
#line 335 "common.m"
        *check_hlds__common__STATE_VARIABLE_Info_46 = check_hlds__common__STATE_VARIABLE_Info_0_45;
#line 334 "common.m"
      }
#line 279 "common.m"
  }
#line 272 "common.m"
}

#line 86 "common.m"
void MR_CALL 
check_hlds__common__common_info_clear_structs_2_p_0(
#line 86 "common.m"
  MR_Word check_hlds__common__STATE_VARIABLE_Info_0_4,
#line 86 "common.m"
  MR_Word * check_hlds__common__STATE_VARIABLE_Info_5)
#line 86 "common.m"
{
#line 233 "common.m"
  {
#line 233 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 233 "common.m"
    MR_Word check_hlds__common__V_7_7;
#line 234 "common.m"
    MR_Word check_hlds__common__V_8_8;
#line 234 "common.m"
    MR_Word check_hlds__common__V_9_9;
#line 234 "common.m"
    MR_Word check_hlds__common__V_11_11;
#line 234 "common.m"
    MR_Word check_hlds__common__V_10_10;

#line 234 "common.m"
    {
#line 234 "common.m"
      check_hlds__common__V_7_7 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__common_scalar_common_2[0]);
    }
#line 234 "common.m"
    check_hlds__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 234 "common.m"
    check_hlds__common__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 234 "common.m"
    check_hlds__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 234 "common.m"
    check_hlds__common__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 234 "common.m"
    {
#line 234 "common.m"
      MR_Word base;
#line 234 "common.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 234 "common.m"
      *check_hlds__common__STATE_VARIABLE_Info_5 = base;
#line 234 "common.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__common__V_8_8));
#line 234 "common.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__common__V_9_9));
#line 234 "common.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__common__V_7_7));
#line 234 "common.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__common__V_11_11));
#line 234 "common.m"
    }
#line 233 "common.m"
  }
#line 86 "common.m"
}

#line 82 "common.m"
MR_Word MR_CALL 
check_hlds__common__common_info_init_0_f_0(void)
#line 82 "common.m"
{
#line 227 "common.m"
  {
#line 227 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 227 "common.m"
    MR_Word check_hlds__common__CommonInfo_2;
#line 227 "common.m"
    MR_Word check_hlds__common__VarEqv0_3;
#line 227 "common.m"
    MR_Word check_hlds__common__StructMap0_4;
#line 227 "common.m"
    MR_Word check_hlds__common__SeenCalls0_5;

#line 228 "common.m"
    {
#line 228 "common.m"
      mercury__eqvclass__init_1_p_0((MR_Word) &check_hlds__common_scalar_common_1[0], &check_hlds__common__VarEqv0_3);
    }
#line 229 "common.m"
    {
#line 229 "common.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__common_scalar_common_2[0], &check_hlds__common__StructMap0_4);
    }
#line 230 "common.m"
    {
#line 230 "common.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0, (MR_Word) &check_hlds__common_scalar_common_1[2], &check_hlds__common__SeenCalls0_5);
    }
#line 231 "common.m"
    {
#line 231 "common.m"
      check_hlds__common__CommonInfo_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 231 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_2, 0) = ((MR_Box) (check_hlds__common__VarEqv0_3));
#line 231 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_2, 1) = ((MR_Box) (check_hlds__common__StructMap0_4));
#line 231 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_2, 2) = ((MR_Box) (check_hlds__common__StructMap0_4));
#line 231 "common.m"
      MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_2, 3) = ((MR_Box) (check_hlds__common__SeenCalls0_5));
#line 231 "common.m"
    }
#line 227 "common.m"
    return check_hlds__common__CommonInfo_2;
#line 227 "common.m"
  }
#line 82 "common.m"
}

#line 76 "common.m"
MR_bool MR_CALL 
check_hlds__common__common_vars_are_equivalent_3_p_0(
#line 76 "common.m"
  MR_Word check_hlds__common__X_4,
#line 76 "common.m"
  MR_Word check_hlds__common__Y_5,
#line 76 "common.m"
  MR_Word check_hlds__common__CommonInfo_6)
#line 76 "common.m"
{
#line 701 "common.m"
  {
#line 701 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 701 "common.m"
    MR_Word check_hlds__common__EqvVars_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_6, (MR_Integer) 0)));
#line 702 "common.m"
    MR_Word check_hlds__common__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_6, (MR_Integer) 1)));
#line 702 "common.m"
    MR_Word check_hlds__common__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_6, (MR_Integer) 2)));
#line 702 "common.m"
    MR_Word check_hlds__common__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_6, (MR_Integer) 3)));

#line 713 "common.m"
    {
#line 713 "common.m"
      check_hlds__common__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__common_scalar_common_1[0], ((MR_Box) (check_hlds__common__X_4)), ((MR_Box) (check_hlds__common__Y_5)));
    }
#line 713 "common.m"
    if (!(check_hlds__common__succeeded))
#line 715 "common.m"
      {
#line 715 "common.m"
        MR_Word check_hlds__common__TypeInfo_8_15 = (MR_Word) &check_hlds__common_scalar_common_1[0];
#line 715 "common.m"
        MR_Integer check_hlds__common__Id_14;
#line 715 "common.m"
        MR_Integer check_hlds__common__V_16_16;

#line 715 "common.m"
        {
#line 715 "common.m"
          check_hlds__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__common__TypeInfo_8_15, check_hlds__common__EqvVars_7, ((MR_Box) (check_hlds__common__X_4)), &check_hlds__common__Id_14);
        }
#line 715 "common.m"
        if (check_hlds__common__succeeded)
#line 715 "common.m"
          {
#line 716 "common.m"
            {
#line 716 "common.m"
              check_hlds__common__succeeded = mercury__eqvclass__partition_id_3_p_0(check_hlds__common__TypeInfo_8_15, check_hlds__common__EqvVars_7, ((MR_Box) (check_hlds__common__Y_5)), &check_hlds__common__V_16_16);
            }
#line 715 "common.m"
            if (check_hlds__common__succeeded)
#line 716 "common.m"
              check_hlds__common__succeeded = (check_hlds__common__Id_14 == check_hlds__common__V_16_16);
#line 715 "common.m"
          }
#line 715 "common.m"
      }
#line 701 "common.m"
    return check_hlds__common__succeeded;
#line 701 "common.m"
  }
#line 76 "common.m"
}

#line 68 "common.m"
void MR_CALL 
check_hlds__common__common_optimise_higher_order_call_9_p_0(
#line 68 "common.m"
  MR_Word check_hlds__common__Closure_10,
#line 68 "common.m"
  MR_Word check_hlds__common__Args_11,
#line 68 "common.m"
  MR_Word check_hlds__common__Modes_12,
#line 68 "common.m"
  MR_Word check_hlds__common__Det_13,
#line 68 "common.m"
  MR_Word check_hlds__common__GoalInfo_14,
#line 68 "common.m"
  MR_Word check_hlds__common__GoalExpr0_15,
#line 68 "common.m"
  MR_Word * check_hlds__common__GoalExpr_16,
#line 68 "common.m"
  MR_Word check_hlds__common__STATE_VARIABLE_Info_0_23,
#line 68 "common.m"
  MR_Word * check_hlds__common__STATE_VARIABLE_Info_24)
#line 68 "common.m"
{
#line 529 "common.m"
  {
#line 529 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 529 "common.m"
    MR_Word check_hlds__common__InputArgs_20;
#line 529 "common.m"
    MR_Word check_hlds__common__OutputArgs_21;
#line 529 "common.m"
    MR_Word check_hlds__common__OutputModes_22;
#line 521 "common.m"
    MR_Word check_hlds__common__VarTypes_18;
#line 521 "common.m"
    MR_Word check_hlds__common__ModuleInfo_19;
#line 521 "common.m"
    MR_Word check_hlds__common__SolnCount_30;
#line 536 "common.m"
    MR_Word check_hlds__common__V_29_29;

#line 536 "common.m"
    {
#line 536 "common.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__common__Det_13, &check_hlds__common__V_29_29, &check_hlds__common__SolnCount_30);
    }
#line 539 "common.m"
    if ((check_hlds__common__SolnCount_30 == (MR_Integer) 2))
#line 539 "common.m"
      check_hlds__common__succeeded = MR_TRUE;
#line 539 "common.m"
    else
#line 539 "common.m"
      if ((check_hlds__common__SolnCount_30 == (MR_Integer) 1))
#line 538 "common.m"
        check_hlds__common__succeeded = MR_TRUE;
#line 539 "common.m"
      else
#line 539 "common.m"
        check_hlds__common__succeeded = MR_FALSE;
#line 521 "common.m"
    if (check_hlds__common__succeeded)
#line 521 "common.m"
      {
#line 522 "common.m"
        {
#line 522 "common.m"
          check_hlds__simplify__simplify_info_get_var_types_2_p_0(check_hlds__common__STATE_VARIABLE_Info_0_23, &check_hlds__common__VarTypes_18);
        }
#line 523 "common.m"
        {
#line 523 "common.m"
          check_hlds__simplify__simplify_info_get_module_info_2_p_0(check_hlds__common__STATE_VARIABLE_Info_0_23, &check_hlds__common__ModuleInfo_19);
        }
#line 524 "common.m"
        {
#line 524 "common.m"
          check_hlds__common__succeeded = check_hlds__common__partition_call_args_7_p_0(check_hlds__common__VarTypes_18, check_hlds__common__ModuleInfo_19, check_hlds__common__Modes_12, check_hlds__common__Args_11, &check_hlds__common__InputArgs_20, &check_hlds__common__OutputArgs_21, &check_hlds__common__OutputModes_22);
        }
#line 521 "common.m"
      }
#line 529 "common.m"
    if (check_hlds__common__succeeded)
#line 527 "common.m"
      {
#line 527 "common.m"
        MR_Word check_hlds__common__V_26_26;

#line 527 "common.m"
        {
#line 527 "common.m"
          check_hlds__common__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__common__V_26_26, 0) = ((MR_Box) (check_hlds__common__Closure_10));
#line 527 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__common__V_26_26, 1) = ((MR_Box) (check_hlds__common__InputArgs_20));
#line 527 "common.m"
        }
#line 527 "common.m"
        {
#line 527 "common.m"
          check_hlds__common__common_optimise_call_2_9_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__common__V_26_26, check_hlds__common__OutputArgs_21, check_hlds__common__OutputModes_22, check_hlds__common__GoalInfo_14, check_hlds__common__GoalExpr0_15, check_hlds__common__GoalExpr_16, check_hlds__common__STATE_VARIABLE_Info_0_23, check_hlds__common__STATE_VARIABLE_Info_24);
#line 527 "common.m"
          return;
        }
#line 527 "common.m"
      }
#line 529 "common.m"
    else
#line 530 "common.m"
      {
#line 530 "common.m"
        *check_hlds__common__GoalExpr_16 = check_hlds__common__GoalExpr0_15;
#line 530 "common.m"
        *check_hlds__common__STATE_VARIABLE_Info_24 = check_hlds__common__STATE_VARIABLE_Info_0_23;
#line 530 "common.m"
      }
#line 529 "common.m"
  }
#line 68 "common.m"
}

#line 64 "common.m"
void MR_CALL 
check_hlds__common__common_optimise_call_8_p_0(
#line 64 "common.m"
  MR_Word check_hlds__common__PredId_9,
#line 64 "common.m"
  MR_Integer check_hlds__common__ProcId_10,
#line 64 "common.m"
  MR_Word check_hlds__common__Args_11,
#line 64 "common.m"
  MR_Word check_hlds__common__GoalInfo_12,
#line 64 "common.m"
  MR_Word check_hlds__common__GoalExpr0_13,
#line 64 "common.m"
  MR_Word * check_hlds__common__GoalExpr_14,
#line 64 "common.m"
  MR_Word check_hlds__common__STATE_VARIABLE_Info_0_25,
#line 64 "common.m"
  MR_Word * check_hlds__common__STATE_VARIABLE_Info_26)
#line 64 "common.m"
{
#line 514 "common.m"
  {
#line 514 "common.m"
    MR_bool check_hlds__common__succeeded;
#line 514 "common.m"
    MR_Word check_hlds__common__InputArgs_22;
#line 514 "common.m"
    MR_Word check_hlds__common__OutputArgs_23;
#line 514 "common.m"
    MR_Word check_hlds__common__OutputModes_24;
#line 503 "common.m"
    MR_Word check_hlds__common__Det_16;
#line 503 "common.m"
    MR_Word check_hlds__common__VarTypes_17;
#line 503 "common.m"
    MR_Word check_hlds__common__ModuleInfo_18;
#line 503 "common.m"
    MR_Word check_hlds__common__ProcInfo_20;
#line 503 "common.m"
    MR_Word check_hlds__common__ArgModes_21;
#line 503 "common.m"
    MR_Word check_hlds__common__SolnCount_31;
#line 536 "common.m"
    MR_Word check_hlds__common__V_30_30;
#line 507 "common.m"
    MR_Word check_hlds__common__V_19_19;

#line 503 "common.m"
    {
#line 503 "common.m"
      check_hlds__common__Det_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__common__GoalInfo_12);
    }
#line 536 "common.m"
    {
#line 536 "common.m"
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__common__Det_16, &check_hlds__common__V_30_30, &check_hlds__common__SolnCount_31);
    }
#line 539 "common.m"
    if ((check_hlds__common__SolnCount_31 == (MR_Integer) 2))
#line 539 "common.m"
      check_hlds__common__succeeded = MR_TRUE;
#line 539 "common.m"
    else
#line 539 "common.m"
      if ((check_hlds__common__SolnCount_31 == (MR_Integer) 1))
#line 538 "common.m"
        check_hlds__common__succeeded = MR_TRUE;
#line 539 "common.m"
      else
#line 539 "common.m"
        check_hlds__common__succeeded = MR_FALSE;
#line 503 "common.m"
    if (check_hlds__common__succeeded)
#line 503 "common.m"
      {
#line 505 "common.m"
        {
#line 505 "common.m"
          check_hlds__simplify__simplify_info_get_var_types_2_p_0(check_hlds__common__STATE_VARIABLE_Info_0_25, &check_hlds__common__VarTypes_17);
        }
#line 506 "common.m"
        {
#line 506 "common.m"
          check_hlds__simplify__simplify_info_get_module_info_2_p_0(check_hlds__common__STATE_VARIABLE_Info_0_25, &check_hlds__common__ModuleInfo_18);
        }
#line 507 "common.m"
        {
#line 507 "common.m"
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__common__ModuleInfo_18, check_hlds__common__PredId_9, check_hlds__common__ProcId_10, &check_hlds__common__V_19_19, &check_hlds__common__ProcInfo_20);
        }
#line 508 "common.m"
        {
#line 508 "common.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__common__ProcInfo_20, &check_hlds__common__ArgModes_21);
        }
#line 509 "common.m"
        {
#line 509 "common.m"
          check_hlds__common__succeeded = check_hlds__common__partition_call_args_7_p_0(check_hlds__common__VarTypes_17, check_hlds__common__ModuleInfo_18, check_hlds__common__ArgModes_21, check_hlds__common__Args_11, &check_hlds__common__InputArgs_22, &check_hlds__common__OutputArgs_23, &check_hlds__common__OutputModes_24);
        }
#line 503 "common.m"
      }
#line 514 "common.m"
    if (check_hlds__common__succeeded)
#line 512 "common.m"
      {
#line 512 "common.m"
        MR_Word check_hlds__common__V_27_27;

#line 512 "common.m"
        {
#line 512 "common.m"
          check_hlds__common__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__common__V_27_27, 0) = ((MR_Box) (check_hlds__common__PredId_9));
#line 512 "common.m"
          MR_hl_field(MR_mktag(1), check_hlds__common__V_27_27, 1) = ((MR_Box) (check_hlds__common__ProcId_10));
#line 512 "common.m"
        }
#line 512 "common.m"
        {
#line 512 "common.m"
          check_hlds__common__common_optimise_call_2_9_p_0(check_hlds__common__V_27_27, check_hlds__common__InputArgs_22, check_hlds__common__OutputArgs_23, check_hlds__common__OutputModes_24, check_hlds__common__GoalInfo_12, check_hlds__common__GoalExpr0_13, check_hlds__common__GoalExpr_14, check_hlds__common__STATE_VARIABLE_Info_0_25, check_hlds__common__STATE_VARIABLE_Info_26);
#line 512 "common.m"
          return;
        }
#line 512 "common.m"
      }
#line 514 "common.m"
    else
#line 515 "common.m"
      {
#line 515 "common.m"
        *check_hlds__common__GoalExpr_14 = check_hlds__common__GoalExpr0_13;
#line 515 "common.m"
        *check_hlds__common__STATE_VARIABLE_Info_26 = check_hlds__common__STATE_VARIABLE_Info_0_25;
#line 515 "common.m"
      }
#line 514 "common.m"
  }
#line 64 "common.m"
}

#line 52 "common.m"
void MR_CALL 
check_hlds__common__common_optimise_unification_8_p_0(
#line 52 "common.m"
  MR_Word check_hlds__common__Unification0_9,
#line 52 "common.m"
  MR_Word check_hlds__common__Mode_10,
#line 52 "common.m"
  MR_Word check_hlds__common__GoalExpr0_11,
#line 52 "common.m"
  MR_Word * check_hlds__common__GoalExpr_12,
#line 52 "common.m"
  MR_Word check_hlds__common__GoalInfo0_13,
#line 52 "common.m"
  MR_Word * check_hlds__common__GoalInfo_14,
#line 52 "common.m"
  MR_Word check_hlds__common__STATE_VARIABLE_Info_0_34,
#line 52 "common.m"
  MR_Word * check_hlds__common__STATE_VARIABLE_Info_35)
#line 52 "common.m"
{
#line 241 "common.m"
  {
#line 241 "common.m"
    MR_bool check_hlds__common__succeeded;

#line 241 "common.m"
    if (((MR_tag((MR_Word) check_hlds__common__Unification0_9)) == (MR_mktag((MR_Integer) 2))))
#line 257 "common.m"
      {
#line 257 "common.m"
        MR_Word check_hlds__common__Var1_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__common__Unification0_9, (MR_Integer) 0)));
#line 257 "common.m"
        MR_Word check_hlds__common__Var2_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__common__Unification0_9, (MR_Integer) 1)));
#line 257 "common.m"
        MR_Word check_hlds__common__CommonInfo0_50;
#line 257 "common.m"
        MR_Word check_hlds__common__VarEqv0_51;
#line 257 "common.m"
        MR_Word check_hlds__common__VarEqv_52;
#line 257 "common.m"
        MR_Word check_hlds__common__CommonInfo_53;
#line 492 "common.m"
        MR_Word check_hlds__common__V_55_55;
#line 492 "common.m"
        MR_Word check_hlds__common__V_56_56;
#line 492 "common.m"
        MR_Word check_hlds__common__V_57_57;
#line 494 "common.m"
        MR_Word check_hlds__common__V_59_59;
#line 494 "common.m"
        MR_Word check_hlds__common__V_60_60;
#line 494 "common.m"
        MR_Word check_hlds__common__V_61_61;
#line 494 "common.m"
        MR_Word check_hlds__common__V_58_58;

#line 491 "common.m"
        {
#line 491 "common.m"
          check_hlds__simplify__simplify_info_get_common_info_2_p_0(check_hlds__common__STATE_VARIABLE_Info_0_34, &check_hlds__common__CommonInfo0_50);
        }
#line 492 "common.m"
        check_hlds__common__VarEqv0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_50, (MR_Integer) 0)));
#line 492 "common.m"
        check_hlds__common__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_50, (MR_Integer) 1)));
#line 492 "common.m"
        check_hlds__common__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_50, (MR_Integer) 2)));
#line 492 "common.m"
        check_hlds__common__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_50, (MR_Integer) 3)));
#line 493 "common.m"
        {
#line 493 "common.m"
          mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) &check_hlds__common_scalar_common_1[0], ((MR_Box) (check_hlds__common__Var1_29)), ((MR_Box) (check_hlds__common__Var2_30)), check_hlds__common__VarEqv0_51, &check_hlds__common__VarEqv_52);
        }
#line 494 "common.m"
        check_hlds__common__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_50, (MR_Integer) 0)));
#line 494 "common.m"
        check_hlds__common__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_50, (MR_Integer) 1)));
#line 494 "common.m"
        check_hlds__common__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_50, (MR_Integer) 2)));
#line 494 "common.m"
        check_hlds__common__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_50, (MR_Integer) 3)));
#line 494 "common.m"
        {
#line 494 "common.m"
          check_hlds__common__CommonInfo_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 494 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_53, 0) = ((MR_Box) (check_hlds__common__VarEqv_52));
#line 494 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_53, 1) = ((MR_Box) (check_hlds__common__V_59_59));
#line 494 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_53, 2) = ((MR_Box) (check_hlds__common__V_60_60));
#line 494 "common.m"
          MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_53, 3) = ((MR_Box) (check_hlds__common__V_61_61));
#line 494 "common.m"
        }
#line 495 "common.m"
        {
#line 495 "common.m"
          check_hlds__simplify__simplify_info_set_common_info_3_p_0(check_hlds__common__CommonInfo_53, check_hlds__common__STATE_VARIABLE_Info_0_34, check_hlds__common__STATE_VARIABLE_Info_35);
        }
#line 259 "common.m"
        *check_hlds__common__GoalExpr_12 = check_hlds__common__GoalExpr0_11;
#line 260 "common.m"
        *check_hlds__common__GoalInfo_14 = check_hlds__common__GoalInfo0_13;
#line 257 "common.m"
      }
#line 241 "common.m"
    else
#line 241 "common.m"
      if (((MR_tag((MR_Word) check_hlds__common__Unification0_9)) == (MR_mktag((MR_Integer) 0))))
#line 241 "common.m"
        {
#line 241 "common.m"
          MR_Word check_hlds__common__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__Unification0_9, (MR_Integer) 0)));
#line 241 "common.m"
          MR_Word check_hlds__common__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__Unification0_9, (MR_Integer) 1)));
#line 241 "common.m"
          MR_Word check_hlds__common__ArgVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__Unification0_9, (MR_Integer) 2)));
#line 241 "common.m"
          MR_Word check_hlds__common__SubInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__Unification0_9, (MR_Integer) 6)));
#line 241 "common.m"
          MR_Word check_hlds__common__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__Unification0_9, (MR_Integer) 3)));
#line 241 "common.m"
          MR_Word check_hlds__common__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__Unification0_9, (MR_Integer) 4)));
#line 241 "common.m"
          MR_Word check_hlds__common__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__Unification0_9, (MR_Integer) 5)));
#line 243 "common.m"
          MR_Word check_hlds__common__MaybeTakeAddr_23;
#line 243 "common.m"
          MR_Word check_hlds__common__V_24_24;
#line 244 "common.m"
          MR_Word check_hlds__common__V_25_25;

#line 243 "common.m"
          check_hlds__common__succeeded = ((MR_tag((MR_Word) check_hlds__common__SubInfo_22)) == (MR_mktag((MR_Integer) 1)));
#line 243 "common.m"
          if (check_hlds__common__succeeded)
#line 243 "common.m"
            {
#line 243 "common.m"
              check_hlds__common__MaybeTakeAddr_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__SubInfo_22, (MR_Integer) 0)));
#line 243 "common.m"
              check_hlds__common__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__SubInfo_22, (MR_Integer) 1)));
#line 244 "common.m"
              check_hlds__common__succeeded = ((MR_tag((MR_Word) check_hlds__common__MaybeTakeAddr_23)) == (MR_mktag((MR_Integer) 1)));
#line 244 "common.m"
              if (check_hlds__common__succeeded)
#line 244 "common.m"
                check_hlds__common__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__MaybeTakeAddr_23, (MR_Integer) 0)));
#line 243 "common.m"
            }
#line 248 "common.m"
          if (check_hlds__common__succeeded)
#line 246 "common.m"
            {
#line 246 "common.m"
              *check_hlds__common__GoalExpr_12 = check_hlds__common__GoalExpr0_11;
#line 247 "common.m"
              *check_hlds__common__GoalInfo_14 = check_hlds__common__GoalInfo0_13;
#line 247 "common.m"
              *check_hlds__common__STATE_VARIABLE_Info_35 = check_hlds__common__STATE_VARIABLE_Info_0_34;
#line 246 "common.m"
            }
#line 248 "common.m"
          else
#line 249 "common.m"
            {
#line 249 "common.m"
              check_hlds__common__common_optimise_construct_10_p_0(check_hlds__common__Var_16, check_hlds__common__ConsId_17, check_hlds__common__ArgVars_18, check_hlds__common__Mode_10, check_hlds__common__GoalExpr0_11, check_hlds__common__GoalExpr_12, check_hlds__common__GoalInfo0_13, check_hlds__common__GoalInfo_14, check_hlds__common__STATE_VARIABLE_Info_0_34, check_hlds__common__STATE_VARIABLE_Info_35);
#line 249 "common.m"
              return;
            }
#line 241 "common.m"
        }
#line 241 "common.m"
      else
#line 241 "common.m"
        if (((MR_tag((MR_Word) check_hlds__common__Unification0_9)) == (MR_mktag((MR_Integer) 1))))
#line 253 "common.m"
          {
#line 253 "common.m"
            MR_Word check_hlds__common__UniModes_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__Unification0_9, (MR_Integer) 3)));
#line 253 "common.m"
            MR_Word check_hlds__common__CanFail_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__Unification0_9, (MR_Integer) 4)));
#line 253 "common.m"
            MR_Word check_hlds__common__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__Unification0_9, (MR_Integer) 0)));
#line 253 "common.m"
            MR_Word check_hlds__common__ConsId_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__Unification0_9, (MR_Integer) 1)));
#line 253 "common.m"
            MR_Word check_hlds__common__ArgVars_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__Unification0_9, (MR_Integer) 2)));
#line 253 "common.m"
            MR_Word check_hlds__common__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__common__Unification0_9, (MR_Integer) 5)));

#line 254 "common.m"
            {
#line 254 "common.m"
              check_hlds__common__common_optimise_deconstruct_12_p_0(check_hlds__common__Var_40, check_hlds__common__ConsId_41, check_hlds__common__ArgVars_42, check_hlds__common__UniModes_26, check_hlds__common__CanFail_27, check_hlds__common__Mode_10, check_hlds__common__GoalExpr0_11, check_hlds__common__GoalExpr_12, check_hlds__common__GoalInfo0_13, check_hlds__common__GoalInfo_14, check_hlds__common__STATE_VARIABLE_Info_0_34, check_hlds__common__STATE_VARIABLE_Info_35);
#line 254 "common.m"
              return;
            }
#line 253 "common.m"
          }
#line 241 "common.m"
        else
#line 241 "common.m"
          if (((((MR_tag((MR_Word) check_hlds__common__Unification0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__Unification0_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 267 "common.m"
            {
#line 268 "common.m"
              *check_hlds__common__GoalExpr_12 = check_hlds__common__GoalExpr0_11;
#line 269 "common.m"
              *check_hlds__common__GoalInfo_14 = check_hlds__common__GoalInfo0_13;
#line 269 "common.m"
              *check_hlds__common__STATE_VARIABLE_Info_35 = check_hlds__common__STATE_VARIABLE_Info_0_34;
#line 267 "common.m"
            }
#line 241 "common.m"
          else
#line 262 "common.m"
            {
#line 262 "common.m"
              MR_Word check_hlds__common__Var1_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__Unification0_9, (MR_Integer) 1)));
#line 262 "common.m"
              MR_Word check_hlds__common__Var2_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__common__Unification0_9, (MR_Integer) 2)));
#line 262 "common.m"
              MR_Word check_hlds__common__CommonInfo0_68;
#line 262 "common.m"
              MR_Word check_hlds__common__VarEqv0_69;
#line 262 "common.m"
              MR_Word check_hlds__common__VarEqv_70;
#line 262 "common.m"
              MR_Word check_hlds__common__CommonInfo_71;
#line 492 "common.m"
              MR_Word check_hlds__common__V_73_73;
#line 492 "common.m"
              MR_Word check_hlds__common__V_74_74;
#line 492 "common.m"
              MR_Word check_hlds__common__V_75_75;
#line 494 "common.m"
              MR_Word check_hlds__common__V_77_77;
#line 494 "common.m"
              MR_Word check_hlds__common__V_78_78;
#line 494 "common.m"
              MR_Word check_hlds__common__V_79_79;
#line 494 "common.m"
              MR_Word check_hlds__common__V_76_76;

#line 491 "common.m"
              {
#line 491 "common.m"
                check_hlds__simplify__simplify_info_get_common_info_2_p_0(check_hlds__common__STATE_VARIABLE_Info_0_34, &check_hlds__common__CommonInfo0_68);
              }
#line 492 "common.m"
              check_hlds__common__VarEqv0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_68, (MR_Integer) 0)));
#line 492 "common.m"
              check_hlds__common__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_68, (MR_Integer) 1)));
#line 492 "common.m"
              check_hlds__common__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_68, (MR_Integer) 2)));
#line 492 "common.m"
              check_hlds__common__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_68, (MR_Integer) 3)));
#line 493 "common.m"
              {
#line 493 "common.m"
                mercury__eqvclass__ensure_equivalence_4_p_0((MR_Word) &check_hlds__common_scalar_common_1[0], ((MR_Box) (check_hlds__common__Var1_43)), ((MR_Box) (check_hlds__common__Var2_44)), check_hlds__common__VarEqv0_69, &check_hlds__common__VarEqv_70);
              }
#line 494 "common.m"
              check_hlds__common__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_68, (MR_Integer) 0)));
#line 494 "common.m"
              check_hlds__common__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_68, (MR_Integer) 1)));
#line 494 "common.m"
              check_hlds__common__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_68, (MR_Integer) 2)));
#line 494 "common.m"
              check_hlds__common__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo0_68, (MR_Integer) 3)));
#line 494 "common.m"
              {
#line 494 "common.m"
                check_hlds__common__CommonInfo_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 494 "common.m"
                MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_71, 0) = ((MR_Box) (check_hlds__common__VarEqv_70));
#line 494 "common.m"
                MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_71, 1) = ((MR_Box) (check_hlds__common__V_77_77));
#line 494 "common.m"
                MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_71, 2) = ((MR_Box) (check_hlds__common__V_78_78));
#line 494 "common.m"
                MR_hl_field(MR_mktag(0), check_hlds__common__CommonInfo_71, 3) = ((MR_Box) (check_hlds__common__V_79_79));
#line 494 "common.m"
              }
#line 495 "common.m"
              {
#line 495 "common.m"
                check_hlds__simplify__simplify_info_set_common_info_3_p_0(check_hlds__common__CommonInfo_71, check_hlds__common__STATE_VARIABLE_Info_0_34, check_hlds__common__STATE_VARIABLE_Info_35);
              }
#line 264 "common.m"
              *check_hlds__common__GoalExpr_12 = check_hlds__common__GoalExpr0_11;
#line 265 "common.m"
              *check_hlds__common__GoalInfo_14 = check_hlds__common__GoalInfo0_13;
#line 262 "common.m"
            }
#line 241 "common.m"
  }
#line 52 "common.m"
}

void mercury__check_hlds__common__init(void)
{
}

void mercury__check_hlds__common__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__common__check_hlds__common__type_ctor_info_call_args_0);
	MR_register_type_ctor_info(&check_hlds__common__check_hlds__common__type_ctor_info_common_info_0);
	MR_register_type_ctor_info(&check_hlds__common__check_hlds__common__type_ctor_info_cons_id_map_0);
	MR_register_type_ctor_info(&check_hlds__common__check_hlds__common__type_ctor_info_seen_calls_0);
	MR_register_type_ctor_info(&check_hlds__common__check_hlds__common__type_ctor_info_struct_map_0);
	MR_register_type_ctor_info(&check_hlds__common__check_hlds__common__type_ctor_info_structure_0);
	MR_register_type_ctor_info(&check_hlds__common__check_hlds__common__type_ctor_info_structures_0);
}

void mercury__check_hlds__common__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.common. */
