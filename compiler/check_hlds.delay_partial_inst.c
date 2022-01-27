/*
** Automatically generated from `delay_partial_inst.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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


/* :- module check_hlds.delay_partial_inst. */
/* :- implementation. */

/*
INIT mercury__check_hlds__delay_partial_inst__init
ENDINIT
*/

#include "check_hlds.delay_partial_inst.mih"


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
#include "check_hlds.mode_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 246 "delay_partial_inst.m"
struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s {
#line 250 "delay_partial_inst.m"
  MR_bool check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded;
#line 299 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__UniModes_46;
#line 336 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ModuleInfo_54;
#line 310 "delay_partial_inst.m"
  jmp_buf check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__commit_0;
#line 310 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__V_156_156;
#line 310 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__V_157_157;
#line 310 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__RhsAfter_187;
#line 310 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__conv0_V_156_156;
#line 246 "delay_partial_inst.m"
};


#line 155 "check_hlds.delay_partial_inst.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__delay_partial_inst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 158 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_partial_inst__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 161 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_partial_inst__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 164 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 167 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 170 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_partial_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 173 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 176 "check_hlds.delay_partial_inst.c"
static const MR_PseudoTypeInfo check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_types_delay_partial_inst_info_0_0[4];

#line 179 "check_hlds.delay_partial_inst.c"
static const MR_ConstString check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_names_delay_partial_inst_info_0_0[4];

#line 182 "check_hlds.delay_partial_inst.c"
static const MR_DuFunctorDesc check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_functor_desc_delay_partial_inst_info_0_0;

#line 185 "check_hlds.delay_partial_inst.c"
static const MR_DuFunctorDescPtr check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_stag_ordered_delay_partial_inst_info_0_0[1];

#line 188 "check_hlds.delay_partial_inst.c"
static const MR_DuPtagLayout check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_ptag_ordered_delay_partial_inst_info_0[1];

#line 191 "check_hlds.delay_partial_inst.c"
static const MR_DuFunctorDescPtr check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_name_ordered_delay_partial_inst_info_0[1];

#line 194 "check_hlds.delay_partial_inst.c"
static const MR_Integer check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__functor_number_map_delay_partial_inst_info_0[1];

#line 197 "check_hlds.delay_partial_inst.c"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0_10001(
#line 200 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 202 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2);

#line 205 "check_hlds.delay_partial_inst.c"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0_10001(
#line 208 "check_hlds.delay_partial_inst.c"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_1,
#line 210 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 212 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3);

#line 215 "check_hlds.delay_partial_inst.c"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____construct_map_0_0_10001(
#line 218 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 220 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2);

#line 223 "check_hlds.delay_partial_inst.c"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____construct_map_0_0_10001(
#line 226 "check_hlds.delay_partial_inst.c"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_1,
#line 228 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 230 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3);

#line 233 "check_hlds.delay_partial_inst.c"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0_10001(
#line 236 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 238 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2);

#line 241 "check_hlds.delay_partial_inst.c"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0_10001(
#line 244 "check_hlds.delay_partial_inst.c"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_1,
#line 246 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 248 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3);

#line 147 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0(
#line 147 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__1_1,
#line 147 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 147 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__3_3);

#line 147 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0(
#line 147 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__1_1,
#line 147 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2);

#line 178 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____construct_map_0_0(
#line 178 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__1_1,
#line 178 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 178 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__3_3);

#line 178 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____construct_map_0_0(
#line 178 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__1_1,
#line 178 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2);

#line 180 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0(
#line 180 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__1_1,
#line 180 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 180 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__3_3);

#line 180 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0(
#line 180 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__1_1,
#line 180 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2);

#line 569 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_p_0(
#line 569 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__InstMap0_1,
#line 569 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 569 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__3_3,
#line 569 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4,
#line 569 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5,
#line 569 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6,
#line 569 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7);

#line 541 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goals_7_p_0(
#line 541 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__InstMap0_1,
#line 541 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 541 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__3_3,
#line 541 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4,
#line 541 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5,
#line 541 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6,
#line 541 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7);

#line 525 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_p_0(
#line 525 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__InstMap0_1,
#line 525 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 525 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__3_3,
#line 525 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4,
#line 525 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5,
#line 525 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6,
#line 525 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7);

#line 513 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_f_0(
#line 513 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__ModuleInfo_7,
#line 513 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Context_8,
#line 513 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__LhsVar_9,
#line 513 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__RhsVar_10,
#line 513 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__ArgMode_11,
#line 513 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__Goal_12);

#line 489 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst__get_sole_cons_id_and_canon_vars_4_p_0(
#line 489 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__ConstructMap_5,
#line 489 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Var_6,
#line 489 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__ConsId_7,
#line 489 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__CanonVars_8);

#line 477 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__add_to_construct_map_5_p_0(
#line 477 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Var_6,
#line 477 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__ConsId_7,
#line 477 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__CanonVars_8,
#line 477 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_13,
#line 477 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_14);

#line 465 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__create_canonical_variables_4_p_0(
#line 465 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__OrigVars_5,
#line 465 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__CanonVars_6,
#line 465 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_13,
#line 465 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_14);

#line 370 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_6(
#line 370 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__closure_arg,
#line 370 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 370 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 370 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3,
#line 370 "delay_partial_inst.m"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_4);

#line 329 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_5(
#line 329 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__closure_arg,
#line 329 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 329 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 329 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3,
#line 329 "delay_partial_inst.m"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_4);

#line 310 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_1(
#line 310 "delay_partial_inst.m"
  void * check_hlds__delay_partial_inst__env_ptr_arg);

#line 310 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_3(
#line 310 "delay_partial_inst.m"
  void * check_hlds__delay_partial_inst__env_ptr_arg);

#line 310 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_2(
#line 310 "delay_partial_inst.m"
  void * check_hlds__delay_partial_inst__env_ptr_arg);

#line 310 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_4(
#line 310 "delay_partial_inst.m"
  void * check_hlds__delay_partial_inst__env_ptr_arg);

#line 246 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(
#line 246 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__InstMap0_8,
#line 246 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Goal0_9,
#line 246 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__Goal_10,
#line 246 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134,
#line 246 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_135,
#line 246 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136,
#line 246 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_137);

#line 199 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_proc_6_p_0(
#line 199 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__PredId_7,
#line 199 "delay_partial_inst.m"
  MR_Integer check_hlds__delay_partial_inst__ProcId_8,
#line 199 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_16,
#line 199 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_17,
#line 199 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_Changed_0_18,
#line 199 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_Changed_19);

#line 188 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_preds_4_p_0_1(
#line 188 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__closure_arg,
#line 188 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 188 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 188 "delay_partial_inst.m"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_3,
#line 188 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_4,
#line 188 "delay_partial_inst.m"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_5);


static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_1[3][2];

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_2[2][3];

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_3[2][9];

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_4[1][1];




static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_3[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__delay_partial_inst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__delay_partial_inst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__delay_partial_inst_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "delay_partial_inst"))
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



#line 611 "check_hlds.delay_partial_inst.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__delay_partial_inst__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 619 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_partial_inst__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 627 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_partial_inst__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__delay_partial_inst__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 635 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_TypeInfo) &check_hlds__delay_partial_inst__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 644 "check_hlds.delay_partial_inst.c"
const MR_TypeCtorInfo_Struct check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__type_ctor_info_canon_vars_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0_10001)),
  ((MR_Box) (check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0_10001)),
  (MR_String) "check_hlds.delay_partial_inst",
  (MR_String) "canon_vars_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__delay_partial_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 665 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__delay_partial_inst__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__delay_partial_inst__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 674 "check_hlds.delay_partial_inst.c"
const MR_TypeCtorInfo_Struct check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__type_ctor_info_construct_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_partial_inst____Unify____construct_map_0_0_10001)),
  ((MR_Box) (check_hlds__delay_partial_inst____Compare____construct_map_0_0_10001)),
  (MR_String) "check_hlds.delay_partial_inst",
  (MR_String) "construct_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__delay_partial_inst__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 695 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_partial_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 703 "check_hlds.delay_partial_inst.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_partial_inst__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__delay_partial_inst__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 712 "check_hlds.delay_partial_inst.c"
static const MR_PseudoTypeInfo check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_types_delay_partial_inst_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_partial_inst__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_partial_inst__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 720 "check_hlds.delay_partial_inst.c"
static const MR_ConstString check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_names_delay_partial_inst_info_0_0[4] = {
  (MR_String) "dpi_module_info",
  (MR_String) "dpi_varset",
  (MR_String) "dpi_vartypes",
  (MR_String) "dpi_changed"
};

#line 728 "check_hlds.delay_partial_inst.c"
static const MR_DuFunctorDesc check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_functor_desc_delay_partial_inst_info_0_0 = {
  (MR_String) "delay_partial_inst_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_types_delay_partial_inst_info_0_0,
  check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__field_names_delay_partial_inst_info_0_0,
  NULL,
  NULL
};

#line 743 "check_hlds.delay_partial_inst.c"
static const MR_DuFunctorDescPtr check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_stag_ordered_delay_partial_inst_info_0_0[1] = {
  &check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_functor_desc_delay_partial_inst_info_0_0
};

#line 748 "check_hlds.delay_partial_inst.c"
static const MR_DuPtagLayout check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_ptag_ordered_delay_partial_inst_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_stag_ordered_delay_partial_inst_info_0_0
  }
};

#line 757 "check_hlds.delay_partial_inst.c"
static const MR_DuFunctorDescPtr check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_name_ordered_delay_partial_inst_info_0[1] = {
  &check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_functor_desc_delay_partial_inst_info_0_0
};

#line 762 "check_hlds.delay_partial_inst.c"
static const MR_Integer check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__functor_number_map_delay_partial_inst_info_0[1] = {
  (MR_Integer) 0
};

#line 767 "check_hlds.delay_partial_inst.c"
const MR_TypeCtorInfo_Struct check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__type_ctor_info_delay_partial_inst_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0_10001)),
  ((MR_Box) (check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0_10001)),
  (MR_String) "check_hlds.delay_partial_inst",
  (MR_String) "delay_partial_inst_info",
  {
    check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_name_ordered_delay_partial_inst_info_0
  },
  {
    check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__du_ptag_ordered_delay_partial_inst_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__functor_number_map_delay_partial_inst_info_0
};

#line 788 "check_hlds.delay_partial_inst.c"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0_10001(
#line 791 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 793 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2)
#line 795 "check_hlds.delay_partial_inst.c"
{
#line 797 "check_hlds.delay_partial_inst.c"
  {
#line 799 "check_hlds.delay_partial_inst.c"
    MR_bool check_hlds__delay_partial_inst__succeeded;

#line 802 "check_hlds.delay_partial_inst.c"
    {
#line 804 "check_hlds.delay_partial_inst.c"
      check_hlds__delay_partial_inst__succeeded = check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0(((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_1), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2));
    }
#line 807 "check_hlds.delay_partial_inst.c"
    return check_hlds__delay_partial_inst__succeeded;
#line 809 "check_hlds.delay_partial_inst.c"
  }
#line 811 "check_hlds.delay_partial_inst.c"
}

#line 814 "check_hlds.delay_partial_inst.c"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0_10001(
#line 817 "check_hlds.delay_partial_inst.c"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_1,
#line 819 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 821 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3)
#line 823 "check_hlds.delay_partial_inst.c"
{
#line 825 "check_hlds.delay_partial_inst.c"
  {
#line 827 "check_hlds.delay_partial_inst.c"
    MR_Word check_hlds__delay_partial_inst__conv0_HeadVar__1_1;

#line 830 "check_hlds.delay_partial_inst.c"
    {
#line 832 "check_hlds.delay_partial_inst.c"
      check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0(&check_hlds__delay_partial_inst__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_3));
    }
#line 835 "check_hlds.delay_partial_inst.c"
    *check_hlds__delay_partial_inst__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_partial_inst__conv0_HeadVar__1_1));
#line 837 "check_hlds.delay_partial_inst.c"
  }
#line 839 "check_hlds.delay_partial_inst.c"
}

#line 842 "check_hlds.delay_partial_inst.c"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____construct_map_0_0_10001(
#line 845 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 847 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2)
#line 849 "check_hlds.delay_partial_inst.c"
{
#line 851 "check_hlds.delay_partial_inst.c"
  {
#line 853 "check_hlds.delay_partial_inst.c"
    MR_bool check_hlds__delay_partial_inst__succeeded;

#line 856 "check_hlds.delay_partial_inst.c"
    {
#line 858 "check_hlds.delay_partial_inst.c"
      check_hlds__delay_partial_inst__succeeded = check_hlds__delay_partial_inst____Unify____construct_map_0_0(((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_1), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2));
    }
#line 861 "check_hlds.delay_partial_inst.c"
    return check_hlds__delay_partial_inst__succeeded;
#line 863 "check_hlds.delay_partial_inst.c"
  }
#line 865 "check_hlds.delay_partial_inst.c"
}

#line 868 "check_hlds.delay_partial_inst.c"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____construct_map_0_0_10001(
#line 871 "check_hlds.delay_partial_inst.c"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_1,
#line 873 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 875 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3)
#line 877 "check_hlds.delay_partial_inst.c"
{
#line 879 "check_hlds.delay_partial_inst.c"
  {
#line 881 "check_hlds.delay_partial_inst.c"
    MR_Word check_hlds__delay_partial_inst__conv0_HeadVar__1_1;

#line 884 "check_hlds.delay_partial_inst.c"
    {
#line 886 "check_hlds.delay_partial_inst.c"
      check_hlds__delay_partial_inst____Compare____construct_map_0_0(&check_hlds__delay_partial_inst__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_3));
    }
#line 889 "check_hlds.delay_partial_inst.c"
    *check_hlds__delay_partial_inst__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_partial_inst__conv0_HeadVar__1_1));
#line 891 "check_hlds.delay_partial_inst.c"
  }
#line 893 "check_hlds.delay_partial_inst.c"
}

#line 896 "check_hlds.delay_partial_inst.c"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0_10001(
#line 899 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 901 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2)
#line 903 "check_hlds.delay_partial_inst.c"
{
#line 905 "check_hlds.delay_partial_inst.c"
  {
#line 907 "check_hlds.delay_partial_inst.c"
    MR_bool check_hlds__delay_partial_inst__succeeded;

#line 910 "check_hlds.delay_partial_inst.c"
    {
#line 912 "check_hlds.delay_partial_inst.c"
      check_hlds__delay_partial_inst__succeeded = check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0(((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_1), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2));
    }
#line 915 "check_hlds.delay_partial_inst.c"
    return check_hlds__delay_partial_inst__succeeded;
#line 917 "check_hlds.delay_partial_inst.c"
  }
#line 919 "check_hlds.delay_partial_inst.c"
}

#line 922 "check_hlds.delay_partial_inst.c"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0_10001(
#line 925 "check_hlds.delay_partial_inst.c"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_1,
#line 927 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 929 "check_hlds.delay_partial_inst.c"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3)
#line 931 "check_hlds.delay_partial_inst.c"
{
#line 933 "check_hlds.delay_partial_inst.c"
  {
#line 935 "check_hlds.delay_partial_inst.c"
    MR_Word check_hlds__delay_partial_inst__conv0_HeadVar__1_1;

#line 938 "check_hlds.delay_partial_inst.c"
    {
#line 940 "check_hlds.delay_partial_inst.c"
      check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0(&check_hlds__delay_partial_inst__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_3));
    }
#line 943 "check_hlds.delay_partial_inst.c"
    *check_hlds__delay_partial_inst__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_partial_inst__conv0_HeadVar__1_1));
#line 945 "check_hlds.delay_partial_inst.c"
  }
#line 947 "check_hlds.delay_partial_inst.c"
}

#line 147 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____delay_partial_inst_info_0_0(
#line 147 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__1_1,
#line 147 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 147 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__3_3)
#line 147 "delay_partial_inst.m"
{
#line 147 "delay_partial_inst.m"
  {
#line 147 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 147 "delay_partial_inst.m"
    MR_Integer check_hlds__delay_partial_inst__CastX_15 = (MR_Integer) check_hlds__delay_partial_inst__HeadVar__2_2;
#line 147 "delay_partial_inst.m"
    MR_Integer check_hlds__delay_partial_inst__CastY_16 = (MR_Integer) check_hlds__delay_partial_inst__HeadVar__3_3;

#line 147 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__succeeded = (check_hlds__delay_partial_inst__CastX_15 == check_hlds__delay_partial_inst__CastY_16);
#line 147 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 974 "check_hlds.delay_partial_inst.c"
      *check_hlds__delay_partial_inst__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "delay_partial_inst.m"
    else
#line 147 "delay_partial_inst.m"
      {
#line 147 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 0)));
#line 147 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 1)));
#line 147 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 2)));
#line 147 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 3)));
#line 147 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__3_3, (MR_Integer) 0)));
#line 147 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__3_3, (MR_Integer) 1)));
#line 147 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__3_3, (MR_Integer) 2)));
#line 147 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__3_3, (MR_Integer) 3)));
#line 147 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_12_12;

#line 147 "delay_partial_inst.m"
        {
#line 147 "delay_partial_inst.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__delay_partial_inst__V_12_12, check_hlds__delay_partial_inst__V_4_4, check_hlds__delay_partial_inst__V_8_8);
        }
#line 1004 "check_hlds.delay_partial_inst.c"
        check_hlds__delay_partial_inst__succeeded = (check_hlds__delay_partial_inst__V_12_12 == (MR_Integer) 0);
#line 147 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__succeeded = !(check_hlds__delay_partial_inst__succeeded);
#line 147 "delay_partial_inst.m"
        if (check_hlds__delay_partial_inst__succeeded)
#line 147 "delay_partial_inst.m"
          *check_hlds__delay_partial_inst__HeadVar__1_1 = check_hlds__delay_partial_inst__V_12_12;
#line 147 "delay_partial_inst.m"
        else
#line 147 "delay_partial_inst.m"
          {
#line 147 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__V_13_13;

#line 147 "delay_partial_inst.m"
            {
#line 147 "delay_partial_inst.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[2], &check_hlds__delay_partial_inst__V_13_13, ((MR_Box) (check_hlds__delay_partial_inst__V_5_5)), ((MR_Box) (check_hlds__delay_partial_inst__V_9_9)));
            }
#line 1024 "check_hlds.delay_partial_inst.c"
            check_hlds__delay_partial_inst__succeeded = (check_hlds__delay_partial_inst__V_13_13 == (MR_Integer) 0);
#line 147 "delay_partial_inst.m"
            check_hlds__delay_partial_inst__succeeded = !(check_hlds__delay_partial_inst__succeeded);
#line 147 "delay_partial_inst.m"
            if (check_hlds__delay_partial_inst__succeeded)
#line 147 "delay_partial_inst.m"
              *check_hlds__delay_partial_inst__HeadVar__1_1 = check_hlds__delay_partial_inst__V_13_13;
#line 147 "delay_partial_inst.m"
            else
#line 147 "delay_partial_inst.m"
              {
#line 147 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__V_14_14;

#line 147 "delay_partial_inst.m"
                {
#line 147 "delay_partial_inst.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &check_hlds__delay_partial_inst__V_14_14, ((MR_Box) (check_hlds__delay_partial_inst__V_6_6)), ((MR_Box) (check_hlds__delay_partial_inst__V_10_10)));
                }
#line 1044 "check_hlds.delay_partial_inst.c"
                check_hlds__delay_partial_inst__succeeded = (check_hlds__delay_partial_inst__V_14_14 == (MR_Integer) 0);
#line 147 "delay_partial_inst.m"
                check_hlds__delay_partial_inst__succeeded = !(check_hlds__delay_partial_inst__succeeded);
#line 147 "delay_partial_inst.m"
                if (check_hlds__delay_partial_inst__succeeded)
#line 147 "delay_partial_inst.m"
                  *check_hlds__delay_partial_inst__HeadVar__1_1 = check_hlds__delay_partial_inst__V_14_14;
#line 147 "delay_partial_inst.m"
                else
#line 147 "delay_partial_inst.m"
                  {
#line 147 "delay_partial_inst.m"
                    MR_Integer check_hlds__delay_partial_inst__V_21_21 = (MR_Integer) check_hlds__delay_partial_inst__V_7_7;
#line 147 "delay_partial_inst.m"
                    MR_Integer check_hlds__delay_partial_inst__V_22_22 = (MR_Integer) check_hlds__delay_partial_inst__V_11_11;

#line 147 "delay_partial_inst.m"
                    {
#line 147 "delay_partial_inst.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__delay_partial_inst__HeadVar__1_1, check_hlds__delay_partial_inst__V_21_21, check_hlds__delay_partial_inst__V_22_22);
#line 147 "delay_partial_inst.m"
                      return;
                    }
#line 147 "delay_partial_inst.m"
                  }
#line 147 "delay_partial_inst.m"
              }
#line 147 "delay_partial_inst.m"
          }
#line 147 "delay_partial_inst.m"
      }
#line 147 "delay_partial_inst.m"
  }
#line 147 "delay_partial_inst.m"
}

#line 147 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____delay_partial_inst_info_0_0(
#line 147 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__1_1,
#line 147 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2)
#line 147 "delay_partial_inst.m"
{
#line 147 "delay_partial_inst.m"
  {
#line 147 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 147 "delay_partial_inst.m"
    MR_Integer check_hlds__delay_partial_inst__CastX_11 = (MR_Integer) check_hlds__delay_partial_inst__HeadVar__1_1;
#line 147 "delay_partial_inst.m"
    MR_Integer check_hlds__delay_partial_inst__CastY_12 = (MR_Integer) check_hlds__delay_partial_inst__HeadVar__2_2;

#line 147 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__succeeded = (check_hlds__delay_partial_inst__CastX_11 == check_hlds__delay_partial_inst__CastY_12);
#line 147 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 147 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__succeeded = MR_TRUE;
#line 147 "delay_partial_inst.m"
    else
#line 147 "delay_partial_inst.m"
      {
#line 147 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__TypeInfo_14_14;
#line 147 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__TypeCtorInfo_15_15;
#line 147 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__1_1, (MR_Integer) 0)));
#line 147 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__1_1, (MR_Integer) 1)));
#line 147 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__1_1, (MR_Integer) 2)));
#line 147 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__1_1, (MR_Integer) 3)));
#line 147 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 0)));
#line 147 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 1)));
#line 147 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 2)));
#line 147 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 3)));

#line 1130 "check_hlds.delay_partial_inst.c"
        {
#line 1132 "check_hlds.delay_partial_inst.c"
          check_hlds__delay_partial_inst__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__delay_partial_inst__V_3_3, check_hlds__delay_partial_inst__V_7_7);
        }
#line 147 "delay_partial_inst.m"
        if (check_hlds__delay_partial_inst__succeeded)
#line 147 "delay_partial_inst.m"
          {
#line 1139 "check_hlds.delay_partial_inst.c"
            check_hlds__delay_partial_inst__TypeInfo_14_14 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[2];
#line 1141 "check_hlds.delay_partial_inst.c"
            {
#line 1143 "check_hlds.delay_partial_inst.c"
              check_hlds__delay_partial_inst__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_partial_inst__TypeInfo_14_14, ((MR_Box) (check_hlds__delay_partial_inst__V_4_4)), ((MR_Box) (check_hlds__delay_partial_inst__V_8_8)));
            }
#line 147 "delay_partial_inst.m"
            if (check_hlds__delay_partial_inst__succeeded)
#line 147 "delay_partial_inst.m"
              {
#line 1150 "check_hlds.delay_partial_inst.c"
                check_hlds__delay_partial_inst__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 1152 "check_hlds.delay_partial_inst.c"
                {
#line 1154 "check_hlds.delay_partial_inst.c"
                  check_hlds__delay_partial_inst__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_partial_inst__TypeCtorInfo_15_15, ((MR_Box) (check_hlds__delay_partial_inst__V_5_5)), ((MR_Box) (check_hlds__delay_partial_inst__V_9_9)));
                }
#line 147 "delay_partial_inst.m"
                if (check_hlds__delay_partial_inst__succeeded)
#line 1159 "check_hlds.delay_partial_inst.c"
                  check_hlds__delay_partial_inst__succeeded = (check_hlds__delay_partial_inst__V_6_6 == check_hlds__delay_partial_inst__V_10_10);
#line 147 "delay_partial_inst.m"
              }
#line 147 "delay_partial_inst.m"
          }
#line 147 "delay_partial_inst.m"
      }
#line 147 "delay_partial_inst.m"
    return check_hlds__delay_partial_inst__succeeded;
#line 147 "delay_partial_inst.m"
  }
#line 147 "delay_partial_inst.m"
}

#line 178 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____construct_map_0_0(
#line 178 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__1_1,
#line 178 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 178 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__3_3)
#line 178 "delay_partial_inst.m"
{
#line 178 "delay_partial_inst.m"
  {
#line 178 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 178 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar1_4 = check_hlds__delay_partial_inst__HeadVar__2_2;
#line 178 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar2_5 = check_hlds__delay_partial_inst__HeadVar__3_3;

#line 178 "delay_partial_inst.m"
    {
#line 178 "delay_partial_inst.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1], check_hlds__delay_partial_inst__HeadVar__1_1, ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar2_5)));
#line 178 "delay_partial_inst.m"
      return;
    }
#line 178 "delay_partial_inst.m"
  }
#line 178 "delay_partial_inst.m"
}

#line 178 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____construct_map_0_0(
#line 178 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__1_1,
#line 178 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2)
#line 178 "delay_partial_inst.m"
{
#line 178 "delay_partial_inst.m"
  {
#line 178 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 178 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar1_3 = check_hlds__delay_partial_inst__HeadVar__1_1;
#line 178 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar2_4 = check_hlds__delay_partial_inst__HeadVar__2_2;

#line 178 "delay_partial_inst.m"
    {
#line 178 "delay_partial_inst.m"
      return check_hlds__delay_partial_inst__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[1], ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar2_4)));
    }
#line 178 "delay_partial_inst.m"
    return check_hlds__delay_partial_inst__succeeded;
#line 178 "delay_partial_inst.m"
  }
#line 178 "delay_partial_inst.m"
}

#line 180 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst____Compare____canon_vars_map_0_0(
#line 180 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__1_1,
#line 180 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 180 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__3_3)
#line 180 "delay_partial_inst.m"
{
#line 180 "delay_partial_inst.m"
  {
#line 180 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 180 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar1_4 = check_hlds__delay_partial_inst__HeadVar__2_2;
#line 180 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar2_5 = check_hlds__delay_partial_inst__HeadVar__3_3;

#line 180 "delay_partial_inst.m"
    {
#line 180 "delay_partial_inst.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[0], check_hlds__delay_partial_inst__HeadVar__1_1, ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar2_5)));
#line 180 "delay_partial_inst.m"
      return;
    }
#line 180 "delay_partial_inst.m"
  }
#line 180 "delay_partial_inst.m"
}

#line 180 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst____Unify____canon_vars_map_0_0(
#line 180 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__1_1,
#line 180 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2)
#line 180 "delay_partial_inst.m"
{
#line 180 "delay_partial_inst.m"
  {
#line 180 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 180 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar1_3 = check_hlds__delay_partial_inst__HeadVar__1_1;
#line 180 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Cast_HeadVar2_4 = check_hlds__delay_partial_inst__HeadVar__2_2;

#line 180 "delay_partial_inst.m"
    {
#line 180 "delay_partial_inst.m"
      return check_hlds__delay_partial_inst__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[0], ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__delay_partial_inst__Cast_HeadVar2_4)));
    }
#line 180 "delay_partial_inst.m"
    return check_hlds__delay_partial_inst__succeeded;
#line 180 "delay_partial_inst.m"
  }
#line 180 "delay_partial_inst.m"
}

#line 569 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_p_0(
#line 569 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__InstMap0_1,
#line 569 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 569 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__3_3,
#line 569 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4,
#line 569 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5,
#line 569 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6,
#line 569 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7)
#line 569 "delay_partial_inst.m"
{
#line 573 "delay_partial_inst.m"
  {
#line 573 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;

#line 573 "delay_partial_inst.m"
    if ((check_hlds__delay_partial_inst__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 573 "delay_partial_inst.m"
      {
#line 573 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 573 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6;
#line 573 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4;
#line 573 "delay_partial_inst.m"
      }
#line 573 "delay_partial_inst.m"
    else
#line 575 "delay_partial_inst.m"
      {
#line 575 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Case0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 0)));
#line 575 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Cases0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 1)));
#line 575 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Case_18;
#line 575 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Cases_19;
#line 575 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__MainConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Case0_16, (MR_Integer) 0)));
#line 575 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__OtherConsIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Case0_16, (MR_Integer) 1)));
#line 575 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Case0_16, (MR_Integer) 2)));
#line 575 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Goal_25;
#line 575 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_30_30;
#line 575 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_31_31;

#line 578 "delay_partial_inst.m"
        {
#line 578 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_1, check_hlds__delay_partial_inst__Goal0_24, &check_hlds__delay_partial_inst__Goal_25, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4, &check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_30_30, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6, &check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_31_31);
        }
#line 580 "delay_partial_inst.m"
        {
#line 580 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__Case_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 580 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Case_18, 0) = ((MR_Box) (check_hlds__delay_partial_inst__MainConsId_22));
#line 580 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Case_18, 1) = ((MR_Box) (check_hlds__delay_partial_inst__OtherConsIds_23));
#line 580 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Case_18, 2) = ((MR_Box) (check_hlds__delay_partial_inst__Goal_25));
#line 580 "delay_partial_inst.m"
        }
#line 581 "delay_partial_inst.m"
        {
#line 581 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_p_0(check_hlds__delay_partial_inst__InstMap0_1, check_hlds__delay_partial_inst__Cases0_17, &check_hlds__delay_partial_inst__Cases_19, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_30_30, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_31_31, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7);
        }
#line 575 "delay_partial_inst.m"
        {
#line 575 "delay_partial_inst.m"
          MR_Word base;
#line 575 "delay_partial_inst.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "delay_partial_inst.m"
          *check_hlds__delay_partial_inst__HeadVar__3_3 = base;
#line 575 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__Case_18));
#line 575 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__Cases_19));
#line 575 "delay_partial_inst.m"
        }
#line 575 "delay_partial_inst.m"
      }
#line 573 "delay_partial_inst.m"
  }
#line 569 "delay_partial_inst.m"
}

#line 541 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goals_7_p_0(
#line 541 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__InstMap0_1,
#line 541 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 541 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__3_3,
#line 541 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4,
#line 541 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5,
#line 541 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6,
#line 541 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7)
#line 541 "delay_partial_inst.m"
{
#line 546 "delay_partial_inst.m"
  {
#line 546 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;

#line 546 "delay_partial_inst.m"
    if ((check_hlds__delay_partial_inst__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 546 "delay_partial_inst.m"
      {
#line 546 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 546 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6;
#line 546 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4;
#line 546 "delay_partial_inst.m"
      }
#line 546 "delay_partial_inst.m"
    else
#line 548 "delay_partial_inst.m"
      {
#line 548 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 0)));
#line 548 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 1)));
#line 548 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Goal_18;
#line 548 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Goals_19;
#line 548 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_26_26;
#line 548 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_27_27;

#line 564 "delay_partial_inst.m"
        {
#line 564 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_1, check_hlds__delay_partial_inst__Goal0_16, &check_hlds__delay_partial_inst__Goal_18, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4, &check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_26_26, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6, &check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_27_27);
        }
#line 566 "delay_partial_inst.m"
        {
#line 566 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__delay_partial_inst_in_goals_7_p_0(check_hlds__delay_partial_inst__InstMap0_1, check_hlds__delay_partial_inst__Goals0_17, &check_hlds__delay_partial_inst__Goals_19, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_26_26, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_27_27, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7);
        }
#line 548 "delay_partial_inst.m"
        {
#line 548 "delay_partial_inst.m"
          MR_Word base;
#line 548 "delay_partial_inst.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "delay_partial_inst.m"
          *check_hlds__delay_partial_inst__HeadVar__3_3 = base;
#line 548 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__Goal_18));
#line 548 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__Goals_19));
#line 548 "delay_partial_inst.m"
        }
#line 548 "delay_partial_inst.m"
      }
#line 546 "delay_partial_inst.m"
  }
#line 541 "delay_partial_inst.m"
}

#line 525 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_p_0(
#line 525 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__InstMap0_1,
#line 525 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__2_2,
#line 525 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__3_3,
#line 525 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4,
#line 525 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5,
#line 525 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6,
#line 525 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7)
#line 525 "delay_partial_inst.m"
{
#line 530 "delay_partial_inst.m"
  {
#line 530 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;

#line 530 "delay_partial_inst.m"
    if ((check_hlds__delay_partial_inst__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 530 "delay_partial_inst.m"
      {
#line 530 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 530 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6;
#line 530 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4;
#line 530 "delay_partial_inst.m"
      }
#line 530 "delay_partial_inst.m"
    else
#line 532 "delay_partial_inst.m"
      {
#line 532 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 0)));
#line 532 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__2_2, (MR_Integer) 1)));
#line 532 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Goal1_21;
#line 532 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__InstMap1_22;
#line 532 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Goals1_23;
#line 532 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__Goal1List_24;
#line 532 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_29_29;
#line 532 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30;

#line 533 "delay_partial_inst.m"
        {
#line 533 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_1, check_hlds__delay_partial_inst__Goal0_16, &check_hlds__delay_partial_inst__Goal1_21, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_4, &check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_29_29, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_6, &check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30);
        }
#line 535 "delay_partial_inst.m"
        {
#line 535 "delay_partial_inst.m"
          hlds__goal_util__update_instmap_3_p_0(check_hlds__delay_partial_inst__Goal0_16, check_hlds__delay_partial_inst__InstMap0_1, &check_hlds__delay_partial_inst__InstMap1_22);
        }
#line 536 "delay_partial_inst.m"
        {
#line 536 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_p_0(check_hlds__delay_partial_inst__InstMap1_22, check_hlds__delay_partial_inst__Goals0_17, &check_hlds__delay_partial_inst__Goals1_23, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_29_29, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_5, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_30_30, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_7);
        }
#line 538 "delay_partial_inst.m"
        {
#line 538 "delay_partial_inst.m"
          hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__delay_partial_inst__Goal1_21, &check_hlds__delay_partial_inst__Goal1List_24);
        }
#line 539 "delay_partial_inst.m"
        {
#line 539 "delay_partial_inst.m"
          *check_hlds__delay_partial_inst__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__delay_partial_inst__Goal1List_24, check_hlds__delay_partial_inst__Goals1_23);
        }
#line 532 "delay_partial_inst.m"
      }
#line 530 "delay_partial_inst.m"
  }
#line 525 "delay_partial_inst.m"
}

#line 513 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_f_0(
#line 513 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__ModuleInfo_7,
#line 513 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Context_8,
#line 513 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__LhsVar_9,
#line 513 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__RhsVar_10,
#line 513 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__ArgMode_11,
#line 513 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__Goal_12)
#line 513 "delay_partial_inst.m"
{
#line 517 "delay_partial_inst.m"
  {
#line 517 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 517 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Inst_15;
#line 517 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__ArgMode_11, (MR_Integer) 1)));
#line 517 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_19_19;
#line 517 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_20_20;
#line 517 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_21_21;
#line 517 "delay_partial_inst.m"
    MR_String check_hlds__delay_partial_inst__V_22_22;
#line 518 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__ArgMode_11, (MR_Integer) 0)));
#line 518 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_16_16;

#line 518 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__Inst_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_18_18, (MR_Integer) 0)));
#line 518 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_18_18, (MR_Integer) 1)));
#line 519 "delay_partial_inst.m"
    {
#line 519 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__delay_partial_inst__ModuleInfo_7, check_hlds__delay_partial_inst__Inst_15);
    }
#line 517 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 517 "delay_partial_inst.m"
      {
#line 521 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__V_22_22 = (MR_String) "delay_partial_inst";
#line 520 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 520 "delay_partial_inst.m"
        {
#line 520 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 520 "delay_partial_inst.m"
          MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_19_19, 0) = ((MR_Box) (check_hlds__delay_partial_inst__RhsVar_10));
#line 520 "delay_partial_inst.m"
        }
#line 520 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__delay_partial_inst_scalar_common_4[0]);
#line 520 "delay_partial_inst.m"
        {
#line 520 "delay_partial_inst.m"
          hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__delay_partial_inst__LhsVar_9, check_hlds__delay_partial_inst__V_19_19, check_hlds__delay_partial_inst__Context_8, check_hlds__delay_partial_inst__V_20_20, check_hlds__delay_partial_inst__V_21_21, check_hlds__delay_partial_inst__Goal_12);
        }
#line 520 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__succeeded = MR_TRUE;
#line 517 "delay_partial_inst.m"
      }
#line 517 "delay_partial_inst.m"
    return check_hlds__delay_partial_inst__succeeded;
#line 517 "delay_partial_inst.m"
  }
#line 513 "delay_partial_inst.m"
}

#line 489 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst__get_sole_cons_id_and_canon_vars_4_p_0(
#line 489 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__ConstructMap_5,
#line 489 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Var_6,
#line 489 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__ConsId_7,
#line 489 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__CanonVars_8)
#line 489 "delay_partial_inst.m"
{
#line 492 "delay_partial_inst.m"
  {
#line 492 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 492 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__TypeCtorInfo_22_22;
#line 492 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__TypeInfo_23_23;
#line 492 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__CanonVarsMap_9;
#line 492 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__List_10;
#line 492 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Rest_11;
#line 492 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_24_24;
#line 493 "delay_partial_inst.m"
    MR_Box check_hlds__delay_partial_inst__conv0_CanonVarsMap_9;

#line 493 "delay_partial_inst.m"
    {
#line 493 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[0], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[0], check_hlds__delay_partial_inst__ConstructMap_5, ((MR_Box) (check_hlds__delay_partial_inst__Var_6)), &check_hlds__delay_partial_inst__conv0_CanonVarsMap_9);
    }
#line 493 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 493 "delay_partial_inst.m"
      {
#line 493 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__CanonVarsMap_9 = ((MR_Word) check_hlds__delay_partial_inst__conv0_CanonVarsMap_9);
#line 493 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__succeeded = MR_TRUE;
#line 493 "delay_partial_inst.m"
      }
#line 492 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 492 "delay_partial_inst.m"
      {
#line 1707 "check_hlds.delay_partial_inst.c"
        check_hlds__delay_partial_inst__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 1709 "check_hlds.delay_partial_inst.c"
        check_hlds__delay_partial_inst__TypeInfo_23_23 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1];
#line 494 "delay_partial_inst.m"
        {
#line 494 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__List_10 = mercury__map__to_assoc_list_1_f_0(check_hlds__delay_partial_inst__TypeCtorInfo_22_22, check_hlds__delay_partial_inst__TypeInfo_23_23, check_hlds__delay_partial_inst__CanonVarsMap_9);
        }
#line 1716 "check_hlds.delay_partial_inst.c"
        check_hlds__delay_partial_inst__succeeded = ((MR_tag((MR_Word) check_hlds__delay_partial_inst__List_10)) == (MR_mktag((MR_Integer) 1)));
#line 1718 "check_hlds.delay_partial_inst.c"
        if (check_hlds__delay_partial_inst__succeeded)
#line 1720 "check_hlds.delay_partial_inst.c"
          {
#line 1722 "check_hlds.delay_partial_inst.c"
            check_hlds__delay_partial_inst__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__List_10, (MR_Integer) 0)));
#line 1724 "check_hlds.delay_partial_inst.c"
            check_hlds__delay_partial_inst__Rest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__List_10, (MR_Integer) 1)));
#line 499 "delay_partial_inst.m"
            *check_hlds__delay_partial_inst__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_24_24, (MR_Integer) 0)));
#line 499 "delay_partial_inst.m"
            *check_hlds__delay_partial_inst__CanonVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_24_24, (MR_Integer) 1)));
#line 502 "delay_partial_inst.m"
            if ((check_hlds__delay_partial_inst__Rest_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 501 "delay_partial_inst.m"
              {
#line 501 "delay_partial_inst.m"
              }
#line 502 "delay_partial_inst.m"
            else
#line 503 "delay_partial_inst.m"
              {
#line 507 "delay_partial_inst.m"
                {
#line 507 "delay_partial_inst.m"
                  mercury__require__sorry_3_p_0((MR_String) "check_hlds.delay_partial_inst", (MR_String) "predicate \140check_hlds.delay_partial_inst.get_sole_cons_id_and_canon_vars\'/4", (MR_String) "delaying partial instantiations when variable could be bound to multiple functors");
                }
#line 503 "delay_partial_inst.m"
              }
#line 502 "delay_partial_inst.m"
            check_hlds__delay_partial_inst__succeeded = MR_TRUE;
#line 1749 "check_hlds.delay_partial_inst.c"
          }
#line 492 "delay_partial_inst.m"
      }
#line 492 "delay_partial_inst.m"
    return check_hlds__delay_partial_inst__succeeded;
#line 492 "delay_partial_inst.m"
  }
#line 489 "delay_partial_inst.m"
}

#line 477 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__add_to_construct_map_5_p_0(
#line 477 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Var_6,
#line 477 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__ConsId_7,
#line 477 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__CanonVars_8,
#line 477 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_13,
#line 477 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_14)
#line 477 "delay_partial_inst.m"
{
#line 480 "delay_partial_inst.m"
  {
#line 480 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 480 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__ConsIdMap1_11;
#line 480 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__ConsIdMap_12;
#line 483 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__ConsIdMap0_10;
#line 481 "delay_partial_inst.m"
    MR_Box check_hlds__delay_partial_inst__conv0_ConsIdMap0_10;

#line 481 "delay_partial_inst.m"
    {
#line 481 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[0], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[0], check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_13, ((MR_Box) (check_hlds__delay_partial_inst__Var_6)), &check_hlds__delay_partial_inst__conv0_ConsIdMap0_10);
    }
#line 481 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 481 "delay_partial_inst.m"
      {
#line 481 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__ConsIdMap0_10 = ((MR_Word) check_hlds__delay_partial_inst__conv0_ConsIdMap0_10);
#line 481 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__succeeded = MR_TRUE;
#line 481 "delay_partial_inst.m"
      }
#line 483 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 482 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__ConsIdMap1_11 = check_hlds__delay_partial_inst__ConsIdMap0_10;
#line 483 "delay_partial_inst.m"
    else
#line 484 "delay_partial_inst.m"
      {
#line 484 "delay_partial_inst.m"
        {
#line 484 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__ConsIdMap1_11 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1]);
        }
#line 484 "delay_partial_inst.m"
      }
#line 486 "delay_partial_inst.m"
    {
#line 486 "delay_partial_inst.m"
      mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1], ((MR_Box) (check_hlds__delay_partial_inst__ConsId_7)), ((MR_Box) (check_hlds__delay_partial_inst__CanonVars_8)), check_hlds__delay_partial_inst__ConsIdMap1_11, &check_hlds__delay_partial_inst__ConsIdMap_12);
    }
#line 487 "delay_partial_inst.m"
    {
#line 487 "delay_partial_inst.m"
      mercury__map__set_4_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[0], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[0], ((MR_Box) (check_hlds__delay_partial_inst__Var_6)), ((MR_Box) (check_hlds__delay_partial_inst__ConsIdMap_12)), check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_13, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_14);
#line 487 "delay_partial_inst.m"
      return;
    }
#line 480 "delay_partial_inst.m"
  }
#line 477 "delay_partial_inst.m"
}

#line 465 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__create_canonical_variables_4_p_0(
#line 465 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__OrigVars_5,
#line 465 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__CanonVars_6,
#line 465 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_13,
#line 465 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_14)
#line 465 "delay_partial_inst.m"
{
#line 468 "delay_partial_inst.m"
  {
#line 468 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 468 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__TypeInfo_35_35 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[0];
#line 468 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_13, (MR_Integer) 1)));
#line 468 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__VarTypes0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_13, (MR_Integer) 2)));
#line 468 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__VarSet_10;
#line 468 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__VarTypes_11;
#line 468 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Renaming_12;
#line 468 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_17_17;
#line 468 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_27_27;
#line 468 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_30_30;
#line 469 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_13, (MR_Integer) 0)));
#line 469 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_13, (MR_Integer) 3)));
#line 474 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_28_28;
#line 474 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_29_29;

#line 471 "delay_partial_inst.m"
    {
#line 471 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__V_17_17 = mercury__map__init_0_f_0(check_hlds__delay_partial_inst__TypeInfo_35_35, check_hlds__delay_partial_inst__TypeInfo_35_35);
    }
#line 471 "delay_partial_inst.m"
    {
#line 471 "delay_partial_inst.m"
      hlds__goal_util__clone_variables_9_p_0(check_hlds__delay_partial_inst__OrigVars_5, check_hlds__delay_partial_inst__VarSet0_8, check_hlds__delay_partial_inst__VarTypes0_9, check_hlds__delay_partial_inst__VarSet0_8, &check_hlds__delay_partial_inst__VarSet_10, check_hlds__delay_partial_inst__VarTypes0_9, &check_hlds__delay_partial_inst__VarTypes_11, check_hlds__delay_partial_inst__V_17_17, &check_hlds__delay_partial_inst__Renaming_12);
    }
#line 473 "delay_partial_inst.m"
    {
#line 473 "delay_partial_inst.m"
      parse_tree__prog_data__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 0, check_hlds__delay_partial_inst__Renaming_12, check_hlds__delay_partial_inst__OrigVars_5, check_hlds__delay_partial_inst__CanonVars_6);
    }
#line 474 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_13, (MR_Integer) 0)));
#line 474 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_13, (MR_Integer) 1)));
#line 474 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_13, (MR_Integer) 2)));
#line 474 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_13, (MR_Integer) 3)));
#line 475 "delay_partial_inst.m"
    {
#line 475 "delay_partial_inst.m"
      MR_Word base;
#line 475 "delay_partial_inst.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 475 "delay_partial_inst.m"
      *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_14 = base;
#line 475 "delay_partial_inst.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_27_27));
#line 475 "delay_partial_inst.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__VarSet_10));
#line 475 "delay_partial_inst.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_partial_inst__VarTypes_11));
#line 475 "delay_partial_inst.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_partial_inst__V_30_30));
#line 475 "delay_partial_inst.m"
    }
#line 468 "delay_partial_inst.m"
  }
#line 465 "delay_partial_inst.m"
}

#line 370 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_6(
#line 370 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__closure_arg,
#line 370 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 370 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 370 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3,
#line 370 "delay_partial_inst.m"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_4)
#line 370 "delay_partial_inst.m"
{
#line 370 "delay_partial_inst.m"
  {
#line 370 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 370 "delay_partial_inst.m"
    MR_Box check_hlds__delay_partial_inst__closure = check_hlds__delay_partial_inst__closure_arg;
#line 370 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__conv6_Goal_12;

#line 370 "delay_partial_inst.m"
    {
#line 370 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__succeeded = check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_1), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_3), &check_hlds__delay_partial_inst__conv6_Goal_12);
    }
#line 370 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 370 "delay_partial_inst.m"
      {
#line 370 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__wrapper_arg_4 = ((MR_Box) (check_hlds__delay_partial_inst__conv6_Goal_12));
#line 370 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__succeeded = MR_TRUE;
#line 370 "delay_partial_inst.m"
      }
#line 370 "delay_partial_inst.m"
    return check_hlds__delay_partial_inst__succeeded;
#line 370 "delay_partial_inst.m"
  }
#line 370 "delay_partial_inst.m"
}

#line 329 "delay_partial_inst.m"
static MR_bool MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_5(
#line 329 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__closure_arg,
#line 329 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 329 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 329 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_3,
#line 329 "delay_partial_inst.m"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_4)
#line 329 "delay_partial_inst.m"
{
#line 329 "delay_partial_inst.m"
  {
#line 329 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 329 "delay_partial_inst.m"
    MR_Box check_hlds__delay_partial_inst__closure = check_hlds__delay_partial_inst__closure_arg;
#line 329 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__conv3_Goal_12;

#line 329 "delay_partial_inst.m"
    {
#line 329 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__succeeded = check_hlds__delay_partial_inst__maybe_unify_var_with_ground_var_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_1), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_3), &check_hlds__delay_partial_inst__conv3_Goal_12);
    }
#line 329 "delay_partial_inst.m"
    if (check_hlds__delay_partial_inst__succeeded)
#line 329 "delay_partial_inst.m"
      {
#line 329 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__wrapper_arg_4 = ((MR_Box) (check_hlds__delay_partial_inst__conv3_Goal_12));
#line 329 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__succeeded = MR_TRUE;
#line 329 "delay_partial_inst.m"
      }
#line 329 "delay_partial_inst.m"
    return check_hlds__delay_partial_inst__succeeded;
#line 329 "delay_partial_inst.m"
  }
#line 329 "delay_partial_inst.m"
}

#line 310 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_1(
#line 310 "delay_partial_inst.m"
  void * check_hlds__delay_partial_inst__env_ptr_arg)
#line 310 "delay_partial_inst.m"
{
#line 310 "delay_partial_inst.m"
  {
#line 310 "delay_partial_inst.m"
    struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s * check_hlds__delay_partial_inst__env_ptr = (struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s *) check_hlds__delay_partial_inst__env_ptr_arg;

#line 310 "delay_partial_inst.m"
    MR_builtin_longjmp((check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__commit_0, 1);
#line 310 "delay_partial_inst.m"
  }
#line 310 "delay_partial_inst.m"
}

#line 310 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_3(
#line 310 "delay_partial_inst.m"
  void * check_hlds__delay_partial_inst__env_ptr_arg)
#line 310 "delay_partial_inst.m"
{
#line 310 "delay_partial_inst.m"
  {
#line 310 "delay_partial_inst.m"
    struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s * check_hlds__delay_partial_inst__env_ptr = (struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s *) check_hlds__delay_partial_inst__env_ptr_arg;

#line 310 "delay_partial_inst.m"
    (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__V_156_156 = ((MR_Word) (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__conv0_V_156_156);
#line 310 "delay_partial_inst.m"
    {
#line 310 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_2(check_hlds__delay_partial_inst__env_ptr);
#line 310 "delay_partial_inst.m"
      return;
    }
#line 310 "delay_partial_inst.m"
  }
#line 310 "delay_partial_inst.m"
}

#line 310 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_2(
#line 310 "delay_partial_inst.m"
  void * check_hlds__delay_partial_inst__env_ptr_arg)
#line 310 "delay_partial_inst.m"
{
#line 310 "delay_partial_inst.m"
  {
#line 310 "delay_partial_inst.m"
    struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s * check_hlds__delay_partial_inst__env_ptr = (struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s *) check_hlds__delay_partial_inst__env_ptr_arg;

#line 310 "delay_partial_inst.m"
    {
#line 310 "delay_partial_inst.m"
      MR_Word check_hlds__delay_partial_inst__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__V_156_156, (MR_Integer) 0)));
#line 310 "delay_partial_inst.m"
      MR_Word check_hlds__delay_partial_inst__V_57_57;

#line 310 "delay_partial_inst.m"
      (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__V_156_156, (MR_Integer) 1)));
#line 310 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__V_157_157, (MR_Integer) 0)));
#line 310 "delay_partial_inst.m"
      (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__RhsAfter_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__V_157_157, (MR_Integer) 1)));
#line 311 "delay_partial_inst.m"
      {
#line 311 "delay_partial_inst.m"
        (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = check_hlds__inst_match__inst_is_free_2_p_0((check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ModuleInfo_54, (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__RhsAfter_187);
      }
#line 311 "delay_partial_inst.m"
      if ((check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
#line 311 "delay_partial_inst.m"
        {
#line 311 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_1(check_hlds__delay_partial_inst__env_ptr);
#line 311 "delay_partial_inst.m"
          return;
        }
#line 310 "delay_partial_inst.m"
    }
#line 310 "delay_partial_inst.m"
  }
#line 310 "delay_partial_inst.m"
}

#line 310 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_4(
#line 310 "delay_partial_inst.m"
  void * check_hlds__delay_partial_inst__env_ptr_arg)
#line 310 "delay_partial_inst.m"
{
#line 310 "delay_partial_inst.m"
  {
#line 310 "delay_partial_inst.m"
    struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s * check_hlds__delay_partial_inst__env_ptr = (struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s *) check_hlds__delay_partial_inst__env_ptr_arg;

#line 310 "delay_partial_inst.m"
    if (MR_builtin_setjmp((check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__commit_0) == 0)
#line 310 "delay_partial_inst.m"
      {
#line 310 "delay_partial_inst.m"
        {
#line 310 "delay_partial_inst.m"
          {
#line 310 "delay_partial_inst.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, &(check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__conv0_V_156_156, (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__UniModes_46, check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_3, check_hlds__delay_partial_inst__env_ptr);
          }
#line 310 "delay_partial_inst.m"
        }
#line 310 "delay_partial_inst.m"
        (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_FALSE;
#line 310 "delay_partial_inst.m"
      }
#line 310 "delay_partial_inst.m"
    else
#line 310 "delay_partial_inst.m"
      (check_hlds__delay_partial_inst__env_ptr)->check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
#line 310 "delay_partial_inst.m"
  }
#line 310 "delay_partial_inst.m"
}

#line 246 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(
#line 246 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__InstMap0_8,
#line 246 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__Goal0_9,
#line 246 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__Goal_10,
#line 246 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134,
#line 246 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_135,
#line 246 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136,
#line 246 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_137)
#line 246 "delay_partial_inst.m"
{
#line 246 "delay_partial_inst.m"
  {
#line 246 "delay_partial_inst.m"
    struct check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0_s check_hlds__delay_partial_inst__env;

#line 250 "delay_partial_inst.m"
    {
#line 250 "delay_partial_inst.m"
      MR_Word check_hlds__delay_partial_inst__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Goal0_9, (MR_Integer) 0)));
#line 250 "delay_partial_inst.m"
      MR_Word check_hlds__delay_partial_inst__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Goal0_9, (MR_Integer) 1)));

#line 257 "delay_partial_inst.m"
      if (((MR_tag((MR_Word) check_hlds__delay_partial_inst__GoalExpr0_13)) == (MR_mktag((MR_Integer) 0))))
#line 263 "delay_partial_inst.m"
        {
#line 263 "delay_partial_inst.m"
          MR_Word check_hlds__delay_partial_inst__NegGoal0_18 = (MR_Word) MR_body(((MR_Word) check_hlds__delay_partial_inst__GoalExpr0_13), (MR_Integer) 0);
#line 263 "delay_partial_inst.m"
          MR_Word check_hlds__delay_partial_inst__NegGoal_19;
#line 263 "delay_partial_inst.m"
          MR_Word check_hlds__delay_partial_inst__V_178_178;
#line 264 "delay_partial_inst.m"
          MR_Word check_hlds__delay_partial_inst__V_20_20;

#line 264 "delay_partial_inst.m"
          {
#line 264 "delay_partial_inst.m"
            check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__NegGoal0_18, &check_hlds__delay_partial_inst__NegGoal_19, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134, &check_hlds__delay_partial_inst__V_20_20, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_137);
          }
#line 266 "delay_partial_inst.m"
          check_hlds__delay_partial_inst__V_178_178 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__delay_partial_inst__NegGoal_19);
#line 266 "delay_partial_inst.m"
          {
#line 266 "delay_partial_inst.m"
            MR_Word base;
#line 266 "delay_partial_inst.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 266 "delay_partial_inst.m"
            *check_hlds__delay_partial_inst__Goal_10 = base;
#line 266 "delay_partial_inst.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_178_178));
#line 266 "delay_partial_inst.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
#line 266 "delay_partial_inst.m"
          }
#line 266 "delay_partial_inst.m"
          *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_135 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134;
#line 263 "delay_partial_inst.m"
        }
#line 257 "delay_partial_inst.m"
      else
#line 257 "delay_partial_inst.m"
        if (((MR_tag((MR_Word) check_hlds__delay_partial_inst__GoalExpr0_13)) == (MR_mktag((MR_Integer) 1))))
#line 297 "delay_partial_inst.m"
          {
#line 297 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__LHS_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 0)));
#line 297 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__RHS0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 1)));
#line 297 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__Mode_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 2)));
#line 297 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__Unify_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 3)));
#line 297 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__Context_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 4)));

#line 359 "delay_partial_inst.m"
            if (((MR_tag((MR_Word) check_hlds__delay_partial_inst__Unify_42)) == (MR_mktag((MR_Integer) 0))))
#line 299 "delay_partial_inst.m"
              {
#line 299 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__ConsId_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 1)));
#line 299 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__Args_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 2)));
#line 299 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 0)));
#line 299 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__V_47_47;
#line 299 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__V_48_48;
#line 299 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__V_49_49;
#line 308 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__V_226_226;
#line 308 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__V_227_227;
#line 308 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__V_228_228;

#line 299 "delay_partial_inst.m"
                (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__UniModes_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 3)));
#line 299 "delay_partial_inst.m"
                check_hlds__delay_partial_inst__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 4)));
#line 299 "delay_partial_inst.m"
                check_hlds__delay_partial_inst__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 5)));
#line 299 "delay_partial_inst.m"
                check_hlds__delay_partial_inst__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 6)));
#line 306 "delay_partial_inst.m"
                if (((((MR_tag((MR_Word) check_hlds__delay_partial_inst__ConsId_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__ConsId_44, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 305 "delay_partial_inst.m"
                  (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
#line 306 "delay_partial_inst.m"
                else
#line 306 "delay_partial_inst.m"
                  if (((((MR_tag((MR_Word) check_hlds__delay_partial_inst__ConsId_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__ConsId_44, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 306 "delay_partial_inst.m"
                    (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
#line 306 "delay_partial_inst.m"
                  else
#line 306 "delay_partial_inst.m"
                    (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_FALSE;
#line 307 "delay_partial_inst.m"
                if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
#line 307 "delay_partial_inst.m"
                  {
#line 308 "delay_partial_inst.m"
                    (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ModuleInfo_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136, (MR_Integer) 0)));
#line 308 "delay_partial_inst.m"
                    check_hlds__delay_partial_inst__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136, (MR_Integer) 1)));
#line 308 "delay_partial_inst.m"
                    check_hlds__delay_partial_inst__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136, (MR_Integer) 2)));
#line 308 "delay_partial_inst.m"
                    check_hlds__delay_partial_inst__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136, (MR_Integer) 3)));
#line 310 "delay_partial_inst.m"
                    {
#line 310 "delay_partial_inst.m"
                      check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_4(&check_hlds__delay_partial_inst__env);
                    }
#line 307 "delay_partial_inst.m"
                  }
#line 336 "delay_partial_inst.m"
                if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
#line 324 "delay_partial_inst.m"
                  {
#line 324 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__TypeInfo_241_241;
#line 324 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__CanonVars_60;
#line 324 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__ProgContext_61;
#line 324 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__SubUnifyGoals_62;
#line 324 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_158_158;
#line 324 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__V_160_160;
#line 321 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__CanonVars0_59;
#line 317 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__TypeCtorInfo_239_239;
#line 317 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__TypeInfo_240_240;
#line 317 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__CanonVarsMap0_58;
#line 317 "delay_partial_inst.m"
                    MR_Box check_hlds__delay_partial_inst__conv1_CanonVarsMap0_58;
#line 318 "delay_partial_inst.m"
                    MR_Box check_hlds__delay_partial_inst__conv2_CanonVars0_59;
#line 335 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__V_229_229;
#line 335 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__V_230_230;
#line 335 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__V_231_231;
#line 335 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__V_232_232;

#line 317 "delay_partial_inst.m"
                    {
#line 317 "delay_partial_inst.m"
                      (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[0], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[0], check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134, ((MR_Box) (check_hlds__delay_partial_inst__Var_188)), &check_hlds__delay_partial_inst__conv1_CanonVarsMap0_58);
                    }
#line 317 "delay_partial_inst.m"
                    if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
#line 317 "delay_partial_inst.m"
                      {
#line 317 "delay_partial_inst.m"
                        check_hlds__delay_partial_inst__CanonVarsMap0_58 = ((MR_Word) check_hlds__delay_partial_inst__conv1_CanonVarsMap0_58);
#line 317 "delay_partial_inst.m"
                        (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
#line 317 "delay_partial_inst.m"
                      }
#line 317 "delay_partial_inst.m"
                    if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
#line 317 "delay_partial_inst.m"
                      {
#line 2352 "check_hlds.delay_partial_inst.c"
                        check_hlds__delay_partial_inst__TypeCtorInfo_239_239 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 2354 "check_hlds.delay_partial_inst.c"
                        check_hlds__delay_partial_inst__TypeInfo_240_240 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1];
#line 318 "delay_partial_inst.m"
                        {
#line 318 "delay_partial_inst.m"
                          (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = mercury__map__search_3_p_0(check_hlds__delay_partial_inst__TypeCtorInfo_239_239, check_hlds__delay_partial_inst__TypeInfo_240_240, check_hlds__delay_partial_inst__CanonVarsMap0_58, ((MR_Box) (check_hlds__delay_partial_inst__ConsId_44)), &check_hlds__delay_partial_inst__conv2_CanonVars0_59);
                        }
#line 318 "delay_partial_inst.m"
                        if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
#line 318 "delay_partial_inst.m"
                          {
#line 318 "delay_partial_inst.m"
                            check_hlds__delay_partial_inst__CanonVars0_59 = ((MR_Word) check_hlds__delay_partial_inst__conv2_CanonVars0_59);
#line 318 "delay_partial_inst.m"
                            (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
#line 318 "delay_partial_inst.m"
                          }
#line 317 "delay_partial_inst.m"
                      }
#line 321 "delay_partial_inst.m"
                    if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
#line 320 "delay_partial_inst.m"
                      {
#line 320 "delay_partial_inst.m"
                        check_hlds__delay_partial_inst__CanonVars_60 = check_hlds__delay_partial_inst__CanonVars0_59;
#line 320 "delay_partial_inst.m"
                        check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_158_158 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136;
#line 320 "delay_partial_inst.m"
                        *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_135 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134;
#line 320 "delay_partial_inst.m"
                      }
#line 321 "delay_partial_inst.m"
                    else
#line 322 "delay_partial_inst.m"
                      {
#line 322 "delay_partial_inst.m"
                        {
#line 322 "delay_partial_inst.m"
                          check_hlds__delay_partial_inst__create_canonical_variables_4_p_0(check_hlds__delay_partial_inst__Args_45, &check_hlds__delay_partial_inst__CanonVars_60, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136, &check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_158_158);
                        }
#line 323 "delay_partial_inst.m"
                        {
#line 323 "delay_partial_inst.m"
                          check_hlds__delay_partial_inst__add_to_construct_map_5_p_0(check_hlds__delay_partial_inst__Var_188, check_hlds__delay_partial_inst__ConsId_44, check_hlds__delay_partial_inst__CanonVars_60, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_135);
                        }
#line 322 "delay_partial_inst.m"
                      }
#line 328 "delay_partial_inst.m"
                    {
#line 328 "delay_partial_inst.m"
                      check_hlds__delay_partial_inst__ProgContext_61 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__delay_partial_inst__GoalInfo0_14);
                    }
#line 2406 "check_hlds.delay_partial_inst.c"
                    check_hlds__delay_partial_inst__TypeInfo_241_241 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[0];
#line 329 "delay_partial_inst.m"
                    {
#line 329 "delay_partial_inst.m"
                      check_hlds__delay_partial_inst__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 329 "delay_partial_inst.m"
                      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_160_160, 0) = ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_3[1]));
#line 329 "delay_partial_inst.m"
                      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_160_160, 1) = ((MR_Box) (check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_5));
#line 329 "delay_partial_inst.m"
                      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_160_160, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 329 "delay_partial_inst.m"
                      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_160_160, 3) = ((MR_Box) ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__ModuleInfo_54));
#line 329 "delay_partial_inst.m"
                      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_160_160, 4) = ((MR_Box) (check_hlds__delay_partial_inst__ProgContext_61));
#line 329 "delay_partial_inst.m"
                    }
#line 329 "delay_partial_inst.m"
                    {
#line 329 "delay_partial_inst.m"
                      check_hlds__delay_partial_inst__SubUnifyGoals_62 = mercury__list__filter_map_corresponding3_4_f_0(check_hlds__delay_partial_inst__TypeInfo_241_241, check_hlds__delay_partial_inst__TypeInfo_241_241, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__delay_partial_inst__V_160_160, check_hlds__delay_partial_inst__CanonVars_60, check_hlds__delay_partial_inst__Args_45, (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__UniModes_46);
                    }
#line 332 "delay_partial_inst.m"
                    {
#line 332 "delay_partial_inst.m"
                      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__delay_partial_inst__SubUnifyGoals_62, check_hlds__delay_partial_inst__GoalInfo0_14, check_hlds__delay_partial_inst__Goal_10);
                    }
#line 335 "delay_partial_inst.m"
                    check_hlds__delay_partial_inst__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_158_158, (MR_Integer) 0)));
#line 335 "delay_partial_inst.m"
                    check_hlds__delay_partial_inst__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_158_158, (MR_Integer) 1)));
#line 335 "delay_partial_inst.m"
                    check_hlds__delay_partial_inst__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_158_158, (MR_Integer) 2)));
#line 335 "delay_partial_inst.m"
                    check_hlds__delay_partial_inst__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_158_158, (MR_Integer) 3)));
#line 335 "delay_partial_inst.m"
                    {
#line 335 "delay_partial_inst.m"
                      MR_Word base;
#line 335 "delay_partial_inst.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 335 "delay_partial_inst.m"
                      *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_137 = base;
#line 335 "delay_partial_inst.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_229_229));
#line 335 "delay_partial_inst.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__V_230_230));
#line 335 "delay_partial_inst.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_partial_inst__V_231_231));
#line 335 "delay_partial_inst.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 1));
#line 335 "delay_partial_inst.m"
                    }
#line 324 "delay_partial_inst.m"
                  }
#line 336 "delay_partial_inst.m"
                else
#line 352 "delay_partial_inst.m"
                  {
#line 352 "delay_partial_inst.m"
                    if (((MR_tag((MR_Word) check_hlds__delay_partial_inst__RHS0_40)) == (MR_mktag((MR_Integer) 2))))
#line 343 "delay_partial_inst.m"
                      {
#line 343 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__Purity_63 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 343 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__Groundness_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 343 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__PredOrFunc_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 343 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__NonLocals_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 2)));
#line 343 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__LambdaQuantVars_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 3)));
#line 343 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__Modues_69 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 4)));
#line 343 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__Detism_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 5)));
#line 343 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__LambdaGoal0_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 6)));
#line 343 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__LambdaGoal_72;
#line 343 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__RHS_74;
#line 343 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__GoalExpr_75;
#line 343 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__V_163_163;
#line 344 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst___ConstructMap_73;

#line 344 "delay_partial_inst.m"
                        {
#line 344 "delay_partial_inst.m"
                          check_hlds__delay_partial_inst__V_163_163 = mercury__map__init_0_f_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[0], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[0]);
                        }
#line 344 "delay_partial_inst.m"
                        {
#line 344 "delay_partial_inst.m"
                          check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__LambdaGoal0_71, &check_hlds__delay_partial_inst__LambdaGoal_72, check_hlds__delay_partial_inst__V_163_163, &check_hlds__delay_partial_inst___ConstructMap_73, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_137);
                        }
#line 347 "delay_partial_inst.m"
                        {
#line 347 "delay_partial_inst.m"
                          check_hlds__delay_partial_inst__RHS_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 347 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS_74, 0) = ((MR_Box) ((check_hlds__delay_partial_inst__Purity_63 | ((((check_hlds__delay_partial_inst__Groundness_64 << (MR_Integer) 2)) | ((check_hlds__delay_partial_inst__PredOrFunc_65 << (MR_Integer) 3)))))));
#line 347 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS_74, 1) = (MR_Integer) 0;
#line 347 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS_74, 2) = ((MR_Box) (check_hlds__delay_partial_inst__NonLocals_67));
#line 347 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS_74, 3) = ((MR_Box) (check_hlds__delay_partial_inst__LambdaQuantVars_68));
#line 347 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS_74, 4) = ((MR_Box) (check_hlds__delay_partial_inst__Modues_69));
#line 347 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS_74, 5) = ((MR_Box) (check_hlds__delay_partial_inst__Detism_70));
#line 347 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__RHS_74, 6) = ((MR_Box) (check_hlds__delay_partial_inst__LambdaGoal_72));
#line 347 "delay_partial_inst.m"
                        }
#line 350 "delay_partial_inst.m"
                        {
#line 350 "delay_partial_inst.m"
                          check_hlds__delay_partial_inst__GoalExpr_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 350 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr_75, 0) = ((MR_Box) (check_hlds__delay_partial_inst__LHS_39));
#line 350 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr_75, 1) = ((MR_Box) (check_hlds__delay_partial_inst__RHS_74));
#line 350 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr_75, 2) = ((MR_Box) (check_hlds__delay_partial_inst__Mode_41));
#line 350 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr_75, 3) = ((MR_Box) (check_hlds__delay_partial_inst__Unify_42));
#line 350 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__GoalExpr_75, 4) = ((MR_Box) (check_hlds__delay_partial_inst__Context_43));
#line 350 "delay_partial_inst.m"
                        }
#line 351 "delay_partial_inst.m"
                        {
#line 351 "delay_partial_inst.m"
                          MR_Word base;
#line 351 "delay_partial_inst.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 351 "delay_partial_inst.m"
                          *check_hlds__delay_partial_inst__Goal_10 = base;
#line 351 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__GoalExpr_75));
#line 351 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
#line 351 "delay_partial_inst.m"
                        }
#line 343 "delay_partial_inst.m"
                      }
#line 352 "delay_partial_inst.m"
                    else
#line 355 "delay_partial_inst.m"
                      {
#line 356 "delay_partial_inst.m"
                        *check_hlds__delay_partial_inst__Goal_10 = check_hlds__delay_partial_inst__Goal0_9;
#line 356 "delay_partial_inst.m"
                        *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_137 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136;
#line 355 "delay_partial_inst.m"
                      }
#line 356 "delay_partial_inst.m"
                    *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_135 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134;
#line 352 "delay_partial_inst.m"
                  }
#line 299 "delay_partial_inst.m"
              }
#line 359 "delay_partial_inst.m"
            else
#line 359 "delay_partial_inst.m"
              if (((MR_tag((MR_Word) check_hlds__delay_partial_inst__Unify_42)) == (MR_mktag((MR_Integer) 1))))
#line 361 "delay_partial_inst.m"
                {
#line 361 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__DeconArgs_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 2)));
#line 361 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__Var_196 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 0)));
#line 361 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__ConsId_197 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 1)));
#line 361 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__UniModes_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 3)));
#line 360 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst___CanFail_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 4)));
#line 360 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst___CanCGC_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 5)));
#line 390 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__CanonArgs_83;
#line 390 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__CanonVarsMap0_193;
#line 363 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__TypeCtorInfo_252_252;
#line 363 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__TypeInfo_253_253;
#line 363 "delay_partial_inst.m"
                  MR_Box check_hlds__delay_partial_inst__conv4_CanonVarsMap0_193;
#line 364 "delay_partial_inst.m"
                  MR_Box check_hlds__delay_partial_inst__conv5_CanonArgs_83;

#line 363 "delay_partial_inst.m"
                  {
#line 363 "delay_partial_inst.m"
                    (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[0], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[0], check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134, ((MR_Box) (check_hlds__delay_partial_inst__Var_196)), &check_hlds__delay_partial_inst__conv4_CanonVarsMap0_193);
                  }
#line 363 "delay_partial_inst.m"
                  if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
#line 363 "delay_partial_inst.m"
                    {
#line 363 "delay_partial_inst.m"
                      check_hlds__delay_partial_inst__CanonVarsMap0_193 = ((MR_Word) check_hlds__delay_partial_inst__conv4_CanonVarsMap0_193);
#line 363 "delay_partial_inst.m"
                      (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
#line 363 "delay_partial_inst.m"
                    }
#line 363 "delay_partial_inst.m"
                  if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
#line 363 "delay_partial_inst.m"
                    {
#line 2625 "check_hlds.delay_partial_inst.c"
                      check_hlds__delay_partial_inst__TypeCtorInfo_252_252 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 2627 "check_hlds.delay_partial_inst.c"
                      check_hlds__delay_partial_inst__TypeInfo_253_253 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1];
#line 364 "delay_partial_inst.m"
                      {
#line 364 "delay_partial_inst.m"
                        (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = mercury__map__search_3_p_0(check_hlds__delay_partial_inst__TypeCtorInfo_252_252, check_hlds__delay_partial_inst__TypeInfo_253_253, check_hlds__delay_partial_inst__CanonVarsMap0_193, ((MR_Box) (check_hlds__delay_partial_inst__ConsId_197)), &check_hlds__delay_partial_inst__conv5_CanonArgs_83);
                      }
#line 364 "delay_partial_inst.m"
                      if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
#line 364 "delay_partial_inst.m"
                        {
#line 364 "delay_partial_inst.m"
                          check_hlds__delay_partial_inst__CanonArgs_83 = ((MR_Word) check_hlds__delay_partial_inst__conv5_CanonArgs_83);
#line 364 "delay_partial_inst.m"
                          (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
#line 364 "delay_partial_inst.m"
                        }
#line 363 "delay_partial_inst.m"
                    }
#line 390 "delay_partial_inst.m"
                  if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
#line 368 "delay_partial_inst.m"
                    {
#line 368 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__TypeInfo_254_254;
#line 368 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__TypeCtorInfo_256_256;
#line 368 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__LHS_Mode_84;
#line 368 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__FinalInst_86;
#line 368 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__ConjList_89;
#line 368 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__V_152_152;
#line 368 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__ModuleInfo_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136, (MR_Integer) 0)));
#line 368 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__ProgContext_190;
#line 368 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__SubUnifyGoals_191;
#line 368 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136, (MR_Integer) 1)));
#line 368 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136, (MR_Integer) 2)));
#line 368 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136, (MR_Integer) 3)));
#line 375 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst___RHS_Mode_85;

#line 369 "delay_partial_inst.m"
                      {
#line 369 "delay_partial_inst.m"
                        check_hlds__delay_partial_inst__ProgContext_190 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__delay_partial_inst__GoalInfo0_14);
                      }
#line 2682 "check_hlds.delay_partial_inst.c"
                      check_hlds__delay_partial_inst__TypeInfo_254_254 = (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[0];
#line 2684 "check_hlds.delay_partial_inst.c"
                      check_hlds__delay_partial_inst__TypeCtorInfo_256_256 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 370 "delay_partial_inst.m"
                      {
#line 370 "delay_partial_inst.m"
                        check_hlds__delay_partial_inst__V_152_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 370 "delay_partial_inst.m"
                        MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_152_152, 0) = ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_3[1]));
#line 370 "delay_partial_inst.m"
                        MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_152_152, 1) = ((MR_Box) (check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_6));
#line 370 "delay_partial_inst.m"
                        MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_152_152, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 370 "delay_partial_inst.m"
                        MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_152_152, 3) = ((MR_Box) (check_hlds__delay_partial_inst__ModuleInfo_189));
#line 370 "delay_partial_inst.m"
                        MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_152_152, 4) = ((MR_Box) (check_hlds__delay_partial_inst__ProgContext_190));
#line 370 "delay_partial_inst.m"
                      }
#line 370 "delay_partial_inst.m"
                      {
#line 370 "delay_partial_inst.m"
                        check_hlds__delay_partial_inst__SubUnifyGoals_191 = mercury__list__filter_map_corresponding3_4_f_0(check_hlds__delay_partial_inst__TypeInfo_254_254, check_hlds__delay_partial_inst__TypeInfo_254_254, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, check_hlds__delay_partial_inst__TypeCtorInfo_256_256, check_hlds__delay_partial_inst__V_152_152, check_hlds__delay_partial_inst__CanonArgs_83, check_hlds__delay_partial_inst__DeconArgs_80, check_hlds__delay_partial_inst__UniModes_198);
                      }
#line 375 "delay_partial_inst.m"
                      check_hlds__delay_partial_inst__LHS_Mode_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Mode_41, (MR_Integer) 0)));
#line 375 "delay_partial_inst.m"
                      check_hlds__delay_partial_inst___RHS_Mode_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__Mode_41, (MR_Integer) 1)));
#line 376 "delay_partial_inst.m"
                      {
#line 376 "delay_partial_inst.m"
                        check_hlds__delay_partial_inst__FinalInst_86 = check_hlds__mode_util__mode_get_final_inst_2_f_0(check_hlds__delay_partial_inst__ModuleInfo_189, check_hlds__delay_partial_inst__LHS_Mode_84);
                      }
#line 377 "delay_partial_inst.m"
                      {
#line 377 "delay_partial_inst.m"
                        (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__delay_partial_inst__ModuleInfo_189, check_hlds__delay_partial_inst__FinalInst_86);
                      }
#line 386 "delay_partial_inst.m"
                      if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
#line 378 "delay_partial_inst.m"
                        {
#line 378 "delay_partial_inst.m"
                          MR_Word check_hlds__delay_partial_inst__ConstructGoal_87;
#line 378 "delay_partial_inst.m"
                          MR_Word check_hlds__delay_partial_inst__CanonVarsMap_88;
#line 378 "delay_partial_inst.m"
                          MR_Word check_hlds__delay_partial_inst__V_154_154;

#line 378 "delay_partial_inst.m"
                          {
#line 378 "delay_partial_inst.m"
                            hlds__hlds_goal__construct_functor_4_p_0(check_hlds__delay_partial_inst__Var_196, check_hlds__delay_partial_inst__ConsId_197, check_hlds__delay_partial_inst__CanonArgs_83, &check_hlds__delay_partial_inst__ConstructGoal_87);
                          }
#line 382 "delay_partial_inst.m"
                          {
#line 382 "delay_partial_inst.m"
                            mercury__map__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[1], ((MR_Box) (check_hlds__delay_partial_inst__ConsId_197)), check_hlds__delay_partial_inst__CanonVarsMap0_193, &check_hlds__delay_partial_inst__CanonVarsMap_88);
                          }
#line 383 "delay_partial_inst.m"
                          {
#line 383 "delay_partial_inst.m"
                            mercury__map__det_update_4_p_0(check_hlds__delay_partial_inst__TypeInfo_254_254, (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[0], ((MR_Box) (check_hlds__delay_partial_inst__Var_196)), ((MR_Box) (check_hlds__delay_partial_inst__CanonVarsMap_88)), check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_135);
                          }
#line 385 "delay_partial_inst.m"
                          {
#line 385 "delay_partial_inst.m"
                            check_hlds__delay_partial_inst__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "delay_partial_inst.m"
                            MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__V_154_154, 0) = ((MR_Box) (check_hlds__delay_partial_inst__ConstructGoal_87));
#line 385 "delay_partial_inst.m"
                            MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__V_154_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "delay_partial_inst.m"
                          }
#line 385 "delay_partial_inst.m"
                          {
#line 385 "delay_partial_inst.m"
                            check_hlds__delay_partial_inst__ConjList_89 = mercury__list__f_43_43_2_f_0(check_hlds__delay_partial_inst__TypeCtorInfo_256_256, check_hlds__delay_partial_inst__SubUnifyGoals_191, check_hlds__delay_partial_inst__V_154_154);
                          }
#line 378 "delay_partial_inst.m"
                        }
#line 386 "delay_partial_inst.m"
                      else
#line 387 "delay_partial_inst.m"
                        {
#line 387 "delay_partial_inst.m"
                          check_hlds__delay_partial_inst__ConjList_89 = check_hlds__delay_partial_inst__SubUnifyGoals_191;
#line 387 "delay_partial_inst.m"
                          *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_135 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134;
#line 387 "delay_partial_inst.m"
                        }
#line 389 "delay_partial_inst.m"
                      {
#line 389 "delay_partial_inst.m"
                        hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__delay_partial_inst__ConjList_89, check_hlds__delay_partial_inst__GoalInfo0_14, check_hlds__delay_partial_inst__Goal_10);
                      }
#line 368 "delay_partial_inst.m"
                    }
#line 390 "delay_partial_inst.m"
                  else
#line 391 "delay_partial_inst.m"
                    {
#line 391 "delay_partial_inst.m"
                      *check_hlds__delay_partial_inst__Goal_10 = check_hlds__delay_partial_inst__Goal0_9;
#line 391 "delay_partial_inst.m"
                      *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_135 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134;
#line 391 "delay_partial_inst.m"
                    }
#line 391 "delay_partial_inst.m"
                  *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_137 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136;
#line 361 "delay_partial_inst.m"
                }
#line 359 "delay_partial_inst.m"
              else
#line 359 "delay_partial_inst.m"
                if (((((MR_tag((MR_Word) check_hlds__delay_partial_inst__Unify_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 394 "delay_partial_inst.m"
                  {
#line 394 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__CanFail_207 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 2)));
#line 394 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst___UniMode_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 1)));
#line 394 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst___TypeInfos_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__Unify_42, (MR_Integer) 3)));
#line 421 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__RHSVar_92;
#line 421 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__ConsId_204;
#line 421 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__CanonArgs_206;

#line 408 "delay_partial_inst.m"
                    (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = (check_hlds__delay_partial_inst__CanFail_207 == (MR_Integer) 0);
#line 408 "delay_partial_inst.m"
                    if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
#line 408 "delay_partial_inst.m"
                      {
#line 409 "delay_partial_inst.m"
                        (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__delay_partial_inst__RHS0_40)) == (MR_mktag((MR_Integer) 0)));
#line 409 "delay_partial_inst.m"
                        if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
#line 409 "delay_partial_inst.m"
                          {
#line 409 "delay_partial_inst.m"
                            check_hlds__delay_partial_inst__RHSVar_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__RHS0_40, (MR_Integer) 0)));
#line 410 "delay_partial_inst.m"
                            {
#line 410 "delay_partial_inst.m"
                              (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = check_hlds__delay_partial_inst__get_sole_cons_id_and_canon_vars_4_p_0(check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134, check_hlds__delay_partial_inst__LHS_39, &check_hlds__delay_partial_inst__ConsId_204, &check_hlds__delay_partial_inst__CanonArgs_206);
                            }
#line 409 "delay_partial_inst.m"
                          }
#line 408 "delay_partial_inst.m"
                      }
#line 421 "delay_partial_inst.m"
                    if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
#line 413 "delay_partial_inst.m"
                      {
#line 413 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__TestGoal_93;
#line 413 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__AssignGoal_94;
#line 413 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__V_145_145;
#line 413 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__ProgContext_203;

#line 413 "delay_partial_inst.m"
                        {
#line 413 "delay_partial_inst.m"
                          check_hlds__delay_partial_inst__ProgContext_203 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__delay_partial_inst__GoalInfo0_14);
                        }
#line 414 "delay_partial_inst.m"
                        {
#line 414 "delay_partial_inst.m"
                          check_hlds__delay_partial_inst__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 414 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__V_145_145, 0) = ((MR_Box) (check_hlds__delay_partial_inst__ConsId_204));
#line 414 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__V_145_145, 1) = ((MR_Box) ((MR_Integer) 0));
#line 414 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__V_145_145, 2) = ((MR_Box) (check_hlds__delay_partial_inst__CanonArgs_206));
#line 414 "delay_partial_inst.m"
                        }
#line 414 "delay_partial_inst.m"
                        {
#line 414 "delay_partial_inst.m"
                          hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__delay_partial_inst__RHSVar_92, check_hlds__delay_partial_inst__V_145_145, check_hlds__delay_partial_inst__ProgContext_203, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__delay_partial_inst__TestGoal_93);
                        }
#line 417 "delay_partial_inst.m"
                        {
#line 417 "delay_partial_inst.m"
                          hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__delay_partial_inst__LHS_39, check_hlds__delay_partial_inst__RHS0_40, check_hlds__delay_partial_inst__ProgContext_203, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__delay_partial_inst_scalar_common_4[0]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__delay_partial_inst__AssignGoal_94);
                        }
#line 420 "delay_partial_inst.m"
                        {
#line 420 "delay_partial_inst.m"
                          hlds__hlds_goal__conjoin_goals_3_p_0(check_hlds__delay_partial_inst__TestGoal_93, check_hlds__delay_partial_inst__AssignGoal_94, check_hlds__delay_partial_inst__Goal_10);
                        }
#line 413 "delay_partial_inst.m"
                      }
#line 421 "delay_partial_inst.m"
                    else
#line 422 "delay_partial_inst.m"
                      *check_hlds__delay_partial_inst__Goal_10 = check_hlds__delay_partial_inst__Goal0_9;
#line 422 "delay_partial_inst.m"
                    *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_135 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134;
#line 422 "delay_partial_inst.m"
                    *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_137 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136;
#line 394 "delay_partial_inst.m"
                  }
#line 359 "delay_partial_inst.m"
                else
#line 427 "delay_partial_inst.m"
                  {
#line 428 "delay_partial_inst.m"
                    *check_hlds__delay_partial_inst__Goal_10 = check_hlds__delay_partial_inst__Goal0_9;
#line 428 "delay_partial_inst.m"
                    *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_135 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134;
#line 428 "delay_partial_inst.m"
                    *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_137 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136;
#line 427 "delay_partial_inst.m"
                  }
#line 297 "delay_partial_inst.m"
          }
#line 257 "delay_partial_inst.m"
        else
#line 257 "delay_partial_inst.m"
          if (((((MR_tag((MR_Word) check_hlds__delay_partial_inst__GoalExpr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 253 "delay_partial_inst.m"
            {
#line 253 "delay_partial_inst.m"
              MR_Word check_hlds__delay_partial_inst__ConjType_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 1)));
#line 253 "delay_partial_inst.m"
              MR_Word check_hlds__delay_partial_inst__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 2)));
#line 253 "delay_partial_inst.m"
              MR_Word check_hlds__delay_partial_inst__Goals_17;
#line 253 "delay_partial_inst.m"
              MR_Word check_hlds__delay_partial_inst__V_184_184;

#line 254 "delay_partial_inst.m"
              {
#line 254 "delay_partial_inst.m"
                check_hlds__delay_partial_inst__delay_partial_inst_in_conj_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__Goals0_16, &check_hlds__delay_partial_inst__Goals_17, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_135, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_137);
              }
#line 256 "delay_partial_inst.m"
              {
#line 256 "delay_partial_inst.m"
                check_hlds__delay_partial_inst__V_184_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 256 "delay_partial_inst.m"
                MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_184_184, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 256 "delay_partial_inst.m"
                MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_184_184, 1) = ((MR_Box) (check_hlds__delay_partial_inst__ConjType_15));
#line 256 "delay_partial_inst.m"
                MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_184_184, 2) = ((MR_Box) (check_hlds__delay_partial_inst__Goals_17));
#line 256 "delay_partial_inst.m"
              }
#line 256 "delay_partial_inst.m"
              {
#line 256 "delay_partial_inst.m"
                MR_Word base;
#line 256 "delay_partial_inst.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 256 "delay_partial_inst.m"
                *check_hlds__delay_partial_inst__Goal_10 = base;
#line 256 "delay_partial_inst.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_184_184));
#line 256 "delay_partial_inst.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
#line 256 "delay_partial_inst.m"
              }
#line 253 "delay_partial_inst.m"
            }
#line 257 "delay_partial_inst.m"
          else
#line 257 "delay_partial_inst.m"
            if (((((MR_tag((MR_Word) check_hlds__delay_partial_inst__GoalExpr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 258 "delay_partial_inst.m"
              {
#line 258 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__V_181_181;
#line 258 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__Goals0_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 1)));
#line 258 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__Goals_186;

#line 259 "delay_partial_inst.m"
                {
#line 259 "delay_partial_inst.m"
                  check_hlds__delay_partial_inst__delay_partial_inst_in_goals_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__Goals0_185, &check_hlds__delay_partial_inst__Goals_186, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_135, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_137);
                }
#line 261 "delay_partial_inst.m"
                {
#line 261 "delay_partial_inst.m"
                  check_hlds__delay_partial_inst__V_181_181 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_181_181, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 261 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_181_181, 1) = ((MR_Box) (check_hlds__delay_partial_inst__Goals_186));
#line 261 "delay_partial_inst.m"
                }
#line 261 "delay_partial_inst.m"
                {
#line 261 "delay_partial_inst.m"
                  MR_Word base;
#line 261 "delay_partial_inst.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 261 "delay_partial_inst.m"
                  *check_hlds__delay_partial_inst__Goal_10 = base;
#line 261 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_181_181));
#line 261 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
#line 261 "delay_partial_inst.m"
                }
#line 258 "delay_partial_inst.m"
              }
#line 257 "delay_partial_inst.m"
            else
#line 257 "delay_partial_inst.m"
              if (((((MR_tag((MR_Word) check_hlds__delay_partial_inst__GoalExpr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 273 "delay_partial_inst.m"
                {
#line 273 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 1)));
#line 273 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__Cond0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 2)));
#line 273 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__Then0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 3)));
#line 273 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__Else0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 4)));
#line 273 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__InstMapThen_29;
#line 273 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__Cond_30;
#line 273 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__Then_31;
#line 273 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__Else_32;
#line 273 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_167_167;
#line 273 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_168_168;
#line 273 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_169_169;
#line 273 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_170_170;
#line 273 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__V_173_173;

#line 274 "delay_partial_inst.m"
                  {
#line 274 "delay_partial_inst.m"
                    hlds__goal_util__update_instmap_3_p_0(check_hlds__delay_partial_inst__Cond0_26, check_hlds__delay_partial_inst__InstMap0_8, &check_hlds__delay_partial_inst__InstMapThen_29);
                  }
#line 275 "delay_partial_inst.m"
                  {
#line 275 "delay_partial_inst.m"
                    check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__Cond0_26, &check_hlds__delay_partial_inst__Cond_30, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134, &check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_167_167, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136, &check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_168_168);
                  }
#line 277 "delay_partial_inst.m"
                  {
#line 277 "delay_partial_inst.m"
                    check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMapThen_29, check_hlds__delay_partial_inst__Then0_27, &check_hlds__delay_partial_inst__Then_31, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_167_167, &check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_169_169, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_168_168, &check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_170_170);
                  }
#line 279 "delay_partial_inst.m"
                  {
#line 279 "delay_partial_inst.m"
                    check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__Else0_28, &check_hlds__delay_partial_inst__Else_32, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_169_169, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_135, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_170_170, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_137);
                  }
#line 281 "delay_partial_inst.m"
                  {
#line 281 "delay_partial_inst.m"
                    check_hlds__delay_partial_inst__V_173_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 281 "delay_partial_inst.m"
                    MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_173_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 281 "delay_partial_inst.m"
                    MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_173_173, 1) = ((MR_Box) (check_hlds__delay_partial_inst__Vars_25));
#line 281 "delay_partial_inst.m"
                    MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_173_173, 2) = ((MR_Box) (check_hlds__delay_partial_inst__Cond_30));
#line 281 "delay_partial_inst.m"
                    MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_173_173, 3) = ((MR_Box) (check_hlds__delay_partial_inst__Then_31));
#line 281 "delay_partial_inst.m"
                    MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_173_173, 4) = ((MR_Box) (check_hlds__delay_partial_inst__Else_32));
#line 281 "delay_partial_inst.m"
                  }
#line 281 "delay_partial_inst.m"
                  {
#line 281 "delay_partial_inst.m"
                    MR_Word base;
#line 281 "delay_partial_inst.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 281 "delay_partial_inst.m"
                    *check_hlds__delay_partial_inst__Goal_10 = base;
#line 281 "delay_partial_inst.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_173_173));
#line 281 "delay_partial_inst.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
#line 281 "delay_partial_inst.m"
                  }
#line 273 "delay_partial_inst.m"
                }
#line 257 "delay_partial_inst.m"
              else
#line 257 "delay_partial_inst.m"
                if (((((MR_tag((MR_Word) check_hlds__delay_partial_inst__GoalExpr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 283 "delay_partial_inst.m"
                  {
#line 283 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__Reason_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 1)));
#line 283 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__SubGoal0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 2)));
#line 285 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__FGT_36;
#line 285 "delay_partial_inst.m"
                    MR_Word check_hlds__delay_partial_inst__V_35_35;

#line 285 "delay_partial_inst.m"
                    (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__delay_partial_inst__Reason_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__Reason_33, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 285 "delay_partial_inst.m"
                    if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
#line 285 "delay_partial_inst.m"
                      {
#line 285 "delay_partial_inst.m"
                        check_hlds__delay_partial_inst__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__Reason_33, (MR_Integer) 1)));
#line 285 "delay_partial_inst.m"
                        check_hlds__delay_partial_inst__FGT_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__Reason_33, (MR_Integer) 2)));
#line 287 "delay_partial_inst.m"
                        if ((check_hlds__delay_partial_inst__FGT_36 == (MR_Integer) 1))
#line 286 "delay_partial_inst.m"
                          (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
#line 287 "delay_partial_inst.m"
                        else
#line 287 "delay_partial_inst.m"
                          if ((check_hlds__delay_partial_inst__FGT_36 == (MR_Integer) 2))
#line 287 "delay_partial_inst.m"
                            (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_TRUE;
#line 287 "delay_partial_inst.m"
                          else
#line 287 "delay_partial_inst.m"
                            (check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded = MR_FALSE;
#line 285 "delay_partial_inst.m"
                      }
#line 291 "delay_partial_inst.m"
                    if ((check_hlds__delay_partial_inst__env).check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0_env_0__succeeded)
#line 290 "delay_partial_inst.m"
                      {
#line 290 "delay_partial_inst.m"
                        *check_hlds__delay_partial_inst__Goal_10 = check_hlds__delay_partial_inst__Goal0_9;
#line 290 "delay_partial_inst.m"
                        *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_137 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136;
#line 290 "delay_partial_inst.m"
                      }
#line 291 "delay_partial_inst.m"
                    else
#line 293 "delay_partial_inst.m"
                      {
#line 293 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__SubGoal_37;
#line 293 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__V_166_166;
#line 292 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__V_38_38;

#line 292 "delay_partial_inst.m"
                        {
#line 292 "delay_partial_inst.m"
                          check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__SubGoal0_34, &check_hlds__delay_partial_inst__SubGoal_37, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134, &check_hlds__delay_partial_inst__V_38_38, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_137);
                        }
#line 294 "delay_partial_inst.m"
                        {
#line 294 "delay_partial_inst.m"
                          check_hlds__delay_partial_inst__V_166_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 294 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_166_166, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 294 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_166_166, 1) = ((MR_Box) (check_hlds__delay_partial_inst__Reason_33));
#line 294 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_166_166, 2) = ((MR_Box) (check_hlds__delay_partial_inst__SubGoal_37));
#line 294 "delay_partial_inst.m"
                        }
#line 294 "delay_partial_inst.m"
                        {
#line 294 "delay_partial_inst.m"
                          MR_Word base;
#line 294 "delay_partial_inst.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 294 "delay_partial_inst.m"
                          *check_hlds__delay_partial_inst__Goal_10 = base;
#line 294 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_166_166));
#line 294 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
#line 294 "delay_partial_inst.m"
                        }
#line 293 "delay_partial_inst.m"
                      }
#line 294 "delay_partial_inst.m"
                    *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_135 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134;
#line 283 "delay_partial_inst.m"
                  }
#line 257 "delay_partial_inst.m"
                else
#line 257 "delay_partial_inst.m"
                  if (((((MR_tag((MR_Word) check_hlds__delay_partial_inst__GoalExpr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 437 "delay_partial_inst.m"
                    {
#line 437 "delay_partial_inst.m"
                      MR_Word check_hlds__delay_partial_inst__ShortHand0_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 1)));

#line 451 "delay_partial_inst.m"
                      if (((MR_tag((MR_Word) check_hlds__delay_partial_inst__ShortHand0_117)) == (MR_mktag((MR_Integer) 1))))
#line 440 "delay_partial_inst.m"
                        {
#line 440 "delay_partial_inst.m"
                          MR_Word check_hlds__delay_partial_inst__GoalType_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand0_117, (MR_Integer) 0)));
#line 440 "delay_partial_inst.m"
                          MR_Word check_hlds__delay_partial_inst__Outer_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand0_117, (MR_Integer) 1)));
#line 440 "delay_partial_inst.m"
                          MR_Word check_hlds__delay_partial_inst__Inner_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand0_117, (MR_Integer) 2)));
#line 440 "delay_partial_inst.m"
                          MR_Word check_hlds__delay_partial_inst__MaybeOutputVars_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand0_117, (MR_Integer) 3)));
#line 440 "delay_partial_inst.m"
                          MR_Word check_hlds__delay_partial_inst__MainGoal0_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand0_117, (MR_Integer) 4)));
#line 440 "delay_partial_inst.m"
                          MR_Word check_hlds__delay_partial_inst__OrElseGoals0_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand0_117, (MR_Integer) 5)));
#line 440 "delay_partial_inst.m"
                          MR_Word check_hlds__delay_partial_inst__OrElseInners_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand0_117, (MR_Integer) 6)));
#line 440 "delay_partial_inst.m"
                          MR_Word check_hlds__delay_partial_inst__MainGoal_125;
#line 440 "delay_partial_inst.m"
                          MR_Word check_hlds__delay_partial_inst__OrElseGoals_127;
#line 440 "delay_partial_inst.m"
                          MR_Word check_hlds__delay_partial_inst__ShortHand_129;
#line 440 "delay_partial_inst.m"
                          MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_143_143;
#line 440 "delay_partial_inst.m"
                          MR_Word check_hlds__delay_partial_inst__GoalExpr_215;
#line 443 "delay_partial_inst.m"
                          MR_Word check_hlds__delay_partial_inst__V_126_126;
#line 445 "delay_partial_inst.m"
                          MR_Word check_hlds__delay_partial_inst__V_128_128;

#line 443 "delay_partial_inst.m"
                          {
#line 443 "delay_partial_inst.m"
                            check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__MainGoal0_122, &check_hlds__delay_partial_inst__MainGoal_125, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134, &check_hlds__delay_partial_inst__V_126_126, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136, &check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_143_143);
                          }
#line 445 "delay_partial_inst.m"
                          {
#line 445 "delay_partial_inst.m"
                            check_hlds__delay_partial_inst__delay_partial_inst_in_goals_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__OrElseGoals0_123, &check_hlds__delay_partial_inst__OrElseGoals_127, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134, &check_hlds__delay_partial_inst__V_128_128, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_143_143, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_137);
                          }
#line 447 "delay_partial_inst.m"
                          {
#line 447 "delay_partial_inst.m"
                            check_hlds__delay_partial_inst__ShortHand_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 447 "delay_partial_inst.m"
                            MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand_129, 0) = ((MR_Box) (check_hlds__delay_partial_inst__GoalType_118));
#line 447 "delay_partial_inst.m"
                            MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand_129, 1) = ((MR_Box) (check_hlds__delay_partial_inst__Outer_119));
#line 447 "delay_partial_inst.m"
                            MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand_129, 2) = ((MR_Box) (check_hlds__delay_partial_inst__Inner_120));
#line 447 "delay_partial_inst.m"
                            MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand_129, 3) = ((MR_Box) (check_hlds__delay_partial_inst__MaybeOutputVars_121));
#line 447 "delay_partial_inst.m"
                            MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand_129, 4) = ((MR_Box) (check_hlds__delay_partial_inst__MainGoal_125));
#line 447 "delay_partial_inst.m"
                            MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand_129, 5) = ((MR_Box) (check_hlds__delay_partial_inst__OrElseGoals_127));
#line 447 "delay_partial_inst.m"
                            MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__ShortHand_129, 6) = ((MR_Box) (check_hlds__delay_partial_inst__OrElseInners_124));
#line 447 "delay_partial_inst.m"
                          }
#line 449 "delay_partial_inst.m"
                          {
#line 449 "delay_partial_inst.m"
                            check_hlds__delay_partial_inst__GoalExpr_215 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "delay_partial_inst.m"
                            MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr_215, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 449 "delay_partial_inst.m"
                            MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr_215, 1) = ((MR_Box) (check_hlds__delay_partial_inst__ShortHand_129));
#line 449 "delay_partial_inst.m"
                          }
#line 450 "delay_partial_inst.m"
                          {
#line 450 "delay_partial_inst.m"
                            MR_Word base;
#line 450 "delay_partial_inst.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 450 "delay_partial_inst.m"
                            *check_hlds__delay_partial_inst__Goal_10 = base;
#line 450 "delay_partial_inst.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__GoalExpr_215));
#line 450 "delay_partial_inst.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
#line 450 "delay_partial_inst.m"
                          }
#line 450 "delay_partial_inst.m"
                          *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_135 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134;
#line 440 "delay_partial_inst.m"
                        }
#line 451 "delay_partial_inst.m"
                      else
#line 451 "delay_partial_inst.m"
                        if (((MR_tag((MR_Word) check_hlds__delay_partial_inst__ShortHand0_117)) == (MR_mktag((MR_Integer) 0))))
#line 459 "delay_partial_inst.m"
                          {
#line 461 "delay_partial_inst.m"
                            {
#line 461 "delay_partial_inst.m"
                              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.delay_partial_inst", (MR_String) "predicate \140check_hlds.delay_partial_inst.delay_partial_inst_in_goal\'/7", (MR_String) "bi_implication");
#line 461 "delay_partial_inst.m"
                              return;
                            }
#line 459 "delay_partial_inst.m"
                          }
#line 451 "delay_partial_inst.m"
                        else
#line 452 "delay_partial_inst.m"
                          {
#line 452 "delay_partial_inst.m"
                            MR_Word check_hlds__delay_partial_inst__MaybeIO_130 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__ShortHand0_117, (MR_Integer) 0)));
#line 452 "delay_partial_inst.m"
                            MR_Word check_hlds__delay_partial_inst__ResultVar_131 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__ShortHand0_117, (MR_Integer) 1)));
#line 452 "delay_partial_inst.m"
                            MR_Word check_hlds__delay_partial_inst__SubGoal0_216 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__ShortHand0_117, (MR_Integer) 2)));
#line 452 "delay_partial_inst.m"
                            MR_Word check_hlds__delay_partial_inst__SubGoal_217;
#line 452 "delay_partial_inst.m"
                            MR_Word check_hlds__delay_partial_inst__GoalExpr_218;
#line 452 "delay_partial_inst.m"
                            MR_Word check_hlds__delay_partial_inst__ShortHand_219;

#line 453 "delay_partial_inst.m"
                            {
#line 453 "delay_partial_inst.m"
                              check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__SubGoal0_216, &check_hlds__delay_partial_inst__SubGoal_217, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_135, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_137);
                            }
#line 455 "delay_partial_inst.m"
                            {
#line 455 "delay_partial_inst.m"
                              check_hlds__delay_partial_inst__ShortHand_219 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 455 "delay_partial_inst.m"
                              MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__ShortHand_219, 0) = ((MR_Box) (check_hlds__delay_partial_inst__MaybeIO_130));
#line 455 "delay_partial_inst.m"
                              MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__ShortHand_219, 1) = ((MR_Box) (check_hlds__delay_partial_inst__ResultVar_131));
#line 455 "delay_partial_inst.m"
                              MR_hl_field(MR_mktag(2), check_hlds__delay_partial_inst__ShortHand_219, 2) = ((MR_Box) (check_hlds__delay_partial_inst__SubGoal_217));
#line 455 "delay_partial_inst.m"
                            }
#line 456 "delay_partial_inst.m"
                            {
#line 456 "delay_partial_inst.m"
                              check_hlds__delay_partial_inst__GoalExpr_218 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "delay_partial_inst.m"
                              MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr_218, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 456 "delay_partial_inst.m"
                              MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr_218, 1) = ((MR_Box) (check_hlds__delay_partial_inst__ShortHand_219));
#line 456 "delay_partial_inst.m"
                            }
#line 457 "delay_partial_inst.m"
                            {
#line 457 "delay_partial_inst.m"
                              MR_Word base;
#line 457 "delay_partial_inst.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 457 "delay_partial_inst.m"
                              *check_hlds__delay_partial_inst__Goal_10 = base;
#line 457 "delay_partial_inst.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__GoalExpr_218));
#line 457 "delay_partial_inst.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
#line 457 "delay_partial_inst.m"
                            }
#line 452 "delay_partial_inst.m"
                          }
#line 437 "delay_partial_inst.m"
                    }
#line 257 "delay_partial_inst.m"
                  else
#line 257 "delay_partial_inst.m"
                    if (((((MR_tag((MR_Word) check_hlds__delay_partial_inst__GoalExpr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 268 "delay_partial_inst.m"
                      {
#line 268 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 1)));
#line 268 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__CanFail_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 2)));
#line 268 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__Cases0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__GoalExpr0_13, (MR_Integer) 3)));
#line 268 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__Cases_24;
#line 268 "delay_partial_inst.m"
                        MR_Word check_hlds__delay_partial_inst__V_176_176;

#line 269 "delay_partial_inst.m"
                        {
#line 269 "delay_partial_inst.m"
                          check_hlds__delay_partial_inst__delay_partial_inst_in_cases_7_p_0(check_hlds__delay_partial_inst__InstMap0_8, check_hlds__delay_partial_inst__Cases0_23, &check_hlds__delay_partial_inst__Cases_24, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134, check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_135, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136, check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_137);
                        }
#line 271 "delay_partial_inst.m"
                        {
#line 271 "delay_partial_inst.m"
                          check_hlds__delay_partial_inst__V_176_176 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 271 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_176_176, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 271 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_176_176, 1) = ((MR_Box) (check_hlds__delay_partial_inst__Var_21));
#line 271 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_176_176, 2) = ((MR_Box) (check_hlds__delay_partial_inst__CanFail_22));
#line 271 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(3), check_hlds__delay_partial_inst__V_176_176, 3) = ((MR_Box) (check_hlds__delay_partial_inst__Cases_24));
#line 271 "delay_partial_inst.m"
                        }
#line 271 "delay_partial_inst.m"
                        {
#line 271 "delay_partial_inst.m"
                          MR_Word base;
#line 271 "delay_partial_inst.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 271 "delay_partial_inst.m"
                          *check_hlds__delay_partial_inst__Goal_10 = base;
#line 271 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__V_176_176));
#line 271 "delay_partial_inst.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__GoalInfo0_14));
#line 271 "delay_partial_inst.m"
                        }
#line 268 "delay_partial_inst.m"
                      }
#line 257 "delay_partial_inst.m"
                    else
#line 434 "delay_partial_inst.m"
                      {
#line 435 "delay_partial_inst.m"
                        *check_hlds__delay_partial_inst__Goal_10 = check_hlds__delay_partial_inst__Goal0_9;
#line 435 "delay_partial_inst.m"
                        *check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_135 = check_hlds__delay_partial_inst__STATE_VARIABLE_ConstructMap_0_134;
#line 435 "delay_partial_inst.m"
                        *check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_137 = check_hlds__delay_partial_inst__STATE_VARIABLE_DelayInfo_0_136;
#line 434 "delay_partial_inst.m"
                      }
#line 250 "delay_partial_inst.m"
    }
#line 246 "delay_partial_inst.m"
  }
#line 246 "delay_partial_inst.m"
}

#line 199 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_proc_6_p_0(
#line 199 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__PredId_7,
#line 199 "delay_partial_inst.m"
  MR_Integer check_hlds__delay_partial_inst__ProcId_8,
#line 199 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_16,
#line 199 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_17,
#line 199 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_Changed_0_18,
#line 199 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_Changed_19)
#line 199 "delay_partial_inst.m"
{
#line 202 "delay_partial_inst.m"
  {
#line 202 "delay_partial_inst.m"
    MR_bool check_hlds__delay_partial_inst__succeeded;
#line 202 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__PredInfo_12;
#line 202 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__ProcInfo0_13;
#line 202 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__VarSet_29;
#line 202 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__VarTypes_30;
#line 202 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__DelayInfo0_31;
#line 202 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__InstMap0_32;
#line 202 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Goal0_33;
#line 202 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Goal_34;
#line 202 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__DelayInfo_36;
#line 202 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__Changed_37;
#line 202 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_39_39;
#line 230 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst___ConstructMap_35;
#line 233 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_49_49;
#line 233 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_50_50;
#line 233 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__V_51_51;

#line 204 "delay_partial_inst.m"
    {
#line 204 "delay_partial_inst.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Delaying partial instantiations in ", check_hlds__delay_partial_inst__PredId_7, check_hlds__delay_partial_inst__ProcId_8, check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_16);
    }
#line 207 "delay_partial_inst.m"
    {
#line 207 "delay_partial_inst.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_16, check_hlds__delay_partial_inst__PredId_7, check_hlds__delay_partial_inst__ProcId_8, &check_hlds__delay_partial_inst__PredInfo_12, &check_hlds__delay_partial_inst__ProcInfo0_13);
    }
#line 223 "delay_partial_inst.m"
    {
#line 223 "delay_partial_inst.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__delay_partial_inst__ProcInfo0_13, &check_hlds__delay_partial_inst__VarSet_29);
    }
#line 224 "delay_partial_inst.m"
    {
#line 224 "delay_partial_inst.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__delay_partial_inst__ProcInfo0_13, &check_hlds__delay_partial_inst__VarTypes_30);
    }
#line 225 "delay_partial_inst.m"
    {
#line 225 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__DelayInfo0_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 225 "delay_partial_inst.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo0_31, 0) = ((MR_Box) (check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_16));
#line 225 "delay_partial_inst.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo0_31, 1) = ((MR_Box) (check_hlds__delay_partial_inst__VarSet_29));
#line 225 "delay_partial_inst.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo0_31, 2) = ((MR_Box) (check_hlds__delay_partial_inst__VarTypes_30));
#line 225 "delay_partial_inst.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo0_31, 3) = ((MR_Box) ((MR_Integer) 0));
#line 225 "delay_partial_inst.m"
    }
#line 227 "delay_partial_inst.m"
    {
#line 227 "delay_partial_inst.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__delay_partial_inst__ProcInfo0_13, check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_16, &check_hlds__delay_partial_inst__InstMap0_32);
    }
#line 228 "delay_partial_inst.m"
    {
#line 228 "delay_partial_inst.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__delay_partial_inst__ProcInfo0_13, &check_hlds__delay_partial_inst__Goal0_33);
    }
#line 230 "delay_partial_inst.m"
    {
#line 230 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__V_39_39 = mercury__map__init_0_f_0((MR_Word) &check_hlds__delay_partial_inst_scalar_common_1[0], (MR_Word) &check_hlds__delay_partial_inst_scalar_common_2[0]);
    }
#line 230 "delay_partial_inst.m"
    {
#line 230 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__delay_partial_inst_in_goal_7_p_0(check_hlds__delay_partial_inst__InstMap0_32, check_hlds__delay_partial_inst__Goal0_33, &check_hlds__delay_partial_inst__Goal_34, check_hlds__delay_partial_inst__V_39_39, &check_hlds__delay_partial_inst___ConstructMap_35, check_hlds__delay_partial_inst__DelayInfo0_31, &check_hlds__delay_partial_inst__DelayInfo_36);
    }
#line 233 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo_36, (MR_Integer) 0)));
#line 233 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo_36, (MR_Integer) 1)));
#line 233 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo_36, (MR_Integer) 2)));
#line 233 "delay_partial_inst.m"
    check_hlds__delay_partial_inst__Changed_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo_36, (MR_Integer) 3)));
#line 3546 "check_hlds.delay_partial_inst.c"
    if ((check_hlds__delay_partial_inst__Changed_37 == (MR_Integer) 0))
#line 3548 "check_hlds.delay_partial_inst.c"
      {
#line 216 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_17 = check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_16;
#line 216 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__STATE_VARIABLE_Changed_19 = check_hlds__delay_partial_inst__STATE_VARIABLE_Changed_0_18;
#line 3554 "check_hlds.delay_partial_inst.c"
      }
#line 3556 "check_hlds.delay_partial_inst.c"
    else
#line 3558 "check_hlds.delay_partial_inst.c"
      {
#line 3560 "check_hlds.delay_partial_inst.c"
        MR_Word check_hlds__delay_partial_inst__ProcInfo_15;
#line 3562 "check_hlds.delay_partial_inst.c"
        MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_19_40;
#line 3564 "check_hlds.delay_partial_inst.c"
        MR_Word check_hlds__delay_partial_inst__V_41_41;
#line 3566 "check_hlds.delay_partial_inst.c"
        MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_21_42;
#line 3568 "check_hlds.delay_partial_inst.c"
        MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_23_44;
#line 3570 "check_hlds.delay_partial_inst.c"
        MR_Word check_hlds__delay_partial_inst__V_53_53;
#line 237 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_52_52;
#line 237 "delay_partial_inst.m"
        MR_Word check_hlds__delay_partial_inst__V_54_54;

#line 236 "delay_partial_inst.m"
        {
#line 236 "delay_partial_inst.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__delay_partial_inst__Goal_34, check_hlds__delay_partial_inst__ProcInfo0_13, &check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_19_40);
        }
#line 237 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo_36, (MR_Integer) 0)));
#line 237 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo_36, (MR_Integer) 1)));
#line 237 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo_36, (MR_Integer) 2)));
#line 237 "delay_partial_inst.m"
        check_hlds__delay_partial_inst__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__DelayInfo_36, (MR_Integer) 3)));
#line 237 "delay_partial_inst.m"
        {
#line 237 "delay_partial_inst.m"
          hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__delay_partial_inst__V_41_41, check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_19_40, &check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_21_42);
        }
#line 238 "delay_partial_inst.m"
        {
#line 238 "delay_partial_inst.m"
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__delay_partial_inst__V_53_53, check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_21_42, &check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_23_44);
        }
#line 239 "delay_partial_inst.m"
        {
#line 239 "delay_partial_inst.m"
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, check_hlds__delay_partial_inst__STATE_VARIABLE_ProcInfo_23_44, &check_hlds__delay_partial_inst__ProcInfo_15);
        }
#line 212 "delay_partial_inst.m"
        {
#line 212 "delay_partial_inst.m"
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(check_hlds__delay_partial_inst__PredId_7, check_hlds__delay_partial_inst__ProcId_8, check_hlds__delay_partial_inst__PredInfo_12, check_hlds__delay_partial_inst__ProcInfo_15, check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_16, check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_17);
        }
#line 214 "delay_partial_inst.m"
        *check_hlds__delay_partial_inst__STATE_VARIABLE_Changed_19 = (MR_Integer) 1;
#line 3612 "check_hlds.delay_partial_inst.c"
      }
#line 202 "delay_partial_inst.m"
  }
#line 199 "delay_partial_inst.m"
}

#line 188 "delay_partial_inst.m"
static void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_preds_4_p_0_1(
#line 188 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__closure_arg,
#line 188 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_1,
#line 188 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_2,
#line 188 "delay_partial_inst.m"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_3,
#line 188 "delay_partial_inst.m"
  MR_Box check_hlds__delay_partial_inst__wrapper_arg_4,
#line 188 "delay_partial_inst.m"
  MR_Box * check_hlds__delay_partial_inst__wrapper_arg_5)
#line 188 "delay_partial_inst.m"
{
#line 188 "delay_partial_inst.m"
  {
#line 188 "delay_partial_inst.m"
    MR_Box check_hlds__delay_partial_inst__closure = check_hlds__delay_partial_inst__closure_arg;
#line 188 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__conv1_STATE_VARIABLE_ModuleInfo_17;
#line 188 "delay_partial_inst.m"
    MR_Word check_hlds__delay_partial_inst__conv0_STATE_VARIABLE_Changed_19;

#line 188 "delay_partial_inst.m"
    {
#line 188 "delay_partial_inst.m"
      check_hlds__delay_partial_inst__delay_partial_inst_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__closure, (MR_Integer) 3))), ((MR_Integer) check_hlds__delay_partial_inst__wrapper_arg_1), ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_2), &check_hlds__delay_partial_inst__conv1_STATE_VARIABLE_ModuleInfo_17, ((MR_Word) check_hlds__delay_partial_inst__wrapper_arg_4), &check_hlds__delay_partial_inst__conv0_STATE_VARIABLE_Changed_19);
    }
#line 188 "delay_partial_inst.m"
    *check_hlds__delay_partial_inst__wrapper_arg_3 = ((MR_Box) (check_hlds__delay_partial_inst__conv1_STATE_VARIABLE_ModuleInfo_17));
#line 188 "delay_partial_inst.m"
    *check_hlds__delay_partial_inst__wrapper_arg_5 = ((MR_Box) (check_hlds__delay_partial_inst__conv0_STATE_VARIABLE_Changed_19));
#line 188 "delay_partial_inst.m"
  }
#line 188 "delay_partial_inst.m"
}

#line 119 "delay_partial_inst.m"
void MR_CALL 
check_hlds__delay_partial_inst__delay_partial_inst_preds_4_p_0(
#line 119 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__HeadVar__1_1,
#line 119 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__HeadVar__2_2,
#line 119 "delay_partial_inst.m"
  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_3,
#line 119 "delay_partial_inst.m"
  MR_Word * check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_4)
#line 119 "delay_partial_inst.m"
{
#line 184 "delay_partial_inst.m"
  while (MR_TRUE)
#line 184 "delay_partial_inst.m"
    {
#line 184 "delay_partial_inst.m"
      /* tailcall optimized into a loop */
#line 184 "delay_partial_inst.m"
      {
#line 184 "delay_partial_inst.m"
        MR_bool check_hlds__delay_partial_inst__succeeded;

#line 184 "delay_partial_inst.m"
        if ((check_hlds__delay_partial_inst__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 184 "delay_partial_inst.m"
          {
#line 184 "delay_partial_inst.m"
            *check_hlds__delay_partial_inst__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 184 "delay_partial_inst.m"
            *check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_4 = check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_3;
#line 184 "delay_partial_inst.m"
          }
#line 184 "delay_partial_inst.m"
        else
#line 185 "delay_partial_inst.m"
          {
#line 185 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__1_1, (MR_Integer) 0)));
#line 185 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__PredIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_partial_inst__HeadVar__1_1, (MR_Integer) 1)));
#line 185 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__PredInfo_12;
#line 185 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__ProcIds_13;
#line 185 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__Changed_14;
#line 185 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__V_18_18;
#line 185 "delay_partial_inst.m"
            MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_19_19;
#line 188 "delay_partial_inst.m"
            MR_Box check_hlds__delay_partial_inst__conv3_STATE_VARIABLE_ModuleInfo_19_19;
#line 188 "delay_partial_inst.m"
            MR_Box check_hlds__delay_partial_inst__conv2_Changed_14;

#line 186 "delay_partial_inst.m"
            {
#line 186 "delay_partial_inst.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_3, check_hlds__delay_partial_inst__PredId_8, &check_hlds__delay_partial_inst__PredInfo_12);
            }
#line 187 "delay_partial_inst.m"
            {
#line 187 "delay_partial_inst.m"
              check_hlds__delay_partial_inst__ProcIds_13 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(check_hlds__delay_partial_inst__PredInfo_12);
            }
#line 188 "delay_partial_inst.m"
            {
#line 188 "delay_partial_inst.m"
              check_hlds__delay_partial_inst__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 188 "delay_partial_inst.m"
              MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_18_18, 0) = ((MR_Box) (&check_hlds__delay_partial_inst_scalar_common_3[0]));
#line 188 "delay_partial_inst.m"
              MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_18_18, 1) = ((MR_Box) (check_hlds__delay_partial_inst__delay_partial_inst_preds_4_p_0_1));
#line 188 "delay_partial_inst.m"
              MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 188 "delay_partial_inst.m"
              MR_hl_field(MR_mktag(0), check_hlds__delay_partial_inst__V_18_18, 3) = ((MR_Box) (check_hlds__delay_partial_inst__PredId_8));
#line 188 "delay_partial_inst.m"
            }
#line 188 "delay_partial_inst.m"
            {
#line 188 "delay_partial_inst.m"
              mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__delay_partial_inst__V_18_18, check_hlds__delay_partial_inst__ProcIds_13, ((MR_Box) (check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_3)), &check_hlds__delay_partial_inst__conv3_STATE_VARIABLE_ModuleInfo_19_19, ((MR_Box) ((MR_Integer) 0)), &check_hlds__delay_partial_inst__conv2_Changed_14);
            }
#line 188 "delay_partial_inst.m"
            check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_19_19 = ((MR_Word) check_hlds__delay_partial_inst__conv3_STATE_VARIABLE_ModuleInfo_19_19);
#line 188 "delay_partial_inst.m"
            check_hlds__delay_partial_inst__Changed_14 = ((MR_Word) check_hlds__delay_partial_inst__conv2_Changed_14);
#line 194 "delay_partial_inst.m"
            if ((check_hlds__delay_partial_inst__Changed_14 == (MR_Integer) 0))
#line 196 "delay_partial_inst.m"
              {
#line 196 "delay_partial_inst.m"
                /* direct tailcall eliminated */
#line 196 "delay_partial_inst.m"
                {
#line 196 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__HeadVar__1__tmp_copy_1 = check_hlds__delay_partial_inst__PredIds_9;
#line 196 "delay_partial_inst.m"
                  MR_Word check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3 = check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_19_19;

#line 196 "delay_partial_inst.m"
                  check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0_3 = check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_0__tmp_copy_3;
#line 196 "delay_partial_inst.m"
                  check_hlds__delay_partial_inst__HeadVar__1_1 = check_hlds__delay_partial_inst__HeadVar__1__tmp_copy_1;
#line 196 "delay_partial_inst.m"
                }
#line 196 "delay_partial_inst.m"
                continue;
#line 196 "delay_partial_inst.m"
              }
#line 194 "delay_partial_inst.m"
            else
#line 191 "delay_partial_inst.m"
              {
#line 191 "delay_partial_inst.m"
                MR_Word check_hlds__delay_partial_inst__ChangedPreds0_15;

#line 192 "delay_partial_inst.m"
                {
#line 192 "delay_partial_inst.m"
                  check_hlds__delay_partial_inst__delay_partial_inst_preds_4_p_0(check_hlds__delay_partial_inst__PredIds_9, &check_hlds__delay_partial_inst__ChangedPreds0_15, check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_19_19, check_hlds__delay_partial_inst__STATE_VARIABLE_ModuleInfo_4);
                }
#line 193 "delay_partial_inst.m"
                {
#line 193 "delay_partial_inst.m"
                  MR_Word base;
#line 193 "delay_partial_inst.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "delay_partial_inst.m"
                  *check_hlds__delay_partial_inst__HeadVar__2_2 = base;
#line 193 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__delay_partial_inst__PredId_8));
#line 193 "delay_partial_inst.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__delay_partial_inst__ChangedPreds0_15));
#line 193 "delay_partial_inst.m"
                }
#line 191 "delay_partial_inst.m"
              }
#line 185 "delay_partial_inst.m"
          }
#line 184 "delay_partial_inst.m"
      }
#line 184 "delay_partial_inst.m"
      break;
#line 184 "delay_partial_inst.m"
    }
#line 119 "delay_partial_inst.m"
}

void mercury__check_hlds__delay_partial_inst__init(void)
{
}

void mercury__check_hlds__delay_partial_inst__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__type_ctor_info_canon_vars_map_0);
	MR_register_type_ctor_info(&check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__type_ctor_info_construct_map_0);
	MR_register_type_ctor_info(&check_hlds__delay_partial_inst__check_hlds__delay_partial_inst__type_ctor_info_delay_partial_inst_info_0);
}

void mercury__check_hlds__delay_partial_inst__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.delay_partial_inst. */
